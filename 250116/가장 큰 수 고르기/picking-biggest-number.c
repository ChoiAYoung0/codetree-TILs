#include <stdio.h>

int main() {
    int arr[10];
    int max_val;
    for(int i=0 ; i<10 ; i++)
    {
        scanf("%d",&arr[i]);
    }
    max_val = arr[0];
    for(int i=0 ; i<10 ; i++)
    {
        if(max_val<arr[i])
            max_val = arr[i];
    }
    printf("%d",max_val);
    return 0;
}