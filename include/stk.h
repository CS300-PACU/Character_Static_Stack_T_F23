/**************************************************************************
 File name:  stk.h
 Author:     Computer Science, Pacific University
 Date:			 10.11.17 - modified on 9/7/21
 Class:			 CS300
 Assignment: Character Static Stack
 Purpose:    Interface for a static stack of generic elements
 *************************************************************************/

#ifndef STK_H_
#define STK_H_

#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

//*************************************************************************
// Constants
//*************************************************************************
#define STK_MAX_ELEMENTS 100

//*************************************************************************
// Error reporting functions
//*************************************************************************
extern void processError(const char* szFile, const int line);
// helper function to report errors

// macro to report error
#define reportError   processError(__FILE__, __LINE__)

//*************************************************************************
// User-defined types
//*************************************************************************
typedef struct Stack *StackPtr;
typedef struct Stack
{
	char pData[STK_MAX_ELEMENTS];
	int top;
} Stack;

//*************************************************************************
// Function prototypes
//*************************************************************************
extern void stkCreate (StackPtr psStack);
extern void stkTerminate (StackPtr psStack);
extern bool stkIsFull (const StackPtr psStack);
extern bool stkIsEmpty (const StackPtr psStack);
extern void stkPush (StackPtr psStack, char data);
extern char *stkPop (StackPtr psStack, char* data);
extern char *stkPeek (const StackPtr psStack, char *data);
extern int stkSize (const StackPtr psStack);

#endif /* STK_H_ */
