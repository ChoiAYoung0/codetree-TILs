#include <stdio.h>

int main() {
    int arr[100];
    int cntarr[11]={0,};
    int i=0;
    while(1)
    {
        int n;
        scanf("%d",&n);
        if(n>=10)
        {
            arr[i] = n;
            i++;
        }
        else if(n==0)
            break;
        
        
    }
    for(int j=0 ; j<i ; j++)
    {
        cntarr[arr[j]/10]++;
    }
    for(int j=10 ; j>=1 ; j--)
    {
        printf("%d0 - %d\n",j,cntarr[j]);
    }
    return 0;
}