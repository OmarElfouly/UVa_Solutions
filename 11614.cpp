#include <bits/stdc++.h>
using namespace std;

int main(){
    int c;
    long long n;
    scanf("%d", &c);
    while(c--){
        scanf("%lld", &n);
        printf("%lld\n", (long long) (floor(-0.5 + sqrt(0.25+2*n))));
    }
    return 0;
}