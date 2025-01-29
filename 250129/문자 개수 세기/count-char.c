#include <stdio.h>
#include <string.h>

int main() {
    char str[101];
    char idx;
    int cnt=0;
    int i=0;

    fgets(str,101,stdin);
    scanf("%c",&idx);

    while(str[i]!='\n')
    {
        if(str[i]==idx)
        {
            cnt++;
        }
        i++;
    }

    printf("%d",cnt);

    return 0;
}