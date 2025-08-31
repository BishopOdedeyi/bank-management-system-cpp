# bank-management-system-cpp
A simple Bank Management System in C++ using only standard libraries. Supports account creation, balance inquiry, deposits, and withdrawals with file-based storage.



```markdown
# 🏦 Bank Management System (C++)

A simple **Bank Management System** built in **C++ (only std libraries)**.  
This project demonstrates file-based record keeping for bank accounts,  
supporting **account creation, search, deposit, and withdrawal** operations.

---

## ✨ Features
- Create new bank accounts with auto-generated account numbers
- Store customer details in a file (`customers.txt`)
- Search customer accounts by account number
- Deposit money and update account balance
- Withdraw money and update account balance
- Persistent storage using plain text files
- Implemented using only the C++ standard library

---

## 📂 Project Structure
```

.
├── CreateAccount.cpp   # Create a new account
├── SearchData.cpp      # Search for an account
├── Deposit.cpp         # Deposit money
├── Withdraw\.cpp        # Withdraw money
└── customers.txt       # File storage for account records (auto-created)

````

---

## 📦 Compilation & Usage

### Compile
Each program can be compiled separately:
```bash
g++ CreateAccount.cpp -o create
g++ SearchData.cpp -o search
g++ Deposit.cpp -o deposit
g++ Withdraw.cpp -o withdraw
````

### Run

```bash
./create   # Create a new account
./search   # Search account by account number
./deposit  # Deposit money into an account
./withdraw # Withdraw money from an account
```

---

## 🚀 Example Flow

### 1. Create an Account

```
$ ./create
Enter your first name: John
Enter your last name: Doe
Enter your phone number: 08012345678
Enter your BVN: 12345678901
Enter your email: john.doe@email.com
Enter your deposit amount: 5000
Welcome John
    Account Number: 123456789
```

The account is stored in `customers.txt`.

---

### 2. Search for an Account

```
$ ./search
Enter your account number: 123456789
Hello John
    Account Number: 123456789
    Email: john.doe@email.com
    Balance: 5000
```

---

### 3. Deposit Money

```
$ ./deposit
Enter your account number: 123456789
Enter your deposit amount: 2000
Former balance: 5000
New balance: 7000
```

---

### 4. Withdraw Money

```
$ ./withdraw
Enter your account number: 123456789
Enter your withdrawal amount: 1000
Former balance: 7000
New balance: 6000
```

---

## 🛠 Requirements

* Any **C++ compiler** (GCC, Clang, MSVC)
* No external libraries required (only `<iostream>`, `<fstream>`, `<ctime>`, `<cstdlib>`)

---

## 📜 License

MIT License – feel free to use, modify, and share.

---

## 💡 Future Improvements

* Add PIN/password security for accounts
* Handle invalid withdrawals (e.g., insufficient funds)
* Add transaction history
* Create a unified menu-driven interface instead of separate programs
