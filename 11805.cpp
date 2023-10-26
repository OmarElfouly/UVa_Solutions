#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, c=0, n,k,p;
    scanf("%d", &t);
    while(t--){
        scanf("%d %d %d", &n, &k, &p);
        printf("Case %d: %d\n", ++c, (k+p-1)%n+1);
    }
    return 0;
}