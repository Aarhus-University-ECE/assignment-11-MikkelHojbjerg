/*
 * Fibonacci numbers defined recursively
 */
#include "fib.h"

#include <assert.h>		/* assert */
#include <stdio.h>		/* printf */

/* Fibonacci function definition */
int fib (int n, int p, int pp)
{

	//n skal være større end 0
	assert(n >= 1);

	//Tjekker om n er større end 1
	if(n > 1){
		/*Hvis ja bliver n mindre med 1.
		p får pp's værdi i den næste udregning.
		pp bliver plusses sammen med p*/
		fib(n-1, pp, pp + p);
	}else{
		//Hvis n ikke er større end 1, er programmet færdig og pp kan returneres.
		return pp;
	}

}
