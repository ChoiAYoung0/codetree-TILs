#include <stdio.h>

int main() {
    int n;
    int arr[16][16];
    
    scanf("%d",&n);

    for(int i=1 ; i<=n ; i++)
    {
        for(int j=1 ; j<=i ; j++)
        {
            if(j==0 || j==i)
            {
                arr[i][j] = 1;
            }
            else
            {
                arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
            }
        }
    }

    for(int i=1 ; i<=n ; i++)
    {
        for(int j=1 ; j<=i ; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }


    return 0;
}