// Array - Take Array of Size n From User and Find Minimum and Maximun Elements of Array

#include<iostream>
#include<climits>
using namespace std;

int main() {

    int n;
    cout << "Enter n : ";
    cin >> n;

    cout << "Enter Array Elements : ";
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int MaxNum = INT_MIN; // Minimum Possible Integer Number 
    int MinNum = INT_MAX; // Maximum Possible Integer Number

    for(int i=0; i<n; i++){
        // if(arr[i] > MaxNum){
        //     MaxNum = arr[i];
        // }
        // if( arr[i] < MinNum){
        //     MinNum = arr[i];
        // }

        MaxNum = max(MaxNum, arr[i]); // max - Build-in Librery Function
        MinNum = min(MinNum, arr[i]); // min - Build-in Librery Function
    }

    cout << "Minimun Element is : " << MinNum << "\n"; 
    cout << "Maximum Element is : " << MaxNum << endl;

    return 0;
}