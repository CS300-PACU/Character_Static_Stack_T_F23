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
	Stack sTheStack;
	char data;

	puts("Program Start\n");

	puts("SUCCESS TESTS:");

	success("Loaded Error Messages");

	stkCreate(&sTheStack);
	success("Stack Created");

	assert(stkSize(&sTheStack) == 0, "Stack size is 0");

	stkTerminate(&sTheStack);
	success("Stack Terminated");

	stkPush(&sTheStack, 'C');

	stkPop(&sTheStack, &data);

	printf("Data: %c\n", data);

	puts("\nProgram End");

	return EXIT_SUCCESS;
}
