#include <bits/stdc++.h>

using namespace std;
class student{
    public:
    int id;
    char names[100];
    char sec;
    int marks;
};


int main()
{
    // Write your code here
    student a,b,c;
    int t;
    cin>>t;
    cin.ignore();
for (int i=0;i<t;i++){
       
        cin>>a.id;
        //cin.getline(a.names,100);
        cin>>a.names;
        cin>>a.sec>>a.marks;
       cin.ignore();
        

        cin>>b.id;
        //cin.ignore();
        //cin.getline(b.names,100);
        cin>>b.names;
        cin>>b.sec>>b.marks;
       
        cin.ignore();
      

        cin>>c.id;
        //cin.getline(c.names,100);
        cin>>c.names;
        cin>>c.sec>>c.marks;
        
      
       
        
    

       student high =a;
       if(b.marks>high.marks||(b.marks== high.marks && b.id<high.id)){
        high = b;
       } 

        if(c.marks> high.marks || (c.marks == high.marks && c.id<high.id)){
            high = c;
        }

        cout<<high.id<<" "<<high.names<<" "<<high.sec<<" "<<high.marks<<endl;

    
    }
    

    return 0;
}
