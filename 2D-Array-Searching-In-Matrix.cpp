// 2D Array Searching an Element in Array

#include<iostream>
using namespace std;

int main(){
    int n, m;
    cout << "Enter rows and colomns : ";
    cin >> n >> m;
    int k = 8;
    bool flag = false;

    int arr[n][m];
    // Array Input
    cout << "Enter Array Elements : \n";
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }

    // Searching an Element in Array
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j] == k){
                cout << "Location of Element is : " << i << " " << j << "\n"; 
                flag = true;
            }
        }
    }
    if(flag == true){
        cout << "Element is Found\n";
    } else {
        cout << "Element is not Found\n";
    }

    return 0;
}