#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    string name;
    int roll;
    int marks;
};
bool cmp(student l, student r)
{
    if(l.marks<r.marks){
        return true;
    }
    else {
        return false;
    }
}

int main()
{
    int n;
    cin >> n;
    student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }

    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }
}
// 6
// sakib 15 89
// rakib 18 78
// akib 28 75
// sifat 24 92
// rifat 23 95
// ifat 1 86