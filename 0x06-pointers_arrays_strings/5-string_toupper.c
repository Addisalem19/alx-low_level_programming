/**
 * cap_string - capitalizes all words of a string
 * @s: input string
 *
 * Return: the pointer to dest
 */
char *cap_string(char *s)
{
	int i, c, alpha, maxAlpha;

	alpha = 97;
	maxAlpha = alpha + 26;

	for (i = 0; str[i] != '\0'; i++)
	{
		c = str[i];
		if ((c >= alpha) && (c < maxAlpha))
		{
			str[i] = c - alpha + 65;
		}
	}

	return (str);
}
