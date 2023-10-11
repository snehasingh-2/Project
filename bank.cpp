#include<iostream>
#include<string.h>
using namespace std;
class BankAccount
{
    private:
        static int count;
        int AccNo;
        char AccName[20];
        mutable float CurBalance;
    public:
        BankAccount();
        BankAccount(const char name[], int accnum, int bal);
        void deposit() const;
        void withdraw() const;
        void displayAccountDetails() const;
        static  void noofaccounts() 
        { 
            cout<<"no of accounts created yet "<<count<<endl; 
        } 
};
int BankAccount::count;
BankAccount::BankAccount()
{
    count++;
}
BankAccount::BankAccount(const char name[], int accnum, int bal)
{
    strcpy(AccName, name);
    AccNo = accnum;
    CurBalance = bal;
    count++;
}
void BankAccount::deposit() const
{
    int depositAmt;
    cout<<"Enter the amount you want to deposit : ";
    cin>>depositAmt;
    CurBalance = CurBalance+depositAmt;
}
void BankAccount::withdraw() const
{
    int withdrawAmt;
    cout<<"Enter the amount you want to withdraw : ";
    cin>>withdrawAmt;
    CurBalance = CurBalance-withdrawAmt;
    cout<<endl;
}
void BankAccount::displayAccountDetails() const
{
    cout << "Account Number: " << AccNo << endl;
    cout << "Account Holder: " << AccName << endl;
    cout << "Current Balance: " << CurBalance << endl;
}

int main()
{
    int accnum, bal;
    char name[20];
    cout<<"Enter your name : ";
    cin.getline(name, 20);
    cout<<"Enter your account number : ";
    cin>>accnum;
    cout<<"Enter your current balance : ";
    cin>>bal;
    cout<<endl;
    BankAccount b;
    const BankAccount b1(name, accnum, bal);
    b1.deposit();
    b1.withdraw();
    b1.displayAccountDetails();
    BankAccount::noofaccounts();
}