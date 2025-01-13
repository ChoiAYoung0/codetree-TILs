#include <stdio.h>

int main() {
    int n;
    int cnt;
    scanf("%d",&n);
    for(int i=0 ; i<n ; i++)
    {
        if(i%2==0)
        {
            cnt = i*n+1;
            for(int j=0; j<n ; j++)
            {
                printf("%d ",cnt);
                cnt++;
            }
        }
        else
        {
            cnt = i*n+n;
            for(int j=0 ; j<n ; j++)
            {
                printf("%d ",cnt);
                cnt--;
            }
        }
        printf("\n");
    }
    return 0;
}