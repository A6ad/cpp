#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
    char name[100];
    int roll;
    double gpa;
};
int main() {
    Student a,b;
 
    cin.getline(a.name,100);
    cin.ignore();
    cin>>a.roll>>a.gpa;

   
    cin.getline(b.name,100);
    cin.ignore();
    cin>>b.roll>>b.gpa;
       
    cout<<a.name<<" "<<a.roll<<" "<<a.gpa<<endl;   
    cout<<b.name<<" "<<b.roll<<" "<<b.gpa<<endl;   
                  
}