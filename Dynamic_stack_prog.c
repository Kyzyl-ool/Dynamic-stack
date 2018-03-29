#include "Dynamic_stack.h"
#define STACK_SIZE 40000

int main()
{
	dynamic_stack* s = dynamic_stack_Construct();
	
	for (int i = 0; i < STACK_SIZE; i++)
		dynamic_stack_Push(s, i*i);
	while (s->current)
		dynamic_stack_Pop(s);
	
	dynamic_stack_Dump(s, stdout, "Test dynamic stack");
	dynamic_stack_Destroy(s);
	
	return 0;
}
