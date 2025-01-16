#include <bits/stdc++.h>
using namespace std;
int main() {
    string s="BRITISHEGYPTAMERICAEGYPT";
    
    while(1){
    int pos = s.find("EGYPT");
    if(pos!= -1){
        s.erase(pos,5);
        s.insert(s.begin()+pos,' ');
    }
    else{
        break;
    }
           
}
 cout<<s; 
}