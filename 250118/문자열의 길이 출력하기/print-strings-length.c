#include <stdio.h>
#include <string.h>

int main() {
    char str1[101],str2[101];
    scanf("%s\n%s",&str1,&str2);
    printf("%d",strlen(str1)+ strlen(str2));
    return 0;
}