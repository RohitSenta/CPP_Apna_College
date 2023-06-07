// Subarray - Maximum Subarray Sum
// Find Subarray in an Array which has a Maximum Sum 
// We can complete this problem with 3 diffrent technic - as respect to Time Complexity
// It is done below and commented first 2 technic and its Time Complexty is more

#include<iostream>
#include<climits>
using namespace std;

int main(){
    
    // int n;
    // cout << "Enter n : ";
    // cin >> n;

    // int arr[n];
    // cout << "Enter Array Elements : ";
    // for(int i=0; i<n; i++){
    //     cin >> arr[i];
    // }

    // int maxSum = INT_MIN;
    // cout << "\n";
    // cout << "Subarrays of given array is : " << endl;
    // for(int i=0; i<n; i++){                              // completed by normally 3 loop works
    //     for(int j=i; j<n; j++){                          // time complexity is more - O(n3)    
    //         int sum = 0;
    //         for(int k=i; k<=j; k++){
    //             cout << arr[k] << " ";
    //             sum = sum + arr[k];
    //         }
    //         cout << "\n";
    //         maxSum = max(maxSum, sum);   
    //     }
    // }

    // cout << "\n";
    // cout << "Maximum Subarray Sum is : "<< maxSum << endl;



    // int n;
    // cout << "Enter n : ";
    // cin >> n;

    // int arr[n];
    // cout << "Enter Array Element : ";
    // for(int i=0; i<n; i++){
    //     cin >> arr[i];
    // }

    // int currSum[n+1];
    // currSum[0] = 0;

    // for(int i=1; i<=n; i++){
    //     currSum[i] = currSum[i-1] + arr[i-1];
    // }

    // int maxSum = INT_MIN;
                                                       
    // for(int i=1; i<=n; i++){                         // Commulative Sum Approach 
    //     int sum = 0;                                 // Completed by Normally 2 loop works
    //     for(int j=0; j<i; j++){                      // Time Complexity is still - O(n2)
    //         sum = currSum[i] - currSum[j];
    //         maxSum = max(sum, maxSum);
    //     }
    // }

    // cout << "Maximum Subarray Sum is : "<< maxSum << "\n";



    int n;
    cout << "Enter n : ";
    cin >> n;

    int arr[n];
    cout << "Enter Array Elements : ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int currntSum = 0;
    int maxSum = INT_MIN;

    for(int i=0; i<n; i++){                             // Kadane's Algoridhms
        currntSum = currntSum + arr[i];                 // Completed Only in Single Loop 
        if(currntSum < 0){                              // Time Complexity in this Algoridhms is Lesser than other - O(n)
            currntSum = 0;
        }
        maxSum = max(currntSum, maxSum);
    }

    cout << "Maximum Subarray Sum is : " << maxSum << endl;
    
    return 0;
}