//find maximum number by if - else from given three numbers and take number from user

#include<iostream>
using namespace std;

int main() {
    int A, B, C;
    cout << "Enter A, B and C : ";
    cin >> A >> B >> C;

    if (A>B){
        if(A>C){
            cout << "Maximum number is A : " << A << endl;
        } else {
            cout << "Maximum number is C : " << C << endl;
        }
    } 
    else {
        if (B>C){
            cout << "Maximum number is B : " << B << endl;
        } else {
            cout << "Maximum number is C : " << C << endl;
        }
    }
    return 0;
}