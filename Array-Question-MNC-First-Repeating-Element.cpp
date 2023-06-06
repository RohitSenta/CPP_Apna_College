// Array Question Asked in Top-MNC's - AMAZON/ORACLE
// Given an arr[] of size N. the task is to find the first repeating element in array of integers, 
// i.e., an element that occurs more than once and whose index of first occurence is smallest.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    // cout << "Enter n : ";
    cin >> n;

    int arr[n];
    // cout << "Enter Array Elements : ";
    for (int i=0; i<n; i++){ 
        cin >> arr[i];
    }

    const int N = 1e5+2;
    int idx[N];
    for(int i=0; i<N; i++){
        idx[i] = -1;
    }

    int minidx = INT_MAX;
    for(int i=0; i<n; i++){
        if(idx[arr[i]] != -1){
            minidx = min(minidx, idx[arr[i]]);
        }
        else{
            idx[arr[i]] = i;
        }
    }

    if(minidx == INT_MAX){
        cout << "-1" << endl;
    }
    else{
        cout << minidx+1 << endl; 
    }
     
    return 0;
}
