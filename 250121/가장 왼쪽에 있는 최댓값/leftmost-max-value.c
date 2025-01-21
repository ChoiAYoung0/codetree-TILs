#include <stdio.h>

int main() {
    int n;
    int arr[1000];
    int max,idx;

    scanf("%d",&n);
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    max = arr[0];
    idx = 0;

    for(int i=0 ; i<n ; i++)
    {
        if(max<arr[i])
        {
            max = arr[i];
            idx = i;
        }
    }
    printf("%d ",idx+1);

    while(idx != 0)
    {
        max = arr[0];
        for(int i=0 ; i<idx ; i++)
        {
            if(max<arr[i])
            {
                max = arr[i];
                idx = i;
            }
        }
        if(max == arr[0])
        {
            idx = 0;
        }
        printf("%d ",idx+1);
    }

    return 0;
}