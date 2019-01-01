#include<stdio.h>
int main()
{
   int n,k,i,j,maxand=0,maxor=0,maxxor=0;
   scanf("%d %d",&n,&k);
   for(i=1;i<=n;i++)
   {
       for(j=i+1;j<=n;j++)
       {
         if(maxand< (i&j) && (i&j)<k )
         {
             maxand=i&j;
         }
         if(maxor<(i|j) && (i|j)<k)
         {
             maxor=i|j;
         }
         if(maxxor<(i^j) && (i^j)<k)
         {
             maxxor=i^j;
         }

       }
   }
 printf("%d\n",maxand);
 printf("%d\n",maxor);
 printf("%d\n",maxxor);
    return 0;
}
