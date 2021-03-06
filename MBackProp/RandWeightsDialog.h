/*
	Noel Lopes is an Assistant Professor at the Polytechnic Institute of Guarda, Portugal (for more information see readme.txt)
    Copyright (C) 1999, 2000, 2001, 2002, 2003, 2004, 2005, 2006, 2007, 2008, 2009, 2010 Noel de Jesus Mendon�a Lopes

	This file is part of Multiple Back-Propagation.

    Multiple Back-Propagation is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

/**
 Class    : RandWeightsDialog
 Puropse  : Randomize Weights dialog class.
 Date     : 22 of November of 1999
 Reviewed : 23 of November of 1999
 Version  : 1.1.0
 Comments :
             ---------
            | CObject |
             ---------
                |   ------------
                -->| CCmdTarget |
                    ------------
                      |   ------
                      -->| CWnd |
                          ------
                            |   ---------
                            -->| CDialog |
                                ---------
                                  |   -------------------
                                  -->| RandWeightsDialog |
                                      -------------------
*/
#ifndef RandWeightsDialog_h
#define RandWeightsDialog_h

#include "CtrlCientificNumber.h"

#if _MSC_VER > 1000
	#pragma once
#endif

class RandWeightsDialog : public CDialog {
	public:
		/**
		 Constructor : RandWeightsDialog(CWnd * pParent)
		 Purpose     : Initialize the dialog.
		 Version     : 1.0.0
		*/
		RandWeightsDialog(CWnd* pParent) : CDialog(IDD_RANDWEIGHTS, pParent) {}

	private :
		//{{AFX_DATA(RandWeightsDialog)
		//}}AFX_DATA

		//{{AFX_MSG(RandWeightsDialog)
		virtual BOOL OnInitDialog();
		virtual void OnOK();
		//}}AFX_VIRTUAL

		//{{AFX_VIRTUAL(RandWeightsDialog)
		virtual void DoDataExchange(CDataExchange* pDX); // DDX/DDV support
		//}}AFX_VIRTUAL

		/**
		 Attribute : CCientificNumber	initialWeightEdit
		 Purpose   : Inital weight edit box.
		*/
		CientificNumber	initialWeightEdit;

		/**
		 Attribute : CCientificNumber	finalWeightEdit
		 Purpose   : Final weight edit box.
		*/
		CientificNumber finalWeightEdit;	

		DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}

#endif