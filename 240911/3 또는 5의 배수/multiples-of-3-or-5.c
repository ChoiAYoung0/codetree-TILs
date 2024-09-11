#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    if(a%3==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    if(a%5==0)
    {
        printf("\nYES");
    }
    else
    {
        printf("\nNO");
    }
    return 0;
}