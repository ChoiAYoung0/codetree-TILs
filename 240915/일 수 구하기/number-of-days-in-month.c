#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    if(n%2!=0&&n<8||n%2==0&&n>9)
    {
        if(n==2)
        {
            printf("28");
        }
        else
            printf("31");
    }
    else
    {
        printf("30");
    }

    
    return 0;
}