#include <iostream>
using namespace std;

// int main() {
//     int n = 4;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < i+1; j++) {
//             cout << i+1;
//         }
//         cout << endl;
//     }
//     return 0;
// }

int main () {
    int n = 4;
    char ch = 'A';
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i+1; j++) {
            cout << ch;
            
        }
        ch = ch+1;
        cout << endl;
    }
   
}