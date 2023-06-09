// 2D Array - Spiral Order Matrix Traversal

#include<iostream>
using namespace std;

int main(){
    int n, m;
    cout << "Enter rows and colomns : ";
    cin >> n >> m;

    int arr[n][m];
    // 1    5   7   9   10  11
    // 6    10  12  13  20  21 
    // 9    25  29  30  32  41
    // 15   55  59  63  68  70
    // 40   70  79  81  95  99
    cout << "Enter Array Elements : \n";
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }

    // Spiral Order Matrix Print

    int row_Start = 0; 
    int row_End = n-1;
    int col_Start = 0;
    int col_End = m-1;

    while(row_Start <= row_End && col_Start <= col_End){
        
        // for row start
        for(int col = col_Start; col <= col_End; col++){
            cout << arr[row_Start][col] << " ";
        }
        row_Start++;

        // for colomn end
        for(int row = row_Start; row <= row_End; row++){
            cout << arr[row][col_End] << " ";
        }
        col_End--;

        // for row end
        for (int col = col_End; col >= col_Start; col--){
            cout << arr[row_End][col] << " ";
        }
        row_End--;

        // for colomn start
        for(int row = row_End; row >= row_Start; row--){
            cout << arr[row][col_Start] << " ";
        }
        col_Start++;
    }
}