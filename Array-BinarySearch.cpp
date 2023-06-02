// Array - Searching in Array - Binary Search
// Find key number in Array and Array Elements should be in Shorted Order/Increasing Order

#include<iostream>
using namespace std;

int binarySearch(int n, int arr[], int key){

    int s = 0;
    int e = n;

    while(s<=e){
        int mid = (s+e)/2;

        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] > key){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return -1;
}

int main(){

    int n;
    cout << "Enter n : ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements : ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int key;
    cout << "Enter key number : ";
    cin >> key;

    cout << binarySearch(n, arr, key) << endl;
     
    // Time Complexity of Binary Search is = O(log2n)
    // Time Complexity of Binary Search is Less than Linear Search
    // That's why Binary Search algorithms is Batter than Linear Search algorithms

    return 0;
}