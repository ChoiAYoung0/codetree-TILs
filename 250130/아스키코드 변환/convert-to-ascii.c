#include <stdio.h>

int main() {
    char a,a2;
    int b,b2;

    scanf("%c %d",&a,&b);

    a2 = (char) b;
    b2 = (int) a;

    printf("%d %c",a,b);


    return 0;
}