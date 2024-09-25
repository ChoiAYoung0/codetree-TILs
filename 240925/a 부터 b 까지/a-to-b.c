#include <stdio.h>

int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d ",a);
    while(a<b)
    {
        if(a%2==1)
        {
            a *= 2;
            printf("%d ",a);
        }
        else if(a%2==0)
        {
            a += 3;
            printf("%d ",a);
        }
    }
    return 0;
}