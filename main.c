#include <array>
#include <stdio.h>
#include <string.h>

int solve_tokens(char tokens[], int amount_tokens, int x_value) {
  int index;
  int sum = 0;

  for (index = 0; index < amount_tokens; index++) {
    
  }

  return 0;
}

int main() {

  char *thing = "x + 3";

  int length = strlen(thing);

  char tokens[length];

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
