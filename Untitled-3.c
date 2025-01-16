#include <stdio.h>
#include<string.h>

int main() {
 char s[1001];
 char t[1001];
 scanf("%s %s",s,t);

 int a=strlen(s);
 int b=strlen(t);

 printf("%d %d\n",a,b);
 printf("%s %s\n",s,t);

return 0;
}