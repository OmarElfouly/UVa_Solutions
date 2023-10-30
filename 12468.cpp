#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    while(scanf("%d %d",&a,&b) && a != -1 && b != -1){
        int d = abs(a-b);
        if(d > 50) printf("%d\n",100-d);
        else printf("%d\n",d);
    }
    return 0;
}