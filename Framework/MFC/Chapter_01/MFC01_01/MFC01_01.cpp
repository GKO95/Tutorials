#include <afxwin.h>

/* DEFINE APPLICATION PROGRAM */
class CApplication
	: public CWinApp
{
// OVERRIDE functions
public: 

	// BEHAVIOR: INITIALIZE program
	BOOL InitInstance() {
		CWinApp::InitInstance();

		/* CWinThread::m_pMainWnd
		>>> Stores pointer (ie. new CFrameWnd) to the thread (ie. m_pMainWnd) designated to application's main frame window. */
		m_pMainWnd = new CFrameWnd;

		return TRUE;
	}

	// BEHAVIOR: DESTROY program
	int ExitInstance() {
		return CWinApp::ExitInstance();
	}
};

/* GENERATE APPLICATION PROGRAM */
CApplication app;