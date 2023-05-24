//Break and Continue statement in loop
// example of girl go out

#include<iostream>
using namespace std;

int main() {
    int pocketmoney = 3000;

    for(int i=1; i<=30; i++){
        if(i%2 == 0){
            continue;
        }
        if(pocketmoney == 0){
            break;
        }
        cout << "Go out on date " << i << "\n";
        pocketmoney = pocketmoney - 300;
    }

    return 0;
}
