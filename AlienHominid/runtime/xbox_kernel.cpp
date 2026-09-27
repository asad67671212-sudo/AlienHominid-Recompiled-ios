#include "xbox_kernel.h"

#include <chrono>
#include <cstdarg>
#include <cstdio>

PPC_FUNC_IMPL(__imp__DbgPrint)
{
    (void)base;
    if (ctx)
        ctx->r3.u64 = 0;
}

PPC_FUNC_IMPL(__imp__KeQueryPerformanceFrequency)
{
    (void)base;
    if (ctx)
        ctx->r3.u64 = 1000000000ull;
}
