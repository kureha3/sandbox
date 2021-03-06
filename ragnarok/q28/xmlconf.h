//--------------------------------------------------------------------------------------
// File: xmlconf.h
//--------------------------------------------------------------------------------------
#pragma once

#include <list>

//--------------------------------------------------------------------------------------
// Struct

typedef struct _MASTERCONFIG
{
    _bstr_t execName;
    _bstr_t execPath;
    int ackWait;
} MASTERCONFIG, *PMASTERCONFIG;

typedef struct _ACCOUNTINFO
{
    _bstr_t varName;
    _bstr_t varSIID;
    _bstr_t varGunghoID;
    _bstr_t varPassword;
} ACCOUNTINFO, *PACCOUNTINFO;
typedef std::list<ACCOUNTINFO> ACCOUNTLIST;

extern MASTERCONFIG Config;
extern ACCOUNTLIST AccountList;


HRESULT LoadXml(const TCHAR* XmlFileName);
