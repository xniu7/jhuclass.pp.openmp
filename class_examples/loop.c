#include <stdio.h>
#include "omp.h"

main()
{
  int i;
  
  omp_set_num_threads(10);
  
  #pragma omp parallel for
  for (i=0;i<10;i++)
  {
    printf("OMP Thread# %d\n", omp_get_thread_num());
  }
}
