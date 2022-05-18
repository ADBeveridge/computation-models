# finite-state-machine



[fsm-struct.c](https://github.com/ADBeveridge/finite-state-machine/blob/main/finite-state-machine.c) is a implemetation of a fsm where everything is inside of a struct, including the function pointer itself. If you have data, such as a string or integer that is needed, it goes into the struct.

[fsm-arg.c](https://github.com/ADBeveridge/finite-state-machine/blob/main/fsm-arg.c) is a fsm where you pass data to each function individually. If you have a string or integer to parse through, you have to add it to the function prototypes and defenitions.
