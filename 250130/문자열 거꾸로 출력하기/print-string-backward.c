#include <stdio.h>
#include <string.h>

int main() {
    
    for(int i=0 ; i<10 ; i++)
    {
        char arr[101];
        int len;
        scanf("%s",arr);
        len = strlen(arr);
        if(strcmp(arr,"END")==0)
        {
            break;
        }
        for(int j=0 ; j<len ; j++)
        {
            printf("%c",arr[len-j-1]);
        }
        printf("\n");
    }

    return 0;
}