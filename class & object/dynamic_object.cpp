#include <bits/stdc++.h>
using namespace std;
class student {
    public:
    int roll ;
    int cls;
    double gpa;
    student(int roll,int cls,double gpa){
        (*this).roll =roll;
        (*this).cls = cls;
        (*this).gpa = gpa;
    }
};
int main() {
  student rahim(45,5,3.2);
  student* karim=new student(10,5,4.56); 
 
  cout<<rahim.roll<<" "<<rahim.cls<<" "<<rahim.gpa<<endl;
  cout<<(*karim).roll<<" "<<karim->cls<<" "<<karim->gpa<<endl;     // (*karim).roll and karim->roll is same
                  
}