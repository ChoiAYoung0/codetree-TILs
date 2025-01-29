#include <stdio.h>
#include <string.h>

int main() {
    char arr[10][21];
    char idx;
    int cnt=0;

    for(int i=0 ; i<10 ; i++)
    {
        scanf("%s",arr[i]);
    }

    scanf(" %c",&idx);

    for(int i=0 ; i<10 ; i++)
    {
        if(arr[i][strlen(arr[i])-1]==idx)
        {
            printf("%s\n",arr[i]);
            cnt++;
        }
    }

    if(cnt==0)
        printf("None");

    return 0;
}