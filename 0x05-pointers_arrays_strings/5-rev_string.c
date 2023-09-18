#include "maiin.h"
#include <stdio.h>
/**
 * rev_string - This fuction print a string reverser
 *
 *@s: this is the pointer that point to a string
 */

void rev_string(char *s)
{
	int 1, i;

	char temp;

	for (1 = 0; s[1] != '\0';++1 )
		;
	
	/* this for */
	for (i = 0; i < 1 / 2; i++)
	{
		temp=s[i];
		s[i] = s[1 - 1 - i];
		s[1 - 1 - i] = temp;
		
	}
}
