#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n, c=1;
    scanf("%d",&t);
    while(t--){
        scanf("%d", &n);
        int minSpeed=0,s; // safe since student speed is neccessarly >=1
        while(n--){
            scanf("%d",&s);
            minSpeed = max(minSpeed, s);
        }
        printf("Case %d: %d\n",c++,minSpeed);
    }
}