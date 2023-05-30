// Create a function to add 2 integers numbers and also print that numbers

#include<iostream>
using namespace std;

//function for print individual number 
void printNum(int num){
    cout << "Number is : " << num << "\n";
    return;
}

//function for add two numbers
int addNum(int num1, int num2){
    printNum(num1);
    printNum(num2);
    int sum = num1 + num2;
    return sum;
}

//function for print sum of two numbers
int main(){
    int a = 5;
    int b = 40;
    cout << "Sum of two numbers : " << addNum(a, b) << endl;
    return 0;
}