#include <stdio.h>
#include <string.h>

int main() {
    
    int n;
    char arr[100001];
    int sum=0;
    int len;

    scanf("%d",&n);

    sprintf(arr,"%d",n);
    len = strlen(arr);

    for(int i=0 ; i<len ; i++)
    {
        sum += arr[i] - '0';
    }

    printf("%d",sum);

    return 0;
}