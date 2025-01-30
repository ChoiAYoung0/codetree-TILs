#include <stdio.h>
#include <string.h>

int main() {
    char arr[21];
    char o,t;
    int len;

    scanf("%s",arr);

    o = arr[0];
    t = arr[1];

    len = strlen(arr);

    for(int i=0 ; i<len ; i++)
    {
        if(arr[i]==o)
        {
            arr[i] = t;
            continue;
        }
        if(arr[i]==t)
        {
            arr[i] = o;
        }
    }

    printf("%s",arr);
    


    return 0;
}