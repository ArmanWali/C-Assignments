#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string accountHolder;
    double balance;

public:
    // Constructor
    BankAccount(int accNum, string accHolder, double bal = 0.0) 
        : accountNumber(accNum), accountHolder(accHolder), balance(bal) {}

    // Destructor
    ~BankAccount() {
        cout << "Account " << accountNumber << " belonging to " << accountHolder << " is being destroyed." << endl;
    }

    // Display Function
    void display() const {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: $" << balance << endl;
    }

    // Friend function for transferring funds
    friend void transferFunds(BankAccount &fromAccount, BankAccount &toAccount, double amount);
};

// Friend function definition
void transferFunds(BankAccount &fromAccount, BankAccount &toAccount, double amount) {
    if (amount > fromAccount.balance) {
        cout << "Insufficient funds in account " << fromAccount.accountNumber << " for transfer." << endl;
    } else {
        fromAccount.balance -= amount;
        toAccount.balance += amount;
        cout << "Transferred $" << amount << " from account " << fromAccount.accountNumber << " to account " << toAccount.accountNumber << "." << endl;
    }
}

int main() {
    // Creating two BankAccount objects
    BankAccount acc1(1001, "Arman Wali", 500.0);
    BankAccount acc2(1002, "Example user", 300.0);
    int choice;
    cout << "For Arman Wali 1" << endl;
    cout << "For Example User 2" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    switch(choice){
        case 1:

    // Displaying initial account details
    cout << "Initial Account Details:" << endl;
    acc1.display();
    cout << "Attempting to transfer $200 from acc1 to acc2." << endl;
    transferFunds(acc1, acc2, 200.0);
    cout << "Updated Account Details:" << endl;
    acc1.display();
    break;
    case 2:
    cout << "Initial Account Details:" << endl;
    acc2.display();
    cout << "Attempting to transfer $200 from acc1 to acc2." << endl;
    transferFunds(acc2, acc1, 200.0);
    cout << "Updated Account Details:" << endl;
    acc1.display();
    break;
    default:
    cout << "Wrong input: ";

    }
    // Displaying final account details
    cout << "\nFinal Account Details:" << endl;
    acc1.display();
    acc2.display();

    return 0;
}