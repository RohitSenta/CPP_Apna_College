// Array Challenges
// Max till i - Given an Array a[] if size n. for every i from 0 to n-1 output max(a[0], a[1],...a[i]).

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

    int mx = -19999999;
    for(int i=0; i<n; i++){
        mx = max(mx, arr[i]);
        cout << mx << " "; 
    }

    return 0;
}