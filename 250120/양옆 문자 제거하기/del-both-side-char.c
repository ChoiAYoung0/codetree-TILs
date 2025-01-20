#include <stdio.h>
#include <string.h>

int main() {
    char arr[101];
    int len;

    scanf("%s",arr);
    len = strlen(arr);

    for(int i=1 ; i<len ; i++)
    {
        arr[i] = arr[i+1];
    }

    arr[len-1] = '\0';

    for(int i=len-3 ; i<len-1 ; i++)
    {
        arr[i] = arr[i+1];
    }

    arr[len-2] = '\0';

    printf("%s",arr);

    

    return 0;
}