#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n,f,count=0,t[89],len;
    char str[98];
    printf("enter string");
    scanf("%s",str);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]=='(')
        {
         t[count]=i;
         count++;
        }
        if(str[i]==')')
        {
            if(count!=0)
            {
            count--;
            }
            else
                {
                t[count]=i;
                count++;
            }
        }
    }
    for(i=0;i<len;i++)
    {   f=0;
       for(j=0;j<count;j++)
       {
        if(i==t[j])
        {
            f=1;
        }
       }
        if(f==0)
        {
            printf("%c ",str[i]);
        }

    }
    return 0;
}
