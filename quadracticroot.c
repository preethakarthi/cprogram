#include<stdio.h>
void quadra(int,int,int);
int main()
{

    int p,q,r;
    printf("enter value of a,b,c");
    scanf("%d %d %d",&p,&q,&r);
    quadra(p,q,r);
return 0;
}
void quadra(int a,int b,int c)
{
     float d,r,r1,r2,real,imag;
     d=(b*b)-(4*a*c);
     if(d>0)
     {
         r1=((-b)+sqrt(d))/(2*a);
         r2=((-b)-sqrt(d))/(2*a);
         printf("root1= %f and root2= %f",r1,r2);
     }
     else if(d==0)
     {

         r1=(-b)/(2*a);
         r2=r1;
         printf("root1 =%f and root2=%f",r1,r2);
     }
     else
     {
         real=(-b)/(2*a);
         imag=(sqrt(d))/2*a;
         printf("root1 is %f+%f and root is %f-%f",real,imag,real,imag);
     }
}
