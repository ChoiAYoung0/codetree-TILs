#include <stdio.h>
#include <string.h>

int main() {
    char arr[101];
    int len;

    scanf("%s",arr);
    len = strlen(arr);

    for(int i=0 ; i<len ; i++)
    {
        if(arr[i]=='e')
        {
            for(int j=i ; j<len ; j++)
            {
                arr[j] = arr[j+1];
            }
            break;
        }
    }

    arr[len-1] = '\0';

    printf("%s",arr);

    return 0;
}