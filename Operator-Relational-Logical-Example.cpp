// Operator Relational - Logical

#include<iostream>
using namespace std;

int main() {
    // Relational Operator

    int n;
    cout << "Enter n : ";
    cin >> n;

    if(n > 10){
        cout << "n is more than 10\n";
    }
    else if(n < 10){
        cout << "n is less than 10\n";
    }
    else {
        cout << "n is equal to 10\n\n";
    }

    // Logical Operator 
    // write a program to output whether a number is divisible by both 2 and 3 or divisible by one only or divisible by none.

    int a;
    cout << "Enter a : ";
    cin >> a;

    if(a%2 == 0 && a%3 == 0){
        cout << "a is divisible by both 2 and 3 \n";
    } 
    else if(a%2 == 0){
        cout << "a is divisible by only 2 \n";
    }
    else if(a%3 == 0){
        cout << "a is divisible by only 3 \n";
    }
    else {
        cout << "a is divisible by none \n\n";
    }
    
    return 0;
}