#include <stdio.h>
#include <string.h>

int main() {
    int n;
    int sum=0;
    char a[10000000];
    char temp;
    int len;

    scanf("%d",&n);

    for(int i=0 ; i<n ; i++)
    {
        int j;
        scanf("%d",&j);
        sum += j;
    }

    sprintf(a,"%d",sum);

    len = strlen(a);

    temp = a[0];
    for(int i=0 ; i<len-1 ; i++)
    {
        a[i] = a[i+1];
    }
    a[len-1] = temp;

    printf("%s",a);


    return 0;
}