#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

extern "C"
{
#include "sum.h"
#include "sumn.h"
#include "fib.h"
}


// See Catch2's documentation: https://github.com/catchorg/Catch2/blob/devel/docs/tutorial.md#scaling-up

TEST_CASE("sumtail")
{
    // Add the tests for excercise 3 "sumtail" function here. Use "REQUIRE()" statement to check.
	//Base case vil være 6 og inductive state vil være 5
	//Hvis disse to states passer vil programmet i følge proof by induction være korrekt lavet
	REQUIRE(sumtail(6, 0) == 21);
	REQUIRE(sumtail(5, 0) == 15);

}

TEST_CASE("sumwhile")
{
    // Add the tests for excercise 3 "sumwhile" function here. Use "REQUIRE()" statement to check. 
    REQUIRE(1==0);
}

TEST_CASE("sumn")
{
    REQUIRE(sumn(1)==1); // sum(1) must be 1
    REQUIRE(sumn(3)==9); //sum(3) = 1+3+5 = 9
    REQUIRE(sumn(33)==1089); //sum(33) = 1+3+5+...+65 = 1089
}

TEST_CASE("fib")
{
   // Add the tests for excercise 4 "fib" function here. Use "REQUIRE()" statement to check.
	/*pre-condition for programmet er at p = 0 og pp = 1, da det er sådan fib nummer starter.
	Har vist i sumtail hvordan man kan asserte inputs, så det vil ikke blive vist her i.*/

	//Base case vil være 10 og inductive state vil være 9
	//Hvis disse to states passer vil programmet i følge proof by induction være korrekt lavet
	REQUIRE(fib(10, 0, 1) == 55);
	REQUIRE(fib(9, 0, 1) == 34);

}


