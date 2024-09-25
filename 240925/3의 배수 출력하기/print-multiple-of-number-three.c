#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int i=1;
    while(i*3<=n)
    {
        printf("%d ",i*3);
        i++;
    }
    return 0;
}