#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char arr[10][101];
    int sum =0, cnt=0;

    scanf("%d",&n);
    for(int i=0 ; i<n ; i++)
    {
        scanf("%s",arr[i]);
    }

    for(int i=0 ; i<n; i++)
    {
        if(arr[i][0]=='a')
        {
            cnt++;
        }
        sum += strlen(arr[i]);
    }

    printf("%d %d",sum,cnt);


    return 0;
}