#include <bits/stdc++.h>
using namespace std;

int main(){
    int p,h,o;
    while(cin >> p >> h >> o){
        printf("%s", o-p>=h ? "Props win!\n" : "Hunters win!\n");
    }
    return 0;
}