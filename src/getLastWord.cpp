/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str){
	int i, j, k,len;
	char *c;

	if (str==NULL)
		return NULL;
	if (str[0] == '\0')
	{
		c = "";
		return c;
	}
	for (i = 0; str[i] != '\0'; i++);
	len = i-1;

	for (j = len; j >= 0; j--)
	{
		if (str[j] == ' ')
		{
			continue;
		}
		else
		{
	
			break;
		}

	}
	if (j < 0)
	{
		c = "";
		return c;
	}
	for (i = j; str[i] != ' '&&i >= 0; i--);
	c = (char*)malloc((j - i+1)*sizeof(char));
	for (k = i + 1; k <= j; k++)
	{
		c[k - i - 1] = str[k];
	}
	c[k-i-1] = '\0';
	return c;
}
