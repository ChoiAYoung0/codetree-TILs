#include <stdio.h>

int main() {
    int n;
    while(1)
    {
        scanf("%d",&n);
        if(n<25)
            printf("Higher\n");
        else if(n>25)
            printf("Lower\n");
        else
        {
            printf("Good");
            break;
        }
    }
    return 0;
}