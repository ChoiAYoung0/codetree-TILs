#include <stdio.h>
#include <string.h>

int main() {
    char arr[21];
    char ee[3] = {'e','e'};
    char ab[3] = {'a','b'};
    int len;
    int eeb=0, abb=0;

    scanf("%s",arr);
    len = strlen(arr);

    for(int i=0 ; i<len-1 ; i++)
    {
        for(int j=0 ; j<2 ; j++)
        {
            if(arr[i]==ee[j] && arr[i+1]==ee[j+1])
            {
                eeb = 1;
            }
            if(arr[i]==ab[j] && arr[i+1]==ab[j+1])
            {
                abb = 1;
            }
        }
        
        
    }

    if(eeb==1)
        printf("Yes ");
    else
        printf("No ");

    if(abb==1)
        printf("Yes");
    else
        printf("No");


    return 0;
}