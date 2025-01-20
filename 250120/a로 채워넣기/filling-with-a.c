#include <stdio.h>
#include <string.h>

int main() {
    char arr[101];
    int len;

    scanf("%s",arr);
    len = strlen(arr);

    arr[1] = 'a';
    arr[len-2] = 'a';

    printf("%s",arr);



    return 0;
}