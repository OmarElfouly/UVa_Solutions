#include <iostream>
#include <string>
using namespace std;

int main(){
    bool myFlag(true);
    string inputLine;

    while(getline(cin, inputLine)){
        for(string::iterator it = inputLine.begin();it != inputLine.end();++it){
            if(*it == '"'){
                if(myFlag) 
                    cout << "``";
                else
                    cout<< "''";
                myFlag = !myFlag;
            }else{
                cout << *it;
            }
        }
        cout <<'\n';
    }
}