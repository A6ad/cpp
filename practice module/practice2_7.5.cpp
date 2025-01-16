#include <bits/stdc++.h>
using namespace std;
class student{
    public:
    string name;
    int roll;
    int marks;
};


int main() {
    int n;
    cin>>n;
    student arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i].name>>arr[i].roll>>arr[i].marks;
    }
      for(int i=0,j=n-1;i<=j;i++,j--){
        student temp = arr[i];
        arr[i]=arr[j];
        arr[j] = temp;
      }
       
      for(int i=0;i<n;i++){
        cout<<arr[i].name<<" "<<arr[i].roll<<" "<<arr[i].marks<<endl;
      }
                  
}