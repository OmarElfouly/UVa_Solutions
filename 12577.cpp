#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int c = 0;
    while(s!="*"){
        printf("Case %d: %s",++c, s=="Hajj"?"Hajj-e-Akbar\n":"Hajj-e-Asghar\n");
        cin >> s;
    }
}