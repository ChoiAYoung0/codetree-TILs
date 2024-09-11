#include <stdio.h>

int main() {
    int m;
    scanf("%d",&m);
    if(m<12&&m>8)
    {
        printf("Fall");
    }
    else if(m>5&&m<9)
    {
        printf("Summer");
    }
    else if(m>2&&m<6)
    {
        printf("Spring");
    }
    else
    {
        printf("Winter");
    }
    return 0;
}