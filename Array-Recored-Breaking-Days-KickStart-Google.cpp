// Array 
// isiyana is given the number of visitors to her local theme park on N consicutive days.
// The number of visitors on i-th day is Vi. A day is Record Breaking if it is satisfies both of the following conditions:
// 1) The Number of visitors on the day is strictly larger than the number of visitor on each of the previous days
// 2) Ether it is a last day, or the number of visitors on the day is strictly Larger than the number of visitors on following day.
// Note : That the very frist day could be a record breaking day!
// please help isyana find out the number of record breaking days.


#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;

    int arr[n+1];
    arr[n] = -1;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    if(n == 1){
        cout << 1 << endl;
        return 0;
    }

    int ans = 0;
    int mx = -1;

    for(int i=0; i<n; i++){
        if(arr[i] > mx && arr[i] > arr[i+1]){
            ans++; 
        }
        mx = max(mx, arr[i]);
    }
    cout << "Numbers of Record Breaking Days is : " << ans << endl;

    return 0;
}
