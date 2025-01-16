#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Write your code here
    int t;
    cin >> t;
    while (t--)
    {
        string s, x;

        cin>>s>>x;
      
while(1){
        string y="#";
        int f=s.find(x);

  
        if(f!=-1){
            s.replace(f,x.size(),y);   
        }else{
            break;
        }
}

        cout<<s<<endl;

    }
}