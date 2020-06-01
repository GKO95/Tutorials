#include <afxwin.h>

// Header contains list of accessible resources: frames, widgets, icon, etc...
#include "resource.h"

/* FRAMEWORK: MODAL-DIALOG WINDOW */
class CFramework
	: public CDialog
{
public:

	/* explicit CDialog(UINT nIDTemplate, CWnd* pParentWnd = NULL)
	>>> CONSTRUCTOR: To construct a resource-based modal dialog box.
	* UINT nIDTemplate:
	ID number of the dialog-box frame; can be found in "resource.h".
	
	* CWnd* pParentWnd:
	Pointer of the parent or owner window object (of type CWnd) the dialog object belongs.
	If NULL, the dialog object's parent window is set to the main application window. */
	CFramework() 
	: CDialog(IDD_DIALOG1, NULL) { 
	
	}
};

class CApplication
	: public CWinApp
{
public:

	BOOL InitInstance() {
		CWinApp::InitInstance();

		// REPLACED "CFrameWnd" to "CDialog" with dialog being the main application.
		CDialog* CDlg = new CFramework;
		m_pMainWnd = CDlg;

		/* CDialog::DoModal()
		>>> Function invokes the modal dialog box and return the dialog-box result when done. */
		CDlg->DoModal();

		return TRUE;
	}

	int ExitInstance() {
		return CWinApp::ExitInstance();
	}
};

CApplication app;