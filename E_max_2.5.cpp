#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,res=INT_MIN,x;
    cin>>n;
   
    for(int i=0;i<n;i++){
        cin>>x;
        res = max(res,x);
    }
       cout<<res<<endl;
                  
}