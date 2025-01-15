#include <stdio.h>

int main() {
    int arr[10] = {0,};
    int arr2[100];
    int n;
    scanf("%d",&n);
    for(int i= 0 ; i<n ; i++)
    {
        scanf("%d",&arr2[i]);
    }
    for(int j=0 ; j<n ; j++)
    {
        arr[arr2[j]]++;
    }
    for(int i=1 ; i<10 ; i++)
    {
        printf("%d\n",arr[i]);
    }

    return 0;
}