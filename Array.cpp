// Array in CPP
// syntex or initialisation mathods

#include<iostream>
using namespace std;
 
int main(){

    // Method 1
    int array1[4];
    array1[0] = 10;
    array1[1] = 20;
    array1[2] = 30;
    array1[3] = 40;
    cout << array1[2] << " " << array1[0] << endl;

    // Method 2
    int array2[4] = {11, 22, 33, 44};
    cout << array2[1] << " " << array2[3] << "\n";

    // Method 3
    int n;
    cout << "Enter n : ";
    cin >> n;
    int array3[n];
    cout << "Enter array elements : ";
    // input
    for(int i=0; i<n; i++){
        cin >> array3[i];
    } 
    //output
    for(int i=0; i<n; i++){
        cout << array3[i] << " ";
    }

    return 0;
}