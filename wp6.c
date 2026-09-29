#include <stdio.h>
int main ()
{
 int n,i,fact;
 printf("enter a number:");
 scanf("%d",&n);
 fact=1;
 i=1;
 while(i<=n);
 {
 fact=fact*i;
 printf("factorial=%d",fact);
 i++;
 }
 return 0;
 }
