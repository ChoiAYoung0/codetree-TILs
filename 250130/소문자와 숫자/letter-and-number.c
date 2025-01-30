#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char arr[101];
    int len;

    scanf("%s",arr);
    len = strlen(arr);

    for(int i=0 ; i<len ; i++)
    {
        if(isalpha(arr[i]))
        {
            printf("%c",tolower(arr[i]));
        }
        else if(isdigit(arr[i]))
        {
            printf("%c",arr[i]);
        }
    }


    return 0;
}