#include <afxwin.h>

/* FRAMEWORK: DOCUMENT WINDOW */
class CFramework
	: public CFrameWnd
{
public:
	CFramework() {

		/* CFrameWnd::Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName)
		>>> Create and initialize the Windows frame window associated with the CFrameWnd object.
		* lpszClassName:
		Names the Windows class; if NULL, uses the predefined default CFrameWnd attributes.
		Windows class defines such as cursor style & behavior, window background, icon, etc.

		* lpszWindowName:
		Names the (frame) window. */
		Create(NULL, _T("MFC01_03"),
			WS_SYSMENU | WS_VSCROLL,	// [OPTIONAL] Window style: system menu + vertical scrollbar
			CRect(0, 0, 400, 300)		// [OPTIONAL] Locate Top-Left(x1, y1) and Bottom-Right (x2, y2) of the window.
		);
	}
};

/* APPLICATION */
class CApplication
	: public CWinApp
{
public:

	// BEHAVIOR: INITIALIZE program
	BOOL InitInstance() {
		CWinApp::InitInstance();

		CFramework* CWnd = new CFramework;	// Non-volatile dynamic-allocation retains the frame window.
		m_pMainWnd = CWnd;

		/* CWnd::ShowWindow(int nCmdShow)
		>>> Frame window is now active and displayed in "SW_SHOWNORMAL". */
		CWnd->ShowWindow(SW_SHOWNORMAL);

		/* CWnd::UpdateWindow()
		>>> Function that sends WM_PAINT message to updates the client area (a view), if the client area is not empty. */
		CWnd->UpdateWindow();

		return TRUE;
	}

	// BEHAVIOR: DESTROY program
	int ExitInstance() {
		return CWinApp::ExitInstance();
	}
};

CApplication app;