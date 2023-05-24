//Loop - Do-While-Loop
//Take Input Numbers Untill Number is Nagative

#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Number n : ";
    cin >> n;

    do{
        cout << "Number is : " << n << endl;
        cout << "Enter Number n : ";
        cin >> n;
    } while (n > 0);
    
    return 0;
}