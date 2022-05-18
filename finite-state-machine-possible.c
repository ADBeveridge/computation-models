/* By Alan Beveridge */
#include <stdio.h>

/* Create typedefs that simplify the syntax a ton. */
typedef void (**func_decl)();
typedef void (func_ptr)(func_decl);

/* Functions that are assigned to the pointer as needed. */
void start(func_decl);
void task1(func_decl);
void stop(func_decl);

/* Implementation of an fsm. */
int main()
{
	func_ptr *fptr = &start;
	while (fptr != NULL)
	{
		fptr(&fptr);
	}
	return 0;
}

void start(func_decl decl)
{
	*decl = &task1;
	printf("In start.\n");
}

void task1(func_decl decl)
{
	*decl = &stop;
	printf("In task1.\n");
}

void stop(func_decl decl)
{
	*decl = NULL;
	printf("In stop.\n");
}