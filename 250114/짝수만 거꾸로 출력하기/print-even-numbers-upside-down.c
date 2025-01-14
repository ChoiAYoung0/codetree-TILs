#include <stdio.h>

int main() {
    int n;
    int arr[100];
    int cnt=0;
    scanf("%d",&n);
    for(int i=0 ; i<n ; i++)
    {
        int a;
        scanf("%d",&a);
        if(a%2==0)
        {
            arr[cnt] = a;
            cnt++;
        }
            
    }
    for(int i=cnt-1 ; i>=0 ; i--)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}