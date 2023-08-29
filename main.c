#include "solve.h"
#include <stdio.h>
#include <string.h>

int main() {
  // value to substitute for X
  int x_value = 3;

  char *thing = "x + 3";
  int length = strlen(thing);

  int numbers[2] = {3, 3};
  char operations[1] = {"+"};

  // Solve Addition
  int index;
  int solved_value = numbers[0];

  for (index = 0; index < (sizeof(operations) / sizeof(operations[0]));
       index++) {
  }

  return 0;
}
