#include "main.h"

/**
 * _isalpha - check the code.
 * @c: The character to be checked
 *
 * Return: 1 for lowercase or uppercase character or 0
 */
int _isalpha(int c)

{
        if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        {
        return (1);
        }
        return (0);
}
