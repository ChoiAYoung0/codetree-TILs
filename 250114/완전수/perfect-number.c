#include <stdio.h>

int main() {
    int start,end;
    int cnt=0;
    scanf("%d%d",&start, &end);
    for(int i=start ; i<=end ; i++)
    {
        int sum=0;
        for(int j=1; j<i ; j++)
        {
            if(i%j==0)
                sum = sum + j;
        }
        if(sum == i)
            cnt++;
    }
    printf("%d",cnt);
    return 0;
}