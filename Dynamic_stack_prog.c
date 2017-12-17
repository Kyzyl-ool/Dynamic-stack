#include "Dynamic_stack.h"

int main()
{
	dynamic_stack* s = dynamic_stack_Construct();
	
	for (int i = 0; i < 2000; i++)
		dynamic_stack_Push(s, 9);
	while (s->current)
		dynamic_stack_Pop(s);
	
	dynamic_stack_Dump(s, stdout, "Test dynamic stack");
	dynamic_stack_Destroy(s);
	return 0;
}
