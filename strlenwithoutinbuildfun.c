#include<stdio.h>
int main()
{
    char str[60];
    int i,len=0;
    printf("enter string");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
        len=len+1;
    }
   printf("%d",len);
return 0;
}
