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


class PQueue
{

	private:
		int start;
		int end;
		const static int length = 26;
		void * queue[length];

	public:
		PQueue()
		{
			start = -1;
			end = -1;
		}
			
		void push(void *item, int priority);
		void* top();
		void pop();
		void display();
};
