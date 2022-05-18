/* By Alan Beveridge */
#include <stdio.h>

/* 
 * The pointer is put in a struture to simplify
 * the passing of an function pointer. The syntax
 * can be gotten through easier also.
 */
struct _fsm
{
    void (*state) (void *);
};

void start (void *ptr_to_fsm);
void task1 (void *ptr_to_fsm);
void stop (void *ptr_to_fsm);

/* Implementation of an fsm. */
int main()
{
    struct _fsm fsm = {start};
    while (fsm.state != NULL)
    {
        fsm.state(&fsm);
    }
    return 0;
}

/* Leave this function alone: unless you change the name for task1(). */
void start (void *ptr_to_fsm)
{
    struct _fsm *fsm = ptr_to_fsm;
    fsm->state = task1;
}

/* Leave this function alone: except to do free`ing */
void stop (void *ptr_to_fsm)
{
    struct _fsm *fsm = ptr_to_fsm;
    fsm->state = NULL;
}

void task1 (void *ptr_to_fsm)
{
    struct _fsm *fsm = ptr_to_fsm;
    fsm->state = stop;
}
