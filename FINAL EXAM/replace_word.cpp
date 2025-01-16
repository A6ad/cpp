#include <bits/stdc++.h>
using namespace std;
int main()
{int t;
cin>>t;
cin.ignore();
while(t--){
    string s,x;
    cin>>s>>x;
string final;
int i=0;
while(i<s.size()){
if(s.substr(i,x.size())==x){
    final += '#';
    i+=x.size();
}
else{
    final += s[i];
    i++;
}
}
cout<<final<<endl;
}
}