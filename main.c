#include <stdio.h>
#include <string.h>
#include <solve.h>

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
  // value to substitute for X  
  int x_value = 3;

  char *thing = "x + 3";
  int length = strlen(thing);
  
  char tokens[length];
  int token_index = 0;

  int index;
  for (index = 0; index < strlen(thing); index++) {
    if (thing[index] == ' ') {
      continue;
    }


    
    printf("%c", thing[index]);
    tokens[token_index] = thing[index];
    token_index += 1;
  }

  printf("\n");

  printf("%s \n", thing);

  return 0;
}
