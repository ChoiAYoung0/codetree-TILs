#include <stdio.h>

int main() {
    float arr[8];
    float sum=0.0;
    for(int i=0 ; i<8 ; i++)
    {
        scanf("%f",&arr[i]);
        sum += arr[i];
    }
    printf("%.1f",sum/8);
    return 0;
}