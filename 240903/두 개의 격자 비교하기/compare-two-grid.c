#include <stdio.h>

int main() {
    int arr1[10][10], arr2[10][10], arr3[10][10];
    int n,m;

    scanf("%d ",&n);
    scanf("%d ",&m);

    for(int i = 0; i<n ; i++)
    {
        for(int j = 0; j<m ; j++)
        {
            scanf("%d ",&arr1[i][j]);
        }
    }

    for(int i = 0; i<n ; i++)
    {
        for(int j = 0; j<m ; j++)
        {
            scanf("%d ",&arr2[i][j]);
        }
    }

    for(int i = 0; i<n ; i++)
    {
        for(int j = 0; j<m ; j++)
        {
            if(arr1[i][j] == arr2[i][j])
            {
                arr3[i][j] = 0;
            }
            else
                arr3[i][j] = 1;
        }
    }

    for(int i = 0; i<n ; i++)
    {
        for(int j = 0; j<m ; j++)
        {
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }

    return 0;
}