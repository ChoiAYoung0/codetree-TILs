#include <stdio.h>

int main() {
    int arr[10];
    int cntarr[7]={0,};
    for(int i=0 ; i<10 ; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0 ; i<10 ; i++)
    {
        cntarr[arr[i]]++;
    }
    for(int i=1 ; i<7 ; i++)
    {
        printf("%d - %d\n",i,cntarr[i]);
    }

    return 0;
}