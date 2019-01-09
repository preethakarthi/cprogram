#include<stdio.h>
int main()
{
  int n,a[90],t[99],lar,sma,flag,i;
  printf("enter value of n");
  scanf("%d",&n);
  printf("enter value in ascending order");
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  lar=n-1;
  sma=0;
  flag=1;
  for(i=0;i<n;i++)
  {

      if(flag==1)
      {
        t[i]=a[lar--];
      }
      else
      {
         t[i]=a[sma++];
      }
      flag=!flag;
  }
   for(i=0;i<n;i++)
  {
     a[i]=t[i];
  }
  printf("result is");
  for(i=0;i<n;i++)
  {
      printf("%d ",a[i]);
  }
  return 0;
}
