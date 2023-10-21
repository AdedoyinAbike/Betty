#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Print the message to standard error and return 1
 *
 * Return: Always 1
 */
int main(void)
{
const char *message="and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, message, 59);
return (1);
}
