#include <stdio.h>

int main() {
    int a,b,c;
    int cnt =0;
    scanf("%d%d%d",&a,&b,&c);
    for(int i=a ; i<=b ; i++)
    {
        if(i%c==0)
        {
            cnt = 1;
        }
    }
    if(cnt==1)
    {
        printf("YES");
    }
    else
        printf("NO");
    return 0;
}