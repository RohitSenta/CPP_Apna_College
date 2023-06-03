// Sub Array
// Given array arr[] of size n, output sum of each subarray of the given array.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements : ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int sum = 0;
    for(int i=0; i<n; i++){
        sum = 0;
        for(int j=i; j<n; j++){
            sum = sum + arr[j];
            cout << sum << " ";
        }
        cout << "\n";
    }

    return 0;
}