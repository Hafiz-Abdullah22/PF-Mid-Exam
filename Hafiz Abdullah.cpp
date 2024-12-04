#include <iostream>
using namespace std;

int main() {
    int choice, balance = 1000, amount;

    do {
        cout << "\nATM Menu:\n";
        cout << "1: Check Balance\n";
        cout << "2: Withdraw Money\n";
        cout << "3: Deposit Money\n";
        cout << "4: Exit\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Your current balance is: $" << balance << endl;
                break;

            case 2:
                cout << "Enter amount to withdraw: $";
                cin >> amount;
                if (amount > balance) {
                    cout << "Insufficient funds! Withdrawal amount exceeds balance.\n";
                } else if (amount <= 0) {
                    cout << "Invalid withdrawal amount.\n";
                } else {
                    balance -= amount;
                    cout << "You have withdrawn $" << amount << ". Your new balance is: $" << balance << endl;
                }
                break;

            case 3:
                cout << "Enter amount to deposit: $";
                cin >> amount;
                if (amount <= 0) {
                    cout << "Invalid deposit amount.\n";
                } else {
                    balance += amount;
                    cout << "You have deposited $" << amount << ". Your new balance is: $" << balance << endl;
                }
                break;

            case 4:
                cout << "Exiting... Thank you for using our ATM.\n";
                break;

            default:
                cout << "Invalid choice, please try again.\n";
        }

    } while (choice != 4); 

    return 0;
}

