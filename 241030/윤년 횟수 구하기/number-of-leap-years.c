#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int a=0;
    for(int i = 1 ; i <= n ; i++)
    {
        if(i%4==0)
        {
            if(i%100==0&&i%400!=0)
            {
                continue;
            }
            a++;
        }
    }
    printf("%d",a);
    return 0;
}