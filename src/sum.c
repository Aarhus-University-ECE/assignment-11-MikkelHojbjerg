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

int sumThatShitUp(int n, int total){

	//Tjekker om n == 1
	if(n == 1){
		//Hvis ja, mangler der kun at total plusses med 1
		return total + 1;
	}else{
		/*n bliver 1 mindre for hver gang programmet bliver kørt. Det kan samlignes med evaluate condition i et for loop
		Total bliver plusses med n, så værdien er "gemt" i total og kan blive plusses med næste n.
		*/
		return sumThatShitUp(n - 1, total + n);
	}

}
/* Sum integers 1 to n */
int sumtail (int n, int total)
{

	//Precondition
	//n skal være større end 0
	assert(n >= 1);
	//total skal være lig med 0, da det ellers kan give fejl
	assert(total == 0);

	//Har forklaret i sumn.c, hvorfor jeg laver en ekstra funktion
	return sumThatShitUp(n, total);

}

/* Sum integers 1 to n */
int sumwhile (int n)
{

	//Precondition
	assert(n >= 1);

	//variabel til at gemme værdi
	int res = 0;

	//mens n er større eller lig med 1
	while(n >= 1){
		//res plusser sin egen værdi med n
		res += n;
		//n minus 1
		n--;
	}

	return res;

}

