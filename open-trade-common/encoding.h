/////////////////////////////////////////////////////////////////////////
///@file encoding.h
///@brief	字符编码处理工具
///@copyright	上海信易信息科技股份有限公司 版权所有 
/////////////////////////////////////////////////////////////////////////

#pragma once

#include <string>

std::string GBKToUTF8(const char* strGBK);

std::string UTF8ToGBK(const char* strUTF8);
