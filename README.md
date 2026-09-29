# BankAccount Class

A C++ class for representing and managing a bank account.

## Data Dictionary

| Attribute | Data Type | Description |
|-----------|-----------|-------------|
| `accountNumber` | `std::string` | Stores the account's unique account number. |
| `accountHolderName` | `std::string` | Stores the name of the person who owns the account. |
| `balance` | `double` | Stores the current amount of money in the account. |

## Methods List

| Method Signature | Return Type | Description |
|------------------|-------------|-------------|
| `BankAccount()` | Constructor | Creates a default bank account. |
| `BankAccount(number, name, initialBalance)` | Constructor | Creates a bank account using the provided information. |
| `getAccountNumber() const` | `std::string` | Returns the account number. |
| `getAccountHolderName() const` | `std::string` | Returns the account holder's name. |
| `getBalance() const` | `double` | Returns the current account balance. |
| `setAccountHolderName(name)` | `void` | Changes the account holder's name. |
| `deposit(amount)` | `void` | Adds money to the account balance. |
| `withdraw(amount)` | `void` | Removes money from the account if sufficient funds are available. |

## Program Description

The Bank Account Management System allows the user to create and manage multiple bank accounts. The program uses a `std::vector` to store `BankAccount` objects.

The menu allows the user to create accounts, display account information, deposit money, withdraw money, and change an account holder's name.

The program also validates user input and prevents deposits or withdrawals using invalid amounts.
