// Loops - While-loop 
// Take input while number is positive

#include<iostream>
using namespace std;

int main(){
    int N;
    cout << "Enter Number N : ";
    cin >> N;

    while (N>0 && N<=10){
        cout << "Number is : " << N << endl;
        cout << "Enter Number N : ";
        cin >> N;
    }
    return 0;   
}
