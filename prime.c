#include<stdio.h>
void main()
{
    int count=0,i,n;
    printf("enter value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("%d is prime no",n);
    }
    else
    {
        printf("%d is not prime no",n);
    }
}
