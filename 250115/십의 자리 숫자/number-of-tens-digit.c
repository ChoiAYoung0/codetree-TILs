#include <stdio.h>

int main() {
    int arr[100];
    int cntarr[10]={0,};
    int i=0;
    while(1)
    {
        scanf("%d",&arr[i]);
        if(arr[i]==0)
            break;
        i++;
    }
    for(int j=0 ; j<i ; j++)
    {
        cntarr[arr[j]/10]++;
    }

    for(int j=1 ; j<10 ; j++)
    {
        printf("%d - %d\n",j,cntarr[j]);
    }

    return 0;
}