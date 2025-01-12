#include <stdio.h>

int main() {
    int n;
    int cnt=0;
    scanf("%d",&n);
    for(int i=2 ; i<=1000; i++)
    {
        if(n%i==0 && n!=2 && n!=i)
        {
            cnt++;
            break;
        }
    }
    if(cnt==1)
        printf("C");
    else
        printf("P");
    return 0;
}