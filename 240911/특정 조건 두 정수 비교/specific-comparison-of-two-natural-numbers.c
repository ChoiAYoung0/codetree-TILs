#include <stdio.h>

int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    if(a<b)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
    if(a==b)
    {
        printf("\n1");
    }
    else
    {
        printf("\n0");
    }
    return 0;
}