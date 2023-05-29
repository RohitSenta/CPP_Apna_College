// Reversing a Numbers

#include<iostream>
using namespace std;

int main() {
    int n; 
    cout << "Enter n : ";
    cin >> n;

    int revNum = 0;

    while(n > 0){
        int rem = n % 10;
        revNum = revNum * 10 + rem;
        n = n / 10;
    }
    cout << revNum << "\n";
    
    return 0;
}
