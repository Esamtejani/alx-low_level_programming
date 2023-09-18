#include <stdio.h>
#include<stdlib.h>
#include<time.h>
/*
 * you write line of cof
 * -remember
 *  you are not allowed to use a
 *  you are
 *
 */
int main(void)
{
  int sum;
  char c;

  srand (time(NULL));
  while(sum <= 2645)
  {
	  c = rand()%128;
	  sum += c;
	  putchar(c);
  }
  putchar (2772 - sum);
  return 0;
}
