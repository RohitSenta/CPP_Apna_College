// Conversions Of Numbers Using Functions 

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// 1) Binary To Decimal 
int BinarytoDecimal(int n){
    int ans = 0;
    int x = 1;
    while(n > 0){
        int y = n%10;
        ans = ans + (y*x);
        x *= 2; 
        n /= 10;
    }
    return ans;
}

// 2) Octal to Decimal
int OctaltoDecimal(int a){
    int ans = 0;
    int x = 1;
    while(a > 0){
        int y = a%10;
        ans = ans + (y*x);
        x *= 8; 
        a /= 10;
    }
    return ans;

}

// 3) Hexadecimal to Decimal
int HexadecimaltoDecimal(string b){
    int ans = 0;
    int x = 1;

    int s = b.size();

    for (int i=s-1; i>=0; i--){
        if(b[i] >= '0' && b[i] <= '9'){
            ans = ans + x*(b[i] - '0');
        }
        else if(b[i] >= 'A' && b[i] <= 'F'){
            ans = ans + x*(b[i]-'A' + 10);
        }
        x = x*16;
    }
    return ans;
}

// 4) Decimal to Binary
int DecimaltoBinary(int c){
    int x = 1;
    int ans = 0;

    while(x <= c){
        x *= 2;
    }
    x /= 2;

    while(x > 0){
        int lastDigit = c/x;
        c = c - lastDigit*x;
        x /= 2;
        ans = ans*10 + lastDigit;
    }
    return ans;
}

// 5) Decimal to Octal
int DecimaltoOctal(int d){
     int x = 1;
    int ans = 0;

    while(x <= d){
        x *= 8;
    }
    x /= 8;

    while(x > 0){
        int lastDigit = d/x;
        d = d - lastDigit*x;
        x /= 8;
        ans = ans*10 + lastDigit;
    }
    return ans;
}

// Decimal to Hexadecimal 
string DecimaltoHexadecimal(int e){
    int x = 1;
    string ans = "";

    while(x <= e){
        x= x*16;
    }
    x = x/16;

    while(x > 0){
        int lastDigit = e/x;
        e = e - lastDigit*x;
        x = x/16;

        if(lastDigit <= 9){
            ans = ans + to_string(lastDigit);
        }
        else{
            char c = 'A' + lastDigit - 10;
            ans.push_back(c);
        }
    }
    return ans;
}

int main(){
    // Binary to Decimal
    int n;
    cout << "Enter Binary Number : ";
    cin >> n;
    cout << "Decimal Number is : " << BinarytoDecimal(n) << endl;

    // Octal to Decimal
    int a;
    cout << "Enter Octal Number : ";
    cin >> a;
    cout << "Decimal Number is : " << OctaltoDecimal(a) << endl;

    // Hexadecimal to Decimal
    string b;
    cout << "Enter Hexadecimal Number : ";
    cin >> b;
    cout << "Decimal Number is : " << HexadecimaltoDecimal(b) << endl;

    // Decimal to Binary
    int c;
    cout << "Enter Decimal Number : ";
    cin >> c;
    cout << "Binary Number is : " << DecimaltoBinary(c) << endl;

    // Decimal to Octal
    int d;
    cout << "Enter Decimal Number : ";
    cin >> d;
    cout << "Octal Number is : " << DecimaltoOctal(d) << endl;

    // Decimal to Hexadecimal
    int e;
    cout << "Enter Decimal Number : ";
    cin >> e;
    cout << "Hexadecimal Number is : " << DecimaltoHexadecimal(e) << endl;

    return 0;
}