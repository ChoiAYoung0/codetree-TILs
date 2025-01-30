#include <stdio.h>
#include <string.h>

int main() {
    char arr[21],arr2[21];

    scanf("%s%s",arr,arr2);

    arr2[0] = arr[0];
    arr2[1] = arr[1];

    printf("%s",arr2);


    return 0;
}