#include"syscall.h"

int main()
{
	int i;
	PrintString("Bang ma ASCII: \n");
	PrintChar('t');
	for (i=33;i<127;i++) {
		PrintChar((char)i);
		if ((i-32)%10 == 0) {
			PrintString("\n\t");
		}
		else {
			PrintChar(' ');
		}
	}
	Halt();
	return 0;
}