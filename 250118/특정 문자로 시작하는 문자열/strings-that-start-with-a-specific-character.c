#include <stdio.h>
#include <string.h>

int main() {
    int n;
    float sum=0.0;
    int cnt = 0;
    char idx;
    float avg=0.0;
    char arr[20][21];

    scanf("%d",&n);

    for(int i=0 ; i<n ; i++)
    {
        scanf("%s",arr[i]);
    }

    getchar();
    scanf("%c",&idx);

    for(int i=0 ; i<n ; i++)
    {
        if(arr[i][0]==idx)
        {
            sum += strlen(arr[i]);
            cnt++;
        }
            
    }

    avg = sum / cnt;

    printf("%d %.2f",cnt,avg);

    return 0;
}