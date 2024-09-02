#include <stdio.h>

int main() {
    int arr[2][4];
    float avg=0;
    int sum=0;

    for(int i = 0 ; i < 2 ; i++)
    {
        for(int j = 0; j < 4 ; j++ )
        {
            scanf("%d ",&arr[i][j]);
        }
    }

    for(int i = 0 ; i < 2 ; i++)
    {
        sum=0;
        for(int j = 0; j < 4 ; j++ )
        {
            sum += arr[i][j];
        }
        avg = sum / 4;
        printf("%.1f ",avg);
    }

    printf("\n");

    

    for(int i = 0 ; i < 4 ; i++)
    {
        sum=0;
        for(int j = 0; j < 2 ; j++ )
        {
            sum += arr[j][i];
        }
        avg = sum / 2;
        printf("%.1f ",avg);
    }

    printf("\n");

    sum=0;

    for(int i = 0 ; i < 2 ; i++)
    {
        for(int j = 0; j < 4 ; j++ )
        {
            sum += arr[i][j];
        }
    }
    avg = sum / 8;
    printf("%.1f ",avg);


    return 0;
}