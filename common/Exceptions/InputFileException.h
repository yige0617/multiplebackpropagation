/*
	Noel Lopes is a Professor Assistant at the Polytechnic Institute of Guarda, Portugal (for more information see readme.txt)
    Copyright (C) 1999, 2000, 2001, 2002, 2003, 2004, 2005, 2006, 2007, 2008, 2009 Noel de Jesus Mendon�a Lopes

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
 Classes  : InputFileException
 Purpose  : Used to throw Input File exceptions.
 Date     : 4 of December of 1999
 Reviewed : 5 of December of 1999
 Version  : 1.0.1
 Comments :
             ----------------
            | BasicException |
             ----------------
               |   ----------------------
               -->| Exception<InputFile> |
                   ----------------------
                     |   --------------------
                     -->| InputFileException |
                         --------------------
*/
#ifndef InputFileException_h
#define InputFileException_h

#include "Exception.h"

class InputFile;

class InputFileException : public Exception<InputFile> {
	public :
		/**
		 Constructor : InputFileException(CFileException * e, InputFile * object)
		 Purpose     : Initialise the InputFileException object.
		 Version     : 1.0.1
		*/
		InputFileException(CFileException * e, InputFile * object) : Exception<InputFile>(object) {
			DetermineCauseBased(e);
		}

		/**
		 Method  : void DetermineCauseBased(CFileException * e)
		 Purpose : Determine why the exception has ocurred and 
		           if it can be retried. This is done based on 
							 the information of a CFileException object.
		 Version : 1.0.0
		*/
		void DetermineCauseBased(CFileException * e) {
			cause = _TEXT("Could not read from the file � ") + e->m_strFileName + _TEXT(" �.");

			switch(e->m_cause) {

				case CFileException::fileNotFound :
					cause += _TEXT(" File not found.");
					canRetryOperation = false;
					break;

				case CFileException::badPath :
					cause += _TEXT(" Invalid path.");
					canRetryOperation = false;
					break;

				case CFileException::tooManyOpenFiles :
					cause += _TEXT(" Too many files open.");
					canRetryOperation = true;
					break;

				case CFileException::accessDenied :
					cause += _TEXT(" Access denied. Make sure you have priviledges to access that file.");
					canRetryOperation = true;
					break;

				case CFileException::hardIO :
					cause = _TEXT("Hardware error. ") + cause;
					canRetryOperation = true;
					break;

				case CFileException::sharingViolation :
					cause += _TEXT("There was a sharing violation. The file may be in use by another program.");
					canRetryOperation = true;
			}
		}
};

#endif