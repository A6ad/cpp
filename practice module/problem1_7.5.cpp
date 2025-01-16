#include <bits/stdc++.h>
using namespace std;
class student{
    public:
    string name;
    int roll;
    int marks;
};
bool cmp(student l,student r){
    if(l.marks == r.marks){
        return l.roll<r.roll;
    }
    else{
       return l.marks>r.marks;
    }
}
int main() {
    int n;
    cin>>n;
    student arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i].name>>arr[i].roll>>arr[i].marks;
    }
      sort(arr,arr+n,cmp); 
      for(int i=0;i<n;i++){
        cout<<arr[i].name<<" "<<arr[i].roll<<" "<<arr[i].marks<<endl;
      }
                  
}