// Subarray - Maximum Circuler Subarray Sum


#include<iostream>
#include<climits>
using namespace std;

int kadane(int arr[], int n){       // For NonWrap Array Sum
    int currentSum = 0;
    int maxSum = INT_MIN;

    for(int i=0; i<n; i++){
        currentSum = currentSum + arr[i];
        if(currentSum < 0){
            currentSum = 0;
        } 
        maxSum = max(currentSum, maxSum);
    }
    return maxSum;
}

int main() {
    int n;
    cout << "Enter n : ";
    cin >> n;

    int arr[n];
    cout << "Enter Array Elements : ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int wrapSum;
    int nonwrapSum;

    nonwrapSum = kadane(arr, n);        //  For NonWrap Array Sum

    // For Wrap Array Sum
    int totalSum = 0;
    for (int i=0; i<n; i++){
        totalSum = totalSum + arr[i]; 
        arr[i] = -arr[n];
    }

    wrapSum = totalSum + kadane(arr, n);

    cout << "Maximum Circuler Subarray Sum is : " << max(wrapSum, nonwrapSum) << endl;

    return 0;
}