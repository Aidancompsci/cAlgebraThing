#include <string.h>

void create_parenthesis(char main_tokens);
int solve_parenthesis(char solve_tokens[]);

int solve_addition(char solve_tokens[]);



int solve_addition(char solve_tokens[]) {
    int index;

    int sum = 0;

    for (index = 0; index < strlen(solve_tokens); index++) {
        switch (solve_tokens[index])
        {
        case /* constant-expression */:
            /* code */
            break;
        
        default:
            break;
        }
    }
}