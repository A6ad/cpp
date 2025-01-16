#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+5);      // sort(1st element,size(last element +1 ))
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    sort(a,a+n,greater<int>()); // descending order

    cout<<endl;
     for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }                    
}