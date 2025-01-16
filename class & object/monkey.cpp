#include <bits/stdc++.h>
using namespace std;
int main() {
    string line;

    while(getline(cin,line)){
        string clean;
    
       for(char ch : line){
        if(ch != ' '){
            clean += ch;
        }
       }
       sort(clean.begin(),clean.end());
       cout<<clean<<endl;
                  
}
}