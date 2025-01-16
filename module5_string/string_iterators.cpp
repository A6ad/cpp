#include <bits/stdc++.h>
using namespace std;
int main() {
    string s="Hello world";
    // for(int i=0;i<s.size();i++){
    //     cout<<s[i]<<endl;
    // }
    // cout<<*(s.begin()+1)<<endl;     //s.begin() returns memory of first element
    //    cout<<*(s.end()-1)<<endl;    //s.end() points to the next element after last element which is nothing(null)

    for(string::iterator it=s.begin();it<s.end();it++){
        cout<<*it<<endl;
    }
    for(auto it=s.begin();it<s.end();it++){
        cout<<*it<<endl;
    }
                  
}