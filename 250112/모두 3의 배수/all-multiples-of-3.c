#include <stdio.h>

int main() {
    int n;
    int cnt=0;
    for(int i=1 ; i<5 ; i++)
    {
        scanf("%d",&n);
        if(n%3!=0)
            cnt = 1;
    }
    if(cnt==1)
        printf("0");
    else
        printf("1");

    return 0;
}