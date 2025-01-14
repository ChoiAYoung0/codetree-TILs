#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int x = 'A';
    for(int i=0 ; i<n ; i++)
    {
        for(int j=1 ; j<=i ; j++)
        {
            printf("  ");
        }
        for(int j=n-i ; j>0 ; j--)
        {
            if(x == 'Z'+1)
                x = 'A';
            printf("%c ",x);
            x++;
        }
        printf("\n");
    }
    return 0;
}