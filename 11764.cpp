#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,n,c=1;
    scanf("%d", &t);
    while(t--){
        int high =0,low =0;
        scanf("%d", &n);
        int prev,curr;
        scanf("%d", &prev); n--;
        while(n--){
            scanf("%d", &curr);
            if(prev < curr) high++;
            else if(prev > curr) low++;
            prev = curr;
        }
        printf("Case %d: %d %d\n", c++, high, low);
        
    }
}