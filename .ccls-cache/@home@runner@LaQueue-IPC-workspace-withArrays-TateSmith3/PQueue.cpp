/*
 * LaQueue
 * 
 * 
 * This is part of a series of labs for the Liberal Arts and Science Academy.
 * The series of labs provides a mockup of an POSIX Operating System
 * referred to as LA(SA)nix or LAnix.
 *  
 * (c) copyright 2018, James Shockey - all rights reserved
 * 
 * */

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include "PQueue.h"



/*
 * Class Priority Queue
 */

		
/*
* Insert into Priority Queue
*/
void PQueue::push(void *item, int priority)
{
	if(start == -1 && end == -1){
		start = 0;
	}
	else if((end + 1) % length == start % length){
		return;
	}
	end++;
	queue[end % length] = item;
}

/*
 * Delete from Priority Queue
 */
void* PQueue::top()
{
	if(start == -1 && end == -1){
    return NULL;
  }
  else{
    return queue[start % length];
  }
}
/*
 * Delete from Priority Queue
 */
void PQueue::pop()
{
	if(start == -1 && end == -1){
    return;
  }
	else if(start == end){
		start = end = -1;
	}
  else{
		// ***********WORRIED ABOUT START PASSING END**********
    start++;
  }
}

/*
 * Print Priority Queue
 */
void PQueue::display()
{
	for(int i = start; i <= end; i++){
		std::cout<<(char*)queue[i % length]<<std::endl;
	}
}
	