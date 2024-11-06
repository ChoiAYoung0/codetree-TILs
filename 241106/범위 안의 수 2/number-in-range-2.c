#include <stdio.h>

int main() {
    int num;
    int sum=0;
    float count=0;
    for(int i=0; i<10; i++)
    {
        scanf("%d",&num);
        if(num>=0&&num<=200)
        {
            sum += num;
            count++;
        }
    }
    printf("%d %.1f",sum, sum/count);
    return 0;
}