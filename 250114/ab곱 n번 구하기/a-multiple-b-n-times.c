#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=0 ; i<n ; i++)
    {
        int a,b;
        int sum=1;
        scanf("%d %d",&a,&b);
        for(int j=a ; j<=b ; j++)
        {
            sum = sum*j;
        }
        printf("%d\n",sum);
    }
    return 0;
}