# 🎓 University Program Info System

A C program that shows tuition fee, credits, admission, and lab fee details for undergraduate programs at three top universities in Bangladesh:

- **East West University (EWU)**
- **North South University (NSU)**
- **BRAC University (BRACU)**

## 🚀 Features

- Terminal-based interactive interface
- Choose your university and department
- View department-specific:
  - 📘 Total Tuition Fee
  - 🎯 Credit Hours
  - 🧾 Admission Fee
  - 🧪 Lab Fee
  - 💰 Total Estimated Cost (EWU only)
- Custom tuition calculations for NSU and BRAC

---

## 🏫 University Programs Covered

### 🏛️ East West University
- 15 departments (e.g., CSE, EEE, BBA, Law, Pharmacy, etc.)
- Static dataset with tuition, lab, admission, and total cost

### 🏛️ North South University
- 24 departments (CSE, BBA variations, Law, Biotech, etc.)
- Tuition = Total Credits × **6500 BDT**

### 🏛️ BRAC University
- 18 departments (e.g., CSE, English, EEE, Microbiology)
- Tuition = Total Credits × **8250 BDT**
- LLB = Total Credits × **8800 BDT**

---

## 🛠️ How to Compile & Run

### Compile using GCC:
```bash
gcc main.c -o university-info
./university-info
