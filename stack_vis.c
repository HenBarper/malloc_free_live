int add_numbers(int a, int b)
{
  int sum;
  
  sum = a + b;
  
  return (sum);
}

int main() 
{
  int result;
  
  result = add_numbers(2, 3);
  //result = add_numbers(2147483647, 1);

  return 0;
}