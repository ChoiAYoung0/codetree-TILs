#include <stdio.h>
#include <string.h>

int main() {
    char arr[21];
    int idx;
    int len;

    scanf("%s",arr);

    len = strlen(arr);

    while(1)
    {
        scanf("%d",&idx);

        if(len>idx)
        {
            for(int i=idx ; i<len-1 ; i++)
            {
                arr[i] = arr[i+1];
            }
        }

        arr[len-1] = '\0';

        len--;

        printf("%s\n",arr);

        if(len==1)
        {
            break;
        }




    }




    return 0;
}