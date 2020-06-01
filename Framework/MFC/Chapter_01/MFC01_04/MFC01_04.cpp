#include "MFC01_04.h"
#include "MFC01_04Dlg.h"

BOOL CApplication::InitInstance() {
	CAppWin::InitInstance();

	CFramework CDlg;
	m_pMainWnd = &CDlg;
	CDlg.DoModal();

	return TRUE;
}

CApplication app;

int CApplication::ExitInstance() {
	return CWinApp::ExitInstance();
}