// Subarray - Pair Sum Problem
// Check if there exists two elements in an array such that their sum is equal to given number k.
// We can do this problem by 2 technic.
// Here We Will Do With The Sorted Array / If Array Is not Sorted than Sort it first and than go on..


#include<iostream>
#include<climits>
using namespace std;

// bool pairSum(int arr[], int n, int k){
   
//     for(int i=0; i<n-1; i++){
//         for(int j=i+1; j<n; j++){                // Time Complexity is still high = O(n2);
//             if(arr[i] + arr[j] == k){            // In Case of Sorted Order of Array
//                 cout << i << " " << j << endl;
//                 return true;
//             }
//         }
//     }
//     return false;
// }


bool pairSum(int arr[], int n, int k){

    int low = 0;
    int high = n-1;

    while(low < high){                              // Now Time Complexity is Lowest = O(n);    
        if(arr[low] + arr[high] == k){              // In Case of Sorted Order Of Array
            cout << low << " " << high << endl;
            return true;
        }
        else if(arr[low] + arr[high] > k){
            high--;
        }
        else if(arr[low] + arr[high] < k){
            low++;
        }
    }
    return false;
}

int main(){

    int n;
    cout << "Enter n : ";
    cin >> n;

    int arr[n];
    // int arr[] = {2, 4, 7, 11, 14, 16, 20, 21};   
    
    // Array is sorted in this problem 
    // If array is not sorted than first Sort the Array
    // So Time Complexity is Increase as per Sorting loop.
    
    cout << "Enter Array Elements : ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int k = 31;

    cout << pairSum(arr, n ,k) << endl; 

    return 0;
}