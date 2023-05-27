// Advance Pattern Questions

#include<iostream>
using namespace std;

int main() {

    // Inverted Pettern

    int n;
    cout << "Enter n : ";
    cin >> n;
    cout << "\n";

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n+1-i; j++){
            cout << j << " ";
        }
        cout << "\n";
    }
    cout << "\n";

    // 0 - 1 Pattern

    int x;
    cout << "Enter x : ";
    cin >> x;
    cout << "\n";

    for (int i=1; i<=x; i++){
        for(int j=1; j<=i; j++){
            if((i+j)%2 == 0){
                cout << "1 ";
            }
            else {
                cout << "0 ";
            }
        }
        cout << "\n";
    }
    cout << "\n";

    // Rhombus Pattern
    int y;
    cout << "Enter y : ";
    cin >> y;
    cout << "\n";

    for(int i=1; i<=y; i++){
        for(int j=1; j<=y-i; j++){
            cout << " ";
        }
        for(int j=1; j<=y; j++){
            cout << "* ";
        }
        cout << "\n";
    }
    cout << "\n";

    // Number Pattern 
    int z;
    cout << "Enter z : ";
    cin >> z;
    cout << "\n";

    for(int i=1; i<=z; i++){
        for(int j=1; j<=z-i; j++){
            cout << " ";
        }
        for(int j=1; j<=i; j++){
            cout << j << " ";
        }
        cout << "\n";
    }
    cout << "\n";


    // Palindromic Pattern
    int a;
    cout << "Enter a : ";
    cin >> a;
    cout << "\n";

    for(int i=1; i<=a; i++){
        int j;
        for(j=1; j<=a-i; j++){
            cout << "  ";
        }
        int k=i;
        for(;j<=a; j++){
            cout << k-- << " ";
        }
        k=2;
        for(;j<=a+i-1; j++){
            cout << k++ << " ";
        }
        cout << "\n";
    }
    cout << "\n";

    // Numbers Pattern - Pyramid and Inverted Pyramid
    int b;
    cout << "Enter b : ";
    cin >> b;
    cout << "\n";

    for(int i=1; i<=b; i++){
        for(int j=1; j<=b-i; j++){
            cout << "  ";
        }
        for(int j=1; j<=2*i-1; j++){
            cout << "* ";
        }
        cout << "\n";
    }  
    for(int i=b; i>=1; i--){
        for(int j=1; j<=b-i; j++){
            cout << "  ";
        }
        for(int j=1; j<=2*i-1; j++){
            cout << "* ";
        }
        cout << "\n";
    }  
    cout << "\n";

    // Zig-Zag Pattern
    int c;
    cout << "Enter c : ";
    cin >> c;
    cout << "\n";

    for(int i=1; i<=3; i++){
        for(int j=1; j<=c; j++){
            if(((i+j)%4==0) || (i==2 && j%4==0)){
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        cout << "\n";
    }

    return 0;
}

