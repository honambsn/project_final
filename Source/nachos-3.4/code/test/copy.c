#include"syscall.h"
#define MAX_LENGTH 32

int main()
{
	int srcFile_ID;
	int destFile_ID;
	int file_size;
	int i;
	char c;
	char source[MAX_LENGTH];
	char dest[MAX_LENGTH];

	PrintString("\n\t\t---COPY FILE---\n");
	PrintString("Nhap ten file nguon: ");
	ReadString(source,MAX_LENGTH);

	PrintString("Nhap ten file dich: ");
	ReadString(dest,MAX_LENGTH);
	srcFile_ID = Open(source,1);

	if (srcFile_ID != -1)
	{
		destFile_ID = CreateFile(dest);
		Close(destFile_ID);

		destFile_ID = Open(dest,0);
		if (destFile_ID != -1) 
		{
			// di chuyen buffer toi cuoi file de lay noi dung
			file_size = Seek(-1,srcFile_ID);

			Seek(0,srcFile_ID);
			Seek(0,destFile_ID);
			i=0;

			for (;i < file_size; i++) 
			{
				Read(&c, 1,srcFile_ID);
				Write(&c,1,destFile_ID);
			}

			PrintString("\nSao chep file thanh cong.\n\n\n");
			Close(destFile_ID);
		}
		else
		{
			PrintString("Tao file dich khong thanh cong\n");
		}
		Close(srcFile_ID);
	}
	else 
	{
		PrintString("\nKhong doc duoc file nguon\n");
	}
	//Halt();

	return 0;
}