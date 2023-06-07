// Array Question
// Subarray With Given Sum - Google / Facebook / Amazon / Visa
// Given an unsorted array A of size N of non-nagative integers, find continues subarray which adds to a given number S.

#include<iostream>
using namespace std;

int main(){
    int n, s;
    cout << "Enter n : ";
    cin >> n;
    cout << "Enter s : ";
    cin >> s;

    int a[n];
    cout << "Enter Array Elements : ";
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int i=0, j=0, st=-1, en=-1, sum=0;

    while(j>n && sum+a[j] <= s){
        sum = sum+a[j];
        j++;
    } 

    if(sum == s){
        cout << i+1 << " " << j << endl;
        return 0;
    }

    while(j<n){
        sum = sum+a[j];
        while(sum > s){
            sum = sum-a[i];
            i++;
        }

        if(sum == s){
            st = i+1;
            en = j+1;
            break;
        }
        j++;
    }

    cout << st << " " << en << endl;

    return 0;
}