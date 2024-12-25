#include <iostream>
using namespace std;

int main () {
    int num;
    cout << "Enter your number : ";
    cin >> num;
    if (num % 2 == 0) {
        cout << "This is an even number.\n";
    }else {
        cout << "This is an odd number.\n";
    }
}