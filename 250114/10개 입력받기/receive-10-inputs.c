#include <stdio.h>

int main() {
    int arr[10];
    float cnt=0.0;
    int sum=0;
    for(int i=0 ; i<10 ; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]==0)
            break;

        sum += arr[i];
        cnt++;
    }
    printf("%d %.1f",sum, sum/cnt);
    return 0;
}