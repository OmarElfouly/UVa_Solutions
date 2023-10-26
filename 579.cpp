#include <bits/stdc++.h>
using namespace std;

int main(){
    int h, min;
    scanf("%d:%d", &h, &min);
    while(h!=0 || min!=0){
        double angle = abs(30*h - 5.5*min);
        angle = angle>180? 360-angle: angle;
        printf("%.3f\n", angle);
        scanf("%d:%d", &h, &min);
    }
    return 0;
}