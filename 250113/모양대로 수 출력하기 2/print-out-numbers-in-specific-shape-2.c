#include <stdio.h>

int main() {
    int n;
    int cnt=2;
    scanf("%d",&n);
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            if(cnt>=10)
                cnt = 2;

            printf("%d ",cnt);
            cnt += 2;
        }
        printf("\n");
    }
    return 0;
}