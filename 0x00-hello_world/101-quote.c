#include <stdio.h>
#include <unistd.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 *                  followed by a new line, to standard error.
 */
int main(void)
{
write(1,
      "and that piece of art is useful\" - Dora korpar, 2015-10-19\n",
      59);
fprintf(stderr, "error");
return (1);
} 
