#include <bits/stdc++.h>
using namespace std;
class Student
{
  public:
  char name[100];
  int roll;
  double gpa;
};


int main()
{
  Student a;
  a.roll=20;
  a.gpa=2.5;
  char temp[100]="asad";
  
  strcpy(a.name,temp);
 
cout<<a.name<<" "<<a.roll<<" "<<a.gpa<<endl;
}