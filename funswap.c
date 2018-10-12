#include<stdio.h>
int swap(int ,int);
void main()
{
    int a,b,s;
    printf("enter value of a and b");
    scanf("%d %d",&a,&b);
    s=swap(a,b);
}
int swap(int c,int d)
{
    int t;
    t=c;
    c=d;
    d=t;
     printf("\nafter swap a=%d and b=%d",c,d);

}
