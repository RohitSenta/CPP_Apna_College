// Check the given number n is Prime Number or Not.
// also print all prime numbers from a to b;
#include<iostream>
using namespace std;

int main() {
    // for check prime number
    int n;
    cout << "Enter Number n: ";
    cin >> n;
    int i;
    for(i=2; i<n; i++){
        if(n%i == 0){
            cout << "Given Number " << n << " is Not - Prime Number\n\n";
            break;
        }
    } 
    if(i == n){
        cout << "Given Number " << n << " is Prime Number\n\n";
    }

    // for print all prime numbers form a to b;

    int a, b;
    cout << "Enter number a: ";
    cin >> a;
    cout << "Enter number b: ";
    cin >> b;
    
    for(int num=a; num<=b; num++){
        int j;
        for(j=2; j<num; j++){
            if(num%j == 0){
                break;
            }
        }
        if(j==num){
            cout << num << endl; 
        }
    }
    return 0;
}
