#include <stdio.h>

int main() {
    int n,m;
    int cnt=0;
    int arr[100];
    scanf("%d%d",&n,&m);
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]==m)
            cnt++;
    }
    printf("%d",cnt);
    return 0;
}