#include "xbox_kernel.h"

#include <cstdarg>
#include <cstdio>
#include <chrono>

PPC_FUNC_IMPL(__imp__DbgPrint)
{
    (void)ctx;
    (void)base;
}

PPC_FUNC_IMPL(__imp__KeQueryPerformanceFrequency)
{
    (void)ctx;
    (void)base;
}
