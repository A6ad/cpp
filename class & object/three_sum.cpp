#include <bits/stdc++.h>
using namespace std;
bool threesum(int arr[],int n,int target){
    sort(arr,arr+n);
    for(int i=0;i<n-2;i++){
        int left = i+1,right = n-1;

        while(left<right){
            int current = arr[i]+arr[right]+arr[left];
            if(current == target){
                return true;
            }
            else if(current<target){
                left++;
            }
            else{
                right--;
            }
        }
    }
    return false;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        int a[n];

        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(threesum(a,n,s)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
    
       
                  
}