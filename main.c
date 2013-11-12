#include "strings.h"

int main (void)
{
	int source_size = 0;
	int dest_size = 0;
	int reverse_ptr = 0;
	/*char str_source[50] = "CptS 121 is cool!";
	char str_destination[50] = {'\0'};*/
	char str_source[50] = "world!";
	char str_destination[50] = "Hello ";
	char string1[50] = "rubber";
	char string2[50] = "ducky";
	int str_compare = 2;
	int my_length = 0;
	
	//source_size = my_strlength(str_source);
	////dest_size = my_strlength(str_destination);

	//printf("String: %s\n", str_source);
	//string_reverse(str_source, source_size);
	//printf("Reversed string: %s\n", str_source);

	/*source_size = my_strlength(str_source);
	printf("Source string: %s\n", str_source);
	my_strcopy(str_destination, str_source, source_size);
	printf("Destination string: %s\n", str_destination);*/

	/*dest_size = my_strlength(str_destination);
	source_size = my_strlength(str_source);
	printf("Source string: %s\n", str_source);
	my_strcat(str_destination, str_source, dest_size, source_size);
	printf("Destination string: %s\n", str_destination);*/

	str_compare = my_strcompare(string1, string2);
	if (str_compare == -1)
	{
		printf("String1 comes before string2.\n");
	}
	else if (str_compare == 0)
	{
		printf("String1 and string2 are the same.\n");
	}
	else
	{
		printf("String2 comes before string1.\n");
	}

	//my_length = my_strlength(string1);
}