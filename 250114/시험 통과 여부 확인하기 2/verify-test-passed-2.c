#include <stdio.h>

int main() {
    int n;
    int arr[4];
    int cnt=0;
    scanf("%d",&n);
    for(int i=0 ; i<n ; i++)
    {
        int sum=0;
        for(int j=0 ; j<4 ; j++)
        {
            scanf("%d",&arr[j]);
            sum += arr[j];
        }
        if(sum/4.0 >=60.0)
        {
            printf("pass\n");
            cnt++;
        }
        else
            printf("fail\n");
    }
    printf("%d",cnt);
    return 0;
}