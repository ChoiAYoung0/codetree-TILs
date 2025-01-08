#include <stdio.h>

int main() {
    int w,h;
    char a;
    while(1)
    {
        scanf("%d %d %c",&w,&h,&a);
        printf("%d\n",w*h);
        if(a=='C')
            break;
    }
    return 0;
}