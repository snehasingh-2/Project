#include<iostream>
using namespace std; 
int main()   // entry point of program
{
    int n, rev=0; //declare variable 
    cout<<"Enter number : ";
    cin>>n;  //to take input from user
    int original = n; //to copy number in original variable
    while(n!=0)  //loop condition  
    {
        int last_digit = n % 10; //to get last digit
        rev = rev*10 + last_digit; //to calculate reverse
        n = n/10;  //to remove last digit
    }
    if(rev == original)  //condition for palindrome number
        cout<<"Palindrome Number";
    else
        cout<<"Not Palindrome Number";
    return 0;
}