
#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int n;
    cout << "Enter a number : ";
    cin >> n;
    for (int i = 1; i <= n; i++)   {
        bool isDivisible = true;
        if (i % 3 == 0) {
            sum = sum + i;
        }
    }
    cout << "your sum is : " << sum << endl;
    return 0;
}