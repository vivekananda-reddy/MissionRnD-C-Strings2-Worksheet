/*
OVERVIEW: Given a string, Count the number of consonants and vowels and copy them to 'consonants' and 'vowels' respectively
Notes : Neglect Space and Other Symbols .Consider Capital Letters too

E.g.: Input: "aB c" , Output: consonants should contain 2 and vowels 1

INPUTS: A string and two int pointers

OUTPUT: Modify the consonants and vowels pointers accordingly with their counts (*consonants=?? ;*vowels=??)

INPUT2: Dont Forget they are pointers ;consonants and vowels are addresses of two variables .

Output: consonants should be ??,vowels should be ??

??:Count them :)

NOTES: Don't create new string , Dont return anything ,you have been given two pointers ,copy values into those .
*/

#include <stddef.h>

int isvowel1(char);
void count_vowels_and_consonants(char *str,int *consonants, int *vowels){
	int c = 0, v = 0,i;
	if (str != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			if (str[i] >= 'A'&&str[i] <= 'Z' || str[i] >= 'a'&&str[i] <= 'z')
			{

				if (isvowel1(str[i]))
				{
					v++;
				}
				else
				{
					c++;
				}
			}
			
		}
	}
	*vowels = v;
	*consonants = c;
}
int isvowel1(char c)
{
	switch (c)
	{
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':return 1;


	}
	return 0;
}