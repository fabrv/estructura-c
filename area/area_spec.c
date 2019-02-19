#include "../minunit.h"
#include <stdio.h>
#include "area.h"

int tests_run = 0;

static char * test_area(){
  struct Square square;
  square.height = 80;
  square.width = 26;
  mu_assert("Must be 2080", area(square)==2080);
  return 0;
}

static char * all_tests() {
    mu_run_test(test_area);
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