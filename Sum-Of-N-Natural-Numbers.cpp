//Function Practice Question
// Sum of n Natural Numbers

#include<iostream>
using namespace std;

int sum(int n){
    int ans=0;
    for (int i=1; i<=n; i++){
        ans = ans+i;
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter n : ";
    cin >> n;

    cout << "Sum is : " <<  sum(n) << endl;

    return 0;
}
