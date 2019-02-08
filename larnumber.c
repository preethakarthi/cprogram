#include<stdio.h>
void maxnum(int a[],int n);
int main()
{
    int i,a[90],n;
    printf("enter number of array element");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    maxnum(a,n);
    return 0;
}
void maxnum(int a[],int n)
{
    int i,j,hash[10]={0};
    for(i=0;i<n;i++)
    {
        hash[a[i]]++;
    }
    for(i=9;i>=0;i--)// based on number of occurrence of digit in hash table ,number will printed in descending order
    {
        for(j=0;j<hash[i];j++)
        {
            printf("%d",i);
        }
    }
}
