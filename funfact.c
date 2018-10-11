#include<stdio.h>
int fact(int);
int main()
{
    int n,i,f;
    printf("enter value of n");
    scanf("%d",&n);
    f=fact(n);
    printf("\nfactorial is %d",f);
    return 0;
}
int fact(int x)
{
    if(x==1)
    {
        return 1;
    }
    else
    {
        return x*(fact(x-1));
    }
}
