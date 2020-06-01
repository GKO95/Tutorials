#pragma once
#include <afxwin.h>
#include "resource.h"

class CApplication
	: public CWinApp
{
public:

	BOOL InitInstance();
	int ExitInstance();
};

/* KEYWORD "extern"
>>> Declare in a header file, define in a corresponding source file, and let every script with the header included know it exist:
It tells compiler that object of "CApplication" with its name "app" exist somewhere but don't know where.

When finished compiling, linker will link the definition to every one of its references.
To do this, the object needs to be declared outside a function (e.g. main() function).*/
extern CApplication app;