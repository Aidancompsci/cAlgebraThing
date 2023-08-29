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