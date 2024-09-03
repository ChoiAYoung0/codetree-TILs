#include <stdio.h>

int main() {
    int n, m;
    int arr[100][100];
    int num=0;

    scanf("%d ",&n);
    scanf("%d ",&m);


    for(int i = 0; i<m ; i++)
    {
        if(i % 2 == 0)
        {
            for(int j = 0; j<n ; j++)
            {
                arr[j][i] = num;
                num++;
            }
        }
        else
        {
            for(int j = n-1; j>=0 ; j--)
            {
                arr[j][i] = num;
                num++;
            }
        }
        
        
    }

    for(int i = 0 ; i<n ; i++)
    {
        for (int j = 0; j<m ; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }


    return 0;
}