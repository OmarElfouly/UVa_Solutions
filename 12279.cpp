#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,c=1;
    scanf("%d", &n);
    while(n!=0){
        int eb = 0,in;
        while(n--){
            scanf("%d", &in);
            if(in == 0) eb--;
            else eb++;
        }
        printf("Case %d: %d\n", c++, eb);
        scanf("%d", &n);
    }
}