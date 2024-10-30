#include <stdio.h>

int main() {
    int n;
    int num,sum=0;
    scanf("%d",&n);
    for ( int i = 1 ; i<=n ; i++)
    {
        scanf("%d",&num);
        if(num%2!=0&&num%3==0)
        {
            sum = sum+num;
        }
    }
    printf("%d",sum);
    return 0;
}