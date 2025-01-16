#include <bits/stdc++.h>
using namespace std;
class student{
    public:
    string name;
    int roll;
    student(string name,int roll){
        this->name = name;
        this->roll = roll;
    }
    void hello(){
        cout<<"hello";
    }


};
int main() {
    student sakib("sakib ahmed",23);
    cout<<sakib.name<<endl;     
    sakib.hello();    
}