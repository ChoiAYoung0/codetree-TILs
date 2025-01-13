#include <stdio.h>

int main() {
    int n;
    int cnt=0;
    scanf("%d",&n);
    for(int i=0 ; i< n ; i++)
    {
        if(i%2==0)
        {
            for(int j=0 ; j<n ; j++)
            {
                cnt++;
                printf("%d ",cnt);
            }
        }
        else
        {
            for(int j=0 ; j<n ; j++)
            {
                cnt = cnt + 2;
                printf("%d ",cnt);
            }
        }
        printf("\n");
    }
    return 0;
}