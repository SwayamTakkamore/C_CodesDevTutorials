#include <stdio.h>
void main() 
{
  int i, num;
  printf("Enter any Value : ");
  scanf("%d",&num);
  for(i=0;i<=10;i+2)
    {
      printf(num*i);
    }
}
