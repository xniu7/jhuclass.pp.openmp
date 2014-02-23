#include <stdio.h>
#include "omp.h"

main()
{
  int i;
  int sh = 0;
  int pr = 0; 
  omp_set_num_threads(6);
  
  #pragma omp parallel for private(pr) shared(sh)
  for ( i=0;i<10;i++)
  {
    printf("OMP Thread# %d, pr++=%d, sh++=%d\n", omp_get_thread_num(), pr++, sh++);
  }
}
