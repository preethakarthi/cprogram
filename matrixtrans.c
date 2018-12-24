
#include<stdio.h>
void main()
{
    int i,j,k,r1,r2,c1,c2,a[20][20],b[20][45];
    printf("enter 1 matrix row");
    scanf("%d",&r1);
    printf("enter 1 matrix coloumn");
    scanf("%d",&c1);


        printf("enter element 1 matrix one by one");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d",&a[i][j]);
            }
            printf("\n");
        }

       for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                b[i][j]=a[j][i];
            }
        }

        printf("matrix transpose is\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                printf("%d\t",b[i][j]);
            }
            printf("\n");
        }



}
