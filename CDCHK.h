// CDCHK.h : main header file for the CDCHK application
//

#if !defined(AFX_CDCHK_H__07179D05_5F0C_11D2_93F1_0040052C9703__INCLUDED_)
#define AFX_CDCHK_H__07179D05_5F0C_11D2_93F1_0040052C9703__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CCDCHKApp:
// See CDCHK.cpp for the implementation of this class
//

class CCDCHKApp : public CWinApp
{
public:
	CCDCHKApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCDCHKApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CCDCHKApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CDCHK_H__07179D05_5F0C_11D2_93F1_0040052C9703__INCLUDED_)
