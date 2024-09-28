#include <stdio.h>

int main() {
    int cntThree=0, cntFive=0;
    int a;
    for(int i = 0; i<10 ; i++)
    {
        scanf("%d",&a);
        if(a%3==0)
            cntThree++;
        if(a%5==0)
            cntFive++;
    }

    printf("%d %d",cntThree,cntFive);

    return 0;
}