#include <iostream>
using namespace std;

class Bank {
protected:
    string holderName;
    int accNum;
    int balance;

public:
    void getData() {
        cout << "======================================" << endl;
        cout << "Welcome To Bank Management System" << endl;
        cout << "======================================" << endl << endl;
        
        cout << "Enter Holder Name: ";
        cin >> holderName;
        
        cout << "Enter Account Number: ";
        cin >> accNum;

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }
};

class SavingAccount : public Bank {
private:
    double interestRate;
    double interest;

public:
    void getInter() {
        cout << "Enter Interest Rate: ";
        cin >> interestRate;
    }

    void calInter() {
        interest = balance * (interestRate / 100);
    }
    
    void displayData() {
        cout << "======================================" << endl;
        cout << "Welcome To Bank Management System" << endl;
        cout << "======================================" << endl << endl;
        cout << "Holder Name: " << holderName << endl;
        cout << "Account Number: " << accNum << endl;
        cout << "Balance: " << balance << endl;
        cout << "Interest Rate: " << interestRate << "%" << endl;
        cout << "Interest: " << interest << endl;
        cout << "======================================" << endl;
        cout << "Developer: Muhammad Saad" << endl;
        cout << "======================================" << endl << endl;
    }
};

int main() {
    SavingAccount account;
    account.getData();
    account.getInter();
    account.calInter();
    account.displayData();
    return 0;
}
