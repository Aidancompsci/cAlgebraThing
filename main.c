#include "solve.h"
#include <stdio.h>
#include <string.h>

int main() {
  // value to substitute for X
  int x_value = 3;

  char *thing = "x + 3";
  int length = strlen(thing);

  int numbers[] = {3, 3, 6, 10};
  char operations[] = {'+', '-', '+'};

  // Solve Multiplicaiton & Division
  int mult_index;
  
  for (mult_index = 0; mult_index < (sizeof(operations) / sizeof(operations[0])); mult_index++) {
    char current_operation = operations[mult_index];
  }

  // Solve Addition & Subtraction
  int add_index;
  int solved_value = numbers[0];

  for (add_index = 0; add_index < (sizeof(operations) / sizeof(operations[0]));
       add_index++) {
    char current_operation = operations[add_index];
    solved_value = solve_operation(solved_value, numbers[add_index + 1],
                                   current_operation);
  }

  printf("%d", solved_value);
  return 0;
}
