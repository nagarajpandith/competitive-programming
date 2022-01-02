// https://p.hck.re/UgR6
#include <stdio.h>
 int main()
 {
 int t;
 scanf("%d",&t);
 int cnt=0;
 while(t--)
 {
 int r,x;
 scanf("%d %d",&r,&x);
 if(700*x>=44*r)
 cnt++;
 }
 printf("%d",cnt);
 }