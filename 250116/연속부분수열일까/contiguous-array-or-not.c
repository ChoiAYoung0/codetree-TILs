#include <stdio.h>

int main() {
    int n1[100], n2[100];
    int n,m;
    int cnt=0;
    scanf("%d%d",&n,&m);
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d",&n1[i]);
    }
    for(int i=0 ; i<m ; i++)
    {
        scanf("%d",&n2[i]);
    }
    for(int i=0 ; i<n ; i++)
    {
        
        if(n1[i]==n2[0])
        {
            for(int j=0 ; j<m ; j++)
            {
                if(n2[j] != n1[i+j])
                    break;
                else
                    cnt++;
            }
            if(cnt==m)
            {
                printf("Yes");
                break;
            }
            else
            {
                cnt = 0;
                continue;
            }
        }
    }
    if(cnt==0)
    {
        printf("No");
    }
    return 0;
}