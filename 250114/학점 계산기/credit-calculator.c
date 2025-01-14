#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    float arr[5];
    float sum=0.0;
    for(int i= 0 ; i<n ; i++)
    {
        scanf("%f",&arr[i]);
        sum += arr[i];
    }
    printf("%.1f\n",sum/n);
    if(sum/n >= 4.0)
        printf("Perfect");
    else if(sum/n >= 3.0)
        printf("Good");
    else
        printf("Poor");
    return 0;
}