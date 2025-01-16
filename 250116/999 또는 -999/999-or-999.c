#include <stdio.h>

int main() {
    int arr[100];
    int i;
    int min_val,max_val;
    for(i= 0 ; i<100 ; i++)
    {
        int n;
        scanf("%d",&n);
        if(n==999||n==-999)
            break;
        else
            arr[i] = n;
    }
    min_val = arr[0];
    max_val = arr[0];
    for(int j=0 ; j<i ; j++)
    {
        if(min_val>arr[j])
            min_val = arr[j];
        
        if(max_val<arr[j])
            max_val = arr[j];
    }
    printf("%d %d",max_val,min_val);

    return 0;
}