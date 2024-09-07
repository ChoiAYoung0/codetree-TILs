#include <stdio.h>

int main() {
    int h,w
    scanf("%d%d",&h,&w);
    printf("%d",10000*w/h*h);
    if(10000*w/h*h>=25)
        printf("\nObesity");
    return 0;
}