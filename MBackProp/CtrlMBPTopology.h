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

#pragma once
#include "_Font.h"

// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// MBPTopology wrapper class

class MBPTopology : public CWnd
{
protected:
	DECLARE_DYNCREATE(MBPTopology)
public:
	CLSID const& GetClsid()
	{
		static CLSID const clsid
			= { 0xE4FB26E6, 0xCEFB, 0x47C9, { 0x92, 0x50, 0x7E, 0x45, 0xDC, 0xC, 0x9E, 0x50 } };
		return clsid;
	}
	virtual BOOL Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle,
						const RECT& rect, CWnd* pParentWnd, UINT nID, 
						CCreateContext* pContext = NULL)
	{ 
		return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID); 
	}

    BOOL Create(LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, 
				UINT nID, CFile* pPersist = NULL, BOOL bStorage = FALSE,
				BSTR bstrLicKey = NULL)
	{ 
		return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID,
		pPersist, bStorage, bstrLicKey); 
	}

// Attributes
public:
enum
{
    Sigmoid = 0,
    Tanh = 1,
    Gaussian = 2,
    Linear = 3
}__MIDL___MIDL_itf_MBPTopology_0000_0000_0001;
enum network_type
{
    BP = 0,
    MBPH = 1,
    MBP = 2,
    MBPHO = 3
}__MIDL___MIDL_itf_MBPTopology_0000_0000_0002;


// Operations
public:

// _DMBPTopology

// Functions
//

	long GetActivationFunction(long layer, long neuron, long fromMainNetwork)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 ;
		InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, parms, layer, neuron, fromMainNetwork);
		return result;
	}
	void SetActivationFunction(long layer, long neuron, long fromMainNetwork, long newValue)
	{
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_I4 ;
		InvokeHelper(0x4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, layer, neuron, fromMainNetwork, newValue);
	}
	long GetNeurons(long layer, long fromMainNetwork)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_I4 ;
		InvokeHelper(0x5, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, parms, layer, fromMainNetwork);
		return result;
	}
	long GetLayers(long fromMainNetwork)
	{
		long result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x6, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, parms, fromMainNetwork);
		return result;
	}
	void SetText(LPCTSTR text, long fromMainNetwork)
	{
		static BYTE parms[] = VTS_BSTR VTS_I4 ;
		InvokeHelper(0x2, DISPATCH_METHOD, VT_EMPTY, NULL, parms, text, fromMainNetwork);
	}
	long GetNeuronsWithSelectiveActivation(long layer)
	{
		long result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x7, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, parms, layer);
		return result;
	}
	void SetNeuronsWithSelectiveActivation(long layer, long newValue)
	{
		static BYTE parms[] = VTS_I4 VTS_I4 ;
		InvokeHelper(0x7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, layer, newValue);
	}
	double GetActivationFunctionParameter(long layer, long neuron, long fromMainNetwork)
	{
		double result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 ;
		InvokeHelper(0x8, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, parms, layer, neuron, fromMainNetwork);
		return result;
	}
	void SetActivationFunctionParameter(long layer, long neuron, long fromMainNetwork, double newValue)
	{
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_R8 ;
		InvokeHelper(0x8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, layer, neuron, fromMainNetwork, newValue);
	}
	CString GetText(long fromMainNetwork)
	{
		CString result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x3, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, fromMainNetwork);
		return result;
	}
	long GetConnectInputLayerWithOutputLayer(long mainNetwork)
	{
		long result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, parms, mainNetwork);
		return result;
	}
	void SetConnectInputLayerWithOutputLayer(long mainNetwork, long newValue)
	{
		static BYTE parms[] = VTS_I4 VTS_I4 ;
		InvokeHelper(0x9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, mainNetwork, newValue);
	}
	void SetCudaRestrictions(long cudaRestrictions)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0xa, DISPATCH_METHOD, VT_EMPTY, NULL, parms, cudaRestrictions);
	}

// Properties
//

COleFont GetFont()
{
	LPDISPATCH result;
	GetProperty(DISPID_FONT, VT_DISPATCH, (void*)&result);
	return COleFont(result);
}
void SetFont(LPDISPATCH propVal)
{
	SetProperty(DISPID_FONT, VT_DISPATCH, propVal);
}
signed char GetEnabled()
{
	signed char result;
	GetProperty(DISPID_ENABLED, VT_I1, (void*)&result);
	return result;
}
void SetEnabled(signed char propVal)
{
	SetProperty(DISPID_ENABLED, VT_I1, propVal);
}
network_type GetNetworkType()
{
	network_type result;
	GetProperty(0x1, VT_I4, (void*)&result);
	return result;
}
void SetNetworkType(network_type propVal)
{
	SetProperty(0x1, VT_I4, propVal);
}


};
