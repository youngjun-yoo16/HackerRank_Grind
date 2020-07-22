#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char s[100];
    char sen[100];
      
    scanf("%c\n", &ch);
    scanf("%s\n", s);
    scanf("\n%[^\n]sen", sen);

    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s", sen);

    return 0;
}


/*Sample Input 0

C
Language
Welcome To C!!

Sample Output 0

C
Language
Welcome To C!!*/
