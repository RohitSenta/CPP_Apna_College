// Print all the Prime NUmbers between 2 given numbers by using Functions

#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int num){
    for(int i=2; i<=sqrt(num); i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int a, b;
    cout << "Enter Numbers a and b : ";
    cin >> a >> b ;

    cout << "Prime NUmbers : \n";
    for(int i=a; i<=b; i++){
        if(isPrime(i)){
            cout << i << endl;
        }
    }

    return 0;
}