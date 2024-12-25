#include <iostream>
using namespace std;

// Variables and DataTypes

// int main() {  
//     int age = 34;
//     float Pi = 3.14f;
//     char grade = 's';
//     bool deival = true;
//     double ruppe = 200.99;
//     cout << (age) << endl;
//     cout << (Pi) << endl;
//     cout << (grade) << endl;
//     cout << (deival) << endl;
//     cout << (ruppe) << endl;
//     return 0;
// }

// Type Conversion (implicit) 

// int main() {
//     char grade = 'A';
//     int value = grade;
//     cout << value << endl;
//     return 0;
// }

// Type Casting (Explicit)

// int main() {
//     double num = 211.33;
//     int res = (int)num;
//     cout << res << endl;
//     return 0;
// }

// Takig Input

// int main() {
//     int age;
//     cout << "Enter Your age: ";
//     cin >>age;
//     cout << "Your age is : " <<age<< endl;
//     return 0;
// }

//Arithmetic Operators

// int main() {
//     int a = 20, b = 10;
//     cout << "sum : " << (a + b) << endl;
//     cout << "Difference : " << (a - b) << endl;
//     cout << "Product : " << (a * b) << endl;
//     cout << "Division : " << (a / b) << endl;
//     cout << "Reminder : " << (a % b) << endl;
//     return 0;
// }

// Assignment Operators

// int main() {
//     int a = 76;
//     int b = 199;
//     cout << (a < b) << endl; // True
//     cout << (a <= b) << endl; // True
//     cout << (a > b) << endl; // False
//     cout << (a >= b) << endl; // False
//     cout << (a == b) << endl; // False
//     cout << (a != b) << endl; // True
//     return 0;
// }

// Logical Operator
// or (||) pipe
// and ($$) ampersant
// not (!) not

// int main() {
//     cout << !(3 == 3) << endl; // Using not operator
//     cout <<( (3 == 3) || (3 == 4) )<< endl; // Using or operator
//     cout <<( (3 == 3) && (4 == 4) )<< endl; // Using and operator
//     return 0;
// }

//  Unary Operators 
// (i)_increment
// (ii)_Decremet

int main() {
    int a = 10;
    // int b = a++; // Post increment
    int b = ++a; // Pre increment
    cout << b << endl; 
    cout << a << endl;

    return 0;
}
 
// in decrement the value of a will be 
// decremented by 1 and then assigned 
// to b. And we ude --a in it.
 