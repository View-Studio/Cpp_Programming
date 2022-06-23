#include "Math.h"

double Math::abs(double num)
{
    if (num < 0)
    {
        num = -num;
    }
    return num;
}