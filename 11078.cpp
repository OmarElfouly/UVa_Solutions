#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, t;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        int senior, junior;
        scanf("%d %d", &senior, &junior);
        int diff = senior-junior;
        for(int i=2; i<n; i++){
            senior = max(senior, junior);
            scanf("%d", &junior);
            diff = max(diff, senior-junior);
        }
        printf("%d\n", diff);

    }
}