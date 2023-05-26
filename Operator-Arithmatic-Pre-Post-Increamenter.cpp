// Operator - Pre-inceamenter and Post-increamenter

#include<iostream>
using namespace std;

int main() {
    int a = 1;
        //1   //2+1  
    a = a++ + ++a;
    cout << "a = " << a <<"\n\n";  //4
    
    int i = 1;
    int j = 2;
    int k;
       //1 //2 //1   //2   //2+1  //2+2
    k = i + j + i++ + j++ + ++i + ++j;
    cout << "i = " << i << ", j = " << j << ", k = " << k << "\n\n";

    int r = 0;
        //0   //0   //1   //1
    r = r++ - --r + ++r - r--; //0
    cout << "r = " << r << "\n\n";

    int x=1, y=2, z=3;
           //1   //2   //3
    int w = x-- - y-- - z--; 

    cout << "x = " << x << ",\t"; //0
    cout << "y = " << y << ",\t"; //1
    cout << "z = " << z << ",\t"; //2
    cout << "m = " << w << "\n\n";

    int m=10, n=20, p;
       //10   //9   //19 //20   //9  //20  //10  //19
    p = m-- - m++ + --n - ++n + --m - n-- + ++m - n++;

    cout << "m = " << m << ",\t"; //10
    cout << "n = " << n << ",\t"; //20
    cout << "p = " << p << "\n\n";  //-20
    return 0;
}