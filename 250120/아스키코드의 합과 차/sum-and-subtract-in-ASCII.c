#include <stdio.h>

int main() {
    int a,b;
    char c,d;
    int di;
    
    scanf("%c %c",&c,&d);

    a = c;
    b = d;

    if(a>=b)
    {
        di = a-b;
    }
    else
    {
        di = b-a;
    }

    printf("%d %d",a+b,di);

    return 0;
}