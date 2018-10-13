#include<stdio.h>
void main()
{
 int n,a[90],i,j,k;
 printf("enter value of n");
 scanf("%d",&n);
 printf("enter no one by one");
 for(i=0;i<n;i++)
 {
     scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
     k=a[i];
     j=i-1;
     while(j>=0&&a[j]>k)
     {
         a[j+1]=a[j];
         j=j-1;
     }
     a[j+1]=k;
 }
 printf("sorted array is\n");
 for(i=0;i<n;i++)
 {
     printf("%d\t",a[i]);
 }
}
