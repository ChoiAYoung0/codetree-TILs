#include <stdio.h>
#include <string.h>

int main() {
    char arr[101];
    char arr1[51];
    int j=0;
    int cnt;
    scanf("%s",arr);
    for(int i=0 ; arr[i] != '\0' ; i++)
    {
        if(i%2!=0)
        {
            arr1[j] = arr[i];
            j++;
        }
    }
    cnt = strlen(arr1);
    for(int i=cnt-1 ; i >=0 ; i--)
    {
        printf("%c",arr1[i]);
    }
    return 0;
}