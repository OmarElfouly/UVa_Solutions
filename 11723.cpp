#include <bits/stdc++.h>
using namespace std;

int main(){
    int c =1;
    int r,n;
    cin >> r >> n;
    while(r || n){
        printf("Case %d: ",c++);
        if(r <= n) printf("0\n");
        else{
            int d = (r-1)/n;
            if(d > 26) printf("impossible\n");
            else printf("%d\n",d);
        }
        cin >> r >> n;
    }
}