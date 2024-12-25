#include <iostream>
using namespace std;

int main() {
    char alpha;
    cout << "Enter alphabet : ";
    cin >> alpha;
    if (alpha >= 'a' && alpha <= 'z') {
        cout << "lower case\n";
    }else {
        cout << "Upper case\n";
    }
    return 0;
}