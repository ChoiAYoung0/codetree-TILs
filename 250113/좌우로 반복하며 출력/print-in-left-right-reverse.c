#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            if(i%2==0)
            {
                printf("%d",j+1);
            }
            else
            {
                printf("%d",n-j);
            }
        }
        printf("\n");
    }
    return 0;
}