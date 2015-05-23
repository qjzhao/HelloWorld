
// HelloWord.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CHelloWordApp:
// See HelloWord.cpp for the implementation of this class
//

class CHelloWordApp : public CWinApp
{
public:
	CHelloWordApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CHelloWordApp theApp;