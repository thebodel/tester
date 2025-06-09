# 📦 Installation & Setup

Ready to test your C programs with Python automation? Follow these steps to install and run this project on your local machine:

---

## 1. Clone the Repository

```bash
git clone https://github.com/thebodel/tester.git
cd tester
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
test_cases/scenar_X/inputY.txt
test_cases/scenar_X/outputY.txt
```

### Example:
```
test_cases/scenar_3/input1.txt
test_cases/scenar_3/output1.txt
```

---

## 4. Run the Project

```bash
make rub
```
