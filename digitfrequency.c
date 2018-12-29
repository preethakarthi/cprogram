#include<stdio.h>
#include<string.h>
int main()
{
    int i,arr[10]={0};
    char str[50];
    scanf("%s",str);
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]>='0'&&str[i]<='9')
         arr[str[i]-'0']++;
    }
    for(i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
