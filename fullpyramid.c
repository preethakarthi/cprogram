#include<stdio.h>
int main()
{
    int row,i,k=0,space;
    printf("enter no of rows");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(space=1;space<=row-i;space++)
        {
            printf(" ");
        }
        k=0;
        while(k !=2*i-1)
        {
            printf("*");
            k++;
        }
        printf("\n");

    }
return 0;
}
