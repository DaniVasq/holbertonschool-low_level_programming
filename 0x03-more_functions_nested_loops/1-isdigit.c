/**
 * _isdigit - check for digits 0-9.
 *@c: This is the varaible for a digit 0-9.
 * Return: 1 if c is a digit, 0 if otherwise.
 */
int _isdigit(int c)
{
	if (c >= 48  && c <= 57)
		return (1);
	else
		return (0);
}
