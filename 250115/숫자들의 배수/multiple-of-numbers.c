#include <stdio.h>

int main() {
    int n;
    int arr[2];
    int cnt=0;
    int i = 1;
    scanf("%d",&n);
    while(1)
    {
        printf("%d ",n*i);
        if((n*i)%5==0)
        {
            arr[cnt] = n*i;
            cnt++;
        }
        if(cnt==2)
        {
            break;
        }
        i++;
    }
    return 0;
}