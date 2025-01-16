#include <stdio.h>

int main() {
    int n;
    int arr[100];
    int min_val;
    int cnt=0;
    scanf("%d",&n);
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    min_val = arr[0];
    for(int i=0 ; i<n ; i++)
    {
        if(min_val>arr[i])
        {
            min_val = arr[i];
        }
    }
    for(int i=0 ; i<n ; i++)
    {
        if(min_val==arr[i])
        {
            cnt++;
        }
    }
    printf("%d %d",min_val,cnt);
    return 0;
}