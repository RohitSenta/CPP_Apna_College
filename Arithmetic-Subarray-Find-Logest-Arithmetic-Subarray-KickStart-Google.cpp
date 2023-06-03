// Arithmatic Subarray
// Find Length Of Logest Arithmatic Subarray Form Given Array
// Kick Start - Google

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

    int ans = 2;
    int pd = arr[1] - arr[0];
    int j = 2;
    int current = 2;

    while(j < n){
        if(pd == arr[j]-arr[j-1]){
            current++;
        }
        else{
            pd = arr[j]-arr[j-1];
            current = 2;
        }
        ans = max(ans, current);
        j++;
    }
    cout << "Length of Logest Arithmatic Subarray is : " << ans << endl;

    return 0;
}