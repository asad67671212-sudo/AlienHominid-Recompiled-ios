#include "xbox_kernel.h"

// NOTE:
//  * The PPC function ABI is `void f(PPCContext& ctx, uint8_t* base)` (a
//    *reference*, not a pointer) - see PPC_FUNC in ppc_context.h.
//  * The matching declarations in ppc_recomp_shared.h use PPC_EXTERN_FUNC
//    (C++ linkage), so the definitions here must also use C++ linkage
//    (PPC_FUNC). Using PPC_FUNC_IMPL (extern "C") here causes
//    "conflicting declaration ... with 'C' linkage".

PPC_FUNC(__imp__DbgPrint)
{
    (void)base;
    ctx.r3.u64 = 0;
}

PPC_FUNC(__imp__KeQueryPerformanceFrequency)
{
    (void)base;
    ctx.r3.u64 = 1000000000ull; // 1 GHz, in Hz
}
