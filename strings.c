#include "strings.h"

//char *string_reverse (char *myString, int str_size)
//{	
//	char place_holder = '\0';
//	int start_index = 0;
//	int end_index = str_size - 1;
//
//	for (start_index = 0; start_index < end_index; start_index++, end_index--)
//	{
//		place_holder = myString[start_index];
//		myString[start_index] = myString[end_index];
//		myString[end_index] = place_holder;
//	}
//
//	return myString;
//}

char *string_reverse (char *myString, int str_size)
{	
	char place_holder = '\0';
	int start_index = 0;
	int end_index = str_size - 1;

	for (start_index = 0; start_index < end_index; start_index++, end_index--)
	{
		place_holder = *(myString + start_index);
		*(myString + start_index) = *(myString + end_index);
		*(myString + end_index) = place_holder;
	}

	return myString;
}

char *my_strcopy (char *str_destination, const char *str_source, int str_size)
{
	int index = 0;

	for (index = 0; index < str_size; index++)
	{
		str_destination[index] = str_source[index];
	}
}

char *my_strcat (char *destination, const char *source, int dest_size, int source_size)
{
	int dest_index = 0;
	int source_index = 0;

	for (dest_index = dest_size; dest_index < (dest_size + source_size); dest_index++, source_index++)
	{
		destination[dest_index] = source[source_index];
	}

	return destination;
}

int my_strcompare (const char *s1, const char *s2)
{
	int index = 0;
	int result = 0;

	while (s1[index] != '\0' || s2[index] != '\0')
	{
		if (s1[index] < s2[index])
		{
			result = -1;
			break;
		}
		else if (s1[index] > s2[index])
		{
			result = 1;
			break;
		}
		else
		{
			result = 0;
		}

		index++;
	}

	return result;
}
int my_strlength (char *mystring)
{
	int str_size = 0;
	int index = 0;

	for (index = 0; mystring[index] != '\0'; index++)
	{
		str_size += 1;
	}

	return str_size;
}
