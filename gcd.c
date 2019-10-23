#include<stdio.h>
int main()
{
 int a,b,i,j;
 printf("Enter two numbers: ");
 scanf("%d%d",&a,&b);
 for(i=1;i<=a;i++)
 {
  if(a%i==0)
  return i;
  else 
    return 0;
    
 }
 for(j=1;j<=b;j++)
 {
  if(b%j==0)
  return j;
  else 
    return 0;
 }
 
return 0;    
}
