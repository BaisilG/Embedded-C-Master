/*
 * main.c
 *
 *  Created on: 07-Jul-2020
 *      Author: mglocadmin
 */

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
