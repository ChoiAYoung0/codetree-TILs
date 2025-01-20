#include <stdio.h>

int main() {
    int n;
    int arr[1000];
    int mul[1000] = {0,};
    int max=-1;

    scanf("%d",&n);
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }


    for(int i=0 ; i<n ; i++)
    {
        mul[arr[i]]++;
    }


    for(int i=0 ; i<n ; i++)
    {
        if(mul[arr[i]]<2 && arr[i]>max)
            max = arr[i];
    }

    printf("%d",max);

    return 0;
}