/**************************************************************************
 File name:  stktester.c
 Author:     Computer Science, Pacific University
 Date:			 10.11.17
 Class:			 CS300
 Assignment: Static Generic Stack
 Purpose:    Test driver for a static stack of generic elements
 *************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#include "../include/stk.h"
#include "../include/driverUtil.h"

/**************************************************************************
 Function: 	 	main

 Description: test all the functionality of the stack

 Parameters:	none

 Returned:	 	Exit Status
 *************************************************************************/

int main() {
	const char TEST_CHAR = 'P';

	Stack sTheStack;
	char data;

	puts("Program Start\n");

	stkCreate(&sTheStack);

	assert(stkSize(&sTheStack) == 0, "Stack size is 0");

	stkTerminate(&sTheStack);

	/*

	stkCreate(&sTheStack);

	stkPush(&sTheStack, TEST_CHAR);

	assert(stkSize(&sTheStack) == 1, "Stack size is 1");
	
	assert(TEST_CHAR == *stkPeek(&sTheStack, &data) , "Stack top is TEST_CHAR");

	stkPop(&sTheStack, &data);
	assert(stkSize(&sTheStack) == 0, "Stack size is 0");

	stkTerminate(&sTheStack);

	*/


	puts("\nProgram End");

	return EXIT_SUCCESS;
}
