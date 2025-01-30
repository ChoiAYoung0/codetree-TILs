#include <stdio.h>
#include <string.h>

int main() {
    char arr[21];
    int cntee=0,cnteb=0;
    int len;

    scanf("%s",arr);
    len = strlen(arr);

    for(int i=0 ; i<len-1 ; i++)
    {
        if(arr[i]=='e'&&arr[i+1]=='e')
        {
            cntee++;
        }
        if(arr[i]=='e'&&arr[i+1]=='b')
        {
            cnteb++;
        }
    }

    printf("%d %d",cntee,cnteb);



    return 0;
}