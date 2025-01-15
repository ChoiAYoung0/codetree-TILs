#include <stdio.h>

int main() {
    int a,b;
    int sum=0;
    int mod[1000] = {0,};
    scanf("%d%d",&a,&b);
    while(1)
    {
        mod[a%b]++;
        a = a/b;
        if(a<=1)
            break;
    }
    for(int i=0 ; i<1000; i++)
    {
        sum = sum + mod[i]*mod[i];
    }
    printf("%d",sum);
    return 0;
}