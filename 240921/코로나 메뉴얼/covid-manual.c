#include <stdio.h>

int main() {
    char a,b,c;
    int atem, btem, ctem;
    int A=0;

    scanf("%c %d\n",&a,&atem);
    if(a == 'Y' && atem >=37)
        A += 1;
    
    scanf("%c %d\n",&b,&btem);
    if(b == 'Y' && btem >=37)
        A += 1;

    scanf("%c %d",&c,&ctem);
    if(c == 'Y' && ctem >=37)
        A += 1;



    if(A>=2)
        printf("E");
    else
        printf("N");


    return 0;
}