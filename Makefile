build:
	gcc main.c -o main

run: build
	python3 main.py