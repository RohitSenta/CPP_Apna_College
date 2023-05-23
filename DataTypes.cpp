#include <iostream>         // header file 
using namespace std;        // namespace standard library

int main(){                 // main function

    int a;                                          // integer data type declared
    a = 45;                                         // value asinged to integer variable
    cout << "Int value of a is : " << a <<"\n";     // print value of a
 
    float b;                                        // float data type declared
    b = 3.14;                                       // value asinged to float variable
    cout << "Float value of b is : " << b <<"\n";   // print value of b

    char ch;                                        // character data type declared      
    ch = 'R';                                       // value asinged to char variable 
    cout << "Char value of ch is : " << ch << endl; // print value of ch

    bool bl;                                        // bool data type declared
    bl = 1;                                         // value asinged to bool varible 
    cout << "bool value of bl is : " << bl << endl; // print value of bl


    cout << "size of int data type is : " << sizeof(a) << "\n";     // size of integer data type

    cout << "size of float data type is : " << sizeof(b) << "\n";   // size of float data type

    cout << "size of character data type is : " << sizeof(ch) << endl;  // size of character data type 

    cout << "size of bool data type is : " << sizeof(bl) << endl;   // size of bool data type 

    short int si;       // declared short int data type 
    long int li;        // declared long int data type

    cout << "size of short int data type is : " << sizeof(si) << "\n";  // size of short int data type

    cout << "size of long int data type is : " << sizeof(li) << endl;   // size of long int data type

    return 0;
}