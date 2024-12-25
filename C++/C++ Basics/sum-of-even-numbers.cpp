

#include <iostream>
using namespace std;

// USING FOR LOOP

// int main() {
//     int sum = 0;
//     int num ;
//     cout << "Enter number to sum Even numbers : ";
//     cin >> num;
//     for (int i = 1; i <= num; i++) {
//         if (i % 2 == 0) {
//             sum = sum + i;
//         }
//     }
//     cout << "The sum of numbers is : " << sum << endl;
//     return 0;
// }

// USING WHILE LOOP

int main() {
    int sum = 0;
    int num = 5;
    int i = 1;
    while (i <= num) {
        if (i % 2 == 0) {
            sum = sum + i;
        }
    i++;
    }
    cout << "The sum is : " << sum << endl;
    return 0;
}