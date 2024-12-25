#include <iostream>
using namespace std;

int main () {
    int age;
    cout << "Enter your age : ";
    cin >> age;
    if (age >= 18) {
        cout << "you are eligibal to drive" << endl;
    }else {
        cout << "you cant drive" << endl;
    }
    return 0;
}