#include <iostream>
using namespace std;

int main() {
    int fact = 1;
    int n;
    cout << "Enter a number : ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        fact = fact*i;
    }
    cout << "Your factorial is : " << fact;
    return 0;
}

