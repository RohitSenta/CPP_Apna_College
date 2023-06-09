// 2D Array - Input / Output

#include<iostream>
using namespace std;

int main(){
    int n, m;
    cout << "Enter Rows and Colomns : ";
    cin >> n >> m;

    int arr[n][m];
    cout << "Enter Array Elements : ";
    // for Array Input
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }
    cout << "\n";

    // for Array Output
    cout << "Matric / 2D Array is : \n";
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    } 

    return 0;
}