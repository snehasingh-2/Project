#include <iostream>
using namespace std;
int main() {
    int n;
    bool flag = true;
    cout << "Enter number: ";
    cin >> n;
    // 0 and 1 are not prime numbers
    if (n == 0 || n == 1) {
        flag = false;
    }

    // loop to check if n is prime
    for (int i = 2; i <= n/2; ++i) {
        if (n % i == 0) {
            flag = false;
            break;
        }
    }

    if (flag)
        cout << n << " is a prime number";
    else
        cout << n << " is not a prime number";
    return 0;
}
