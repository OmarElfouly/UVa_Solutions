#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a, b;
    // while input is not EOF
    while(scanf("%lld %lld", &a, &b) != EOF)
        printf("%lld\n", abs(b-a));
}