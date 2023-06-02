// Sorting in Array
// Sort Array in Assending Order - Using Bubble Sort

#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n : ";
    cin >> n;

    int arr[n];
    cout << "Enter Array Elements : ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int counter = 1;
    while(counter < n){
        for(int i=0; i<n-counter; i++){
            if(arr[i] > arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        counter++;
    }

    cout << "Sorted Array Using Bubble Sort is : ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}