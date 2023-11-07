#include <bits/stdc++.h>
using namespace std;

int main(){
    int p,a,b,c,d,n;
    while(scanf("%d %d %d %d %d %d", &p, &a, &b, &c, &d, &n)!=EOF){
        double maxp  = p*(sin(a*1+b)+cos(c*1+d)+2);
        double maxdec = 0;
        //double minp  = p*(sin(a*1+b)+cos(c*1+d)+2);
        for(int i=2; i<=n; i++){
            double price = p*(sin(a*i+b)+cos(c*i+d)+2);
            maxp = max(price, maxp);
            maxdec = max(maxdec, maxp-price);
            //minp = min(price, minp);
        }
        printf("%.6lf\n", maxdec);
    }  
}