#include<stdio.h>
#include<limits.h>
int main()
{

    int a[6][6],i,j,max,houseglass;
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    max=INT_MIN;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            houseglass = a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
            if(max<houseglass)
            {
                max=houseglass;
            }
        }
    }
    printf("%d",max);
    return 0;
}
