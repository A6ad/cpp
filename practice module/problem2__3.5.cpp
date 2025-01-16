#include <bits/stdc++.h>
using namespace std;
class cricketer {
    public:
    int jersy_no;
    string country;
    cricketer(int jersy_no,string country){
            (*this).jersy_no = jersy_no;
            (*this).country = country;
    }
};
int main() {
    cricketer *dhoni= new cricketer(18,"india"); 
    cricketer *kohli = new cricketer(7,"india");

    //   kohli->jersy_no = dhoni->jersy_no;
    //   kohli->country = dhoni->country ;
     *kohli = *dhoni;
      delete dhoni;
      cout<<kohli->jersy_no<<" "<<kohli->country<<endl;   
}