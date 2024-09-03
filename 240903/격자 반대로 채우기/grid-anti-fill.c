#include <stdio.h>

int main() {
    int arr[10][10];
    int n;
    int num=1;

    scanf("%d",&n);

    if(n%2==0)
    {
        for(int j = n-1; j>=0 ; j--)
        {
            if(j%2==1)
            {
                for(int i=n-1 ; i>=0 ; i--)
                {
                    arr[i][j] = num;
                    num++;
                }
            }
            else
            {
                for(int i=0 ; i<n ; i++)
                {
                    arr[i][j] = num;
                    num++;
                }
            }
        }
    }
    else
    {
        for(int j = n-1; j>=0 ; j--)
        {
            if(j%2==0)
            {
                for(int i=n-1 ; i>=0 ; i--)
                {
                    arr[i][j] = num;
                    num++;
                }
            }
            else
            {
                for(int i=0 ; i<n ; i++)
                {
                    arr[i][j] = num;
                    num++;
                }
            }
        }
    }


    for(int i = 0 ; i<n ; i++)
    {
        for(int j = 0; j<n ; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}