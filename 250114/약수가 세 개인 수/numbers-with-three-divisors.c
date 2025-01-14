#include <stdio.h>

int main() {
    int start,end;
    int cnt2=0;
    scanf("%d%d",&start,&end);
    for(int i=start ; i<=end ; i++)
    {
        int cnt=0;
        for(int j=1 ; j<=i ; j++)
        {
            if(i%j==0)
                cnt++;
        }
        if(cnt==3)
            cnt2++;
    }
    printf("%d",cnt2);
    return 0;
}