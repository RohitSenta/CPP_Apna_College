// Array Question
// Smallest Positive Missing Number - Amazon / Accolite / Samsumg / Snapdeal
// You are given an array arr[] of N intgers including 0. the task is to find the smallest positive number missing from the array

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;

    int a[n];
    cout << "Enter Array Elements : ";
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    const int N = 10e5+2;
    bool check[N];
    for(int i=0; i<N; i++){
        check[i] = false;
    }

    for(int i=0; i<n; i++){
        if(a[i] >= 0){
            check[a[i]] = true;
        }
    }

    int ans = -1;

    for(int i=1; i<N; i++){
        if(check[i] == false){
            ans = i;
            break;
        }
    }

    cout << ans << endl;

    return 0;
}