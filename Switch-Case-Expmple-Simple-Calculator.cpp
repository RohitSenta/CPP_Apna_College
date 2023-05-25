//switch case statement example 
// implement a simple calculator using switch

#include<iostream>
using namespace std;

int main() {
    float num1, num2;
    cout << "Enter numbers 1 : ";
    cin >> num1;
    cout << "Enter numbers 2 : ";
    cin >> num2;

    char oprtr;
    cout << "Enter operator : ";
    cin >> oprtr;

    switch (oprtr){
        case '+':
            cout << "Addition : " << num1+num2 << "\n";
            break;
        case '-':
            cout << "Subtraction : " << num1-num2 << "\n";
            break;
        case '*':
            cout << "Multiplication : " << num1*num2 << "\n";
            break;
        case '/':
            cout << "Division : " << num1/num2 << "\n";
            break;
        default:
            cout << "Enter another operator" << "\n";
            break;
    }

    return 0;
}