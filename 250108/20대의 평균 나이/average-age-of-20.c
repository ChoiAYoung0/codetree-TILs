#include <stdio.h>

int main() {
    int n;
    float sum=0;
    int count=0;
    while(1)
    {
        scanf("%d",&n);
        if(n>29||n<20)
            break;
        sum += n;
        count++;
    }
    printf("%.2lf",sum/count);
    return 0;
}