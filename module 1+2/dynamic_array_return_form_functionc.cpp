#include <bits/stdc++.h>
using namespace std;
int* fun(){
    int *a = new int[5]; //dynamic array
    for(int i=0;i<3;i++){
        cin>>a[i];
    }
    return a;

}

int main()
{
    int *x = fun();
     for(int i=0;i<3;i++){
        cout<<x[i];
    }
}