// Cheching if a Given Number is a Armstrong Number

#include<iostream>
using namespace std;

int main(){
    int number;
    cout << "Enter n : ";
    cin >> number;
    
    int temp, digit, rem;
    int sum = 0;
    while(number != 0){
        number = number / 10;
        digit++;
    }
    
    temp = number;
    while(number > 0){
        rem = number % 10;
        sum = sum + (rem*digit);
        number = number / 10;
    }
    
    if(temp == sum){
        cout << "Given Number is Armstromg Number\n";
    }
    else{
        cout << "Given Number is Not Armstrong Number\n";
    }

    return 0;
}