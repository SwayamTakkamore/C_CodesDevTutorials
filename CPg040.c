// To Check whether entered no. is a Prime no. or not

#include <stdio.h>
void main()
{
    int i, num, count;
    printf("Enter any number : ");
    scanf("%d", &num);
    for(i=2;i<=num;i++)
    {
        if(num%i==0)
        {
            count++;
        }
    }
    if(count>=2)
    {
        printf("%d is a Composite no.",num);
    }
    else
    {
        printf("%d is a Prime no.",num);
    }
    
}
