/////////////////////////////////////////////////////////////////////////
///@file encoding.h
///@brief	�ַ����봦����
///@copyright	�Ϻ�������Ϣ�Ƽ��ɷ����޹�˾ ��Ȩ���� 
/////////////////////////////////////////////////////////////////////////

#pragma once

#include <string>
#include <Windows.h>

std::string GBKToUTF8(const char* strGBK);
std::string UTF8ToGBK(const char* strUTF8);
std::string WideToUtf8(const wchar_t* wstr);
std::wstring Utf8ToWide(const char* str_utf8);

