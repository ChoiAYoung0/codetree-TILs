#include <stdio.h>
#include <string.h>

int main() {
    char arr1[21];
    char arr2[10] = {'H','e','l','l','o'};
    scanf("%s",arr1);
    strcat(arr1,arr2);
    printf("%s",arr1);

    return 0;
}