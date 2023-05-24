//Break and Continue statement example
// print the number form 1 tp 100 and skip numbers that divisible of 3

#include<iostream>
using namespace std;

int main() {

    for(int i=1; i<=100; i++){
        if(i%3 == 0){
            continue;
        }
        cout << i << "\t";
    }
    return 0;
}