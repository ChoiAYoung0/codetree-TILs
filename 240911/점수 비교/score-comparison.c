#include <stdio.h>

int main() {
    int aMath,aEng,bMath,bEng;
    scanf("%d%d%d%d",&aMath,&aEng,&bMath,&bEng);
    if(aMath>bMath && aEng>bEng)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
    return 0;
}