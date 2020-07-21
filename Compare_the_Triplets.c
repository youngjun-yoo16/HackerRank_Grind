#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char* ltrim(char*);
char* rtrim(char*);
char** split_string(char*);

// Complete the compareTriplets function below.

/*
 * To return the integer array from the function, you should:
 *     - Store the size of the array to be returned in the result_count variable
 *     - Allocate the array statically or dynamically
 *
 * For example,
 * int* return_integer_array_using_static_allocation(int* result_count) {
 *     *result_count = 5;
 *
 *     static int a[5] = {1, 2, 3, 4, 5};
 *
 *     return a;
 * }
 *
 * int* return_integer_array_using_dynamic_allocation(int* result_count) {
 *     *result_count = 5;
 *
 *     int *a = malloc(5 * sizeof(int));
 *
 *     for (int i = 0; i < 5; i++) {
 *         *(a + i) = i + 1;
 *     }
 *
 *     return a;
 * }
 *
 */
int* compareTriplets(int a_count, int* a, int b_count, int* b, int* result_count) {

    a_count = 0;
    b_count = 0;

    for (int i = 0; i<3; i++)
    {
        if(a[i] > b[i])
        {   
            a_count++;
        }
        else if(a[i] < b[i])
        {
            b_count++;
        }
    }

    *result_count = 2;

    int *c = malloc(2 * sizeof(int));
 
      for (int i = 0; i < 2; i++)
      {
          if (i == 0)
          {
              *(c + i) = a_count;
          }

            if (i == 1)
          {
              *(c + i) = b_count;
          }
          
          
      }

    return c;

}
