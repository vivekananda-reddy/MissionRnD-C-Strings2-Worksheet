/*

Use Strings2 File for testing any other function in other Cpp files of the Strings Project.

DO NOT write main function in any other File or else your Build Fails.s

Objectives of C-Strings-2 Lesson:

->Using malloc to create new strings
->New ways of Handling Strings

*/
char* get_last_word(char*);

int main(){


	//Test Consonants_Vowels

	//Test getFrequencyofWord

	//Test getSubstring

	//Test getLastWord
	char sentences[][100] = { "abc is a word", "he he", "   ", "d ab   ", "  x", "asd324", "", "a" };
	//char ans[][100] = { "word", "he", "", "ab", "x", "asd324", "", "a" };
	int sc = 8;
	int si = 0;
	for (si = 0; si < sc; si++){
		char *new_str = get_last_word(sentences[si]);
	}
	return 0;
}