#include <bits/stdc++.h>
using namespace std;
int main() {
 string s="HelloinWorld";   
 string s2 = "ISh"; 
//  s.replace(5,2," ");
//  cout<<s;
int f=s.find("in");
      s.replace(f,2,s2); // replacing with another string

      
     cout<<s;             
}