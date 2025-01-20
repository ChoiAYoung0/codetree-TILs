#include <stdio.h>
#include <ctype.h>

int main() {
    char arr[21];
    scanf("%s",arr);
    for(int i=0 ; arr[i]!='\0' ; i++)
    {
        if(islower(arr[i]))
        {
            printf("%c",toupper(arr[i]));
        }
        else
        {
            printf("%c",tolower(arr[i]));
        }
    }
    return 0;
}