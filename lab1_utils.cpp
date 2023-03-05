#include <cmath>
#include "lab1_utils.h"
int g_iNumberOfCalls_18 = 0;
int GetNumberOfArgumentsByArgc_18(int argc)
{
    ++g_iNumberOfCalls_18;
    return argc - 1;
}
static bool IsTriangleValid_18(double sideA, double sideB, double sideC)
{
    const bool cbRes =
            (sideA > (sideB + sideC)) && (sideB > (sideA + sideC)) && (sideC > (sideA + sideB));
    return cbRes;
}
double GetTriangleAreaByHeron_18(double sideA, double sideB, double sideC)
{
    ++g_iNumberOfCalls_18;
    double dRes = NAN;
    if (IsTriangleValid_NN(sideA, sideB, sideC))
    {
        const double cbSemiP = (sideA + sideB + sideC) * 0.5;
        dRes = sqrt(cbSemiP * (cbSemiP - sideA) * (cbSemiP - sideB) * (cbSemiP - sideC));
    }
    return dRes;
}