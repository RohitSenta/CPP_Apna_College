//if - else conditional statement
//Example of date with girlfriends!

#include<iostream>
using namespace std;

int main(){
    //if - else condition
    int savings;
    cout << "Enter Your Savings: ";
    cin >> savings;

    if(savings>5000){
        cout<<"Go on a date with vishwa!\n";
    } 
    else {
        cout<<"Go on a date with heer!\n";
    }

    //else - if condition
    int saving1;
    cout << "Enter saving1 : ";
    cin >> saving1;

    if(saving1 > 5000){
        cout << "Go on date with vishwa!\n";
    }
    else if(saving1 > 2000){
        cout << "GO on a date with heer!\n";
    }
    else {
        cout << "Go with friends!\n";
    }

    // nested if - else condition
    int saving2;
    cout << "Enter saving2 : ";
    cin >> saving2;

    if(saving2 > 5000){
        if(saving2 > 10000){
            cout << "On a trip with vishwa!\n";
        } else if (saving2 > 8000){
            cout << "Go for a shoping with vishwa!\n";
        } else {
            cout << "Go for a for coffee with vishwa!\n";
        }
    }
    else if(saving2 > 2000){
        cout << "Go on a date with heer!\n";
    }
    else {
        cout << "Go with friends!\n";
    }

    return 0;
}