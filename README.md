# INVESTMENT-ACCOUNT

# 💰 Investment Account Management System (C++)

A console-based banking application that simulates investment account operations with profit calculation and transaction tracking.

## Key Features
- 💵 **Deposit/Withdraw Funds** with balance validation
- 📈 **Automatic Profit Calculation** (4.5% default rate)
- 🔢 **Transaction History** tracking
- 📊 **Account Statistics** (balance, profit, transaction count)
- 🔄 **Interactive Menu System**

## Technical Implementation
```cpp
class investmentaccount {
    double balance;
    double profit;
    double profitrate; 
    int transactions;
    int count;
    // ... (member functions)
};
