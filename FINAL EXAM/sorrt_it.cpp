#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    string nm;
    int cls;
    char s;
    int id;
    int math_m;
    int eng_m;
    int to;
    student(string n, int c, char se, int i, int math, int eng)
    {
        nm = n;
        cls = c;
        s = se;
        id = i;
        math_m = math;
        eng_m = eng;
        to = math_m + eng_m;
    }
};
bool cmp(student l, student r)
{
    if (l.eng_m == r.eng_m)
    {
     if(l.math_m == r.math_m){
        return l.id< r.id;
     }   
     return l.math_m > r.math_m;
    }
    return l.eng_m > r.eng_m;
    
    
}
int main()
{
    int n;
    cin >> n;
    student *a[n];
    for (int i = 0; i < n; i++)
    {
        string name;
        int cls, id, math_marks, eng_marks;
        char section;
        cin >> name >> cls >> section >> id >> math_marks >> eng_marks;
        a[i] = new student(name, cls, section, id , math_marks, eng_marks);
    }

    sort(a, a + n,[](student* l,student* r) {
        return cmp(*l,*r);});
    
    for (int i = 0; i < n; i++)
    {
        cout << a[i]->nm << " " << a[i]->cls << " " << a[i]->s<<" "<< a[i]->id <<" "<<a[i]->math_m<<" "<<a[i]->eng_m<< endl;
        delete a[i];
    }
}
