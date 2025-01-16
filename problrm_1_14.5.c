#include <stdio.h>
#include<stdlib.h>
int* add (int a,int b){
    int* sum = (int*)malloc(sizeof(int));
     *sum=a + b;
     return sum;
}
int main() {
 int x,y;
 scanf("%d %d",&x,&y);
 int *result = add(x,y);
 printf("%d\n",*result);
 free(result);
return 0;
}