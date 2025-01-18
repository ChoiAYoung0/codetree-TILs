#include <stdio.h>
#include <string.h>

int main() {
    char str1[101],str2[101];
    fgets(str1,101,stdin);
    fgets(str2,101,stdin);

    if(str1[strlen(str1)-1]=='\n')
        str1[strlen(str1)-1] = '\0';
    if(str2[strlen(str2)-1]=='\n')
        str2[strlen(str2)-1] = '\0';

    for(int i=0 ; i<101 ; i++)
    {
        if(str1[i]=='\0')
            break;
        else
        {
            if(str1[i]==' ')
                continue;
            else
                printf("%c",str1[i]);
        }
    }
    for(int i=0 ; i<101 ; i++)
    {
        if(str2[i]=='\0')
            break;
        else
        {
            if(str2[i]==' ')
                continue;
            else
                printf("%c",str2[i]);
        }
    }

    return 0;
}