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

// Gets a valid integer from the user
int getInteger() {
    int value;

    while (!(cin >> value)) {
        cout << "Invalid input. Please enter a number: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    return value;
}

// Gets a valid positive amount from the user
double getAmount() {
    double amount;

    while (!(cin >> amount) || amount <= 0) {
        cout << "Invalid amount. Enter a value greater than 0: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    return amount;
}

// Displays all accounts
void displayAccounts(const vector<BankAccount>& accounts) {
    if (accounts.empty()) {
        cout << "No accounts available.\n";
        return;
    }

    cout << fixed << setprecision(2);

    for (size_t i = 0; i < accounts.size(); ++i) {
        cout << "\nAccount " << i + 1 << endl;
        cout << "Account Number: " << accounts[i].getAccountNumber() << endl;
        cout << "Account Holder: " << accounts[i].getAccountHolderName() << endl;
        cout << "Balance: $" << accounts[i].getBalance() << endl;
    }
}