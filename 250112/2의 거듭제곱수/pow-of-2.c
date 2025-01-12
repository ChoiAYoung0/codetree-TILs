#include <stdio.h>

int main() {
    int n;
    int count=0;
    scanf("%d",&n);
    while(n!=1)
    {
        n = n/2;
        count++;
    }
    printf("%d",count);
    return 0;
}