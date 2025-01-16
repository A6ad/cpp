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
int r;
int c;
double g;
cin>>r>>c>>g;

  student rahim(r,c,g);
 
  cout<<rahim.roll<<" "<<rahim.cls<<" "<<rahim.gpa<<endl;

  //student karim(r,c,g);


  //cout<<karim.roll<<" "<<karim.cls<<" "<<karim.gpa<<endl;     
                  
}