#include <stdio.h>

int main() {
    int arr[10];
    int sum=0;
    int sum3=0;
    for(int i=0 ; i<10; i++)
    {
        scanf("%d",&arr[i]);
        if(i%2!=0)
        {
            sum += arr[i];
        }

        if((i+1)%3==0)
        {
            sum3 += arr[i];
        }
    }
    printf("%d %.1f",sum,sum3/3.0);
    return 0;
}