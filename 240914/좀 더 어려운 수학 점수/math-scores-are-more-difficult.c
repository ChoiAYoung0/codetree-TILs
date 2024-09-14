#include <stdio.h>

int main() {
    int aMath, aEng, bMath, bEng;
    scanf("%d%d%d%d",&aMath,&aEng,&bMath,&bEng);
    if(aMath>bMath)
    {
        printf("A");
    }
    else if(bMath>aMath)
    {
        printf("B");
    }
    else if(aMath==bMath && aEng>bEng)
    {
        printf("A");
    }
    else
    {
        printf("B");
    }
    return 0;
}