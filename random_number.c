#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void)
{
    // srand needs an unsigned integer which it sets as the seed for the next calls of rand()
    // we can always generate unique seeds using time()
    // as srand() produces deterministic results and
    // hence we need a unique number always to produce satisfactory psuedo-random numbers 
   srand(time(NULL));

   printf("%d\n",rand());
   printf("%d\n",rand());
   printf("%d\n",rand());
   printf("%d\n",rand());
   return 0;
}