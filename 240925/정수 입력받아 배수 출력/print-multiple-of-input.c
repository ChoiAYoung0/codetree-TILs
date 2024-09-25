#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=0; i<5; i++)
    {
        printf("%d ",n);
        n *= n;
    }
    return 0;
}