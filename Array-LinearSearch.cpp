// Array - Searching in Array - Linear Search
// Find key number in array and if key match with array element than return index number else return -1

#include<iostream>
using namespace std;

int linearsearch(int n, int arr[], int key){

    for(int i=0; i<n; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){

    int n;
    cout << "Enter n : ";
    cin >> n;

    int arr[n];
    cout << "Enter Array Elements : ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int key;
    cout << "Enter key Number : ";
    cin >> key;

    cout << linearsearch(n, arr, key) << "\n";

    // Time Complexity of Linear Search is = O(n) 

    return 0;
}