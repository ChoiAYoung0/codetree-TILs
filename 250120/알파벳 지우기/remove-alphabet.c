#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char a[9],b[9];
    int lenA,lenB;
    char na[9],nb[9];
    int j=0,k=0;
    int inta,intb;

    scanf("%s%s",a,b);
    lenA = strlen(a);
    lenB = strlen(b);

    for(int i=0 ; i<lenA ; i++)
    {
        if(isdigit(a[i]))
        {
            na[j] = a[i];
            j++;
        }
    }

    for(int i=0 ; i<lenB ; i++)
    {
        if(isdigit(b[i]))
        {
            nb[k] = b[i];
            k++;
        }
    }

    inta = atoi(na);
    intb = atoi(nb);

    printf("%d",inta+intb);
    
    
    return 0;
}