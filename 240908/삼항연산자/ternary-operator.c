#include <stdio.h>

int main() {
    int score;
    int res;
    scanf("%d",&score);
    res = score>=100?1:0;
    if(res==1)
        printf("pass");
    else
        printf("failure");

    return 0;
}