/*
	vfdwin.rc

	Virtual Floppy Drive for Windows
	GUI Control Panel
	Main resource script

	The non-standard extension ".rs" is intentional, so that
	Microsoft Visual Studio won't try to open this file with
	the resource editor

	Copyright (c) 2003-2005 Ken Kato
*/

#ifndef APSTUDIO_INVOKED

//
//	version resource
//
#include <winver.h>
#include "vfdver.h"
#include "vfdwin.h"

#define VFD_FILEOS				VOS_NT_WINDOWS32
#define VFD_FILETYPE			VFT_APP
#define VFD_FILESUBTYPE			VFT2_UNKNOWN

#define VFD_DESCRIPTION			"Virtual Floppy Drive Control Panel"
#define VFD_INTERNALNAME		VFDWIN_APP_BASENAME ".exe"
#define VFD_FILE_MAJOR			2
#define VFD_FILE_MINOR			1

//
//	for Japanese version resources
//
#define VFD_VERSIONINFO_ALT		"041104B0"
#undef VFD_VERSIONINFO_TRANS
#define VFD_VERSIONINFO_TRANS	0x0409, 0x04B0, 0x0411, 0x04B0

#define VFD_DESCRIPTION_ALT		"Virtual Floppy Drive コントロールパネル"
#define VFD_PRODUCT_NAME_ALT	VFD_PRODUCT_NAME

#include "vfdver.rc"

//
//	GUI resource
//
#include "vfdwin.rc"

//
//	Message resource
//
#include "vfdmsg.rc"

#endif	//	!APSTUDIO_INVOKED
