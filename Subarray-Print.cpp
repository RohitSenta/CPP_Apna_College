// Subarray in an Array
// Print all the subarrays in an array 

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;

    int arr[n];
    cout << "Enter Array Elements : ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    cout << "\n";
    cout << "Subarrays of given array is : " << endl;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            for(int k=i; k<=j; k++){
                cout << arr[k] << " "; 
            }
            cout << "\n";
        }
    }
    return 0;
}