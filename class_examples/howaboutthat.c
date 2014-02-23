#include <stdio.h>
#include "omp.h"

main()
{
  int i;
  int x = 0; 
  omp_set_num_threads(6);
  
  #pragma omp parallel for private(i) shared(x)
  for (i=0;i<10;i++)
  {
    printf("OMP Thread# %d, i++=%d, x++=%d\n", omp_get_thread_num(), i++, x++);
  }
}
