#include <stdio.h>

int main() {
    int n;
    int arr[1000];
    int max=-1;
    scanf("%d",&n);
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0 ; i<n ; i++)
    {
        if(max<arr[i])
        {
            max = arr[i];
        }
        else if(max == arr[i])
        {
            max = -1;
        }
    }
    printf("%d",max);
    return 0;
}