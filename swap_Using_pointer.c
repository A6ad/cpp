#include <stdio.h>
#include<stdlib.h>
void swap(int *a,int *b){
    int temp = *a;
    *a=*b;
    *b=temp;

}

int main() {
 int x,y;
 scanf("%d %d",&x,&y);
  swap(&x,&y);
 printf("%d %d\n",x,y);
 return 0;
}