
#include <iostream>
using namespace std;

// int main() {
//     int sum = 0;
//     int num = 5;
//     for (int i = 1; i <= num; i++){
//     sum +=i;
//     }
//     cout << "The sum of N numbers is : "<< sum << endl;
//     return 0;
// }

// int main () {
//     int sum = 0;
//     int num;
//     cout << "Enter number : " ;
//     cin >> num;
//     int i = 1;
//     while (i <= num){
//         sum += i;
//         i++;
//     }
//     cout << "The sum of numbers is : " << sum;
//     return 0;
// }

int main() {
    int sum = 0;
    int num = 5;
    for (int i = 1; i <= num; i++) {
        if (i % 2 == 1) {
            sum = sum + i;
        }
    }
    cout << "The sum of numbers is : " << sum << endl;
    return 0;
}