// stdafx.h : include file for standard system include files,
//  or project specific include files that are used frequently, but
//      are changed infrequently
//

#if !defined(AFX_STDAFX_H__55884AB9_AB51_4B4F_8A11_5DD7A7F04F07__INCLUDED_)
#define AFX_STDAFX_H__55884AB9_AB51_4B4F_8A11_5DD7A7F04F07__INCLUDED_

#pragma warning(disable : 4786 4800)

#include "tweaks.h"

#ifndef _FINAL_VERSION_
#include <windows.h>
#define VC_EXTRALEAN		// Exclude rarely-used stuff from Windows headers

#include <afxwin.h>         // MFC core and standard components
#include <afxext.h>         // MFC extensions
#include <afxtempl.h>

#ifndef _AFX_NO_OLE_SUPPORT
#include <afxole.h>         // MFC OLE classes
#include <afxodlgs.h>       // MFC OLE dialog classes
#include <afxdisp.h>        // MFC Automation classes
#endif // _AFX_NO_OLE_SUPPORT


#ifndef _AFX_NO_DB_SUPPORT
#include <afxdb.h>			// MFC ODBC database classes
#endif // _AFX_NO_DB_SUPPORT

#ifndef _AFX_NO_DAO_SUPPORT
#include <afxdao.h>			// MFC DAO database classes
#endif // _AFX_NO_DAO_SUPPORT

#include <afxdtctl.h>		// MFC support for Internet Explorer 4 Common Controls
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>			// MFC support for Windows Common Controls
#endif // _AFX_NO_AFXCMN_SUPPORT
#endif //_FINAL_VERSION_

#include <vector> 
#include <string>
#include <algorithm>

#include "xutil.h"
#include "Serialization.h"
#include "xmath.h"
#include "Timers.h"

// Visual Studio 2019, afxv_w32.h: #error MFC does not support WINVER less than 0x0501.
#if !defined(WINVER)
#define WINVER	0x0501
#endif
#if !defined(_WIN32_WINNT)
#define _WIN32_WINNT 0x0501
#endif

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STDAFX_H__55884AB9_AB51_4B4F_8A11_5DD7A7F04F07__INCLUDED_)
