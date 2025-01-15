#include <stdio.h>

int main() {
    int n;
    int arr[100];
    int evenarr[100];
    int cnt=0;
    scanf("%d",&n);
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i]%2==0)
        {
            evenarr[cnt] = arr[i];
            cnt++;
        }
    }
    for(int i=0 ; i<cnt ; i++)
    {
        printf("%d ",evenarr[i]);
    }
    return 0;
}