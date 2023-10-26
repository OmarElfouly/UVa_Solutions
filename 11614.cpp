#include <bits/stdc++.h>
using namespace std;

int main(){
    int c,n;
    scanf("%d", &c);
    while(c--){
        scanf("%d", &n);
        printf("%d\n", int (floor(-0.5 + sqrt(0.25+2*n))));
    }
}