#include <stdio.h>

int main() {
    int arr[10];
    int cnt=0;
    for(int i=0 ; i<10 ; i++)
    {
        scanf("%d",&arr[i]);
        
        if(arr[i]==0)
            break;

        cnt++;
    }
    for(int i=0 ; i<cnt; i++)
    {
        printf("%d ",arr[cnt-i-1]);
    }
    return 0;
}