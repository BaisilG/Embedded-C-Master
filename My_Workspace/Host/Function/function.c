/*
 * function.c
 *
 *  Created on: 03-Jul-2020
 *      Author: mglocadmin
 */




int main()
{
	// function calling her is happening
	function_add_numbers();

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
