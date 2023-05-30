// Print Finonacci Sequence using Function
// fibonacci - 0, 1, 1, 2, 3, 5, 8, 13, 21,.....((n-1)+(n-2), (n-2)+(n-3),...)
#include<iostream>
using namespace std;

void fib(int n){
    int t1 = 0;
    int t2 = 1;
    int nextTurm;

    for(int i=1; i<=n; i++){
        cout << t1 << endl;
        nextTurm = t1 + t2;

        t1 = t2;
        t2 = nextTurm;
    }
    return;
}

int main() {
    int n;
    cout << "Enter n : ";
    cin >> n;

    fib(n);
    return 0;
}