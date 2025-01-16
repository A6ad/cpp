#include <bits/stdc++.h>
using namespace std;
class student {
    public:
    int roll ;
    int cls;
    double gpa;
    student(int r,int c,int g){
        roll =r;
        cls = c;
        gpa = g;
    }
};
int main() {
  student rahim(45,5,3.2);
 
  cout<<rahim.roll<<" "<<rahim.cls<<" "<<rahim.gpa<<endl;

  student karim(2,5,5.00);


  cout<<karim.roll<<" "<<karim.cls<<" "<<karim.gpa<<endl;     
                  
}