// Pattern Questions

#include<iostream>
using namespace std;

int main() {

    // Rectangle Pattern
    int rows1;
    cout << "rows1 : ";
    cin >> rows1;
    int cols1;
    cout << "cols1 : ";
    cin >> cols1;
    cout << "\n";

    for(int i=1; i<=rows1; i++){
        for(int j=1; j<=cols1; j++){
            cout << "* ";
        }
        cout << "\n";
    }
    cout << "\n";

    // Hollow Rectangle Pattern 
    int rows2;
    cout << "rows2 : ";
    cin >> rows2;
    int cols2;
    cout << "cols2 : ";
    cin >> cols2;
    cout << "\n";

    for(int i=1; i<=rows2; i++){
        for(int j=1; j<=cols2; j++){
            if(i==1 || i==rows2 || j==1 || j==cols2){
                cout << "* ";
            }
            else {
                cout << "  "; 
            }
        }
        cout << "\n";
    }
    cout << "\n";

    // Inverted Half Pyramid
    int n;
    cout << "Enter n : ";
    cin >> n;
    cout << "\n";

    for(int i=n; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout << "* ";
        }
        cout << "\n";
    }
    cout << "\n";

    // Half Pyramid After 180 Degree Rotation
    int m;
    cout << "Enter m : ";
    cin >> m;
    cout << "\n";

    for (int i=1; i<=m; i++){
        for (int j=1; j<=m; j++){
            if(j<=m-i){
                cout << "  ";
            }
            else{
                cout << "* ";
            }
        }
        cout << "\n";
    }
    cout << "\n";

    // Half Pyramid Using Numbers 
    int a;
    cout << "Enter a : ";
    cin >> a;
    cout << "\n";

    for(int i=1; i<=a; i++){
        for(int j=1; j<=i; j++){
            cout << i << " ";
        }
        cout << "\n";
    }
    cout << "\n";

    // Floyd's Triangle
    int b; 
    cout << "Enter b : ";
    cin >> b;
    int count = 1;
    cout << "\n";

    for(int i=1; i<=b; i++){
        for(int j=1; j<=i; j++){
            cout << count << "\t";
            count++;
        }
        cout << "\n\n";
    }
    cout << "\n"; 

    // Butterfly Pattern
    int x;
    cout << "Enter x : ";
    cin >> x; 
    cout << "\n";

    for(int i=1; i<=x; i++){
        for(int j=1; j<=i; j++){
            cout << "* ";
        }
        int space = 2*x - 2*i;
        for(int j=1; j<=space; j++){
            cout << "  ";
        }
        for(int j=1; j<=i; j++){
            cout << "* ";
        }
        cout << "\n";
    }
    for(int i=x; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout << "* ";
        }
        int space = 2*x - 2*i;
        for(int j=1; j<=space; j++){
            cout << "  ";
        }
        for(int j=1; j<=i; j++){
            cout << "* ";
        }
        cout << "\n";
    }
    cout << "\n";
    return 0;
}