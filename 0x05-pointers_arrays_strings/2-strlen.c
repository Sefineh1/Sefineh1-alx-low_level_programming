/**
 * _strlen - A function that returns the length of a string
 * @s: A string parameter
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int c;
	for (c = 0; *s !='\0'; ++s)
		++c;
	return(c);
}
