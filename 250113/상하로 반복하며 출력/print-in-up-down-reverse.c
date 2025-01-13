#include <stdio.h>

int main() {
    int n;
    int a=1,b;
    scanf("%d",&n);
    b = n;
    for(int i=0 ; i<n ;i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            if(j%2==0)
            {
                printf("%d",a);
            }
            else
            {
                printf("%d",b);
            }
        }
        printf("\n");
        a++;
        b--;
    }
    return 0;
}