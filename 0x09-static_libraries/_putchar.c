#include "my_header.h"
#include <unistd.h>

int _putchar(char c)
{
    return (write(1, &c, 1));
}
