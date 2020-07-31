#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n, sum = 0;
    scanf("%d", &n);
    
    while (n > 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }

    printf("%d", sum);
    
    return 0;
}

/* Sample Input 0

10564

Sample Output 0

16 */
