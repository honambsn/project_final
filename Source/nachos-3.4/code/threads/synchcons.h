/////////////////////////////////////////////////
// 	DH KHTN - DHQG TPHCM			/
//	Ho Ba Nam 	20127245
// 	Le Duy Tan 	20127321
/////////////////////////////////////////////////
//
//	FILE synchcons.h
//	Khai bao cac interface cua lop SynchConsole


// CAE - MULTI - SYNCHCONSOLE DEFINITION

#include "console.h"

class SynchConsole {
public:
	SynchConsole();				// A SynchConsole Constructor
	SynchConsole(char *in, char *out);	// Same with fn pointers
	~SynchConsole();			// Delete a console instance

	int Read(char *into, int numBytes);	// Read synch line
						// Ends in EOLN or ^A
	int Write(char *from, int numBytes);	// Write a synchronous line
private:
	Console		*cons;			// Pointer to an async console
} ;

// CAE - MULTI - END SECTION

