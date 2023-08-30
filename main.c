#include "solve.h"
#include <stdio.h>
#include <string.h>



int main() {
  // value to substitute for X
  int x_value = 3;

  char *thing = "x + 3";
  int length = strlen(thing);

  int numbers[] = {3, 3, 6, 10};
  char operations[] = {'+', '*', '+'};

  // Solve Multiplicaiton & Division
  int mult_index;
  //int mult_amount = count_multiplications(operations, (sizeof(operations) / sizeof(operations[0])));
  //printf("%d \n", mult_amount);
  char new_operations[(sizeof(operations) / sizeof(operations[0])) /*- mult_amount*/];
  int new_numbers[(sizeof(numbers) / sizeof(numbers[0])) /*- mult_amount*/];

  int new_index = 0;

  for (mult_index = 0;
       mult_index < (sizeof(operations) / sizeof(operations[0]));
       mult_index++) {
    // Currently Selected Operation
    char current_operation = operations[mult_index];
    // Used numbers
    int current_number = numbers[mult_index];
    int next_number = numbers[mult_index];
         
    if (current_operation == '*') {
      new_numbers[new_index] *= next_number;
    } else {
      new_operations[new_index] = current_operation;
      new_numbers[new_index] = current_number;
      new_index++;
    }
  }

  
  // Solve Addition & Subtraction
  int add_index;
  int solved_value = new_numbers[0];
  printf("%d \n", solved_value);

  for (add_index = 0; add_index < (sizeof(new_operations) / sizeof(new_operations[0]));
       add_index++) {
    char current_operation = new_operations[add_index];
    solved_value = solve_operation(solved_value, new_numbers[add_index + 1],
                                   current_operation);
  }

  printf("%d \n", solved_value);
  return 0;
}
