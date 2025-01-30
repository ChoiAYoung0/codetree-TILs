#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char arr[21];
    int len;
    int sum=0;
    
    scanf("%s",arr);
    len = strlen(arr);

    for(int i=0 ; i<len ; i++)
    {

        if(isdigit(arr[i]))
        {   
            sum += arr[i]-'0';
        }
    }

    printf("%d",sum);



    return 0;
}