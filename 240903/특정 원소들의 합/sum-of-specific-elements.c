#include <stdio.h>

int main() {
    
    int arr[4][4];
    int sum=0;

    for(int i = 0; i<4 ; i++)
    {
        for(int j = 0; j<4; j++)
        {
            scanf("%d ",&arr[i][j]);
        }
    }
    
    for(int i = 0; i<4 ; i++)
    {
        for(int j = 0; j<4; j++)
        {
            if(j<=i)
            sum += arr[i][j];
        }
    }

    printf("%d",sum);


    return 0;
}