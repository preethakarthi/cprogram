#include<stdio.h>
void main()
{
    int i,j,n,a[67],min,loc,t;
    printf("enter value of n");
    scanf("%d",&n);
    printf("enter no one by one");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        min=a[i];
        loc=i;
        for(j=i+1;j<n;j++)
        {
            if(min>a[j])
            {
                min=a[j];
                loc=j;
            }
        }
            t=a[i];
            a[i]=a[loc];
            a[loc]=t;


    }
    printf("selection sort is\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }

}
