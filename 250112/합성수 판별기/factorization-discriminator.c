#include <stdio.h>

int main() {
    int n;
    int cnt=0;
    scanf("%d",&n);
    for(int i=2 ; i<=n-1 ; i++)
    {
        if(n%i==0)
            cnt = 1;
    }
    if(cnt==1)
        printf("C");
    else
        printf("N");
    return 0;
}