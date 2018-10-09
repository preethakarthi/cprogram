#include<stdio.h>
void main()
{
    char alpha='A';
    int i,j,row;
    printf("enter no of rows");
    scanf("%d",&row);
    for(i=0;i<row;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c",alpha);
        }
        alpha++;
        printf("\n");
    }
}
