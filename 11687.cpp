#include <bits/stdc++.h>
using namespace std;

int findS(string s, int cnt){
    string len = to_string(s.length());
    if(s == len) return cnt+1;
    else return findS(len, cnt+1);
}

int main(){
    string s;
    cin >> s;
    while(s!="END"){
        cout << findS(s, 0) << "\n";
        cin >> s;
    }
}