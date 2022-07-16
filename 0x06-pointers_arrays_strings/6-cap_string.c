#include "main.h"
/**
* cap_string - capitalize all words of a string
* @str: string
* Return: `string`
*/
char *cap_string(char *str)
{
	int i, a;
	int chg;
	char notations[] = ",;.!?(){}\n\t\" ";

	for (i = 0, chg = 0; str[i] != '\0'; i++)
	{
		if (str[0] > 96 && str[0] < 123)
			chg = 1;
		for (a = 0; notations[a] != '\0'; a++)
		{
			if (notations[a] == str[i])
				chg = 1;
		}

		if (chg)
		{
			if (str[i] > 96 && str[i] < 123)
			{
				str[i] -= 32;
				chg = 0;
			}
			else if (str[i] > 64 && str[i] < 91)
				chg = 0;
			else if (str[i] > 47 && str[i] < 58)
				chg = 0;
		}
	}
	return (str);
}
