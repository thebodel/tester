# 📦 Installation & Setup

Ready to test your C programs with Python automation? Follow these steps to install and run this project on your local machine:

---

## 1. Clone the Repository

```bash
git clone https://github.com/ТВОЙ_НИК/ИМЯ_РЕПО.git
cd ИМЯ_РЕПО
```

---

## 2. Install Dependencies

Make sure you have the following installed:

- [Python 3.10+](https://www.python.org/)
- [GCC](https://gcc.gnu.org/)
- [Make (optional)](https://www.gnu.org/software/make/)

---

## 3. Prepare Your Files

Place your C source file named `main.c` in the project root.  
Test case files should be placed like this:

```
z1_testovacie_priklady/scenar_X/inputY.txt
z1_testovacie_priklady/scenar_X/outputY.txt
```

### Example:
```
z1_testovacie_priklady/scenar_3/input1.txt
z1_testovacie_priklady/scenar_3/output1.txt
```

---

## 4. Run the Project

```bash
python3 main.py
```

This script will:

- ✅ Compile your `main.c`
- 📥 Feed all inputs
- 📤 Compare the outputs with expected results
- 🟢 Print **passed** or 🔴 **failed**

