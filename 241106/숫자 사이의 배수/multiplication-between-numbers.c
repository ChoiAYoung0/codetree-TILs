#include <stdio.h>

int main() {
    int a,b;
    int sum=0;
    float count=0;
    scanf("%d %d",&a, &b);
    for(int i = a; i<=b ; i++)
    {
        if(i%5==0||i%7==0)
        {
            sum = sum + i;
            count++;
        }
    }
    printf("%d %.1f",sum, sum/count);
    return 0;
}