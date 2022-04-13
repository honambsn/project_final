#include"syscall.h"
#define MAX_LENGTH 32

int main()
{
	int srcFile_ID;
	int destFile_ID;

	int file_size1;
	int file_size2;

	int i;
	char c;
	char source[MAX_LENGTH];
	char dest[MAX_LENGTH];

	PrintString("\n\t\t---GHEP 2 FILE---\n");
	
	PrintString("Nhap ten file 1: ");
	ReadString(source,MAX_LENGTH);

	PrintString("Nhap ten file 2: ");
	ReadString(dest,MAX_LENGTH);

	srcFile_ID = Open(source,1);
	destFile_ID = Open(dest,1);

	if (srcFile_ID != -1 && destFile_ID != -1 )
	{
		PrintString("Open\n\n");
		file_size2 = Seek(-1,destFile_ID);

		Seek(0,destFile_ID);
		Seek(-1,srcFile_ID);
		i = 0;

		for (; i < file_size2; i++)
		{
			PrintString("a\n");
			PrintInt(file_size2);
			Read(&c,1,destFile_ID);
			PrintChar(c);
			Write(&c, 1, srcFile_ID);
		}
		PrintString("\n\nGhep file thanh cong\n\n");
	}

	Close(srcFile_ID);
	Close(destFile_ID);


	return 0;
}