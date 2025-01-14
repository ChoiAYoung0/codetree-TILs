#include <stdio.h>

int main() {
    int arr[10];
    int sum=0;
    float cnt=0.0;
    for(int i=0 ; i<10 ; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>=250)
            break;
        else
        {
            sum = sum + arr[i];
            cnt++;
        }
    }
    printf("%d %.1f",sum,sum/cnt);

    return 0;
}