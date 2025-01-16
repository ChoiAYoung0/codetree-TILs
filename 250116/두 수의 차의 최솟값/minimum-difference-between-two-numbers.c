#include <stdio.h>

int main() {
    int n;
    int arr[10];
    int min;
    scanf("%d",&n);
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    min = arr[1] - arr[0];
    for(int i=n-1 ; i>0 ; i--)
    {
        for(int j=i-1 ; j>=0 ; j--)
        {
            if(arr[i]-arr[j]<min)
                min = arr[i] - arr[j];
        }
    
    }
    printf("%d",min);
    return 0;
}