#include "sumn.h"
#include "assert.h"

#include<stdio.h>

int sumUpThatBitch(int n){

	//Tjekker om n er større end 1
	if(n > 1){
		//Hvis ja, bliver der recursivet med n-1
		return (2*n-1)+sumUpThatBitch(n-1);
	}else{
		//Hvis n = 1 skal der ikke lavet flere udregninger
		return (2*n-1);
	}
}

int sumn (int n)
{

	int res;

	//Pre-conditions
	//Tjekker om n er ulige
	assert(n % 2 != 0);
	//Tjekker om n er større end 1
	assert( n >= 1);

	/*Da mens udregningen kører må n godt være lige.
	Derfor bliver udregningen lavet i en anden funktion*/
	res = sumUpThatBitch(n);

	return res;
}
