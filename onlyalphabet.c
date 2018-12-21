#include<stdio.h>
int main()
{
    char s[39];
    int i,j;
    printf("enter character and special character together");
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
        while(!((s[i]>='a')&&(s[i]<='z')||s[i]=='\0'||(s[i]>='A')&&(s[i]<='Z')))
        {
            for(j=i;s[j]!='\0';j++)
            {
                s[j]=s[j+1];
            }
            s[j]='\0';

        }
    }
     printf("only character presented in entered string is %s",s);

return 0;
}

