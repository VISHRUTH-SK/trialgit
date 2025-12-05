#include<stdio.h>

shree(int a,int b)
{
  return a+b;
}

int main()
{
  int m,n;
  printf("Enter the two numbers:\n");
  scanf("%d",&n);
  scanf("%d",&m);
  printf("The sum of two given number is: %d",shree(m,n));
  return 0;
}
