#include <stdio.h>

int main() {
    char a,b,c;
    int atem, btem, ctem;
    int A=0;

    scanf("%c %d",&a,&atem);
    if(a = 'Y' && atem >=37)
        A++;
    
    scanf("%c %d",&b,&btem);
    if(b = 'Y' && btem >=37)
        A++;

    scanf("%c %d",&a,&atem);
    if(c = 'Y' && ctem >=37)
        A++;

    
    if(A>=2)
        printf("E");
    else
        printf("N");


    return 0;
}