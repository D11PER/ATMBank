

---

# 🏦 ATM Banking System (C++)

## 📌 Overview
This project is a simple **ATM Banking System** implemented in **C++** using **Object-Oriented Programming (OOP)** principles.  
It simulates basic ATM functionalities such as account management, deposits, withdrawals, and balance checks.

---

## ✨ Features
- 🔹 Show all accounts  
- 🔹 Show individual account info  
- 🔹 Check account balance  
- 🔹 Deposit money  
- 🔹 Withdraw money  
- 🔹 Add new accounts dynamically  
- 🔹 Delete existing accounts  
- 🔹 User-friendly console menu  

---

## 🛠️ Class Structure
### `ATMBank` Class
- **Private fields:**
  - `string name` → Account holder’s name  
  - `double balance` → Account balance  
  - `int numcard` → Card number  

- **Methods:**
  - `balanceCheck()` → Displays balance  
  - `showAccountInfo()` → Shows account details  
  - `deposit(amount)` → Adds money to balance  
  - `withdraw(amount)` → Deducts money if sufficient funds  
  - `addAccount(name, balance, numcard)` → Adds new account  
  - `delleteAccount(name, balance, numcard)` → Deletes account  

---

## 📋 Example Accounts
Program starts with 4 predefined accounts:
```cpp
{"John", 1000.0, 12345},
{"Mary", 2000.0, 54321},
{"Bob",  500.0,  67890},
{"Denis",3000.0, 65768}
```

---

## 🎮 Menu Options
```
=====================================
              ATM MENU               
=====================================
 [1]  Show All Accounts
 [2]  Show Account Info
 [3]  Check Balance
 [4]  Deposit Money
 [5]  Withdraw Money
 [6]  Add Account
 [7]  Delete Account
 [0]  Exit
=====================================
 Enter your choice: 
```

---

## 🚀 How to Run
1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/ATM-Banking-System.git
   ```
2. Compile the program:
   ```bash
   g++ atm.cpp -o atm
   ```
3. Run the executable:
   ```bash
   ./atm
   ```

---

## 📌 Notes
- Supports up to **100 accounts** (`MAX_ACCOUNTS`).  
- Uses **arrays** instead of STL containers for simplicity.  
- Designed for **educational purposes** to practice C++ OOP and console applications.  

---
