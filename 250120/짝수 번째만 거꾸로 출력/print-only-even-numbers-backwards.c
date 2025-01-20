#include <stdio.h>
#include <string.h>

int main() {
    char arr[101];
    char arr1[101];
    int j=0;
    int cnt,cnt2;
    scanf("%s",arr);
    cnt2 = strlen(arr);
    for(int i=0 ; i<cnt2 ; i++)
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