/*
Author: Fabian Olmedo
Date: September 26, 2026
Project: Objects & Classes I
Purpose: Implement a BankAccount class to simulate basic banking operations for multiple accounts
*/
#include <iostream>
#include <vector>
#include <string>
#include <limits>
#include <iomanip>

using namespace std;

class BankAccount {
private:
    string accountNumber;
    string accountHolderName;
    double balance;

public:
    // Empty account w default values
    BankAccount() {
        accountNumber = "Unknown";
        accountHolderName = "Unknown";
        balance = 0.0;
    }

    // Creates an acc
    BankAccount(string number, string name, double initialBalance) {
        accountNumber = number;
        accountHolderName = name;
        balance = initialBalance;
    }

    // Get the account number
    string getAccountNumber() const {
        return accountNumber;
    }

    string getAccountHolderName() const {
        return accountHolderName;
    }

    // Gets the balance
    double getBalance() const {
        return balance;
    }

    // Get account holder name
    void setAccountHolderName(string name) {
        accountHolderName = name;
    }

    // Add money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful.\n";
        }
        else {
            cout << "Deposit amount must be greater than 0.\n";
        }
    }

    // Withdraw money
    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Withdrawal amount must be greater than 0.\n";
        }
        else if (amount > balance) {
            cout << "Insufficient funds.\n";
        }
        else {
            balance -= amount;
            cout << "Withdrawal successful.\n";
        }
    }
};