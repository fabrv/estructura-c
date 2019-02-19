#include "../minunit.h"
#include <stdio.h>
#include "point.h"

int tests_run = 0;

static char * test_quad(){
  struct Point point;
  point.x = 100;
  point.y = 100;
  mu_assert("Must be quadrant 1", quadrant(point)==1);
  return 0;
}

static char * all_tests() {
    mu_run_test(test_quad);
    return 0;
}

int main(int argc, char **argv) {
  char *result = all_tests();
  if (result != 0) {
      printf("%s\n", result);
  }
  else {
      printf("ALL TESTS PASSED\n");
  }
  printf("Tests run: %d\n", tests_run);

  return result != 0;
}