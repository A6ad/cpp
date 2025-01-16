#include <bits/stdc++.h>
using namespace std;
class student{
    public:
    string name;
    int marks;
    int roll;
};
int main() {
    int  n;
    cin>>n;
    student a[n];
    for(int i=0;i<n;i++){
        cin.ignore();
        getline(cin,a[i].name);
        cin>>a[i].roll>>a[i].marks;
    }
    for(int i=0;i<n;i++){
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
    }
       
                  
}