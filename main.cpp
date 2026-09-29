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