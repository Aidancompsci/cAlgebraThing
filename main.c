#include <array>
#include <stdio.h>
#include <string.h>

int solve_tokens(char tokens[], int amount_tokens, int x_value) {
  int index;
  int sum = 0;

  int a;
  int operation;
  int b;

  for (index = 0; index < amount_tokens; index++) {
    
  }

  return 0;
}

int main() {

  int x_value = 3;
  
  char *thing = "x + 3";
  char tokens[strlen(thing)];

  int index;

  for (index = 0; index < strlen(thing); index++) {
    if (thing[index] == ' ') {
      continue;
    }

    printf("%c", thing[index]);
  }

  printf("\n");

  printf("%s \n", thing);

  return 0;
}
