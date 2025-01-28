#include <stdio.h>

int main() {
    int n;
    int arr[1000];
    int max=0;


    scanf("%d",&n);
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0 ; i<n ; i++)
    {
        for(int j=n-1 ; j>i ; j--)
        {
            if(arr[j]-arr[i]>max)
            {
                max = arr[j] - arr[i];
            }
        }
    }

    printf("%d",max);

    return 0;
}