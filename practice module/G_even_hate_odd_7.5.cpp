#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int even_count = 0;
        int odd_count ;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
            {
                even_count++;
            }
        }
        odd_count =n -  even_count ;
       
        int operation;
     if(even_count == odd_count){
        cout<<"0"<<endl;
     } 
     else if(abs(even_count-odd_count)%2 != 0){
        cout<<"-1"<<endl;
     }  
     else {cout<<abs(even_count-odd_count)/2<<endl;
     }
           
    }
}
