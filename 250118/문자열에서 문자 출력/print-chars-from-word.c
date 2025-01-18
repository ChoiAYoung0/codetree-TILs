#include <stdio.h>

int main() {
    char arr[10];
    scanf("%s",arr);
    for(int i=0 ; arr[i]!='\0' ; i++)
    {
        printf("%c\n",arr[i]);
    }
    return 0;
}