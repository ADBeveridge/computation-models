/* By Alan Beveridge */
#include <stdio.h>

void start (void *ptr);
void task1 (void *ptr);
void stop (void *ptr);

/* Implementation of an fsm. */
int main()
{
	void (*state) (void *); 
	state = start;
  	while (state != NULL)
  	{
  		state(&state);
  	}
  	return 0;
}

void start (void *ptr)
{
    *ptr = task1;
}

void stop (void *ptr)
{
    *ptr = NULL;
}

void task1 (void *ptr)
{
    *ptr = stop;
}
