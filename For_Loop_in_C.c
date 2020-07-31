#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    static const char* cont[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    scanf("%d\n%d", &a, &b);
    
    for (; a <= b; a++)
    {
       if (a >= 1 && a <= 9)
       {
           printf("%s\n", cont[a-1]);
       }
       else if (a > 9 && a % 2 == 0)
       {
           printf("even\n");
       }
       else if (a > 9 && a % 2 != 0)
       {
           printf("odd\n");
       }

    }

    return 0;
}
