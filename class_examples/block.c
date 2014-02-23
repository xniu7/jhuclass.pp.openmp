#include <stdio.h>
#include "omp.h"

main()
{
  int i;
  
  omp_set_num_threads(10);
  
  #pragma omp parallel
  {
    int tid = omp_get_thread_num();
    printf("OMP Thread# %d\n", tid);
    if(4==tid)
    {
      printf("Master says that there are %d threads\n", omp_get_num_threads());
    }
  }
}
