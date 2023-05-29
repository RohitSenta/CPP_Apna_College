// Factorial of Number n

#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n : ";
    cin >> n;

    int fact = 1;

    for(int i=1; i<=n; i++){
        fact = fact * i;
    }

    cout << "Factorial of Number " << n << " is : " << fact << "\n";

    return 0;
}