#include <stdio.h>
#include <stdlib.h>

int main() 
{
  int i = 0;
  char abcs = 'a';
  char *ptr;
  
  ptr = malloc(27 * sizeof(char));
  if (ptr == NULL)
  {
    return (0);
  }
  for (i = 0; i < 26; i++)
  {
    *(ptr + i) = abcs + i;
  }
  *(ptr + i) = '\0';

    free(ptr);

  return 0;
}