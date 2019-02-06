#include<stdio.h>
#include<string.h>
void pattern(char str[],int len);
int main()
{
 char str[90];
 printf("enter odd digit word");
 scanf("%s",str);
 int len=strlen(str);

 pattern(str,len);
 return 0;
}
void pattern(char str[],int len)
{
    int i,j,k;
    for(i=0;i<len;i++)
    {
        j=len-1-i;
        for(k=0;k<len;k++)
        {
            if(i==k||j==k)
            {
                printf("%c",str[k]);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

