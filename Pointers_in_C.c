#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function    
    int tmp = *a;
    *a = *a + *b;
    *b = tmp - *b;
    if(*b < 0)
    {
        *b = -(*b);
    }
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d\n%d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

/*Input Format

The input will contain two integers,  and , separated by a newline.

Output Format

You have to print the updated value of  and , on two different lines.

Note: Input/ouput will be automatically handled. You only have to complete the function described in the 'task' section.

Sample Input

4
5

Sample Output

9
1*/


