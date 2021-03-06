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

#include "stdafx.h"
#include "BasicException.h"

/**
 Method   : void WarnUser(LPCTSTR titleWarningBox = "Warning")
 Purpose  : Warn the user that a problem as occurred.
 Version  : 1.0.0
*/
void BasicException::WarnUser(LPCTSTR titleWarningBox) {
	::WarnUser(cause, titleWarningBox);
	userWasInformed = true;
}

/**
 Method   : bool UserWantsToRetryOperation()
 Purpose  : returns whether the user wants or not to retry the operation
            that caused the exception.
 Version  : 1.1.0
*/
bool BasicException::UserWantsToRetryOperation() {
	assert(canRetryOperation == true);

	bool retryOperation = (AfxGetMainWnd()->MessageBox(cause + _TEXT(" Do you want to retry ?"), _TEXT("Warning"), MB_ICONEXCLAMATION | MB_RETRYCANCEL) == IDRETRY);
	if (retryOperation) {
		retries++;
	} else {
		userWasInformed = true;
	}
	
	return retryOperation;
}