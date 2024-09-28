#include <stdio.h>

int main() {
    int n;
    int cntTwo=0, cntThree=0, cntTwelve=0;
    scanf("%d",&n);
    cntTwo = n/2;
    cntThree = n/3;
    cntTwelve = n/12;
    printf("%d %d %d",cntTwo-n/6, cntThree-cntTwelve, cntTwelve);

    return 0;
}