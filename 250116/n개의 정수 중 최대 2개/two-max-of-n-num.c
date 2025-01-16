#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    int arr[100];
    int max1, max1idx = 0;
    int max2 = INT_MIN;
    scanf("%d",&n);
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    max1 = arr[0];
    for(int i=0 ; i<n ; i++)
    {
        if(max1<arr[i])
        {
            max1 = arr[i];
            max1idx = i;
        }
    }
    for(int i=0 ; i<n ; i++)
    {
        if(i == max1idx)
            continue;
        
        if(max2<arr[i])
        {
            max2 = arr[i];
        }
    }
    printf("%d %d",max1,max2);
    return 0;
}