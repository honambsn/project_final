#include"syscall.h"
#define MAX_LENGTH 32

int main()
{
	int stdin;
	char fileName[MAX_LENGTH];
	PrintString("\n\t\t---TAO FILE----\n");
	PrintString("\nNhap ten file: ");

	stdin = Open("stdin",2);
	if (stdin != -1) 
	{
		int len = Read(fileName, MAX_LENGTH, stdin);

		if (len <=1 ) 
		{
			PrintString("Ten file khong hop le\n");
		}
		else
		{
			if (CreateFile(fileName) == 0) 
			{
				PrintString("Tao file thanh cong\n");
			}
		}
		Close(stdin);
	}
	Halt();
	return 0;
}