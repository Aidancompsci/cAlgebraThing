#include <stdio.h>

int calculate_number(int, int);

/*
void print_string(char thing[]){
    int i;

    for (i = 0; sizeof(thing) / sizeof(char); i++) {
        printf("%c", thing[i]);
    }

    printf("\n");
}
*/
void main() {

    char thing[] = "x + 3";
    
    int i;

    for (i = 0; (sizeof(thing) / sizeof(char) - 1); i++) {
        printf("%c", thing[i]);
    }

    printf("\n");
}


int calculate_number(int a, int b) {
    return a + b;
}