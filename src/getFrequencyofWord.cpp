/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>
int aresame(char*, char*, int);
int count_word_in_str_way_1(char *str, char *word){
	int i, j,x,count=0;
	if (str == NULL | word == NULL || str[0] == '\0' || word[0] == '\0')
	{
		return 0;
	}
	for (i = 0; str[i]!= '\0'; i++)
	{
		if (str[i] == word[0])
		{
			if (aresame(str, word, i))
			{
				count++;
			}
			
		}
	}
	return count;
}
int aresame(char*str, char*word, int j)
{
	int i,k;
	for (i = j,k=0; str[i] != '\0'&&word[k]!='\0'; i++,k++)
	{
			if (str[i] != word[k])
			{
				return 0;
			}
		
	}
	if (word[k] == '\0')
	{
		return 1;
	}
	return 0;
}

int count_word_int_str_way_2_recursion(char *str, char *word){
	return 0;
}

