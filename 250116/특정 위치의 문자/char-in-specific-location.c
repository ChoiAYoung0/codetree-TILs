#include <stdio.h>

int main() {
    char arr[6] = {'L','E','B','R','O','S'};
    char a;
    int idx=-1;
    scanf("%c",&a);
    for(int i=0 ; i<6 ; i++)
    {
        if(arr[i] == a)
            idx = i;
    }
    if(idx == -1)
    {
        printf("None");
    }
    else
    {
        printf("%d",idx);
    }
    return 0;
}