#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n){
        while(n>9){
        int sum = 0;
        while(n){
            sum += n%10;
            n /= 10;
        }
        n = sum;
        }
        cout << n << "\n";
        cin >> n;
    }
    

}