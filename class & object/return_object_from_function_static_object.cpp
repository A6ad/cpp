#include <bits/stdc++.h>
using namespace std;
class student{
    public:
    int roll;
    int cls;
    double gpa;

    student(int roll,int cls,double gpa){   //constructor
            this->roll = roll;
            this->cls = cls;              
            this->gpa = gpa;

    }
 
 };
    student fun(){
        student karim(2,5,5.98);
        return karim;
    }
int main() {

    student obj = fun();

    cout<<obj.roll<<" "<<obj.cls<<" "<<obj.gpa; 
      
                  
}