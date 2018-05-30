/////////////////////////////////////////////////////////////////////////
///@file numset.cpp
///@brief	��ֵ������
///@copyright	�Ϻ�������Ϣ�Ƽ��ɷ����޹�˾ ��Ȩ���� 
/////////////////////////////////////////////////////////////////////////

#include "stdafx.h"

#include "numset.h"
#include <float.h>
#include <limits.h>

bool IsZero(double x)
{
    return (x > -DBL_EPSILON && x < DBL_EPSILON);
}

bool IsZero(long x)
{
    return x == 0;
}

bool IsZero( long long x )
{
    return (x == (long long)0);
}

bool IsValid(double x)
{
    return (!_isnan(x)) && (x < 1e20) && (x > -1e20);
}

bool IsValid(long x)
{
    return x != LONG_MAX;
}

bool IsValid(int x)
{
    return x != INT_MAX;
}

bool IsValid( long long x )
{
    return x != LLONG_MAX;
}

void SetInvalid( double* x )
{
    *x = NAN;
}

void SetInvalid(long* x)
{
    *x = LONG_MAX;
}

void SetInvalid(long long* x)
{
    *x = LLONG_MAX;
}


