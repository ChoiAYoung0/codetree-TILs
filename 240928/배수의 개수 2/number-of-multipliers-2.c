#include <stdio.h>

int main() {
    int cnt=0;
    int a;
    for(int i = 0 ; i<10; i++)
    {
        scanf("%d",&a);
        if(a%2==1)
            cnt++;
    }
    printf("%d",cnt);
    return 0;
}