#include "minunit.h"
#include <stdio.h>
#include "point.c"

static char * test_quad(){
  struct point 
  mu_assert("Must be quadrant 1", quadrant())
}