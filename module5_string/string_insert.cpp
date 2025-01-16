#include <bits/stdc++.h>
using namespace std;
int main() {
   string s = "Hello world you";
    string x = "#";
 
 s.erase(12,3);
 cout<<s<<endl;
s.insert(5," in");
cout<<s<<endl;
// now the string is : Hello in world
s.insert(s.begin()+14,'A');
cout<<s<<endl;

}