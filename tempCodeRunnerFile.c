#include <stdio.h>
void max_min(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0 ;i<n;i++){
        scanf("%d",a[i]);
    }
    int min=100001;
    int max = -1;
for(int i=0;i<n;i++){
    if(a[i]<min){
        min = a[i];
    }
}
for(int i=0;i<n;i++){
    if(a[i]>max){
        max = a[i];
    }
}

printf("%d %d",max,min);
    }

int main() {
 max_min();
return 0;
}