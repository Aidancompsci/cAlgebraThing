int solve_operation(int number_one, int number_two, char operation) {

  switch (operation) {
    case '*':
      return number_one * number_two;
    case '+':
      return number_one + number_two;
    case '/':
      return  number_one / number_two;
    case '-':
      return number_one - number_two;
  }
  
  return 0;
}

int count_multiplications(char * operations, int elements){
  int index = 0;
  int count = 0;

  for (index = 0; elements; index++) {
    if (operations[index] == '*') {
      count++;
    } 
  }

  return count;
}