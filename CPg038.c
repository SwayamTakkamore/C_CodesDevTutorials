#include <stdio.h>
void main() 
{
  int i, num, f;
  printf("Enter any Value : ");
  scanf("%d",&num);
  f = 1;
  for(i=1;i<=num;i++)
    {
      f = f * i;
    }
}
