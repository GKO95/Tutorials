# Installation (설치)





# Setup (설정)





# Tutorial (튜터리얼)

After the installation of Visual Studio 2019 and preparation for Microsoft Foundation Class is complete, you can actually run the solution and observe how application software works. For better understanding, each chapter provides detail explanation on how the code works.

> Visual Studio 2019 설치 및 Microsoft Foundation Class 준비를 마친 이후, 해당 리포지터리의 솔루션을 직접 실행하여 어플리케이션 소프트웨어가 어떻게 동작하는지 확인할 수 있다. 더 쉬운 이해를 위해, 본 문서는 각 솔루션마다 상세 설명을 제공한다.

## Chapter 1: Designing Application

This chapter describes on fundamental concept behind how MFC application works.

> 본 챕터는 MFC 어플리케이션 동작의 기본적인 개념에 대하여 설명한다.

### MFC01_01.sln

Fundamental concept behind MFC development is overriding or customizing the functioning-classes already prepared by VC++ according to your need.

> MFC 개발의 근본적인 개념은 VC++에서 기능이 미리 탑재되어 있는 클래스를 필요에 따라 함수를 갈아엎거나 개조하는 것이다.

```cpp
#include <afxwin.h>

class CApplication
    : public CWinApp {
        
};
```

`CWinApp` is an MFC class necessary on defining (in other word, creating) application software. Thus, has created a custom class `CApplication` derived from `CWinApp` to develop the program we want.

> `CWinApp`은 어플리케이션 소프트웨어를 정의(혹은 생성)하는데 필요한 MFC 클래스이다. 그러므로 `CWinApp`에서 기반한 `CApplication` 클래스를 만들어 프로그램을 원하는 대로 개발한다.

```cpp
BOOL InitInstance(){
    CWinApp::InitInstance();
    
    m_pMainWnd = new CFrameWnd;
    
	return TRUE;
}
```

First, application software needs to be initialized: `BOOL InitInstance()` is inherited public member from `CWinApp` (i.e. `CWinApp::InitInstance()`). Editing this function will override `CWinApp::InitInstance()` functionality. However, referencing `CWinApp::InitInstance()` inside `CApplication::InitInstance()` makes the function to maintain its functionality from the base class, while allowing more code to follow for additional setup.

> 우선, 어플리케이션 소프트웨어가 초기화 되어야 한다. `BOOL InitInstance()`은 `CWinApp`에서 물려받은 공용 맴버이다 (즉, `CWinApp::InitInstance()`). 이 함수를 수정하면 `CWinApp::InitInstance()`의 기능을 갈아엎게 된다. 하지만 `CApplication::InitInstance()` 안에 `CWinApp::InitInstance()`을 넣으므로써 기반 클래스가 가지는 함수 기능을 유지하면서 코드를 더 넣어 추가 설정을 가능케 한다.

For you information, `CWinApp::InitInstance()` is automatically called when running the program. This member function allows multiple copy of the program to be run at the same time.

> 추가적으로, `CWinApp::InitInstance()`는 프로그램 실행 시 자동적으로 불러오는 함수이다. 이 맴버 함수는 동일 프로그램 여러 개를 동시에 실행하는 게 가능케 한다.

Once `InitInstance()` member is overridden, `CWinThread::m_pMainWnd` needs to be re-set, according to [Microsoft Docs](https://docs.microsoft.com/en-us/cpp/mfc/reference/cwinapp-class?view=vs-2019#initinstance). Here, `CWinThread::m_pMainWnd` is a public member with memory address designated to the thread of the application main (frame) window. Therefore, the program's main frame window must be assigned to the `m_pMainWnd` variable, where in this example is `CFrameWnd` without any setting.

> `InitInstance()` 함수가 재정의가 되면 [마이크로소프트 문서](https://docs.microsoft.com/ko-kr/cpp/mfc/reference/cwinapp-class?view=vs-2019#initinstance)에 의하면 `CWinThread::m_pMainWnd`도 새로 설정해야 한다. 여기서 `CWinThread::m_pMainWnd`는 공용 맴버로써 어플리케이션의 메인 (프레임) 윈도우를 가리키는 메모리 주소를 가리킨다. 그러므로, `m_pMainWnd`에는 프로그램의 메인 프레임 윈도우가 할당되어야 하며, 본 예시에서는 아무런 설정이 없는 `CFrameWnd`이다.

Because the MFC's `CFrameWnd` is not set, no visualized window is presented with process "MFC01_01.exe" running silently. Since no GUI is presented to close the window, the only way to end the program is by ending the process using Task Manager (shortcut: `Ctrl+Alt+Del`).

> `CFrameWnd`가 아무런 설정이 되지 않았으므로 아무런 창이 나타나지 않은 상태에서 "MFC01_01.exe" 프로세스가 조용히 실행된다. 창을 닫기 위한 GUI가 없기 때문에, 프로그램을 종료하는 방법은 작업 관리자 (단축키: `Ctrl+Alt+Del`)에서 프로세스를 직접 종료하는 방법이 유일하다.

```cpp
int ExitInstance() {
	return CWinApp::ExitInstance();
}
```





```cpp
CApplication app;
```

Finally, with the MFC class for creating application software is ready, create instance which represents as the executing program. This is the reason why there is a term `Instance` is presented on both APIs above.

> 마지막으로 어플리케이션 소프트웨어를 생성하는 MFC 클래스가 준비되었으면, 실행 프로그램을 뜻하는 클래스의 객체를 생성한다. 이것이 바로 위의 두 API에 Instance(객체)라는 단어가 붙어있는 이유이다.

