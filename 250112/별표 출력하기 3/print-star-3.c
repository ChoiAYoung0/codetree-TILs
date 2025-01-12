#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=0 ; i<n ; i++)
    {
        if(i>0)
        {
            for(int j=1 ; j<=i*2;j++)
            {
                printf(" ");
            }
        }

        for(int j=(2*n)-(2*i)-1 ; j>0 ; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}