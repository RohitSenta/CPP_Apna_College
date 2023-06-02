// Sorting in Array 
// Sort Array in Assending Order - Using Selection Sort 

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

    for(int i=0; i<n-1;i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    cout << "Sorted Array Using Selection Sort is : ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
