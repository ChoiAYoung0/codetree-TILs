#include <stdio.h>

int main() {
    int a,b,c;
    int cnt=0;
    scanf("%d%d%d",&a,&b,&c);
    for(int i=a ; i<=b ; i++)
    {
        if(i%c==0)
        {
            cnt=1;
            break;
        }
    }
    if(cnt==1)
        printf("NO");
    else
        printf("YES");
    return 0;
}