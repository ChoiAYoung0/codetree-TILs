#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int x = 'A';
    for(int i=0 ; i<n ; i++)
    {
        
        for(int j=0 ; j<=i ; j++)
        {
            printf("%c",x);
            x++;
            if(x == 'Z'+1)
            x = 'A';
        }
        printf("\n");
    }
    return 0;
}