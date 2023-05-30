/**************************************************************************
 File name:  stk.c
 Author:     Computer Science, Pacific University
 Date:			 9.9.16
 Class:			 CS300
 Assignment: Static Generic Stack
 Purpose:    Implementation for a static stack of generic elements
 *************************************************************************/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "../include/stk.h"


/**************************************************************************
 Function: 	 	processError - DO NOT EDIT


 Description: Print the filename and line number of an error

 Parameters:	szFile - filename
              line - the line number

 Returned:	 	None
 *************************************************************************/
void processError(const char* szFile, const int line)
{
  fprintf(stderr, "ERROR: %s: %d\n", szFile, line);
  fflush(NULL);
  exit(EXIT_FAILURE);
}


/**************************************************************************
 Function: 	 	stkCreate

 Description: Initializes the top of the stack to empty. The stack is empty
 	 	 	 	 	 	 	at this point.

 Parameters:	psStack - pointer to a stack

 Returned:	 	None
 *************************************************************************/

void stkCreate (StackPtr psStack)
{

}

/**************************************************************************
 Function: 	 	stkTerminate

 Description: Sets the top of the stack to empty.

 Parameters:	psStack - pointer to a stack

 Returned:	 	None
 *************************************************************************/

void stkTerminate (StackPtr psStack)
{
}

/**************************************************************************
 Function: 	 	stkIsFull

 Description: Checks if the stack is full

 Parameters:	psStack - pointer to a stack

 Returned:	 	Returns true if stack is full otherwise false
 *************************************************************************/

bool stkIsFull (const StackPtr psStack)
{
	return false;
}

/**************************************************************************
 Function: 	 	stkIsEmpty

 Description: Checks if the stack is empty

 Parameters:	psStack - pointer to a stack

 Returned:	 	Returns true if stack is empty otherwise false
 *************************************************************************/

bool stkIsEmpty (const StackPtr psStack)
{
	return false;
}

/**************************************************************************
 Function: 	 		stkPush

 Description: 	Adds a new item on top of the stack if stack is not full.

 Parameters:	 	pStack     - pointer to stack struct
 	 	 	 	 	 	 	 	data			 - the character to push

 Returned:	 		None
 *************************************************************************/

void stkPush (StackPtr psStack, char data)
{
}

/**************************************************************************
 Function: 	 	stkPop

 Description: Removes top item of stack

 Parameters:	psStack     - pointer to stack struct
 	 	 	 	 	 	 	pBuffer     - character pointer to use to store the top of the stack

 Returned:	 	Pointer to the buffer of the popped value
**************************************************************************/
char *stkPop (StackPtr psStack, char *pBuffer)
{
	return NULL;
}

/**************************************************************************
 Function: 	 stkPeek

 Description: Looks at the value at the top of the stack

 Parameters:	sStack     - stack struct
 	 	 	 	 	 	 	pBuffer     - character pointer to use to store the top of the stack

 Returned:	  Pointer to the buffer of the peek value
 *************************************************************************/

char *stkPeek (StackPtr psStack, char *pBuffer)
{
	return NULL;
}

/**************************************************************************
 Function: 	 	stkSize

 Description: Returns the number of elements on the stack

 Parameters:	psStack - a pointer to a stack

 Returned:	  Number of elements in the stack
 *************************************************************************/
int stkSize (const StackPtr psStack)
{
	return 0;
}
