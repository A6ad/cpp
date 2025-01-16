#include <stdio.h>
int main() {
    int t;
    scanf("%d",&t);
    while(t--){
    int x,y;
    scanf("%d %d",&x,&y);
    int count = 0;

    if(x>y){
        int temp = x;
        x=y;
        y= temp;
    }
    for(int i=x+1;i<y;i++){
        if(i%2 !=0){
            count+=i;
        }
    }
        
    // if(y>x){
    // for(int i=x+1;i<y;i++){
    //     if(i%2 !=0){
    //         count+=i;
    //     }
    // }
    // }
    printf("%d\n",count);  
    }    
}
