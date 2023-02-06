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
	node * temp = new node();
  temp->data = item;
  temp->priority = priority;
  if(front == NULL){
    front = temp;
  }
  else{
    node * firstTemp = front;
    node * secondTemp = front;
    while(firstTemp->priority < temp->priority && firstTemp->link != NULL){
      firstTemp = firstTemp->link;
      secondTemp = secondTemp->link;
    }
    if(firstTemp->link != NULL){
      secondTemp = secondTemp->link;
			temp->link = secondTemp;
    }
    firstTemp->link = temp;
  }
}

/*
 * Delete from Priority Queue
 */
void* PQueue::top()
{
	if(front == NULL){
    return NULL;
  }
  else{
    // node * temp = front;
    // front = front->link;
    return front->data;
  }
}
/*
 * Delete from Priority Queue
 */
void PQueue::pop()
{
	if(front == NULL){
    return;
  }
  else{
    front = front->link;
  }
}

/*
 * Print Priority Queue
 */
void PQueue::display()
{
	node * temp = front;
	while(temp->link != NULL){
		std::cout<<temp->priority<<" "<<(char*)temp->data<<std::endl;
		temp = temp->link;
	}
}
	