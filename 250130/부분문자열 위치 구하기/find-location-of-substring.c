#include <stdio.h>
#include <string.h>

int main() {
    char arr1[1001];
    char arr2[1001];
    int len1,len2;
    int idx=-1;
    int j;

    scanf("%s",arr1);
    scanf("%s",arr2);
    len1 = strlen(arr1);
    len2 = strlen(arr2);

    for(int i=0 ; i<=len1-len2 ; i++)
    {
        if(arr1[i]==arr2[0])
        {
            for(j=0 ; j<len2 ; j++)
            {
                if(arr1[i+j]!=arr2[j])
                {
                    break;
                }
            }
        }

        if(j==len2)
        {
            idx = i;
            break;
        }
    }

    printf("%d",idx);


    return 0;
}