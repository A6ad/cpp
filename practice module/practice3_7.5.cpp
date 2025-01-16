#include <bits/stdc++.h>
using namespace std;
int main() {
    string s,x;
    getline(cin,s);
    cout<<s;
    cin>>x;

int count = 0;
string word;

stringstream ss(s);
while(ss>> word){
    if(word == x){
        count++;
    }
}
    cout<<count<<endl;   
}