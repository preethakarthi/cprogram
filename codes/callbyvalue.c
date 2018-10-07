#include<stdio.h>
int swap(int ,int);
void main()
{
    int a,b;
    printf("enter value of a and b\n");
    scanf("%d %d",&a,&b);
    printf("before swap a=%d and b=%d\n",a,b);
    swap(a,b);
    printf("after swap a=%d and b=%d",a,b);
}
swap(int n,int m)
{
    int t;
    t=n;
    n=m;
    m=t;
}
