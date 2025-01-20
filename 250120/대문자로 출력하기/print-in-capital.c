#include <stdio.h>
#include <ctype.h>

int main() {
    char arr[101];
    scanf("%s",arr);

    for(int i=0 ; arr[i]!='\0' ; i++)
    {
        if(isalpha(arr[i]))
        {
            printf("%c",toupper(arr[i]));
        }
    }

    return 0;
}