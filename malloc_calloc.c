#include <stdio.h>
#include <stdlib.h>

int main() 
{
  char str[10];
  
  char *ptr = malloc(10 * sizeof(char));
  
  char *cptr = calloc(10, sizeof(char));
  
  return 0;
}