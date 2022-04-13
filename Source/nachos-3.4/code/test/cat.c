#include "syscall.h"
#define MAX_LENGTH 32

int main()
{
	int openFileId;
	int file_size;
	char c; 
	char fileName[MAX_LENGTH];
	int i; 
	PrintString("\n\t\t\t-----IN FILE-----\n\n");
	PrintString("\nXin moi nhap vao ten file: ");
		
	ReadString(fileName, MAX_LENGTH);
	
	openFileId = Open(fileName, 1); 
	
	if (openFileId != -1) 
	{
	
		file_size = Seek(-1, openFileId);
		i = 0;
	
		Seek(0, openFileId);
		PrintString("\n");

		
		PrintString("Noi dung file:\n");
		for (; i < file_size; i++) 
		{
			Read(&c, 1, openFileId);
			PrintChar(c);
		}
		PrintString("\n\n\n");		
		Close(openFileId);
	}
	else
	{
		PrintString("Mo file khong thanh cong!!\n\n");
	}
	//return 0;
}
