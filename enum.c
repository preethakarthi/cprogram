#include<stdio.h>
void main()
{
 enum week{mon,tue,};
 printf("%d %d\n",mon,tue);
 enum day{wed=0,thur=1,fri=0};
 printf("%d %d %d\n",wed,thur,fri);
 enum fruit{orange=7,apple,grape=1,mango};
 printf("%d %d %d %d\n",orange,apple,grape,mango);
}
