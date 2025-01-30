#include <stdio.h>
#include <string.h>

int main() {
    char arr[11];
    int len;

    scanf("%s",arr);

    printf("%s\n",arr);

    len = strlen(arr);

    for(int i=0 ; i<len ; i++)
    {

        char temp;
        temp = arr[len-1];
        for(int j=len-1 ; j>0 ; j--)
        {
            arr[j] = arr[j-1];
        }
        arr[0] = temp;

        printf("%s\n",arr);



    }


    return 0;
}