#include <stdio.h>
#include "omp.h"

main ()
{
  {
    int x = 0;
  }
  printf ("No scope for %d\n", x);
}
