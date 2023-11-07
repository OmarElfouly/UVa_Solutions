#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2;
    
    while(getline(cin, s1) && getline(cin, s2)){
        int sum1=0,sum2=0;
        for(auto& c : s1){
            if(isalpha(c)) sum1 += tolower(c)-'a'+1;
        }
        for(auto& c : s2){
            if(isalpha(c)) sum2 += tolower(c)-'a'+1;
        }
        int digitSum1, digitSum2;
        
        while(sum1>9){
            digitSum1 = 0;
            while(sum1){
                digitSum1 += sum1%10;
                sum1 /= 10;
            }
            sum1 = digitSum1;
        }

        while(sum2>9){
            digitSum2 = 0;
            while(sum2){
                digitSum2 += sum2%10;
                sum2 /= 10;
            }
            sum2 = digitSum2;
        }
        
        double ans = (double)min(sum1, sum2)/(double)max(sum1, sum2)*100;
        printf("%.2lf %%\n", ans);
        // getline(cin, s1);
        // getline(cin, s2);
    }
}