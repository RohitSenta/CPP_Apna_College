// Print first n terms of Fibonacci Series with starting with 0, 1

#include<iostream>
using namespace std;

int main() {
    int n; 
    cout << "Enter n : ";
    cin >> n;

    if(n == 1){
        cout << "0\n";
    }
    else if(n == 2){
        cout << "0 1\n";
    }
    else {
        int fab, a = 0, b = 1, i = 3;
        cout << a << " " << b << " ";
        while(i <= n){
            fab = a + b; 
            cout  << fab << " ";
            a = b;
            b = fab;
            i++;
        } 
    }
}