



/*
 * function.c
 *
 *  Created on: 03-Jul-2020
 *      Author: mglocadmin
 */


#include <stdio.h>
//implicit declaration of function 'printf'

void function_add_numbers(int, int, int);
int main()
{
	// function calling her is happening
	function_add_numbers(20,30,40);

	int valA = 30;
	int valB = 40, valC = 50;

	function_add_numbers(valB,valA,valC);

	return 0;

}


// creating a function
// this is called function defenition
void function_add_numbers(int a, int b, int c)
{
	int sum;





	sum = a+b+c;

	printf("Sum = %d\n", sum);
}

// why we are using the void here is fucntion_add_three_numbers is not returning anything.
