Example programs used in the OpenMP in https://computing.llnl.gov/tutorials/openMP/exercise.html.

*** omp_hello.c

  Simple OpenMP program that shows parallel threads through a block.

*** omp_workshare1.c

  Simple OpenMP program that shows SCHEDULE(dynamic) and SCHEDULE(static), and the concept of trunk. The dynamic is not deterministic, the static is deterministic
  
*** omp_mm.c

  Simple OpenMP program that showsSCHEDULE(STATIC,CHUNK) directive
  
*** omp_workshare2.c

  This example demonstrates use of the OpenMP SECTIONS work-sharing construct Note how the PARALLEL region is divided into separate sections, each of which will be executed by one thread. 
