#include <bits/stdc++.h>
using namespace std;
int main() {
    string s="Hello";
    string s2=" world";
    s=s+s2;
    // s.append(s2);
    // s.push_back('A');
    // s+='A';
    //s.erase(2,2);  //s.erase(INDEX,HOW MANY CHARACTER I WANT TO DELETE)
    s.replace(6,5,"Bangladesh"); //s.replace(index,how many delete,"what to add")
    //s.insert(5," Asad");
    cout<<s<<endl;
} 
