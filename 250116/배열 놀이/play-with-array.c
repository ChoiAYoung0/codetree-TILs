#include <stdio.h>

int main() {
    int n,q;
    int arr[100];
    scanf("%d%d",&n,&q);
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0 ; i<q ; i++)
    {
        int a,b,s,e;
        int num;
        scanf("%d",&num);
        if(num==1)
        {
            scanf("%d",&a);
            printf("%d\n",arr[a-1]);
        }
        else if(num==2)
        {
            scanf("%d",&b);
            int idx=-1;
            for(int j=0 ; j<n ; j++)
            {
                if(arr[j]==b)
                {
                    idx = j;
                    printf("%d\n",idx+1);
                    break;
                }
            }
            if(idx==-1)
            {
                printf("0\n");
            }
        }
        else if(num==3)
        {
            scanf("%d%d",&s,&e);
            for(int j=s ; j<=e ; j++)
            {
                printf("%d ",arr[j-1]);
            }
            printf("\n");
        }
    }
    return 0;
}