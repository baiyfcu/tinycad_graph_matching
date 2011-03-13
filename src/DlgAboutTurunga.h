/*
 * Project:		TinyCAD program for schematic capture
 *				http://tinycad.sourceforge.net
 * Copyright:	� 1994-2004 Matt Pyne
 * License:		Lesser GNU Public License 2.1 (LGPL)
 *				http://www.opensource.org/licenses/lgpl-license.html
 */

#pragma once

//*************************************************************************
//*                                                                       *
//* Shows information of the program like name of the programmer e.g.     *
//*                                                                       *
//*************************************************************************

//=========================================================================
class CDlgAboutTurunga
: public CDialog
{
	typedef CDialog super;

	//=====================================================================
	//== ctor/dtor/initializing                                          ==
	//=====================================================================
	public:						CDlgAboutTurunga();
	protected:	virtual	BOOL	OnInitDialog();
};
//===========