
#include <iostream>
using namespace std;

int main () {
    int num;
    cout << "Enter the number : ";
    cin >> num;
    bool isPrime = true;
    for (int i = 2; i <= num-1; i++) {
        if (num % i == 0){
            isPrime = false;
        }
    }
    if (isPrime == true) {
        cout << "This is a prime number.";
    }else {
        cout << "This is not a prime number.";
    }
    return 0;
}