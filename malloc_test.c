#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;

	ptr = malloc(size * sizeof(char));
    if (ptr == NULL)
    {
        return (NULL);
    }
    while (i < size)
    {
        ptr[i] = c;
        i++;
    }
	return (ptr);
}

int main(void)
{
    char *buffer;

    buffer = create_array(5, 'H');
    if  (buffer == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    free(buffer);
    return (0);
}