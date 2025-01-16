#include <bits/stdc++.h>
using namespace std;
class student {
    public:
    int roll ;
    int cls;
    double gpa;
    student(int r,int c,double g){
        this->roll =r;
        this->cls = c;
        this->gpa= g;
    }
};
student *fun(){
    student* karim=new student(2,5,5.10);
    return karim;
}
int main() {
  //student rahim(45,5,3.2);
  student *p = fun();
  //cout<<rahim.roll<<" "<<rahim.cls<<" "<<rahim.gpa<<endl;
  cout<<p->roll<<" "<<p->cls<<" "<<p->gpa<<endl;     
                  
}