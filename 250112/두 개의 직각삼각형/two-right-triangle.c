#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=0 ; i<n ; i++)
    {
        for(int j=n-i ; j>0 ; j--)
        {
            printf("*");
        }
        if(i>0)
        {
            for(int j=i*2 ; j>0 ; j--)
            {
                printf(" ");
            }
        }
        for(int j=n-i ; j>0 ; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}