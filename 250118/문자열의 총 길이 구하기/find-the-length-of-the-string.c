#include <stdio.h>
#include <string.h>

int main() {
    char arr[10][50];
    int sum=0;
    for(int i=0 ; i<10 ; i++)
    {
        scanf("%s",&arr[i]);
    }

    for(int i=0 ; i<10 ; i++)
    {
        sum += strlen(arr[i]);
    }

    printf("%d",sum);

    return 0;
}