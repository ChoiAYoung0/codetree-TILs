#include <stdio.h>

int main() {
    int a,b;
    int cnt=0;
    scanf("%d%d",&a,&b);
    for(int i=a ; i<=b ; i++)
    {
        if(1920%i==0 && 2880%i==0)
            cnt = 1;
    }
    if(cnt==1)
        printf("1");
    else
        printf("0");
    return 0;
}