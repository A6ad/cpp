#include <bits/stdc++.h>
using namespace std;
int main() {
      string s;
      getline(cin,s);
      stringstream ss(s);
      string word;
      //ss>>word;               //get one word from stringsteam
      //cout<<word<<endl; 
      //ss>>word;             //get one word from stringsteam
      //cout<<word<<endl;     
      while(ss>>word){
        cout<<word<<" ";
      }            
}