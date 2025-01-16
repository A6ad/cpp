#include <bits/stdc++.h>
using namespace std;
class student {
    public:
    string name;
    int roll;
    char section;
    int math_marks;
    int cls;
};
int main() {
   student a;
   a.name="rakib ahmed";
   a.roll = 1;
   a.section = 'A';
   a.math_marks=95;
   a.cls= 8;
       
   student b;
   b.name="sakib ahmed";
   b.roll = 1;
   b.section = 'A';
   b.math_marks=92;
   b.cls= 8;

   student c;
   c.name="ratul khan";
   c.cls= 8;
   c.math_marks=99;

   student top = a;
   if(b.math_marks>a.math_marks){
    top = b;
   }    
   if(c.math_marks>b.math_marks){
    top = c;
   }

   cout<<top.name;
                  
}