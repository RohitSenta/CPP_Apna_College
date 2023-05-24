// Loops - For-Loop 
// print sum of n numbers that given by user.

#include<iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter number n : ";
    cin >> n;
    int sum = 0;

    for(int i=1; i<=n; i++){
        sum = sum + i;
    }
    cout << "sum of number " << n << " is : " << sum;
    return 0;
}