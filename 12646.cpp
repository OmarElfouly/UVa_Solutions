#include <bits/stdc++.h>
using namespace std;

int main(){
    bool a,b,c;
    while(cin >> a >> b >> c){
        if(a==b && b==c) printf("*\n");
        else if(a==b) printf("C\n");
        else if(b==c) printf("A\n");
        else printf("B\n");
    }
    return 0;
}