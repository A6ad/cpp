#include <bits/stdc++.h>
using namespace std;
int* fun(){
    int* ar=new int [5];//={10,20,30,40,50};
    for(int i=0;i<5;i++){
        ar[i]=i+1;
    }
    return ar;
}
int main() {
    
     int* main_arr= fun();
     for(int i=0;i<5;i++){
        cout<<main_arr[i]<<" ";
     }

                  
}