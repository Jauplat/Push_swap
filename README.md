# Push_swap

Project with 2 programs.

A first program is a push_swap program.

It's a sort algorithm of a random number of random number for that we have got a limited instruction and 2 stack.

We must do a limited numbers of actions on a time limited

All numbers start in the order we take them in stack A.

instruction :
* sa = swap the 2 first element at the top of slack A. Do nothing if we have got just one or no element
* sb = swap the 2 first element at the top of slack B. Do nothing if we have got just one or no element
* ss = sa and sb at the same time
* pa = push the first element at the top of slack B to the top of slack A. Do nothing if B is empty
* pb = push the first element at the top of slack A to the top of slack B. Do nothing if A is empty
* ra = Rotate all the stack A to the top and push the first element a the top to the bottom of the stack
* rb = Rotate all the stack B to the top and push the first element a the top to the bottom of the stack
* rr = ra and rb at the same time
* rra = reverse ra
* rrb = reverse rb
* rrr = rra and rrb at the same time

My algorithm consists in separating all the lists superior to 10 numbers of 20% in 20% in the second pile and to sort them on the first pile then to return in the order the numbers

The second program is checker.

This is a program that is used to check that the list is sorted.
