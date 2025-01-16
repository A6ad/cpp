#include <bits/stdc++.h>
using namespace std;
int main() {
    string s,x;
    getline(cin,s);
    x="Jessica";

    stringstream ss(s);
    string word;
    bool found = false;

    while(ss>> word){
        if(word  == x){
            found = true;
            break;
        }
    }           
     if (found){
        cout<<"YES"<<endl;
     }  
     else{
        cout<<"NO"<<endl;
     }
}