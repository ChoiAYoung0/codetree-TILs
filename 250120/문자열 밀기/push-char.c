#include <stdio.h>
#include <string.h>

int main() {
    char arr[21];
    char temp;
    int len;

    scanf("%s",arr);
    len = strlen(arr);
    temp = arr[0];

    for(int i=0 ; i<len-1 ; i++)
    {
        arr[i] = arr[i+1];
    }

    arr[len-1] = temp;

    printf("%s",arr);

    return 0;
}