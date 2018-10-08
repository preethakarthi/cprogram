#include<stdio.h>
int main()
{
    int a[68],n,i,max;
    printf("enter no of element");
    scanf("%d",&n);
    printf("enter no one by one");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        max=a[0];
        if(a[0]<a[i])
        {
            max=a[i];
        }
    }
    printf("largest no in array is %d",max);
    return 0;
}
