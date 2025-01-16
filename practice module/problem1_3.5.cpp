#include <bits/stdc++.h>
using namespace std;
class student{
    public:
    string name;
    int roll;
    char section;
    int math_marks;
    int cls;
    student(string n,char s,int m,int c){
        name = n;
        section = s;
        math_marks = m;
        cls = c;
    }
};
int main() {
    student a("rahim",'A',90,5);
    student b("karim",'B',91,5);
    student c("asin",'C',92,5);

    student best = a;
    if(b.math_marks>best.math_marks){
        best = b;
    }
    if(c.math_marks>best.math_marks){
        best = c;
    }
 
    cout<<best.math_marks;   
}