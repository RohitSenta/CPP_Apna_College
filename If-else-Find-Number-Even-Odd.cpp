// find given number id even or odd 

#include<iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter number: ";
    cin >> number;

    if(number%2 == 0){
        cout << "Given Number : " << number << " is Even!\n";
    } else {
        cout << "Given Number : " << number << " is Odd!\n";
    }
    
    return 0;
}