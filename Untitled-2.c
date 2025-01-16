#include <stdio.h>
int main() {
    int t;
    scanf("%d",&t);
    while(t--){
    int x,y;
    scanf("%d %d",&x,&y);
    int count = 0;

    if(x>y){
    for(int i=y;i<=x;i++){
        if(i%2 !=0){
            count+=i;
        }
    }
    }      
    if(y>x){
    for(int i=x;i<=y;i++){
        if(i%2 !=0){
            count+=i;
        }
    }
    }
    printf("%d\n",count);  
    }    
}
