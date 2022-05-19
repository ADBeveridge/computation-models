# Finite State Machine

The finite state machine (FSM) is an machine that can be in exactly one of a finite 
number of states at any given time. In these implementations, the machine is 
represented by the C/C++ *function* construct. 

[fsm-struct.c](https://github.com/ADBeveridge/computation-models/blob/main/finite-state-machine/fsm-struct.c) 
is a implemetation of a FSM where everything is inside of a struct, including 
the function pointer itself. If you have data, such as a string or integer that 
is needed, it goes into the struct.

[fsm-arg.c](https://github.com/ADBeveridge/computation-models/blob/main/finite-state-machine/fsm-arg.c) 
is a FSM where you pass data to each function individually. If you have a string 
or integer to parse through, you have to add it to the function prototypes and 
defenitions.
