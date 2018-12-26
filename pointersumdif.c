#include <stdio.h>
void update(int *a,int *b) {

    int ad=*a,di;
    *a=*a+*b;
    *b=ad-*b;
    if(*b<0)
    {
     *b=-(*b);
    }

}
int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(&a,& b);

    printf("%d\n%d",a,b);
    return 0;
}
