#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main() {
 int n;
 cin>>n;
 int arr[n];

 for(int i=0;i<n;i++){
    cin>>arr[i];
 }
 int max_num = arr[0];
 for(int i=1;i<n;i++){
    max_num=max(max_num,arr[i]);
 }
 cout<<max_num;
}