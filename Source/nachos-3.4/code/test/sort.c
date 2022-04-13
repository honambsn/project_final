#include "syscall.h"

int
main()
{
    int i, j, tmp, n, A[100];
    PrintString("Xin mời nhập độ dài mảng <=100: ");
    n = ReadInt();
    while ( n > 100 ) {
        PrintString("Không phù hợp, mời nhập lại\n");
        n = ReadInt();
    }
    PrintString("Xin moi nhap phan tu trong mang: \n");
    for (i =0;i < n;i++) {
        PrintString("Nhap phan tu trong mang: ");
        A[i] = ReadInt();
    }

    /* first initialize the array, in reverse sorted order */
    

    /* then sort! */

    for (i = 0; i < n-1; i++){
        for (j = 0; j < n-i-1; j++){
            if (A[j] > A[j+1]){
                tmp = A[j];
                A[j] = A[i];
                A[i] = tmp;
            }
        }
    }
    PrintString("Da sap xep\n");
    for (i =0;i < n;i++) {
        PrintInt(A[i]);
        PrintString(" ");
    }
    //Exit(A[0]);     /* and then we're done -- should be 0! */
    Halt();
}
