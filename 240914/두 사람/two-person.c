#include <stdio.h>

int main() {
    int aAge, bAge;
    char aGender, bGender;
    scanf("%d %c",&aAge,&aGender);
    scanf("%d %c",&bAge,&bGender);
    if(aAge>=19&&aGender=='M' || bAge>=19&&bGender=='M')
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
    return 0;
}