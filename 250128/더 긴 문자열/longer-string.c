#include <stdio.h>
#include <string.h>

int main() {
    
    char one[21], two[21];
    int o,t;

    scanf("%s%s",one,two);

    o = strlen(one);
    t = strlen(two);

    if(o>t)
    {
        printf("%s %d",one,o);
    }
    else if(o==t)
    {
        printf("same");
    }
    else if(o<t)
    {
        printf("%s %d",two,t);
    }
    


    return 0;
}