#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_820B9340"))) PPC_WEAK_FUNC(sub_820B9340);
PPC_FUNC_IMPL(__imp__sub_820B9340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x820B9348;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// clrlwi r4,r30,16
	ctx.r4.u64 = ctx.r30.u32 & 0xFFFF;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820B936C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820b937c
	if (ctx.cr0.eq) goto loc_820B937C;
loc_820B9374:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x820b93fc
	goto loc_820B93FC;
loc_820B937C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820bb580
	ctx.lr = 0x820B938C;
	sub_820BB580(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x820b9374
	if (!ctx.cr0.eq) goto loc_820B9374;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x820ad980
	ctx.lr = 0x820B93A0;
	sub_820AD980(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x820b93b4
	if (ctx.cr0.eq) goto loc_820B93B4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820817b0
	ctx.lr = 0x820B93B0;
	sub_820817B0(ctx, base);
	// b 0x820b9374
	goto loc_820B9374;
loc_820B93B4:
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// bl 0x820b0620
	ctx.lr = 0x820B93C4;
	sub_820B0620(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x820b93dc
	if (ctx.cr0.eq) goto loc_820B93DC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820817b0
	ctx.lr = 0x820B93D4;
	sub_820817B0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x820b93e0
	goto loc_820B93E0;
loc_820B93DC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820B93E0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x820b9374
	if (!ctx.cr0.eq) goto loc_820B9374;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
loc_820B93FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B9404"))) PPC_WEAK_FUNC(sub_820B9404);
PPC_FUNC_IMPL(__imp__sub_820B9404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B9408"))) PPC_WEAK_FUNC(sub_820B9408);
PPC_FUNC_IMPL(__imp__sub_820B9408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bl 0x820b0620
	ctx.lr = 0x820B9428;
	sub_820B0620(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820b9470
	if (ctx.cr0.eq) goto loc_820B9470;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x820b946c
	if (ctx.cr6.eq) goto loc_820B946C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x820b9464
	if (ctx.cr6.eq) goto loc_820B9464;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bne cr6,0x820b9470
	if (!ctx.cr6.eq) goto loc_820B9470;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x820b9470
	goto loc_820B9470;
loc_820B9464:
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x820b9470
	goto loc_820B9470;
loc_820B946C:
	// lbz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
loc_820B9470:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B9488"))) PPC_WEAK_FUNC(sub_820B9488);
PPC_FUNC_IMPL(__imp__sub_820B9488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// lfs f31,9472(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9472);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x820b0620
	ctx.lr = 0x820B94A8;
	sub_820B0620(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820b94e0
	if (ctx.cr0.eq) goto loc_820B94E0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x820b94cc
	if (ctx.cr6.eq) goto loc_820B94CC;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bne cr6,0x820b94e0
	if (!ctx.cr6.eq) goto loc_820B94E0;
	// lfs f31,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f31.f64 = double(temp.f32);
	// b 0x820b94e0
	goto loc_820B94E0;
loc_820B94CC:
	// lwa r11,8(r3)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r3.u32 + 8));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f31,f0
	ctx.f31.f64 = double(float(ctx.f0.f64));
loc_820B94E0:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B94F8"))) PPC_WEAK_FUNC(sub_820B94F8);
PPC_FUNC_IMPL(__imp__sub_820B94F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x820B9500;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r28,r30,4
	ctx.r28.s64 = ctx.r30.s64 + 4;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820b0620
	ctx.lr = 0x820B951C;
	sub_820B0620(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x820b9540
	if (ctx.cr0.eq) goto loc_820B9540;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820bb2d0
	ctx.lr = 0x820B9530;
	sub_820BB2D0(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x820b9594
	goto loc_820B9594;
loc_820B9540:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x820d4cd8
	ctx.lr = 0x820B9548;
	sub_820D4CD8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820b9568
	if (ctx.cr0.eq) goto loc_820B9568;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// b 0x820b956c
	goto loc_820B956C;
loc_820B9568:
	// li r31,0
	ctx.r31.s64 = 0;
loc_820B956C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820bb2d0
	ctx.lr = 0x820B9578;
	sub_820BB2D0(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x820beca0
	ctx.lr = 0x820B9594;
	sub_820BECA0(ctx, base);
loc_820B9594:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B959C"))) PPC_WEAK_FUNC(sub_820B959C);
PPC_FUNC_IMPL(__imp__sub_820B959C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B95A0"))) PPC_WEAK_FUNC(sub_820B95A0);
PPC_FUNC_IMPL(__imp__sub_820B95A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x820B95A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x820b0620
	ctx.lr = 0x820B95C0;
	sub_820B0620(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820b962c
	if (ctx.cr0.eq) goto loc_820B962C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x820b961c
	if (ctx.cr6.eq) goto loc_820B961C;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x820b960c
	if (ctx.cr6.eq) goto loc_820B960C;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x820b966c
	if (!ctx.cr6.eq) goto loc_820B966C;
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// b 0x820b966c
	goto loc_820B966C;
loc_820B960C:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x820b966c
	goto loc_820B966C;
loc_820B961C:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// b 0x820b966c
	goto loc_820B966C;
loc_820B962C:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x820d4cd8
	ctx.lr = 0x820B9634;
	sub_820D4CD8(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x820b9650
	if (ctx.cr0.eq) goto loc_820B9650;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// b 0x820b9654
	goto loc_820B9654;
loc_820B9650:
	// li r5,0
	ctx.r5.s64 = 0;
loc_820B9654:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r29,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r29.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// bl 0x820beca0
	ctx.lr = 0x820B966C;
	sub_820BECA0(ctx, base);
loc_820B966C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820B9674"))) PPC_WEAK_FUNC(sub_820B9674);
PPC_FUNC_IMPL(__imp__sub_820B9674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B9678"))) PPC_WEAK_FUNC(sub_820B9678);
PPC_FUNC_IMPL(__imp__sub_820B9678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820b0620
	ctx.lr = 0x820B96A4;
	sub_820B0620(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820b970c
	if (ctx.cr0.eq) goto loc_820B970C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x820b96fc
	if (ctx.cr6.eq) goto loc_820B96FC;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x820b96dc
	if (ctx.cr6.eq) goto loc_820B96DC;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x820b974c
	if (!ctx.cr6.eq) goto loc_820B974C;
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// b 0x820b974c
	goto loc_820B974C;
loc_820B96DC:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fctiwz f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f31.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f31.f64));
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x820b974c
	goto loc_820B974C;
loc_820B96FC:
	// li r11,16
	ctx.r11.s64 = 16;
	// stfs f31,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// b 0x820b974c
	goto loc_820B974C;
loc_820B970C:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x820d4cd8
	ctx.lr = 0x820B9714;
	sub_820D4CD8(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x820b9730
	if (ctx.cr0.eq) goto loc_820B9730;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// b 0x820b9734
	goto loc_820B9734;
loc_820B9730:
	// li r5,0
	ctx.r5.s64 = 0;
loc_820B9734:
	// li r11,16
	ctx.r11.s64 = 16;
	// stfs f31,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// bl 0x820beca0
	ctx.lr = 0x820B974C;
	sub_820BECA0(ctx, base);
loc_820B974C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B9768"))) PPC_WEAK_FUNC(sub_820B9768);
PPC_FUNC_IMPL(__imp__sub_820B9768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,30176
	ctx.r11.s64 = ctx.r11.s64 + 30176;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stb r30,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r30.u8);
	// stb r30,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r30.u8);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// bl 0x820b5d58
	ctx.lr = 0x820B97BC;
	sub_820B5D58(ctx, base);
	// lbz r11,82(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 82);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// sth r30,78(r31)
	PPC_STORE_U16(ctx.r31.u32 + 78, ctx.r30.u16);
	// sth r30,80(r31)
	PPC_STORE_U16(ctx.r31.u32 + 80, ctx.r30.u16);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stb r11,82(r31)
	PPC_STORE_U8(ctx.r31.u32 + 82, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B97F4"))) PPC_WEAK_FUNC(sub_820B97F4);
PPC_FUNC_IMPL(__imp__sub_820B97F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B97F8"))) PPC_WEAK_FUNC(sub_820B97F8);
PPC_FUNC_IMPL(__imp__sub_820B97F8) {
	PPC_FUNC_PROLOGUE();
	// lhz r3,76(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 76);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B9800"))) PPC_WEAK_FUNC(sub_820B9800);
PPC_FUNC_IMPL(__imp__sub_820B9800) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,82(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 82);
	// andi. r11,r11,191
	ctx.r11.u64 = ctx.r11.u64 & 191;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,82(r3)
	PPC_STORE_U8(ctx.r3.u32 + 82, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B9810"))) PPC_WEAK_FUNC(sub_820B9810);
PPC_FUNC_IMPL(__imp__sub_820B9810) {
	PPC_FUNC_PROLOGUE();
	// li r3,2048
	ctx.r3.s64 = 2048;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B9818"))) PPC_WEAK_FUNC(sub_820B9818);
PPC_FUNC_IMPL(__imp__sub_820B9818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,30176
	ctx.r11.s64 = ctx.r11.s64 + 30176;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x820b3a60
	ctx.lr = 0x820B983C;
	sub_820B3A60(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,28968
	ctx.r11.s64 = ctx.r11.s64 + 28968;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x820b0700
	ctx.lr = 0x820B9850;
	sub_820B0700(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x820b84d0
	ctx.lr = 0x820B9858;
	sub_820B84D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B986C"))) PPC_WEAK_FUNC(sub_820B986C);
PPC_FUNC_IMPL(__imp__sub_820B986C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B9870"))) PPC_WEAK_FUNC(sub_820B9870);
PPC_FUNC_IMPL(__imp__sub_820B9870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x820b9818
	ctx.lr = 0x820B9890;
	sub_820B9818(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820b98a0
	if (ctx.cr0.eq) goto loc_820B98A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d4d38
	ctx.lr = 0x820B98A0;
	sub_820D4D38(ctx, base);
loc_820B98A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B98BC"))) PPC_WEAK_FUNC(sub_820B98BC);
PPC_FUNC_IMPL(__imp__sub_820B98BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B98C0"))) PPC_WEAK_FUNC(sub_820B98C0);
PPC_FUNC_IMPL(__imp__sub_820B98C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98b0
	ctx.lr = 0x820B98C8;
	__savegprlr_14(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// clrlwi r28,r24,16
	ctx.r28.u64 = ctx.r24.u32 & 0xFFFF;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// sth r24,382(r1)
	PPC_STORE_U16(ctx.r1.u32 + 382, ctx.r24.u16);
	// lwz r11,164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820B98EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820ba1e4
	if (ctx.cr6.eq) goto loc_820BA1E4;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x820be7e0
	ctx.lr = 0x820B9900;
	sub_820BE7E0(ctx, base);
	// lwz r11,6728(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6728);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r11,1618
	ctx.r10.s64 = ctx.r11.s64 + 1618;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,6728(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6728, ctx.r11.u32);
	// stwx r31,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r31.u32);
	// lhz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 132);
	// lhz r10,134(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 134);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,134(r31)
	PPC_STORE_U16(ctx.r31.u32 + 134, ctx.r11.u16);
	// sth r10,130(r31)
	PPC_STORE_U16(ctx.r31.u32 + 130, ctx.r10.u16);
	// bne 0x820b9938
	if (!ctx.cr0.eq) goto loc_820B9938;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r11,134(r31)
	PPC_STORE_U16(ctx.r31.u32 + 134, ctx.r11.u16);
loc_820B9938:
	// lbz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 128);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// lwz r11,144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// stb r10,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r10.u8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820B9958;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x820be7e0
	ctx.lr = 0x820B9964;
	sub_820BE7E0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// bl 0x820c0618
	ctx.lr = 0x820B9974;
	sub_820C0618(ctx, base);
	// li r19,0
	ctx.r19.s64 = 0;
	// lhz r11,130(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 130);
	// li r15,1
	ctx.r15.s64 = 1;
	// mr r23,r19
	ctx.r23.u64 = ctx.r19.u64;
	// mr r16,r19
	ctx.r16.u64 = ctx.r19.u64;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// ble cr6,0x820b9c08
	if (!ctx.cr6.gt) goto loc_820B9C08;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r25,r31,96
	ctx.r25.s64 = ctx.r31.s64 + 96;
	// clrlwi r26,r11,16
	ctx.r26.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x820b0620
	ctx.lr = 0x820B99AC;
	sub_820B0620(ctx, base);
	// addi r11,r31,92
	ctx.r11.s64 = ctx.r31.s64 + 92;
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r22,r10,13880
	ctx.r22.s64 = ctx.r10.s64 + 13880;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820b9a04
	if (ctx.cr0.eq) goto loc_820B9A04;
	// addi r10,r22,4
	ctx.r10.s64 = ctx.r22.s64 + 4;
loc_820B99CC:
	// lhz r9,134(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 134);
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// sth r9,78(r11)
	PPC_STORE_U16(ctx.r11.u32 + 78, ctx.r9.u16);
	// stw r19,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r19.u32);
	// stw r19,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r19.u32);
	// sth r19,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r19.u16);
	// sth r19,6(r10)
	PPC_STORE_U16(ctx.r10.u32 + 6, ctx.r19.u16);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820b99cc
	if (!ctx.cr0.eq) goto loc_820B99CC;
loc_820B9A04:
	// clrlwi r8,r26,16
	ctx.r8.u64 = ctx.r26.u32 & 0xFFFF;
	// clrlwi r11,r24,16
	ctx.r11.u64 = ctx.r24.u32 & 0xFFFF;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x820ba13c
	if (ctx.cr6.gt) goto loc_820BA13C;
	// rlwinm r11,r16,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r22,4
	ctx.r10.s64 = ctx.r22.s64 + 4;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_820B9A20:
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r30,r27,2
	ctx.r30.s64 = ctx.r27.s64 + 2;
	// add r11,r9,r27
	ctx.r11.u64 = ctx.r9.u64 + ctx.r27.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// rlwinm r10,r11,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// clrlwi r28,r10,16
	ctx.r28.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// bne cr6,0x820b9a98
	if (!ctx.cr6.eq) goto loc_820B9A98;
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// clrlwi r26,r11,16
	ctx.r26.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x820b0620
	ctx.lr = 0x820B9A90;
	sub_820B0620(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x820b9bf4
	goto loc_820B9BF4;
loc_820B9A98:
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r10,63
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 63, ctx.xer);
	// bne cr6,0x820b9ab8
	if (!ctx.cr6.eq) goto loc_820B9AB8;
	// li r4,1
	ctx.r4.s64 = 1;
	// add r3,r9,r30
	ctx.r3.u64 = ctx.r9.u64 + ctx.r30.u64;
	// bl 0x820b8620
	ctx.lr = 0x820B9AB0;
	sub_820B8620(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
loc_820B9AB8:
	// add r27,r10,r30
	ctx.r27.u64 = ctx.r10.u64 + ctx.r30.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// cmplwi cr6,r28,26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 26, ctx.xer);
	// bne cr6,0x820b9b38
	if (!ctx.cr6.eq) goto loc_820B9B38;
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// li r8,26
	ctx.r8.s64 = 26;
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r10,2(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r8,-4(r29)
	PPC_STORE_U32(ctx.r29.u32 + -4, ctx.r8.u32);
	// or r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 | ctx.r10.u64;
	// sth r15,4(r29)
	PPC_STORE_U16(ctx.r29.u32 + 4, ctx.r15.u16);
	// sth r26,6(r29)
	PPC_STORE_U16(ctx.r29.u32 + 6, ctx.r26.u16);
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r11,r11,-16384
	ctx.r11.s64 = ctx.r11.s64 + -16384;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// b 0x820b9bf4
	goto loc_820B9BF4;
loc_820B9B38:
	// cmplwi cr6,r28,5
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 5, ctx.xer);
	// beq cr6,0x820b9b50
	if (ctx.cr6.eq) goto loc_820B9B50;
	// cmplwi cr6,r28,28
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 28, ctx.xer);
	// bne cr6,0x820b9bf4
	if (!ctx.cr6.eq) goto loc_820B9BF4;
	// cmplwi cr6,r28,5
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 5, ctx.xer);
	// bne cr6,0x820b9b64
	if (!ctx.cr6.eq) goto loc_820B9B64;
loc_820B9B50:
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// b 0x820b9b7c
	goto loc_820B9B7C;
loc_820B9B64:
	// cmplwi cr6,r28,28
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 28, ctx.xer);
	// bne cr6,0x820b9bb0
	if (!ctx.cr6.eq) goto loc_820B9BB0;
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
loc_820B9B7C:
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
loc_820B9BB0:
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// addi r30,r11,-16384
	ctx.r30.s64 = ctx.r11.s64 + -16384;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x820b6308
	ctx.lr = 0x820B9BC4;
	sub_820B6308(ctx, base);
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// ble cr6,0x820b9bf4
	if (!ctx.cr6.gt) goto loc_820B9BF4;
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
	// addi r11,r22,8
	ctx.r11.s64 = ctx.r22.s64 + 8;
loc_820B9BD4:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r9,r30
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x820b9be8
	if (!ctx.cr6.eq) goto loc_820B9BE8;
	// li r9,2
	ctx.r9.s64 = 2;
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
loc_820B9BE8:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne 0x820b9bd4
	if (!ctx.cr0.eq) goto loc_820B9BD4;
loc_820B9BF4:
	// clrlwi r8,r26,16
	ctx.r8.u64 = ctx.r26.u32 & 0xFFFF;
	// clrlwi r11,r24,16
	ctx.r11.u64 = ctx.r24.u32 & 0xFFFF;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x820b9a20
	if (!ctx.cr6.gt) goto loc_820B9A20;
	// b 0x820ba13c
	goto loc_820BA13C;
loc_820B9C08:
	// addi r14,r31,96
	ctx.r14.s64 = ctx.r31.s64 + 96;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x820b0620
	ctx.lr = 0x820B9C18;
	sub_820B0620(ctx, base);
	// addi r11,r31,92
	ctx.r11.s64 = ctx.r31.s64 + 92;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r11,r11,13880
	ctx.r11.s64 = ctx.r11.s64 + 13880;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq 0x820b9c9c
	if (ctx.cr0.eq) goto loc_820B9C9C;
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
loc_820B9C3C:
	// lhz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 80);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// ble cr6,0x820b9c5c
	if (!ctx.cr6.gt) goto loc_820B9C5C;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r30,84(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// bl 0x820b6308
	ctx.lr = 0x820B9C58;
	sub_820B6308(ctx, base);
	// b 0x820b9c90
	goto loc_820B9C90;
loc_820B9C5C:
	// lhz r11,134(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 134);
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// sth r11,78(r30)
	PPC_STORE_U16(ctx.r30.u32 + 78, ctx.r11.u16);
	// stw r19,-4(r29)
	PPC_STORE_U32(ctx.r29.u32 + -4, ctx.r19.u32);
	// stw r19,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r19.u32);
	// sth r19,4(r29)
	PPC_STORE_U16(ctx.r29.u32 + 4, ctx.r19.u16);
	// lhz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 80);
	// sth r11,6(r29)
	PPC_STORE_U16(ctx.r29.u32 + 6, ctx.r11.u16);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// lwz r30,84(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
loc_820B9C90:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x820b9c3c
	if (!ctx.cr6.eq) goto loc_820B9C3C;
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
loc_820B9C9C:
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// blt cr6,0x820ba138
	if (ctx.cr6.lt) goto loc_820BA138;
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r16,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 4) & 0xFFFFFFF0;
	// li r21,255
	ctx.r21.s64 = 255;
	// addi r10,r28,4
	ctx.r10.s64 = ctx.r28.s64 + 4;
	// add r22,r11,r10
	ctx.r22.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r18,r11,28968
	ctx.r18.s64 = ctx.r11.s64 + 28968;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r17,r11,29176
	ctx.r17.s64 = ctx.r11.s64 + 29176;
	// b 0x820b9cd0
	goto loc_820B9CD0;
loc_820B9CCC:
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_820B9CD0:
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r30,r20,2
	ctx.r30.s64 = ctx.r20.s64 + 2;
	// add r11,r9,r20
	ctx.r11.u64 = ctx.r9.u64 + ctx.r20.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// rlwinm r10,r11,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// clrlwi r29,r10,16
	ctx.r29.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// bne cr6,0x820b9d4c
	if (!ctx.cr6.eq) goto loc_820B9D4C;
	// clrlwi r11,r15,16
	ctx.r11.u64 = ctx.r15.u32 & 0xFFFF;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r15,r11,16
	ctx.r15.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// bl 0x820b0620
	ctx.lr = 0x820B9D44;
	sub_820B0620(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// b 0x820ba120
	goto loc_820BA120;
loc_820B9D4C:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,63
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 63, ctx.xer);
	// bne cr6,0x820b9d6c
	if (!ctx.cr6.eq) goto loc_820B9D6C;
	// li r4,1
	ctx.r4.s64 = 1;
	// add r3,r9,r30
	ctx.r3.u64 = ctx.r9.u64 + ctx.r30.u64;
	// bl 0x820b8620
	ctx.lr = 0x820B9D64;
	sub_820B8620(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
loc_820B9D6C:
	// add r20,r11,r30
	ctx.r20.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// cmplwi cr6,r29,26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 26, ctx.xer);
	// bne cr6,0x820ba024
	if (!ctx.cr6.eq) goto loc_820BA024;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r24,r19
	ctx.r24.u64 = ctx.r19.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r25,r11,-16384
	ctx.r25.s64 = ctx.r11.s64 + -16384;
	// ble cr6,0x820b9ff4
	if (!ctx.cr6.gt) goto loc_820B9FF4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r23,88(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r26,r11,10
	ctx.r26.s64 = ctx.r11.s64 + 10;
loc_820B9DDC:
	// lwz r11,2(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2);
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// bne cr6,0x820b9fe8
	if (!ctx.cr6.eq) goto loc_820B9FE8;
	// lhz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// clrlwi r27,r15,16
	ctx.r27.u64 = ctx.r15.u32 & 0xFFFF;
	// li r24,1
	ctx.r24.s64 = 1;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820b9fe8
	if (ctx.cr6.lt) goto loc_820B9FE8;
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r11,r31,92
	ctx.r11.s64 = ctx.r31.s64 + 92;
	// lbzx r10,r10,r30
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r30.u32);
	// addi r30,r30,3
	ctx.r30.s64 = ctx.r30.s64 + 3;
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwimi r9,r11,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// rlwimi r8,r10,30,26,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 30) & 0x3F) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFC0);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// rlwimi r10,r9,2,0,28
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0xFFFFFFF8) | (ctx.r10.u64 & 0xFFFFFFFF00000007);
	// rlwimi r7,r8,30,27,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 30) & 0x1F) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFE0);
	// rlwinm r8,r11,0,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// rlwinm r10,r10,2,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFF0;
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r9,r7,30,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0xF;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r11,r11,31,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7F;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// b 0x820b9e6c
	goto loc_820B9E6C;
loc_820B9E5C:
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmpw cr6,r10,r25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r25.s32, ctx.xer);
	// beq cr6,0x820b9e78
	if (ctx.cr6.eq) goto loc_820B9E78;
	// lwz r29,84(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
loc_820B9E6C:
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne 0x820b9e5c
	if (!ctx.cr0.eq) goto loc_820B9E5C;
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
loc_820B9E78:
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm. r11,r28,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820b9e88
	if (ctx.cr0.eq) goto loc_820B9E88;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
loc_820B9E88:
	// rlwinm. r11,r28,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820b9f0c
	if (ctx.cr0.eq) goto loc_820B9F0C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820b5d58
	ctx.lr = 0x820B9E98;
	sub_820B5D58(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x820b5790
	ctx.lr = 0x820B9EA8;
	sub_820B5790(ctx, base);
	// lbz r11,82(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 82);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x820b9f0c
	if (!ctx.cr0.eq) goto loc_820B9F0C;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 36, temp.u32);
	// lfs f0,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 40, temp.u32);
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 44, temp.u32);
	// lfs f0,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 48, temp.u32);
	// lfs f0,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 52, temp.u32);
	// lfs f0,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 56, temp.u32);
	// lfs f0,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 60, temp.u32);
	// lfs f0,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 64, temp.u32);
	// lfs f0,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 68, temp.u32);
	// lbz r11,82(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 82);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stb r11,82(r29)
	PPC_STORE_U8(ctx.r29.u32 + 82, ctx.r11.u8);
loc_820B9F0C:
	// rlwinm. r11,r28,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820b9f94
	if (ctx.cr0.eq) goto loc_820B9F94;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r19,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r19.u32);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r19,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r19.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r19,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r19.u32);
	// stb r19,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r19.u8);
	// stb r19,168(r1)
	PPC_STORE_U8(ctx.r1.u32 + 168, ctx.r19.u8);
	// sth r21,184(r1)
	PPC_STORE_U16(ctx.r1.u32 + 184, ctx.r21.u16);
	// sth r21,176(r1)
	PPC_STORE_U16(ctx.r1.u32 + 176, ctx.r21.u16);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// sth r21,174(r1)
	PPC_STORE_U16(ctx.r1.u32 + 174, ctx.r21.u16);
	// sth r21,172(r1)
	PPC_STORE_U16(ctx.r1.u32 + 172, ctx.r21.u16);
	// sth r19,186(r1)
	PPC_STORE_U16(ctx.r1.u32 + 186, ctx.r19.u16);
	// sth r19,182(r1)
	PPC_STORE_U16(ctx.r1.u32 + 182, ctx.r19.u16);
	// sth r19,180(r1)
	PPC_STORE_U16(ctx.r1.u32 + 180, ctx.r19.u16);
	// sth r19,178(r1)
	PPC_STORE_U16(ctx.r1.u32 + 178, ctx.r19.u16);
	// stw r19,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r19.u32);
	// stw r17,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r17.u32);
	// bl 0x820b4228
	ctx.lr = 0x820B9F68;
	sub_820B4228(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x820b3900
	ctx.lr = 0x820B9F7C;
	sub_820B3900(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r18,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r18.u32);
	// bl 0x820b0700
	ctx.lr = 0x820B9F88;
	sub_820B0700(ctx, base);
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x820b84d0
	ctx.lr = 0x820B9F90;
	sub_820B84D0(ctx, base);
	// b 0x820b9fa8
	goto loc_820B9FA8;
loc_820B9F94:
	// lhz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x820b9fa8
	if (!ctx.cr6.eq) goto loc_820B9FA8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820b3a08
	ctx.lr = 0x820B9FA8;
	sub_820B3A08(ctx, base);
loc_820B9FA8:
	// rlwinm. r11,r28,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820b9fb4
	if (ctx.cr0.eq) goto loc_820B9FB4;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
loc_820B9FB4:
	// rlwinm. r11,r28,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820b9fe8
	if (ctx.cr0.eq) goto loc_820B9FE8;
	// lwz r10,148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r3,8536(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8536);
	// bl 0x820dae28
	ctx.lr = 0x820B9FD0;
	sub_820DAE28(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820B9FE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820B9FE8:
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r26,r26,16
	ctx.r26.s64 = ctx.r26.s64 + 16;
	// bne 0x820b9ddc
	if (!ctx.cr0.eq) goto loc_820B9DDC;
loc_820B9FF4:
	// clrlwi. r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x820ba120
	if (!ctx.cr0.eq) goto loc_820BA120;
	// li r11,26
	ctx.r11.s64 = 26;
	// stw r30,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r30.u32);
	// sth r15,6(r22)
	PPC_STORE_U16(ctx.r22.u32 + 6, ctx.r15.u16);
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// stw r25,8(r22)
	PPC_STORE_U32(ctx.r22.u32 + 8, ctx.r25.u32);
	// stw r11,-4(r22)
	PPC_STORE_U32(ctx.r22.u32 + -4, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r11,4(r22)
	PPC_STORE_U16(ctx.r22.u32 + 4, ctx.r11.u16);
	// addi r22,r22,16
	ctx.r22.s64 = ctx.r22.s64 + 16;
	// b 0x820ba120
	goto loc_820BA120;
loc_820BA024:
	// cmplwi cr6,r29,5
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 5, ctx.xer);
	// beq cr6,0x820ba03c
	if (ctx.cr6.eq) goto loc_820BA03C;
	// cmplwi cr6,r29,28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 28, ctx.xer);
	// bne cr6,0x820ba120
	if (!ctx.cr6.eq) goto loc_820BA120;
	// cmplwi cr6,r29,5
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 5, ctx.xer);
	// bne cr6,0x820ba058
	if (!ctx.cr6.eq) goto loc_820BA058;
loc_820BA03C:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// b 0x820ba078
	goto loc_820BA078;
loc_820BA058:
	// cmplwi cr6,r29,28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 28, ctx.xer);
	// bne cr6,0x820ba0a4
	if (!ctx.cr6.eq) goto loc_820BA0A4;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_820BA078:
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
loc_820BA0A4:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// addi r30,r11,-16384
	ctx.r30.s64 = ctx.r11.s64 + -16384;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x820ba0dc
	if (!ctx.cr6.gt) goto loc_820BA0DC;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// addi r11,r28,12
	ctx.r11.s64 = ctx.r28.s64 + 12;
loc_820BA0C0:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r30
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x820ba0d0
	if (!ctx.cr6.eq) goto loc_820BA0D0;
	// li r9,1
	ctx.r9.s64 = 1;
loc_820BA0D0:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne 0x820ba0c0
	if (!ctx.cr0.eq) goto loc_820BA0C0;
loc_820BA0DC:
	// clrlwi. r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x820ba120
	if (!ctx.cr0.eq) goto loc_820BA120;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x820b6308
	ctx.lr = 0x820BA0F0;
	sub_820B6308(ctx, base);
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// ble cr6,0x820ba120
	if (!ctx.cr6.gt) goto loc_820BA120;
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
	// addi r11,r28,8
	ctx.r11.s64 = ctx.r28.s64 + 8;
loc_820BA100:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r9,r30
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x820ba114
	if (!ctx.cr6.eq) goto loc_820BA114;
	// li r9,2
	ctx.r9.s64 = 2;
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
loc_820BA114:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne 0x820ba100
	if (!ctx.cr0.eq) goto loc_820BA100;
loc_820BA120:
	// lhz r24,382(r1)
	ctx.r24.u64 = PPC_LOAD_U16(ctx.r1.u32 + 382);
	// clrlwi r10,r15,16
	ctx.r10.u64 = ctx.r15.u32 & 0xFFFF;
	// lwz r23,88(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x820b9ccc
	if (!ctx.cr6.gt) goto loc_820B9CCC;
loc_820BA138:
	// lwz r22,84(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_820BA13C:
	// cmpw cr6,r23,r16
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r16.s32, ctx.xer);
	// bge cr6,0x820ba190
	if (!ctx.cr6.lt) goto loc_820BA190;
	// rlwinm r11,r23,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r22,10
	ctx.r10.s64 = ctx.r22.s64 + 10;
	// subf r29,r23,r16
	ctx.r29.s64 = ctx.r16.s64 - ctx.r23.s64;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_820BA154:
	// lhz r11,-2(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + -2);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x820ba184
	if (ctx.cr6.eq) goto loc_820BA184;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// sth r11,134(r31)
	PPC_STORE_U16(ctx.r31.u32 + 134, ctx.r11.u16);
	// lwz r11,-6(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6);
	// lwz r4,-10(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x820b60c0
	ctx.lr = 0x820BA184;
	sub_820B60C0(ctx, base);
loc_820BA184:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bne 0x820ba154
	if (!ctx.cr0.eq) goto loc_820BA154;
loc_820BA190:
	// addi r11,r31,92
	ctx.r11.s64 = ctx.r31.s64 + 92;
	// sth r24,134(r31)
	PPC_STORE_U16(ctx.r31.u32 + 134, ctx.r24.u16);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x820ba1b8
	goto loc_820BA1B8;
loc_820BA1A0:
	// lhz r10,78(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 78);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x820ba1b4
	if (!ctx.cr0.eq) goto loc_820BA1B4;
	// lhz r10,134(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 134);
	// sth r10,78(r11)
	PPC_STORE_U16(ctx.r11.u32 + 78, ctx.r10.u16);
loc_820BA1B4:
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
loc_820BA1B8:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820ba1a0
	if (!ctx.cr0.eq) goto loc_820BA1A0;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x820be7e0
	ctx.lr = 0x820BA1C8;
	sub_820BE7E0(ctx, base);
	// lwz r11,6728(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6728);
	// addi r11,r11,1618
	ctx.r11.s64 = ctx.r11.s64 + 1618;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r19,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r19.u32);
	// lwz r11,6728(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6728);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,6728(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6728, ctx.r11.u32);
loc_820BA1E4:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x822e9900
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BA1EC"))) PPC_WEAK_FUNC(sub_820BA1EC);
PPC_FUNC_IMPL(__imp__sub_820BA1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BA1F0"))) PPC_WEAK_FUNC(sub_820BA1F0);
PPC_FUNC_IMPL(__imp__sub_820BA1F0) {
	PPC_FUNC_PROLOGUE();
	// clrlwi. r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lhz r10,136(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 136);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x820ba20c
	if (!ctx.cr6.gt) goto loc_820BA20C;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_820BA20C:
	// lbz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 128);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stb r11,128(r3)
	PPC_STORE_U8(ctx.r3.u32 + 128, ctx.r11.u8);
	// b 0x820b98c0
	sub_820B98C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BA21C"))) PPC_WEAK_FUNC(sub_820BA21C);
PPC_FUNC_IMPL(__imp__sub_820BA21C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BA220"))) PPC_WEAK_FUNC(sub_820BA220);
PPC_FUNC_IMPL(__imp__sub_820BA220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi. r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// beq 0x820ba28c
	if (ctx.cr0.eq) goto loc_820BA28C;
	// lhz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 136);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x820ba258
	if (!ctx.cr6.gt) goto loc_820BA258;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
loc_820BA258:
	// lbz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 128);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r11,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r11.u8);
	// bl 0x820b98c0
	ctx.lr = 0x820BA270;
	sub_820B98C0(ctx, base);
	// lhz r11,134(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 134);
	// clrlwi r10,r30,16
	ctx.r10.u64 = ctx.r30.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x820ba28c
	if (!ctx.cr6.eq) goto loc_820BA28C;
	// lbz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 128);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stb r11,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r11.u8);
loc_820BA28C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BA2A4"))) PPC_WEAK_FUNC(sub_820BA2A4);
PPC_FUNC_IMPL(__imp__sub_820BA2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BA2A8"))) PPC_WEAK_FUNC(sub_820BA2A8);
PPC_FUNC_IMPL(__imp__sub_820BA2A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98d4
	ctx.lr = 0x820BA2B0;
	__savegprlr_23(ctx, base);
	// stfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,15
	ctx.r3.s64 = 15;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// bl 0x820d4c58
	ctx.lr = 0x820BA2E4;
	sub_820D4C58(ctx, base);
	// lwz r11,6728(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 6728);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r11,1618
	ctx.r10.s64 = ctx.r11.s64 + 1618;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,6728(r24)
	PPC_STORE_U32(ctx.r24.u32 + 6728, ctx.r11.u32);
	// stwx r30,r10,r24
	PPC_STORE_U32(ctx.r10.u32 + ctx.r24.u32, ctx.r30.u32);
	// bl 0x820a59d0
	ctx.lr = 0x820BA304;
	sub_820A59D0(ctx, base);
	// li r23,0
	ctx.r23.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820ba374
	if (ctx.cr0.eq) goto loc_820BA374;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x820d4c58
	ctx.lr = 0x820BA31C;
	sub_820D4C58(ctx, base);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x820a5bc0
	ctx.lr = 0x820BA334;
	sub_820A5BC0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820d4c98
	ctx.lr = 0x820BA340;
	sub_820D4C98(ctx, base);
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x820baa88
	if (!ctx.cr0.eq) goto loc_820BAA88;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x820d4c58
	ctx.lr = 0x820BA354;
	sub_820D4C58(ctx, base);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r3,152(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x820b1130
	ctx.lr = 0x820BA370;
	sub_820B1130(ctx, base);
	// b 0x820baa80
	goto loc_820BAA80;
loc_820BA374:
	// li r3,19
	ctx.r3.s64 = 19;
	// bl 0x820d4c58
	ctx.lr = 0x820BA37C;
	sub_820D4C58(ctx, base);
	// clrlwi r11,r27,16
	ctx.r11.u64 = ctx.r27.u32 & 0xFFFF;
	// addi r11,r11,-24
	ctx.r11.s64 = ctx.r11.s64 + -24;
	// cmplwi cr6,r11,66
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 66, ctx.xer);
	// bgt cr6,0x820baa50
	if (ctx.cr6.gt) goto loc_820BAA50;
	// lis r12,-32255
	ctx.r12.s64 = -2113863680;
	// addi r12,r12,29600
	ctx.r12.s64 = ctx.r12.s64 + 29600;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32244
	ctx.r12.s64 = -2113142784;
	// addi r12,r12,-23628
	ctx.r12.s64 = ctx.r12.s64 + -23628;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_820BA3B4;
	case 1:
		goto loc_820BA3D4;
	case 2:
		goto loc_820BA410;
	case 3:
		goto loc_820BA3E8;
	case 4:
		goto loc_820BA3FC;
	case 5:
		goto loc_820BA424;
	case 6:
		goto loc_820BA438;
	case 7:
		goto loc_820BA44C;
	case 8:
		goto loc_820BA478;
	case 9:
		goto loc_820BA4B8;
	case 10:
		goto loc_820BA4CC;
	case 11:
		goto loc_820BA52C;
	case 12:
		goto loc_820BA500;
	case 13:
		goto loc_820BA518;
	case 14:
		goto loc_820BAA50;
	case 15:
		goto loc_820BAA80;
	case 16:
		goto loc_820BA540;
	case 17:
		goto loc_820BA550;
	case 18:
		goto loc_820BAA80;
	case 19:
		goto loc_820BAA80;
	case 20:
		goto loc_820BAA80;
	case 21:
		goto loc_820BA564;
	case 22:
		goto loc_820BA580;
	case 23:
		goto loc_820BA5A0;
	case 24:
		goto loc_820BAA80;
	case 25:
		goto loc_820BA5B8;
	case 26:
		goto loc_820BAA80;
	case 27:
		goto loc_820BA5D0;
	case 28:
		goto loc_820BA5E4;
	case 29:
		goto loc_820BA5F4;
	case 30:
		goto loc_820BA60C;
	case 31:
		goto loc_820BA650;
	case 32:
		goto loc_820BA668;
	case 33:
		goto loc_820BAA80;
	case 34:
		goto loc_820BA680;
	case 35:
		goto loc_820BA6B4;
	case 36:
		goto loc_820BA6C4;
	case 37:
		goto loc_820BA6D4;
	case 38:
		goto loc_820BA6F4;
	case 39:
		goto loc_820BA708;
	case 40:
		goto loc_820BA754;
	case 41:
		goto loc_820BA790;
	case 42:
		goto loc_820BA7CC;
	case 43:
		goto loc_820BA808;
	case 44:
		goto loc_820BA81C;
	case 45:
		goto loc_820BA8B4;
	case 46:
		goto loc_820BA94C;
	case 47:
		goto loc_820BA94C;
	case 48:
		goto loc_820BA94C;
	case 49:
		goto loc_820BA94C;
	case 50:
		goto loc_820BA94C;
	case 51:
		goto loc_820BA94C;
	case 52:
		goto loc_820BA94C;
	case 53:
		goto loc_820BA94C;
	case 54:
		goto loc_820BA94C;
	case 55:
		goto loc_820BA94C;
	case 56:
		goto loc_820BA94C;
	case 57:
		goto loc_820BA94C;
	case 58:
		goto loc_820BA94C;
	case 59:
		goto loc_820BA94C;
	case 60:
		goto loc_820BA94C;
	case 61:
		goto loc_820BA95C;
	case 62:
		goto loc_820BA9C8;
	case 63:
		goto loc_820BA94C;
	case 64:
		goto loc_820BA94C;
	case 65:
		goto loc_820BA94C;
	case 66:
		goto loc_820BAA00;
	default:
		__builtin_unreachable();
	}
loc_820BA3B4:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820b8c20
	ctx.lr = 0x820BA3C4;
	sub_820B8C20(ctx, base);
loc_820BA3C4:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820817b0
	ctx.lr = 0x820BA3D0;
	sub_820817B0(ctx, base);
	// b 0x820baa80
	goto loc_820BAA80;
loc_820BA3D4:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820b7b08
	ctx.lr = 0x820BA3E4;
	sub_820B7B08(ctx, base);
	// b 0x820baa80
	goto loc_820BAA80;
loc_820BA3E8:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820b7120
	ctx.lr = 0x820BA3F8;
	sub_820B7120(ctx, base);
	// b 0x820ba3c4
	goto loc_820BA3C4;
loc_820BA3FC:
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
loc_820BA408:
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// b 0x820baa80
	goto loc_820BAA80;
loc_820BA410:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820b8878
	ctx.lr = 0x820BA420;
	sub_820B8878(ctx, base);
	// b 0x820baa80
	goto loc_820BAA80;
loc_820BA424:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820b70a0
	ctx.lr = 0x820BA434;
	sub_820B70A0(ctx, base);
	// b 0x820baa80
	goto loc_820BAA80;
loc_820BA438:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820b6ff8
	ctx.lr = 0x820BA448;
	sub_820B6FF8(ctx, base);
	// b 0x820baa80
	goto loc_820BAA80;
loc_820BA44C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BA468;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r3,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r3.u8);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x820baa80
	goto loc_820BAA80;
loc_820BA478:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x820baa80
	if (ctx.cr6.eq) goto loc_820BAA80;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820baa80
	if (ctx.cr0.eq) goto loc_820BAA80;
	// bl 0x820b3040
	ctx.lr = 0x820BA4A8;
	sub_820B3040(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820b8a08
	ctx.lr = 0x820BA4B4;
	sub_820B8A08(ctx, base);
	// b 0x820baa80
	goto loc_820BAA80;
loc_820BA4B8:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820b6818
	ctx.lr = 0x820BA4C8;
	sub_820B6818(ctx, base);
	// b 0x820baa80
	goto loc_820BAA80;
loc_820BA4CC:
	// lhz r11,134(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 134);
	// lhz r10,136(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 136);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x820baa80
	if (ctx.cr6.gt) goto loc_820BAA80;
loc_820BA4E8:
	// lbz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 128);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stb r11,128(r30)
	PPC_STORE_U8(ctx.r30.u32 + 128, ctx.r11.u8);
	// bl 0x820b98c0
	ctx.lr = 0x820BA4FC;
	sub_820B98C0(ctx, base);
	// b 0x820baa80
	goto loc_820BAA80;
loc_820BA500:
	// lhz r11,134(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 134);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// clrlwi. r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x820baa80
	if (ctx.cr0.eq) goto loc_820BAA80;
	// b 0x820ba4e8
	goto loc_820BA4E8;
loc_820BA518:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820b7bd0
	ctx.lr = 0x820BA528;
	sub_820B7BD0(ctx, base);
	// b 0x820baa80
	goto loc_820BAA80;
loc_820BA52C:
	// lbz r10,128(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 128);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwimi r10,r11,1,30,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 1) & 0xFFFFFFFFFFFFFF03) | (ctx.r10.u64 & 0xFC);
	// stb r10,128(r30)
	PPC_STORE_U8(ctx.r30.u32 + 128, ctx.r10.u8);
	// b 0x820baa80
	goto loc_820BAA80;
loc_820BA540:
	// lbz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 128);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
loc_820BA548:
	// stb r11,128(r30)
	PPC_STORE_U8(ctx.r30.u32 + 128, ctx.r11.u8);
	// b 0x820baa80
	goto loc_820BAA80;
loc_820BA550:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820b6cc8
	ctx.lr = 0x820BA560;
	sub_820B6CC8(ctx, base);
	// b 0x820baa80
	goto loc_820BAA80;
loc_820BA564:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x820be810
	ctx.lr = 0x820BA56C;
	sub_820BE810(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x820baa80
	goto loc_820BAA80;
loc_820BA580:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r3,8536(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8536);
	// addi r4,r11,30520
	ctx.r4.s64 = ctx.r11.s64 + 30520;
loc_820BA58C:
	// bl 0x820dae28
	ctx.lr = 0x820BA590;
	sub_820DAE28(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// sth r3,4(r29)
	PPC_STORE_U16(ctx.r29.u32 + 4, ctx.r3.u16);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x820baa80
	goto loc_820BAA80;
loc_820BA5A0:
	// lwz r3,144(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// bl 0x820da5b0
	ctx.lr = 0x820BA5A8;
	sub_820DA5B0(ctx, base);
	// lwz r11,8536(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8536);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x820ba58c
	goto loc_820BA58C;
loc_820BA5B8:
	// lbz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 128);
	// li r10,2
	ctx.r10.s64 = 2;
	// rlwinm r11,r11,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// stb r11,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r11.u8);
	// b 0x820baa80
	goto loc_820BAA80;
loc_820BA5D0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x820b2dc8
	ctx.lr = 0x820BA5D8;
	sub_820B2DC8(ctx, base);
	// lbz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 128);
	// rlwimi r11,r3,7,17,24
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 7) & 0x7F80) | (ctx.r11.u64 & 0xFFFFFFFFFFFF807F);
	// b 0x820ba548
	goto loc_820BA548;
loc_820BA5E4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x820b2fb8
	ctx.lr = 0x820BA5EC;
	sub_820B2FB8(ctx, base);
	// stb r3,107(r24)
	PPC_STORE_U8(ctx.r24.u32 + 107, ctx.r3.u8);
	// b 0x820baa80
	goto loc_820BAA80;
loc_820BA5F4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x820b2fb8
	ctx.lr = 0x820BA5FC;
	sub_820B2FB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x820be7f8
	ctx.lr = 0x820BA608;
	sub_820BE7F8(ctx, base);
	// b 0x820baa80
	goto loc_820BAA80;
loc_820BA60C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x820ba620
	if (!ctx.cr6.eq) goto loc_820BA620;
	// bl 0x820b2dc8
	ctx.lr = 0x820BA61C;
	sub_820B2DC8(ctx, base);
	// b 0x820baa80
	goto loc_820BAA80;
loc_820BA620:
	// bl 0x820b2dc8
	ctx.lr = 0x820BA624;
	sub_820B2DC8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x820b2e60
	ctx.lr = 0x820BA62C;
	sub_820B2E60(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x820b2e60
	ctx.lr = 0x820BA634;
	sub_820B2E60(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x820b2e60
	ctx.lr = 0x820BA63C;
	sub_820B2E60(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x820b2e60
	ctx.lr = 0x820BA644;
	sub_820B2E60(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x820b2fb8
	ctx.lr = 0x820BA64C;
	sub_820B2FB8(ctx, base);
	// b 0x820baa80
	goto loc_820BAA80;
loc_820BA650:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x820b2dc8
	ctx.lr = 0x820BA658;
	sub_820B2DC8(ctx, base);
	// lbz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 128);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// rlwimi r11,r10,6,25,25
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 6) & 0x40) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFBF);
	// b 0x820ba548
	goto loc_820BA548;
loc_820BA668:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820b86a8
	ctx.lr = 0x820BA67C;
	sub_820B86A8(ctx, base);
	// b 0x820baa80
	goto loc_820BAA80;
loc_820BA680:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lwz r3,9780(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9780);
	// bl 0x820c4330
	ctx.lr = 0x820BA68C;
	sub_820C4330(ctx, base);
loc_820BA68C:
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,9512(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9512);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// b 0x820ba408
	goto loc_820BA408;
loc_820BA6B4:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lwz r3,9780(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9780);
	// bl 0x820c43c0
	ctx.lr = 0x820BA6C0;
	sub_820C43C0(ctx, base);
	// b 0x820ba68c
	goto loc_820BA68C;
loc_820BA6C4:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lwz r3,9780(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9780);
	// bl 0x820c4358
	ctx.lr = 0x820BA6D0;
	sub_820C4358(ctx, base);
	// b 0x820ba68c
	goto loc_820BA68C;
loc_820BA6D4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x820b2dc8
	ctx.lr = 0x820BA6DC;
	sub_820B2DC8(ctx, base);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,9780(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9780);
	// bl 0x820c41a0
	ctx.lr = 0x820BA6F0;
	sub_820C41A0(ctx, base);
	// b 0x820baa80
	goto loc_820BAA80;
loc_820BA6F4:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820b7350
	ctx.lr = 0x820BA704;
	sub_820B7350(ctx, base);
	// b 0x820baa80
	goto loc_820BAA80;
loc_820BA708:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x820b2fb8
	ctx.lr = 0x820BA710;
	sub_820B2FB8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r29,8536(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8536);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x820b3040
	ctx.lr = 0x820BA720;
	sub_820B3040(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820dab58
	ctx.lr = 0x820BA72C;
	sub_820DAB58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8208cdc0
	ctx.lr = 0x820BA738;
	sub_8208CDC0(ctx, base);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,9780(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9780);
	// bl 0x820c4658
	ctx.lr = 0x820BA750;
	sub_820C4658(ctx, base);
	// b 0x820baa80
	goto loc_820BAA80;
loc_820BA754:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x820b2fb8
	ctx.lr = 0x820BA75C;
	sub_820B2FB8(ctx, base);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lwz r4,9780(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9780);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,10640(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10640);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x820c42c8
	ctx.lr = 0x820BA78C;
	sub_820C42C8(ctx, base);
	// b 0x820baa80
	goto loc_820BAA80;
loc_820BA790:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x820b2fb8
	ctx.lr = 0x820BA798;
	sub_820B2FB8(ctx, base);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lwz r4,9780(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9780);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,10640(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10640);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x820c4360
	ctx.lr = 0x820BA7C8;
	sub_820C4360(ctx, base);
	// b 0x820baa80
	goto loc_820BAA80;
loc_820BA7CC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x820b2fb8
	ctx.lr = 0x820BA7D4;
	sub_820B2FB8(ctx, base);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lwz r4,9780(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9780);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,10640(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10640);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x820c4338
	ctx.lr = 0x820BA804;
	sub_820C4338(ctx, base);
	// b 0x820baa80
	goto loc_820BAA80;
loc_820BA808:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,9780(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9780);
	// bl 0x820c4108
	ctx.lr = 0x820BA818;
	sub_820C4108(ctx, base);
	// b 0x820baa80
	goto loc_820BAA80;
loc_820BA81C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x820b2fb8
	ctx.lr = 0x820BA824;
	sub_820B2FB8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x820b2fb8
	ctx.lr = 0x820BA830;
	sub_820B2FB8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x820b2e60
	ctx.lr = 0x820BA83C;
	sub_820B2E60(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x820b2e60
	ctx.lr = 0x820BA848;
	sub_820B2E60(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x820b2fb8
	ctx.lr = 0x820BA854;
	sub_820B2FB8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x820b2f28
	ctx.lr = 0x820BA860;
	sub_820B2F28(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x820b2fb8
	ctx.lr = 0x820BA86C;
	sub_820B2FB8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BA884;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820baa80
	if (ctx.cr0.eq) goto loc_820BAA80;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x820be8a0
	ctx.lr = 0x820BA8B0;
	sub_820BE8A0(ctx, base);
	// b 0x820baa80
	goto loc_820BAA80;
loc_820BA8B4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x820b2fb8
	ctx.lr = 0x820BA8BC;
	sub_820B2FB8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x820b2fb8
	ctx.lr = 0x820BA8C8;
	sub_820B2FB8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x820b2e60
	ctx.lr = 0x820BA8D4;
	sub_820B2E60(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x820b2e60
	ctx.lr = 0x820BA8E0;
	sub_820B2E60(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x820b2fb8
	ctx.lr = 0x820BA8EC;
	sub_820B2FB8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x820b2f28
	ctx.lr = 0x820BA8F8;
	sub_820B2F28(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x820b3040
	ctx.lr = 0x820BA904;
	sub_820B3040(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BA91C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820baa80
	if (ctx.cr0.eq) goto loc_820BAA80;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x820be820
	ctx.lr = 0x820BA948;
	sub_820BE820(ctx, base);
	// b 0x820baa80
	goto loc_820BAA80;
loc_820BA94C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,30480
	ctx.r3.s64 = ctx.r11.s64 + 30480;
loc_820BA954:
	// bl 0x821313e0
	ctx.lr = 0x820BA958;
	sub_821313E0(ctx, base);
	// b 0x820baa80
	goto loc_820BAA80;
loc_820BA95C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x820b2fb8
	ctx.lr = 0x820BA964;
	sub_820B2FB8(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge 0x820ba97c
	if (!ctx.cr0.lt) goto loc_820BA97C;
loc_820BA96C:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r23,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r23.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x820baa80
	goto loc_820BAA80;
loc_820BA97C:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r4,9796(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9796);
	// bl 0x820cb948
	ctx.lr = 0x820BA990;
	sub_820CB948(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820ba9b4
	if (ctx.cr0.eq) goto loc_820BA9B4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,30452
	ctx.r3.s64 = ctx.r11.s64 + 30452;
	// bl 0x821313e0
	ctx.lr = 0x820BA9B0;
	sub_821313E0(ctx, base);
	// b 0x820ba96c
	goto loc_820BA96C;
loc_820BA9B4:
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// b 0x820baa80
	goto loc_820BAA80;
loc_820BA9C8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x820b2fb8
	ctx.lr = 0x820BA9D0;
	sub_820B2FB8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x820b2f28
	ctx.lr = 0x820BA9DC;
	sub_820B2F28(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x820baa80
	if (ctx.cr6.lt) goto loc_820BAA80;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// lwz r4,9796(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9796);
	// bl 0x820cb9d8
	ctx.lr = 0x820BA9FC;
	sub_820CB9D8(ctx, base);
	// b 0x820baa80
	goto loc_820BAA80;
loc_820BAA00:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x820b2fb8
	ctx.lr = 0x820BAA08;
	sub_820B2FB8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x820baa80
	if (ctx.cr0.lt) goto loc_820BAA80;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x820b2f28
	ctx.lr = 0x820BAA18;
	sub_820B2F28(ctx, base);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// lwz r4,9796(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9796);
	// bl 0x820cb990
	ctx.lr = 0x820BAA30;
	sub_820CB990(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820baa80
	if (ctx.cr0.eq) goto loc_820BAA80;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,30420
	ctx.r3.s64 = ctx.r11.s64 + 30420;
	// b 0x820ba954
	goto loc_820BA954;
loc_820BAA50:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,21
	ctx.r3.s64 = 21;
	// bl 0x820d4c58
	ctx.lr = 0x820BAA5C;
	sub_820D4C58(ctx, base);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r3,152(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x820b1130
	ctx.lr = 0x820BAA78;
	sub_820B1130(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820d4c98
	ctx.lr = 0x820BAA80;
	sub_820D4C98(ctx, base);
loc_820BAA80:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820d4c98
	ctx.lr = 0x820BAA88;
	sub_820D4C98(ctx, base);
loc_820BAA88:
	// lwz r11,6728(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 6728);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,1618
	ctx.r11.s64 = ctx.r11.s64 + 1618;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r23,r11,r24
	PPC_STORE_U32(ctx.r11.u32 + ctx.r24.u32, ctx.r23.u32);
	// lwz r11,6728(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 6728);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,6728(r24)
	PPC_STORE_U32(ctx.r24.u32 + 6728, ctx.r11.u32);
	// bl 0x820d4c98
	ctx.lr = 0x820BAAAC;
	sub_820D4C98(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x822e9924
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BAABC"))) PPC_WEAK_FUNC(sub_820BAABC);
PPC_FUNC_IMPL(__imp__sub_820BAABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BAAC0"))) PPC_WEAK_FUNC(sub_820BAAC0);
PPC_FUNC_IMPL(__imp__sub_820BAAC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x820BAAC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// bl 0x820b62a8
	ctx.lr = 0x820BAAE0;
	sub_820B62A8(ctx, base);
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820bab10
	if (ctx.cr0.eq) goto loc_820BAB10;
	// bl 0x820b84d0
	ctx.lr = 0x820BAAF0;
	sub_820B84D0(ctx, base);
	// lwz r29,156(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq 0x820bab0c
	if (ctx.cr0.eq) goto loc_820BAB0C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820b84d0
	ctx.lr = 0x820BAB04;
	sub_820B84D0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820d4d38
	ctx.lr = 0x820BAB0C;
	sub_820D4D38(ctx, base);
loc_820BAB0C:
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
loc_820BAB10:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x820b84d0
	ctx.lr = 0x820BAB18;
	sub_820B84D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b3a60
	ctx.lr = 0x820BAB20;
	sub_820B3A60(ctx, base);
	// lbz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 128);
	// lbz r10,129(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 129);
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// ori r11,r11,130
	ctx.r11.u64 = ctx.r11.u64 | 130;
	// stb r10,129(r31)
	PPC_STORE_U8(ctx.r31.u32 + 129, ctx.r10.u8);
	// stb r11,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r11.u8);
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820bab5c
	if (ctx.cr0.eq) goto loc_820BAB5C;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// andi. r11,r11,247
	ctx.r11.u64 = ctx.r11.u64 & 247;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r11.u8);
	// bl 0x820beb38
	ctx.lr = 0x820BAB5C;
	sub_820BEB38(ctx, base);
loc_820BAB5C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// sth r30,130(r31)
	PPC_STORE_U16(ctx.r31.u32 + 130, ctx.r30.u16);
	// sth r30,132(r31)
	PPC_STORE_U16(ctx.r31.u32 + 132, ctx.r30.u16);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// sth r30,134(r31)
	PPC_STORE_U16(ctx.r31.u32 + 134, ctx.r30.u16);
	// sth r10,136(r31)
	PPC_STORE_U16(ctx.r31.u32 + 136, ctx.r10.u16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BAB8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r29,144(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq 0x820babb0
	if (ctx.cr0.eq) goto loc_820BABB0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821313e0
	ctx.lr = 0x820BABA4;
	sub_821313E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820d4d38
	ctx.lr = 0x820BABAC;
	sub_820D4D38(ctx, base);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
loc_820BABB0:
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820babc0
	if (ctx.cr0.eq) goto loc_820BABC0;
	// bl 0x820b2ae8
	ctx.lr = 0x820BABC0;
	sub_820B2AE8(ctx, base);
loc_820BABC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BABC8"))) PPC_WEAK_FUNC(sub_820BABC8);
PPC_FUNC_IMPL(__imp__sub_820BABC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x820BABD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820b0700
	ctx.lr = 0x820BABDC;
	sub_820B0700(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b3a08
	ctx.lr = 0x820BABE4;
	sub_820B3A08(ctx, base);
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x820b62a8
	ctx.lr = 0x820BABEC;
	sub_820B62A8(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x820b84d0
	ctx.lr = 0x820BABF4;
	sub_820B84D0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r30,144(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// sth r11,130(r31)
	PPC_STORE_U16(ctx.r31.u32 + 130, ctx.r11.u16);
	// sth r11,132(r31)
	PPC_STORE_U16(ctx.r31.u32 + 132, ctx.r11.u16);
	// sth r11,134(r31)
	PPC_STORE_U16(ctx.r31.u32 + 134, ctx.r11.u16);
	// sth r11,136(r31)
	PPC_STORE_U16(ctx.r31.u32 + 136, ctx.r11.u16);
	// lbz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 128);
	// stw r29,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r29.u32);
	// stw r29,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r29.u32);
	// andi. r11,r11,76
	ctx.r11.u64 = ctx.r11.u64 & 76;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// ori r11,r11,129
	ctx.r11.u64 = ctx.r11.u64 | 129;
	// stb r11,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r11.u8);
	// beq 0x820bac44
	if (ctx.cr0.eq) goto loc_820BAC44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821313e0
	ctx.lr = 0x820BAC38;
	sub_821313E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820d4d38
	ctx.lr = 0x820BAC40;
	sub_820D4D38(ctx, base);
	// stw r29,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r29.u32);
loc_820BAC44:
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820bac54
	if (ctx.cr0.eq) goto loc_820BAC54;
	// bl 0x820b2ae8
	ctx.lr = 0x820BAC54;
	sub_820B2AE8(ctx, base);
loc_820BAC54:
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820bac84
	if (ctx.cr0.eq) goto loc_820BAC84;
	// bl 0x820b84d0
	ctx.lr = 0x820BAC64;
	sub_820B84D0(ctx, base);
	// lwz r30,156(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x820bac80
	if (ctx.cr0.eq) goto loc_820BAC80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820b84d0
	ctx.lr = 0x820BAC78;
	sub_820B84D0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820d4d38
	ctx.lr = 0x820BAC80;
	sub_820D4D38(ctx, base);
loc_820BAC80:
	// stw r29,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r29.u32);
loc_820BAC84:
	// lbz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 128);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820bacbc
	if (ctx.cr0.eq) goto loc_820BACBC;
	// lbz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 128);
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// andi. r11,r11,247
	ctx.r11.u64 = ctx.r11.u64 & 247;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r11.u8);
	// bl 0x820beb38
	ctx.lr = 0x820BACA4;
	sub_820BEB38(ctx, base);
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BACB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
loc_820BACBC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BACC4"))) PPC_WEAK_FUNC(sub_820BACC4);
PPC_FUNC_IMPL(__imp__sub_820BACC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BACC8"))) PPC_WEAK_FUNC(sub_820BACC8);
PPC_FUNC_IMPL(__imp__sub_820BACC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820b9768
	ctx.lr = 0x820BACE4;
	sub_820B9768(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,30528
	ctx.r11.s64 = ctx.r11.s64 + 30528;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,84
	ctx.r3.s64 = 84;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r10,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r10.u32);
	// stb r30,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r30.u8);
	// lbz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 128);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// andi. r11,r11,247
	ctx.r11.u64 = ctx.r11.u64 & 247;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r11.u8);
	// bl 0x820d4cd8
	ctx.lr = 0x820BAD30;
	sub_820D4CD8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820bad40
	if (ctx.cr0.eq) goto loc_820BAD40;
	// bl 0x820b2488
	ctx.lr = 0x820BAD3C;
	sub_820B2488(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_820BAD40:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// bl 0x820baac0
	ctx.lr = 0x820BAD4C;
	sub_820BAAC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BAD68"))) PPC_WEAK_FUNC(sub_820BAD68);
PPC_FUNC_IMPL(__imp__sub_820BAD68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x822e9f38
	ctx.lr = 0x820BAD7C;
	__savefpr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f29,f2
	ctx.f29.f64 = ctx.f2.f64;
	// lfs f0,24944(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24944);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f3,f0
	ctx.f31.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f30,0(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f29,4(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f3,8(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822ea540
	ctx.lr = 0x820BADAC;
	sub_822EA540(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// bl 0x822ea540
	ctx.lr = 0x820BADC4;
	sub_822EA540(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// bl 0x822ea470
	ctx.lr = 0x820BADDC;
	sub_822EA470(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f28,10640(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10640);
	ctx.f28.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmuls f13,f30,f28
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f28.f64));
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f0,9516(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9516);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// bl 0x822ea470
	ctx.lr = 0x820BAE0C;
	sub_822EA470(ctx, base);
	// fmuls f0,f29,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f28.f64));
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,9496(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9496);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x822e9f84
	ctx.lr = 0x820BAE34;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BAE44"))) PPC_WEAK_FUNC(sub_820BAE44);
PPC_FUNC_IMPL(__imp__sub_820BAE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BAE48"))) PPC_WEAK_FUNC(sub_820BAE48);
PPC_FUNC_IMPL(__imp__sub_820BAE48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lfs f0,44(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BAE60"))) PPC_WEAK_FUNC(sub_820BAE60);
PPC_FUNC_IMPL(__imp__sub_820BAE60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,64(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,9524(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9524);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BAE74"))) PPC_WEAK_FUNC(sub_820BAE74);
PPC_FUNC_IMPL(__imp__sub_820BAE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BAE78"))) PPC_WEAK_FUNC(sub_820BAE78);
PPC_FUNC_IMPL(__imp__sub_820BAE78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,9516(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9516);
	ctx.f0.f64 = double(temp.f32);
	// lbz r11,82(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 82);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stb r11,82(r3)
	PPC_STORE_U8(ctx.r3.u32 + 82, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BAE98"))) PPC_WEAK_FUNC(sub_820BAE98);
PPC_FUNC_IMPL(__imp__sub_820BAE98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BAEA0"))) PPC_WEAK_FUNC(sub_820BAEA0);
PPC_FUNC_IMPL(__imp__sub_820BAEA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,68(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,9524(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9524);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BAEB4"))) PPC_WEAK_FUNC(sub_820BAEB4);
PPC_FUNC_IMPL(__imp__sub_820BAEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BAEB8"))) PPC_WEAK_FUNC(sub_820BAEB8);
PPC_FUNC_IMPL(__imp__sub_820BAEB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,9516(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9516);
	ctx.f0.f64 = double(temp.f32);
	// lbz r11,82(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 82);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stb r11,82(r3)
	PPC_STORE_U8(ctx.r3.u32 + 82, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BAED8"))) PPC_WEAK_FUNC(sub_820BAED8);
PPC_FUNC_IMPL(__imp__sub_820BAED8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BAEE0"))) PPC_WEAK_FUNC(sub_820BAEE0);
PPC_FUNC_IMPL(__imp__sub_820BAEE0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,138(r3)
	PPC_STORE_U16(ctx.r3.u32 + 138, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BAEEC"))) PPC_WEAK_FUNC(sub_820BAEEC);
PPC_FUNC_IMPL(__imp__sub_820BAEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BAEF0"))) PPC_WEAK_FUNC(sub_820BAEF0);
PPC_FUNC_IMPL(__imp__sub_820BAEF0) {
	PPC_FUNC_PROLOGUE();
	// lhz r3,138(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 138);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BAEF8"))) PPC_WEAK_FUNC(sub_820BAEF8);
PPC_FUNC_IMPL(__imp__sub_820BAEF8) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,138(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 138);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BAF10"))) PPC_WEAK_FUNC(sub_820BAF10);
PPC_FUNC_IMPL(__imp__sub_820BAF10) {
	PPC_FUNC_PROLOGUE();
	// sth r4,138(r3)
	PPC_STORE_U16(ctx.r3.u32 + 138, ctx.r4.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BAF18"))) PPC_WEAK_FUNC(sub_820BAF18);
PPC_FUNC_IMPL(__imp__sub_820BAF18) {
	PPC_FUNC_PROLOGUE();
	// lhz r3,134(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 134);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BAF2C"))) PPC_WEAK_FUNC(sub_820BAF2C);
PPC_FUNC_IMPL(__imp__sub_820BAF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BAF30"))) PPC_WEAK_FUNC(sub_820BAF30);
PPC_FUNC_IMPL(__imp__sub_820BAF30) {
	PPC_FUNC_PROLOGUE();
	// lhz r3,136(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 136);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BAF38"))) PPC_WEAK_FUNC(sub_820BAF38);
PPC_FUNC_IMPL(__imp__sub_820BAF38) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 128);
	// rlwinm r3,r11,31,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BAF44"))) PPC_WEAK_FUNC(sub_820BAF44);
PPC_FUNC_IMPL(__imp__sub_820BAF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BAF48"))) PPC_WEAK_FUNC(sub_820BAF48);
PPC_FUNC_IMPL(__imp__sub_820BAF48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820b3a08
	ctx.lr = 0x820BAF60;
	sub_820B3A08(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BAF74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 128);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stb r11,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BAF94"))) PPC_WEAK_FUNC(sub_820BAF94);
PPC_FUNC_IMPL(__imp__sub_820BAF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BAF98"))) PPC_WEAK_FUNC(sub_820BAF98);
PPC_FUNC_IMPL(__imp__sub_820BAF98) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,124(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BAFA0"))) PPC_WEAK_FUNC(sub_820BAFA0);
PPC_FUNC_IMPL(__imp__sub_820BAFA0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1024
	ctx.r3.s64 = 1024;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BAFA8"))) PPC_WEAK_FUNC(sub_820BAFA8);
PPC_FUNC_IMPL(__imp__sub_820BAFA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,148(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BAFB0"))) PPC_WEAK_FUNC(sub_820BAFB0);
PPC_FUNC_IMPL(__imp__sub_820BAFB0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,92
	ctx.r3.s64 = ctx.r3.s64 + 92;
	// b 0x820ad980
	sub_820AD980(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BAFB8"))) PPC_WEAK_FUNC(sub_820BAFB8);
PPC_FUNC_IMPL(__imp__sub_820BAFB8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,129(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 129);
	// rlwimi r11,r4,7,17,24
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 7) & 0x7F80) | (ctx.r11.u64 & 0xFFFFFFFFFFFF807F);
	// stb r11,129(r3)
	PPC_STORE_U8(ctx.r3.u32 + 129, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BAFC8"))) PPC_WEAK_FUNC(sub_820BAFC8);
PPC_FUNC_IMPL(__imp__sub_820BAFC8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BAFD0"))) PPC_WEAK_FUNC(sub_820BAFD0);
PPC_FUNC_IMPL(__imp__sub_820BAFD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,140(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BAFD8"))) PPC_WEAK_FUNC(sub_820BAFD8);
PPC_FUNC_IMPL(__imp__sub_820BAFD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820b6998
	ctx.lr = 0x820BAFF8;
	sub_820B6998(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820b5a08
	ctx.lr = 0x820BB008;
	sub_820B5A08(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BB02C"))) PPC_WEAK_FUNC(sub_820BB02C);
PPC_FUNC_IMPL(__imp__sub_820BB02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BB030"))) PPC_WEAK_FUNC(sub_820BB030);
PPC_FUNC_IMPL(__imp__sub_820BB030) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820c74f0
	ctx.lr = 0x820BB04C;
	sub_820C74F0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x820b5d58
	ctx.lr = 0x820BB054;
	sub_820B5D58(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b6af8
	ctx.lr = 0x820BB064;
	sub_820B6AF8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x820db1b8
	ctx.lr = 0x820BB070;
	sub_820DB1B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820db1b8
	ctx.lr = 0x820BB080;
	sub_820DB1B8(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BB0A0"))) PPC_WEAK_FUNC(sub_820BB0A0);
PPC_FUNC_IMPL(__imp__sub_820BB0A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,9512(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9512);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// ori r11,r11,36000
	ctx.r11.u64 = ctx.r11.u64 | 36000;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// divw r9,r10,r11
	ctx.r9.s32 = ctx.r10.s32 / ctx.r11.s32;
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cmpwi cr6,r10,18000
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 18000, ctx.xer);
	// ble cr6,0x820bb0f4
	if (!ctx.cr6.gt) goto loc_820BB0F4;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// b 0x820bb100
	goto loc_820BB100;
loc_820BB0F4:
	// cmpwi cr6,r10,-18000
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -18000, ctx.xer);
	// bge cr6,0x820bb100
	if (!ctx.cr6.lt) goto loc_820BB100;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_820BB100:
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f2,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,10640(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10640);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f3,f13,f0
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x820bad68
	ctx.lr = 0x820BB130;
	sub_820BAD68(ctx, base);
	// lbz r11,82(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 82);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stb r11,82(r31)
	PPC_STORE_U8(ctx.r31.u32 + 82, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BB150"))) PPC_WEAK_FUNC(sub_820BB150);
PPC_FUNC_IMPL(__imp__sub_820BB150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820c74f0
	ctx.lr = 0x820BB16C;
	sub_820C74F0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x820b5d58
	ctx.lr = 0x820BB174;
	sub_820B5D58(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b6af8
	ctx.lr = 0x820BB184;
	sub_820B6AF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x820db1b8
	ctx.lr = 0x820BB190;
	sub_820DB1B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820db1b8
	ctx.lr = 0x820BB1A0;
	sub_820DB1B8(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BB1C0"))) PPC_WEAK_FUNC(sub_820BB1C0);
PPC_FUNC_IMPL(__imp__sub_820BB1C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// lfs f3,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x820bad68
	ctx.lr = 0x820BB1E4;
	sub_820BAD68(ctx, base);
	// lbz r11,82(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 82);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stb r11,82(r31)
	PPC_STORE_U8(ctx.r31.u32 + 82, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BB204"))) PPC_WEAK_FUNC(sub_820BB204);
PPC_FUNC_IMPL(__imp__sub_820BB204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BB208"))) PPC_WEAK_FUNC(sub_820BB208);
PPC_FUNC_IMPL(__imp__sub_820BB208) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// lfs f3,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820bad68
	ctx.lr = 0x820BB230;
	sub_820BAD68(ctx, base);
	// lbz r11,82(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 82);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stb r11,82(r31)
	PPC_STORE_U8(ctx.r31.u32 + 82, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BB250"))) PPC_WEAK_FUNC(sub_820BB250);
PPC_FUNC_IMPL(__imp__sub_820BB250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,30528
	ctx.r11.s64 = ctx.r11.s64 + 30528;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x820baac0
	ctx.lr = 0x820BB278;
	sub_820BAAC0(ctx, base);
	// lwz r30,152(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x820bb29c
	if (ctx.cr0.eq) goto loc_820BB29C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820b2bb8
	ctx.lr = 0x820BB28C;
	sub_820B2BB8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820d4d38
	ctx.lr = 0x820BB294;
	sub_820D4D38(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
loc_820BB29C:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x820b84d0
	ctx.lr = 0x820BB2A4;
	sub_820B84D0(ctx, base);
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x820b62a8
	ctx.lr = 0x820BB2AC;
	sub_820B62A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b9818
	ctx.lr = 0x820BB2B4;
	sub_820B9818(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BB2CC"))) PPC_WEAK_FUNC(sub_820BB2CC);
PPC_FUNC_IMPL(__imp__sub_820BB2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BB2D0"))) PPC_WEAK_FUNC(sub_820BB2D0);
PPC_FUNC_IMPL(__imp__sub_820BB2D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820bb334
	if (ctx.cr0.eq) goto loc_820BB334;
	// lis r12,7
	ctx.r12.s64 = 458752;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r12,r12,50881
	ctx.r12.u64 = ctx.r12.u64 | 50881;
	// and. r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820bb334
	if (ctx.cr0.eq) goto loc_820BB334;
	// lbz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820bb334
	if (ctx.cr0.eq) goto loc_820BB334;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x820bb328
	if (!ctx.cr6.eq) goto loc_820BB328;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BB328;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820BB328:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8209e2d8
	ctx.lr = 0x820BB334;
	sub_8209E2D8(ctx, base);
loc_820BB334:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BB348"))) PPC_WEAK_FUNC(sub_820BB348);
PPC_FUNC_IMPL(__imp__sub_820BB348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x820bb2d0
	ctx.lr = 0x820BB368;
	sub_820BB2D0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x820bb400
	if (ctx.cr6.eq) goto loc_820BB400;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bgt cr6,0x820bb424
	if (ctx.cr6.gt) goto loc_820BB424;
	// beq cr6,0x820bb40c
	if (ctx.cr6.eq) goto loc_820BB40C;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x820bb400
	if (ctx.cr6.eq) goto loc_820BB400;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x820bb45c
	if (ctx.cr6.eq) goto loc_820BB45C;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x820bb3e8
	if (ctx.cr6.eq) goto loc_820BB3E8;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x820bb3d0
	if (ctx.cr6.eq) goto loc_820BB3D0;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x820bb40c
	if (ctx.cr6.eq) goto loc_820BB40C;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x820bb44c
	if (!ctx.cr6.eq) goto loc_820BB44C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x820b2e60
	ctx.lr = 0x820BB3C8;
	sub_820B2E60(ctx, base);
	// stfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// b 0x820bb478
	goto loc_820BB478;
loc_820BB3D0:
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x820b2fb8
	ctx.lr = 0x820BB3E0;
	sub_820B2FB8(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// b 0x820bb478
	goto loc_820BB478;
loc_820BB3E8:
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x820b2dc8
	ctx.lr = 0x820BB3F8;
	sub_820B2DC8(ctx, base);
	// stb r3,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r3.u8);
	// b 0x820bb478
	goto loc_820BB478;
loc_820BB400:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x820bb478
	goto loc_820BB478;
loc_820BB40C:
	// li r11,8
	ctx.r11.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x820b3040
	ctx.lr = 0x820BB41C;
	sub_820B3040(ctx, base);
	// sth r3,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r3.u16);
	// b 0x820bb478
	goto loc_820BB478;
loc_820BB424:
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// beq cr6,0x820bb45c
	if (ctx.cr6.eq) goto loc_820BB45C;
	// cmpwi cr6,r11,512
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 512, ctx.xer);
	// beq cr6,0x820bb45c
	if (ctx.cr6.eq) goto loc_820BB45C;
	// cmpwi cr6,r11,1024
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1024, ctx.xer);
	// beq cr6,0x820bb45c
	if (ctx.cr6.eq) goto loc_820BB45C;
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// beq cr6,0x820bb45c
	if (ctx.cr6.eq) goto loc_820BB45C;
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// beq cr6,0x820bb45c
	if (ctx.cr6.eq) goto loc_820BB45C;
loc_820BB44C:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x820bb47c
	goto loc_820BB47C;
loc_820BB45C:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x820b2f78
	ctx.lr = 0x820BB46C;
	sub_820B2F78(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// bl 0x8209e2d8
	ctx.lr = 0x820BB478;
	sub_8209E2D8(ctx, base);
loc_820BB478:
	// li r3,1
	ctx.r3.s64 = 1;
loc_820BB47C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BB494"))) PPC_WEAK_FUNC(sub_820BB494);
PPC_FUNC_IMPL(__imp__sub_820BB494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BB498"))) PPC_WEAK_FUNC(sub_820BB498);
PPC_FUNC_IMPL(__imp__sub_820BB498) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// clrlwi r7,r4,16
	ctx.r7.u64 = ctx.r4.u32 & 0xFFFF;
	// li r10,0
	ctx.r10.s64 = 0;
loc_820BB4B8:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lhz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x820bb4dc
	if (!ctx.cr6.eq) goto loc_820BB4DC;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
loc_820BB4DC:
	// clrlwi. r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x820bb4fc
	if (ctx.cr0.eq) goto loc_820BB4FC;
	// lhz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 8);
	// sth r8,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r8.u16);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
loc_820BB4FC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x820bb4b8
	if (ctx.cr6.lt) goto loc_820BB4B8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BB514"))) PPC_WEAK_FUNC(sub_820BB514);
PPC_FUNC_IMPL(__imp__sub_820BB514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BB518"))) PPC_WEAK_FUNC(sub_820BB518);
PPC_FUNC_IMPL(__imp__sub_820BB518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x820b0620
	ctx.lr = 0x820BB52C;
	sub_820B0620(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BB548"))) PPC_WEAK_FUNC(sub_820BB548);
PPC_FUNC_IMPL(__imp__sub_820BB548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x820b0620
	ctx.lr = 0x820BB55C;
	sub_820B0620(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820bb56c
	if (ctx.cr0.eq) goto loc_820BB56C;
	// lhz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// b 0x820bb570
	goto loc_820BB570;
loc_820BB56C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820BB570:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BB580"))) PPC_WEAK_FUNC(sub_820BB580);
PPC_FUNC_IMPL(__imp__sub_820BB580) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x820b0620
	ctx.lr = 0x820BB59C;
	sub_820B0620(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820bb650
	if (ctx.cr0.eq) goto loc_820BB650;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x820bb638
	if (ctx.cr6.eq) goto loc_820BB638;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x820bb628
	if (ctx.cr6.eq) goto loc_820BB628;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x820bb614
	if (ctx.cr6.eq) goto loc_820BB614;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// beq cr6,0x820bb600
	if (ctx.cr6.eq) goto loc_820BB600;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// beq cr6,0x820bb5ec
	if (ctx.cr6.eq) goto loc_820BB5EC;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// bne cr6,0x820bb648
	if (!ctx.cr6.eq) goto loc_820BB648;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r11,16
	ctx.r11.s64 = 16;
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// b 0x820bb644
	goto loc_820BB644;
loc_820BB5EC:
	// lhz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// sth r11,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r11.u16);
	// b 0x820bb648
	goto loc_820BB648;
loc_820BB600:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x820bb648
	goto loc_820BB648;
loc_820BB614:
	// lbz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// b 0x820bb648
	goto loc_820BB648;
loc_820BB628:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x820817b0
	ctx.lr = 0x820BB634;
	sub_820817B0(ctx, base);
	// b 0x820bb648
	goto loc_820BB648;
loc_820BB638:
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_820BB644:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_820BB648:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x820bb654
	goto loc_820BB654;
loc_820BB650:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820BB654:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BB668"))) PPC_WEAK_FUNC(sub_820BB668);
PPC_FUNC_IMPL(__imp__sub_820BB668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x820BB670;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r28,r31,4
	ctx.r28.s64 = ctx.r31.s64 + 4;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820b0620
	ctx.lr = 0x820BB68C;
	sub_820B0620(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x820bb6a4
	if (ctx.cr0.eq) goto loc_820BB6A4;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820bb348
	ctx.lr = 0x820BB6A0;
	sub_820BB348(ctx, base);
	// b 0x820bb6f0
	goto loc_820BB6F0;
loc_820BB6A4:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x820d4cd8
	ctx.lr = 0x820BB6AC;
	sub_820D4CD8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820bb6cc
	if (ctx.cr0.eq) goto loc_820BB6CC;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// b 0x820bb6d0
	goto loc_820BB6D0;
loc_820BB6CC:
	// li r30,0
	ctx.r30.s64 = 0;
loc_820BB6D0:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820bb348
	ctx.lr = 0x820BB6E0;
	sub_820BB348(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820beca0
	ctx.lr = 0x820BB6F0;
	sub_820BECA0(ctx, base);
loc_820BB6F0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BB6F8"))) PPC_WEAK_FUNC(sub_820BB6F8);
PPC_FUNC_IMPL(__imp__sub_820BB6F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x820BB700;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820b0620
	ctx.lr = 0x820BB714;
	sub_820B0620(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x820bb724
	if (!ctx.cr0.eq) goto loc_820BB724;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820bb770
	goto loc_820BB770;
loc_820BB724:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820bb498
	ctx.lr = 0x820BB730;
	sub_820BB498(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820bb764
	if (ctx.cr0.eq) goto loc_820BB764;
	// lbz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x820bb758
	if (!ctx.cr6.eq) goto loc_820BB758;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BB758;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820BB758:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8209e2d8
	ctx.lr = 0x820BB764;
	sub_8209E2D8(ctx, base);
loc_820BB764:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820d4d38
	ctx.lr = 0x820BB76C;
	sub_820D4D38(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_820BB770:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BB778"))) PPC_WEAK_FUNC(sub_820BB778);
PPC_FUNC_IMPL(__imp__sub_820BB778) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820b3880
	ctx.lr = 0x820BB790;
	sub_820B3880(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,9580(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9580);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stb r11,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r11.u8);
	// sth r11,90(r31)
	PPC_STORE_U16(ctx.r31.u32 + 90, ctx.r11.u16);
	// stb r11,132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 132, ctx.r11.u8);
	// lfs f13,9472(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9472);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,96(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BB7CC"))) PPC_WEAK_FUNC(sub_820BB7CC);
PPC_FUNC_IMPL(__imp__sub_820BB7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BB7D0"))) PPC_WEAK_FUNC(sub_820BB7D0);
PPC_FUNC_IMPL(__imp__sub_820BB7D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x820BB7D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x820b3a60
	ctx.lr = 0x820BB7E4;
	sub_820B3A60(ctx, base);
	// lbz r11,132(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 132);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820bb830
	if (ctx.cr0.eq) goto loc_820BB830;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820bb828
	if (!ctx.cr6.gt) goto loc_820BB828;
	// addi r31,r29,100
	ctx.r31.s64 = ctx.r29.s64 + 100;
	// lis r28,-32205
	ctx.r28.s64 = -2110586880;
loc_820BB804:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,9780(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 9780);
	// lhz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// bl 0x820c5148
	ctx.lr = 0x820BB814;
	sub_820C5148(ctx, base);
	// lbz r11,132(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 132);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820bb804
	if (ctx.cr6.lt) goto loc_820BB804;
loc_820BB828:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,132(r29)
	PPC_STORE_U8(ctx.r29.u32 + 132, ctx.r11.u8);
loc_820BB830:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BB838"))) PPC_WEAK_FUNC(sub_820BB838);
PPC_FUNC_IMPL(__imp__sub_820BB838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,5461
	ctx.r11.s64 = 357892096;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// ori r11,r11,21845
	ctx.r11.u64 = ctx.r11.u64 | 21845;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// mulli r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 * 12;
	// ble cr6,0x820bb870
	if (!ctx.cr6.gt) goto loc_820BB870;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820BB870:
	// li r10,-5
	ctx.r10.s64 = -5;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x820bb880
	if (ctx.cr6.gt) goto loc_820BB880;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_820BB880:
	// bl 0x820d4cd8
	ctx.lr = 0x820BB884;
	sub_820D4CD8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r8,0
	ctx.r8.s64 = 0;
	// beq 0x820bb8c0
	if (ctx.cr0.eq) goto loc_820BB8C0;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// addic. r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x820bb8b8
	if (ctx.cr0.lt) goto loc_820BB8B8;
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
loc_820BB8A4:
	// stw r8,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r8.u32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// bge 0x820bb8a4
	if (!ctx.cr0.lt) goto loc_820BB8A4;
loc_820BB8B8:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x820bb8c4
	goto loc_820BB8C4;
loc_820BB8C0:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_820BB8C4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// beq cr6,0x820bb908
	if (ctx.cr6.eq) goto loc_820BB908;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_820BB8D8:
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// li r7,1
	ctx.r7.s64 = 1;
	// lis r6,-32768
	ctx.r6.s64 = -2147483648;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r7,8(r9)
	PPC_STORE_U8(ctx.r9.u32 + 8, ctx.r7.u8);
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// bne 0x820bb8d8
	if (!ctx.cr0.eq) goto loc_820BB8D8;
loc_820BB908:
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// sth r11,32(r30)
	PPC_STORE_U16(ctx.r30.u32 + 32, ctx.r11.u16);
	// sth r11,34(r30)
	PPC_STORE_U16(ctx.r30.u32 + 34, ctx.r11.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BB92C"))) PPC_WEAK_FUNC(sub_820BB92C);
PPC_FUNC_IMPL(__imp__sub_820BB92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BB930"))) PPC_WEAK_FUNC(sub_820BB930);
PPC_FUNC_IMPL(__imp__sub_820BB930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x820BB938;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,12
	ctx.r29.s64 = 12;
	// addi r31,r30,48
	ctx.r31.s64 = ctx.r30.s64 + 48;
	// li r28,0
	ctx.r28.s64 = 0;
loc_820BB94C:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x820bb96c
	if (ctx.cr0.eq) goto loc_820BB96C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820bb2d0
	ctx.lr = 0x820BB960;
	sub_820BB2D0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x820d4d38
	ctx.lr = 0x820BB968;
	sub_820D4D38(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_820BB96C:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x820bb94c
	if (!ctx.cr0.eq) goto loc_820BB94C;
	// sth r28,32(r30)
	PPC_STORE_U16(ctx.r30.u32 + 32, ctx.r28.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BB984"))) PPC_WEAK_FUNC(sub_820BB984);
PPC_FUNC_IMPL(__imp__sub_820BB984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BB988"))) PPC_WEAK_FUNC(sub_820BB988);
PPC_FUNC_IMPL(__imp__sub_820BB988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x820BB990;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm. r11,r28,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820bb9e8
	if (ctx.cr0.eq) goto loc_820BB9E8;
	// addi r29,r30,-4
	ctx.r29.s64 = ctx.r30.s64 + -4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mulli r10,r11,160
	ctx.r10.s64 = ctx.r11.s64 * 160;
	// addic. r31,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r31.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// blt 0x820bb9d0
	if (ctx.cr0.lt) goto loc_820BB9D0;
loc_820BB9BC:
	// addi r30,r30,-160
	ctx.r30.s64 = ctx.r30.s64 + -160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820bb250
	ctx.lr = 0x820BB9C8;
	sub_820BB250(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x820bb9bc
	if (!ctx.cr0.lt) goto loc_820BB9BC;
loc_820BB9D0:
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820bb9e0
	if (ctx.cr0.eq) goto loc_820BB9E0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820d4d38
	ctx.lr = 0x820BB9E0;
	sub_820D4D38(ctx, base);
loc_820BB9E0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x820bba04
	goto loc_820BBA04;
loc_820BB9E8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820bb250
	ctx.lr = 0x820BB9F0;
	sub_820BB250(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820bba00
	if (ctx.cr0.eq) goto loc_820BBA00;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820d4d38
	ctx.lr = 0x820BBA00;
	sub_820D4D38(ctx, base);
loc_820BBA00:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_820BBA04:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BBA0C"))) PPC_WEAK_FUNC(sub_820BBA0C);
PPC_FUNC_IMPL(__imp__sub_820BBA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BBA10"))) PPC_WEAK_FUNC(sub_820BBA10);
PPC_FUNC_IMPL(__imp__sub_820BBA10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x820BBA18;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm. r11,r28,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820bba70
	if (ctx.cr0.eq) goto loc_820BBA70;
	// addi r29,r30,-4
	ctx.r29.s64 = ctx.r30.s64 + -4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mulli r10,r11,144
	ctx.r10.s64 = ctx.r11.s64 * 144;
	// addic. r31,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r31.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// blt 0x820bba58
	if (ctx.cr0.lt) goto loc_820BBA58;
loc_820BBA44:
	// addi r30,r30,-144
	ctx.r30.s64 = ctx.r30.s64 + -144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820c2d08
	ctx.lr = 0x820BBA50;
	sub_820C2D08(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x820bba44
	if (!ctx.cr0.lt) goto loc_820BBA44;
loc_820BBA58:
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820bba68
	if (ctx.cr0.eq) goto loc_820BBA68;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820d4d38
	ctx.lr = 0x820BBA68;
	sub_820D4D38(ctx, base);
loc_820BBA68:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x820bba8c
	goto loc_820BBA8C;
loc_820BBA70:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820c2d08
	ctx.lr = 0x820BBA78;
	sub_820C2D08(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820bba88
	if (ctx.cr0.eq) goto loc_820BBA88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820d4d38
	ctx.lr = 0x820BBA88;
	sub_820D4D38(ctx, base);
loc_820BBA88:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_820BBA8C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BBA94"))) PPC_WEAK_FUNC(sub_820BBA94);
PPC_FUNC_IMPL(__imp__sub_820BBA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BBA98"))) PPC_WEAK_FUNC(sub_820BBA98);
PPC_FUNC_IMPL(__imp__sub_820BBA98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r9,r11,62316
	ctx.r9.u64 = ctx.r11.u64 | 62316;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,30796
	ctx.r10.s64 = ctx.r11.s64 + 30796;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq 0x820bbafc
	if (ctx.cr0.eq) goto loc_820BBAFC;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820bbaf8
	if (ctx.cr6.eq) goto loc_820BBAF8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BBAF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820bbafc
	goto loc_820BBAFC;
loc_820BBAF8:
	// bl 0x820d4d38
	ctx.lr = 0x820BBAFC;
	sub_820D4D38(ctx, base);
loc_820BBAFC:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,62320
	ctx.r11.u64 = ctx.r11.u64 | 62320;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820bbb40
	if (ctx.cr0.eq) goto loc_820BBB40;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820bbb3c
	if (ctx.cr6.eq) goto loc_820BBB3C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BBB38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820bbb40
	goto loc_820BBB40;
loc_820BBB3C:
	// bl 0x820d4d38
	ctx.lr = 0x820BBB40;
	sub_820D4D38(ctx, base);
loc_820BBB40:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,62324
	ctx.r11.u64 = ctx.r11.u64 | 62324;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820bbb84
	if (ctx.cr0.eq) goto loc_820BBB84;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820bbb80
	if (ctx.cr6.eq) goto loc_820BBB80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BBB7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820bbb84
	goto loc_820BBB84;
loc_820BBB80:
	// bl 0x820d4d38
	ctx.lr = 0x820BBB84;
	sub_820D4D38(ctx, base);
loc_820BBB84:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,62328
	ctx.r11.u64 = ctx.r11.u64 | 62328;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820bbbc8
	if (ctx.cr0.eq) goto loc_820BBBC8;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820bbbc4
	if (ctx.cr6.eq) goto loc_820BBBC4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BBBC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820bbbc8
	goto loc_820BBBC8;
loc_820BBBC4:
	// bl 0x820d4d38
	ctx.lr = 0x820BBBC8;
	sub_820D4D38(ctx, base);
loc_820BBBC8:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,62332
	ctx.r11.u64 = ctx.r11.u64 | 62332;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820bbc0c
	if (ctx.cr0.eq) goto loc_820BBC0C;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820bbc08
	if (ctx.cr6.eq) goto loc_820BBC08;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BBC04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820bbc0c
	goto loc_820BBC0C;
loc_820BBC08:
	// bl 0x820d4d38
	ctx.lr = 0x820BBC0C;
	sub_820D4D38(ctx, base);
loc_820BBC0C:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,62336
	ctx.r11.u64 = ctx.r11.u64 | 62336;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820bbc50
	if (ctx.cr0.eq) goto loc_820BBC50;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820bbc4c
	if (ctx.cr6.eq) goto loc_820BBC4C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BBC48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820bbc50
	goto loc_820BBC50;
loc_820BBC4C:
	// bl 0x820d4d38
	ctx.lr = 0x820BBC50;
	sub_820D4D38(ctx, base);
loc_820BBC50:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,62340
	ctx.r11.u64 = ctx.r11.u64 | 62340;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820bbc94
	if (ctx.cr0.eq) goto loc_820BBC94;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820bbc90
	if (ctx.cr6.eq) goto loc_820BBC90;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BBC8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820bbc94
	goto loc_820BBC94;
loc_820BBC90:
	// bl 0x820d4d38
	ctx.lr = 0x820BBC94;
	sub_820D4D38(ctx, base);
loc_820BBC94:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,62344
	ctx.r11.u64 = ctx.r11.u64 | 62344;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820bbcd8
	if (ctx.cr0.eq) goto loc_820BBCD8;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820bbcd4
	if (ctx.cr6.eq) goto loc_820BBCD4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BBCD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820bbcd8
	goto loc_820BBCD8;
loc_820BBCD4:
	// bl 0x820d4d38
	ctx.lr = 0x820BBCD8;
	sub_820D4D38(ctx, base);
loc_820BBCD8:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,62348
	ctx.r11.u64 = ctx.r11.u64 | 62348;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820bbd1c
	if (ctx.cr0.eq) goto loc_820BBD1C;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820bbd18
	if (ctx.cr6.eq) goto loc_820BBD18;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BBD14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820bbd1c
	goto loc_820BBD1C;
loc_820BBD18:
	// bl 0x820d4d38
	ctx.lr = 0x820BBD1C;
	sub_820D4D38(ctx, base);
loc_820BBD1C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BBD30"))) PPC_WEAK_FUNC(sub_820BBD30);
PPC_FUNC_IMPL(__imp__sub_820BBD30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x820BBD38;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,5400
	ctx.r30.s64 = 5400;
	// addi r31,r29,28
	ctx.r31.s64 = ctx.r29.s64 + 28;
loc_820BBD48:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820bbd6c
	if (!ctx.cr0.eq) goto loc_820BBD6C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BBD6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820BBD6C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x820bbd48
	if (!ctx.cr0.eq) goto loc_820BBD48;
	// addi r31,r29,21628
	ctx.r31.s64 = ctx.r29.s64 + 21628;
	// li r30,7500
	ctx.r30.s64 = 7500;
loc_820BBD80:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820bbda4
	if (!ctx.cr0.eq) goto loc_820BBDA4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BBDA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820BBDA4:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x820bbd80
	if (!ctx.cr0.eq) goto loc_820BBD80;
	// addis r31,r29,1
	ctx.r31.s64 = ctx.r29.s64 + 65536;
	// li r30,800
	ctx.r30.s64 = 800;
	// addi r31,r31,-13908
	ctx.r31.s64 = ctx.r31.s64 + -13908;
loc_820BBDBC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820bbde0
	if (!ctx.cr0.eq) goto loc_820BBDE0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BBDE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820BBDE0:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x820bbdbc
	if (!ctx.cr0.eq) goto loc_820BBDBC;
	// addis r31,r29,1
	ctx.r31.s64 = ctx.r29.s64 + 65536;
	// li r30,200
	ctx.r30.s64 = 200;
	// addi r31,r31,-10708
	ctx.r31.s64 = ctx.r31.s64 + -10708;
loc_820BBDF8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820bbe1c
	if (!ctx.cr0.eq) goto loc_820BBE1C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BBE1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820BBE1C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x820bbdf8
	if (!ctx.cr0.eq) goto loc_820BBDF8;
	// addis r31,r29,1
	ctx.r31.s64 = ctx.r29.s64 + 65536;
	// li r30,100
	ctx.r30.s64 = 100;
	// addi r31,r31,-9908
	ctx.r31.s64 = ctx.r31.s64 + -9908;
loc_820BBE34:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820bbe58
	if (!ctx.cr0.eq) goto loc_820BBE58;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BBE58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820BBE58:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x820bbe34
	if (!ctx.cr0.eq) goto loc_820BBE34;
	// addis r31,r29,1
	ctx.r31.s64 = ctx.r29.s64 + 65536;
	// li r30,500
	ctx.r30.s64 = 500;
	// addi r31,r31,-9508
	ctx.r31.s64 = ctx.r31.s64 + -9508;
loc_820BBE70:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820bbe94
	if (!ctx.cr0.eq) goto loc_820BBE94;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BBE94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820BBE94:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x820bbe70
	if (!ctx.cr0.eq) goto loc_820BBE70;
	// addis r31,r29,1
	ctx.r31.s64 = ctx.r29.s64 + 65536;
	// li r30,800
	ctx.r30.s64 = 800;
	// addi r31,r31,-7508
	ctx.r31.s64 = ctx.r31.s64 + -7508;
loc_820BBEAC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820bbed0
	if (!ctx.cr0.eq) goto loc_820BBED0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BBED0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820BBED0:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x820bbeac
	if (!ctx.cr0.eq) goto loc_820BBEAC;
	// addis r31,r29,1
	ctx.r31.s64 = ctx.r29.s64 + 65536;
	// li r30,16
	ctx.r30.s64 = 16;
	// addi r31,r31,-4308
	ctx.r31.s64 = ctx.r31.s64 + -4308;
loc_820BBEE8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820bbf0c
	if (!ctx.cr0.eq) goto loc_820BBF0C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BBF0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820BBF0C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x820bbee8
	if (!ctx.cr0.eq) goto loc_820BBEE8;
	// addis r31,r29,1
	ctx.r31.s64 = ctx.r29.s64 + 65536;
	// li r30,256
	ctx.r30.s64 = 256;
	// addi r31,r31,-4244
	ctx.r31.s64 = ctx.r31.s64 + -4244;
loc_820BBF24:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820bbf48
	if (!ctx.cr0.eq) goto loc_820BBF48;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BBF48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820BBF48:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x820bbf24
	if (!ctx.cr0.eq) goto loc_820BBF24;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BBF5C"))) PPC_WEAK_FUNC(sub_820BBF5C);
PPC_FUNC_IMPL(__imp__sub_820BBF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BBF60"))) PPC_WEAK_FUNC(sub_820BBF60);
PPC_FUNC_IMPL(__imp__sub_820BBF60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x820BBF68;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lhz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r11,r30,7
	ctx.r11.s64 = ctx.r30.s64 + 7;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lbz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820bbfe8
	if (ctx.cr0.eq) goto loc_820BBFE8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r28,r11,30800
	ctx.r28.s64 = ctx.r11.s64 + 30800;
loc_820BBF98:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,5400
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5400, ctx.xer);
	// sth r11,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r11.u16);
	// bne cr6,0x820bbfb8
	if (!ctx.cr6.eq) goto loc_820BBFB8;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r11.u16);
loc_820BBFB8:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x820bbfcc
	if (!ctx.cr6.eq) goto loc_820BBFCC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821313e0
	ctx.lr = 0x820BBFCC;
	sub_821313E0(ctx, base);
loc_820BBFCC:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lbz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820bbf98
	if (!ctx.cr0.eq) goto loc_820BBF98;
loc_820BBFE8:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r31
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820b66e0
	ctx.lr = 0x820BC004;
	sub_820B66E0(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 124, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BC020"))) PPC_WEAK_FUNC(sub_820BC020);
PPC_FUNC_IMPL(__imp__sub_820BC020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x820BC028;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r30,6(r31)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// addi r11,r30,5407
	ctx.r11.s64 = ctx.r30.s64 + 5407;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lbz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820bc0a4
	if (ctx.cr0.eq) goto loc_820BC0A4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r29,r11,30856
	ctx.r29.s64 = ctx.r11.s64 + 30856;
loc_820BC054:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,7500
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7500, ctx.xer);
	// sth r11,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r11.u16);
	// bne cr6,0x820bc074
	if (!ctx.cr6.eq) goto loc_820BC074;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r11.u16);
loc_820BC074:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x820bc088
	if (!ctx.cr6.eq) goto loc_820BC088;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821313e0
	ctx.lr = 0x820BC088;
	sub_821313E0(ctx, base);
loc_820BC088:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// addi r11,r11,5407
	ctx.r11.s64 = ctx.r11.s64 + 5407;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lbz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820bc054
	if (!ctx.cr0.eq) goto loc_820BC054;
loc_820BC0A4:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// addi r11,r11,5407
	ctx.r11.s64 = ctx.r11.s64 + 5407;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r31
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b3880
	ctx.lr = 0x820BC0BC;
	sub_820B3880(ctx, base);
	// lbz r11,82(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 82);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stb r11,82(r31)
	PPC_STORE_U8(ctx.r31.u32 + 82, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BC0D4"))) PPC_WEAK_FUNC(sub_820BC0D4);
PPC_FUNC_IMPL(__imp__sub_820BC0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BC0D8"))) PPC_WEAK_FUNC(sub_820BC0D8);
PPC_FUNC_IMPL(__imp__sub_820BC0D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x820BC0E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r30,10(r31)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// addi r11,r30,13707
	ctx.r11.s64 = ctx.r30.s64 + 13707;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lbz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820bc15c
	if (ctx.cr0.eq) goto loc_820BC15C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r29,r11,30908
	ctx.r29.s64 = ctx.r11.s64 + 30908;
loc_820BC10C:
	// lhz r11,10(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,200
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 200, ctx.xer);
	// sth r11,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r11.u16);
	// bne cr6,0x820bc12c
	if (!ctx.cr6.eq) goto loc_820BC12C;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r11.u16);
loc_820BC12C:
	// lhz r11,10(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x820bc140
	if (!ctx.cr6.eq) goto loc_820BC140;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821313e0
	ctx.lr = 0x820BC140;
	sub_821313E0(ctx, base);
loc_820BC140:
	// lhz r11,10(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// addi r11,r11,13707
	ctx.r11.s64 = ctx.r11.s64 + 13707;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lbz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820bc10c
	if (!ctx.cr0.eq) goto loc_820BC10C;
loc_820BC15C:
	// lhz r11,10(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// addi r11,r11,13707
	ctx.r11.s64 = ctx.r11.s64 + 13707;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r31
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820bb778
	ctx.lr = 0x820BC174;
	sub_820BB778(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BC180"))) PPC_WEAK_FUNC(sub_820BC180);
PPC_FUNC_IMPL(__imp__sub_820BC180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x820BC188;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// addi r11,r30,13907
	ctx.r11.s64 = ctx.r30.s64 + 13907;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lbz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820bc204
	if (ctx.cr0.eq) goto loc_820BC204;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r29,r11,30956
	ctx.r29.s64 = ctx.r11.s64 + 30956;
loc_820BC1B4:
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// bne cr6,0x820bc1d4
	if (!ctx.cr6.eq) goto loc_820BC1D4;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
loc_820BC1D4:
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x820bc1e8
	if (!ctx.cr6.eq) goto loc_820BC1E8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821313e0
	ctx.lr = 0x820BC1E8;
	sub_821313E0(ctx, base);
loc_820BC1E8:
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// addi r11,r11,13907
	ctx.r11.s64 = ctx.r11.s64 + 13907;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lbz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820bc1b4
	if (!ctx.cr0.eq) goto loc_820BC1B4;
loc_820BC204:
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// addi r11,r11,13907
	ctx.r11.s64 = ctx.r11.s64 + 13907;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BC21C"))) PPC_WEAK_FUNC(sub_820BC21C);
PPC_FUNC_IMPL(__imp__sub_820BC21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BC220"))) PPC_WEAK_FUNC(sub_820BC220);
PPC_FUNC_IMPL(__imp__sub_820BC220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x820BC228;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lhz r30,14(r31)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// addi r11,r30,14007
	ctx.r11.s64 = ctx.r30.s64 + 14007;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lbz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820bc2a8
	if (ctx.cr0.eq) goto loc_820BC2A8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r28,r11,31008
	ctx.r28.s64 = ctx.r11.s64 + 31008;
loc_820BC258:
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,500
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 500, ctx.xer);
	// sth r11,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r11.u16);
	// bne cr6,0x820bc278
	if (!ctx.cr6.eq) goto loc_820BC278;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r11.u16);
loc_820BC278:
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x820bc28c
	if (!ctx.cr6.eq) goto loc_820BC28C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821313e0
	ctx.lr = 0x820BC28C;
	sub_821313E0(ctx, base);
loc_820BC28C:
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// addi r11,r11,14007
	ctx.r11.s64 = ctx.r11.s64 + 14007;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lbz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820bc258
	if (!ctx.cr0.eq) goto loc_820BC258;
loc_820BC2A8:
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r11,r11,14007
	ctx.r11.s64 = ctx.r11.s64 + 14007;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r31
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820bb838
	ctx.lr = 0x820BC2C4;
	sub_820BB838(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BC2D0"))) PPC_WEAK_FUNC(sub_820BC2D0);
PPC_FUNC_IMPL(__imp__sub_820BC2D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x820BC2D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// addi r11,r30,14507
	ctx.r11.s64 = ctx.r30.s64 + 14507;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lbz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820bc354
	if (ctx.cr0.eq) goto loc_820BC354;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r29,r11,31056
	ctx.r29.s64 = ctx.r11.s64 + 31056;
loc_820BC304:
	// lhz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,800
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 800, ctx.xer);
	// sth r11,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r11.u16);
	// bne cr6,0x820bc324
	if (!ctx.cr6.eq) goto loc_820BC324;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r11.u16);
loc_820BC324:
	// lhz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x820bc338
	if (!ctx.cr6.eq) goto loc_820BC338;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821313e0
	ctx.lr = 0x820BC338;
	sub_821313E0(ctx, base);
loc_820BC338:
	// lhz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// addi r11,r11,14507
	ctx.r11.s64 = ctx.r11.s64 + 14507;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lbz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820bc304
	if (!ctx.cr0.eq) goto loc_820BC304;
loc_820BC354:
	// lhz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// addi r11,r11,14507
	ctx.r11.s64 = ctx.r11.s64 + 14507;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BC36C"))) PPC_WEAK_FUNC(sub_820BC36C);
PPC_FUNC_IMPL(__imp__sub_820BC36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BC370"))) PPC_WEAK_FUNC(sub_820BC370);
PPC_FUNC_IMPL(__imp__sub_820BC370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x820BC378;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r30,18(r31)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r31.u32 + 18);
	// addi r11,r30,15307
	ctx.r11.s64 = ctx.r30.s64 + 15307;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lbz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820bc3f4
	if (ctx.cr0.eq) goto loc_820BC3F4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r29,r11,31112
	ctx.r29.s64 = ctx.r11.s64 + 31112;
loc_820BC3A4:
	// lhz r11,18(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 18);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// sth r11,18(r31)
	PPC_STORE_U16(ctx.r31.u32 + 18, ctx.r11.u16);
	// bne cr6,0x820bc3c4
	if (!ctx.cr6.eq) goto loc_820BC3C4;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,18(r31)
	PPC_STORE_U16(ctx.r31.u32 + 18, ctx.r11.u16);
loc_820BC3C4:
	// lhz r11,18(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 18);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x820bc3d8
	if (!ctx.cr6.eq) goto loc_820BC3D8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821313e0
	ctx.lr = 0x820BC3D8;
	sub_821313E0(ctx, base);
loc_820BC3D8:
	// lhz r11,18(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 18);
	// addi r11,r11,15307
	ctx.r11.s64 = ctx.r11.s64 + 15307;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lbz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820bc3a4
	if (!ctx.cr0.eq) goto loc_820BC3A4;
loc_820BC3F4:
	// lhz r11,18(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 18);
	// addi r11,r11,15307
	ctx.r11.s64 = ctx.r11.s64 + 15307;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r31
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b3880
	ctx.lr = 0x820BC40C;
	sub_820B3880(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BC418"))) PPC_WEAK_FUNC(sub_820BC418);
PPC_FUNC_IMPL(__imp__sub_820BC418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x820BC420;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r30,20(r31)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// addi r11,r30,15323
	ctx.r11.s64 = ctx.r30.s64 + 15323;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lbz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820bc49c
	if (ctx.cr0.eq) goto loc_820BC49C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r29,r11,31160
	ctx.r29.s64 = ctx.r11.s64 + 31160;
loc_820BC44C:
	// lhz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// sth r11,20(r31)
	PPC_STORE_U16(ctx.r31.u32 + 20, ctx.r11.u16);
	// bne cr6,0x820bc46c
	if (!ctx.cr6.eq) goto loc_820BC46C;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,20(r31)
	PPC_STORE_U16(ctx.r31.u32 + 20, ctx.r11.u16);
loc_820BC46C:
	// lhz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x820bc480
	if (!ctx.cr6.eq) goto loc_820BC480;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821313e0
	ctx.lr = 0x820BC480;
	sub_821313E0(ctx, base);
loc_820BC480:
	// lhz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// addi r11,r11,15323
	ctx.r11.s64 = ctx.r11.s64 + 15323;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lbz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820bc44c
	if (!ctx.cr0.eq) goto loc_820BC44C;
loc_820BC49C:
	// lhz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// addi r11,r11,15323
	ctx.r11.s64 = ctx.r11.s64 + 15323;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r31
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c1ff0
	ctx.lr = 0x820BC4B4;
	sub_820C1FF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BC4C0"))) PPC_WEAK_FUNC(sub_820BC4C0);
PPC_FUNC_IMPL(__imp__sub_820BC4C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x820BC4C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820b0700
	ctx.lr = 0x820BC4D4;
	sub_820B0700(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bc540
	if (ctx.cr6.eq) goto loc_820BC540;
	// lhz r11,34(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 34);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820bc528
	if (ctx.cr0.eq) goto loc_820BC528;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_820BC4F8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209e368
	ctx.lr = 0x820BC504;
	sub_8209E368(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// stb r28,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r28.u8);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// lhz r11,34(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 34);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820bc4f8
	if (ctx.cr6.lt) goto loc_820BC4F8;
loc_820BC528:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820bc53c
	if (ctx.cr0.eq) goto loc_820BC53C;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// bl 0x820d4d38
	ctx.lr = 0x820BC53C;
	sub_820D4D38(ctx, base);
loc_820BC53C:
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
loc_820BC540:
	// sth r28,32(r31)
	PPC_STORE_U16(ctx.r31.u32 + 32, ctx.r28.u16);
	// sth r28,34(r31)
	PPC_STORE_U16(ctx.r31.u32 + 34, ctx.r28.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BC550"))) PPC_WEAK_FUNC(sub_820BC550);
PPC_FUNC_IMPL(__imp__sub_820BC550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x820bba98
	ctx.lr = 0x820BC570;
	sub_820BBA98(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820bc580
	if (ctx.cr0.eq) goto loc_820BC580;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d4d38
	ctx.lr = 0x820BC580;
	sub_820D4D38(ctx, base);
loc_820BC580:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BC59C"))) PPC_WEAK_FUNC(sub_820BC59C);
PPC_FUNC_IMPL(__imp__sub_820BC59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BC5A0"))) PPC_WEAK_FUNC(sub_820BC5A0);
PPC_FUNC_IMPL(__imp__sub_820BC5A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x820BC5A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lhz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// addi r11,r29,12907
	ctx.r11.s64 = ctx.r29.s64 + 12907;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lbz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820bc628
	if (ctx.cr0.eq) goto loc_820BC628;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r27,r11,31220
	ctx.r27.s64 = ctx.r11.s64 + 31220;
loc_820BC5DC:
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,800
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 800, ctx.xer);
	// sth r11,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r11.u16);
	// bne cr6,0x820bc5f8
	if (!ctx.cr6.eq) goto loc_820BC5F8;
	// sth r30,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r30.u16);
loc_820BC5F8:
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x820bc60c
	if (!ctx.cr6.eq) goto loc_820BC60C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821313e0
	ctx.lr = 0x820BC60C;
	sub_821313E0(ctx, base);
loc_820BC60C:
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// addi r11,r11,12907
	ctx.r11.s64 = ctx.r11.s64 + 12907;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lbz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820bc5dc
	if (!ctx.cr0.eq) goto loc_820BC5DC;
loc_820BC628:
	// lhz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// li r11,255
	ctx.r11.s64 = 255;
	// addi r10,r10,12907
	ctx.r10.s64 = ctx.r10.s64 + 12907;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// sth r11,40(r3)
	PPC_STORE_U16(ctx.r3.u32 + 40, ctx.r11.u16);
	// sth r11,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r11.u16);
	// sth r11,30(r3)
	PPC_STORE_U16(ctx.r3.u32 + 30, ctx.r11.u16);
	// sth r11,28(r3)
	PPC_STORE_U16(ctx.r3.u32 + 28, ctx.r11.u16);
	// sth r30,42(r3)
	PPC_STORE_U16(ctx.r3.u32 + 42, ctx.r30.u16);
	// sth r30,38(r3)
	PPC_STORE_U16(ctx.r3.u32 + 38, ctx.r30.u16);
	// sth r30,36(r3)
	PPC_STORE_U16(ctx.r3.u32 + 36, ctx.r30.u16);
	// sth r30,34(r3)
	PPC_STORE_U16(ctx.r3.u32 + 34, ctx.r30.u16);
	// stw r28,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BC668"))) PPC_WEAK_FUNC(sub_820BC668);
PPC_FUNC_IMPL(__imp__sub_820BC668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820b3a60
	ctx.lr = 0x820BC680;
	sub_820B3A60(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BC6A0"))) PPC_WEAK_FUNC(sub_820BC6A0);
PPC_FUNC_IMPL(__imp__sub_820BC6A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820b3a08
	ctx.lr = 0x820BC6B8;
	sub_820B3A08(ctx, base);
	// lbz r11,82(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 82);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,82(r31)
	PPC_STORE_U8(ctx.r31.u32 + 82, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BC6D8"))) PPC_WEAK_FUNC(sub_820BC6D8);
PPC_FUNC_IMPL(__imp__sub_820BC6D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,108(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BC6E0"))) PPC_WEAK_FUNC(sub_820BC6E0);
PPC_FUNC_IMPL(__imp__sub_820BC6E0) {
	PPC_FUNC_PROLOGUE();
	// lis r3,1
	ctx.r3.s64 = 65536;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BC6E8"))) PPC_WEAK_FUNC(sub_820BC6E8);
PPC_FUNC_IMPL(__imp__sub_820BC6E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820b9768
	ctx.lr = 0x820BC700;
	sub_820B9768(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,31520
	ctx.r11.s64 = ctx.r11.s64 + 31520;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r10.u8);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x820bb778
	ctx.lr = 0x820BC71C;
	sub_820BB778(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BC734"))) PPC_WEAK_FUNC(sub_820BC734);
PPC_FUNC_IMPL(__imp__sub_820BC734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BC738"))) PPC_WEAK_FUNC(sub_820BC738);
PPC_FUNC_IMPL(__imp__sub_820BC738) {
	PPC_FUNC_PROLOGUE();
	// li r3,512
	ctx.r3.s64 = 512;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BC740"))) PPC_WEAK_FUNC(sub_820BC740);
PPC_FUNC_IMPL(__imp__sub_820BC740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x820BC748;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,39
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 39, ctx.xer);
	// beq cr6,0x820bc90c
	if (ctx.cr6.eq) goto loc_820BC90C;
	// cmpwi cr6,r11,40
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 40, ctx.xer);
	// beq cr6,0x820bc8bc
	if (ctx.cr6.eq) goto loc_820BC8BC;
	// cmpwi cr6,r11,91
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 91, ctx.xer);
	// beq cr6,0x820bc854
	if (ctx.cr6.eq) goto loc_820BC854;
	// cmpwi cr6,r11,92
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 92, ctx.xer);
	// beq cr6,0x820bc824
	if (ctx.cr6.eq) goto loc_820BC824;
	// cmpwi cr6,r11,93
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 93, ctx.xer);
	// beq cr6,0x820bc81c
	if (ctx.cr6.eq) goto loc_820BC81C;
	// cmpwi cr6,r11,94
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 94, ctx.xer);
	// beq cr6,0x820bc7dc
	if (ctx.cr6.eq) goto loc_820BC7DC;
	// cmpwi cr6,r11,95
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 95, ctx.xer);
	// bne cr6,0x820bc948
	if (!ctx.cr6.eq) goto loc_820BC948;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x820b2e60
	ctx.lr = 0x820BC7A4;
	sub_820B2E60(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,10640(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10640);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f13,9472(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9472);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x820bc7d0
	if (ctx.cr6.lt) goto loc_820BC7D0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,9580(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9580);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x820bc7d4
	if (!ctx.cr6.gt) goto loc_820BC7D4;
loc_820BC7D0:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_820BC7D4:
	// stfs f0,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// b 0x820bc948
	goto loc_820BC948;
loc_820BC7DC:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x820b2e60
	ctx.lr = 0x820BC7E4;
	sub_820B2E60(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,10640(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10640);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f13,10048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10048);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x820bc810
	if (ctx.cr6.lt) goto loc_820BC810;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,9580(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9580);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x820bc814
	if (!ctx.cr6.gt) goto loc_820BC814;
loc_820BC810:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_820BC814:
	// stfs f0,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// b 0x820bc948
	goto loc_820BC948;
loc_820BC81C:
	// lfs f13,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// b 0x820bc828
	goto loc_820BC828;
loc_820BC824:
	// lfs f13,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
loc_820BC828:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f0,30792(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30792);
	ctx.f0.f64 = double(temp.f32);
	// li r11,4
	ctx.r11.s64 = 4;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// b 0x820bc948
	goto loc_820BC948;
loc_820BC854:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x820b3040
	ctx.lr = 0x820BC85C;
	sub_820B3040(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// sth r4,90(r31)
	PPC_STORE_U16(ctx.r31.u32 + 90, ctx.r4.u16);
	// lwz r3,8536(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8536);
	// bl 0x820dab58
	ctx.lr = 0x820BC86C;
	sub_820DAB58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8208cdc0
	ctx.lr = 0x820BC87C;
	sub_8208CDC0(ctx, base);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lhz r5,90(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 90);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,9780(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9780);
	// bl 0x820c6338
	ctx.lr = 0x820BC894;
	sub_820C6338(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lhz r5,90(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 90);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r3,r11,31764
	ctx.r3.s64 = ctx.r11.s64 + 31764;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x820ad500
	ctx.lr = 0x820BC8AC;
	sub_820AD500(ctx, base);
	// bl 0x821313e0
	ctx.lr = 0x820BC8B0;
	sub_821313E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r11.u8);
	// b 0x820bc948
	goto loc_820BC948;
loc_820BC8BC:
	// lbz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 132);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820bc948
	if (ctx.cr0.eq) goto loc_820BC948;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820bc900
	if (!ctx.cr6.gt) goto loc_820BC900;
	// addi r30,r31,100
	ctx.r30.s64 = ctx.r31.s64 + 100;
	// lis r28,-32205
	ctx.r28.s64 = -2110586880;
loc_820BC8DC:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,9780(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 9780);
	// lhz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// bl 0x820c5148
	ctx.lr = 0x820BC8EC;
	sub_820C5148(ctx, base);
	// lbz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 132);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820bc8dc
	if (ctx.cr6.lt) goto loc_820BC8DC;
loc_820BC900:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 132, ctx.r11.u8);
	// b 0x820bc948
	goto loc_820BC948;
loc_820BC90C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,1
	ctx.r6.s64 = 1;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// lfs f31,9472(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9472);
	ctx.f31.f64 = double(temp.f32);
	// bne cr6,0x820bc938
	if (!ctx.cr6.eq) goto loc_820BC938;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x820b2e60
	ctx.lr = 0x820BC928;
	sub_820B2E60(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x820b2fb8
	ctx.lr = 0x820BC934;
	sub_820B2FB8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_820BC938:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82081820
	ctx.lr = 0x820BC948;
	sub_82081820(ctx, base);
loc_820BC948:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BC954"))) PPC_WEAK_FUNC(sub_820BC954);
PPC_FUNC_IMPL(__imp__sub_820BC954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BC958"))) PPC_WEAK_FUNC(sub_820BC958);
PPC_FUNC_IMPL(__imp__sub_820BC958) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x820bc97c
	if (!ctx.cr6.eq) goto loc_820BC97C;
	// lhz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_820BC97C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BC984"))) PPC_WEAK_FUNC(sub_820BC984);
PPC_FUNC_IMPL(__imp__sub_820BC984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BC988"))) PPC_WEAK_FUNC(sub_820BC988);
PPC_FUNC_IMPL(__imp__sub_820BC988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x820BC990;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x820bc9d8
	if (ctx.cr6.lt) goto loc_820BC9D8;
	// li r29,0
	ctx.r29.s64 = 0;
loc_820BC9AC:
	// add r4,r29,r28
	ctx.r4.u64 = ctx.r29.u64 + ctx.r28.u64;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r4,r30
	ctx.r11.u64 = ctx.r4.u64 + ctx.r30.u64;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8209e3f0
	ctx.lr = 0x820BC9C8;
	sub_8209E3F0(ctx, base);
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// clrlwi r29,r11,16
	ctx.r29.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x820bc9ac
	if (!ctx.cr6.gt) goto loc_820BC9AC;
loc_820BC9D8:
	// lhz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// sth r11,32(r31)
	PPC_STORE_U16(ctx.r31.u32 + 32, ctx.r11.u16);
	// b 0x820bca10
	goto loc_820BCA10;
loc_820BC9F4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209e368
	ctx.lr = 0x820BCA00;
	sub_8209E368(ctx, base);
	// lhz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// clrlwi r29,r11,16
	ctx.r29.u64 = ctx.r11.u32 & 0xFFFF;
loc_820BCA10:
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x820bc9f4
	if (ctx.cr6.lt) goto loc_820BC9F4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BCA20"))) PPC_WEAK_FUNC(sub_820BCA20);
PPC_FUNC_IMPL(__imp__sub_820BCA20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x820BCA28;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x820bcad4
	if (ctx.cr6.eq) goto loc_820BCAD4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x820bcae4
	if (!ctx.cr6.eq) goto loc_820BCAE4;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x820b2fb8
	ctx.lr = 0x820BCA54;
	sub_820B2FB8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x820b2fb8
	ctx.lr = 0x820BCA60;
	sub_820B2FB8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// bne cr6,0x820bca7c
	if (!ctx.cr6.eq) goto loc_820BCA7C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820bc988
	ctx.lr = 0x820BCA78;
	sub_820BC988(ctx, base);
	// b 0x820bcae4
	goto loc_820BCAE4;
loc_820BCA7C:
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bne cr6,0x820bcae4
	if (!ctx.cr6.eq) goto loc_820BCAE4;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lhz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 32);
	// ori r29,r10,65535
	ctx.r29.u64 = ctx.r10.u64 | 65535;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x820bcab4
	goto loc_820BCAB4;
loc_820BCA98:
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mulli r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 * 12;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r11,-12
	ctx.r5.s64 = ctx.r11.s64 + -12;
	// bl 0x8209e3f0
	ctx.lr = 0x820BCAB0;
	sub_8209E3F0(ctx, base);
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
loc_820BCAB4:
	// clrlwi r31,r11,16
	ctx.r31.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// bgt cr6,0x820bca98
	if (ctx.cr6.gt) goto loc_820BCA98;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,8(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// bl 0x8209e3f0
	ctx.lr = 0x820BCAD0;
	sub_8209E3F0(ctx, base);
	// b 0x820bcae4
	goto loc_820BCAE4;
loc_820BCAD4:
	// lhz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
loc_820BCAE4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BCAEC"))) PPC_WEAK_FUNC(sub_820BCAEC);
PPC_FUNC_IMPL(__imp__sub_820BCAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BCAF0"))) PPC_WEAK_FUNC(sub_820BCAF0);
PPC_FUNC_IMPL(__imp__sub_820BCAF0) {
	PPC_FUNC_PROLOGUE();
	// li r3,128
	ctx.r3.s64 = 128;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BCAF8"))) PPC_WEAK_FUNC(sub_820BCAF8);
PPC_FUNC_IMPL(__imp__sub_820BCAF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,31812
	ctx.r11.s64 = ctx.r11.s64 + 31812;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x820bc4c0
	ctx.lr = 0x820BCB1C;
	sub_820BC4C0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,28968
	ctx.r11.s64 = ctx.r11.s64 + 28968;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x820b0700
	ctx.lr = 0x820BCB30;
	sub_820B0700(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x820b84d0
	ctx.lr = 0x820BCB38;
	sub_820B84D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BCB4C"))) PPC_WEAK_FUNC(sub_820BCB4C);
PPC_FUNC_IMPL(__imp__sub_820BCB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BCB50"))) PPC_WEAK_FUNC(sub_820BCB50);
PPC_FUNC_IMPL(__imp__sub_820BCB50) {
	PPC_FUNC_PROLOGUE();
	// li r3,16384
	ctx.r3.s64 = 16384;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BCB58"))) PPC_WEAK_FUNC(sub_820BCB58);
PPC_FUNC_IMPL(__imp__sub_820BCB58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820b0700
	ctx.lr = 0x820BCB70;
	sub_820B0700(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820bb930
	ctx.lr = 0x820BCB78;
	sub_820BB930(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,30(r31)
	PPC_STORE_U16(ctx.r31.u32 + 30, ctx.r11.u16);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BCBA0"))) PPC_WEAK_FUNC(sub_820BCBA0);
PPC_FUNC_IMPL(__imp__sub_820BCBA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820b9768
	ctx.lr = 0x820BCBB8;
	sub_820B9768(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,31904
	ctx.r10.s64 = ctx.r11.s64 + 31904;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stb r11,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r11.u8);
	// stb r11,160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 160, ctx.r11.u8);
	// sth r11,162(r31)
	PPC_STORE_U16(ctx.r31.u32 + 162, ctx.r11.u16);
	// sth r11,164(r31)
	PPC_STORE_U16(ctx.r31.u32 + 164, ctx.r11.u16);
	// sth r11,166(r31)
	PPC_STORE_U16(ctx.r31.u32 + 166, ctx.r11.u16);
	// sth r11,168(r31)
	PPC_STORE_U16(ctx.r31.u32 + 168, ctx.r11.u16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BCBFC"))) PPC_WEAK_FUNC(sub_820BCBFC);
PPC_FUNC_IMPL(__imp__sub_820BCBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BCC00"))) PPC_WEAK_FUNC(sub_820BCC00);
PPC_FUNC_IMPL(__imp__sub_820BCC00) {
	PPC_FUNC_PROLOGUE();
	// lis r3,2
	ctx.r3.s64 = 131072;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BCC08"))) PPC_WEAK_FUNC(sub_820BCC08);
PPC_FUNC_IMPL(__imp__sub_820BCC08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98d4
	ctx.lr = 0x820BCC10;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r11,r11,30796
	ctx.r11.s64 = ctx.r11.s64 + 30796;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// bl 0x820d4c58
	ctx.lr = 0x820BCC30;
	sub_820D4C58(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r3,13
	ctx.r3.s64 = 851968;
	// ori r3,r3,12036
	ctx.r3.u64 = ctx.r3.u64 | 12036;
	// stw r31,24(r25)
	PPC_STORE_U32(ctx.r25.u32 + 24, ctx.r31.u32);
	// sth r31,4(r25)
	PPC_STORE_U16(ctx.r25.u32 + 4, ctx.r31.u16);
	// bl 0x820d4cd8
	ctx.lr = 0x820BCC48;
	sub_820D4CD8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820bcc80
	if (ctx.cr0.eq) goto loc_820BCC80;
	// li r11,5400
	ctx.r11.s64 = 5400;
	// addi r28,r3,4
	ctx.r28.s64 = ctx.r3.s64 + 4;
	// li r30,5399
	ctx.r30.s64 = 5399;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_820BCC64:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820bacc8
	ctx.lr = 0x820BCC6C;
	sub_820BACC8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,160
	ctx.r29.s64 = ctx.r29.s64 + 160;
	// bge 0x820bcc64
	if (!ctx.cr0.lt) goto loc_820BCC64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// b 0x820bcc84
	goto loc_820BCC84;
loc_820BCC80:
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
loc_820BCC84:
	// addis r9,r25,1
	ctx.r9.s64 = ctx.r25.s64 + 65536;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r9,r9,-3220
	ctx.r9.s64 = ctx.r9.s64 + -3220;
	// addi r10,r25,28
	ctx.r10.s64 = ctx.r25.s64 + 28;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
loc_820BCC98:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lis r7,13
	ctx.r7.s64 = 851968;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// ori r7,r7,12032
	ctx.r7.u64 = ctx.r7.u64 | 12032;
	// addi r11,r11,160
	ctx.r11.s64 = ctx.r11.s64 + 160;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// blt cr6,0x820bcc98
	if (ctx.cr6.lt) goto loc_820BCC98;
	// lis r3,12
	ctx.r3.s64 = 786432;
	// sth r31,6(r25)
	PPC_STORE_U16(ctx.r25.u32 + 6, ctx.r31.u16);
	// ori r3,r3,53572
	ctx.r3.u64 = ctx.r3.u64 | 53572;
	// bl 0x820d4cd8
	ctx.lr = 0x820BCCCC;
	sub_820D4CD8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820bcd18
	if (ctx.cr0.eq) goto loc_820BCD18;
	// li r11,7500
	ctx.r11.s64 = 7500;
	// addi r27,r3,4
	ctx.r27.s64 = ctx.r3.s64 + 4;
	// li r29,7499
	ctx.r29.s64 = 7499;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r28,r11,31272
	ctx.r28.s64 = ctx.r11.s64 + 31272;
loc_820BCCF0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820b9768
	ctx.lr = 0x820BCCF8;
	sub_820B9768(ctx, base);
	// stw r31,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r31.u32);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r31,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r31.u32);
	// addi r30,r30,112
	ctx.r30.s64 = ctx.r30.s64 + 112;
	// bge 0x820bccf0
	if (!ctx.cr0.lt) goto loc_820BCCF0;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// b 0x820bcd1c
	goto loc_820BCD1C;
loc_820BCD18:
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
loc_820BCD1C:
	// addis r9,r25,1
	ctx.r9.s64 = ctx.r25.s64 + 65536;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r9,r9,-3216
	ctx.r9.s64 = ctx.r9.s64 + -3216;
	// addi r10,r25,21628
	ctx.r10.s64 = ctx.r25.s64 + 21628;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
loc_820BCD30:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lis r7,12
	ctx.r7.s64 = 786432;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// ori r7,r7,53568
	ctx.r7.u64 = ctx.r7.u64 | 53568;
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// blt cr6,0x820bcd30
	if (ctx.cr6.lt) goto loc_820BCD30;
	// lis r3,0
	ctx.r3.s64 = 0;
	// sth r31,8(r25)
	PPC_STORE_U16(ctx.r25.u32 + 8, ctx.r31.u16);
	// ori r3,r3,38404
	ctx.r3.u64 = ctx.r3.u64 | 38404;
	// bl 0x820d4cd8
	ctx.lr = 0x820BCD64;
	sub_820D4CD8(ctx, base);
	// li r27,800
	ctx.r27.s64 = 800;
	// li r24,1
	ctx.r24.s64 = 1;
	// li r23,255
	ctx.r23.s64 = 255;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820bcde8
	if (ctx.cr0.eq) goto loc_820BCDE8;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// li r9,799
	ctx.r9.s64 = 799;
	// addi r11,r10,12
	ctx.r11.s64 = ctx.r10.s64 + 12;
	// addi r7,r7,29176
	ctx.r7.s64 = ctx.r7.s64 + 29176;
loc_820BCD94:
	// stw r31,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r31.u32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r31,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r31.u32);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r24,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r24.u32);
	// stb r31,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r31.u8);
	// stb r31,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r31.u8);
	// sth r23,28(r11)
	PPC_STORE_U16(ctx.r11.u32 + 28, ctx.r23.u16);
	// sth r23,20(r11)
	PPC_STORE_U16(ctx.r11.u32 + 20, ctx.r23.u16);
	// sth r23,18(r11)
	PPC_STORE_U16(ctx.r11.u32 + 18, ctx.r23.u16);
	// sth r23,16(r11)
	PPC_STORE_U16(ctx.r11.u32 + 16, ctx.r23.u16);
	// sth r31,30(r11)
	PPC_STORE_U16(ctx.r11.u32 + 30, ctx.r31.u16);
	// sth r31,26(r11)
	PPC_STORE_U16(ctx.r11.u32 + 26, ctx.r31.u16);
	// sth r31,24(r11)
	PPC_STORE_U16(ctx.r11.u32 + 24, ctx.r31.u16);
	// sth r31,22(r11)
	PPC_STORE_U16(ctx.r11.u32 + 22, ctx.r31.u16);
	// stw r31,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r31.u32);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// bge 0x820bcd94
	if (!ctx.cr0.lt) goto loc_820BCD94;
	// b 0x820bcdec
	goto loc_820BCDEC;
loc_820BCDE8:
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
loc_820BCDEC:
	// addis r9,r25,1
	ctx.r9.s64 = ctx.r25.s64 + 65536;
	// addis r10,r25,1
	ctx.r10.s64 = ctx.r25.s64 + 65536;
	// addi r9,r9,-3212
	ctx.r9.s64 = ctx.r9.s64 + -3212;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r10,r10,-13908
	ctx.r10.s64 = ctx.r10.s64 + -13908;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
loc_820BCE04:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lis r7,0
	ctx.r7.s64 = 0;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// ori r7,r7,38400
	ctx.r7.u64 = ctx.r7.u64 | 38400;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// blt cr6,0x820bce04
	if (ctx.cr6.lt) goto loc_820BCE04;
	// li r3,27204
	ctx.r3.s64 = 27204;
	// sth r31,10(r25)
	PPC_STORE_U16(ctx.r25.u32 + 10, ctx.r31.u16);
	// bl 0x820d4cd8
	ctx.lr = 0x820BCE34;
	sub_820D4CD8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820bce6c
	if (ctx.cr0.eq) goto loc_820BCE6C;
	// li r11,200
	ctx.r11.s64 = 200;
	// addi r28,r3,4
	ctx.r28.s64 = ctx.r3.s64 + 4;
	// li r30,199
	ctx.r30.s64 = 199;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_820BCE50:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820bc6e8
	ctx.lr = 0x820BCE58;
	sub_820BC6E8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,136
	ctx.r29.s64 = ctx.r29.s64 + 136;
	// bge 0x820bce50
	if (!ctx.cr0.lt) goto loc_820BCE50;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// b 0x820bce70
	goto loc_820BCE70;
loc_820BCE6C:
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
loc_820BCE70:
	// addis r9,r25,1
	ctx.r9.s64 = ctx.r25.s64 + 65536;
	// addis r10,r25,1
	ctx.r10.s64 = ctx.r25.s64 + 65536;
	// addi r9,r9,-3208
	ctx.r9.s64 = ctx.r9.s64 + -3208;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r10,r10,-10708
	ctx.r10.s64 = ctx.r10.s64 + -10708;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
loc_820BCE88:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r11,136
	ctx.r11.s64 = ctx.r11.s64 + 136;
	// cmpwi cr6,r11,27200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27200, ctx.xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// blt cr6,0x820bce88
	if (ctx.cr6.lt) goto loc_820BCE88;
	// li r3,2804
	ctx.r3.s64 = 2804;
	// sth r31,12(r25)
	PPC_STORE_U16(ctx.r25.u32 + 12, ctx.r31.u16);
	// bl 0x820d4cd8
	ctx.lr = 0x820BCEB0;
	sub_820D4CD8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820bcf08
	if (ctx.cr0.eq) goto loc_820BCF08;
	// li r11,100
	ctx.r11.s64 = 100;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// li r9,99
	ctx.r9.s64 = 99;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r7,r7,28968
	ctx.r7.s64 = ctx.r7.s64 + 28968;
	// addi r11,r10,12
	ctx.r11.s64 = ctx.r10.s64 + 12;
loc_820BCED8:
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r31,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r31.u32);
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// stw r31,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r31.u32);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r24,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r24.u32);
	// stb r31,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r31.u8);
	// stb r31,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r31.u8);
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// bge 0x820bced8
	if (!ctx.cr0.lt) goto loc_820BCED8;
	// b 0x820bcf0c
	goto loc_820BCF0C;
loc_820BCF08:
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
loc_820BCF0C:
	// addis r9,r25,1
	ctx.r9.s64 = ctx.r25.s64 + 65536;
	// addis r10,r25,1
	ctx.r10.s64 = ctx.r25.s64 + 65536;
	// addi r9,r9,-3204
	ctx.r9.s64 = ctx.r9.s64 + -3204;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r10,r10,-9908
	ctx.r10.s64 = ctx.r10.s64 + -9908;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
loc_820BCF24:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// cmpwi cr6,r11,2800
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2800, ctx.xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// blt cr6,0x820bcf24
	if (ctx.cr6.lt) goto loc_820BCF24;
	// li r3,18004
	ctx.r3.s64 = 18004;
	// sth r31,14(r25)
	PPC_STORE_U16(ctx.r25.u32 + 14, ctx.r31.u16);
	// bl 0x820d4cd8
	ctx.lr = 0x820BCF4C;
	sub_820D4CD8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820bcfb0
	if (ctx.cr0.eq) goto loc_820BCFB0;
	// li r11,500
	ctx.r11.s64 = 500;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// li r9,499
	ctx.r9.s64 = 499;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r7,r7,31812
	ctx.r7.s64 = ctx.r7.s64 + 31812;
	// addi r11,r10,12
	ctx.r11.s64 = ctx.r10.s64 + 12;
loc_820BCF74:
	// stw r31,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r31.u32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r31,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r31.u32);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r24,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r24.u32);
	// stb r31,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r31.u8);
	// stb r31,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r31.u8);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// sth r31,20(r11)
	PPC_STORE_U16(ctx.r11.u32 + 20, ctx.r31.u16);
	// sth r31,22(r11)
	PPC_STORE_U16(ctx.r11.u32 + 22, ctx.r31.u16);
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// bge 0x820bcf74
	if (!ctx.cr0.lt) goto loc_820BCF74;
	// b 0x820bcfb4
	goto loc_820BCFB4;
loc_820BCFB0:
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
loc_820BCFB4:
	// addis r9,r25,1
	ctx.r9.s64 = ctx.r25.s64 + 65536;
	// addis r10,r25,1
	ctx.r10.s64 = ctx.r25.s64 + 65536;
	// addi r9,r9,-3200
	ctx.r9.s64 = ctx.r9.s64 + -3200;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r10,r10,-9508
	ctx.r10.s64 = ctx.r10.s64 + -9508;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
loc_820BCFCC:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// cmpwi cr6,r11,18000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18000, ctx.xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// blt cr6,0x820bcfcc
	if (ctx.cr6.lt) goto loc_820BCFCC;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// sth r31,16(r25)
	PPC_STORE_U16(ctx.r25.u32 + 16, ctx.r31.u16);
	// ori r3,r3,49668
	ctx.r3.u64 = ctx.r3.u64 | 49668;
	// bl 0x820d4cd8
	ctx.lr = 0x820BCFF8;
	sub_820D4CD8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820bd070
	if (ctx.cr0.eq) goto loc_820BD070;
	// addi r26,r3,4
	ctx.r26.s64 = ctx.r3.s64 + 4;
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// li r28,799
	ctx.r28.s64 = 799;
	// addi r30,r29,12
	ctx.r30.s64 = ctx.r29.s64 + 12;
	// addi r27,r11,31856
	ctx.r27.s64 = ctx.r11.s64 + 31856;
loc_820BD01C:
	// li r5,96
	ctx.r5.s64 = 96;
	// stw r31,-8(r30)
	PPC_STORE_U32(ctx.r30.u32 + -8, ctx.r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r31.u32);
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// stw r24,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r24.u32);
	// stb r31,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r31.u8);
	// stb r31,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r31.u8);
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
	// sth r31,20(r30)
	PPC_STORE_U16(ctx.r30.u32 + 20, ctx.r31.u16);
	// stw r31,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r31.u32);
	// stw r31,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r31.u32);
	// stw r31,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r31.u32);
	// bl 0x822e9ff0
	ctx.lr = 0x820BD058;
	sub_822E9FF0(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,144
	ctx.r29.s64 = ctx.r29.s64 + 144;
	// addi r30,r30,144
	ctx.r30.s64 = ctx.r30.s64 + 144;
	// bge 0x820bd01c
	if (!ctx.cr0.lt) goto loc_820BD01C;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// b 0x820bd074
	goto loc_820BD074;
loc_820BD070:
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
loc_820BD074:
	// addis r9,r25,1
	ctx.r9.s64 = ctx.r25.s64 + 65536;
	// addis r10,r25,1
	ctx.r10.s64 = ctx.r25.s64 + 65536;
	// addi r9,r9,-3196
	ctx.r9.s64 = ctx.r9.s64 + -3196;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r10,r10,-7508
	ctx.r10.s64 = ctx.r10.s64 + -7508;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
loc_820BD08C:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// ori r7,r7,49664
	ctx.r7.u64 = ctx.r7.u64 | 49664;
	// addi r11,r11,144
	ctx.r11.s64 = ctx.r11.s64 + 144;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// blt cr6,0x820bd08c
	if (ctx.cr6.lt) goto loc_820BD08C;
	// li r3,2756
	ctx.r3.s64 = 2756;
	// sth r31,18(r25)
	PPC_STORE_U16(ctx.r25.u32 + 18, ctx.r31.u16);
	// bl 0x820d4cd8
	ctx.lr = 0x820BD0BC;
	sub_820D4CD8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820bd0f4
	if (ctx.cr0.eq) goto loc_820BD0F4;
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r28,r3,4
	ctx.r28.s64 = ctx.r3.s64 + 4;
	// li r30,15
	ctx.r30.s64 = 15;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_820BD0D8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820bcba0
	ctx.lr = 0x820BD0E0;
	sub_820BCBA0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,172
	ctx.r29.s64 = ctx.r29.s64 + 172;
	// bge 0x820bd0d8
	if (!ctx.cr0.lt) goto loc_820BD0D8;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// b 0x820bd0f8
	goto loc_820BD0F8;
loc_820BD0F4:
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
loc_820BD0F8:
	// addis r9,r25,1
	ctx.r9.s64 = ctx.r25.s64 + 65536;
	// addis r10,r25,1
	ctx.r10.s64 = ctx.r25.s64 + 65536;
	// addi r9,r9,-3192
	ctx.r9.s64 = ctx.r9.s64 + -3192;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r10,r10,-4308
	ctx.r10.s64 = ctx.r10.s64 + -4308;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
loc_820BD110:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r11,172
	ctx.r11.s64 = ctx.r11.s64 + 172;
	// cmpwi cr6,r11,2752
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2752, ctx.xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// blt cr6,0x820bd110
	if (ctx.cr6.lt) goto loc_820BD110;
	// lis r3,0
	ctx.r3.s64 = 0;
	// sth r31,20(r25)
	PPC_STORE_U16(ctx.r25.u32 + 20, ctx.r31.u16);
	// ori r3,r3,36868
	ctx.r3.u64 = ctx.r3.u64 | 36868;
	// bl 0x820d4cd8
	ctx.lr = 0x820BD13C;
	sub_820D4CD8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820bd174
	if (ctx.cr0.eq) goto loc_820BD174;
	// li r11,256
	ctx.r11.s64 = 256;
	// addi r28,r3,4
	ctx.r28.s64 = ctx.r3.s64 + 4;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_820BD158:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820c2c80
	ctx.lr = 0x820BD160;
	sub_820C2C80(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,144
	ctx.r29.s64 = ctx.r29.s64 + 144;
	// bge 0x820bd158
	if (!ctx.cr0.lt) goto loc_820BD158;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// b 0x820bd178
	goto loc_820BD178;
loc_820BD174:
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
loc_820BD178:
	// addis r10,r25,1
	ctx.r10.s64 = ctx.r25.s64 + 65536;
	// addis r11,r25,1
	ctx.r11.s64 = ctx.r25.s64 + 65536;
	// addi r10,r10,-3188
	ctx.r10.s64 = ctx.r10.s64 + -3188;
	// addi r11,r11,-4244
	ctx.r11.s64 = ctx.r11.s64 + -4244;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_820BD18C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lis r8,0
	ctx.r8.s64 = 0;
	// add r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 + ctx.r9.u64;
	// ori r8,r8,36864
	ctx.r8.u64 = ctx.r8.u64 | 36864;
	// addi r31,r31,144
	ctx.r31.s64 = ctx.r31.s64 + 144;
	// cmpw cr6,r31,r8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r8.s32, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// blt cr6,0x820bd18c
	if (ctx.cr6.lt) goto loc_820BD18C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820d4c98
	ctx.lr = 0x820BD1B8;
	sub_820D4C98(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822e9924
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BD1C4"))) PPC_WEAK_FUNC(sub_820BD1C4);
PPC_FUNC_IMPL(__imp__sub_820BD1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BD1C8"))) PPC_WEAK_FUNC(sub_820BD1C8);
PPC_FUNC_IMPL(__imp__sub_820BD1C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x820BD1D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm. r11,r27,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820bd234
	if (ctx.cr0.eq) goto loc_820BD234;
	// addi r29,r31,-4
	ctx.r29.s64 = ctx.r31.s64 + -4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mulli r10,r11,112
	ctx.r10.s64 = ctx.r11.s64 * 112;
	// addic. r30,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r30.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r31,r10,r31
	ctx.r31.u64 = ctx.r10.u64 + ctx.r31.u64;
	// blt 0x820bd21c
	if (ctx.cr0.lt) goto loc_820BD21C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r28,r11,31272
	ctx.r28.s64 = ctx.r11.s64 + 31272;
loc_820BD204:
	// addi r31,r31,-112
	ctx.r31.s64 = ctx.r31.s64 + -112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// bl 0x820b9818
	ctx.lr = 0x820BD214;
	sub_820B9818(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x820bd204
	if (!ctx.cr0.lt) goto loc_820BD204;
loc_820BD21C:
	// clrlwi. r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820bd22c
	if (ctx.cr0.eq) goto loc_820BD22C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820d4d38
	ctx.lr = 0x820BD22C;
	sub_820D4D38(ctx, base);
loc_820BD22C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x820bd25c
	goto loc_820BD25C;
loc_820BD234:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,31272
	ctx.r11.s64 = ctx.r11.s64 + 31272;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x820b9818
	ctx.lr = 0x820BD248;
	sub_820B9818(ctx, base);
	// clrlwi. r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820bd258
	if (ctx.cr0.eq) goto loc_820BD258;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d4d38
	ctx.lr = 0x820BD258;
	sub_820D4D38(ctx, base);
loc_820BD258:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820BD25C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BD264"))) PPC_WEAK_FUNC(sub_820BD264);
PPC_FUNC_IMPL(__imp__sub_820BD264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BD268"))) PPC_WEAK_FUNC(sub_820BD268);
PPC_FUNC_IMPL(__imp__sub_820BD268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x820BD270;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm. r11,r27,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820bd2dc
	if (ctx.cr0.eq) goto loc_820BD2DC;
	// addi r29,r31,-4
	ctx.r29.s64 = ctx.r31.s64 + -4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mulli r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 * 48;
	// addic. r30,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r30.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r31,r10,r31
	ctx.r31.u64 = ctx.r10.u64 + ctx.r31.u64;
	// blt 0x820bd2c4
	if (ctx.cr0.lt) goto loc_820BD2C4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r28,r11,28968
	ctx.r28.s64 = ctx.r11.s64 + 28968;
loc_820BD2A4:
	// addi r31,r31,-48
	ctx.r31.s64 = ctx.r31.s64 + -48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// bl 0x820b0700
	ctx.lr = 0x820BD2B4;
	sub_820B0700(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x820b84d0
	ctx.lr = 0x820BD2BC;
	sub_820B84D0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x820bd2a4
	if (!ctx.cr0.lt) goto loc_820BD2A4;
loc_820BD2C4:
	// clrlwi. r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820bd2d4
	if (ctx.cr0.eq) goto loc_820BD2D4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820d4d38
	ctx.lr = 0x820BD2D4;
	sub_820D4D38(ctx, base);
loc_820BD2D4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x820bd30c
	goto loc_820BD30C;
loc_820BD2DC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,28968
	ctx.r11.s64 = ctx.r11.s64 + 28968;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x820b0700
	ctx.lr = 0x820BD2F0;
	sub_820B0700(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x820b84d0
	ctx.lr = 0x820BD2F8;
	sub_820B84D0(ctx, base);
	// clrlwi. r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820bd308
	if (ctx.cr0.eq) goto loc_820BD308;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d4d38
	ctx.lr = 0x820BD308;
	sub_820D4D38(ctx, base);
loc_820BD308:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820BD30C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BD314"))) PPC_WEAK_FUNC(sub_820BD314);
PPC_FUNC_IMPL(__imp__sub_820BD314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BD318"))) PPC_WEAK_FUNC(sub_820BD318);
PPC_FUNC_IMPL(__imp__sub_820BD318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x820BD320;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm. r11,r27,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820bd38c
	if (ctx.cr0.eq) goto loc_820BD38C;
	// addi r29,r31,-4
	ctx.r29.s64 = ctx.r31.s64 + -4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mulli r10,r11,136
	ctx.r10.s64 = ctx.r11.s64 * 136;
	// addic. r30,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r30.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r31,r10,r31
	ctx.r31.u64 = ctx.r10.u64 + ctx.r31.u64;
	// blt 0x820bd374
	if (ctx.cr0.lt) goto loc_820BD374;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r28,r11,31520
	ctx.r28.s64 = ctx.r11.s64 + 31520;
loc_820BD354:
	// addi r31,r31,-136
	ctx.r31.s64 = ctx.r31.s64 + -136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// bl 0x820bb7d0
	ctx.lr = 0x820BD364;
	sub_820BB7D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b9818
	ctx.lr = 0x820BD36C;
	sub_820B9818(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x820bd354
	if (!ctx.cr0.lt) goto loc_820BD354;
loc_820BD374:
	// clrlwi. r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820bd384
	if (ctx.cr0.eq) goto loc_820BD384;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820d4d38
	ctx.lr = 0x820BD384;
	sub_820D4D38(ctx, base);
loc_820BD384:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x820bd3bc
	goto loc_820BD3BC;
loc_820BD38C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,31520
	ctx.r11.s64 = ctx.r11.s64 + 31520;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x820bb7d0
	ctx.lr = 0x820BD3A0;
	sub_820BB7D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b9818
	ctx.lr = 0x820BD3A8;
	sub_820B9818(ctx, base);
	// clrlwi. r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820bd3b8
	if (ctx.cr0.eq) goto loc_820BD3B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d4d38
	ctx.lr = 0x820BD3B8;
	sub_820D4D38(ctx, base);
loc_820BD3B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820BD3BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BD3C4"))) PPC_WEAK_FUNC(sub_820BD3C4);
PPC_FUNC_IMPL(__imp__sub_820BD3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BD3C8"))) PPC_WEAK_FUNC(sub_820BD3C8);
PPC_FUNC_IMPL(__imp__sub_820BD3C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x820BD3D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm. r11,r27,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820bd43c
	if (ctx.cr0.eq) goto loc_820BD43C;
	// addi r29,r31,-4
	ctx.r29.s64 = ctx.r31.s64 + -4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mulli r10,r11,28
	ctx.r10.s64 = ctx.r11.s64 * 28;
	// addic. r30,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r30.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r31,r10,r31
	ctx.r31.u64 = ctx.r10.u64 + ctx.r31.u64;
	// blt 0x820bd424
	if (ctx.cr0.lt) goto loc_820BD424;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r28,r11,28968
	ctx.r28.s64 = ctx.r11.s64 + 28968;
loc_820BD404:
	// addi r31,r31,-28
	ctx.r31.s64 = ctx.r31.s64 + -28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// bl 0x820b0700
	ctx.lr = 0x820BD414;
	sub_820B0700(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x820b84d0
	ctx.lr = 0x820BD41C;
	sub_820B84D0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x820bd404
	if (!ctx.cr0.lt) goto loc_820BD404;
loc_820BD424:
	// clrlwi. r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820bd434
	if (ctx.cr0.eq) goto loc_820BD434;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820d4d38
	ctx.lr = 0x820BD434;
	sub_820D4D38(ctx, base);
loc_820BD434:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x820bd46c
	goto loc_820BD46C;
loc_820BD43C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,28968
	ctx.r11.s64 = ctx.r11.s64 + 28968;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x820b0700
	ctx.lr = 0x820BD450;
	sub_820B0700(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x820b84d0
	ctx.lr = 0x820BD458;
	sub_820B84D0(ctx, base);
	// clrlwi. r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820bd468
	if (ctx.cr0.eq) goto loc_820BD468;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d4d38
	ctx.lr = 0x820BD468;
	sub_820D4D38(ctx, base);
loc_820BD468:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820BD46C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BD474"))) PPC_WEAK_FUNC(sub_820BD474);
PPC_FUNC_IMPL(__imp__sub_820BD474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BD478"))) PPC_WEAK_FUNC(sub_820BD478);
PPC_FUNC_IMPL(__imp__sub_820BD478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x820BD480;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm. r11,r28,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820bd4d8
	if (ctx.cr0.eq) goto loc_820BD4D8;
	// addi r29,r30,-4
	ctx.r29.s64 = ctx.r30.s64 + -4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mulli r10,r11,36
	ctx.r10.s64 = ctx.r11.s64 * 36;
	// addic. r31,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r31.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// blt 0x820bd4c0
	if (ctx.cr0.lt) goto loc_820BD4C0;
loc_820BD4AC:
	// addi r30,r30,-36
	ctx.r30.s64 = ctx.r30.s64 + -36;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820bcaf8
	ctx.lr = 0x820BD4B8;
	sub_820BCAF8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x820bd4ac
	if (!ctx.cr0.lt) goto loc_820BD4AC;
loc_820BD4C0:
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820bd4d0
	if (ctx.cr0.eq) goto loc_820BD4D0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820d4d38
	ctx.lr = 0x820BD4D0;
	sub_820D4D38(ctx, base);
loc_820BD4D0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x820bd4f4
	goto loc_820BD4F4;
loc_820BD4D8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820bcaf8
	ctx.lr = 0x820BD4E0;
	sub_820BCAF8(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820bd4f0
	if (ctx.cr0.eq) goto loc_820BD4F0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820d4d38
	ctx.lr = 0x820BD4F0;
	sub_820D4D38(ctx, base);
loc_820BD4F0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_820BD4F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BD4FC"))) PPC_WEAK_FUNC(sub_820BD4FC);
PPC_FUNC_IMPL(__imp__sub_820BD4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BD500"))) PPC_WEAK_FUNC(sub_820BD500);
PPC_FUNC_IMPL(__imp__sub_820BD500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x820BD508;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm. r11,r27,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820bd56c
	if (ctx.cr0.eq) goto loc_820BD56C;
	// addi r29,r31,-4
	ctx.r29.s64 = ctx.r31.s64 + -4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mulli r10,r11,172
	ctx.r10.s64 = ctx.r11.s64 * 172;
	// addic. r30,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r30.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r31,r10,r31
	ctx.r31.u64 = ctx.r10.u64 + ctx.r31.u64;
	// blt 0x820bd554
	if (ctx.cr0.lt) goto loc_820BD554;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r28,r11,31904
	ctx.r28.s64 = ctx.r11.s64 + 31904;
loc_820BD53C:
	// addi r31,r31,-172
	ctx.r31.s64 = ctx.r31.s64 + -172;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// bl 0x820b9818
	ctx.lr = 0x820BD54C;
	sub_820B9818(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x820bd53c
	if (!ctx.cr0.lt) goto loc_820BD53C;
loc_820BD554:
	// clrlwi. r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820bd564
	if (ctx.cr0.eq) goto loc_820BD564;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820d4d38
	ctx.lr = 0x820BD564;
	sub_820D4D38(ctx, base);
loc_820BD564:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x820bd594
	goto loc_820BD594;
loc_820BD56C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,31904
	ctx.r11.s64 = ctx.r11.s64 + 31904;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x820b9818
	ctx.lr = 0x820BD580;
	sub_820B9818(ctx, base);
	// clrlwi. r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820bd590
	if (ctx.cr0.eq) goto loc_820BD590;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d4d38
	ctx.lr = 0x820BD590;
	sub_820D4D38(ctx, base);
loc_820BD590:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820BD594:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BD59C"))) PPC_WEAK_FUNC(sub_820BD59C);
PPC_FUNC_IMPL(__imp__sub_820BD59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BD5A0"))) PPC_WEAK_FUNC(sub_820BD5A0);
PPC_FUNC_IMPL(__imp__sub_820BD5A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,31856
	ctx.r11.s64 = ctx.r11.s64 + 31856;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x820b0700
	ctx.lr = 0x820BD5C4;
	sub_820B0700(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820bb930
	ctx.lr = 0x820BD5CC;
	sub_820BB930(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,28968
	ctx.r10.s64 = ctx.r11.s64 + 28968;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// sth r11,30(r31)
	PPC_STORE_U16(ctx.r31.u32 + 30, ctx.r11.u16);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// bl 0x820b0700
	ctx.lr = 0x820BD5F4;
	sub_820B0700(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x820b84d0
	ctx.lr = 0x820BD5FC;
	sub_820B84D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BD610"))) PPC_WEAK_FUNC(sub_820BD610);
PPC_FUNC_IMPL(__imp__sub_820BD610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x820BD618;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm. r11,r28,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820bd670
	if (ctx.cr0.eq) goto loc_820BD670;
	// addi r29,r30,-4
	ctx.r29.s64 = ctx.r30.s64 + -4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mulli r10,r11,144
	ctx.r10.s64 = ctx.r11.s64 * 144;
	// addic. r31,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r31.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// blt 0x820bd658
	if (ctx.cr0.lt) goto loc_820BD658;
loc_820BD644:
	// addi r30,r30,-144
	ctx.r30.s64 = ctx.r30.s64 + -144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820bd5a0
	ctx.lr = 0x820BD650;
	sub_820BD5A0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x820bd644
	if (!ctx.cr0.lt) goto loc_820BD644;
loc_820BD658:
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820bd668
	if (ctx.cr0.eq) goto loc_820BD668;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820d4d38
	ctx.lr = 0x820BD668;
	sub_820D4D38(ctx, base);
loc_820BD668:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x820bd68c
	goto loc_820BD68C;
loc_820BD670:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820bd5a0
	ctx.lr = 0x820BD678;
	sub_820BD5A0(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820bd688
	if (ctx.cr0.eq) goto loc_820BD688;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820d4d38
	ctx.lr = 0x820BD688;
	sub_820D4D38(ctx, base);
loc_820BD688:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_820BD68C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BD694"))) PPC_WEAK_FUNC(sub_820BD694);
PPC_FUNC_IMPL(__imp__sub_820BD694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BD698"))) PPC_WEAK_FUNC(sub_820BD698);
PPC_FUNC_IMPL(__imp__sub_820BD698) {
	PPC_FUNC_PROLOGUE();
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// rlwimi r10,r11,0,16,16
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x8000) | (ctx.r10.u64 & 0xFFFFFFFFFFFF7FFF);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwimi r9,r11,0,17,19
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x7000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF8FFF);
	// sth r10,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r10.u16);
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwimi r10,r11,0,20,20
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x800) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF7FF);
	// sth r9,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r9.u16);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwimi r9,r11,0,21,21
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x400) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFBFF);
	// sth r10,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r10.u16);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// rlwimi r10,r11,0,22,22
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x200) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFDFF);
	// sth r9,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r9.u16);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwimi r9,r11,0,23,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x100) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFEFF);
	// sth r10,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r10.u16);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// rlwimi r10,r11,0,24,24
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x80) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF7F);
	// sth r9,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r9.u16);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwimi r9,r11,0,25,25
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x40) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFBF);
	// sth r10,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r10.u16);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// rlwimi r10,r11,0,26,26
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x20) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFDF);
	// sth r9,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r9.u16);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwimi r9,r11,0,27,27
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x10) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFEF);
	// sth r10,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r10.u16);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// rlwimi r10,r11,0,28,28
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x8) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF7);
	// sth r9,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r9.u16);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwimi r9,r11,0,29,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x4) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFB);
	// sth r10,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r10.u16);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// rlwimi r10,r11,0,30,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFC);
	// sth r9,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r9.u16);
	// sth r10,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BD768"))) PPC_WEAK_FUNC(sub_820BD768);
PPC_FUNC_IMPL(__imp__sub_820BD768) {
	PPC_FUNC_PROLOGUE();
	// li r10,148
	ctx.r10.s64 = 148;
	// li r11,39
	ctx.r11.s64 = 39;
	// stw r10,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r10.u32);
	// li r10,142
	ctx.r10.s64 = 142;
	// stw r11,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// addi r11,r1,-48
	ctx.r11.s64 = ctx.r1.s64 + -48;
	// stw r10,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r10.u32);
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r10,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r10.u32);
	// li r10,11
	ctx.r10.s64 = 11;
	// stw r10,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r10.u32);
	// li r10,13
	ctx.r10.s64 = 13;
	// stw r10,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r10.u32);
	// li r10,33
	ctx.r10.s64 = 33;
	// stw r10,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r10.u32);
	// li r10,37
	ctx.r10.s64 = 37;
	// stw r10,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r10.u32);
	// li r10,48
	ctx.r10.s64 = 48;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// li r10,62
	ctx.r10.s64 = 62;
	// stw r10,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
loc_820BD7C4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x820bd7e8
	if (ctx.cr6.eq) goto loc_820BD7E8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// blt cr6,0x820bd7c4
	if (ctx.cr6.lt) goto loc_820BD7C4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820BD7E8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BD7F0"))) PPC_WEAK_FUNC(sub_820BD7F0);
PPC_FUNC_IMPL(__imp__sub_820BD7F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x820d4c58
	ctx.lr = 0x820BD810;
	sub_820D4C58(ctx, base);
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x820d4cd8
	ctx.lr = 0x820BD818;
	sub_820D4CD8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820bd82c
	if (ctx.cr0.eq) goto loc_820BD82C;
	// bl 0x820daa58
	ctx.lr = 0x820BD824;
	sub_820DAA58(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x820bd830
	goto loc_820BD830;
loc_820BD82C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820BD830:
	// lis r3,1
	ctx.r3.s64 = 65536;
	// stw r11,8536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8536, ctx.r11.u32);
	// bl 0x820d4cd8
	ctx.lr = 0x820BD83C;
	sub_820D4CD8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,12288
	ctx.r3.s64 = 12288;
	// stw r11,8540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8540, ctx.r11.u32);
	// bl 0x820d4cd8
	ctx.lr = 0x820BD84C;
	sub_820D4CD8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,12288
	ctx.r3.s64 = 12288;
	// stw r11,8544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8544, ctx.r11.u32);
	// bl 0x820d4cd8
	ctx.lr = 0x820BD85C;
	sub_820D4CD8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r3,8548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8548, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BD878;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r8,6144
	ctx.r8.s64 = 6144;
	// lwz r9,8548(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8548);
	// li r6,3072
	ctx.r6.s64 = 3072;
	// lwz r7,8544(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8544);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// lwz r5,8540(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8540);
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// bl 0x820dab78
	ctx.lr = 0x820BD89C;
	sub_820DAB78(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-31572
	ctx.r5.s64 = ctx.r11.s64 + -31572;
	// bl 0x820dab98
	ctx.lr = 0x820BD8B0;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-31576
	ctx.r5.s64 = ctx.r11.s64 + -31576;
	// bl 0x820dab98
	ctx.lr = 0x820BD8C4;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-31584
	ctx.r5.s64 = ctx.r11.s64 + -31584;
	// bl 0x820dab98
	ctx.lr = 0x820BD8D8;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-31592
	ctx.r5.s64 = ctx.r11.s64 + -31592;
	// bl 0x820dab98
	ctx.lr = 0x820BD8EC;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-31600
	ctx.r5.s64 = ctx.r11.s64 + -31600;
	// bl 0x820dab98
	ctx.lr = 0x820BD900;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-31612
	ctx.r5.s64 = ctx.r11.s64 + -31612;
	// bl 0x820dab98
	ctx.lr = 0x820BD914;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-31620
	ctx.r5.s64 = ctx.r11.s64 + -31620;
	// bl 0x820dab98
	ctx.lr = 0x820BD928;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-31628
	ctx.r5.s64 = ctx.r11.s64 + -31628;
	// bl 0x820dab98
	ctx.lr = 0x820BD93C;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,9
	ctx.r4.s64 = 9;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-31632
	ctx.r5.s64 = ctx.r11.s64 + -31632;
	// bl 0x820dab98
	ctx.lr = 0x820BD950;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,10
	ctx.r4.s64 = 10;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-31640
	ctx.r5.s64 = ctx.r11.s64 + -31640;
	// bl 0x820dab98
	ctx.lr = 0x820BD964;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// li r4,11
	ctx.r4.s64 = 11;
	// addi r5,r11,-31648
	ctx.r5.s64 = ctx.r11.s64 + -31648;
	// bl 0x820dab98
	ctx.lr = 0x820BD978;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-31656
	ctx.r5.s64 = ctx.r11.s64 + -31656;
	// bl 0x820dab98
	ctx.lr = 0x820BD98C;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,13
	ctx.r4.s64 = 13;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-31664
	ctx.r5.s64 = ctx.r11.s64 + -31664;
	// bl 0x820dab98
	ctx.lr = 0x820BD9A0;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,14
	ctx.r4.s64 = 14;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-31668
	ctx.r5.s64 = ctx.r11.s64 + -31668;
	// bl 0x820dab98
	ctx.lr = 0x820BD9B4;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,15
	ctx.r4.s64 = 15;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,9584
	ctx.r5.s64 = ctx.r11.s64 + 9584;
	// bl 0x820dab98
	ctx.lr = 0x820BD9C8;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-31672
	ctx.r5.s64 = ctx.r11.s64 + -31672;
	// bl 0x820dab98
	ctx.lr = 0x820BD9DC;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,17
	ctx.r4.s64 = 17;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-31676
	ctx.r5.s64 = ctx.r11.s64 + -31676;
	// bl 0x820dab98
	ctx.lr = 0x820BD9F0;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,18
	ctx.r4.s64 = 18;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-31680
	ctx.r5.s64 = ctx.r11.s64 + -31680;
	// bl 0x820dab98
	ctx.lr = 0x820BDA04;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,19
	ctx.r4.s64 = 19;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-31684
	ctx.r5.s64 = ctx.r11.s64 + -31684;
	// bl 0x820dab98
	ctx.lr = 0x820BDA18;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-31692
	ctx.r5.s64 = ctx.r11.s64 + -31692;
	// bl 0x820dab98
	ctx.lr = 0x820BDA2C;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,21
	ctx.r4.s64 = 21;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-31700
	ctx.r5.s64 = ctx.r11.s64 + -31700;
	// bl 0x820dab98
	ctx.lr = 0x820BDA40;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,22
	ctx.r4.s64 = 22;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-31704
	ctx.r5.s64 = ctx.r11.s64 + -31704;
	// bl 0x820dab98
	ctx.lr = 0x820BDA54;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,23
	ctx.r4.s64 = 23;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-31712
	ctx.r5.s64 = ctx.r11.s64 + -31712;
	// bl 0x820dab98
	ctx.lr = 0x820BDA68;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-31724
	ctx.r5.s64 = ctx.r11.s64 + -31724;
	// bl 0x820dab98
	ctx.lr = 0x820BDA7C;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,25
	ctx.r4.s64 = 25;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-31744
	ctx.r5.s64 = ctx.r11.s64 + -31744;
	// bl 0x820dab98
	ctx.lr = 0x820BDA90;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,26
	ctx.r4.s64 = 26;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-31760
	ctx.r5.s64 = ctx.r11.s64 + -31760;
	// bl 0x820dab98
	ctx.lr = 0x820BDAA4;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,27
	ctx.r4.s64 = 27;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-31772
	ctx.r5.s64 = ctx.r11.s64 + -31772;
	// bl 0x820dab98
	ctx.lr = 0x820BDAB8;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// li r4,28
	ctx.r4.s64 = 28;
	// addi r5,r11,-31784
	ctx.r5.s64 = ctx.r11.s64 + -31784;
	// bl 0x820dab98
	ctx.lr = 0x820BDACC;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,29
	ctx.r4.s64 = 29;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-31796
	ctx.r5.s64 = ctx.r11.s64 + -31796;
	// bl 0x820dab98
	ctx.lr = 0x820BDAE0;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,30
	ctx.r4.s64 = 30;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-31808
	ctx.r5.s64 = ctx.r11.s64 + -31808;
	// bl 0x820dab98
	ctx.lr = 0x820BDAF4;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,31
	ctx.r4.s64 = 31;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-31816
	ctx.r5.s64 = ctx.r11.s64 + -31816;
	// bl 0x820dab98
	ctx.lr = 0x820BDB08;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-31828
	ctx.r5.s64 = ctx.r11.s64 + -31828;
	// bl 0x820dab98
	ctx.lr = 0x820BDB1C;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,33
	ctx.r4.s64 = 33;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-31844
	ctx.r5.s64 = ctx.r11.s64 + -31844;
	// bl 0x820dab98
	ctx.lr = 0x820BDB30;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,34
	ctx.r4.s64 = 34;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-31856
	ctx.r5.s64 = ctx.r11.s64 + -31856;
	// bl 0x820dab98
	ctx.lr = 0x820BDB44;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,35
	ctx.r4.s64 = 35;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-31864
	ctx.r5.s64 = ctx.r11.s64 + -31864;
	// bl 0x820dab98
	ctx.lr = 0x820BDB58;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-31876
	ctx.r5.s64 = ctx.r11.s64 + -31876;
	// bl 0x820dab98
	ctx.lr = 0x820BDB6C;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,37
	ctx.r4.s64 = 37;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-31892
	ctx.r5.s64 = ctx.r11.s64 + -31892;
	// bl 0x820dab98
	ctx.lr = 0x820BDB80;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,38
	ctx.r4.s64 = 38;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-31900
	ctx.r5.s64 = ctx.r11.s64 + -31900;
	// bl 0x820dab98
	ctx.lr = 0x820BDB94;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,39
	ctx.r4.s64 = 39;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-31908
	ctx.r5.s64 = ctx.r11.s64 + -31908;
	// bl 0x820dab98
	ctx.lr = 0x820BDBA8;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,40
	ctx.r4.s64 = 40;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-31916
	ctx.r5.s64 = ctx.r11.s64 + -31916;
	// bl 0x820dab98
	ctx.lr = 0x820BDBBC;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,41
	ctx.r4.s64 = 41;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-31928
	ctx.r5.s64 = ctx.r11.s64 + -31928;
	// bl 0x820dab98
	ctx.lr = 0x820BDBD0;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,42
	ctx.r4.s64 = 42;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-31940
	ctx.r5.s64 = ctx.r11.s64 + -31940;
	// bl 0x820dab98
	ctx.lr = 0x820BDBE4;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,43
	ctx.r4.s64 = 43;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-31952
	ctx.r5.s64 = ctx.r11.s64 + -31952;
	// bl 0x820dab98
	ctx.lr = 0x820BDBF8;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-31960
	ctx.r5.s64 = ctx.r11.s64 + -31960;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// li r4,44
	ctx.r4.s64 = 44;
	// bl 0x820dab98
	ctx.lr = 0x820BDC0C;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,45
	ctx.r4.s64 = 45;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-31976
	ctx.r5.s64 = ctx.r11.s64 + -31976;
	// bl 0x820dab98
	ctx.lr = 0x820BDC20;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,46
	ctx.r4.s64 = 46;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-31992
	ctx.r5.s64 = ctx.r11.s64 + -31992;
	// bl 0x820dab98
	ctx.lr = 0x820BDC34;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,47
	ctx.r4.s64 = 47;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-32004
	ctx.r5.s64 = ctx.r11.s64 + -32004;
	// bl 0x820dab98
	ctx.lr = 0x820BDC48;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,48
	ctx.r4.s64 = 48;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-32020
	ctx.r5.s64 = ctx.r11.s64 + -32020;
	// bl 0x820dab98
	ctx.lr = 0x820BDC5C;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,49
	ctx.r4.s64 = 49;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-32032
	ctx.r5.s64 = ctx.r11.s64 + -32032;
	// bl 0x820dab98
	ctx.lr = 0x820BDC70;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,50
	ctx.r4.s64 = 50;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-32052
	ctx.r5.s64 = ctx.r11.s64 + -32052;
	// bl 0x820dab98
	ctx.lr = 0x820BDC84;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,51
	ctx.r4.s64 = 51;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-32064
	ctx.r5.s64 = ctx.r11.s64 + -32064;
	// bl 0x820dab98
	ctx.lr = 0x820BDC98;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,52
	ctx.r4.s64 = 52;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-32084
	ctx.r5.s64 = ctx.r11.s64 + -32084;
	// bl 0x820dab98
	ctx.lr = 0x820BDCAC;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,53
	ctx.r4.s64 = 53;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-32100
	ctx.r5.s64 = ctx.r11.s64 + -32100;
	// bl 0x820dab98
	ctx.lr = 0x820BDCC0;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,54
	ctx.r4.s64 = 54;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-32120
	ctx.r5.s64 = ctx.r11.s64 + -32120;
	// bl 0x820dab98
	ctx.lr = 0x820BDCD4;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,55
	ctx.r4.s64 = 55;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-32148
	ctx.r5.s64 = ctx.r11.s64 + -32148;
	// bl 0x820dab98
	ctx.lr = 0x820BDCE8;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,56
	ctx.r4.s64 = 56;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-32160
	ctx.r5.s64 = ctx.r11.s64 + -32160;
	// bl 0x820dab98
	ctx.lr = 0x820BDCFC;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,57
	ctx.r4.s64 = 57;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-32176
	ctx.r5.s64 = ctx.r11.s64 + -32176;
	// bl 0x820dab98
	ctx.lr = 0x820BDD10;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,58
	ctx.r4.s64 = 58;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-32192
	ctx.r5.s64 = ctx.r11.s64 + -32192;
	// bl 0x820dab98
	ctx.lr = 0x820BDD24;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,59
	ctx.r4.s64 = 59;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-32208
	ctx.r5.s64 = ctx.r11.s64 + -32208;
	// bl 0x820dab98
	ctx.lr = 0x820BDD38;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,-32224
	ctx.r5.s64 = ctx.r11.s64 + -32224;
	// li r4,60
	ctx.r4.s64 = 60;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// bl 0x820dab98
	ctx.lr = 0x820BDD4C;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,61
	ctx.r4.s64 = 61;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-32236
	ctx.r5.s64 = ctx.r11.s64 + -32236;
	// bl 0x820dab98
	ctx.lr = 0x820BDD60;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,62
	ctx.r4.s64 = 62;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-32248
	ctx.r5.s64 = ctx.r11.s64 + -32248;
	// bl 0x820dab98
	ctx.lr = 0x820BDD74;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,63
	ctx.r4.s64 = 63;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-32264
	ctx.r5.s64 = ctx.r11.s64 + -32264;
	// bl 0x820dab98
	ctx.lr = 0x820BDD88;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-32280
	ctx.r5.s64 = ctx.r11.s64 + -32280;
	// bl 0x820dab98
	ctx.lr = 0x820BDD9C;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,65
	ctx.r4.s64 = 65;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-32296
	ctx.r5.s64 = ctx.r11.s64 + -32296;
	// bl 0x820dab98
	ctx.lr = 0x820BDDB0;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,66
	ctx.r4.s64 = 66;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-32312
	ctx.r5.s64 = ctx.r11.s64 + -32312;
	// bl 0x820dab98
	ctx.lr = 0x820BDDC4;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,67
	ctx.r4.s64 = 67;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-32324
	ctx.r5.s64 = ctx.r11.s64 + -32324;
	// bl 0x820dab98
	ctx.lr = 0x820BDDD8;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,68
	ctx.r4.s64 = 68;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-32340
	ctx.r5.s64 = ctx.r11.s64 + -32340;
	// bl 0x820dab98
	ctx.lr = 0x820BDDEC;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,69
	ctx.r4.s64 = 69;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-32356
	ctx.r5.s64 = ctx.r11.s64 + -32356;
	// bl 0x820dab98
	ctx.lr = 0x820BDE00;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,70
	ctx.r4.s64 = 70;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-32376
	ctx.r5.s64 = ctx.r11.s64 + -32376;
	// bl 0x820dab98
	ctx.lr = 0x820BDE14;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,71
	ctx.r4.s64 = 71;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-32396
	ctx.r5.s64 = ctx.r11.s64 + -32396;
	// bl 0x820dab98
	ctx.lr = 0x820BDE28;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,72
	ctx.r4.s64 = 72;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-32412
	ctx.r5.s64 = ctx.r11.s64 + -32412;
	// bl 0x820dab98
	ctx.lr = 0x820BDE3C;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,73
	ctx.r4.s64 = 73;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-32428
	ctx.r5.s64 = ctx.r11.s64 + -32428;
	// bl 0x820dab98
	ctx.lr = 0x820BDE50;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,74
	ctx.r4.s64 = 74;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-32452
	ctx.r5.s64 = ctx.r11.s64 + -32452;
	// bl 0x820dab98
	ctx.lr = 0x820BDE64;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,75
	ctx.r4.s64 = 75;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-32480
	ctx.r5.s64 = ctx.r11.s64 + -32480;
	// bl 0x820dab98
	ctx.lr = 0x820BDE78;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,76
	ctx.r4.s64 = 76;
	// addi r5,r11,-32500
	ctx.r5.s64 = ctx.r11.s64 + -32500;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// bl 0x820dab98
	ctx.lr = 0x820BDE8C;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// li r4,77
	ctx.r4.s64 = 77;
	// addi r5,r11,-32520
	ctx.r5.s64 = ctx.r11.s64 + -32520;
	// bl 0x820dab98
	ctx.lr = 0x820BDEA0;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,78
	ctx.r4.s64 = 78;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-32540
	ctx.r5.s64 = ctx.r11.s64 + -32540;
	// bl 0x820dab98
	ctx.lr = 0x820BDEB4;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,79
	ctx.r4.s64 = 79;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-32560
	ctx.r5.s64 = ctx.r11.s64 + -32560;
	// bl 0x820dab98
	ctx.lr = 0x820BDEC8;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,80
	ctx.r4.s64 = 80;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-32580
	ctx.r5.s64 = ctx.r11.s64 + -32580;
	// bl 0x820dab98
	ctx.lr = 0x820BDEDC;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,81
	ctx.r4.s64 = 81;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-32604
	ctx.r5.s64 = ctx.r11.s64 + -32604;
	// bl 0x820dab98
	ctx.lr = 0x820BDEF0;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,82
	ctx.r4.s64 = 82;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-32620
	ctx.r5.s64 = ctx.r11.s64 + -32620;
	// bl 0x820dab98
	ctx.lr = 0x820BDF04;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,83
	ctx.r4.s64 = 83;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-32640
	ctx.r5.s64 = ctx.r11.s64 + -32640;
	// bl 0x820dab98
	ctx.lr = 0x820BDF18;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,84
	ctx.r4.s64 = 84;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-32656
	ctx.r5.s64 = ctx.r11.s64 + -32656;
	// bl 0x820dab98
	ctx.lr = 0x820BDF2C;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,85
	ctx.r4.s64 = 85;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-32672
	ctx.r5.s64 = ctx.r11.s64 + -32672;
	// bl 0x820dab98
	ctx.lr = 0x820BDF40;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,86
	ctx.r4.s64 = 86;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-32688
	ctx.r5.s64 = ctx.r11.s64 + -32688;
	// bl 0x820dab98
	ctx.lr = 0x820BDF54;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,87
	ctx.r4.s64 = 87;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-32708
	ctx.r5.s64 = ctx.r11.s64 + -32708;
	// bl 0x820dab98
	ctx.lr = 0x820BDF68;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,88
	ctx.r4.s64 = 88;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-32724
	ctx.r5.s64 = ctx.r11.s64 + -32724;
	// bl 0x820dab98
	ctx.lr = 0x820BDF7C;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,89
	ctx.r4.s64 = 89;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-32740
	ctx.r5.s64 = ctx.r11.s64 + -32740;
	// bl 0x820dab98
	ctx.lr = 0x820BDF90;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,90
	ctx.r4.s64 = 90;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-32756
	ctx.r5.s64 = ctx.r11.s64 + -32756;
	// bl 0x820dab98
	ctx.lr = 0x820BDFA4;
	sub_820DAB98(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,91
	ctx.r4.s64 = 91;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,-32768
	ctx.r5.s64 = ctx.r11.s64 + -32768;
	// bl 0x820dab98
	ctx.lr = 0x820BDFB8;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// li r4,92
	ctx.r4.s64 = 92;
	// addi r5,r11,32760
	ctx.r5.s64 = ctx.r11.s64 + 32760;
	// bl 0x820dab98
	ctx.lr = 0x820BDFCC;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,93
	ctx.r4.s64 = 93;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,32748
	ctx.r5.s64 = ctx.r11.s64 + 32748;
	// bl 0x820dab98
	ctx.lr = 0x820BDFE0;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,94
	ctx.r4.s64 = 94;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,32740
	ctx.r5.s64 = ctx.r11.s64 + 32740;
	// bl 0x820dab98
	ctx.lr = 0x820BDFF4;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,95
	ctx.r4.s64 = 95;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,32728
	ctx.r5.s64 = ctx.r11.s64 + 32728;
	// bl 0x820dab98
	ctx.lr = 0x820BE008;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,96
	ctx.r4.s64 = 96;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,32720
	ctx.r5.s64 = ctx.r11.s64 + 32720;
	// bl 0x820dab98
	ctx.lr = 0x820BE01C;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,97
	ctx.r4.s64 = 97;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,32704
	ctx.r5.s64 = ctx.r11.s64 + 32704;
	// bl 0x820dab98
	ctx.lr = 0x820BE030;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,98
	ctx.r4.s64 = 98;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,32696
	ctx.r5.s64 = ctx.r11.s64 + 32696;
	// bl 0x820dab98
	ctx.lr = 0x820BE044;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,99
	ctx.r4.s64 = 99;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,32688
	ctx.r5.s64 = ctx.r11.s64 + 32688;
	// bl 0x820dab98
	ctx.lr = 0x820BE058;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,100
	ctx.r4.s64 = 100;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,32680
	ctx.r5.s64 = ctx.r11.s64 + 32680;
	// bl 0x820dab98
	ctx.lr = 0x820BE06C;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,101
	ctx.r4.s64 = 101;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,32676
	ctx.r5.s64 = ctx.r11.s64 + 32676;
	// bl 0x820dab98
	ctx.lr = 0x820BE080;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,102
	ctx.r4.s64 = 102;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,32672
	ctx.r5.s64 = ctx.r11.s64 + 32672;
	// bl 0x820dab98
	ctx.lr = 0x820BE094;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,103
	ctx.r4.s64 = 103;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,32668
	ctx.r5.s64 = ctx.r11.s64 + 32668;
	// bl 0x820dab98
	ctx.lr = 0x820BE0A8;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,104
	ctx.r4.s64 = 104;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,32660
	ctx.r5.s64 = ctx.r11.s64 + 32660;
	// bl 0x820dab98
	ctx.lr = 0x820BE0BC;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,105
	ctx.r4.s64 = 105;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,32652
	ctx.r5.s64 = ctx.r11.s64 + 32652;
	// bl 0x820dab98
	ctx.lr = 0x820BE0D0;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,106
	ctx.r4.s64 = 106;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,32636
	ctx.r5.s64 = ctx.r11.s64 + 32636;
	// bl 0x820dab98
	ctx.lr = 0x820BE0E4;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,107
	ctx.r4.s64 = 107;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,32620
	ctx.r5.s64 = ctx.r11.s64 + 32620;
	// bl 0x820dab98
	ctx.lr = 0x820BE0F8;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,108
	ctx.r4.s64 = 108;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,32612
	ctx.r5.s64 = ctx.r11.s64 + 32612;
	// bl 0x820dab98
	ctx.lr = 0x820BE10C;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// li r4,109
	ctx.r4.s64 = 109;
	// addi r5,r11,32600
	ctx.r5.s64 = ctx.r11.s64 + 32600;
	// bl 0x820dab98
	ctx.lr = 0x820BE120;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,110
	ctx.r4.s64 = 110;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,32592
	ctx.r5.s64 = ctx.r11.s64 + 32592;
	// bl 0x820dab98
	ctx.lr = 0x820BE134;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,111
	ctx.r4.s64 = 111;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,32584
	ctx.r5.s64 = ctx.r11.s64 + 32584;
	// bl 0x820dab98
	ctx.lr = 0x820BE148;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,112
	ctx.r4.s64 = 112;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,32572
	ctx.r5.s64 = ctx.r11.s64 + 32572;
	// bl 0x820dab98
	ctx.lr = 0x820BE15C;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,113
	ctx.r4.s64 = 113;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,32564
	ctx.r5.s64 = ctx.r11.s64 + 32564;
	// bl 0x820dab98
	ctx.lr = 0x820BE170;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,114
	ctx.r4.s64 = 114;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,32548
	ctx.r5.s64 = ctx.r11.s64 + 32548;
	// bl 0x820dab98
	ctx.lr = 0x820BE184;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,115
	ctx.r4.s64 = 115;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,32540
	ctx.r5.s64 = ctx.r11.s64 + 32540;
	// bl 0x820dab98
	ctx.lr = 0x820BE198;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,116
	ctx.r4.s64 = 116;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,32528
	ctx.r5.s64 = ctx.r11.s64 + 32528;
	// bl 0x820dab98
	ctx.lr = 0x820BE1AC;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,117
	ctx.r4.s64 = 117;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,32520
	ctx.r5.s64 = ctx.r11.s64 + 32520;
	// bl 0x820dab98
	ctx.lr = 0x820BE1C0;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,118
	ctx.r4.s64 = 118;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,32504
	ctx.r5.s64 = ctx.r11.s64 + 32504;
	// bl 0x820dab98
	ctx.lr = 0x820BE1D4;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,119
	ctx.r4.s64 = 119;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,32492
	ctx.r5.s64 = ctx.r11.s64 + 32492;
	// bl 0x820dab98
	ctx.lr = 0x820BE1E8;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,120
	ctx.r4.s64 = 120;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,32476
	ctx.r5.s64 = ctx.r11.s64 + 32476;
	// bl 0x820dab98
	ctx.lr = 0x820BE1FC;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,121
	ctx.r4.s64 = 121;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,32464
	ctx.r5.s64 = ctx.r11.s64 + 32464;
	// bl 0x820dab98
	ctx.lr = 0x820BE210;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,122
	ctx.r4.s64 = 122;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,32456
	ctx.r5.s64 = ctx.r11.s64 + 32456;
	// bl 0x820dab98
	ctx.lr = 0x820BE224;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,123
	ctx.r4.s64 = 123;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,32448
	ctx.r5.s64 = ctx.r11.s64 + 32448;
	// bl 0x820dab98
	ctx.lr = 0x820BE238;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,124
	ctx.r4.s64 = 124;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,32440
	ctx.r5.s64 = ctx.r11.s64 + 32440;
	// bl 0x820dab98
	ctx.lr = 0x820BE24C;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r11,32432
	ctx.r5.s64 = ctx.r11.s64 + 32432;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// li r4,125
	ctx.r4.s64 = 125;
	// bl 0x820dab98
	ctx.lr = 0x820BE260;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,126
	ctx.r4.s64 = 126;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,32424
	ctx.r5.s64 = ctx.r11.s64 + 32424;
	// bl 0x820dab98
	ctx.lr = 0x820BE274;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,127
	ctx.r4.s64 = 127;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,32416
	ctx.r5.s64 = ctx.r11.s64 + 32416;
	// bl 0x820dab98
	ctx.lr = 0x820BE288;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,128
	ctx.r4.s64 = 128;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,32408
	ctx.r5.s64 = ctx.r11.s64 + 32408;
	// bl 0x820dab98
	ctx.lr = 0x820BE29C;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,129
	ctx.r4.s64 = 129;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,32392
	ctx.r5.s64 = ctx.r11.s64 + 32392;
	// bl 0x820dab98
	ctx.lr = 0x820BE2B0;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,130
	ctx.r4.s64 = 130;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,32388
	ctx.r5.s64 = ctx.r11.s64 + 32388;
	// bl 0x820dab98
	ctx.lr = 0x820BE2C4;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,131
	ctx.r4.s64 = 131;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,32380
	ctx.r5.s64 = ctx.r11.s64 + 32380;
	// bl 0x820dab98
	ctx.lr = 0x820BE2D8;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,132
	ctx.r4.s64 = 132;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,32372
	ctx.r5.s64 = ctx.r11.s64 + 32372;
	// bl 0x820dab98
	ctx.lr = 0x820BE2EC;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,133
	ctx.r4.s64 = 133;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,32364
	ctx.r5.s64 = ctx.r11.s64 + 32364;
	// bl 0x820dab98
	ctx.lr = 0x820BE300;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,134
	ctx.r4.s64 = 134;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,32360
	ctx.r5.s64 = ctx.r11.s64 + 32360;
	// bl 0x820dab98
	ctx.lr = 0x820BE314;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,135
	ctx.r4.s64 = 135;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,32356
	ctx.r5.s64 = ctx.r11.s64 + 32356;
	// bl 0x820dab98
	ctx.lr = 0x820BE328;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,136
	ctx.r4.s64 = 136;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,32352
	ctx.r5.s64 = ctx.r11.s64 + 32352;
	// bl 0x820dab98
	ctx.lr = 0x820BE33C;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,137
	ctx.r4.s64 = 137;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,32348
	ctx.r5.s64 = ctx.r11.s64 + 32348;
	// bl 0x820dab98
	ctx.lr = 0x820BE350;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,138
	ctx.r4.s64 = 138;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,24320
	ctx.r5.s64 = ctx.r11.s64 + 24320;
	// bl 0x820dab98
	ctx.lr = 0x820BE364;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,139
	ctx.r4.s64 = 139;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,32344
	ctx.r5.s64 = ctx.r11.s64 + 32344;
	// bl 0x820dab98
	ctx.lr = 0x820BE378;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,140
	ctx.r4.s64 = 140;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,32340
	ctx.r5.s64 = ctx.r11.s64 + 32340;
	// bl 0x820dab98
	ctx.lr = 0x820BE38C;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r11,32336
	ctx.r5.s64 = ctx.r11.s64 + 32336;
	// li r4,141
	ctx.r4.s64 = 141;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// bl 0x820dab98
	ctx.lr = 0x820BE3A0;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,142
	ctx.r4.s64 = 142;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,32332
	ctx.r5.s64 = ctx.r11.s64 + 32332;
	// bl 0x820dab98
	ctx.lr = 0x820BE3B4;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,143
	ctx.r4.s64 = 143;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,32324
	ctx.r5.s64 = ctx.r11.s64 + 32324;
	// bl 0x820dab98
	ctx.lr = 0x820BE3C8;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,144
	ctx.r4.s64 = 144;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,32316
	ctx.r5.s64 = ctx.r11.s64 + 32316;
	// bl 0x820dab98
	ctx.lr = 0x820BE3DC;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,145
	ctx.r4.s64 = 145;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,32312
	ctx.r5.s64 = ctx.r11.s64 + 32312;
	// bl 0x820dab98
	ctx.lr = 0x820BE3F0;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,146
	ctx.r4.s64 = 146;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,32304
	ctx.r5.s64 = ctx.r11.s64 + 32304;
	// bl 0x820dab98
	ctx.lr = 0x820BE404;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,147
	ctx.r4.s64 = 147;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,32296
	ctx.r5.s64 = ctx.r11.s64 + 32296;
	// bl 0x820dab98
	ctx.lr = 0x820BE418;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,148
	ctx.r4.s64 = 148;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,32288
	ctx.r5.s64 = ctx.r11.s64 + 32288;
	// bl 0x820dab98
	ctx.lr = 0x820BE42C;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,149
	ctx.r4.s64 = 149;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,32280
	ctx.r5.s64 = ctx.r11.s64 + 32280;
	// bl 0x820dab98
	ctx.lr = 0x820BE440;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,150
	ctx.r4.s64 = 150;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,32272
	ctx.r5.s64 = ctx.r11.s64 + 32272;
	// bl 0x820dab98
	ctx.lr = 0x820BE454;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,151
	ctx.r4.s64 = 151;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,32268
	ctx.r5.s64 = ctx.r11.s64 + 32268;
	// bl 0x820dab98
	ctx.lr = 0x820BE468;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,152
	ctx.r4.s64 = 152;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,32264
	ctx.r5.s64 = ctx.r11.s64 + 32264;
	// bl 0x820dab98
	ctx.lr = 0x820BE47C;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,153
	ctx.r4.s64 = 153;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,32260
	ctx.r5.s64 = ctx.r11.s64 + 32260;
	// bl 0x820dab98
	ctx.lr = 0x820BE490;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,154
	ctx.r4.s64 = 154;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,32252
	ctx.r5.s64 = ctx.r11.s64 + 32252;
	// bl 0x820dab98
	ctx.lr = 0x820BE4A4;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,155
	ctx.r4.s64 = 155;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,30520
	ctx.r5.s64 = ctx.r11.s64 + 30520;
	// bl 0x820dab98
	ctx.lr = 0x820BE4B8;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,156
	ctx.r4.s64 = 156;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,32236
	ctx.r5.s64 = ctx.r11.s64 + 32236;
	// bl 0x820dab98
	ctx.lr = 0x820BE4CC;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,157
	ctx.r4.s64 = 157;
	// addi r5,r11,32212
	ctx.r5.s64 = ctx.r11.s64 + 32212;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// bl 0x820dab98
	ctx.lr = 0x820BE4E0;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// li r4,158
	ctx.r4.s64 = 158;
	// addi r5,r11,32188
	ctx.r5.s64 = ctx.r11.s64 + 32188;
	// bl 0x820dab98
	ctx.lr = 0x820BE4F4;
	sub_820DAB98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,159
	ctx.r4.s64 = 159;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// addi r5,r11,32164
	ctx.r5.s64 = ctx.r11.s64 + 32164;
	// bl 0x820dab98
	ctx.lr = 0x820BE508;
	sub_820DAB98(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,8536(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BE520;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820d4c98
	ctx.lr = 0x820BE528;
	sub_820D4C98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BE53C"))) PPC_WEAK_FUNC(sub_820BE53C);
PPC_FUNC_IMPL(__imp__sub_820BE53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BE540"))) PPC_WEAK_FUNC(sub_820BE540);
PPC_FUNC_IMPL(__imp__sub_820BE540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98d8
	ctx.lr = 0x820BE548;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x820b3890
	ctx.lr = 0x820BE564;
	sub_820B3890(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x820b6130
	ctx.lr = 0x820BE574;
	sub_820B6130(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BE588;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x820be704
	if (ctx.cr0.eq) goto loc_820BE704;
loc_820BE594:
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r10,44(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// xori r27,r11,1
	ctx.r27.u64 = ctx.r11.u64 ^ 1;
	// lbz r11,82(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 82);
	// rlwinm r29,r11,25,7,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820BE5C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820be5f8
	if (ctx.cr0.eq) goto loc_820BE5F8;
	// lbz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 128);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820be6f8
	if (ctx.cr0.eq) goto loc_820BE6F8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BE5EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x820be608
	if (!ctx.cr0.eq) goto loc_820BE608;
	// b 0x820be6f8
	goto loc_820BE6F8;
loc_820BE5F8:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x820be608
	if (ctx.cr6.eq) goto loc_820BE608;
	// cmplw cr6,r26,r30
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x820be6f8
	if (!ctx.cr6.eq) goto loc_820BE6F8;
loc_820BE608:
	// lbz r11,82(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 82);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820be6f8
	if (ctx.cr0.eq) goto loc_820BE6F8;
	// lwz r11,6728(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6728);
	// clrlwi. r28,r29,24
	ctx.r28.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r11,1618
	ctx.r9.s64 = ctx.r11.s64 + 1618;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,6728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6728, ctx.r11.u32);
	// stwx r10,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r10.u32);
	// beq 0x820be650
	if (ctx.cr0.eq) goto loc_820BE650;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820b3890
	ctx.lr = 0x820BE640;
	sub_820B3890(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x820b6130
	ctx.lr = 0x820BE650;
	sub_820B6130(ctx, base);
loc_820BE650:
	// clrlwi. r29,r27,24
	ctx.r29.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x820be66c
	if (ctx.cr0.eq) goto loc_820BE66C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820b3be8
	ctx.lr = 0x820BE660;
	sub_820B3BE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b6230
	ctx.lr = 0x820BE66C;
	sub_820B6230(ctx, base);
loc_820BE66C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BE690;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820be6a4
	if (ctx.cr6.eq) goto loc_820BE6A4;
	// lwz r11,8400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8400);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8400, ctx.r11.u32);
loc_820BE6A4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820be6b8
	if (ctx.cr6.eq) goto loc_820BE6B8;
	// lwz r11,7884(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7884);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,7884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7884, ctx.r11.u32);
loc_820BE6B8:
	// lwz r11,6728(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6728);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm. r9,r3,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,1618
	ctx.r11.s64 = ctx.r11.s64 + 1618;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,6728(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6728);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,6728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6728, ctx.r11.u32);
	// bne 0x820be704
	if (!ctx.cr0.eq) goto loc_820BE704;
	// rlwinm. r11,r3,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x820be704
	if (!ctx.cr0.eq) goto loc_820BE704;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x820be6f8
	if (ctx.cr6.eq) goto loc_820BE6F8;
	// cmplw cr6,r26,r30
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x820be704
	if (ctx.cr6.eq) goto loc_820BE704;
loc_820BE6F8:
	// lwz r30,84(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x820be594
	if (!ctx.cr6.eq) goto loc_820BE594;
loc_820BE704:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BE718;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,7884(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7884);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,7884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7884, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822e9928
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BE72C"))) PPC_WEAK_FUNC(sub_820BE72C);
PPC_FUNC_IMPL(__imp__sub_820BE72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BE730"))) PPC_WEAK_FUNC(sub_820BE730);
PPC_FUNC_IMPL(__imp__sub_820BE730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x820d4c58
	ctx.lr = 0x820BE754;
	sub_820D4C58(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// lbz r11,8602(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8602);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r30,8600(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8600, ctx.r30.u8);
	// bne 0x820be784
	if (!ctx.cr0.eq) goto loc_820BE784;
	// addi r4,r31,8604
	ctx.r4.s64 = ctx.r31.s64 + 8604;
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x820c1ee8
	ctx.lr = 0x820BE774;
	sub_820C1EE8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820be7c0
	if (ctx.cr0.eq) goto loc_820BE7C0;
	// stb r30,8602(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8602, ctx.r30.u8);
	// b 0x820be7c0
	goto loc_820BE7C0;
loc_820BE784:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lwz r3,9792(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9792);
	// bl 0x820e1c18
	ctx.lr = 0x820BE790;
	sub_820E1C18(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820be7c0
	if (ctx.cr0.eq) goto loc_820BE7C0;
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BE7AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x820b62a8
	ctx.lr = 0x820BE7B0;
	sub_820B62A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r30,8601(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8601, ctx.r30.u8);
	// stb r11,8600(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8600, ctx.r11.u8);
	// stb r11,8602(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8602, ctx.r11.u8);
loc_820BE7C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820d4c98
	ctx.lr = 0x820BE7C8;
	sub_820D4C98(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BE7E0"))) PPC_WEAK_FUNC(sub_820BE7E0);
PPC_FUNC_IMPL(__imp__sub_820BE7E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_820BE7F4"))) PPC_WEAK_FUNC(sub_820BE7F4);
PPC_FUNC_IMPL(__imp__sub_820BE7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BE7F8"))) PPC_WEAK_FUNC(sub_820BE7F8);
PPC_FUNC_IMPL(__imp__sub_820BE7F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// stw r4,184(r11)
	PPC_STORE_U32(ctx.r11.u32 + 184, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BE80C"))) PPC_WEAK_FUNC(sub_820BE80C);
PPC_FUNC_IMPL(__imp__sub_820BE80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BE810"))) PPC_WEAK_FUNC(sub_820BE810);
PPC_FUNC_IMPL(__imp__sub_820BE810) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// lwz r3,184(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BE81C"))) PPC_WEAK_FUNC(sub_820BE81C);
PPC_FUNC_IMPL(__imp__sub_820BE81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BE820"))) PPC_WEAK_FUNC(sub_820BE820);
PPC_FUNC_IMPL(__imp__sub_820BE820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stfs f1,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stfs f2,96(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lwz r11,10676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10676);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,8628
	ctx.r3.s64 = ctx.r11.s64 + 8628;
	// bl 0x822e9960
	ctx.lr = 0x820BE880;
	sub_822E9960(ctx, base);
	// lwz r11,10676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10676);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,10676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10676, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BE8A0"))) PPC_WEAK_FUNC(sub_820BE8A0);
PPC_FUNC_IMPL(__imp__sub_820BE8A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stfs f1,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stfs f2,96(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// lwz r11,10676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10676);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,8628
	ctx.r3.s64 = ctx.r11.s64 + 8628;
	// bl 0x822e9960
	ctx.lr = 0x820BE8FC;
	sub_822E9960(ctx, base);
	// lwz r11,10676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10676);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,10676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10676, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BE91C"))) PPC_WEAK_FUNC(sub_820BE91C);
PPC_FUNC_IMPL(__imp__sub_820BE91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BE920"))) PPC_WEAK_FUNC(sub_820BE920);
PPC_FUNC_IMPL(__imp__sub_820BE920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x820BE928;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,9792(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9792);
	// bl 0x820e1690
	ctx.lr = 0x820BE958;
	sub_820E1690(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820bea64
	if (ctx.cr0.eq) goto loc_820BEA64;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lwz r3,9752(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9752);
	// bl 0x820bc020
	ctx.lr = 0x820BE96C;
	sub_820BC020(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8209e2d8
	ctx.lr = 0x820BE978;
	sub_8209E2D8(ctx, base);
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x820d4cd8
	ctx.lr = 0x820BE980;
	sub_820D4CD8(ctx, base);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// clrlwi r7,r29,16
	ctx.r7.u64 = ctx.r29.u32 & 0xFFFF;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r28,84
	ctx.r3.s64 = ctx.r28.s64 + 84;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stw r8,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r7,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r7.u32);
	// stw r9,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r9.u32);
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// stw r31,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r31.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r10.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r11.u32);
	// sth r29,76(r30)
	PPC_STORE_U16(ctx.r30.u32 + 76, ctx.r29.u16);
	// bl 0x820b4e80
	ctx.lr = 0x820BEA28;
	sub_820B4E80(ctx, base);
	// lwz r11,112(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x820bea40
	if (!ctx.cr0.eq) goto loc_820BEA40;
	// stw r31,112(r28)
	PPC_STORE_U32(ctx.r28.u32 + 112, ctx.r31.u32);
	// b 0x820bea50
	goto loc_820BEA50;
loc_820BEA3C:
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
loc_820BEA40:
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820bea3c
	if (!ctx.cr6.eq) goto loc_820BEA3C;
	// stw r31,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r31.u32);
loc_820BEA50:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8209e2d8
	ctx.lr = 0x820BEA5C;
	sub_8209E2D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820bea7c
	goto loc_820BEA7C;
loc_820BEA64:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// clrlwi r5,r29,16
	ctx.r5.u64 = ctx.r29.u32 & 0xFFFF;
	// addi r3,r11,-31564
	ctx.r3.s64 = ctx.r11.s64 + -31564;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821313e0
	ctx.lr = 0x820BEA78;
	sub_821313E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_820BEA7C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BEA84"))) PPC_WEAK_FUNC(sub_820BEA84);
PPC_FUNC_IMPL(__imp__sub_820BEA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BEA88"))) PPC_WEAK_FUNC(sub_820BEA88);
PPC_FUNC_IMPL(__imp__sub_820BEA88) {
	PPC_FUNC_PROLOGUE();
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BEA90"))) PPC_WEAK_FUNC(sub_820BEA90);
PPC_FUNC_IMPL(__imp__sub_820BEA90) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lbz r10,8600(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8600);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lbz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lbz r7,1(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// li r9,255
	ctx.r9.s64 = 255;
	// lbz r6,2(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// stb r7,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r7.u8);
	// stb r6,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r6.u8);
	// stb r9,107(r11)
	PPC_STORE_U8(ctx.r11.u32 + 107, ctx.r9.u8);
	// lbz r10,-14(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + -14);
	// lbz r9,-15(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + -15);
	// lbz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + -16);
	// stb r10,104(r11)
	PPC_STORE_U8(ctx.r11.u32 + 104, ctx.r10.u8);
	// stb r9,105(r11)
	PPC_STORE_U8(ctx.r11.u32 + 105, ctx.r9.u8);
	// stb r8,106(r11)
	PPC_STORE_U8(ctx.r11.u32 + 106, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BEAE4"))) PPC_WEAK_FUNC(sub_820BEAE4);
PPC_FUNC_IMPL(__imp__sub_820BEAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BEAE8"))) PPC_WEAK_FUNC(sub_820BEAE8);
PPC_FUNC_IMPL(__imp__sub_820BEAE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4924(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4924);
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// stwx r4,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r4.u32);
	// lwz r11,4924(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4924);
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r5,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r5.u32);
	// lwz r11,4924(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4924);
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// sth r6,128(r11)
	PPC_STORE_U16(ctx.r11.u32 + 128, ctx.r6.u16);
	// lwz r11,4924(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4924);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,400
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 400, ctx.xer);
	// stw r11,4924(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4924, ctx.r11.u32);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4924(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4924, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BEB38"))) PPC_WEAK_FUNC(sub_820BEB38);
PPC_FUNC_IMPL(__imp__sub_820BEB38) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_820BEB54"))) PPC_WEAK_FUNC(sub_820BEB54);
PPC_FUNC_IMPL(__imp__sub_820BEB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BEB58"))) PPC_WEAK_FUNC(sub_820BEB58);
PPC_FUNC_IMPL(__imp__sub_820BEB58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r11.u8);
	// lwz r3,80(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BEB88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8536(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8536);
	// stw r11,8536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8536, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BEBA4"))) PPC_WEAK_FUNC(sub_820BEBA4);
PPC_FUNC_IMPL(__imp__sub_820BEBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BEBA8"))) PPC_WEAK_FUNC(sub_820BEBA8);
PPC_FUNC_IMPL(__imp__sub_820BEBA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x820BEBB0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-31448
	ctx.r30.s64 = ctx.r11.s64 + -31448;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821313e0
	ctx.lr = 0x820BEBC8;
	sub_821313E0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-31468
	ctx.r3.s64 = ctx.r11.s64 + -31468;
	// bl 0x821313e0
	ctx.lr = 0x820BEBD4;
	sub_821313E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821313e0
	ctx.lr = 0x820BEBDC;
	sub_821313E0(ctx, base);
	// lwz r30,6464(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6464);
	// lwz r11,6468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6468);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820bec98
	if (ctx.cr6.eq) goto loc_820BEC98;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r28,r10,-31512
	ctx.r28.s64 = ctx.r10.s64 + -31512;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r27,r10,28700
	ctx.r27.s64 = ctx.r10.s64 + 28700;
loc_820BEBFC:
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r29,4928(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4928);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BEC1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820bec4c
	if (ctx.cr0.eq) goto loc_820BEC4C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BEC38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// bl 0x820dab58
	ctx.lr = 0x820BEC44;
	sub_820DAB58(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x820bec50
	goto loc_820BEC50;
loc_820BEC4C:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
loc_820BEC50:
	// lwz r11,6468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6468);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r10,r11,411
	ctx.r10.s64 = ctx.r11.s64 + 411;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// lwzx r6,r10,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lhz r7,4936(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4936);
	// bl 0x820ad500
	ctx.lr = 0x820BEC78;
	sub_820AD500(ctx, base);
	// bl 0x821313e0
	ctx.lr = 0x820BEC7C;
	sub_821313E0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,128
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 128, ctx.xer);
	// bne cr6,0x820bec8c
	if (!ctx.cr6.eq) goto loc_820BEC8C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_820BEC8C:
	// lwz r11,6468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6468);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x820bebfc
	if (!ctx.cr6.eq) goto loc_820BEBFC;
loc_820BEC98:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BECA0"))) PPC_WEAK_FUNC(sub_820BECA0);
PPC_FUNC_IMPL(__imp__sub_820BECA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e0
	ctx.lr = 0x820BECA8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,37
	ctx.r3.s64 = 37;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x820d4c58
	ctx.lr = 0x820BECC4;
	sub_820D4C58(ctx, base);
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// ble cr6,0x820bed58
	if (!ctx.cr6.gt) goto loc_820BED58;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r10,8191
	ctx.r10.s64 = 536805376;
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// ble cr6,0x820bed04
	if (!ctx.cr6.gt) goto loc_820BED04;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_820BED04:
	// bl 0x820d4cd8
	ctx.lr = 0x820BED08;
	sub_820D4CD8(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// beq cr6,0x820bed58
	if (ctx.cr6.eq) goto loc_820BED58;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820bed50
	if (ctx.cr6.eq) goto loc_820BED50;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_820BED24:
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lhz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// sthx r7,r8,r11
	PPC_STORE_U16(ctx.r8.u32 + ctx.r11.u32, ctx.r7.u16);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// bne 0x820bed24
	if (!ctx.cr0.eq) goto loc_820BED24;
loc_820BED50:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820d4d38
	ctx.lr = 0x820BED58;
	sub_820D4D38(ctx, base);
loc_820BED58:
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820bedb0
	if (ctx.cr6.eq) goto loc_820BEDB0;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
loc_820BED70:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// lhzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r5,r7
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x820beda4
	if (!ctx.cr6.gt) goto loc_820BEDA4;
	// sthx r9,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u16);
	// clrlwi r7,r5,16
	ctx.r7.u64 = ctx.r5.u32 & 0xFFFF;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
loc_820BEDA4:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x820bed70
	if (!ctx.cr0.eq) goto loc_820BED70;
loc_820BEDB0:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r28,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// sthx r9,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u16);
	// bl 0x820d4c98
	ctx.lr = 0x820BEDD0;
	sub_820D4C98(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e9930
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BEDD8"))) PPC_WEAK_FUNC(sub_820BEDD8);
PPC_FUNC_IMPL(__imp__sub_820BEDD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e0
	ctx.lr = 0x820BEDE0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,14
	ctx.r3.s64 = 14;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x820d4c58
	ctx.lr = 0x820BEDFC;
	sub_820D4C58(ctx, base);
	// addi r29,r31,64
	ctx.r29.s64 = ctx.r31.s64 + 64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820b0620
	ctx.lr = 0x820BEE0C;
	sub_820B0620(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x820bee54
	if (ctx.cr0.eq) goto loc_820BEE54;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r27,r11,16
	ctx.r27.u64 = ctx.r11.u32 & 0xFFFF;
	// mr. r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820bee98
	if (ctx.cr0.eq) goto loc_820BEE98;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_820BEE34:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x820beea8
	if (ctx.cr6.eq) goto loc_820BEEA8;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x820bee34
	if (ctx.cr6.lt) goto loc_820BEE34;
	// b 0x820bee98
	goto loc_820BEE98;
loc_820BEE54:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x820d4cd8
	ctx.lr = 0x820BEE5C;
	sub_820D4CD8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820bee84
	if (ctx.cr0.eq) goto loc_820BEE84;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r28.u32);
	// stb r28,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r28.u8);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// b 0x820bee88
	goto loc_820BEE88;
loc_820BEE84:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_820BEE88:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820beca0
	ctx.lr = 0x820BEE98;
	sub_820BECA0(ctx, base);
loc_820BEE98:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820beca0
	ctx.lr = 0x820BEEA8;
	sub_820BECA0(ctx, base);
loc_820BEEA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820d4c98
	ctx.lr = 0x820BEEB0;
	sub_820D4C98(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e9930
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BEEB8"))) PPC_WEAK_FUNC(sub_820BEEB8);
PPC_FUNC_IMPL(__imp__sub_820BEEB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98dc
	ctx.lr = 0x820BEEC0;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r25,1
	ctx.r11.s64 = ctx.r25.s64 + 1;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lbz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// xor r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// rlwinm. r6,r8,0,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// beq 0x820bef74
	if (ctx.cr0.eq) goto loc_820BEF74;
	// clrlwi. r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r10,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r10.u8);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r10,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r10.u8);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r10,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r10.u8);
	// beq 0x820bef6c
	if (ctx.cr0.eq) goto loc_820BEF6C;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r10,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r10.u8);
	// b 0x820bef74
	goto loc_820BEF74;
loc_820BEF6C:
	// li r9,255
	ctx.r9.s64 = 255;
	// stb r9,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r9.u8);
loc_820BEF74:
	// clrlwi. r10,r8,31
	ctx.r10.u64 = ctx.r8.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820befc0
	if (ctx.cr0.eq) goto loc_820BEFC0;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// xor r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// sth r10,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r10.u16);
loc_820BEFC0:
	// rlwinm. r10,r8,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820bf00c
	if (ctx.cr0.eq) goto loc_820BF00C;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// xor r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// sth r10,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r10.u16);
loc_820BF00C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r26,r11,1
	ctx.r26.s64 = ctx.r11.s64 + 1;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// xor r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// sth r10,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r10.u16);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r10,14(r31)
	PPC_STORE_U8(ctx.r31.u32 + 14, ctx.r10.u8);
	// beq 0x820bf06c
	if (ctx.cr0.eq) goto loc_820BF06C;
	// bl 0x820d4d38
	ctx.lr = 0x820BF06C;
	sub_820D4D38(ctx, base);
loc_820BF06C:
	// lbz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 14);
	// rotlwi r3,r11,3
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// bl 0x820d4cd8
	ctx.lr = 0x820BF078;
	sub_820D4CD8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,8
	ctx.r9.s64 = 8;
	// lbz r10,14(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 14);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// beq 0x820bf110
	if (ctx.cr0.eq) goto loc_820BF110;
	// clrlwi r28,r30,24
	ctx.r28.u64 = ctx.r30.u32 & 0xFF;
	// clrlwi r27,r27,24
	ctx.r27.u64 = ctx.r27.u32 & 0xFF;
	// li r30,0
	ctx.r30.s64 = 0;
loc_820BF0A8:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x820c2e30
	ctx.lr = 0x820BF0BC;
	sub_820C2E30(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stwx r10,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r10.u32);
	// bl 0x820c2e30
	ctx.lr = 0x820BF0DC;
	sub_820C2E30(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// lbz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 14);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820bf0a8
	if (ctx.cr6.lt) goto loc_820BF0A8;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bge cr6,0x820bf110
	if (!ctx.cr6.lt) goto loc_820BF110;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_820BF110:
	// subf r11,r25,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r25.s64;
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822e992c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BF120"))) PPC_WEAK_FUNC(sub_820BF120);
PPC_FUNC_IMPL(__imp__sub_820BF120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r3,142(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 142);
	// bl 0x820bd768
	ctx.lr = 0x820BF140;
	sub_820BD768(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820bf188
	if (ctx.cr0.eq) goto loc_820BF188;
	// lhz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 140);
	// ori r11,r11,16320
	ctx.r11.u64 = ctx.r11.u64 | 16320;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// rlwinm r10,r11,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
loc_820BF188:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BF19C"))) PPC_WEAK_FUNC(sub_820BF19C);
PPC_FUNC_IMPL(__imp__sub_820BF19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BF1A0"))) PPC_WEAK_FUNC(sub_820BF1A0);
PPC_FUNC_IMPL(__imp__sub_820BF1A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98dc
	ctx.lr = 0x820BF1A8;
	__savegprlr_25(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x820d4c58
	ctx.lr = 0x820BF1C8;
	sub_820D4C58(ctx, base);
	// lbz r11,8601(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8601);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820bf1e0
	if (!ctx.cr0.eq) goto loc_820BF1E0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820be730
	ctx.lr = 0x820BF1DC;
	sub_820BE730(ctx, base);
	// b 0x820bf690
	goto loc_820BF690;
loc_820BF1E0:
	// lbz r11,8552(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8552);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f30,9472(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9472);
	ctx.f30.f64 = double(temp.f32);
	// beq 0x820bf228
	if (ctx.cr0.eq) goto loc_820BF228;
	// lfs f0,8580(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8580);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// stfs f0,8580(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8580, temp.u32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bgt cr6,0x820bf228
	if (ctx.cr6.gt) goto loc_820BF228;
	// lbz r11,8572(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8572);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// ble cr6,0x820bf224
	if (!ctx.cr6.gt) goto loc_820BF224;
	// addi r11,r11,246
	ctx.r11.s64 = ctx.r11.s64 + 246;
	// stb r11,8572(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8572, ctx.r11.u8);
	// b 0x820bf228
	goto loc_820BF228;
loc_820BF224:
	// stb r25,8552(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8552, ctx.r25.u8);
loc_820BF228:
	// lfs f0,8584(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8584);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// fadds f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// lfs f0,8596(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8596);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f0,8596(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8596, temp.u32);
	// stfs f12,8584(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8584, temp.u32);
	// fmr f13,f30
	ctx.f13.f64 = ctx.f30.f64;
	// lwz r11,184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f11,f0
	ctx.f11.f64 = double(float(ctx.f0.f64));
	// lfs f0,11516(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11516);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x820bf27c
	if (!ctx.cr6.gt) goto loc_820BF27C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,9580(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9580);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
loc_820BF27C:
	// fcmpu cr6,f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x820bf690
	if (ctx.cr6.lt) goto loc_820BF690;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r25,10676(r30)
	PPC_STORE_U32(ctx.r30.u32 + 10676, ctx.r25.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BF29C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x820bf2b0
	if (!ctx.cr0.eq) goto loc_820BF2B0;
	// lwz r11,8592(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8592);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8592(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8592, ctx.r11.u32);
loc_820BF2B0:
	// lbz r11,8589(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8589);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820bf68c
	if (!ctx.cr0.eq) goto loc_820BF68C;
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BF2D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BF2E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,6464(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6464);
	// lwz r10,6468(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6468);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// b 0x820bf3a4
	goto loc_820BF3A4;
loc_820BF2FC:
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r3,4928(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4928);
	// lbz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820bf32c
	if (!ctx.cr0.eq) goto loc_820BF32C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BF324;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x820bf374
	if (!ctx.cr0.eq) goto loc_820BF374;
loc_820BF32C:
	// lwz r3,4928(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4928);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BF340;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4932(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4932);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x820bf374
	if (!ctx.cr6.eq) goto loc_820BF374;
	// lwz r11,4928(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4928);
	// lbz r10,128(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 128);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stb r10,128(r11)
	PPC_STORE_U8(ctx.r11.u32 + 128, ctx.r10.u8);
	// lwz r3,4928(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4928);
	// lhz r4,4936(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4936);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BF374;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820BF374:
	// lwz r11,6464(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6464);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// stw r11,6464(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6464, ctx.r11.u32);
	// bne cr6,0x820bf38c
	if (!ctx.cr6.eq) goto loc_820BF38C;
	// stw r25,6464(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6464, ctx.r25.u32);
loc_820BF38C:
	// lwz r11,6464(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6464);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x820bf3bc
	if (ctx.cr6.eq) goto loc_820BF3BC;
	// lwz r9,6468(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6468);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
loc_820BF3A4:
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x820bf2fc
	if (!ctx.cr0.eq) goto loc_820BF2FC;
	// b 0x820bf404
	goto loc_820BF404;
loc_820BF3BC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-31400
	ctx.r3.s64 = ctx.r11.s64 + -31400;
	// bl 0x821313e0
	ctx.lr = 0x820BF3C8;
	sub_821313E0(ctx, base);
	// b 0x820bf3e4
	goto loc_820BF3E4;
loc_820BF3CC:
	// lwz r11,6464(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6464);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// stw r11,6464(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6464, ctx.r11.u32);
	// bne cr6,0x820bf3e4
	if (!ctx.cr6.eq) goto loc_820BF3E4;
	// stw r25,6464(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6464, ctx.r25.u32);
loc_820BF3E4:
	// lwz r10,6468(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6468);
	// lwz r11,6464(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6464);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820bf3cc
	if (!ctx.cr0.eq) goto loc_820BF3CC;
loc_820BF404:
	// lwz r11,4924(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4924);
	// lwz r10,4920(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4920);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// b 0x820bf678
	goto loc_820BF678;
loc_820BF414:
	// lwz r11,4920(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4920);
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820bf634
	if (ctx.cr0.eq) goto loc_820BF634;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BF444;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x820bf634
	if (!ctx.cr6.eq) goto loc_820BF634;
	// lwz r3,8536(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8536);
	// lhz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// bl 0x820dab58
	ctx.lr = 0x820BF45C;
	sub_820DAB58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8208cdc0
	ctx.lr = 0x820BF468;
	sub_8208CDC0(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BF480;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x820bf68c
	if (ctx.cr0.eq) goto loc_820BF68C;
	// lbz r11,8601(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 8601);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820bf68c
	if (ctx.cr0.eq) goto loc_820BF68C;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BF4AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,76(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 76);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,56(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BF4C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 128);
	// lwz r26,0(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stb r11,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r11.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BF4F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,80(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BF504;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r26,0(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BF524;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,152(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 152);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BF538;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BF54C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,82(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 82);
	// sth r3,76(r31)
	PPC_STORE_U16(ctx.r31.u32 + 76, ctx.r3.u16);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,82(r31)
	PPC_STORE_U8(ctx.r31.u32 + 82, ctx.r11.u8);
	// lbz r11,82(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 82);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820bf5c4
	if (ctx.cr0.eq) goto loc_820BF5C4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820b3890
	ctx.lr = 0x820BF570;
	sub_820B3890(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f0,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lfs f0,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lfs f0,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lfs f0,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// lfs f0,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lfs f0,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lbz r11,82(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 82);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stb r11,82(r31)
	PPC_STORE_U8(ctx.r31.u32 + 82, ctx.r11.u8);
loc_820BF5C4:
	// lbz r11,82(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 82);
	// andi. r11,r11,239
	ctx.r11.u64 = ctx.r11.u64 & 239;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,82(r31)
	PPC_STORE_U8(ctx.r31.u32 + 82, ctx.r11.u8);
	// lbz r10,82(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 82);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820bf5ec
	if (ctx.cr0.eq) goto loc_820BF5EC;
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stb r11,82(r31)
	PPC_STORE_U8(ctx.r31.u32 + 82, ctx.r11.u8);
loc_820BF5EC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BF600;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x820ad8f8
	ctx.lr = 0x820BF608;
	sub_820AD8F8(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BF61C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x820b6398
	ctx.lr = 0x820BF628;
	sub_820B6398(ctx, base);
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// stw r11,80(r27)
	PPC_STORE_U32(ctx.r27.u32 + 80, ctx.r11.u32);
	// b 0x820bf654
	goto loc_820BF654;
loc_820BF634:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820bf654
	if (ctx.cr0.eq) goto loc_820BF654;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BF654;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820BF654:
	// lwz r11,4920(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4920);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,400
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 400, ctx.xer);
	// stw r11,4920(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4920, ctx.r11.u32);
	// bne cr6,0x820bf66c
	if (!ctx.cr6.eq) goto loc_820BF66C;
	// stw r25,4920(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4920, ctx.r25.u32);
loc_820BF66C:
	// lwz r11,4920(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4920);
	// lwz r10,4924(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4924);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_820BF678:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820bf414
	if (!ctx.cr0.eq) goto loc_820BF414;
loc_820BF68C:
	// stfs f30,8584(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8584, temp.u32);
loc_820BF690:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820d4c98
	ctx.lr = 0x820BF698;
	sub_820D4C98(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822e992c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BF6A8"))) PPC_WEAK_FUNC(sub_820BF6A8);
PPC_FUNC_IMPL(__imp__sub_820BF6A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98dc
	ctx.lr = 0x820BF6B0;
	__savegprlr_25(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lbz r11,8601(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8601);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820bf7d4
	if (ctx.cr0.eq) goto loc_820BF7D4;
	// lwz r11,6728(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6728);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r11,1618
	ctx.r9.s64 = ctx.r11.s64 + 1618;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,6728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6728, ctx.r11.u32);
	// stwx r10,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r10.u32);
	// bl 0x820be540
	ctx.lr = 0x820BF6F0;
	sub_820BE540(ctx, base);
	// lwz r11,6728(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6728);
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r11,r11,1618
	ctx.r11.s64 = ctx.r11.s64 + 1618;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r26,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r26.u32);
	// lwz r11,6728(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6728);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,6728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6728, ctx.r11.u32);
	// lwz r11,10676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10676);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x820bf7d4
	if (!ctx.cr6.gt) goto loc_820BF7D4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,8656
	ctx.r30.s64 = ctx.r31.s64 + 8656;
	// lis r27,-32205
	ctx.r27.s64 = -2110586880;
	// addi r25,r11,26484
	ctx.r25.s64 = ctx.r11.s64 + 26484;
loc_820BF730:
	// lwz r11,-28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28);
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// stb r26,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r26.u8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820bf770
	if (!ctx.cr6.eq) goto loc_820BF770;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BF758;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,8536(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8536);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x820dab58
	ctx.lr = 0x820BF768;
	sub_820DAB58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x820bf784
	goto loc_820BF784;
loc_820BF770:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x822ea970
	ctx.lr = 0x820BF780;
	sub_822EA970(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
loc_820BF784:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8208cdc0
	ctx.lr = 0x820BF78C;
	sub_8208CDC0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// lwz r10,-8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r9,-4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// lfs f2,-12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	ctx.f2.f64 = double(temp.f32);
	// lwz r3,9788(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 9788);
	// lfs f1,-16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	ctx.f1.f64 = double(temp.f32);
	// lwz r6,-20(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -20);
	// lwz r5,-24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -24);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// bl 0x820da3f0
	ctx.lr = 0x820BF7C0;
	sub_820DA3F0(ctx, base);
	// lwz r11,10676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10676);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820bf730
	if (ctx.cr6.lt) goto loc_820BF730;
loc_820BF7D4:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x822e992c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BF7DC"))) PPC_WEAK_FUNC(sub_820BF7DC);
PPC_FUNC_IMPL(__imp__sub_820BF7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BF7E0"))) PPC_WEAK_FUNC(sub_820BF7E0);
PPC_FUNC_IMPL(__imp__sub_820BF7E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x820BF7E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,27
	ctx.r3.s64 = 27;
	// bl 0x820d4c58
	ctx.lr = 0x820BF800;
	sub_820D4C58(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r3,r30,84
	ctx.r3.s64 = ctx.r30.s64 + 84;
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lhz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x820b47b8
	ctx.lr = 0x820BF848;
	sub_820B47B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820bf868
	if (ctx.cr0.eq) goto loc_820BF868;
	// li r31,1
	ctx.r31.s64 = 1;
loc_820BF854:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820d4c98
	ctx.lr = 0x820BF85C;
	sub_820D4C98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
loc_820BF868:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820be920
	ctx.lr = 0x820BF87C;
	sub_820BE920(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x820bf854
	goto loc_820BF854;
}

__attribute__((alias("__imp__sub_820BF884"))) PPC_WEAK_FUNC(sub_820BF884);
PPC_FUNC_IMPL(__imp__sub_820BF884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BF888"))) PPC_WEAK_FUNC(sub_820BF888);
PPC_FUNC_IMPL(__imp__sub_820BF888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x820BF890;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,27
	ctx.r3.s64 = 27;
	// bl 0x820d4c58
	ctx.lr = 0x820BF8A8;
	sub_820D4C58(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r3,r30,84
	ctx.r3.s64 = ctx.r30.s64 + 84;
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lhz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x820b47b8
	ctx.lr = 0x820BF8F0;
	sub_820B47B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820bf910
	if (ctx.cr0.eq) goto loc_820BF910;
	// li r31,1
	ctx.r31.s64 = 1;
loc_820BF8FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820d4c98
	ctx.lr = 0x820BF904;
	sub_820D4C98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
loc_820BF910:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820be920
	ctx.lr = 0x820BF924;
	sub_820BE920(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x820bf8fc
	goto loc_820BF8FC;
}

__attribute__((alias("__imp__sub_820BF92C"))) PPC_WEAK_FUNC(sub_820BF92C);
PPC_FUNC_IMPL(__imp__sub_820BF92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BF930"))) PPC_WEAK_FUNC(sub_820BF930);
PPC_FUNC_IMPL(__imp__sub_820BF930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x820BF938;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,27
	ctx.r3.s64 = 27;
	// bl 0x820d4c58
	ctx.lr = 0x820BF950;
	sub_820D4C58(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r3,r30,84
	ctx.r3.s64 = ctx.r30.s64 + 84;
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lhz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x820b47b8
	ctx.lr = 0x820BF998;
	sub_820B47B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820bf9b8
	if (ctx.cr0.eq) goto loc_820BF9B8;
	// li r31,1
	ctx.r31.s64 = 1;
loc_820BF9A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820d4c98
	ctx.lr = 0x820BF9AC;
	sub_820D4C98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
loc_820BF9B8:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820be920
	ctx.lr = 0x820BF9CC;
	sub_820BE920(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x820bf9a4
	goto loc_820BF9A4;
}

__attribute__((alias("__imp__sub_820BF9D4"))) PPC_WEAK_FUNC(sub_820BF9D4);
PPC_FUNC_IMPL(__imp__sub_820BF9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BF9D8"))) PPC_WEAK_FUNC(sub_820BF9D8);
PPC_FUNC_IMPL(__imp__sub_820BF9D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98d8
	ctx.lr = 0x820BF9E0;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,27
	ctx.r3.s64 = 27;
	// bl 0x820d4c58
	ctx.lr = 0x820BF9F8;
	sub_820D4C58(ctx, base);
	// lbz r11,8601(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 8601);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820bfa18
	if (ctx.cr0.eq) goto loc_820BFA18;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820d4c98
	ctx.lr = 0x820BFA0C;
	sub_820D4C98(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_820BFA10:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822e9928
	__restgprlr_24(ctx, base);
	return;
loc_820BFA18:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b8620
	ctx.lr = 0x820BFA24;
	sub_820B8620(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// clrlwi r25,r11,16
	ctx.r25.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x822e9960
	ctx.lr = 0x820BFA40;
	sub_822E9960(ctx, base);
	// lbz r11,83(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r3,81(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// xor r4,r4,r11
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r11.u64;
	// lbz r9,87(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// xor r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r10.u64;
	// lbz r8,86(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// lbz r7,91(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 91);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// lbz r6,90(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 90);
	// lbz r5,95(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 95);
	// xor r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 ^ ctx.r11.u64;
	// lbz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// xor r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 ^ ctx.r10.u64;
	// lbz r29,85(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lbz r28,88(r1)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// xor r30,r30,r9
	ctx.r30.u64 = ctx.r30.u64 ^ ctx.r9.u64;
	// lbz r27,89(r1)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// xor r29,r29,r8
	ctx.r29.u64 = ctx.r29.u64 ^ ctx.r8.u64;
	// lbz r26,92(r1)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r1.u32 + 92);
	// xor r28,r28,r7
	ctx.r28.u64 = ctx.r28.u64 ^ ctx.r7.u64;
	// xor r27,r27,r6
	ctx.r27.u64 = ctx.r27.u64 ^ ctx.r6.u64;
	// xor r26,r26,r5
	ctx.r26.u64 = ctx.r26.u64 ^ ctx.r5.u64;
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r30,r30,24
	ctx.r30.u64 = ctx.r30.u32 & 0xFF;
	// clrlwi r29,r29,24
	ctx.r29.u64 = ctx.r29.u32 & 0xFF;
	// clrlwi r28,r28,24
	ctx.r28.u64 = ctx.r28.u32 & 0xFF;
	// clrlwi r27,r27,24
	ctx.r27.u64 = ctx.r27.u32 & 0xFF;
	// clrlwi r26,r26,24
	ctx.r26.u64 = ctx.r26.u32 & 0xFF;
	// stb r10,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// xor r9,r30,r9
	ctx.r9.u64 = ctx.r30.u64 ^ ctx.r9.u64;
	// xor r8,r29,r8
	ctx.r8.u64 = ctx.r29.u64 ^ ctx.r8.u64;
	// xor r7,r28,r7
	ctx.r7.u64 = ctx.r28.u64 ^ ctx.r7.u64;
	// xor r6,r27,r6
	ctx.r6.u64 = ctx.r27.u64 ^ ctx.r6.u64;
	// xor r5,r26,r5
	ctx.r5.u64 = ctx.r26.u64 ^ ctx.r5.u64;
	// xor r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r3.u64;
	// xor r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// clrlwi r5,r5,24
	ctx.r5.u64 = ctx.r5.u32 & 0xFF;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r9,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r9.u8);
	// xor r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r30.u64;
	// stb r8,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r8.u8);
	// xor r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r29.u64;
	// stb r7,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r7.u8);
	// xor r7,r7,r28
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r28.u64;
	// stb r6,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r6.u8);
	// xor r6,r6,r27
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r27.u64;
	// stb r5,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r5.u8);
	// xor r5,r5,r26
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r26.u64;
	// lbz r11,94(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 94);
	// addi r30,r24,84
	ctx.r30.s64 = ctx.r24.s64 + 84;
	// lbz r10,93(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 93);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stb r9,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r9.u8);
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// stb r8,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r8.u8);
	// stb r7,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r7.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r6,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r6.u8);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stb r5,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r5.u8);
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,94(r1)
	PPC_STORE_U8(ctx.r1.u32 + 94, ctx.r11.u8);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// stb r11,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r11.u8);
	// bl 0x820b47b8
	ctx.lr = 0x820BFB74;
	sub_820B47B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820bfb90
	if (ctx.cr0.eq) goto loc_820BFB90;
	// li r31,1
	ctx.r31.s64 = 1;
loc_820BFB80:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820d4c98
	ctx.lr = 0x820BFB88;
	sub_820D4C98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x820bfa10
	goto loc_820BFA10;
loc_820BFB90:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lwz r3,9752(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9752);
	// bl 0x820bc020
	ctx.lr = 0x820BFB9C;
	sub_820BC020(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8209e2d8
	ctx.lr = 0x820BFBA8;
	sub_8209E2D8(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x820bfbb8
	goto loc_820BFBB8;
loc_820BFBB0:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_820BFBB8:
	// clrlwi. r11,r29,27
	ctx.r11.u64 = ctx.r29.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x820bfbb0
	if (!ctx.cr0.eq) goto loc_820BFBB0;
	// lwz r3,76(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 76);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BFBD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// subfic r10,r28,-20
	ctx.xer.ca = ctx.r28.u32 <= 4294967276;
	ctx.r10.s64 = -20 - ctx.r28.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x820c2f50
	ctx.lr = 0x820BFBE8;
	sub_820C2F50(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// stw r8,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r8.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// sth r25,76(r31)
	PPC_STORE_U16(ctx.r31.u32 + 76, ctx.r25.u16);
	// bl 0x820b4e80
	ctx.lr = 0x820BFC24;
	sub_820B4E80(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209e2d8
	ctx.lr = 0x820BFC30;
	sub_8209E2D8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x820bfb80
	goto loc_820BFB80;
}

__attribute__((alias("__imp__sub_820BFC38"))) PPC_WEAK_FUNC(sub_820BFC38);
PPC_FUNC_IMPL(__imp__sub_820BFC38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x820BFC40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lbz r11,8601(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 8601);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820bfd10
	if (!ctx.cr0.eq) goto loc_820BFD10;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r30,r29,84
	ctx.r30.s64 = ctx.r29.s64 + 84;
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lhz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x820b47b8
	ctx.lr = 0x820BFCA4;
	sub_820B47B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820bfcb4
	if (ctx.cr0.eq) goto loc_820BFCB4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x820bfd14
	goto loc_820BFD14;
loc_820BFCB4:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// lwz r3,9752(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9752);
	// bl 0x820bbf60
	ctx.lr = 0x820BFCC4;
	sub_820BBF60(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8209e2d8
	ctx.lr = 0x820BFCD0;
	sub_8209E2D8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BFCE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r28,76(r31)
	PPC_STORE_U16(ctx.r31.u32 + 76, ctx.r28.u16);
	// bl 0x820b8fa8
	ctx.lr = 0x820BFCF8;
	sub_820B8FA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820b4e80
	ctx.lr = 0x820BFD04;
	sub_820B4E80(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209e2d8
	ctx.lr = 0x820BFD10;
	sub_8209E2D8(ctx, base);
loc_820BFD10:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820BFD14:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BFD1C"))) PPC_WEAK_FUNC(sub_820BFD1C);
PPC_FUNC_IMPL(__imp__sub_820BFD1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BFD20"))) PPC_WEAK_FUNC(sub_820BFD20);
PPC_FUNC_IMPL(__imp__sub_820BFD20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,8600(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8600);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820bfd84
	if (!ctx.cr0.eq) goto loc_820BFD84;
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BFD54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,6728(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6728);
	// addi r11,r11,1618
	ctx.r11.s64 = ctx.r11.s64 + 1618;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lhz r11,132(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 132);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820bfd74
	if (!ctx.cr0.eq) goto loc_820BFD74;
	// li r11,1
	ctx.r11.s64 = 1;
loc_820BFD74:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,152(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 152);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x820bedd8
	ctx.lr = 0x820BFD84;
	sub_820BEDD8(ctx, base);
loc_820BFD84:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BFD9C"))) PPC_WEAK_FUNC(sub_820BFD9C);
PPC_FUNC_IMPL(__imp__sub_820BFD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BFDA0"))) PPC_WEAK_FUNC(sub_820BFDA0);
PPC_FUNC_IMPL(__imp__sub_820BFDA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r11,8601(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8601);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820bfe14
	if (!ctx.cr0.eq) goto loc_820BFE14;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8208cdc0
	ctx.lr = 0x820BFDC8;
	sub_8208CDC0(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BFDDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,8536(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8536);
	// bl 0x820dae28
	ctx.lr = 0x820BFDE8;
	sub_820DAE28(ctx, base);
	// lwz r11,6728(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6728);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,1618
	ctx.r11.s64 = ctx.r11.s64 + 1618;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,112(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BFE14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820BFE14:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BFE2C"))) PPC_WEAK_FUNC(sub_820BFE2C);
PPC_FUNC_IMPL(__imp__sub_820BFE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BFE30"))) PPC_WEAK_FUNC(sub_820BFE30);
PPC_FUNC_IMPL(__imp__sub_820BFE30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lbz r11,8600(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8600);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820bfe84
	if (ctx.cr0.eq) goto loc_820BFE84;
	// lwz r11,6728(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6728);
	// addi r11,r11,1618
	ctx.r11.s64 = ctx.r11.s64 + 1618;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BFE78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x820bff00
	if (ctx.cr6.gt) goto loc_820BFF00;
loc_820BFE84:
	// lbz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// lbz r10,3(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r9,68(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 68);
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820BFED0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r31,r11,-16384
	ctx.r31.s64 = ctx.r11.s64 + -16384;
	// lwz r11,6728(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6728);
	// addi r11,r11,1618
	ctx.r11.s64 = ctx.r11.s64 + 1618;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BFEF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820b6308
	ctx.lr = 0x820BFF00;
	sub_820B6308(ctx, base);
loc_820BFF00:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BFF1C"))) PPC_WEAK_FUNC(sub_820BFF1C);
PPC_FUNC_IMPL(__imp__sub_820BFF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BFF20"))) PPC_WEAK_FUNC(sub_820BFF20);
PPC_FUNC_IMPL(__imp__sub_820BFF20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lbz r11,8600(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8600);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820bff88
	if (ctx.cr0.eq) goto loc_820BFF88;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BFF5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,6728(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6728);
	// addi r11,r11,1618
	ctx.r11.s64 = ctx.r11.s64 + 1618;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BFF7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x820c0004
	if (ctx.cr6.gt) goto loc_820C0004;
loc_820BFF88:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// lbz r10,1(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r9,68(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 68);
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820BFFD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r31,r11,-16384
	ctx.r31.s64 = ctx.r11.s64 + -16384;
	// lwz r11,6728(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6728);
	// addi r11,r11,1618
	ctx.r11.s64 = ctx.r11.s64 + 1618;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BFFFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820b6308
	ctx.lr = 0x820C0004;
	sub_820B6308(ctx, base);
loc_820C0004:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C0020"))) PPC_WEAK_FUNC(sub_820C0020);
PPC_FUNC_IMPL(__imp__sub_820C0020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x820C0028;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,8600(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 8600);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820c0138
	if (ctx.cr0.eq) goto loc_820C0138;
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// lbz r9,1(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// addi r28,r29,8608
	ctx.r28.s64 = ctx.r29.s64 + 8608;
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// xor r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// lhz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
loc_820C0080:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 2;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rotlwi r11,r10,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x8208cdc0
	ctx.lr = 0x820C00C8;
	sub_8208CDC0(ctx, base);
	// lwz r3,80(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820C00DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// lwz r3,8536(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8536);
	// bl 0x820dae28
	ctx.lr = 0x820C00E8;
	sub_820DAE28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// bl 0x820b80f8
	ctx.lr = 0x820C00F8;
	sub_820B80F8(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_820C0100:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820c0100
	if (!ctx.cr6.eq) goto loc_820C0100;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addis r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 65536;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// clrlwi. r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x820c0080
	if (!ctx.cr0.eq) goto loc_820C0080;
loc_820C0138:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C0144"))) PPC_WEAK_FUNC(sub_820C0144);
PPC_FUNC_IMPL(__imp__sub_820C0144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C0148"))) PPC_WEAK_FUNC(sub_820C0148);
PPC_FUNC_IMPL(__imp__sub_820C0148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x820C0150;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,8601(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8601);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820c01f0
	if (!ctx.cr0.eq) goto loc_820C01F0;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r30,r3,84
	ctx.r30.s64 = ctx.r3.s64 + 84;
	// lbz r10,1(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lhz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x820b47b8
	ctx.lr = 0x820C01AC;
	sub_820B47B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820c01bc
	if (ctx.cr0.eq) goto loc_820C01BC;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x820c01f4
	goto loc_820C01F4;
loc_820C01BC:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lwz r3,9752(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9752);
	// bl 0x820bc370
	ctx.lr = 0x820C01C8;
	sub_820BC370(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8209e2d8
	ctx.lr = 0x820C01D4;
	sub_8209E2D8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r29,76(r31)
	PPC_STORE_U16(ctx.r31.u32 + 76, ctx.r29.u16);
	// bl 0x820b4e80
	ctx.lr = 0x820C01E4;
	sub_820B4E80(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209e2d8
	ctx.lr = 0x820C01F0;
	sub_8209E2D8(ctx, base);
loc_820C01F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820C01F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C01FC"))) PPC_WEAK_FUNC(sub_820C01FC);
PPC_FUNC_IMPL(__imp__sub_820C01FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C0200"))) PPC_WEAK_FUNC(sub_820C0200);
PPC_FUNC_IMPL(__imp__sub_820C0200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x820C0208;
	__savegprlr_28(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,8601(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8601);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820c02d8
	if (!ctx.cr0.eq) goto loc_820C02D8;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r29,r3,84
	ctx.r29.s64 = ctx.r3.s64 + 84;
	// lbz r10,1(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lhz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x820b47b8
	ctx.lr = 0x820C0268;
	sub_820B47B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820c0278
	if (ctx.cr0.eq) goto loc_820C0278;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x820c02dc
	goto loc_820C02DC;
loc_820C0278:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lwz r3,9752(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9752);
	// bl 0x820bc370
	ctx.lr = 0x820C0284;
	sub_820BC370(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8209e2d8
	ctx.lr = 0x820C0290;
	sub_8209E2D8(ctx, base);
	// addi r4,r30,5
	ctx.r4.s64 = ctx.r30.s64 + 5;
	// sth r28,76(r31)
	PPC_STORE_U16(ctx.r31.u32 + 76, ctx.r28.u16);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lbz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x822e9960
	ctx.lr = 0x820C02A8;
	sub_822E9960(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stbx r10,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r10.u8);
	// bl 0x820b4ff8
	ctx.lr = 0x820C02C0;
	sub_820B4FF8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820b4e80
	ctx.lr = 0x820C02CC;
	sub_820B4E80(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209e2d8
	ctx.lr = 0x820C02D8;
	sub_8209E2D8(ctx, base);
loc_820C02D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820C02DC:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C02E4"))) PPC_WEAK_FUNC(sub_820C02E4);
PPC_FUNC_IMPL(__imp__sub_820C02E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C02E8"))) PPC_WEAK_FUNC(sub_820C02E8);
PPC_FUNC_IMPL(__imp__sub_820C02E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,8601(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8601);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820c0390
	if (!ctx.cr0.eq) goto loc_820C0390;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r3,r3,84
	ctx.r3.s64 = ctx.r3.s64 + 84;
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// bl 0x820b47b8
	ctx.lr = 0x820C0350;
	sub_820B47B8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x820c0360
	if (!ctx.cr0.eq) goto loc_820C0360;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x820c0394
	goto loc_820C0394;
loc_820C0360:
	// addi r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 2;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// lbz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x822e9960
	ctx.lr = 0x820C0378;
	sub_822E9960(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stbx r10,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// bl 0x820b4ff8
	ctx.lr = 0x820C0390;
	sub_820B4FF8(ctx, base);
loc_820C0390:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820C0394:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C03AC"))) PPC_WEAK_FUNC(sub_820C03AC);
PPC_FUNC_IMPL(__imp__sub_820C03AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C03B0"))) PPC_WEAK_FUNC(sub_820C03B0);
PPC_FUNC_IMPL(__imp__sub_820C03B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x820C03B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lbz r11,8601(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8601);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820c0580
	if (!ctx.cr0.eq) goto loc_820C0580;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// addi r27,r30,84
	ctx.r27.s64 = ctx.r30.s64 + 84;
	// lbz r10,1(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lhz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x820b47b8
	ctx.lr = 0x820C041C;
	sub_820B47B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820c042c
	if (ctx.cr0.eq) goto loc_820C042C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x820c0584
	goto loc_820C0584;
loc_820C042C:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lwz r3,9752(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9752);
	// bl 0x820bc418
	ctx.lr = 0x820C0438;
	sub_820BC418(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8209e2d8
	ctx.lr = 0x820C0444;
	sub_8209E2D8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// sth r28,76(r31)
	PPC_STORE_U16(ctx.r31.u32 + 76, ctx.r28.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820C0460;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r4,r29,2
	ctx.r4.s64 = ctx.r29.s64 + 2;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// bl 0x820c14e8
	ctx.lr = 0x820C0480;
	sub_820C14E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r11,2
	ctx.r28.s64 = ctx.r11.s64 + 2;
	// bl 0x820c2040
	ctx.lr = 0x820C0494;
	sub_820C2040(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x820b5d58
	ctx.lr = 0x820C049C;
	sub_820B5D58(ctx, base);
	// add r4,r28,r29
	ctx.r4.u64 = ctx.r28.u64 + ctx.r29.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x820b5790
	ctx.lr = 0x820C04A8;
	sub_820B5790(ctx, base);
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// add r11,r3,r28
	ctx.r11.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lfs f0,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f0,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f0,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lfs f0,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lfs f0,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lfs f0,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// lfs f0,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lfs f0,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lbz r10,82(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 82);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// stb r10,82(r31)
	PPC_STORE_U8(ctx.r31.u32 + 82, ctx.r10.u8);
	// lbzx r5,r11,r29
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// bl 0x820beeb8
	ctx.lr = 0x820C0524;
	sub_820BEEB8(ctx, base);
	// lhz r30,114(r1)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r1.u32 + 114);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x820b47b8
	ctx.lr = 0x820C0534;
	sub_820B47B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c2030
	ctx.lr = 0x820C0544;
	sub_820C2030(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-31348
	ctx.r4.s64 = ctx.r11.s64 + -31348;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c2138
	ctx.lr = 0x820C0558;
	sub_820C2138(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820b4e80
	ctx.lr = 0x820C0564;
	sub_820B4E80(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209e2d8
	ctx.lr = 0x820C0570;
	sub_8209E2D8(ctx, base);
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c0580
	if (ctx.cr6.eq) goto loc_820C0580;
	// bl 0x820d4d38
	ctx.lr = 0x820C0580;
	sub_820D4D38(ctx, base);
loc_820C0580:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820C0584:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C058C"))) PPC_WEAK_FUNC(sub_820C058C);
PPC_FUNC_IMPL(__imp__sub_820C058C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C0590"))) PPC_WEAK_FUNC(sub_820C0590);
PPC_FUNC_IMPL(__imp__sub_820C0590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x820C0598;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820C05BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// lwz r3,8536(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8536);
	// bl 0x820dae28
	ctx.lr = 0x820C05C8;
	sub_820DAE28(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820C05E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x820beae8
	ctx.lr = 0x820C05F4;
	sub_820BEAE8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820C0610;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C0618"))) PPC_WEAK_FUNC(sub_820C0618);
PPC_FUNC_IMPL(__imp__sub_820C0618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,6468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6468);
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r4,4928(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4928, ctx.r4.u32);
	// lwz r11,6468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6468);
	// addi r11,r11,411
	ctx.r11.s64 = ctx.r11.s64 + 411;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// stwx r5,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r5.u32);
	// lwz r11,6468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6468);
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// sth r6,4936(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4936, ctx.r6.u16);
	// lwz r11,6468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6468);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bne cr6,0x820c0670
	if (!ctx.cr6.eq) goto loc_820C0670;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820C0670:
	// lwz r10,6464(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6464);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x820c0684
	if (!ctx.cr6.eq) goto loc_820C0684;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820beba8
	ctx.lr = 0x820C0684;
	sub_820BEBA8(ctx, base);
loc_820C0684:
	// lwz r11,6468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6468);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// stw r11,6468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6468, ctx.r11.u32);
	// bne cr6,0x820c06a0
	if (!ctx.cr6.eq) goto loc_820C06A0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6468, ctx.r11.u32);
loc_820C06A0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C06B4"))) PPC_WEAK_FUNC(sub_820C06B4);
PPC_FUNC_IMPL(__imp__sub_820C06B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C06B8"))) PPC_WEAK_FUNC(sub_820C06B8);
PPC_FUNC_IMPL(__imp__sub_820C06B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98d0
	ctx.lr = 0x820C06C0;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// stb r30,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r30.u8);
	// bl 0x820b4dc8
	ctx.lr = 0x820C06F0;
	sub_820B4DC8(ctx, base);
	// addi r27,r31,6732
	ctx.r27.s64 = ctx.r31.s64 + 6732;
	// li r28,31
	ctx.r28.s64 = 31;
loc_820C06F8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820b5d58
	ctx.lr = 0x820C0700;
	sub_820B5D58(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r27,r27,36
	ctx.r27.s64 = ctx.r27.s64 + 36;
	// bge 0x820c06f8
	if (!ctx.cr0.lt) goto loc_820C06F8;
	// addi r24,r31,7888
	ctx.r24.s64 = ctx.r31.s64 + 7888;
	// li r28,31
	ctx.r28.s64 = 31;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
loc_820C0718:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820db3d8
	ctx.lr = 0x820C0720;
	sub_820DB3D8(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// bge 0x820c0718
	if (!ctx.cr0.lt) goto loc_820C0718;
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r30,8608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8608, ctx.r30.u32);
	// addi r11,r31,10680
	ctx.r11.s64 = ctx.r31.s64 + 10680;
	// stw r30,8612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8612, ctx.r30.u32);
	// stw r30,8616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8616, ctx.r30.u32);
	// li r9,1255
	ctx.r9.s64 = 1255;
	// addi r10,r11,5028
	ctx.r10.s64 = ctx.r11.s64 + 5028;
	// stb r30,8624(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8624, ctx.r30.u8);
	// stw r28,8620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8620, ctx.r28.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r30,5024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5024, ctx.r30.u32);
loc_820C0758:
	// stw r30,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r30.u32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stb r30,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r30.u8);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// bge 0x820c0758
	if (!ctx.cr0.lt) goto loc_820C0758;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,20100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20100, ctx.r30.u32);
	// li r3,26
	ctx.r3.s64 = 26;
	// bl 0x820d4c58
	ctx.lr = 0x820C077C;
	sub_820D4C58(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stb r30,8600(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8600, ctx.r30.u8);
	// stb r30,8601(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8601, ctx.r30.u8);
	// lfs f0,9472(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9472);
	ctx.f0.f64 = double(temp.f32);
	// stb r30,8602(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8602, ctx.r30.u8);
	// stfs f0,8584(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8584, temp.u32);
	// stb r30,8588(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8588, ctx.r30.u8);
	// stfs f0,8596(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8596, temp.u32);
	// stb r23,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r23.u8);
	// stw r30,4920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4920, ctx.r30.u32);
	// stw r30,4924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4924, ctx.r30.u32);
	// stw r30,8400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8400, ctx.r30.u32);
	// stb r30,8589(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8589, ctx.r30.u8);
	// stw r30,7884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7884, ctx.r30.u32);
	// stw r30,6728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6728, ctx.r30.u32);
	// stw r30,8532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8532, ctx.r30.u32);
	// stb r30,8552(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8552, ctx.r30.u8);
	// stw r30,6464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6464, ctx.r30.u32);
	// stw r30,6468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6468, ctx.r30.u32);
	// stw r30,8604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8604, ctx.r30.u32);
	// stb r28,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r28.u8);
	// stw r30,8540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8540, ctx.r30.u32);
	// stw r30,8544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8544, ctx.r30.u32);
	// stw r30,8548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8548, ctx.r30.u32);
	// stw r30,10676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10676, ctx.r30.u32);
	// stw r30,8592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8592, ctx.r30.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// bl 0x820a9398
	ctx.lr = 0x820C0800;
	sub_820A9398(ctx, base);
	// li r3,204
	ctx.r3.s64 = 204;
	// bl 0x820d4cd8
	ctx.lr = 0x820C0808;
	sub_820D4CD8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820c081c
	if (ctx.cr0.eq) goto loc_820C081C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820c1dd8
	ctx.lr = 0x820C0818;
	sub_820C1DD8(ctx, base);
	// b 0x820c0820
	goto loc_820C0820;
loc_820C081C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_820C0820:
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r3,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
	// bl 0x8209e2d8
	ctx.lr = 0x820C082C;
	sub_8209E2D8(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// stw r30,8404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8404, ctx.r30.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r22,200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 200, ctx.r22.u32);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x820c1690
	ctx.lr = 0x820C0844;
	sub_820C1690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// bge 0x820c085c
	if (!ctx.cr0.lt) goto loc_820C085C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-31308
	ctx.r3.s64 = ctx.r11.s64 + -31308;
	// bl 0x821313e0
	ctx.lr = 0x820C085C;
	sub_821313E0(ctx, base);
loc_820C085C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f4,29244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29244);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x820db3f8
	ctx.lr = 0x820C0878;
	sub_820DB3F8(ctx, base);
	// li r11,255
	ctx.r11.s64 = 255;
	// clrlwi. r10,r23,24
	ctx.r10.u64 = ctx.r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r10,12(r24)
	PPC_STORE_U32(ctx.r24.u32 + 12, ctx.r10.u32);
	// stb r11,107(r31)
	PPC_STORE_U8(ctx.r31.u32 + 107, ctx.r11.u8);
	// beq 0x820c08b0
	if (ctx.cr0.eq) goto loc_820C08B0;
	// stw r30,8536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8536, ctx.r30.u32);
	// b 0x820c08b8
	goto loc_820C08B8;
loc_820C08B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820bd7f0
	ctx.lr = 0x820C08B8;
	sub_820BD7F0(ctx, base);
loc_820C08B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820d4c98
	ctx.lr = 0x820C08C0;
	sub_820D4C98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822e9920
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C08CC"))) PPC_WEAK_FUNC(sub_820C08CC);
PPC_FUNC_IMPL(__imp__sub_820C08CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C08D0"))) PPC_WEAK_FUNC(sub_820C08D0);
PPC_FUNC_IMPL(__imp__sub_820C08D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e0
	ctx.lr = 0x820C08D8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820c0908
	if (ctx.cr0.eq) goto loc_820C0908;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820C0904;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r26,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r26.u32);
loc_820C0908:
	// lwz r3,8536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8536);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820c0928
	if (ctx.cr0.eq) goto loc_820C0928;
	// lbz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 116);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820c0928
	if (!ctx.cr0.eq) goto loc_820C0928;
	// bl 0x820d4d38
	ctx.lr = 0x820C0924;
	sub_820D4D38(ctx, base);
	// stw r26,8536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8536, ctx.r26.u32);
loc_820C0928:
	// lwz r3,8540(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8540);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820c093c
	if (ctx.cr0.eq) goto loc_820C093C;
	// bl 0x820d4d38
	ctx.lr = 0x820C0938;
	sub_820D4D38(ctx, base);
	// stw r26,8540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8540, ctx.r26.u32);
loc_820C093C:
	// lwz r3,8544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8544);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820c0950
	if (ctx.cr0.eq) goto loc_820C0950;
	// bl 0x820d4d38
	ctx.lr = 0x820C094C;
	sub_820D4D38(ctx, base);
	// stw r26,8544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8544, ctx.r26.u32);
loc_820C0950:
	// lwz r3,8548(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8548);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820c0964
	if (ctx.cr0.eq) goto loc_820C0964;
	// bl 0x820d4d38
	ctx.lr = 0x820C0960;
	sub_820D4D38(ctx, base);
	// stw r26,8548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8548, ctx.r26.u32);
loc_820C0964:
	// addi r29,r31,8608
	ctx.r29.s64 = ctx.r31.s64 + 8608;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820b84d0
	ctx.lr = 0x820C0970;
	sub_820B84D0(ctx, base);
	// addi r28,r31,10680
	ctx.r28.s64 = ctx.r31.s64 + 10680;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820ad6c8
	ctx.lr = 0x820C097C;
	sub_820AD6C8(ctx, base);
	// lwz r30,112(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x820c09a8
	if (ctx.cr0.eq) goto loc_820C09A8;
loc_820C0988:
	// lwz r27,84(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x820d4c50
	ctx.lr = 0x820C0994;
	sub_820D4C50(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820d4d38
	ctx.lr = 0x820C099C;
	sub_820D4D38(ctx, base);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x820c0988
	if (!ctx.cr6.eq) goto loc_820C0988;
loc_820C09A8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r26,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r26.u32);
	// bl 0x820ad6c8
	ctx.lr = 0x820C09B4;
	sub_820AD6C8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820b84d0
	ctx.lr = 0x820C09BC;
	sub_820B84D0(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x820b49b0
	ctx.lr = 0x820C09C4;
	sub_820B49B0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e9930
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C09CC"))) PPC_WEAK_FUNC(sub_820C09CC);
PPC_FUNC_IMPL(__imp__sub_820C09CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C09D0"))) PPC_WEAK_FUNC(sub_820C09D0);
PPC_FUNC_IMPL(__imp__sub_820C09D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98b4
	ctx.lr = 0x820C09D8;
	__savegprlr_15(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,30
	ctx.r3.s64 = 30;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// bl 0x820d4c58
	ctx.lr = 0x820C09F4;
	sub_820D4C58(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r20,r31
	ctx.r20.u64 = ctx.r31.u64;
	// bl 0x820b5d58
	ctx.lr = 0x820C0A04;
	sub_820B5D58(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lbz r8,2(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2);
	// li r27,3
	ctx.r27.s64 = 3;
	// addi r9,r11,29176
	ctx.r9.s64 = ctx.r11.s64 + 29176;
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// lbz r7,8600(r28)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r28.u32 + 8600);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// cmplwi r7,0
	ctx.cr0.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// lbz r9,1(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// li r11,255
	ctx.r11.s64 = 255;
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// stb r31,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r31.u8);
	// stb r31,168(r1)
	PPC_STORE_U8(ctx.r1.u32 + 168, ctx.r31.u8);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// sth r31,186(r1)
	PPC_STORE_U16(ctx.r1.u32 + 186, ctx.r31.u16);
	// sth r31,182(r1)
	PPC_STORE_U16(ctx.r1.u32 + 182, ctx.r31.u16);
	// sth r11,184(r1)
	PPC_STORE_U16(ctx.r1.u32 + 184, ctx.r11.u16);
	// sth r11,176(r1)
	PPC_STORE_U16(ctx.r1.u32 + 176, ctx.r11.u16);
	// sth r11,174(r1)
	PPC_STORE_U16(ctx.r1.u32 + 174, ctx.r11.u16);
	// sth r11,172(r1)
	PPC_STORE_U16(ctx.r1.u32 + 172, ctx.r11.u16);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// sth r9,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r9.u16);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// rlwimi r6,r10,30,26,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 30) & 0x3F) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFFC0);
	// sth r31,180(r1)
	PPC_STORE_U16(ctx.r1.u32 + 180, ctx.r31.u16);
	// xor r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// sth r31,178(r1)
	PPC_STORE_U16(ctx.r1.u32 + 178, ctx.r31.u16);
	// rlwimi r7,r11,2,0,29
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 2) & 0xFFFFFFFC) | (ctx.r7.u64 & 0xFFFFFFFF00000003);
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// rlwimi r8,r7,2,0,28
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 2) & 0xFFFFFFF8) | (ctx.r8.u64 & 0xFFFFFFFF00000007);
	// rlwimi r5,r6,30,27,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 30) & 0x1F) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFFE0);
	// rlwinm r6,r11,0,28,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// rlwinm r8,r8,2,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFF0;
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// rlwinm r7,r5,30,28,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0xF;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// or r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 | ctx.r11.u64;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// rlwinm r11,r11,31,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7F;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// or r30,r11,r8
	ctx.r30.u64 = ctx.r11.u64 | ctx.r8.u64;
	// xor r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r16,r11,-16384
	ctx.r16.s64 = ctx.r11.s64 + -16384;
	// beq 0x820c0b34
	if (ctx.cr0.eq) goto loc_820C0B34;
	// lwz r3,80(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820C0B08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,6728(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6728);
	// addi r11,r11,1618
	ctx.r11.s64 = ctx.r11.s64 + 1618;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820C0B28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x820c10e4
	if (ctx.cr6.gt) goto loc_820C10E4;
loc_820C0B34:
	// clrlwi r18,r30,24
	ctx.r18.u64 = ctx.r30.u32 & 0xFF;
	// rlwinm. r25,r18,26,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq 0x820c0b80
	if (ctx.cr0.eq) goto loc_820C0B80;
	// lbz r11,3(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 3);
	// li r27,5
	ctx.r27.s64 = 5;
	// lbz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lhz r20,80(r1)
	ctx.r20.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
loc_820C0B80:
	// rlwinm r26,r18,0,26,26
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 0) & 0x20;
	// rlwinm. r24,r26,27,29,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 27) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq 0x820c0b9c
	if (ctx.cr0.eq) goto loc_820C0B9C;
	// add r4,r27,r29
	ctx.r4.u64 = ctx.r27.u64 + ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820b5790
	ctx.lr = 0x820C0B98;
	sub_820B5790(ctx, base);
	// add r27,r3,r27
	ctx.r27.u64 = ctx.r3.u64 + ctx.r27.u64;
loc_820C0B9C:
	// rlwinm. r15,r18,28,31,31
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 28) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// beq 0x820c0bb4
	if (ctx.cr0.eq) goto loc_820C0BB4;
	// add r4,r27,r29
	ctx.r4.u64 = ctx.r27.u64 + ctx.r29.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x820b4228
	ctx.lr = 0x820C0BB0;
	sub_820B4228(ctx, base);
	// add r27,r3,r27
	ctx.r27.u64 = ctx.r3.u64 + ctx.r27.u64;
loc_820C0BB4:
	// rlwinm. r11,r18,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820c0bc0
	if (ctx.cr0.eq) goto loc_820C0BC0;
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
loc_820C0BC0:
	// rlwinm. r17,r18,30,31,31
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq 0x820c0c1c
	if (ctx.cr0.eq) goto loc_820C0C1C;
	// lwz r3,80(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820C0BDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r30,r27,r29
	ctx.r30.u64 = ctx.r27.u64 + ctx.r29.u64;
	// lwz r3,8536(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8536);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x820dae28
	ctx.lr = 0x820C0BEC;
	sub_820DAE28(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_820C0BF4:
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820c0bf4
	if (!ctx.cr6.eq) goto loc_820C0BF4;
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
	// b 0x820c0c20
	goto loc_820C0C20;
loc_820C0C1C:
	// lhz r19,80(r1)
	ctx.r19.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
loc_820C0C20:
	// rlwinm. r22,r18,31,31,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq 0x820c0c74
	if (ctx.cr0.eq) goto loc_820C0C74;
	// add r11,r27,r29
	ctx.r11.u64 = ctx.r27.u64 + ctx.r29.u64;
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r23,r11,-16384
	ctx.r23.s64 = ctx.r11.s64 + -16384;
	// b 0x820c0c78
	goto loc_820C0C78;
loc_820C0C74:
	// lwz r23,80(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_820C0C78:
	// lwz r3,80(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// beq cr6,0x820c0ffc
	if (ctx.cr6.eq) goto loc_820C0FFC;
	// rlwinm r26,r26,27,29,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 27) & 0x7;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820C0C98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,6728(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6728);
	// addi r11,r11,1618
	ctx.r11.s64 = ctx.r11.s64 + 1618;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820C0CB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x820c0cd0
	goto loc_820C0CD0;
loc_820C0CC0:
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpw cr6,r10,r16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r16.s32, ctx.xer);
	// beq cr6,0x820c0d88
	if (ctx.cr6.eq) goto loc_820C0D88;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
loc_820C0CD0:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820c0cc0
	if (!ctx.cr0.eq) goto loc_820C0CC0;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_820C0CDC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820c0da0
	if (ctx.cr6.eq) goto loc_820C0DA0;
	// rlwinm. r11,r18,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820c0d10
	if (ctx.cr0.eq) goto loc_820C0D10;
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x820c0d10
	if (!ctx.cr0.eq) goto loc_820C0D10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820b3890
	ctx.lr = 0x820C0CFC;
	sub_820B3890(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,36
	ctx.r5.s64 = 36;
	// bl 0x822e9960
	ctx.lr = 0x820C0D0C;
	sub_822E9960(ctx, base);
	// li r26,1
	ctx.r26.s64 = 1;
loc_820C0D10:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820C0D24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r20,16
	ctx.r11.u64 = ctx.r20.u32 & 0xFFFF;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x820c0da0
	if (!ctx.cr6.eq) goto loc_820C0DA0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820C0D48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,82(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 82);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820c0dcc
	if (ctx.cr0.eq) goto loc_820C0DCC;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x820c0d90
	if (ctx.cr6.eq) goto loc_820C0D90;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820C0D70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r19,16
	ctx.r11.u64 = ctx.r19.u32 & 0xFFFF;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x820c0d90
	if (!ctx.cr6.eq) goto loc_820C0D90;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// b 0x820c0dcc
	goto loc_820C0DCC;
loc_820C0D88:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// b 0x820c0cdc
	goto loc_820C0CDC;
loc_820C0D90:
	// lbz r11,82(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 82);
	// andi. r11,r11,223
	ctx.r11.u64 = ctx.r11.u64 & 223;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,82(r30)
	PPC_STORE_U8(ctx.r30.u32 + 82, ctx.r11.u8);
	// b 0x820c0dcc
	goto loc_820C0DCC;
loc_820C0DA0:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r3,r28,84
	ctx.r3.s64 = ctx.r28.s64 + 84;
	// bl 0x820b47b8
	ctx.lr = 0x820C0DAC;
	sub_820B47B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820c10e4
	if (ctx.cr0.eq) goto loc_820C10E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820C0DC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,1
	ctx.r31.s64 = 1;
loc_820C0DCC:
	// clrlwi. r31,r31,24
	ctx.r31.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x820c0e0c
	if (ctx.cr0.eq) goto loc_820C0E0C;
	// lwz r3,80(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820C0DE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,6728(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6728);
	// addi r11,r11,1618
	ctx.r11.s64 = ctx.r11.s64 + 1618;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820C0E08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// sth r3,80(r30)
	PPC_STORE_U16(ctx.r30.u32 + 80, ctx.r3.u16);
loc_820C0E0C:
	// clrlwi. r11,r21,16
	ctx.r11.u64 = ctx.r21.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r20,76(r30)
	PPC_STORE_U16(ctx.r30.u32 + 76, ctx.r20.u16);
	// stw r16,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r16.u32);
	// beq 0x820c0e20
	if (ctx.cr0.eq) goto loc_820C0E20;
	// sth r21,78(r30)
	PPC_STORE_U16(ctx.r30.u32 + 78, ctx.r21.u16);
loc_820C0E20:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820C0E34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820c0e78
	if (ctx.cr0.eq) goto loc_820C0E78;
	// lwz r3,80(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820C0E50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,152(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 152);
	// lwz r10,6728(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6728);
	// addi r10,r10,1618
	ctx.r10.s64 = ctx.r10.s64 + 1618;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820C0E78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820C0E78:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820c0ed4
	if (ctx.cr0.eq) goto loc_820C0ED4;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// lfs f0,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 44, temp.u32);
	// lfs f0,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// lfs f0,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// lfs f0,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 56, temp.u32);
	// lfs f0,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 60, temp.u32);
	// lfs f0,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 64, temp.u32);
	// lfs f0,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 68, temp.u32);
	// lbz r11,82(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 82);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stb r11,82(r30)
	PPC_STORE_U8(ctx.r30.u32 + 82, ctx.r11.u8);
loc_820C0ED4:
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x820c0ee8
	if (ctx.cr6.eq) goto loc_820C0EE8;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820b3900
	ctx.lr = 0x820C0EE8;
	sub_820B3900(ctx, base);
loc_820C0EE8:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x820c0f08
	if (ctx.cr6.eq) goto loc_820C0F08;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820C0F08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820C0F08:
	// clrlwi. r11,r18,31
	ctx.r11.u64 = ctx.r18.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820c0f28
	if (ctx.cr0.eq) goto loc_820C0F28;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r4,r27,r29
	ctx.r4.u64 = ctx.r27.u64 + ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820C0F28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820C0F28:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x820c0f40
	if (ctx.cr6.eq) goto loc_820C0F40;
	// lbz r11,82(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 82);
	// stw r23,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r23.u32);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// b 0x820c0f48
	goto loc_820C0F48;
loc_820C0F40:
	// lbz r11,82(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 82);
	// andi. r11,r11,239
	ctx.r11.u64 = ctx.r11.u64 & 239;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_820C0F48:
	// stb r11,82(r30)
	PPC_STORE_U8(ctx.r30.u32 + 82, ctx.r11.u8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820c0fb4
	if (ctx.cr6.eq) goto loc_820C0FB4;
	// rlwinm. r11,r18,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820c0f64
	if (ctx.cr0.eq) goto loc_820C0F64;
	// clrlwi. r11,r20,16
	ctx.r11.u64 = ctx.r20.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820c0fb4
	if (ctx.cr0.eq) goto loc_820C0FB4;
loc_820C0F64:
	// lwz r3,80(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820C0F78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,8600(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 8600);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r31,r11,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lwz r11,6728(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6728);
	// addi r11,r11,1618
	ctx.r11.s64 = ctx.r11.s64 + 1618;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820C0FA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x820b6398
	ctx.lr = 0x820C0FB0;
	sub_820B6398(ctx, base);
	// b 0x820c10e4
	goto loc_820C10E4;
loc_820C0FB4:
	// rlwinm. r11,r18,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820c10e4
	if (ctx.cr0.eq) goto loc_820C10E4;
	// lwz r3,80(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820C0FD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,6728(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6728);
	// addi r11,r11,1618
	ctx.r11.s64 = ctx.r11.s64 + 1618;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820C0FF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// bl 0x820b6308
	ctx.lr = 0x820C0FF8;
	sub_820B6308(ctx, base);
	// b 0x820c10e4
	goto loc_820C10E4;
loc_820C0FFC:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820C1004;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,6728(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6728);
	// addi r11,r11,1618
	ctx.r11.s64 = ctx.r11.s64 + 1618;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820C1024;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x820c103c
	goto loc_820C103C;
loc_820C102C:
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpw cr6,r10,r16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r16.s32, ctx.xer);
	// beq cr6,0x820c1048
	if (ctx.cr6.eq) goto loc_820C1048;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
loc_820C103C:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820c102c
	if (!ctx.cr0.eq) goto loc_820C102C;
	// b 0x820c104c
	goto loc_820C104C;
loc_820C1048:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_820C104C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820c10e4
	if (ctx.cr6.eq) goto loc_820C10E4;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x820c10b0
	if (ctx.cr6.eq) goto loc_820C10B0;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lfs f0,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f0,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lfs f0,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lfs f0,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lfs f0,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// lfs f0,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lfs f0,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lbz r11,82(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 82);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stb r11,82(r31)
	PPC_STORE_U8(ctx.r31.u32 + 82, ctx.r11.u8);
loc_820C10B0:
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x820c10c4
	if (ctx.cr6.eq) goto loc_820C10C4;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b3900
	ctx.lr = 0x820C10C4;
	sub_820B3900(ctx, base);
loc_820C10C4:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x820c10e4
	if (ctx.cr6.eq) goto loc_820C10E4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820C10E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820C10E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820d4c98
	ctx.lr = 0x820C10EC;
	sub_820D4C98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,28968
	ctx.r11.s64 = ctx.r11.s64 + 28968;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// bl 0x820b0700
	ctx.lr = 0x820C1100;
	sub_820B0700(ctx, base);
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x820b84d0
	ctx.lr = 0x820C1108;
	sub_820B84D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x822e9904
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C1114"))) PPC_WEAK_FUNC(sub_820C1114);
PPC_FUNC_IMPL(__imp__sub_820C1114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C1118"))) PPC_WEAK_FUNC(sub_820C1118);
PPC_FUNC_IMPL(__imp__sub_820C1118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98d4
	ctx.lr = 0x820C1120;
	__savegprlr_23(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lbz r11,8601(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8601);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820c14dc
	if (!ctx.cr0.eq) goto loc_820C14DC;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r23,r31,84
	ctx.r23.s64 = ctx.r31.s64 + 84;
	// lbz r10,1(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lhz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x820b47b8
	ctx.lr = 0x820C1184;
	sub_820B47B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820c1194
	if (ctx.cr0.eq) goto loc_820C1194;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x820c14e0
	goto loc_820C14E0;
loc_820C1194:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lwz r3,9752(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9752);
	// bl 0x820bc418
	ctx.lr = 0x820C11A0;
	sub_820BC418(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8209e2d8
	ctx.lr = 0x820C11AC;
	sub_8209E2D8(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// sth r29,76(r28)
	PPC_STORE_U16(ctx.r28.u32 + 76, ctx.r29.u16);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820C11C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r4,r30,2
	ctx.r4.s64 = ctx.r30.s64 + 2;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// bl 0x820c14e8
	ctx.lr = 0x820C11E8;
	sub_820C14E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r29,r11,2
	ctx.r29.s64 = ctx.r11.s64 + 2;
	// bl 0x820c2040
	ctx.lr = 0x820C11FC;
	sub_820C2040(ctx, base);
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x820bd698
	ctx.lr = 0x820C121C;
	sub_820BD698(ctx, base);
	// lhz r24,80(r1)
	ctx.r24.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// rlwinm. r11,r25,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820c129c
	if (ctx.cr0.eq) goto loc_820C129C;
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lhz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x820b47b8
	ctx.lr = 0x820C1284;
	sub_820B47B8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x820c2030
	ctx.lr = 0x820C1298;
	sub_820C2030(ctx, base);
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
loc_820C129C:
	// rlwinm. r11,r25,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820c1338
	if (ctx.cr0.eq) goto loc_820C1338;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// addi r10,r11,29176
	ctx.r10.s64 = ctx.r11.s64 + 29176;
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r31,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r31.u8);
	// add r3,r29,r30
	ctx.r3.u64 = ctx.r29.u64 + ctx.r30.u64;
	// stb r31,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r31.u8);
	// sth r31,170(r1)
	PPC_STORE_U16(ctx.r1.u32 + 170, ctx.r31.u16);
	// sth r31,166(r1)
	PPC_STORE_U16(ctx.r1.u32 + 166, ctx.r31.u16);
	// sth r31,164(r1)
	PPC_STORE_U16(ctx.r1.u32 + 164, ctx.r31.u16);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// li r11,255
	ctx.r11.s64 = 255;
	// sth r31,162(r1)
	PPC_STORE_U16(ctx.r1.u32 + 162, ctx.r31.u16);
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// sth r11,168(r1)
	PPC_STORE_U16(ctx.r1.u32 + 168, ctx.r11.u16);
	// sth r11,160(r1)
	PPC_STORE_U16(ctx.r1.u32 + 160, ctx.r11.u16);
	// sth r11,158(r1)
	PPC_STORE_U16(ctx.r1.u32 + 158, ctx.r11.u16);
	// sth r11,156(r1)
	PPC_STORE_U16(ctx.r1.u32 + 156, ctx.r11.u16);
	// bl 0x820b8620
	ctx.lr = 0x820C1300;
	sub_820B8620(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bl 0x820b43f8
	ctx.lr = 0x820C1310;
	sub_820B43F8(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820b3900
	ctx.lr = 0x820C131C;
	sub_820B3900(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,28968
	ctx.r11.s64 = ctx.r11.s64 + 28968;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// bl 0x820b0700
	ctx.lr = 0x820C1330;
	sub_820B0700(ctx, base);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x820b84d0
	ctx.lr = 0x820C1338;
	sub_820B84D0(ctx, base);
loc_820C1338:
	// rlwinm. r11,r25,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820c1344
	if (ctx.cr0.eq) goto loc_820C1344;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
loc_820C1344:
	// rlwinm. r11,r25,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820c1494
	if (ctx.cr0.eq) goto loc_820C1494;
	// lbzx r11,r29,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r30.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// sth r31,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r31.u16);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// sth r31,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r31.u16);
	// sth r31,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, ctx.r31.u16);
	// sth r31,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r31.u16);
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r8,1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// sth r9,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r9.u16);
	// addi r29,r11,2
	ctx.r29.s64 = ctx.r11.s64 + 2;
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// xor r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r9.u64;
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// xor r11,r7,r9
	ctx.r11.u64 = ctx.r7.u64 ^ ctx.r9.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// xor r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r7.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// sth r11,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r11.u16);
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// sth r11,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r11.u16);
	// lbz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// lbz r10,1(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// sth r11,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, ctx.r11.u16);
	// lbz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// lbz r10,1(r6)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + 1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// sth r11,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r11.u16);
	// bl 0x820b4fc0
	ctx.lr = 0x820C1494;
	sub_820B4FC0(ctx, base);
loc_820C1494:
	// add r4,r29,r30
	ctx.r4.u64 = ctx.r29.u64 + ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820c2938
	ctx.lr = 0x820C14A0;
	sub_820C2938(ctx, base);
	// rlwinm. r11,r25,0,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xFFFF8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820c14c4
	if (ctx.cr0.eq) goto loc_820C14C4;
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + ctx.r29.u64;
	// rlwinm r10,r24,31,17,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 31) & 0x7FFF;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// clrlwi r5,r10,31
	ctx.r5.u64 = ctx.r10.u32 & 0x1;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820c2138
	ctx.lr = 0x820C14C4;
	sub_820C2138(ctx, base);
loc_820C14C4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x820b4e80
	ctx.lr = 0x820C14D0;
	sub_820B4E80(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8209e2d8
	ctx.lr = 0x820C14DC;
	sub_8209E2D8(ctx, base);
loc_820C14DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820C14E0:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822e9924
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C14E8"))) PPC_WEAK_FUNC(sub_820C14E8);
PPC_FUNC_IMPL(__imp__sub_820C14E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x820C14F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r6,5
	ctx.r6.s64 = 5;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x820c2e30
	ctx.lr = 0x820C1520;
	sub_820C2E30(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x820c2ea8
	ctx.lr = 0x820C1538;
	sub_820C2EA8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x820c2ea8
	ctx.lr = 0x820C1554;
	sub_820C2EA8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// bl 0x820c2ea8
	ctx.lr = 0x820C1570;
	sub_820C2EA8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// bl 0x820c2ea8
	ctx.lr = 0x820C158C;
	sub_820C2EA8(ctx, base);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r3,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r3.u32);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// b 0x820c15a0
	goto loc_820C15A0;
loc_820C159C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_820C15A0:
	// clrlwi. r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x820c159c
	if (!ctx.cr0.eq) goto loc_820C159C;
	// rlwinm r3,r11,29,3,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C15B4"))) PPC_WEAK_FUNC(sub_820C15B4);
PPC_FUNC_IMPL(__imp__sub_820C15B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C15B8"))) PPC_WEAK_FUNC(sub_820C15B8);
PPC_FUNC_IMPL(__imp__sub_820C15B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,-31176
	ctx.r11.s64 = ctx.r11.s64 + -31176;
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x820c15f8
	if (ctx.cr0.eq) goto loc_820C15F8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820C15F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820C15F8:
	// lwz r3,192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820c1618
	if (ctx.cr0.eq) goto loc_820C1618;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820C1618;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820C1618:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820bb250
	ctx.lr = 0x820C1620;
	sub_820BB250(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C1634"))) PPC_WEAK_FUNC(sub_820C1634);
PPC_FUNC_IMPL(__imp__sub_820C1634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C1638"))) PPC_WEAK_FUNC(sub_820C1638);
PPC_FUNC_IMPL(__imp__sub_820C1638) {
	PPC_FUNC_PROLOGUE();
	// li r3,64
	ctx.r3.s64 = 64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C1640"))) PPC_WEAK_FUNC(sub_820C1640);
PPC_FUNC_IMPL(__imp__sub_820C1640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x820c15b8
	ctx.lr = 0x820C1660;
	sub_820C15B8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820c1670
	if (ctx.cr0.eq) goto loc_820C1670;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d4d38
	ctx.lr = 0x820C1670;
	sub_820D4D38(ctx, base);
loc_820C1670:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C168C"))) PPC_WEAK_FUNC(sub_820C168C);
PPC_FUNC_IMPL(__imp__sub_820C168C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C1690"))) PPC_WEAK_FUNC(sub_820C1690);
PPC_FUNC_IMPL(__imp__sub_820C1690) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x820C1698;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,21
	ctx.r5.s64 = 21;
	// lwz r4,200(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// bl 0x822e9960
	ctx.lr = 0x820C16B4;
	sub_822E9960(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820c2dc0
	ctx.lr = 0x820C16BC;
	sub_820C2DC0(ctx, base);
	// addi r11,r1,97
	ctx.r11.s64 = ctx.r1.s64 + 97;
	// lbz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stb r10,163(r31)
	PPC_STORE_U8(ctx.r31.u32 + 163, ctx.r10.u8);
	// stb r8,160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 160, ctx.r8.u8);
	// stb r7,161(r31)
	PPC_STORE_U8(ctx.r31.u32 + 161, ctx.r7.u8);
	// stb r11,162(r31)
	PPC_STORE_U8(ctx.r31.u32 + 162, ctx.r11.u8);
	// stw r9,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r9.u32);
	// lbz r11,162(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 162);
	// cmplwi cr6,r11,67
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 67, ctx.xer);
	// bne cr6,0x820c1708
	if (!ctx.cr6.eq) goto loc_820C1708;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-30932
	ctx.r3.s64 = ctx.r11.s64 + -30932;
	// bl 0x821313e0
	ctx.lr = 0x820C1700;
	sub_821313E0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x820c1800
	goto loc_820C1800;
loc_820C1708:
	// addi r28,r31,168
	ctx.r28.s64 = ctx.r31.s64 + 168;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820c14e8
	ctx.lr = 0x820C1718;
	sub_820C14E8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,36
	ctx.r30.s64 = ctx.r31.s64 + 36;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f31,9512(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9512);
	ctx.f31.f64 = double(temp.f32);
	// lfs f3,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f2,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x820bad68
	ctx.lr = 0x820C173C;
	sub_820BAD68(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f3,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x820bad68
	ctx.lr = 0x820C1750;
	sub_820BAD68(ctx, base);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r8,176(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// addi r11,r29,8
	ctx.r11.s64 = ctx.r29.s64 + 8;
	// neg r9,r9
	ctx.r9.s64 = -ctx.r9.s64;
	// neg r8,r8
	ctx.r8.s64 = -ctx.r8.s64;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// addi r7,r1,97
	ctx.r7.s64 = ctx.r1.s64 + 97;
	// addi r10,r1,98
	ctx.r10.s64 = ctx.r1.s64 + 98;
	// li r6,0
	ctx.r6.s64 = 0;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// addi r3,r29,12
	ctx.r3.s64 = ctx.r29.s64 + 12;
	// lbzx r9,r11,r7
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r9.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lfs f0,9524(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9524);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,9516(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9516);
	ctx.f0.f64 = double(temp.f32);
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,64(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stb r11,188(r31)
	PPC_STORE_U8(ctx.r31.u32 + 188, ctx.r11.u8);
	// stb r10,189(r31)
	PPC_STORE_U8(ctx.r31.u32 + 189, ctx.r10.u8);
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// stb r9,190(r31)
	PPC_STORE_U8(ctx.r31.u32 + 190, ctx.r9.u8);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stw r6,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r6.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
loc_820C1800:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C180C"))) PPC_WEAK_FUNC(sub_820C180C);
PPC_FUNC_IMPL(__imp__sub_820C180C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C1810"))) PPC_WEAK_FUNC(sub_820C1810);
PPC_FUNC_IMPL(__imp__sub_820C1810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e0
	ctx.lr = 0x820C1818;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lhz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 132);
	// bl 0x820b0620
	ctx.lr = 0x820C1834;
	sub_820B0620(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// bl 0x820d8b00
	ctx.lr = 0x820C1848;
	sub_820D8B00(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d89d8
	ctx.lr = 0x820C1850;
	sub_820D89D8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// ble cr6,0x820c1894
	if (!ctx.cr6.gt) goto loc_820C1894;
loc_820C1864:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b90b8
	ctx.lr = 0x820C1874;
	sub_820B90B8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x820c191c
	if (ctx.cr6.eq) goto loc_820C191C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820c1928
	if (ctx.cr6.eq) goto loc_820C1928;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820c1864
	if (ctx.cr6.lt) goto loc_820C1864;
loc_820C1894:
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_820C189C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b90b8
	ctx.lr = 0x820C18AC;
	sub_820B90B8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x820c191c
	if (ctx.cr6.eq) goto loc_820C191C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820c1928
	if (ctx.cr6.eq) goto loc_820C1928;
	// cmpwi cr6,r3,66
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 66, ctx.xer);
	// beq cr6,0x820c1930
	if (ctx.cr6.eq) goto loc_820C1930;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bl 0x820d8a10
	ctx.lr = 0x820C18D0;
	sub_820D8A10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8a98
	ctx.lr = 0x820C18D8;
	sub_820D8A98(ctx, base);
	// lis r11,305
	ctx.r11.s64 = 19988480;
	// ori r11,r11,11520
	ctx.r11.u64 = ctx.r11.u64 | 11520;
	// cmpld cr6,r3,r11
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, ctx.r11.u64, ctx.xer);
	// ble cr6,0x820c18ec
	if (!ctx.cr6.gt) goto loc_820C18EC;
	// li r27,1
	ctx.r27.s64 = 1;
loc_820C18EC:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820c189c
	if (ctx.cr0.eq) goto loc_820C189C;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,-18792(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18792);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,-18792(r11)
	PPC_STORE_U32(ctx.r11.u32 + -18792, ctx.r10.u32);
	// add r11,r9,r29
	ctx.r11.u64 = ctx.r9.u64 + ctx.r29.u64;
loc_820C190C:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_820C1914:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822e9930
	__restgprlr_26(ctx, base);
	return;
loc_820C191C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_820C1920:
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
	// b 0x820c1914
	goto loc_820C1914;
loc_820C1928:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x820c1920
	goto loc_820C1920;
loc_820C1930:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x820c190c
	goto loc_820C190C;
}

__attribute__((alias("__imp__sub_820C193C"))) PPC_WEAK_FUNC(sub_820C193C);
PPC_FUNC_IMPL(__imp__sub_820C193C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C1940"))) PPC_WEAK_FUNC(sub_820C1940);
PPC_FUNC_IMPL(__imp__sub_820C1940) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmpwi cr6,r11,98
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 98, ctx.xer);
	// beq cr6,0x820c1984
	if (ctx.cr6.eq) goto loc_820C1984;
	// cmpwi cr6,r11,99
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 99, ctx.xer);
	// beq cr6,0x820c197c
	if (ctx.cr6.eq) goto loc_820C197C;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// beq cr6,0x820c1974
	if (ctx.cr6.eq) goto loc_820C1974;
	// cmpwi cr6,r11,101
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 101, ctx.xer);
	// beq cr6,0x820c196c
	if (ctx.cr6.eq) goto loc_820C196C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820C196C:
	// li r10,38
	ctx.r10.s64 = 38;
	// b 0x820c1988
	goto loc_820C1988;
loc_820C1974:
	// li r10,39
	ctx.r10.s64 = 39;
	// b 0x820c1988
	goto loc_820C1988;
loc_820C197C:
	// li r10,37
	ctx.r10.s64 = 37;
	// b 0x820c1988
	goto loc_820C1988;
loc_820C1984:
	// li r10,40
	ctx.r10.s64 = 40;
loc_820C1988:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C199C"))) PPC_WEAK_FUNC(sub_820C199C);
PPC_FUNC_IMPL(__imp__sub_820C199C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C19A0"))) PPC_WEAK_FUNC(sub_820C19A0);
PPC_FUNC_IMPL(__imp__sub_820C19A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x820c1a3c
	if (!ctx.cr6.eq) goto loc_820C1A3C;
	// lwz r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820c1a2c
	if (ctx.cr0.eq) goto loc_820C1A2C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820c1a2c
	if (ctx.cr0.eq) goto loc_820C1A2C;
	// bl 0x820b2fb8
	ctx.lr = 0x820C19F8;
	sub_820B2FB8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820C1A14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// beq 0x820c1a34
	if (ctx.cr0.eq) goto loc_820C1A34;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x820c1a38
	goto loc_820C1A38;
loc_820C1A2C:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_820C1A34:
	// li r10,0
	ctx.r10.s64 = 0;
loc_820C1A38:
	// stb r10,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r10.u8);
loc_820C1A3C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C1A54"))) PPC_WEAK_FUNC(sub_820C1A54);
PPC_FUNC_IMPL(__imp__sub_820C1A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C1A58"))) PPC_WEAK_FUNC(sub_820C1A58);
PPC_FUNC_IMPL(__imp__sub_820C1A58) {
	PPC_FUNC_PROLOGUE();
	// li r3,8192
	ctx.r3.s64 = 8192;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C1A60"))) PPC_WEAK_FUNC(sub_820C1A60);
PPC_FUNC_IMPL(__imp__sub_820C1A60) {
	PPC_FUNC_PROLOGUE();
	// li r3,4096
	ctx.r3.s64 = 4096;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C1A68"))) PPC_WEAK_FUNC(sub_820C1A68);
PPC_FUNC_IMPL(__imp__sub_820C1A68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x820c1ac4
	if (ctx.cr6.eq) goto loc_820C1AC4;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x820c1aa8
	if (ctx.cr6.eq) goto loc_820C1AA8;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// bne cr6,0x820c1ac8
	if (!ctx.cr6.eq) goto loc_820C1AC8;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
loc_820C1A90:
	// lfs f13,9472(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9472);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820c1aa0
	if (!ctx.cr6.lt) goto loc_820C1AA0;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_820C1AA0:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// blr 
	return;
loc_820C1AA8:
	// lwa r11,4(r3)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r3.u32 + 4));
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// b 0x820c1a90
	goto loc_820C1A90;
loc_820C1AC4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
loc_820C1AC8:
	// lfs f1,9472(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9472);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C1AD0"))) PPC_WEAK_FUNC(sub_820C1AD0);
PPC_FUNC_IMPL(__imp__sub_820C1AD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// addi r11,r11,-9
	ctx.r11.s64 = ctx.r11.s64 + -9;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bgt cr6,0x820c1dbc
	if (ctx.cr6.gt) goto loc_820C1DBC;
	// lis r12,-32254
	ctx.r12.s64 = -2113798144;
	// addi r12,r12,-31192
	ctx.r12.s64 = ctx.r12.s64 + -31192;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32244
	ctx.r12.s64 = -2113142784;
	// addi r12,r12,6952
	ctx.r12.s64 = ctx.r12.s64 + 6952;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_820C1B28;
	case 1:
		goto loc_820C1B38;
	case 2:
		goto loc_820C1B4C;
	case 3:
		goto loc_820C1B5C;
	case 4:
		goto loc_820C1B7C;
	case 5:
		goto loc_820C1BF8;
	case 6:
		goto loc_820C1C08;
	case 7:
		goto loc_820C1C84;
	case 8:
		goto loc_820C1C60;
	case 9:
		goto loc_820C1CA4;
	case 10:
		goto loc_820C1CBC;
	case 11:
		goto loc_820C1CF0;
	case 12:
		goto loc_820C1D00;
	case 13:
		goto loc_820C1D94;
	case 14:
		goto loc_820C1DA4;
	default:
		__builtin_unreachable();
	}
loc_820C1B28:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x820c1a68
	ctx.lr = 0x820C1B30;
	sub_820C1A68(ctx, base);
loc_820C1B30:
	// stfs f1,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// b 0x820c1db4
	goto loc_820C1DB4;
loc_820C1B38:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x820b2e60
	ctx.lr = 0x820C1B40;
	sub_820B2E60(ctx, base);
	// bl 0x822ea250
	ctx.lr = 0x820C1B44;
	sub_822EA250(ctx, base);
loc_820C1B44:
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// b 0x820c1db0
	goto loc_820C1DB0;
loc_820C1B4C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x820b2e60
	ctx.lr = 0x820C1B54;
	sub_820B2E60(ctx, base);
	// bl 0x822ea258
	ctx.lr = 0x820C1B58;
	sub_822EA258(ctx, base);
	// b 0x820c1b44
	goto loc_820C1B44;
loc_820C1B5C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x820b2e60
	ctx.lr = 0x820C1B64;
	sub_820B2E60(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x820b2e60
	ctx.lr = 0x820C1B70;
	sub_820B2E60(ctx, base);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x822ea340
	ctx.lr = 0x820C1B78;
	sub_822EA340(ctx, base);
	// b 0x820c1b44
	goto loc_820C1B44;
loc_820C1B7C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x820b2e60
	ctx.lr = 0x820C1B84;
	sub_820B2E60(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,9472(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9472);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x820c1b9c
	if (!ctx.cr6.eq) goto loc_820C1B9C;
loc_820C1B94:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820c1be8
	goto loc_820C1BE8;
loc_820C1B9C:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// ble cr6,0x820c1bdc
	if (!ctx.cr6.gt) goto loc_820C1BDC;
	// fctiwz f13,f1
	ctx.f13.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfiwx f13,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f13.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fsubs f13,f1,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x820c1be8
	if (ctx.cr6.eq) goto loc_820C1BE8;
loc_820C1BD4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x820c1be8
	goto loc_820C1BE8;
loc_820C1BDC:
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_820C1BE8:
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// b 0x820c1dbc
	goto loc_820C1DBC;
loc_820C1BF8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x820b2e60
	ctx.lr = 0x820C1C00;
	sub_820B2E60(ctx, base);
	// bl 0x822ea540
	ctx.lr = 0x820C1C04;
	sub_822EA540(ctx, base);
	// b 0x820c1b44
	goto loc_820C1B44;
loc_820C1C08:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x820b2e60
	ctx.lr = 0x820C1C10;
	sub_820B2E60(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,9472(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9472);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x820c1b94
	if (ctx.cr6.eq) goto loc_820C1B94;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// bge cr6,0x820c1bdc
	if (!ctx.cr6.lt) goto loc_820C1BDC;
	// fctiwz f13,f1
	ctx.f13.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfiwx f13,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f13.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fsubs f13,f1,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x820c1be8
	if (ctx.cr6.eq) goto loc_820C1BE8;
loc_820C1C58:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x820c1be8
	goto loc_820C1BE8;
loc_820C1C60:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x820b2e60
	ctx.lr = 0x820C1C68;
	sub_820B2E60(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x820b2e60
	ctx.lr = 0x820C1C74;
	sub_820B2E60(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bgt cr6,0x820c1b30
	if (ctx.cr6.gt) goto loc_820C1B30;
loc_820C1C7C:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// b 0x820c1b30
	goto loc_820C1B30;
loc_820C1C84:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x820b2e60
	ctx.lr = 0x820C1C8C;
	sub_820B2E60(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x820b2e60
	ctx.lr = 0x820C1C98;
	sub_820B2E60(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// blt cr6,0x820c1b30
	if (ctx.cr6.lt) goto loc_820C1B30;
	// b 0x820c1c7c
	goto loc_820C1C7C;
loc_820C1CA4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r10,16
	ctx.r10.s64 = 16;
	// lfs f0,-31200(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31200);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// b 0x820c1dbc
	goto loc_820C1DBC;
loc_820C1CBC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x820b2e60
	ctx.lr = 0x820C1CC4;
	sub_820B2E60(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x820b2fb8
	ctx.lr = 0x820C1CD0;
	sub_820B2FB8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lfs f0,9580(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9580);
	ctx.f0.f64 = double(temp.f32);
	// ble 0x820c1db0
	if (!ctx.cr0.gt) goto loc_820C1DB0;
loc_820C1CE0:
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// fmuls f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bne 0x820c1ce0
	if (!ctx.cr0.eq) goto loc_820C1CE0;
	// b 0x820c1db0
	goto loc_820C1DB0;
loc_820C1CF0:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lwz r3,9756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9756);
	// bl 0x820d9908
	ctx.lr = 0x820C1CFC;
	sub_820D9908(ctx, base);
	// b 0x820c1b30
	goto loc_820C1B30;
loc_820C1D00:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x820b2e60
	ctx.lr = 0x820C1D08;
	sub_820B2E60(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,9472(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9472);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x820c1b94
	if (ctx.cr6.eq) goto loc_820C1B94;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// fctiwz f0,f1
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// bge cr6,0x820c1d64
	if (!ctx.cr6.lt) goto loc_820C1D64;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f13,9488(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9488);
	ctx.f13.f64 = double(temp.f32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fsubs f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x820c1be8
	if (ctx.cr6.lt) goto loc_820C1BE8;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x820c1be8
	if (!ctx.cr6.gt) goto loc_820C1BE8;
	// b 0x820c1c58
	goto loc_820C1C58;
loc_820C1D64:
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f13,9488(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9488);
	ctx.f13.f64 = double(temp.f32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fsubs f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x820c1bd4
	if (ctx.cr6.gt) goto loc_820C1BD4;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x820c1be8
	if (ctx.cr6.lt) goto loc_820C1BE8;
	// b 0x820c1bd4
	goto loc_820C1BD4;
loc_820C1D94:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x820b2e60
	ctx.lr = 0x820C1D9C;
	sub_820B2E60(ctx, base);
	// bl 0x822ea470
	ctx.lr = 0x820C1DA0;
	sub_822EA470(ctx, base);
	// b 0x820c1b44
	goto loc_820C1B44;
loc_820C1DA4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x820b2e60
	ctx.lr = 0x820C1DAC;
	sub_820B2E60(ctx, base);
	// fsqrts f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(sqrt(ctx.f1.f64)));
loc_820C1DB0:
	// stfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
loc_820C1DB4:
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_820C1DBC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C1DD8"))) PPC_WEAK_FUNC(sub_820C1DD8);
PPC_FUNC_IMPL(__imp__sub_820C1DD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x820C1DE0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x820bacc8
	ctx.lr = 0x820C1DF0;
	sub_820BACC8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r11,-31176
	ctx.r11.s64 = ctx.r11.s64 + -31176;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,22
	ctx.r3.s64 = 22;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r31,180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 180, ctx.r31.u32);
	// stw r31,176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 176, ctx.r31.u32);
	// stw r31,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r31.u32);
	// stw r31,168(r30)
	PPC_STORE_U32(ctx.r30.u32 + 168, ctx.r31.u32);
	// stw r31,200(r30)
	PPC_STORE_U32(ctx.r30.u32 + 200, ctx.r31.u32);
	// bl 0x820d4c58
	ctx.lr = 0x820C1E20;
	sub_820D4C58(ctx, base);
	// li r11,148
	ctx.r11.s64 = 148;
	// li r3,28
	ctx.r3.s64 = 28;
	// sth r11,138(r30)
	PPC_STORE_U16(ctx.r30.u32 + 138, ctx.r11.u16);
	// bl 0x820d4cd8
	ctx.lr = 0x820C1E30;
	sub_820D4CD8(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820c1e68
	if (ctx.cr0.eq) goto loc_820C1E68;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r11,r11,-30844
	ctx.r11.s64 = ctx.r11.s64 + -30844;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
	// stb r31,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r31.u8);
	// stb r31,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r31.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x820c1e6c
	goto loc_820C1E6C;
loc_820C1E68:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_820C1E6C:
	// li r3,28
	ctx.r3.s64 = 28;
	// stw r10,196(r30)
	PPC_STORE_U32(ctx.r30.u32 + 196, ctx.r10.u32);
	// bl 0x820d4cd8
	ctx.lr = 0x820C1E78;
	sub_820D4CD8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820c1eac
	if (ctx.cr0.eq) goto loc_820C1EAC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r11,r11,-30888
	ctx.r11.s64 = ctx.r11.s64 + -30888;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
	// stb r31,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r31.u8);
	// stb r31,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r31.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x820c1eb0
	goto loc_820C1EB0;
loc_820C1EAC:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_820C1EB0:
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r10,192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 192, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,160
	ctx.r3.s64 = ctx.r30.s64 + 160;
	// bl 0x822e9ff0
	ctx.lr = 0x820C1EC4;
	sub_822E9FF0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820b7af8
	ctx.lr = 0x820C1ED0;
	sub_820B7AF8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820d4c98
	ctx.lr = 0x820C1ED8;
	sub_820D4C98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C1EE4"))) PPC_WEAK_FUNC(sub_820C1EE4);
PPC_FUNC_IMPL(__imp__sub_820C1EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C1EE8"))) PPC_WEAK_FUNC(sub_820C1EE8);
PPC_FUNC_IMPL(__imp__sub_820C1EE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x820C1EF0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// li r28,0
	ctx.r28.s64 = 0;
loc_820C1F04:
	// lhz r11,134(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 134);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820c1f18
	if (!ctx.cr0.eq) goto loc_820C1F18;
	// sth r27,134(r31)
	PPC_STORE_U16(ctx.r31.u32 + 134, ctx.r27.u16);
	// sth r27,132(r31)
	PPC_STORE_U16(ctx.r31.u32 + 132, ctx.r27.u16);
loc_820C1F18:
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x820be7e0
	ctx.lr = 0x820C1F20;
	sub_820BE7E0(ctx, base);
	// lwz r11,6728(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6728);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r11,1618
	ctx.r10.s64 = ctx.r11.s64 + 1618;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,6728(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6728, ctx.r11.u32);
	// stwx r31,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r31.u32);
	// beq cr6,0x820c1f4c
	if (ctx.cr6.eq) goto loc_820C1F4C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820c1f5c
	if (!ctx.cr6.eq) goto loc_820C1F5C;
loc_820C1F4C:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// lwz r5,116(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lhz r4,134(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 134);
	// bl 0x820beca0
	ctx.lr = 0x820C1F5C;
	sub_820BECA0(ctx, base);
loc_820C1F5C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c1810
	ctx.lr = 0x820C1F6C;
	sub_820C1810(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x820be7e0
	ctx.lr = 0x820C1F78;
	sub_820BE7E0(ctx, base);
	// lwz r11,6728(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6728);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r11,r11,1618
	ctx.r11.s64 = ctx.r11.s64 + 1618;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r28.u32);
	// lwz r11,6728(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6728);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,6728(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6728, ctx.r11.u32);
	// bne cr6,0x820c1fb4
	if (!ctx.cr6.eq) goto loc_820C1FB4;
	// lhz r11,134(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 134);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,134(r31)
	PPC_STORE_U16(ctx.r31.u32 + 134, ctx.r11.u16);
	// sth r11,132(r31)
	PPC_STORE_U16(ctx.r31.u32 + 132, ctx.r11.u16);
	// b 0x820c1f04
	goto loc_820C1F04;
loc_820C1FB4:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x820c1fe0
	if (!ctx.cr6.eq) goto loc_820C1FE0;
	// lhz r11,134(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 134);
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r28,134(r31)
	PPC_STORE_U16(ctx.r31.u32 + 134, ctx.r28.u16);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// sth r28,132(r31)
	PPC_STORE_U16(ctx.r31.u32 + 132, ctx.r28.u16);
	// stw r28,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r28.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,136(r31)
	PPC_STORE_U16(ctx.r31.u32 + 136, ctx.r11.u16);
	// b 0x820c1fe4
	goto loc_820C1FE4;
loc_820C1FE0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820C1FE4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C1FEC"))) PPC_WEAK_FUNC(sub_820C1FEC);
PPC_FUNC_IMPL(__imp__sub_820C1FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C1FF0"))) PPC_WEAK_FUNC(sub_820C1FF0);
PPC_FUNC_IMPL(__imp__sub_820C1FF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820b3880
	ctx.lr = 0x820C2008;
	sub_820B3880(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r11.u8);
	// lbz r11,82(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 82);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stb r11,82(r31)
	PPC_STORE_U8(ctx.r31.u32 + 82, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C2030"))) PPC_WEAK_FUNC(sub_820C2030);
PPC_FUNC_IMPL(__imp__sub_820C2030) {
	PPC_FUNC_PROLOGUE();
	// stw r4,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r4.u32);
	// stw r5,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C203C"))) PPC_WEAK_FUNC(sub_820C203C);
PPC_FUNC_IMPL(__imp__sub_820C203C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C2040"))) PPC_WEAK_FUNC(sub_820C2040);
PPC_FUNC_IMPL(__imp__sub_820C2040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x820c74f0
	ctx.lr = 0x820C2068;
	sub_820C74F0(ctx, base);
	// addi r31,r31,96
	ctx.r31.s64 = ctx.r31.s64 + 96;
	// li r11,5
	ctx.r11.s64 = 5;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_820C2078:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x820c2078
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820C2078;
	// lwa r11,8(r30)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r30.u32 + 8));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwa r10,0(r30)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r30.u32 + 0));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfs f31,9524(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9524);
	ctx.f31.f64 = double(temp.f32);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f2,f0,f31
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f1,f13,f31
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// bl 0x820db1a8
	ctx.lr = 0x820C20CC;
	sub_820DB1A8(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwa r11,12(r30)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r30.u32 + 12));
	// lwa r10,4(r30)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r30.u32 + 4));
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f2,f0,f31
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f1,f13,f31
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// bl 0x820db1a8
	ctx.lr = 0x820C2104;
	sub_820DB1A8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c7940
	ctx.lr = 0x820C2110;
	sub_820C7940(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c7940
	ctx.lr = 0x820C211C;
	sub_820C7940(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C2138"))) PPC_WEAK_FUNC(sub_820C2138);
PPC_FUNC_IMPL(__imp__sub_820C2138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x820C2140;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r3,116(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820c2168
	if (ctx.cr0.eq) goto loc_820C2168;
	// bl 0x820d4d38
	ctx.lr = 0x820C2164;
	sub_820D4D38(ctx, base);
	// stw r28,116(r29)
	PPC_STORE_U32(ctx.r29.u32 + 116, ctx.r28.u32);
loc_820C2168:
	// lwz r3,120(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820c217c
	if (ctx.cr0.eq) goto loc_820C217C;
	// bl 0x820d4d38
	ctx.lr = 0x820C2178;
	sub_820D4D38(ctx, base);
	// stw r28,120(r29)
	PPC_STORE_U32(ctx.r29.u32 + 120, ctx.r28.u32);
loc_820C217C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x820c218c
	if (!ctx.cr6.eq) goto loc_820C218C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820c2328
	goto loc_820C2328;
loc_820C218C:
	// lwz r11,124(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820c2208
	if (ctx.cr6.eq) goto loc_820C2208;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lwz r3,9796(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9796);
	// bl 0x82080df8
	ctx.lr = 0x820C21A4;
	sub_82080DF8(ctx, base);
	// lwz r10,124(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 124);
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// mulli r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 * 10;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r11,r11,152
	ctx.r11.s64 = ctx.r11.s64 + 152;
	// addi r10,r10,-10
	ctx.r10.s64 = ctx.r10.s64 + -10;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822eac18
	ctx.lr = 0x820C21CC;
	sub_822EAC18(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x820c2200
	if (ctx.cr0.eq) goto loc_820C2200;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x820c21f0
	if (!ctx.cr6.gt) goto loc_820C21F0;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_820C21F0:
	// bl 0x820d4cd8
	ctx.lr = 0x820C21F4;
	sub_820D4CD8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r3,120(r29)
	PPC_STORE_U32(ctx.r29.u32 + 120, ctx.r3.u32);
	// bl 0x822eabf8
	ctx.lr = 0x820C2200;
	sub_822EABF8(ctx, base);
loc_820C2200:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x820c2328
	goto loc_820C2328;
loc_820C2208:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_820C2210:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820c2210
	if (!ctx.cr6.eq) goto loc_820C2210;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// clrlwi. r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// rotlwi r31,r11,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x820c22f4
	if (ctx.cr0.eq) goto loc_820C22F4;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// beq cr6,0x820c2324
	if (ctx.cr6.eq) goto loc_820C2324;
loc_820C2248:
	// clrlwi. r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lbzx r8,r11,r30
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// beq 0x820c2264
	if (ctx.cr0.eq) goto loc_820C2264;
	// cmplwi cr6,r8,62
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 62, ctx.xer);
	// bne cr6,0x820c2278
	if (!ctx.cr6.eq) goto loc_820C2278;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// b 0x820c2278
	goto loc_820C2278;
loc_820C2264:
	// cmplwi cr6,r8,60
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 60, ctx.xer);
	// bne cr6,0x820c2274
	if (!ctx.cr6.eq) goto loc_820C2274;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x820c2278
	goto loc_820C2278;
loc_820C2274:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_820C2278:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x820c2248
	if (ctx.cr6.lt) goto loc_820C2248;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820c2324
	if (ctx.cr6.eq) goto loc_820C2324;
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// bl 0x820d4cd8
	ctx.lr = 0x820C2294;
	sub_820D4CD8(ctx, base);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stw r3,116(r29)
	PPC_STORE_U32(ctx.r29.u32 + 116, ctx.r3.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_820C22A4:
	// clrlwi. r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// beq 0x820c22c0
	if (ctx.cr0.eq) goto loc_820C22C0;
	// cmplwi cr6,r10,62
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 62, ctx.xer);
	// bne cr6,0x820c22dc
	if (!ctx.cr6.eq) goto loc_820C22DC;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// b 0x820c22dc
	goto loc_820C22DC;
loc_820C22C0:
	// cmplwi cr6,r10,60
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 60, ctx.xer);
	// bne cr6,0x820c22d0
	if (!ctx.cr6.eq) goto loc_820C22D0;
	// li r8,1
	ctx.r8.s64 = 1;
	// b 0x820c22dc
	goto loc_820C22DC;
loc_820C22D0:
	// lwz r7,116(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// stbx r10,r9,r7
	PPC_STORE_U8(ctx.r9.u32 + ctx.r7.u32, ctx.r10.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_820C22DC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x820c22a4
	if (ctx.cr6.lt) goto loc_820C22A4;
	// lwz r11,116(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// stbx r28,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r28.u8);
	// b 0x820c2324
	goto loc_820C2324;
loc_820C22F4:
	// beq cr6,0x820c2324
	if (ctx.cr6.eq) goto loc_820C2324;
	// addi r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 1;
	// bl 0x820d4cd8
	ctx.lr = 0x820C2300;
	sub_820D4CD8(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r3,116(r29)
	PPC_STORE_U32(ctx.r29.u32 + 116, ctx.r3.u32);
loc_820C230C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne 0x820c230c
	if (!ctx.cr0.eq) goto loc_820C230C;
loc_820C2324:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820C2328:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C2330"))) PPC_WEAK_FUNC(sub_820C2330);
PPC_FUNC_IMPL(__imp__sub_820C2330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x820C2338;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r3,116(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820c2360
	if (ctx.cr0.eq) goto loc_820C2360;
	// bl 0x820d4d38
	ctx.lr = 0x820C235C;
	sub_820D4D38(ctx, base);
	// stw r28,116(r29)
	PPC_STORE_U32(ctx.r29.u32 + 116, ctx.r28.u32);
loc_820C2360:
	// lwz r3,120(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820c2374
	if (ctx.cr0.eq) goto loc_820C2374;
	// bl 0x820d4d38
	ctx.lr = 0x820C2370;
	sub_820D4D38(ctx, base);
	// stw r28,120(r29)
	PPC_STORE_U32(ctx.r29.u32 + 120, ctx.r28.u32);
loc_820C2374:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x820c2384
	if (!ctx.cr6.eq) goto loc_820C2384;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820c2538
	goto loc_820C2538;
loc_820C2384:
	// lwz r11,124(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820c2400
	if (ctx.cr6.eq) goto loc_820C2400;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lwz r3,9796(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9796);
	// bl 0x82080df8
	ctx.lr = 0x820C239C;
	sub_82080DF8(ctx, base);
	// lwz r10,124(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 124);
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// mulli r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 * 10;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r11,r11,152
	ctx.r11.s64 = ctx.r11.s64 + 152;
	// addi r10,r10,-10
	ctx.r10.s64 = ctx.r10.s64 + -10;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822eac18
	ctx.lr = 0x820C23C4;
	sub_822EAC18(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x820c23f8
	if (ctx.cr0.eq) goto loc_820C23F8;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x820c23e8
	if (!ctx.cr6.gt) goto loc_820C23E8;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_820C23E8:
	// bl 0x820d4cd8
	ctx.lr = 0x820C23EC;
	sub_820D4CD8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r3,120(r29)
	PPC_STORE_U32(ctx.r29.u32 + 120, ctx.r3.u32);
	// bl 0x822eabf8
	ctx.lr = 0x820C23F8;
	sub_822EABF8(ctx, base);
loc_820C23F8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x820c2538
	goto loc_820C2538;
loc_820C2400:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822eac18
	ctx.lr = 0x820C2408;
	sub_822EAC18(ctx, base);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// clrlwi. r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x820c2504
	if (ctx.cr0.eq) goto loc_820C2504;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// beq cr6,0x820c2534
	if (ctx.cr6.eq) goto loc_820C2534;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_820C242C:
	// clrlwi. r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// beq 0x820c2448
	if (ctx.cr0.eq) goto loc_820C2448;
	// cmplwi cr6,r7,62
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 62, ctx.xer);
	// bne cr6,0x820c245c
	if (!ctx.cr6.eq) goto loc_820C245C;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// b 0x820c245c
	goto loc_820C245C;
loc_820C2448:
	// cmplwi cr6,r7,60
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 60, ctx.xer);
	// bne cr6,0x820c2458
	if (!ctx.cr6.eq) goto loc_820C2458;
	// li r9,1
	ctx.r9.s64 = 1;
	// b 0x820c245c
	goto loc_820C245C;
loc_820C2458:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_820C245C:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bne 0x820c242c
	if (!ctx.cr0.eq) goto loc_820C242C;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820c2534
	if (ctx.cr6.eq) goto loc_820C2534;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x820c248c
	if (!ctx.cr6.gt) goto loc_820C248C;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_820C248C:
	// bl 0x820d4cd8
	ctx.lr = 0x820C2490;
	sub_820D4CD8(ctx, base);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r3,120(r29)
	PPC_STORE_U32(ctx.r29.u32 + 120, ctx.r3.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_820C24A8:
	// clrlwi. r8,r7,24
	ctx.r8.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x820c24c4
	if (ctx.cr0.eq) goto loc_820C24C4;
	// lhz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,62
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 62, ctx.xer);
	// bne cr6,0x820c24e8
	if (!ctx.cr6.eq) goto loc_820C24E8;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// b 0x820c24e8
	goto loc_820C24E8;
loc_820C24C4:
	// lhz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,60
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 60, ctx.xer);
	// bne cr6,0x820c24d8
	if (!ctx.cr6.eq) goto loc_820C24D8;
	// li r7,1
	ctx.r7.s64 = 1;
	// b 0x820c24e8
	goto loc_820C24E8;
loc_820C24D8:
	// lwz r5,120(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r8,r11,r5
	PPC_STORE_U16(ctx.r11.u32 + ctx.r5.u32, ctx.r8.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_820C24E8:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// bne 0x820c24a8
	if (!ctx.cr0.eq) goto loc_820C24A8;
	// lwz r11,120(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r28,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r28.u16);
	// b 0x820c2534
	goto loc_820C2534;
loc_820C2504:
	// beq cr6,0x820c2534
	if (ctx.cr6.eq) goto loc_820C2534;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x820c2524
	if (!ctx.cr6.gt) goto loc_820C2524;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_820C2524:
	// bl 0x820d4cd8
	ctx.lr = 0x820C2528;
	sub_820D4CD8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r3,120(r29)
	PPC_STORE_U32(ctx.r29.u32 + 120, ctx.r3.u32);
	// bl 0x822eabf8
	ctx.lr = 0x820C2534;
	sub_822EABF8(ctx, base);
loc_820C2534:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820C2538:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C2540"))) PPC_WEAK_FUNC(sub_820C2540);
PPC_FUNC_IMPL(__imp__sub_820C2540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820b3a60
	ctx.lr = 0x820C255C;
	sub_820B3A60(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stb r30,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r30.u8);
	// beq 0x820c2580
	if (ctx.cr0.eq) goto loc_820C2580;
	// bl 0x820d4d38
	ctx.lr = 0x820C257C;
	sub_820D4D38(ctx, base);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
loc_820C2580:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820c2594
	if (ctx.cr0.eq) goto loc_820C2594;
	// bl 0x820d4d38
	ctx.lr = 0x820C2590;
	sub_820D4D38(ctx, base);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
loc_820C2594:
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820c25a8
	if (ctx.cr0.eq) goto loc_820C25A8;
	// bl 0x820d4d38
	ctx.lr = 0x820C25A4;
	sub_820D4D38(ctx, base);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
loc_820C25A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C25C0"))) PPC_WEAK_FUNC(sub_820C25C0);
PPC_FUNC_IMPL(__imp__sub_820C25C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98d8
	ctx.lr = 0x820C25C8;
	__savegprlr_24(ctx, base);
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// lbz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 128);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820c2920
	if (ctx.cr0.eq) goto loc_820C2920;
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x820c2608
	if (!ctx.cr0.eq) goto loc_820C2608;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-30792
	ctx.r3.s64 = ctx.r11.s64 + -30792;
	// bl 0x821313e0
	ctx.lr = 0x820C2604;
	sub_821313E0(ctx, base);
	// b 0x820c2920
	goto loc_820C2920;
loc_820C2608:
	// lwz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820c2620
	if (!ctx.cr6.eq) goto loc_820C2620;
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c2920
	if (ctx.cr6.eq) goto loc_820C2920;
loc_820C2620:
	// bl 0x820b4fe8
	ctx.lr = 0x820C2624;
	sub_820B4FE8(ctx, base);
	// lis r28,-32205
	ctx.r28.s64 = -2110586880;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,9788(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 9788);
	// bl 0x820da488
	ctx.lr = 0x820C2634;
	sub_820DA488(ctx, base);
	// lwz r11,8400(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8400);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,493
	ctx.r11.s64 = ctx.r11.s64 + 493;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820db410
	ctx.lr = 0x820C2654;
	sub_820DB410(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r29,r11,8,0,23
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// bl 0x820db410
	ctx.lr = 0x820C267C;
	sub_820DB410(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// or r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 | ctx.r29.u64;
	// rlwinm r29,r11,8,0,23
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// bl 0x820db410
	ctx.lr = 0x820C26A8;
	sub_820DB410(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// or r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 | ctx.r29.u64;
	// rlwinm r31,r11,8,0,23
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// bl 0x820db410
	ctx.lr = 0x820C26D4;
	sub_820DB410(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// or r25,r11,r31
	ctx.r25.u64 = ctx.r11.u64 | ctx.r31.u64;
	// bl 0x820b4ff0
	ctx.lr = 0x820C26F8;
	sub_820B4FF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x820db190
	ctx.lr = 0x820C2704;
	sub_820DB190(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820c27c0
	if (ctx.cr6.lt) goto loc_820C27C0;
	// beq cr6,0x820c277c
	if (ctx.cr6.eq) goto loc_820C277C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x820c272c
	if (ctx.cr6.lt) goto loc_820C272C;
	// ld r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 96);
	// li r29,1
	ctx.r29.s64 = 1;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// b 0x820c2804
	goto loc_820C2804;
loc_820C272C:
	// addi r31,r30,96
	ctx.r31.s64 = ctx.r30.s64 + 96;
	// addi r4,r30,104
	ctx.r4.s64 = ctx.r30.s64 + 104;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r29,2
	ctx.r29.s64 = 2;
	// bl 0x820db240
	ctx.lr = 0x820C2744;
	sub_820DB240(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lfs f0,9488(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9488);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x820db1d0
	ctx.lr = 0x820C2760;
	sub_820DB1D0(ctx, base);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x820db1f0
	ctx.lr = 0x820C2770;
	sub_820DB1F0(ctx, base);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// b 0x820c2804
	goto loc_820C2804;
loc_820C277C:
	// ld r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 104);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r29,0
	ctx.r29.s64 = 0;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// bl 0x820db1b8
	ctx.lr = 0x820C2794;
	sub_820DB1B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,9524(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9524);
	ctx.f0.f64 = double(temp.f32);
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fnmsubs f0,f12,f0,f13
	ctx.f0.f64 = double(float(-(ctx.f12.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// b 0x820c2800
	goto loc_820C2800;
loc_820C27C0:
	// ld r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 96);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r29,1
	ctx.r29.s64 = 1;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// bl 0x820db1b8
	ctx.lr = 0x820C27D8;
	sub_820DB1B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lhz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,9524(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9524);
	ctx.f0.f64 = double(temp.f32);
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
loc_820C2800:
	// stfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
loc_820C2804:
	// lwz r11,7884(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7884);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,187
	ctx.r11.s64 = ctx.r11.s64 + 187;
	// mulli r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 * 36;
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820b5a08
	ctx.lr = 0x820C2824;
	sub_820B5A08(ctx, base);
	// lwz r27,116(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// lfs f31,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f31.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f30,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// cmplwi r27,0
	ctx.cr0.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// beq 0x820c28b0
	if (ctx.cr0.eq) goto loc_820C28B0;
	// bl 0x820db1b8
	ctx.lr = 0x820C2844;
	sub_820DB1B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x820db1b8
	ctx.lr = 0x820C2854;
	sub_820DB1B8(ctx, base);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lwz r3,9788(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 9788);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stfiwx f0,0,r8
	PPC_STORE_U32(ctx.r8.u32, ctx.f0.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// lfs f0,10640(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 10640);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f31,f0
	ctx.f2.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fmuls f1,f30,f0
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x820da3f0
	ctx.lr = 0x820C28AC;
	sub_820DA3F0(ctx, base);
	// b 0x820c2920
	goto loc_820C2920;
loc_820C28B0:
	// bl 0x820db1b8
	ctx.lr = 0x820C28B4;
	sub_820DB1B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x820db1b8
	ctx.lr = 0x820C28C4;
	sub_820DB1B8(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r6,120(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lwz r3,9788(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 9788);
	// lfs f0,10640(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 10640);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stfiwx f13,0,r7
	PPC_STORE_U32(ctx.r7.u32, ctx.f13.u32);
	// fmuls f2,f31,f0
	ctx.f2.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fmuls f1,f30,f0
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x820da2f0
	ctx.lr = 0x820C2920;
	sub_820DA2F0(ctx, base);
loc_820C2920:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x822e9928
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C2934"))) PPC_WEAK_FUNC(sub_820C2934);
PPC_FUNC_IMPL(__imp__sub_820C2934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C2938"))) PPC_WEAK_FUNC(sub_820C2938);
PPC_FUNC_IMPL(__imp__sub_820C2938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x820C2940;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,136(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820c2964
	if (ctx.cr0.eq) goto loc_820C2964;
	// bl 0x820d4d38
	ctx.lr = 0x820C295C;
	sub_820D4D38(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,136(r29)
	PPC_STORE_U32(ctx.r29.u32 + 136, ctx.r11.u32);
loc_820C2964:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x820c2974
	if (!ctx.cr6.eq) goto loc_820C2974;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820c29cc
	goto loc_820C29CC;
loc_820C2974:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_820C297C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820c297c
	if (!ctx.cr6.eq) goto loc_820C297C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi. r31,r11,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x820c29c8
	if (ctx.cr0.eq) goto loc_820C29C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d4cd8
	ctx.lr = 0x820C29A4;
	sub_820D4CD8(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r3,136(r29)
	PPC_STORE_U32(ctx.r29.u32 + 136, ctx.r3.u32);
loc_820C29B0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne 0x820c29b0
	if (!ctx.cr0.eq) goto loc_820C29B0;
loc_820C29C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820C29CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C29D4"))) PPC_WEAK_FUNC(sub_820C29D4);
PPC_FUNC_IMPL(__imp__sub_820C29D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C29D8"))) PPC_WEAK_FUNC(sub_820C29D8);
PPC_FUNC_IMPL(__imp__sub_820C29D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c2a94
	if (ctx.cr6.eq) goto loc_820C2A94;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820c2a94
	if (ctx.cr0.eq) goto loc_820C2A94;
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmpwi cr6,r11,109
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 109, ctx.xer);
	// beq cr6,0x820c2a78
	if (ctx.cr6.eq) goto loc_820C2A78;
	// cmpwi cr6,r11,123
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 123, ctx.xer);
	// beq cr6,0x820c2a6c
	if (ctx.cr6.eq) goto loc_820C2A6C;
	// cmpwi cr6,r11,124
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 124, ctx.xer);
	// bne cr6,0x820c2a94
	if (!ctx.cr6.eq) goto loc_820C2A94;
	// bl 0x820b3040
	ctx.lr = 0x820C2A3C;
	sub_820B3040(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// sth r11,132(r31)
	PPC_STORE_U16(ctx.r31.u32 + 132, ctx.r11.u16);
	// bl 0x820be7e0
	ctx.lr = 0x820C2A4C;
	sub_820BE7E0(ctx, base);
	// lhz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 132);
	// lwz r3,8536(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8536);
	// bl 0x820dab58
	ctx.lr = 0x820C2A58;
	sub_820DAB58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x820c2138
	ctx.lr = 0x820C2A68;
	sub_820C2138(ctx, base);
	// b 0x820c2a94
	goto loc_820C2A94;
loc_820C2A6C:
	// bl 0x820b2fb8
	ctx.lr = 0x820C2A70;
	sub_820B2FB8(ctx, base);
	// stw r3,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r3.u32);
	// b 0x820c2a94
	goto loc_820C2A94;
loc_820C2A78:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x820b2dc8
	ctx.lr = 0x820C2A80;
	sub_820B2DC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820C2A94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820C2A94:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C2AAC"))) PPC_WEAK_FUNC(sub_820C2AAC);
PPC_FUNC_IMPL(__imp__sub_820C2AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C2AB0"))) PPC_WEAK_FUNC(sub_820C2AB0);
PPC_FUNC_IMPL(__imp__sub_820C2AB0) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmpwi cr6,r11,123
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 123, ctx.xer);
	// beq cr6,0x820c2adc
	if (ctx.cr6.eq) goto loc_820C2ADC;
	// cmpwi cr6,r11,124
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 124, ctx.xer);
	// beq cr6,0x820c2acc
	if (ctx.cr6.eq) goto loc_820C2ACC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820C2ACC:
	// lhz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 132);
	// li r10,8
	ctx.r10.s64 = 8;
	// sth r11,4(r5)
	PPC_STORE_U16(ctx.r5.u32 + 4, ctx.r11.u16);
	// b 0x820c2ae8
	goto loc_820C2AE8;
loc_820C2ADC:
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
loc_820C2AE8:
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

