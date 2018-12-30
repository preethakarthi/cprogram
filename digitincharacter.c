#include <stdio.h>
int main() {
    char *itself[]={ "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
    int a, b,n;

    scanf("%d %d", &a, &b);
    for( n=a; n<=b; n++)
    {
        if(1 <= n && n <= 9)
            printf("%s\n",itself[n]);
        else if(n%2==0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }
    }
    return 0;
}
