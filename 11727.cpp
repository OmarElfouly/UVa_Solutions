#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    int a,b,c;
    int count = 1;
    while(t--){
        scanf("%d %d %d",&a,&b,&c);
        printf("Case %d: ",count++);
        // print the middle number
        if(a > b && a < c || a < b && a > c) printf("%d\n",a);
        else if(b > a && b < c || b < a && b > c) printf("%d\n",b);
        else printf("%d\n",c);
    }
    return 0;
}