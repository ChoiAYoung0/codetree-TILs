#include <stdio.h>

int main() {
    int a = 5, b = 6, c = 7;
    int tempC, tempB;

    tempC = c;
    tempB = b;
    b = a;
    c = tempB;
    a = tempC;

    printf("%d\n%d\n%d",a,b,c);
    return 0;
}