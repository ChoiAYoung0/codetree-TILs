#include <stdio.h>

int main() {
    int n;
    int cnt=9;
    scanf("%d",&n);
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            if(cnt<1)
                cnt = 9;
            
            printf("%d",cnt);
            cnt--;
        }
        printf("\n");
    }
    return 0;
}