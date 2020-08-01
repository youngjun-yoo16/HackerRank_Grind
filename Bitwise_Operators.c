#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void calculate_the_maximum(int n, int k) {
  int i, j;
  int maxAnd = 0;
  int maxOR = 0;
  int maxXor = 0;

  for(i = 1; i <= n; i++)
  {
      for(j = i + 1; j <= n; j++)
      {
          if(((i&j) > maxAnd) && ((i&j) < k))
            maxAnd = i&j;
        
          if(((i|j) > maxOR) && ((i|j) < k))
            maxOR = i|j;

          if(((i^j) > maxXor) && ((i^j) < k))
            maxXor = i^j;
      }
  }

    printf("%d\n%d\n%d\n", maxAnd, maxOR, maxXor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}


/* Task
Given set {1, 2, 3, . . . , n}, find:

the maximum value of a & b which is less than a given integer , where  and  (where a < b) are two integers from set .

the maximum value of a | b which is less than a given integer , where  and  (where a < b) are two integers from set .

the maximum value of a ^ b which is less than a given integer , where  and  (where a < b) are two integers from set . */

