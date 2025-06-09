import difflib
import subprocess
import glob
import re

def sort_key(path,mode):
    scenar_match = re.search(r'scenar_(\d+)', path)
    scenar_num = int(scenar_match.group(1)) if scenar_match else 9999
    input_match = re.search(fr'{mode}(\d+)', path)
    input_num = int(input_match.group(1)) if input_match else 9999
    return (scenar_num, input_num)
input_files = sorted(
    glob.glob('z1_testovacie_priklady/**/input*.txt', recursive=True),
    key=lambda path: sort_key(path, 'input')
)
output_files = sorted(
    glob.glob('z1_testovacie_priklady/**/output*.txt', recursive=True),
    key=lambda path: sort_key(path, 'output')
)
input = []
output_right = []
for i in range(len(input_files)):
    with open(input_files[i], 'r', encoding='utf-8') as f:
       content = f.read()
       input.append(content)
    with open(output_files[i], 'r', encoding='utf-8') as f:
       content = f.read()
       output_right.append(content)
out=[]
def comapre(out,out_right,test):
    if out.strip() == out_right.strip():
        print(f"{test} passed")
    else:
        diff = difflib.ndiff(out_right, out)
        print(''.join(diff))

def compile_and_run(input_f):
    c_file='main.c'
    exe_name = c_file.replace('.c', '')
    subprocess.run(['gcc', c_file, '-o', exe_name], check=True)
    result = subprocess.run(['./main'], input=input_f.encode(), capture_output=True, check=True)
    out.append(result.stdout.decode())

for i in range(len(input)):
 compile_and_run(input[i])
 comapre(out[i],output_right[i],input_files[i])
