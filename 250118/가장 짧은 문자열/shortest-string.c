#include <stdio.h>
#include <string.h>

int main() {
    char str1[21],str2[21],str3[21];
    int s1,s2,s3;
    scanf("%s\n%s\n%s",&str1,&str2,&str3);
    s1 = strlen(str1);
    s2 = strlen(str2);
    s3 = strlen(str3);

    if(s1>=s2 && s1>=s3)
    {
        if(s2<=s3)
            printf("%d",s1-s2);
        else   
            printf("%d",s1=s3);
    }
    if(s2>s1 && s2>=s3)
    {
        if(s1<=s3)
            printf("%d",s2-s1);
        else
            printf("%d",s2-s3);
    }
    if(s3>s1 && s3>s2)
    {
        if(s1<=s2)
            printf("%d",s3-s1);
        else
            printf("%d",s3-s2);
    }


    return 0;
}