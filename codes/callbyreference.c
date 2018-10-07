#include<stdio.h>
int swap(int*,int*);
void main()
{
    int a,b,*p,*q;
    printf("enter value of a and b\n");
    scanf("%d %d",&a,&b);
    p=&a;
    q=&b;
    printf("before swap a=%d and b=%d \n",a,b);
    swap(p,q);
    printf("after swap =%d and b=%d",*p,*q);

}
int swap(int *n,int *m)
{
    int t;
    t=*n;
    *n=*m;
    *m=t;
}
