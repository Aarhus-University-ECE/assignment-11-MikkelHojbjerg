#include "sum.h"

#include<stdio.h>
#include<assert.h>

/* Sum integers 1 to n */
int sum (int n)
{
/* pre-condition */
  assert (n >= 1);
/* post-condition */
  if (n > 1)
    return n + sum (n - 1);
  else
    return 1;
}

/* Sum integers 1 to n */
int sumtail (int n, int total)
{

	//n skal være større end 1
	assert(n >= 1);
	//total skal være lig med 0, da det ellers kan give fejl
	assert(total == 0);

	//Tjekker om n == 1
	if(n == 1){
		//Hvis ja, mangler der kun at total plusses med 1
		return total + 1;
	}else{
		/*n bliver 1 mindre for hver gang programmet bliver kørt. Det kan samlignes med evaluate condition i et for loop
		Total bliver plusses med n, så værdien er "gemt" i total og kan blive plusses med næste n.
		*/
		return sumtail(n - 1, total + n);
	}

}

/* Sum integers 1 to n */
int sumwhile (int n)
{
  return 0;
}

