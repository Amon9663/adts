#include "StackL.h"
#include <iostream>

int Stack::top()
{
	top=-1;
	return top;
}

int Stack::size()
 {
    return num_elements;
 }
 
 void Stack::push(int y)
 {
	top++ ;
	stack[top] = y;
 }
 
 void Stack::pop()
 {
	top--;
	int y = stack[top];
	return y; 
	 }
 
