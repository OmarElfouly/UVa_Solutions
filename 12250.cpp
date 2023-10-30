#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    int count = 0;
    cin >> str;
    while(str!="#"){
        
        printf("Case %d: ", ++count);
        if(str=="HELLO") printf("ENGLISH\n");
        else if(str=="HOLA") printf("SPANISH\n");
        else if(str == "HALLO") printf("GERMAN\n");
        else if(str == "BONJOUR") printf("FRENCH\n");
        else if(str == "CIAO") printf("ITALIAN\n");
        else if(str == "ZDRAVSTVUJTE") printf("RUSSIAN\n");
        else printf("UNKNOWN\n");
        cin >> str;
    }
    return 0;
}