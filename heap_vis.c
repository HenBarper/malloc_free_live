#include <stdlib.h> /*Containts NULL*/

int main() 
{
  /* Pointer to hold the allocated memory */
  int* numbers; 

  /* Number of elements needed */
  int numElements = 10; 
  /* Calculate the total size in bytes(an int is 4 bytes) */
  int size = numElements * sizeof(int);
  
  /* Allocate memory and store the address in 'numbers' */
  numbers = (int*)malloc(size); 
  if (numbers == NULL) 
  {
    /* Error handling if malloc fails to allocate memory */
    printf("Failed to allocate memory.");
    return (-1); /* return NULL */
  }

  /* Release the dynamically allocated memory */
  free(numbers);
  /* Set the pointer to NULL for safety */
  numbers = NULL;

  return 0;
}