#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char arr[9],arr2[9];
    char na[9],na2[9];
    int sum=0;

    scanf("%s%s",arr,arr2);

    for(int i=0 ; i<9 ; i++)
    {
        if(isdigit(arr[i])==0)
        {
            for(int j=0 ; j<i ; j++)
            {
                na[j] = arr[j];
            }
            break;
        }
    }

    for(int i=0 ; i<9 ; i++)
    {
        if(isdigit(arr2[i])==0)
        {
            for(int j=0 ; j<i ; j++)
            {
                na2[j] = arr2[j];
            }
            break;
        }
    }

    sum = atoi(na) + atoi(na2);
    printf("%d",sum);

    return 0;
}