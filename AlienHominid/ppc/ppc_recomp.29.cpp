#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8227D2E0"))) PPC_WEAK_FUNC(sub_8227D2E0);
PPC_FUNC_IMPL(__imp__sub_8227D2E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x8227D2E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8227d328
	if (!ctx.cr6.eq) goto loc_8227D328;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,1676
	ctx.r7.s64 = 1676;
	// addi r6,r11,28256
	ctx.r6.s64 = ctx.r11.s64 + 28256;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,-10216
	ctx.r5.s64 = ctx.r11.s64 + -10216;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x8227D328;
	sub_821BBC58(ctx, base);
loc_8227D328:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821c16c8
	ctx.lr = 0x8227D338;
	sub_821C16C8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8227d3a0
	if (!ctx.cr6.eq) goto loc_8227D3A0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8227d35c
	if (ctx.cr6.eq) goto loc_8227D35C;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821c19d0
	ctx.lr = 0x8227D35C;
	sub_821C19D0(ctx, base);
loc_8227D35C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8227d398
	if (ctx.cr6.eq) goto loc_8227D398;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8227d398
	if (ctx.cr6.eq) goto loc_8227D398;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,28352
	ctx.r4.s64 = ctx.r11.s64 + 28352;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// li r6,33
	ctx.r6.s64 = 33;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,132(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8227D398;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227D398:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8227d3fc
	goto loc_8227D3FC;
loc_8227D3A0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8227d3bc
	if (ctx.cr6.eq) goto loc_8227D3BC;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821c19d0
	ctx.lr = 0x8227D3BC;
	sub_821C19D0(ctx, base);
loc_8227D3BC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8227d3f8
	if (ctx.cr6.eq) goto loc_8227D3F8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8227d3f8
	if (ctx.cr6.eq) goto loc_8227D3F8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,28352
	ctx.r4.s64 = ctx.r11.s64 + 28352;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// li r6,33
	ctx.r6.s64 = 33;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,132(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8227D3F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227D3F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8227D3FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8227D404"))) PPC_WEAK_FUNC(sub_8227D404);
PPC_FUNC_IMPL(__imp__sub_8227D404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8227D408"))) PPC_WEAK_FUNC(sub_8227D408);
PPC_FUNC_IMPL(__imp__sub_8227D408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x8227D410;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8227d450
	if (!ctx.cr6.eq) goto loc_8227D450;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,1726
	ctx.r7.s64 = 1726;
	// addi r6,r11,28256
	ctx.r6.s64 = ctx.r11.s64 + 28256;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,-10216
	ctx.r5.s64 = ctx.r11.s64 + -10216;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x8227D450;
	sub_821BBC58(ctx, base);
loc_8227D450:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821c16c8
	ctx.lr = 0x8227D460;
	sub_821C16C8(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x8227d4c8
	if (!ctx.cr6.eq) goto loc_8227D4C8;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8227d484
	if (ctx.cr6.eq) goto loc_8227D484;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821c19d0
	ctx.lr = 0x8227D484;
	sub_821C19D0(ctx, base);
loc_8227D484:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8227d4c0
	if (ctx.cr6.eq) goto loc_8227D4C0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8227d4c0
	if (ctx.cr6.eq) goto loc_8227D4C0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,28352
	ctx.r4.s64 = ctx.r11.s64 + 28352;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// li r6,34
	ctx.r6.s64 = 34;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,136(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8227D4C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227D4C0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8227d524
	goto loc_8227D524;
loc_8227D4C8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8227d4e4
	if (ctx.cr6.eq) goto loc_8227D4E4;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821c19d0
	ctx.lr = 0x8227D4E4;
	sub_821C19D0(ctx, base);
loc_8227D4E4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8227d520
	if (ctx.cr6.eq) goto loc_8227D520;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8227d520
	if (ctx.cr6.eq) goto loc_8227D520;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,28352
	ctx.r4.s64 = ctx.r11.s64 + 28352;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// li r6,34
	ctx.r6.s64 = 34;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,136(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8227D520;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227D520:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8227D524:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8227D52C"))) PPC_WEAK_FUNC(sub_8227D52C);
PPC_FUNC_IMPL(__imp__sub_8227D52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8227D530"))) PPC_WEAK_FUNC(sub_8227D530);
PPC_FUNC_IMPL(__imp__sub_8227D530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x8227D538;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8227d578
	if (!ctx.cr6.eq) goto loc_8227D578;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,1777
	ctx.r7.s64 = 1777;
	// addi r6,r11,28256
	ctx.r6.s64 = ctx.r11.s64 + 28256;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,-10216
	ctx.r5.s64 = ctx.r11.s64 + -10216;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x8227D578;
	sub_821BBC58(ctx, base);
loc_8227D578:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821c16c8
	ctx.lr = 0x8227D588;
	sub_821C16C8(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bne cr6,0x8227d5f0
	if (!ctx.cr6.eq) goto loc_8227D5F0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8227d5ac
	if (ctx.cr6.eq) goto loc_8227D5AC;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821c19d0
	ctx.lr = 0x8227D5AC;
	sub_821C19D0(ctx, base);
loc_8227D5AC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8227d5e8
	if (ctx.cr6.eq) goto loc_8227D5E8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8227d5e8
	if (ctx.cr6.eq) goto loc_8227D5E8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,28352
	ctx.r4.s64 = ctx.r11.s64 + 28352;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// li r6,35
	ctx.r6.s64 = 35;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,140(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8227D5E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227D5E8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8227d64c
	goto loc_8227D64C;
loc_8227D5F0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8227d60c
	if (ctx.cr6.eq) goto loc_8227D60C;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821c19d0
	ctx.lr = 0x8227D60C;
	sub_821C19D0(ctx, base);
loc_8227D60C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8227d648
	if (ctx.cr6.eq) goto loc_8227D648;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8227d648
	if (ctx.cr6.eq) goto loc_8227D648;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,28352
	ctx.r4.s64 = ctx.r11.s64 + 28352;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// li r6,35
	ctx.r6.s64 = 35;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,140(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8227D648;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227D648:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8227D64C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8227D654"))) PPC_WEAK_FUNC(sub_8227D654);
PPC_FUNC_IMPL(__imp__sub_8227D654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8227D658"))) PPC_WEAK_FUNC(sub_8227D658);
PPC_FUNC_IMPL(__imp__sub_8227D658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x8227D660;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8227d69c
	if (!ctx.cr6.eq) goto loc_8227D69C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,1828
	ctx.r7.s64 = 1828;
	// addi r6,r11,28256
	ctx.r6.s64 = ctx.r11.s64 + 28256;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,-10216
	ctx.r5.s64 = ctx.r11.s64 + -10216;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x8227D69C;
	sub_821BBC58(ctx, base);
loc_8227D69C:
	// li r4,582
	ctx.r4.s64 = 582;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c13c0
	ctx.lr = 0x8227D6A8;
	sub_821C13C0(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8227d70c
	if (!ctx.cr6.eq) goto loc_8227D70C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8227d6cc
	if (ctx.cr6.eq) goto loc_8227D6CC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821c19d0
	ctx.lr = 0x8227D6CC;
	sub_821C19D0(ctx, base);
loc_8227D6CC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8227d704
	if (ctx.cr6.eq) goto loc_8227D704;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8227d704
	if (ctx.cr6.eq) goto loc_8227D704;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,28240
	ctx.r4.s64 = ctx.r11.s64 + 28240;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// li r6,38
	ctx.r6.s64 = 38;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,152(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8227D704;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227D704:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8227d764
	goto loc_8227D764;
loc_8227D70C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8227d728
	if (ctx.cr6.eq) goto loc_8227D728;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821c19d0
	ctx.lr = 0x8227D728;
	sub_821C19D0(ctx, base);
loc_8227D728:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8227d760
	if (ctx.cr6.eq) goto loc_8227D760;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8227d760
	if (ctx.cr6.eq) goto loc_8227D760;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,28240
	ctx.r4.s64 = ctx.r11.s64 + 28240;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// li r6,38
	ctx.r6.s64 = 38;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,152(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8227D760;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227D760:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8227D764:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8227D76C"))) PPC_WEAK_FUNC(sub_8227D76C);
PPC_FUNC_IMPL(__imp__sub_8227D76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8227D770"))) PPC_WEAK_FUNC(sub_8227D770);
PPC_FUNC_IMPL(__imp__sub_8227D770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x8227D778;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8227d7b4
	if (!ctx.cr6.eq) goto loc_8227D7B4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,1877
	ctx.r7.s64 = 1877;
	// addi r6,r11,28256
	ctx.r6.s64 = ctx.r11.s64 + 28256;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,-10216
	ctx.r5.s64 = ctx.r11.s64 + -10216;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x8227D7B4;
	sub_821BBC58(ctx, base);
loc_8227D7B4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8227d7d0
	if (ctx.cr6.eq) goto loc_8227D7D0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821c19d0
	ctx.lr = 0x8227D7D0;
	sub_821C19D0(ctx, base);
loc_8227D7D0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8227d80c
	if (ctx.cr6.eq) goto loc_8227D80C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8227d80c
	if (ctx.cr6.eq) goto loc_8227D80C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,28352
	ctx.r4.s64 = ctx.r11.s64 + 28352;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// li r6,39
	ctx.r6.s64 = 39;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,156(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8227D80C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227D80C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8227D818"))) PPC_WEAK_FUNC(sub_8227D818);
PPC_FUNC_IMPL(__imp__sub_8227D818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e0
	ctx.lr = 0x8227D820;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8227d860
	if (!ctx.cr6.eq) goto loc_8227D860;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,1932
	ctx.r7.s64 = 1932;
	// addi r6,r11,28256
	ctx.r6.s64 = ctx.r11.s64 + 28256;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,-10216
	ctx.r5.s64 = ctx.r11.s64 + -10216;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x8227D860;
	sub_821BBC58(ctx, base);
loc_8227D860:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c16c8
	ctx.lr = 0x8227D870;
	sub_821C16C8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c16c8
	ctx.lr = 0x8227D884;
	sub_821C16C8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8227d8f4
	if (!ctx.cr6.eq) goto loc_8227D8F4;
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// bne cr6,0x8227d8f4
	if (!ctx.cr6.eq) goto loc_8227D8F4;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8227d8b0
	if (ctx.cr6.eq) goto loc_8227D8B0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821c19d0
	ctx.lr = 0x8227D8B0;
	sub_821C19D0(ctx, base);
loc_8227D8B0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8227d8ec
	if (ctx.cr6.eq) goto loc_8227D8EC;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8227d8ec
	if (ctx.cr6.eq) goto loc_8227D8EC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,28352
	ctx.r4.s64 = ctx.r11.s64 + 28352;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// li r6,44
	ctx.r6.s64 = 44;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,176(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8227D8EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227D8EC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8227d950
	goto loc_8227D950;
loc_8227D8F4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8227d910
	if (ctx.cr6.eq) goto loc_8227D910;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821c19d0
	ctx.lr = 0x8227D910;
	sub_821C19D0(ctx, base);
loc_8227D910:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8227d94c
	if (ctx.cr6.eq) goto loc_8227D94C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8227d94c
	if (ctx.cr6.eq) goto loc_8227D94C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,28352
	ctx.r4.s64 = ctx.r11.s64 + 28352;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// li r6,44
	ctx.r6.s64 = 44;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,176(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8227D94C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227D94C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8227D950:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e9930
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8227D958"))) PPC_WEAK_FUNC(sub_8227D958);
PPC_FUNC_IMPL(__imp__sub_8227D958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e0
	ctx.lr = 0x8227D960;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8227d9a0
	if (!ctx.cr6.eq) goto loc_8227D9A0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,1991
	ctx.r7.s64 = 1991;
	// addi r6,r11,28256
	ctx.r6.s64 = ctx.r11.s64 + 28256;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,-10216
	ctx.r5.s64 = ctx.r11.s64 + -10216;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x8227D9A0;
	sub_821BBC58(ctx, base);
loc_8227D9A0:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c16c8
	ctx.lr = 0x8227D9B0;
	sub_821C16C8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c16c8
	ctx.lr = 0x8227D9C4;
	sub_821C16C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8227da34
	if (!ctx.cr0.eq) goto loc_8227DA34;
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// bne cr6,0x8227da34
	if (!ctx.cr6.eq) goto loc_8227DA34;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8227d9f0
	if (ctx.cr6.eq) goto loc_8227D9F0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,26
	ctx.r4.s64 = 26;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821c19d0
	ctx.lr = 0x8227D9F0;
	sub_821C19D0(ctx, base);
loc_8227D9F0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8227da2c
	if (ctx.cr6.eq) goto loc_8227DA2C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8227da2c
	if (ctx.cr6.eq) goto loc_8227DA2C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,28352
	ctx.r4.s64 = ctx.r11.s64 + 28352;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// li r6,45
	ctx.r6.s64 = 45;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,180(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8227DA2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227DA2C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8227da90
	goto loc_8227DA90;
loc_8227DA34:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8227da50
	if (ctx.cr6.eq) goto loc_8227DA50;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,26
	ctx.r4.s64 = 26;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821c19d0
	ctx.lr = 0x8227DA50;
	sub_821C19D0(ctx, base);
loc_8227DA50:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8227da8c
	if (ctx.cr6.eq) goto loc_8227DA8C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8227da8c
	if (ctx.cr6.eq) goto loc_8227DA8C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,28352
	ctx.r4.s64 = ctx.r11.s64 + 28352;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// li r6,45
	ctx.r6.s64 = 45;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,180(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8227DA8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227DA8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8227DA90:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e9930
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8227DA98"))) PPC_WEAK_FUNC(sub_8227DA98);
PPC_FUNC_IMPL(__imp__sub_8227DA98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x8227DAA0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8227dae0
	if (!ctx.cr6.eq) goto loc_8227DAE0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,2047
	ctx.r7.s64 = 2047;
	// addi r6,r11,28256
	ctx.r6.s64 = ctx.r11.s64 + 28256;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,-10216
	ctx.r5.s64 = ctx.r11.s64 + -10216;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x8227DAE0;
	sub_821BBC58(ctx, base);
loc_8227DAE0:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821c16c8
	ctx.lr = 0x8227DAF0;
	sub_821C16C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne 0x8227db58
	if (!ctx.cr0.eq) goto loc_8227DB58;
	// beq cr6,0x8227db14
	if (ctx.cr6.eq) goto loc_8227DB14;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821c19d0
	ctx.lr = 0x8227DB14;
	sub_821C19D0(ctx, base);
loc_8227DB14:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8227db50
	if (ctx.cr6.eq) goto loc_8227DB50;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8227db50
	if (ctx.cr6.eq) goto loc_8227DB50;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,28352
	ctx.r4.s64 = ctx.r11.s64 + 28352;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// li r6,46
	ctx.r6.s64 = 46;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,184(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8227DB50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227DB50:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8227dbb0
	goto loc_8227DBB0;
loc_8227DB58:
	// beq cr6,0x8227db70
	if (ctx.cr6.eq) goto loc_8227DB70;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821c19d0
	ctx.lr = 0x8227DB70;
	sub_821C19D0(ctx, base);
loc_8227DB70:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8227dbac
	if (ctx.cr6.eq) goto loc_8227DBAC;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8227dbac
	if (ctx.cr6.eq) goto loc_8227DBAC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,28352
	ctx.r4.s64 = ctx.r11.s64 + 28352;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// li r6,46
	ctx.r6.s64 = 46;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,184(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8227DBAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227DBAC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8227DBB0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8227DBB8"))) PPC_WEAK_FUNC(sub_8227DBB8);
PPC_FUNC_IMPL(__imp__sub_8227DBB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x8227DBC0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8227dc00
	if (!ctx.cr6.eq) goto loc_8227DC00;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,2102
	ctx.r7.s64 = 2102;
	// addi r6,r11,28256
	ctx.r6.s64 = ctx.r11.s64 + 28256;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,-10216
	ctx.r5.s64 = ctx.r11.s64 + -10216;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x8227DC00;
	sub_821BBC58(ctx, base);
loc_8227DC00:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821c16c8
	ctx.lr = 0x8227DC10;
	sub_821C16C8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8227dc78
	if (!ctx.cr6.eq) goto loc_8227DC78;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8227dc34
	if (ctx.cr6.eq) goto loc_8227DC34;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821c19d0
	ctx.lr = 0x8227DC34;
	sub_821C19D0(ctx, base);
loc_8227DC34:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8227dc70
	if (ctx.cr6.eq) goto loc_8227DC70;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8227dc70
	if (ctx.cr6.eq) goto loc_8227DC70;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,28352
	ctx.r4.s64 = ctx.r11.s64 + 28352;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// li r6,47
	ctx.r6.s64 = 47;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,188(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8227DC70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227DC70:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8227dcd4
	goto loc_8227DCD4;
loc_8227DC78:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8227dc94
	if (ctx.cr6.eq) goto loc_8227DC94;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821c19d0
	ctx.lr = 0x8227DC94;
	sub_821C19D0(ctx, base);
loc_8227DC94:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8227dcd0
	if (ctx.cr6.eq) goto loc_8227DCD0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8227dcd0
	if (ctx.cr6.eq) goto loc_8227DCD0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,28352
	ctx.r4.s64 = ctx.r11.s64 + 28352;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// li r6,47
	ctx.r6.s64 = 47;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,188(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8227DCD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227DCD0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8227DCD4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8227DCDC"))) PPC_WEAK_FUNC(sub_8227DCDC);
PPC_FUNC_IMPL(__imp__sub_8227DCDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8227DCE0"))) PPC_WEAK_FUNC(sub_8227DCE0);
PPC_FUNC_IMPL(__imp__sub_8227DCE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x8227DCE8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8227dd28
	if (!ctx.cr6.eq) goto loc_8227DD28;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,2155
	ctx.r7.s64 = 2155;
	// addi r6,r11,28256
	ctx.r6.s64 = ctx.r11.s64 + 28256;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,-10216
	ctx.r5.s64 = ctx.r11.s64 + -10216;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x8227DD28;
	sub_821BBC58(ctx, base);
loc_8227DD28:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821c16c8
	ctx.lr = 0x8227DD38;
	sub_821C16C8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8227dda0
	if (!ctx.cr6.eq) goto loc_8227DDA0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8227dd5c
	if (ctx.cr6.eq) goto loc_8227DD5C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821c19d0
	ctx.lr = 0x8227DD5C;
	sub_821C19D0(ctx, base);
loc_8227DD5C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8227dd98
	if (ctx.cr6.eq) goto loc_8227DD98;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8227dd98
	if (ctx.cr6.eq) goto loc_8227DD98;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,28352
	ctx.r4.s64 = ctx.r11.s64 + 28352;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// li r6,48
	ctx.r6.s64 = 48;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,192(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8227DD98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227DD98:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8227ddfc
	goto loc_8227DDFC;
loc_8227DDA0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8227ddbc
	if (ctx.cr6.eq) goto loc_8227DDBC;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821c19d0
	ctx.lr = 0x8227DDBC;
	sub_821C19D0(ctx, base);
loc_8227DDBC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8227ddf8
	if (ctx.cr6.eq) goto loc_8227DDF8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8227ddf8
	if (ctx.cr6.eq) goto loc_8227DDF8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,28352
	ctx.r4.s64 = ctx.r11.s64 + 28352;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// li r6,48
	ctx.r6.s64 = 48;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,192(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8227DDF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227DDF8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8227DDFC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8227DE04"))) PPC_WEAK_FUNC(sub_8227DE04);
PPC_FUNC_IMPL(__imp__sub_8227DE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8227DE08"))) PPC_WEAK_FUNC(sub_8227DE08);
PPC_FUNC_IMPL(__imp__sub_8227DE08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x8227DE10;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8227de50
	if (!ctx.cr6.eq) goto loc_8227DE50;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,2208
	ctx.r7.s64 = 2208;
	// addi r6,r11,28256
	ctx.r6.s64 = ctx.r11.s64 + 28256;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,-10216
	ctx.r5.s64 = ctx.r11.s64 + -10216;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x8227DE50;
	sub_821BBC58(ctx, base);
loc_8227DE50:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821c16c8
	ctx.lr = 0x8227DE60;
	sub_821C16C8(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x8227dec8
	if (!ctx.cr6.eq) goto loc_8227DEC8;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8227de84
	if (ctx.cr6.eq) goto loc_8227DE84;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821c19d0
	ctx.lr = 0x8227DE84;
	sub_821C19D0(ctx, base);
loc_8227DE84:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8227dec0
	if (ctx.cr6.eq) goto loc_8227DEC0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8227dec0
	if (ctx.cr6.eq) goto loc_8227DEC0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,28352
	ctx.r4.s64 = ctx.r11.s64 + 28352;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// li r6,49
	ctx.r6.s64 = 49;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,196(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8227DEC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227DEC0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8227df24
	goto loc_8227DF24;
loc_8227DEC8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8227dee4
	if (ctx.cr6.eq) goto loc_8227DEE4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821c19d0
	ctx.lr = 0x8227DEE4;
	sub_821C19D0(ctx, base);
loc_8227DEE4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8227df20
	if (ctx.cr6.eq) goto loc_8227DF20;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8227df20
	if (ctx.cr6.eq) goto loc_8227DF20;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,28352
	ctx.r4.s64 = ctx.r11.s64 + 28352;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// li r6,49
	ctx.r6.s64 = 49;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,196(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8227DF20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227DF20:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8227DF24:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8227DF2C"))) PPC_WEAK_FUNC(sub_8227DF2C);
PPC_FUNC_IMPL(__imp__sub_8227DF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8227DF30"))) PPC_WEAK_FUNC(sub_8227DF30);
PPC_FUNC_IMPL(__imp__sub_8227DF30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x8227DF38;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8227df78
	if (!ctx.cr6.eq) goto loc_8227DF78;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,2261
	ctx.r7.s64 = 2261;
	// addi r6,r11,28256
	ctx.r6.s64 = ctx.r11.s64 + 28256;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,-10216
	ctx.r5.s64 = ctx.r11.s64 + -10216;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x8227DF78;
	sub_821BBC58(ctx, base);
loc_8227DF78:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821c16c8
	ctx.lr = 0x8227DF88;
	sub_821C16C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne 0x8227dff0
	if (!ctx.cr0.eq) goto loc_8227DFF0;
	// beq cr6,0x8227dfac
	if (ctx.cr6.eq) goto loc_8227DFAC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821c19d0
	ctx.lr = 0x8227DFAC;
	sub_821C19D0(ctx, base);
loc_8227DFAC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8227dfe8
	if (ctx.cr6.eq) goto loc_8227DFE8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8227dfe8
	if (ctx.cr6.eq) goto loc_8227DFE8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,28352
	ctx.r4.s64 = ctx.r11.s64 + 28352;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// li r6,49
	ctx.r6.s64 = 49;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,196(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8227DFE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227DFE8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8227e048
	goto loc_8227E048;
loc_8227DFF0:
	// beq cr6,0x8227e008
	if (ctx.cr6.eq) goto loc_8227E008;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821c19d0
	ctx.lr = 0x8227E008;
	sub_821C19D0(ctx, base);
loc_8227E008:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8227e044
	if (ctx.cr6.eq) goto loc_8227E044;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8227e044
	if (ctx.cr6.eq) goto loc_8227E044;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,28352
	ctx.r4.s64 = ctx.r11.s64 + 28352;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// li r6,49
	ctx.r6.s64 = 49;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,196(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8227E044;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227E044:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8227E048:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8227E050"))) PPC_WEAK_FUNC(sub_8227E050);
PPC_FUNC_IMPL(__imp__sub_8227E050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x8227E058;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8227e098
	if (!ctx.cr6.eq) goto loc_8227E098;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,2316
	ctx.r7.s64 = 2316;
	// addi r6,r11,28256
	ctx.r6.s64 = ctx.r11.s64 + 28256;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,-10216
	ctx.r5.s64 = ctx.r11.s64 + -10216;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x8227E098;
	sub_821BBC58(ctx, base);
loc_8227E098:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821c16c8
	ctx.lr = 0x8227E0A8;
	sub_821C16C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne 0x8227e110
	if (!ctx.cr0.eq) goto loc_8227E110;
	// beq cr6,0x8227e0cc
	if (ctx.cr6.eq) goto loc_8227E0CC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821c19d0
	ctx.lr = 0x8227E0CC;
	sub_821C19D0(ctx, base);
loc_8227E0CC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8227e108
	if (ctx.cr6.eq) goto loc_8227E108;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8227e108
	if (ctx.cr6.eq) goto loc_8227E108;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,28352
	ctx.r4.s64 = ctx.r11.s64 + 28352;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// li r6,57
	ctx.r6.s64 = 57;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,228(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8227E108;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227E108:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8227e168
	goto loc_8227E168;
loc_8227E110:
	// beq cr6,0x8227e128
	if (ctx.cr6.eq) goto loc_8227E128;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821c19d0
	ctx.lr = 0x8227E128;
	sub_821C19D0(ctx, base);
loc_8227E128:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8227e164
	if (ctx.cr6.eq) goto loc_8227E164;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8227e164
	if (ctx.cr6.eq) goto loc_8227E164;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,28352
	ctx.r4.s64 = ctx.r11.s64 + 28352;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// li r6,57
	ctx.r6.s64 = 57;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,228(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8227E164;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227E164:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8227E168:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8227E170"))) PPC_WEAK_FUNC(sub_8227E170);
PPC_FUNC_IMPL(__imp__sub_8227E170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x8227E178;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8227e1b8
	if (!ctx.cr6.eq) goto loc_8227E1B8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,2371
	ctx.r7.s64 = 2371;
	// addi r6,r11,28256
	ctx.r6.s64 = ctx.r11.s64 + 28256;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,-10216
	ctx.r5.s64 = ctx.r11.s64 + -10216;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x8227E1B8;
	sub_821BBC58(ctx, base);
loc_8227E1B8:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821c16c8
	ctx.lr = 0x8227E1C8;
	sub_821C16C8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8227e230
	if (!ctx.cr6.eq) goto loc_8227E230;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8227e1ec
	if (ctx.cr6.eq) goto loc_8227E1EC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821c19d0
	ctx.lr = 0x8227E1EC;
	sub_821C19D0(ctx, base);
loc_8227E1EC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8227e228
	if (ctx.cr6.eq) goto loc_8227E228;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8227e228
	if (ctx.cr6.eq) goto loc_8227E228;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,28352
	ctx.r4.s64 = ctx.r11.s64 + 28352;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// li r6,58
	ctx.r6.s64 = 58;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,232(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8227E228;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227E228:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8227e28c
	goto loc_8227E28C;
loc_8227E230:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8227e24c
	if (ctx.cr6.eq) goto loc_8227E24C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821c19d0
	ctx.lr = 0x8227E24C;
	sub_821C19D0(ctx, base);
loc_8227E24C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8227e288
	if (ctx.cr6.eq) goto loc_8227E288;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8227e288
	if (ctx.cr6.eq) goto loc_8227E288;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,28352
	ctx.r4.s64 = ctx.r11.s64 + 28352;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// li r6,58
	ctx.r6.s64 = 58;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,232(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8227E288;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227E288:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8227E28C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8227E294"))) PPC_WEAK_FUNC(sub_8227E294);
PPC_FUNC_IMPL(__imp__sub_8227E294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8227E298"))) PPC_WEAK_FUNC(sub_8227E298);
PPC_FUNC_IMPL(__imp__sub_8227E298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x8227E2A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8227e2e0
	if (!ctx.cr6.eq) goto loc_8227E2E0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,2426
	ctx.r7.s64 = 2426;
	// addi r6,r11,28256
	ctx.r6.s64 = ctx.r11.s64 + 28256;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,-10216
	ctx.r5.s64 = ctx.r11.s64 + -10216;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x8227E2E0;
	sub_821BBC58(ctx, base);
loc_8227E2E0:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821c16c8
	ctx.lr = 0x8227E2F0;
	sub_821C16C8(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x8227e358
	if (!ctx.cr6.eq) goto loc_8227E358;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8227e314
	if (ctx.cr6.eq) goto loc_8227E314;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821c19d0
	ctx.lr = 0x8227E314;
	sub_821C19D0(ctx, base);
loc_8227E314:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8227e350
	if (ctx.cr6.eq) goto loc_8227E350;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8227e350
	if (ctx.cr6.eq) goto loc_8227E350;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,28352
	ctx.r4.s64 = ctx.r11.s64 + 28352;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// li r6,59
	ctx.r6.s64 = 59;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,236(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8227E350;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227E350:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8227e3b4
	goto loc_8227E3B4;
loc_8227E358:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8227e374
	if (ctx.cr6.eq) goto loc_8227E374;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821c19d0
	ctx.lr = 0x8227E374;
	sub_821C19D0(ctx, base);
loc_8227E374:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8227e3b0
	if (ctx.cr6.eq) goto loc_8227E3B0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8227e3b0
	if (ctx.cr6.eq) goto loc_8227E3B0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,28352
	ctx.r4.s64 = ctx.r11.s64 + 28352;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// li r6,59
	ctx.r6.s64 = 59;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,236(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8227E3B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227E3B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8227E3B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8227E3BC"))) PPC_WEAK_FUNC(sub_8227E3BC);
PPC_FUNC_IMPL(__imp__sub_8227E3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8227E3C0"))) PPC_WEAK_FUNC(sub_8227E3C0);
PPC_FUNC_IMPL(__imp__sub_8227E3C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x8227E3C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,971
	ctx.r4.s64 = 971;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x821c13c0
	ctx.lr = 0x8227E3E0;
	sub_821C13C0(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8227e444
	if (!ctx.cr6.eq) goto loc_8227E444;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8227e404
	if (ctx.cr6.eq) goto loc_8227E404;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c19d0
	ctx.lr = 0x8227E404;
	sub_821C19D0(ctx, base);
loc_8227E404:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8227e43c
	if (ctx.cr6.eq) goto loc_8227E43C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8227e43c
	if (ctx.cr6.eq) goto loc_8227E43C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,28240
	ctx.r4.s64 = ctx.r11.s64 + 28240;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// li r6,60
	ctx.r6.s64 = 60;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,240(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8227E43C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227E43C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8227e49c
	goto loc_8227E49C;
loc_8227E444:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8227e460
	if (ctx.cr6.eq) goto loc_8227E460;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c19d0
	ctx.lr = 0x8227E460;
	sub_821C19D0(ctx, base);
loc_8227E460:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8227e498
	if (ctx.cr6.eq) goto loc_8227E498;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8227e498
	if (ctx.cr6.eq) goto loc_8227E498;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,28240
	ctx.r4.s64 = ctx.r11.s64 + 28240;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// li r6,60
	ctx.r6.s64 = 60;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,240(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8227E498;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227E498:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8227E49C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8227E4A4"))) PPC_WEAK_FUNC(sub_8227E4A4);
PPC_FUNC_IMPL(__imp__sub_8227E4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8227E4A8"))) PPC_WEAK_FUNC(sub_8227E4A8);
PPC_FUNC_IMPL(__imp__sub_8227E4A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x8227E4B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8227e4ec
	if (!ctx.cr6.eq) goto loc_8227E4EC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,2527
	ctx.r7.s64 = 2527;
	// addi r6,r11,28256
	ctx.r6.s64 = ctx.r11.s64 + 28256;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,-10216
	ctx.r5.s64 = ctx.r11.s64 + -10216;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x8227E4EC;
	sub_821BBC58(ctx, base);
loc_8227E4EC:
	// li r4,926
	ctx.r4.s64 = 926;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c13c0
	ctx.lr = 0x8227E4F8;
	sub_821C13C0(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8227e55c
	if (!ctx.cr6.eq) goto loc_8227E55C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8227e51c
	if (ctx.cr6.eq) goto loc_8227E51C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821c19d0
	ctx.lr = 0x8227E51C;
	sub_821C19D0(ctx, base);
loc_8227E51C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8227e554
	if (ctx.cr6.eq) goto loc_8227E554;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8227e554
	if (ctx.cr6.eq) goto loc_8227E554;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,28240
	ctx.r4.s64 = ctx.r11.s64 + 28240;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// li r6,36
	ctx.r6.s64 = 36;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,144(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8227E554;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227E554:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8227e5b4
	goto loc_8227E5B4;
loc_8227E55C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8227e578
	if (ctx.cr6.eq) goto loc_8227E578;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821c19d0
	ctx.lr = 0x8227E578;
	sub_821C19D0(ctx, base);
loc_8227E578:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8227e5b0
	if (ctx.cr6.eq) goto loc_8227E5B0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8227e5b0
	if (ctx.cr6.eq) goto loc_8227E5B0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,28240
	ctx.r4.s64 = ctx.r11.s64 + 28240;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// li r6,36
	ctx.r6.s64 = 36;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,144(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8227E5B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227E5B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8227E5B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8227E5BC"))) PPC_WEAK_FUNC(sub_8227E5BC);
PPC_FUNC_IMPL(__imp__sub_8227E5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8227E5C0"))) PPC_WEAK_FUNC(sub_8227E5C0);
PPC_FUNC_IMPL(__imp__sub_8227E5C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x8227E5C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8227e604
	if (!ctx.cr6.eq) goto loc_8227E604;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,2576
	ctx.r7.s64 = 2576;
	// addi r6,r11,28256
	ctx.r6.s64 = ctx.r11.s64 + 28256;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,-10216
	ctx.r5.s64 = ctx.r11.s64 + -10216;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x8227E604;
	sub_821BBC58(ctx, base);
loc_8227E604:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8227e620
	if (ctx.cr6.eq) goto loc_8227E620;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821c19d0
	ctx.lr = 0x8227E620;
	sub_821C19D0(ctx, base);
loc_8227E620:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8227e65c
	if (ctx.cr6.eq) goto loc_8227E65C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8227e65c
	if (ctx.cr6.eq) goto loc_8227E65C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,28352
	ctx.r4.s64 = ctx.r11.s64 + 28352;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// li r6,52
	ctx.r6.s64 = 52;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,208(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8227E65C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227E65C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8227E668"))) PPC_WEAK_FUNC(sub_8227E668);
PPC_FUNC_IMPL(__imp__sub_8227E668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x8227E670;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8227e6b0
	if (!ctx.cr6.eq) goto loc_8227E6B0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,2631
	ctx.r7.s64 = 2631;
	// addi r6,r11,28256
	ctx.r6.s64 = ctx.r11.s64 + 28256;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,-10216
	ctx.r5.s64 = ctx.r11.s64 + -10216;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x8227E6B0;
	sub_821BBC58(ctx, base);
loc_8227E6B0:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821c16c8
	ctx.lr = 0x8227E6C0;
	sub_821C16C8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bgt cr6,0x8227e728
	if (ctx.cr6.gt) goto loc_8227E728;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8227e6e4
	if (ctx.cr6.eq) goto loc_8227E6E4;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,33
	ctx.r4.s64 = 33;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821c19d0
	ctx.lr = 0x8227E6E4;
	sub_821C19D0(ctx, base);
loc_8227E6E4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8227e720
	if (ctx.cr6.eq) goto loc_8227E720;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8227e720
	if (ctx.cr6.eq) goto loc_8227E720;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,28352
	ctx.r4.s64 = ctx.r11.s64 + 28352;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// li r6,53
	ctx.r6.s64 = 53;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,212(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8227E720;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227E720:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8227e784
	goto loc_8227E784;
loc_8227E728:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8227e744
	if (ctx.cr6.eq) goto loc_8227E744;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,33
	ctx.r4.s64 = 33;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821c19d0
	ctx.lr = 0x8227E744;
	sub_821C19D0(ctx, base);
loc_8227E744:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8227e780
	if (ctx.cr6.eq) goto loc_8227E780;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8227e780
	if (ctx.cr6.eq) goto loc_8227E780;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,28352
	ctx.r4.s64 = ctx.r11.s64 + 28352;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// li r6,53
	ctx.r6.s64 = 53;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,212(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8227E780;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227E780:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8227E784:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8227E78C"))) PPC_WEAK_FUNC(sub_8227E78C);
PPC_FUNC_IMPL(__imp__sub_8227E78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8227E790"))) PPC_WEAK_FUNC(sub_8227E790);
PPC_FUNC_IMPL(__imp__sub_8227E790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x8227E798;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8227e7d8
	if (!ctx.cr6.eq) goto loc_8227E7D8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,2690
	ctx.r7.s64 = 2690;
	// addi r6,r11,28256
	ctx.r6.s64 = ctx.r11.s64 + 28256;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,-10216
	ctx.r5.s64 = ctx.r11.s64 + -10216;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x8227E7D8;
	sub_821BBC58(ctx, base);
loc_8227E7D8:
	// li r4,157
	ctx.r4.s64 = 157;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821c13c0
	ctx.lr = 0x8227E7E4;
	sub_821C13C0(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8227e84c
	if (!ctx.cr6.eq) goto loc_8227E84C;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8227e808
	if (ctx.cr6.eq) goto loc_8227E808;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,39
	ctx.r4.s64 = 39;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821c19d0
	ctx.lr = 0x8227E808;
	sub_821C19D0(ctx, base);
loc_8227E808:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8227e844
	if (ctx.cr6.eq) goto loc_8227E844;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8227e844
	if (ctx.cr6.eq) goto loc_8227E844;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,28352
	ctx.r4.s64 = ctx.r11.s64 + 28352;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// li r6,91
	ctx.r6.s64 = 91;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,364(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 364);
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8227E844;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227E844:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8227e8a8
	goto loc_8227E8A8;
loc_8227E84C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8227e868
	if (ctx.cr6.eq) goto loc_8227E868;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,39
	ctx.r4.s64 = 39;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821c19d0
	ctx.lr = 0x8227E868;
	sub_821C19D0(ctx, base);
loc_8227E868:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8227e8a4
	if (ctx.cr6.eq) goto loc_8227E8A4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8227e8a4
	if (ctx.cr6.eq) goto loc_8227E8A4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,28352
	ctx.r4.s64 = ctx.r11.s64 + 28352;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// li r6,91
	ctx.r6.s64 = 91;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,364(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 364);
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8227E8A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227E8A4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8227E8A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8227E8B0"))) PPC_WEAK_FUNC(sub_8227E8B0);
PPC_FUNC_IMPL(__imp__sub_8227E8B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x8227E8B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8227e8f4
	if (!ctx.cr6.eq) goto loc_8227E8F4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,2744
	ctx.r7.s64 = 2744;
	// addi r6,r11,28256
	ctx.r6.s64 = ctx.r11.s64 + 28256;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,-10216
	ctx.r5.s64 = ctx.r11.s64 + -10216;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x8227E8F4;
	sub_821BBC58(ctx, base);
loc_8227E8F4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8227e910
	if (ctx.cr6.eq) goto loc_8227E910;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,41
	ctx.r4.s64 = 41;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821c19d0
	ctx.lr = 0x8227E910;
	sub_821C19D0(ctx, base);
loc_8227E910:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8227e94c
	if (ctx.cr6.eq) goto loc_8227E94C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8227e94c
	if (ctx.cr6.eq) goto loc_8227E94C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,28352
	ctx.r4.s64 = ctx.r11.s64 + 28352;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// li r6,101
	ctx.r6.s64 = 101;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,404(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 404);
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8227E94C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227E94C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8227E958"))) PPC_WEAK_FUNC(sub_8227E958);
PPC_FUNC_IMPL(__imp__sub_8227E958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x8227E960;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,567
	ctx.r4.s64 = 567;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x821c13c0
	ctx.lr = 0x8227E97C;
	sub_821C13C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,974
	ctx.r4.s64 = 974;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c13c0
	ctx.lr = 0x8227E98C;
	sub_821C13C0(ctx, base);
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// bne cr6,0x8227e9d8
	if (!ctx.cr6.eq) goto loc_8227E9D8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8227e9a4
	if (!ctx.cr6.eq) goto loc_8227E9A4;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8227e9d0
	goto loc_8227E9D0;
loc_8227E9A4:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8227e9b4
	if (!ctx.cr6.eq) goto loc_8227E9B4;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x8227e9d0
	goto loc_8227E9D0;
loc_8227E9B4:
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bne cr6,0x8227e9c4
	if (!ctx.cr6.eq) goto loc_8227E9C4;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x8227e9d0
	goto loc_8227E9D0;
loc_8227E9C4:
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x8227e9d8
	if (!ctx.cr6.eq) goto loc_8227E9D8;
	// li r11,11
	ctx.r11.s64 = 11;
loc_8227E9D0:
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x8227e9fc
	goto loc_8227E9FC;
loc_8227E9D8:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,2816
	ctx.r7.s64 = 2816;
	// addi r6,r11,28256
	ctx.r6.s64 = ctx.r11.s64 + 28256;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,572
	ctx.r5.s64 = ctx.r11.s64 + 572;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x8227E9FC;
	sub_821BBC58(ctx, base);
loc_8227E9FC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8227ea34
	if (ctx.cr6.eq) goto loc_8227EA34;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8227ea34
	if (ctx.cr6.eq) goto loc_8227EA34;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r6,61
	ctx.r6.s64 = 61;
	// addi r4,r11,28240
	ctx.r4.s64 = ctx.r11.s64 + 28240;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// lwz r5,244(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8227EA34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227EA34:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8227EA40"))) PPC_WEAK_FUNC(sub_8227EA40);
PPC_FUNC_IMPL(__imp__sub_8227EA40) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8227EA54"))) PPC_WEAK_FUNC(sub_8227EA54);
PPC_FUNC_IMPL(__imp__sub_8227EA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8227EA58"))) PPC_WEAK_FUNC(sub_8227EA58);
PPC_FUNC_IMPL(__imp__sub_8227EA58) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 7) & 0xFFFFFF80;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8227EA6C"))) PPC_WEAK_FUNC(sub_8227EA6C);
PPC_FUNC_IMPL(__imp__sub_8227EA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8227EA70"))) PPC_WEAK_FUNC(sub_8227EA70);
PPC_FUNC_IMPL(__imp__sub_8227EA70) {
	PPC_FUNC_PROLOGUE();
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8227EA80"))) PPC_WEAK_FUNC(sub_8227EA80);
PPC_FUNC_IMPL(__imp__sub_8227EA80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x8227EA88;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8227eac8
	if (!ctx.cr6.eq) goto loc_8227EAC8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,2877
	ctx.r7.s64 = 2877;
	// addi r6,r11,28256
	ctx.r6.s64 = ctx.r11.s64 + 28256;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,-10216
	ctx.r5.s64 = ctx.r11.s64 + -10216;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x8227EAC8;
	sub_821BBC58(ctx, base);
loc_8227EAC8:
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16, ctx.xer);
	// bge cr6,0x8227eaf0
	if (!ctx.cr6.lt) goto loc_8227EAF0;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x8227eaf0
	if (ctx.cr6.eq) goto loc_8227EAF0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821c16c8
	ctx.lr = 0x8227EAE8;
	sub_821C16C8(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// b 0x8227eaf4
	goto loc_8227EAF4;
loc_8227EAF0:
	// li r8,0
	ctx.r8.s64 = 0;
loc_8227EAF4:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,7
	ctx.r10.s64 = 7;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// beq cr6,0x8227eb64
	if (ctx.cr6.eq) goto loc_8227EB64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8227eb64
	if (ctx.cr6.eq) goto loc_8227EB64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r4,r11,28352
	ctx.r4.s64 = ctx.r11.s64 + 28352;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// li r6,31
	ctx.r6.s64 = 31;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,124(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8227EB64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227EB64:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8227EB70"))) PPC_WEAK_FUNC(sub_8227EB70);
PPC_FUNC_IMPL(__imp__sub_8227EB70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98bc
	ctx.lr = 0x8227EB78;
	__savegprlr_17(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r18,r11,-10544
	ctx.r18.s64 = ctx.r11.s64 + -10544;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// mr r19,r8
	ctx.r19.u64 = ctx.r8.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r17,r11,28256
	ctx.r17.s64 = ctx.r11.s64 + 28256;
	// bne cr6,0x8227ebc8
	if (!ctx.cr6.eq) goto loc_8227EBC8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,2967
	ctx.r7.s64 = 2967;
	// addi r5,r11,-10216
	ctx.r5.s64 = ctx.r11.s64 + -10216;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x8227EBC8;
	sub_821BBC58(ctx, base);
loc_8227EBC8:
	// li r20,0
	ctx.r20.s64 = 0;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x8227ec08
	if (!ctx.cr6.eq) goto loc_8227EC08;
	// li r4,928
	ctx.r4.s64 = 928;
	// li r28,23
	ctx.r28.s64 = 23;
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
	// bl 0x821c13c0
	ctx.lr = 0x8227EBEC;
	sub_821C13C0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r4,927
	ctx.r4.s64 = 927;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c13c0
	ctx.lr = 0x8227EBFC;
	sub_821C13C0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r24,-1
	ctx.r24.s64 = -1;
	// b 0x8227ec7c
	goto loc_8227EC7C;
loc_8227EC08:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,43
	ctx.r4.s64 = 43;
	// bl 0x821c16c8
	ctx.lr = 0x8227EC14;
	sub_821C16C8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c16c8
	ctx.lr = 0x8227EC28;
	sub_821C16C8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,46
	ctx.r4.s64 = 46;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c16c8
	ctx.lr = 0x8227EC3C;
	sub_821C16C8(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,42
	ctx.r4.s64 = 42;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c16c8
	ctx.lr = 0x8227EC50;
	sub_821C16C8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,41
	ctx.r4.s64 = 41;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c16c8
	ctx.lr = 0x8227EC64;
	sub_821C16C8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c16c8
	ctx.lr = 0x8227EC78;
	sub_821C16C8(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
loc_8227EC7C:
	// cmplwi cr6,r22,1
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 1, ctx.xer);
	// ble cr6,0x8227ec98
	if (!ctx.cr6.gt) goto loc_8227EC98;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82256700
	ctx.lr = 0x8227EC90;
	sub_82256700(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// b 0x8227ec9c
	goto loc_8227EC9C;
loc_8227EC98:
	// li r22,1
	ctx.r22.s64 = 1;
loc_8227EC9C:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// beq cr6,0x8227ecb4
	if (ctx.cr6.eq) goto loc_8227ECB4;
	// addi r11,r11,27656
	ctx.r11.s64 = ctx.r11.s64 + 27656;
	// addi r10,r11,-576
	ctx.r10.s64 = ctx.r11.s64 + -576;
	// b 0x8227ecb8
	goto loc_8227ECB8;
loc_8227ECB4:
	// addi r10,r11,27656
	ctx.r10.s64 = ctx.r11.s64 + 27656;
loc_8227ECB8:
	// mulli r11,r28,24
	ctx.r11.s64 = ctx.r28.s64 * 24;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne cr6,0x8227ece8
	if (!ctx.cr6.eq) goto loc_8227ECE8;
	// addi r11,r27,-1
	ctx.r11.s64 = ctx.r27.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8227ECE8:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bne cr6,0x8227ed04
	if (!ctx.cr6.eq) goto loc_8227ED04;
	// cntlzw r11,r23
	ctx.r11.u64 = ctx.r23.u32 == 0 ? 32 : __builtin_clz(ctx.r23.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8227ED04:
	// stw r20,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r20.u32);
	// stw r20,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r20.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bne cr6,0x8227ed3c
	if (!ctx.cr6.eq) goto loc_8227ED3C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c16c8
	ctx.lr = 0x8227ED2C;
	sub_821C16C8(ctx, base);
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_8227ED3C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8227ed64
	if (!ctx.cr6.eq) goto loc_8227ED64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,3048
	ctx.r7.s64 = 3048;
	// addi r5,r11,572
	ctx.r5.s64 = ctx.r11.s64 + 572;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x8227ED64;
	sub_821BBC58(ctx, base);
loc_8227ED64:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// stw r20,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r20.u32);
	// stw r26,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r26.u32);
	// stw r25,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r25.u32);
	// stw r24,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r24.u32);
	// beq cr6,0x8227ee00
	if (ctx.cr6.eq) goto loc_8227EE00;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x8227ee00
	if (ctx.cr6.eq) goto loc_8227EE00;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r30,20(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r28,16(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r4,r11,28372
	ctx.r4.s64 = ctx.r11.s64 + 28372;
	// lwz r27,12(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r6,30
	ctx.r6.s64 = 30;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r11,27240
	ctx.r31.s64 = ctx.r11.s64 + 27240;
	// stw r24,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r24.u32);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// stw r25,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r25.u32);
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// stw r20,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r20.u32);
	// lwz r5,120(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mtctr r21
	ctx.ctr.u64 = ctx.r21.u64;
	// bctrl 
	ctx.lr = 0x8227EDE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r5,396(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// addi r4,r11,28240
	ctx.r4.s64 = ctx.r11.s64 + 28240;
	// li r6,99
	ctx.r6.s64 = 99;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// mtctr r21
	ctx.ctr.u64 = ctx.r21.u64;
	// bctrl 
	ctx.lr = 0x8227EE00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227EE00:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x822e990c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8227EE0C"))) PPC_WEAK_FUNC(sub_8227EE0C);
PPC_FUNC_IMPL(__imp__sub_8227EE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8227EE10"))) PPC_WEAK_FUNC(sub_8227EE10);
PPC_FUNC_IMPL(__imp__sub_8227EE10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98c8
	ctx.lr = 0x8227EE18;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r27,r11,-10544
	ctx.r27.s64 = ctx.r11.s64 + -10544;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r26,r11,28256
	ctx.r26.s64 = ctx.r11.s64 + 28256;
	// bne cr6,0x8227ee6c
	if (!ctx.cr6.eq) goto loc_8227EE6C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,3110
	ctx.r7.s64 = 3110;
	// addi r5,r11,-10216
	ctx.r5.s64 = ctx.r11.s64 + -10216;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x8227EE6C;
	sub_821BBC58(ctx, base);
loc_8227EE6C:
	// cmpwi cr6,r24,-1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, -1, ctx.xer);
	// bne cr6,0x8227ee80
	if (!ctx.cr6.eq) goto loc_8227EE80;
	// li r29,23
	ctx.r29.s64 = 23;
	// li r22,1
	ctx.r22.s64 = 1;
	// b 0x8227eea8
	goto loc_8227EEA8;
loc_8227EE80:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c16c8
	ctx.lr = 0x8227EE90;
	sub_821C16C8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c16c8
	ctx.lr = 0x8227EEA4;
	sub_821C16C8(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_8227EEA8:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// ble cr6,0x8227eec4
	if (!ctx.cr6.gt) goto loc_8227EEC4;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82256700
	ctx.lr = 0x8227EEBC;
	sub_82256700(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// b 0x8227eec8
	goto loc_8227EEC8;
loc_8227EEC4:
	// li r21,1
	ctx.r21.s64 = 1;
loc_8227EEC8:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// beq cr6,0x8227eee0
	if (ctx.cr6.eq) goto loc_8227EEE0;
	// addi r11,r11,27656
	ctx.r11.s64 = ctx.r11.s64 + 27656;
	// addi r30,r11,-576
	ctx.r30.s64 = ctx.r11.s64 + -576;
	// b 0x8227eee4
	goto loc_8227EEE4;
loc_8227EEE0:
	// addi r30,r11,27656
	ctx.r30.s64 = ctx.r11.s64 + 27656;
loc_8227EEE4:
	// mulli r11,r29,24
	ctx.r11.s64 = ctx.r29.s64 * 24;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// bne 0x8227ef94
	if (!ctx.cr0.eq) goto loc_8227EF94;
	// addi r10,r29,-17
	ctx.r10.s64 = ctx.r29.s64 + -17;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,27664
	ctx.r11.s64 = ctx.r11.s64 + 27664;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x8227ef30
	if (!ctx.cr0.eq) goto loc_8227EF30;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,3140
	ctx.r7.s64 = 3140;
	// addi r5,r11,28504
	ctx.r5.s64 = ctx.r11.s64 + 28504;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x8227EF30;
	sub_821BBC58(ctx, base);
loc_8227EF30:
	// rlwinm r11,r22,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r31
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmpwi r31,0
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x8227ef48
	if (ctx.cr0.lt) goto loc_8227EF48;
	// cmpwi cr6,r31,24
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 24, ctx.xer);
	// blt cr6,0x8227ef64
	if (ctx.cr6.lt) goto loc_8227EF64;
loc_8227EF48:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,3142
	ctx.r7.s64 = 3142;
	// addi r5,r11,28464
	ctx.r5.s64 = ctx.r11.s64 + 28464;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x8227EF64;
	sub_821BBC58(ctx, base);
loc_8227EF64:
	// mulli r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 * 24;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// bne 0x8227ef94
	if (!ctx.cr0.eq) goto loc_8227EF94;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,3144
	ctx.r7.s64 = 3144;
	// addi r5,r11,28452
	ctx.r5.s64 = ctx.r11.s64 + 28452;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x8227EF94;
	sub_821BBC58(ctx, base);
loc_8227EF94:
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r11,r20,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8227f004
	if (ctx.cr6.eq) goto loc_8227F004;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8227f004
	if (ctx.cr6.eq) goto loc_8227F004;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// addi r4,r11,28428
	ctx.r4.s64 = ctx.r11.s64 + 28428;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// addi r31,r11,27240
	ctx.r31.s64 = ctx.r11.s64 + 27240;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// li r6,29
	ctx.r6.s64 = 29;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r5,116(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8227EFE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r5,396(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// addi r4,r11,28240
	ctx.r4.s64 = ctx.r11.s64 + 28240;
	// li r6,99
	ctx.r6.s64 = 99;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8227F004;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227F004:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822e9918
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8227F010"))) PPC_WEAK_FUNC(sub_8227F010);
PPC_FUNC_IMPL(__imp__sub_8227F010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98d0
	ctx.lr = 0x8227F018;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r28,r11,-10544
	ctx.r28.s64 = ctx.r11.s64 + -10544;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r27,r11,28256
	ctx.r27.s64 = ctx.r11.s64 + 28256;
	// bne cr6,0x8227f068
	if (!ctx.cr6.eq) goto loc_8227F068;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,3188
	ctx.r7.s64 = 3188;
	// addi r5,r11,-10216
	ctx.r5.s64 = ctx.r11.s64 + -10216;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x8227F068;
	sub_821BBC58(ctx, base);
loc_8227F068:
	// cmpwi cr6,r24,-1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, -1, ctx.xer);
	// bne cr6,0x8227f07c
	if (!ctx.cr6.eq) goto loc_8227F07C;
	// li r30,23
	ctx.r30.s64 = 23;
	// li r26,1
	ctx.r26.s64 = 1;
	// b 0x8227f0a4
	goto loc_8227F0A4;
loc_8227F07C:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c16c8
	ctx.lr = 0x8227F08C;
	sub_821C16C8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c16c8
	ctx.lr = 0x8227F0A0;
	sub_821C16C8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_8227F0A4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8227f0bc
	if (ctx.cr6.eq) goto loc_8227F0BC;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82256700
	ctx.lr = 0x8227F0B8;
	sub_82256700(ctx, base);
	// b 0x8227f0c0
	goto loc_8227F0C0;
loc_8227F0BC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8227F0C0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// beq cr6,0x8227f0d8
	if (ctx.cr6.eq) goto loc_8227F0D8;
	// addi r11,r11,27656
	ctx.r11.s64 = ctx.r11.s64 + 27656;
	// addi r29,r11,-576
	ctx.r29.s64 = ctx.r11.s64 + -576;
	// b 0x8227f0dc
	goto loc_8227F0DC;
loc_8227F0D8:
	// addi r29,r11,27656
	ctx.r29.s64 = ctx.r11.s64 + 27656;
loc_8227F0DC:
	// mulli r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 * 24;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8227f198
	if (!ctx.cr6.eq) goto loc_8227F198;
	// addi r10,r30,-17
	ctx.r10.s64 = ctx.r30.s64 + -17;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,27664
	ctx.r11.s64 = ctx.r11.s64 + 27664;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x8227f130
	if (!ctx.cr0.eq) goto loc_8227F130;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,3219
	ctx.r7.s64 = 3219;
	// addi r5,r11,28504
	ctx.r5.s64 = ctx.r11.s64 + 28504;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x8227F130;
	sub_821BBC58(ctx, base);
loc_8227F130:
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r31
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmpwi r31,0
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x8227f148
	if (ctx.cr0.lt) goto loc_8227F148;
	// cmpwi cr6,r31,24
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 24, ctx.xer);
	// blt cr6,0x8227f164
	if (ctx.cr6.lt) goto loc_8227F164;
loc_8227F148:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,3221
	ctx.r7.s64 = 3221;
	// addi r5,r11,28464
	ctx.r5.s64 = ctx.r11.s64 + 28464;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x8227F164;
	sub_821BBC58(ctx, base);
loc_8227F164:
	// mulli r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 * 24;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lhz r11,6(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// bne 0x8227f198
	if (!ctx.cr0.eq) goto loc_8227F198;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,3223
	ctx.r7.s64 = 3223;
	// addi r5,r11,28520
	ctx.r5.s64 = ctx.r11.s64 + 28520;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x8227F198;
	sub_821BBC58(ctx, base);
loc_8227F198:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8227f1d4
	if (ctx.cr6.eq) goto loc_8227F1D4;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x8227f1d4
	if (ctx.cr6.eq) goto loc_8227F1D4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r8,0(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// addi r4,r11,28352
	ctx.r4.s64 = ctx.r11.s64 + 28352;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// li r6,100
	ctx.r6.s64 = 100;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r5,400(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// mtctr r23
	ctx.ctr.u64 = ctx.r23.u64;
	// bctrl 
	ctx.lr = 0x8227F1D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227F1D4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822e9920
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8227F1E0"))) PPC_WEAK_FUNC(sub_8227F1E0);
PPC_FUNC_IMPL(__imp__sub_8227F1E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98d8
	ctx.lr = 0x8227F1E8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8227f22c
	if (!ctx.cr6.eq) goto loc_8227F22C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,3264
	ctx.r7.s64 = 3264;
	// addi r6,r11,28256
	ctx.r6.s64 = ctx.r11.s64 + 28256;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,-10216
	ctx.r5.s64 = ctx.r11.s64 + -10216;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x8227F22C;
	sub_821BBC58(ctx, base);
loc_8227F22C:
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// bne cr6,0x8227f240
	if (!ctx.cr6.eq) goto loc_8227F240;
	// li r31,23
	ctx.r31.s64 = 23;
	// li r24,1
	ctx.r24.s64 = 1;
	// b 0x8227f268
	goto loc_8227F268;
loc_8227F240:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c16c8
	ctx.lr = 0x8227F250;
	sub_821C16C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c16c8
	ctx.lr = 0x8227F264;
	sub_821C16C8(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
loc_8227F268:
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// ble cr6,0x8227f284
	if (!ctx.cr6.gt) goto loc_8227F284;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82256700
	ctx.lr = 0x8227F27C;
	sub_82256700(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8227f288
	goto loc_8227F288;
loc_8227F284:
	// li r30,1
	ctx.r30.s64 = 1;
loc_8227F288:
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// mulli r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 * 24;
	// addi r10,r10,27656
	ctx.r10.s64 = ctx.r10.s64 + 27656;
	// beq cr6,0x8227f2ac
	if (ctx.cr6.eq) goto loc_8227F2AC;
	// addi r9,r10,-576
	ctx.r9.s64 = ctx.r10.s64 + -576;
	// addi r10,r10,-576
	ctx.r10.s64 = ctx.r10.s64 + -576;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// b 0x8227f2b0
	goto loc_8227F2B0;
loc_8227F2AC:
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
loc_8227F2B0:
	// lhzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8227f2dc
	if (!ctx.cr6.eq) goto loc_8227F2DC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8227f2d8
	if (ctx.cr6.eq) goto loc_8227F2D8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x8227f2dc
	goto loc_8227F2DC;
loc_8227F2D8:
	// stw r24,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r24.u32);
loc_8227F2DC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8227f338
	if (ctx.cr6.eq) goto loc_8227F338;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8227f338
	if (ctx.cr6.eq) goto loc_8227F338;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r4,r11,28352
	ctx.r4.s64 = ctx.r11.s64 + 28352;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// li r6,28
	ctx.r6.s64 = 28;
	// addi r31,r11,27240
	ctx.r31.s64 = ctx.r11.s64 + 27240;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r5,112(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x8227F318;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r5,396(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r4,r11,28240
	ctx.r4.s64 = ctx.r11.s64 + 28240;
	// li r6,99
	ctx.r6.s64 = 99;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x8227F338;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227F338:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822e9928
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8227F344"))) PPC_WEAK_FUNC(sub_8227F344);
PPC_FUNC_IMPL(__imp__sub_8227F344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8227F348"))) PPC_WEAK_FUNC(sub_8227F348);
PPC_FUNC_IMPL(__imp__sub_8227F348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98d4
	ctx.lr = 0x8227F350;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,82
	ctx.r4.s64 = 82;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// bl 0x821c16c8
	ctx.lr = 0x8227F37C;
	sub_821C16C8(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,83
	ctx.r4.s64 = 83;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c16c8
	ctx.lr = 0x8227F390;
	sub_821C16C8(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,84
	ctx.r4.s64 = 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c16c8
	ctx.lr = 0x8227F3A4;
	sub_821C16C8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r24,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r24.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// stw r23,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r23.u32);
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8227f3f4
	if (ctx.cr6.eq) goto loc_8227F3F4;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8227f3f4
	if (ctx.cr6.eq) goto loc_8227F3F4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r4,r11,28548
	ctx.r4.s64 = ctx.r11.s64 + 28548;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,48(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x8227F3F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227F3F4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822e9924
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8227F400"))) PPC_WEAK_FUNC(sub_8227F400);
PPC_FUNC_IMPL(__imp__sub_8227F400) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x8227F408;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8227f444
	if (!ctx.cr6.eq) goto loc_8227F444;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,3379
	ctx.r7.s64 = 3379;
	// addi r6,r11,28256
	ctx.r6.s64 = ctx.r11.s64 + 28256;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,-10216
	ctx.r5.s64 = ctx.r11.s64 + -10216;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x8227F444;
	sub_821BBC58(ctx, base);
loc_8227F444:
	// li r4,130
	ctx.r4.s64 = 130;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8225af28
	ctx.lr = 0x8227F450;
	sub_8225AF28(ctx, base);
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8227f494
	if (ctx.cr6.eq) goto loc_8227F494;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8227f494
	if (ctx.cr6.eq) goto loc_8227F494;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8227c0d8
	ctx.lr = 0x8227F46C;
	sub_8227C0D8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,28576
	ctx.r4.s64 = ctx.r11.s64 + 28576;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// li r6,103
	ctx.r6.s64 = 103;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,412(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 412);
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8227F494;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227F494:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8227F4A0"))) PPC_WEAK_FUNC(sub_8227F4A0);
PPC_FUNC_IMPL(__imp__sub_8227F4A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x8227F4A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8227f4e4
	if (!ctx.cr6.eq) goto loc_8227F4E4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,3411
	ctx.r7.s64 = 3411;
	// addi r6,r11,28256
	ctx.r6.s64 = ctx.r11.s64 + 28256;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,-10216
	ctx.r5.s64 = ctx.r11.s64 + -10216;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x8227F4E4;
	sub_821BBC58(ctx, base);
loc_8227F4E4:
	// li r4,129
	ctx.r4.s64 = 129;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8225af28
	ctx.lr = 0x8227F4F0;
	sub_8225AF28(ctx, base);
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8227f534
	if (ctx.cr6.eq) goto loc_8227F534;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8227f534
	if (ctx.cr6.eq) goto loc_8227F534;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8227c0d8
	ctx.lr = 0x8227F50C;
	sub_8227C0D8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,28576
	ctx.r4.s64 = ctx.r11.s64 + 28576;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// li r6,104
	ctx.r6.s64 = 104;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,416(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 416);
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8227F534;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227F534:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8227F540"))) PPC_WEAK_FUNC(sub_8227F540);
PPC_FUNC_IMPL(__imp__sub_8227F540) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,28592(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28592);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8227F554"))) PPC_WEAK_FUNC(sub_8227F554);
PPC_FUNC_IMPL(__imp__sub_8227F554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8227F558"))) PPC_WEAK_FUNC(sub_8227F558);
PPC_FUNC_IMPL(__imp__sub_8227F558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x8227F560;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8227f59c
	if (!ctx.cr6.eq) goto loc_8227F59C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,3457
	ctx.r7.s64 = 3457;
	// addi r6,r11,28256
	ctx.r6.s64 = ctx.r11.s64 + 28256;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,-10216
	ctx.r5.s64 = ctx.r11.s64 + -10216;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x8227F59C;
	sub_821BBC58(ctx, base);
loc_8227F59C:
	// li r4,580
	ctx.r4.s64 = 580;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c13c0
	ctx.lr = 0x8227F5A8;
	sub_821C13C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,581
	ctx.r4.s64 = 581;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c13c0
	ctx.lr = 0x8227F5B8;
	sub_821C13C0(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8227f5e8
	if (!ctx.cr6.eq) goto loc_8227F5E8;
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,28596(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28596);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// b 0x8227f5f0
	goto loc_8227F5F0;
loc_8227F5E8:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,28592(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28592);
	ctx.f0.f64 = double(temp.f32);
loc_8227F5F0:
	// stfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8227f638
	if (ctx.cr6.eq) goto loc_8227F638;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8227f638
	if (ctx.cr6.eq) goto loc_8227F638;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x8227c0d8
	ctx.lr = 0x8227F610;
	sub_8227C0D8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,28576
	ctx.r4.s64 = ctx.r11.s64 + 28576;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// li r6,67
	ctx.r6.s64 = 67;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,268(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8227F638;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227F638:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8227F644"))) PPC_WEAK_FUNC(sub_8227F644);
PPC_FUNC_IMPL(__imp__sub_8227F644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8227F648"))) PPC_WEAK_FUNC(sub_8227F648);
PPC_FUNC_IMPL(__imp__sub_8227F648) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,28600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28600);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8227F65C"))) PPC_WEAK_FUNC(sub_8227F65C);
PPC_FUNC_IMPL(__imp__sub_8227F65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8227F660"))) PPC_WEAK_FUNC(sub_8227F660);
PPC_FUNC_IMPL(__imp__sub_8227F660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x8227F668;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8227f6a4
	if (!ctx.cr6.eq) goto loc_8227F6A4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,3516
	ctx.r7.s64 = 3516;
	// addi r6,r11,28256
	ctx.r6.s64 = ctx.r11.s64 + 28256;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,-10216
	ctx.r5.s64 = ctx.r11.s64 + -10216;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x8227F6A4;
	sub_821BBC58(ctx, base);
loc_8227F6A4:
	// li r4,1000
	ctx.r4.s64 = 1000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8225af28
	ctx.lr = 0x8227F6B0;
	sub_8225AF28(ctx, base);
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8227f6f4
	if (ctx.cr6.eq) goto loc_8227F6F4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8227f6f4
	if (ctx.cr6.eq) goto loc_8227F6F4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8227c0d8
	ctx.lr = 0x8227F6CC;
	sub_8227C0D8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,28576
	ctx.r4.s64 = ctx.r11.s64 + 28576;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// li r6,9
	ctx.r6.s64 = 9;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,36(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8227F6F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227F6F4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8227F700"))) PPC_WEAK_FUNC(sub_8227F700);
PPC_FUNC_IMPL(__imp__sub_8227F700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x8227F708;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8227f744
	if (!ctx.cr6.eq) goto loc_8227F744;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,3546
	ctx.r7.s64 = 3546;
	// addi r6,r11,28256
	ctx.r6.s64 = ctx.r11.s64 + 28256;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,-10216
	ctx.r5.s64 = ctx.r11.s64 + -10216;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x8227F744;
	sub_821BBC58(ctx, base);
loc_8227F744:
	// li r4,1001
	ctx.r4.s64 = 1001;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8225af28
	ctx.lr = 0x8227F750;
	sub_8225AF28(ctx, base);
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8227f794
	if (ctx.cr6.eq) goto loc_8227F794;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8227f794
	if (ctx.cr6.eq) goto loc_8227F794;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8227c0d8
	ctx.lr = 0x8227F76C;
	sub_8227C0D8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,28576
	ctx.r4.s64 = ctx.r11.s64 + 28576;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// li r6,69
	ctx.r6.s64 = 69;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,276(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8227F794;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227F794:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8227F7A0"))) PPC_WEAK_FUNC(sub_8227F7A0);
PPC_FUNC_IMPL(__imp__sub_8227F7A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x8227F7A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8227f7e4
	if (!ctx.cr6.eq) goto loc_8227F7E4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,3577
	ctx.r7.s64 = 3577;
	// addi r6,r11,28256
	ctx.r6.s64 = ctx.r11.s64 + 28256;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,-10216
	ctx.r5.s64 = ctx.r11.s64 + -10216;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x8227F7E4;
	sub_821BBC58(ctx, base);
loc_8227F7E4:
	// li r4,1002
	ctx.r4.s64 = 1002;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8225af28
	ctx.lr = 0x8227F7F0;
	sub_8225AF28(ctx, base);
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8227f834
	if (ctx.cr6.eq) goto loc_8227F834;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8227f834
	if (ctx.cr6.eq) goto loc_8227F834;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8227c0d8
	ctx.lr = 0x8227F80C;
	sub_8227C0D8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,28576
	ctx.r4.s64 = ctx.r11.s64 + 28576;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// li r6,70
	ctx.r6.s64 = 70;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,280(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8227F834;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227F834:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8227F840"))) PPC_WEAK_FUNC(sub_8227F840);
PPC_FUNC_IMPL(__imp__sub_8227F840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,9580(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9580);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8227F854"))) PPC_WEAK_FUNC(sub_8227F854);
PPC_FUNC_IMPL(__imp__sub_8227F854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8227F858"))) PPC_WEAK_FUNC(sub_8227F858);
PPC_FUNC_IMPL(__imp__sub_8227F858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x8227F860;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8227f8a0
	if (!ctx.cr6.eq) goto loc_8227F8A0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,3620
	ctx.r7.s64 = 3620;
	// addi r6,r11,28256
	ctx.r6.s64 = ctx.r11.s64 + 28256;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,-10216
	ctx.r5.s64 = ctx.r11.s64 + -10216;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x8227F8A0;
	sub_821BBC58(ctx, base);
loc_8227F8A0:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8225bef8
	ctx.lr = 0x8227F8B0;
	sub_8225BEF8(ctx, base);
	// stfs f1,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8227f8f8
	if (ctx.cr6.eq) goto loc_8227F8F8;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8227f8f8
	if (ctx.cr6.eq) goto loc_8227F8F8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8227c0d8
	ctx.lr = 0x8227F8CC;
	sub_8227C0D8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,28604
	ctx.r4.s64 = ctx.r11.s64 + 28604;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// li r6,11
	ctx.r6.s64 = 11;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,44(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8227F8F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227F8F8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8227F904"))) PPC_WEAK_FUNC(sub_8227F904);
PPC_FUNC_IMPL(__imp__sub_8227F904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8227F908"))) PPC_WEAK_FUNC(sub_8227F908);
PPC_FUNC_IMPL(__imp__sub_8227F908) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x8227F910;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8227f950
	if (!ctx.cr6.eq) goto loc_8227F950;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,3654
	ctx.r7.s64 = 3654;
	// addi r6,r11,28256
	ctx.r6.s64 = ctx.r11.s64 + 28256;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,-10216
	ctx.r5.s64 = ctx.r11.s64 + -10216;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x8227F950;
	sub_821BBC58(ctx, base);
loc_8227F950:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8225bef8
	ctx.lr = 0x8227F960;
	sub_8225BEF8(ctx, base);
	// stfs f1,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8227f9a8
	if (ctx.cr6.eq) goto loc_8227F9A8;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8227f9a8
	if (ctx.cr6.eq) goto loc_8227F9A8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8227c0d8
	ctx.lr = 0x8227F97C;
	sub_8227C0D8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,28604
	ctx.r4.s64 = ctx.r11.s64 + 28604;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// li r6,72
	ctx.r6.s64 = 72;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,288(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8227F9A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227F9A8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8227F9B4"))) PPC_WEAK_FUNC(sub_8227F9B4);
PPC_FUNC_IMPL(__imp__sub_8227F9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8227F9B8"))) PPC_WEAK_FUNC(sub_8227F9B8);
PPC_FUNC_IMPL(__imp__sub_8227F9B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x8227F9C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8227fa00
	if (!ctx.cr6.eq) goto loc_8227FA00;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,3688
	ctx.r7.s64 = 3688;
	// addi r6,r11,28256
	ctx.r6.s64 = ctx.r11.s64 + 28256;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,-10216
	ctx.r5.s64 = ctx.r11.s64 + -10216;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x8227FA00;
	sub_821BBC58(ctx, base);
loc_8227FA00:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8225bef8
	ctx.lr = 0x8227FA10;
	sub_8225BEF8(ctx, base);
	// stfs f1,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8227fa58
	if (ctx.cr6.eq) goto loc_8227FA58;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8227fa58
	if (ctx.cr6.eq) goto loc_8227FA58;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8227c0d8
	ctx.lr = 0x8227FA2C;
	sub_8227C0D8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,28604
	ctx.r4.s64 = ctx.r11.s64 + 28604;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// li r6,73
	ctx.r6.s64 = 73;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,292(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8227FA58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227FA58:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8227FA64"))) PPC_WEAK_FUNC(sub_8227FA64);
PPC_FUNC_IMPL(__imp__sub_8227FA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8227FA68"))) PPC_WEAK_FUNC(sub_8227FA68);
PPC_FUNC_IMPL(__imp__sub_8227FA68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x8227FA70;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8227fab0
	if (!ctx.cr6.eq) goto loc_8227FAB0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,3721
	ctx.r7.s64 = 3721;
	// addi r6,r11,28256
	ctx.r6.s64 = ctx.r11.s64 + 28256;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,-10216
	ctx.r5.s64 = ctx.r11.s64 + -10216;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x8227FAB0;
	sub_821BBC58(ctx, base);
loc_8227FAB0:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8225bef8
	ctx.lr = 0x8227FAC0;
	sub_8225BEF8(ctx, base);
	// stfs f1,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8227fb08
	if (ctx.cr6.eq) goto loc_8227FB08;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8227fb08
	if (ctx.cr6.eq) goto loc_8227FB08;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8227c0d8
	ctx.lr = 0x8227FADC;
	sub_8227C0D8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,28604
	ctx.r4.s64 = ctx.r11.s64 + 28604;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// li r6,74
	ctx.r6.s64 = 74;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,296(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8227FB08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227FB08:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8227FB14"))) PPC_WEAK_FUNC(sub_8227FB14);
PPC_FUNC_IMPL(__imp__sub_8227FB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8227FB18"))) PPC_WEAK_FUNC(sub_8227FB18);
PPC_FUNC_IMPL(__imp__sub_8227FB18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e0
	ctx.lr = 0x8227FB20;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-10544
	ctx.r30.s64 = ctx.r11.s64 + -10544;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,28256
	ctx.r29.s64 = ctx.r11.s64 + 28256;
	// bne cr6,0x8227fb68
	if (!ctx.cr6.eq) goto loc_8227FB68;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,3754
	ctx.r7.s64 = 3754;
	// addi r5,r11,-10216
	ctx.r5.s64 = ctx.r11.s64 + -10216;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x8227FB68;
	sub_821BBC58(ctx, base);
loc_8227FB68:
	// li r4,165
	ctx.r4.s64 = 165;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c13c0
	ctx.lr = 0x8227FB74;
	sub_821C13C0(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bne cr6,0x8227fb90
	if (!ctx.cr6.eq) goto loc_8227FB90;
	// li r4,166
	ctx.r4.s64 = 166;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225af28
	ctx.lr = 0x8227FB88;
	sub_8225AF28(ctx, base);
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// b 0x8227fb9c
	goto loc_8227FB9C;
loc_8227FB90:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,9472(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9472);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
loc_8227FB9C:
	// li r4,170
	ctx.r4.s64 = 170;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c13c0
	ctx.lr = 0x8227FBA8;
	sub_821C13C0(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x8227fbcc
	if (ctx.cr6.eq) goto loc_8227FBCC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,3767
	ctx.r7.s64 = 3767;
	// addi r5,r11,28624
	ctx.r5.s64 = ctx.r11.s64 + 28624;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x8227FBCC;
	sub_821BBC58(ctx, base);
loc_8227FBCC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8227fc10
	if (ctx.cr6.eq) goto loc_8227FC10;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8227fc10
	if (ctx.cr6.eq) goto loc_8227FC10;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8227c0d8
	ctx.lr = 0x8227FBE8;
	sub_8227C0D8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,28576
	ctx.r4.s64 = ctx.r11.s64 + 28576;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// li r6,26
	ctx.r6.s64 = 26;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,104(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x8227FC10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227FC10:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822e9930
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8227FC1C"))) PPC_WEAK_FUNC(sub_8227FC1C);
PPC_FUNC_IMPL(__imp__sub_8227FC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8227FC20"))) PPC_WEAK_FUNC(sub_8227FC20);
PPC_FUNC_IMPL(__imp__sub_8227FC20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e0
	ctx.lr = 0x8227FC28;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,-10544
	ctx.r29.s64 = ctx.r11.s64 + -10544;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r28,r11,28256
	ctx.r28.s64 = ctx.r11.s64 + 28256;
	// bne cr6,0x8227fc74
	if (!ctx.cr6.eq) goto loc_8227FC74;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,3800
	ctx.r7.s64 = 3800;
	// addi r5,r11,-10216
	ctx.r5.s64 = ctx.r11.s64 + -10216;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x8227FC74;
	sub_821BBC58(ctx, base);
loc_8227FC74:
	// li r4,165
	ctx.r4.s64 = 165;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c13c0
	ctx.lr = 0x8227FC80;
	sub_821C13C0(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x8227fcd8
	if (!ctx.cr6.eq) goto loc_8227FCD8;
	// li r4,166
	ctx.r4.s64 = 166;
	// bl 0x8225af28
	ctx.lr = 0x8227FC94;
	sub_8225AF28(ctx, base);
	// li r4,167
	ctx.r4.s64 = 167;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8225af28
	ctx.lr = 0x8227FCA4;
	sub_8225AF28(ctx, base);
	// fsubs f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f31.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,9472(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9472);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x8227fcc8
	if (!ctx.cr6.eq) goto loc_8227FCC8;
	// lis r11,32639
	ctx.r11.s64 = 2139029504;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x8227fcfc
	goto loc_8227FCFC;
loc_8227FCC8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,9580(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9580);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// b 0x8227fcf8
	goto loc_8227FCF8;
loc_8227FCD8:
	// li r4,168
	ctx.r4.s64 = 168;
	// bl 0x8225af28
	ctx.lr = 0x8227FCE0;
	sub_8225AF28(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,16480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16480);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fdivs f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// lfs f0,9580(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9580);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
loc_8227FCF8:
	// stfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_8227FCFC:
	// li r4,170
	ctx.r4.s64 = 170;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c13c0
	ctx.lr = 0x8227FD08;
	sub_821C13C0(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x8227fd2c
	if (ctx.cr6.eq) goto loc_8227FD2C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,3827
	ctx.r7.s64 = 3827;
	// addi r5,r11,28768
	ctx.r5.s64 = ctx.r11.s64 + 28768;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x8227FD2C;
	sub_821BBC58(ctx, base);
loc_8227FD2C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8227fd70
	if (ctx.cr6.eq) goto loc_8227FD70;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8227fd70
	if (ctx.cr6.eq) goto loc_8227FD70;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8227c0d8
	ctx.lr = 0x8227FD48;
	sub_8227C0D8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,28576
	ctx.r4.s64 = ctx.r11.s64 + 28576;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// li r6,27
	ctx.r6.s64 = 27;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,108(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x8227FD70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227FD70:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x822e9930
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8227FD80"))) PPC_WEAK_FUNC(sub_8227FD80);
PPC_FUNC_IMPL(__imp__sub_8227FD80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x8227FD88;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8227fdc4
	if (!ctx.cr6.eq) goto loc_8227FDC4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,3857
	ctx.r7.s64 = 3857;
	// addi r6,r11,28256
	ctx.r6.s64 = ctx.r11.s64 + 28256;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,-10216
	ctx.r5.s64 = ctx.r11.s64 + -10216;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x8227FDC4;
	sub_821BBC58(ctx, base);
loc_8227FDC4:
	// li r4,998
	ctx.r4.s64 = 998;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8225af28
	ctx.lr = 0x8227FDD0;
	sub_8225AF28(ctx, base);
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8227fe14
	if (ctx.cr6.eq) goto loc_8227FE14;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8227fe14
	if (ctx.cr6.eq) goto loc_8227FE14;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8227c0d8
	ctx.lr = 0x8227FDEC;
	sub_8227C0D8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,28576
	ctx.r4.s64 = ctx.r11.s64 + 28576;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// li r6,93
	ctx.r6.s64 = 93;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,372(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 372);
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8227FE14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227FE14:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8227FE20"))) PPC_WEAK_FUNC(sub_8227FE20);
PPC_FUNC_IMPL(__imp__sub_8227FE20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x8227FE28;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8227fe64
	if (!ctx.cr6.eq) goto loc_8227FE64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,3889
	ctx.r7.s64 = 3889;
	// addi r6,r11,28256
	ctx.r6.s64 = ctx.r11.s64 + 28256;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,-10216
	ctx.r5.s64 = ctx.r11.s64 + -10216;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x8227FE64;
	sub_821BBC58(ctx, base);
loc_8227FE64:
	// li r4,999
	ctx.r4.s64 = 999;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8225af28
	ctx.lr = 0x8227FE70;
	sub_8225AF28(ctx, base);
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8227feb4
	if (ctx.cr6.eq) goto loc_8227FEB4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8227feb4
	if (ctx.cr6.eq) goto loc_8227FEB4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8227c0d8
	ctx.lr = 0x8227FE8C;
	sub_8227C0D8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,28576
	ctx.r4.s64 = ctx.r11.s64 + 28576;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// li r6,94
	ctx.r6.s64 = 94;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,376(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 376);
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8227FEB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227FEB4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8227FEC0"))) PPC_WEAK_FUNC(sub_8227FEC0);
PPC_FUNC_IMPL(__imp__sub_8227FEC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,18496(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18496);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8227FED4"))) PPC_WEAK_FUNC(sub_8227FED4);
PPC_FUNC_IMPL(__imp__sub_8227FED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8227FED8"))) PPC_WEAK_FUNC(sub_8227FED8);
PPC_FUNC_IMPL(__imp__sub_8227FED8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,18492(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18492);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8227FEEC"))) PPC_WEAK_FUNC(sub_8227FEEC);
PPC_FUNC_IMPL(__imp__sub_8227FEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8227FEF0"))) PPC_WEAK_FUNC(sub_8227FEF0);
PPC_FUNC_IMPL(__imp__sub_8227FEF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,18488(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18488);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8227FF04"))) PPC_WEAK_FUNC(sub_8227FF04);
PPC_FUNC_IMPL(__imp__sub_8227FF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8227FF08"))) PPC_WEAK_FUNC(sub_8227FF08);
PPC_FUNC_IMPL(__imp__sub_8227FF08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,18484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8227FF1C"))) PPC_WEAK_FUNC(sub_8227FF1C);
PPC_FUNC_IMPL(__imp__sub_8227FF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8227FF20"))) PPC_WEAK_FUNC(sub_8227FF20);
PPC_FUNC_IMPL(__imp__sub_8227FF20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,18480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18480);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8227FF34"))) PPC_WEAK_FUNC(sub_8227FF34);
PPC_FUNC_IMPL(__imp__sub_8227FF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8227FF38"))) PPC_WEAK_FUNC(sub_8227FF38);
PPC_FUNC_IMPL(__imp__sub_8227FF38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,18476(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18476);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8227FF4C"))) PPC_WEAK_FUNC(sub_8227FF4C);
PPC_FUNC_IMPL(__imp__sub_8227FF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8227FF50"))) PPC_WEAK_FUNC(sub_8227FF50);
PPC_FUNC_IMPL(__imp__sub_8227FF50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,18472(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18472);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8227FF64"))) PPC_WEAK_FUNC(sub_8227FF64);
PPC_FUNC_IMPL(__imp__sub_8227FF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8227FF68"))) PPC_WEAK_FUNC(sub_8227FF68);
PPC_FUNC_IMPL(__imp__sub_8227FF68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,18468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18468);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8227FF7C"))) PPC_WEAK_FUNC(sub_8227FF7C);
PPC_FUNC_IMPL(__imp__sub_8227FF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8227FF80"))) PPC_WEAK_FUNC(sub_8227FF80);
PPC_FUNC_IMPL(__imp__sub_8227FF80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,9472(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9472);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8227FF94"))) PPC_WEAK_FUNC(sub_8227FF94);
PPC_FUNC_IMPL(__imp__sub_8227FF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8227FF98"))) PPC_WEAK_FUNC(sub_8227FF98);
PPC_FUNC_IMPL(__imp__sub_8227FF98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x8227FFA0;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8227ffe0
	if (!ctx.cr6.eq) goto loc_8227FFE0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,4098
	ctx.r7.s64 = 4098;
	// addi r6,r11,28256
	ctx.r6.s64 = ctx.r11.s64 + 28256;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,-10216
	ctx.r5.s64 = ctx.r11.s64 + -10216;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x8227FFE0;
	sub_821BBC58(ctx, base);
loc_8227FFE0:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,86
	ctx.r4.s64 = 86;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8225bef8
	ctx.lr = 0x8227FFF0;
	sub_8225BEF8(ctx, base);
	// stfs f1,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82280038
	if (ctx.cr6.eq) goto loc_82280038;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82280038
	if (ctx.cr6.eq) goto loc_82280038;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8227c0d8
	ctx.lr = 0x8228000C;
	sub_8227C0D8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,28604
	ctx.r4.s64 = ctx.r11.s64 + 28604;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// li r6,51
	ctx.r6.s64 = 51;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,204(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82280038;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82280038:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82280044"))) PPC_WEAK_FUNC(sub_82280044);
PPC_FUNC_IMPL(__imp__sub_82280044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82280048"))) PPC_WEAK_FUNC(sub_82280048);
PPC_FUNC_IMPL(__imp__sub_82280048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x82280050;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82280090
	if (!ctx.cr6.eq) goto loc_82280090;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,4133
	ctx.r7.s64 = 4133;
	// addi r6,r11,28256
	ctx.r6.s64 = ctx.r11.s64 + 28256;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,-10216
	ctx.r5.s64 = ctx.r11.s64 + -10216;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x82280090;
	sub_821BBC58(ctx, base);
loc_82280090:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c16c8
	ctx.lr = 0x822800A0;
	sub_821C16C8(ctx, base);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// stfs f1,0(r28)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// beq cr6,0x822800f8
	if (ctx.cr6.eq) goto loc_822800F8;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822800f8
	if (ctx.cr6.eq) goto loc_822800F8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8227c0d8
	ctx.lr = 0x822800D0;
	sub_8227C0D8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,28576
	ctx.r4.s64 = ctx.r11.s64 + 28576;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// li r6,54
	ctx.r6.s64 = 54;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,216(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x822800F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822800F8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82280104"))) PPC_WEAK_FUNC(sub_82280104);
PPC_FUNC_IMPL(__imp__sub_82280104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82280108"))) PPC_WEAK_FUNC(sub_82280108);
PPC_FUNC_IMPL(__imp__sub_82280108) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x82280110;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8228014c
	if (!ctx.cr6.eq) goto loc_8228014C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,4163
	ctx.r7.s64 = 4163;
	// addi r6,r11,28256
	ctx.r6.s64 = ctx.r11.s64 + 28256;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,-10216
	ctx.r5.s64 = ctx.r11.s64 + -10216;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x8228014C;
	sub_821BBC58(ctx, base);
loc_8228014C:
	// li r4,166
	ctx.r4.s64 = 166;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8225af28
	ctx.lr = 0x82280158;
	sub_8225AF28(ctx, base);
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8228019c
	if (ctx.cr6.eq) goto loc_8228019C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8228019c
	if (ctx.cr6.eq) goto loc_8228019C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8227c0d8
	ctx.lr = 0x82280174;
	sub_8227C0D8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,28576
	ctx.r4.s64 = ctx.r11.s64 + 28576;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// li r6,24
	ctx.r6.s64 = 24;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,96(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8228019C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8228019C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822801A8"))) PPC_WEAK_FUNC(sub_822801A8);
PPC_FUNC_IMPL(__imp__sub_822801A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x822801B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x822801ec
	if (!ctx.cr6.eq) goto loc_822801EC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,4195
	ctx.r7.s64 = 4195;
	// addi r6,r11,28256
	ctx.r6.s64 = ctx.r11.s64 + 28256;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,-10216
	ctx.r5.s64 = ctx.r11.s64 + -10216;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x822801EC;
	sub_821BBC58(ctx, base);
loc_822801EC:
	// li r4,167
	ctx.r4.s64 = 167;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8225af28
	ctx.lr = 0x822801F8;
	sub_8225AF28(ctx, base);
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8228023c
	if (ctx.cr6.eq) goto loc_8228023C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8228023c
	if (ctx.cr6.eq) goto loc_8228023C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8227c0d8
	ctx.lr = 0x82280214;
	sub_8227C0D8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,28576
	ctx.r4.s64 = ctx.r11.s64 + 28576;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// li r6,75
	ctx.r6.s64 = 75;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,300(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8228023C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8228023C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82280248"))) PPC_WEAK_FUNC(sub_82280248);
PPC_FUNC_IMPL(__imp__sub_82280248) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x82280250;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8228028c
	if (!ctx.cr6.eq) goto loc_8228028C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,4225
	ctx.r7.s64 = 4225;
	// addi r6,r11,28256
	ctx.r6.s64 = ctx.r11.s64 + 28256;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,-10216
	ctx.r5.s64 = ctx.r11.s64 + -10216;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x8228028C;
	sub_821BBC58(ctx, base);
loc_8228028C:
	// li r4,168
	ctx.r4.s64 = 168;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8225af28
	ctx.lr = 0x82280298;
	sub_8225AF28(ctx, base);
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822802dc
	if (ctx.cr6.eq) goto loc_822802DC;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822802dc
	if (ctx.cr6.eq) goto loc_822802DC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8227c0d8
	ctx.lr = 0x822802B4;
	sub_8227C0D8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,28576
	ctx.r4.s64 = ctx.r11.s64 + 28576;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// li r6,25
	ctx.r6.s64 = 25;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,100(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x822802DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822802DC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822802E8"))) PPC_WEAK_FUNC(sub_822802E8);
PPC_FUNC_IMPL(__imp__sub_822802E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x822802F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8228032c
	if (!ctx.cr6.eq) goto loc_8228032C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,4257
	ctx.r7.s64 = 4257;
	// addi r6,r11,28256
	ctx.r6.s64 = ctx.r11.s64 + 28256;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,-10216
	ctx.r5.s64 = ctx.r11.s64 + -10216;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x8228032C;
	sub_821BBC58(ctx, base);
loc_8228032C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lfs f1,9472(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9472);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,0(r28)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// beq cr6,0x8228037c
	if (ctx.cr6.eq) goto loc_8228037C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8228037c
	if (ctx.cr6.eq) goto loc_8228037C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8227c0d8
	ctx.lr = 0x82280350;
	sub_8227C0D8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,28604
	ctx.r4.s64 = ctx.r11.s64 + 28604;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// li r6,64
	ctx.r6.s64 = 64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,256(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8228037C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8228037C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82280388"))) PPC_WEAK_FUNC(sub_82280388);
PPC_FUNC_IMPL(__imp__sub_82280388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x82280390;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x822803d0
	if (!ctx.cr6.eq) goto loc_822803D0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,4293
	ctx.r7.s64 = 4293;
	// addi r6,r11,28256
	ctx.r6.s64 = ctx.r11.s64 + 28256;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,-10216
	ctx.r5.s64 = ctx.r11.s64 + -10216;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x822803D0;
	sub_821BBC58(ctx, base);
loc_822803D0:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,26
	ctx.r4.s64 = 26;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8225bef8
	ctx.lr = 0x822803E0;
	sub_8225BEF8(ctx, base);
	// stfs f1,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82280428
	if (ctx.cr6.eq) goto loc_82280428;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82280428
	if (ctx.cr6.eq) goto loc_82280428;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8227c0d8
	ctx.lr = 0x822803FC;
	sub_8227C0D8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,28604
	ctx.r4.s64 = ctx.r11.s64 + 28604;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// li r6,65
	ctx.r6.s64 = 65;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,260(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82280428;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82280428:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82280434"))) PPC_WEAK_FUNC(sub_82280434);
PPC_FUNC_IMPL(__imp__sub_82280434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82280438"))) PPC_WEAK_FUNC(sub_82280438);
PPC_FUNC_IMPL(__imp__sub_82280438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x82280440;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82280480
	if (!ctx.cr6.eq) goto loc_82280480;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,4327
	ctx.r7.s64 = 4327;
	// addi r6,r11,28256
	ctx.r6.s64 = ctx.r11.s64 + 28256;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,-10216
	ctx.r5.s64 = ctx.r11.s64 + -10216;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x82280480;
	sub_821BBC58(ctx, base);
loc_82280480:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8225bef8
	ctx.lr = 0x82280490;
	sub_8225BEF8(ctx, base);
	// stfs f1,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822804d8
	if (ctx.cr6.eq) goto loc_822804D8;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822804d8
	if (ctx.cr6.eq) goto loc_822804D8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8227c0d8
	ctx.lr = 0x822804AC;
	sub_8227C0D8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,28604
	ctx.r4.s64 = ctx.r11.s64 + 28604;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// li r6,66
	ctx.r6.s64 = 66;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,264(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x822804D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822804D8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822804E4"))) PPC_WEAK_FUNC(sub_822804E4);
PPC_FUNC_IMPL(__imp__sub_822804E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822804E8"))) PPC_WEAK_FUNC(sub_822804E8);
PPC_FUNC_IMPL(__imp__sub_822804E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x822804F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82280530
	if (!ctx.cr6.eq) goto loc_82280530;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,4363
	ctx.r7.s64 = 4363;
	// addi r6,r11,28256
	ctx.r6.s64 = ctx.r11.s64 + 28256;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,-10216
	ctx.r5.s64 = ctx.r11.s64 + -10216;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x82280530;
	sub_821BBC58(ctx, base);
loc_82280530:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,89
	ctx.r4.s64 = 89;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821c16c8
	ctx.lr = 0x82280540;
	sub_821C16C8(ctx, base);
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// rlwimi r11,r3,30,2,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 30) & 0x3FFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFFC0000000);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82280594
	if (ctx.cr6.eq) goto loc_82280594;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82280594
	if (ctx.cr6.eq) goto loc_82280594;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8227c0d8
	ctx.lr = 0x82280568;
	sub_8227C0D8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,28604
	ctx.r4.s64 = ctx.r11.s64 + 28604;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// li r6,62
	ctx.r6.s64 = 62;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,248(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x82280594;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82280594:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822805A0"))) PPC_WEAK_FUNC(sub_822805A0);
PPC_FUNC_IMPL(__imp__sub_822805A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x822805A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,19200
	ctx.r11.s64 = 1258291200;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82280608
	if (ctx.cr6.eq) goto loc_82280608;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82280608
	if (ctx.cr6.eq) goto loc_82280608;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f1,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8227c0d8
	ctx.lr = 0x822805DC;
	sub_8227C0D8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,28604
	ctx.r4.s64 = ctx.r11.s64 + 28604;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// li r6,88
	ctx.r6.s64 = 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,352(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 352);
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82280608;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82280608:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82280614"))) PPC_WEAK_FUNC(sub_82280614);
PPC_FUNC_IMPL(__imp__sub_82280614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82280618"))) PPC_WEAK_FUNC(sub_82280618);
PPC_FUNC_IMPL(__imp__sub_82280618) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98d8
	ctx.lr = 0x82280620;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r28,r11,-10544
	ctx.r28.s64 = ctx.r11.s64 + -10544;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r27,r11,28256
	ctx.r27.s64 = ctx.r11.s64 + 28256;
	// bne cr6,0x8228066c
	if (!ctx.cr6.eq) goto loc_8228066C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,4437
	ctx.r7.s64 = 4437;
	// addi r5,r11,-10216
	ctx.r5.s64 = ctx.r11.s64 + -10216;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x8228066C;
	sub_821BBC58(ctx, base);
loc_8228066C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,91
	ctx.r4.s64 = 91;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c16c8
	ctx.lr = 0x8228067C;
	sub_821C16C8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,92
	ctx.r4.s64 = 92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c16c8
	ctx.lr = 0x82280690;
	sub_821C16C8(ctx, base);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r11,r11,27688
	ctx.r11.s64 = ctx.r11.s64 + 27688;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r31,-4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// beq cr6,0x822806f0
	if (ctx.cr6.eq) goto loc_822806F0;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// beq cr6,0x822806f0
	if (ctx.cr6.eq) goto loc_822806F0;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// beq cr6,0x822806e8
	if (ctx.cr6.eq) goto loc_822806E8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822806e8
	if (ctx.cr6.eq) goto loc_822806E8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,4450
	ctx.r7.s64 = 4450;
	// addi r5,r11,23728
	ctx.r5.s64 = ctx.r11.s64 + 23728;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x822806E8;
	sub_821BBC58(ctx, base);
loc_822806E8:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x822806f4
	goto loc_822806F4;
loc_822806F0:
	// li r11,2
	ctx.r11.s64 = 2;
loc_822806F4:
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// oris r11,r11,75
	ctx.r11.u64 = ctx.r11.u64 | 4915200;
	// or r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 | ctx.r31.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82280750
	if (ctx.cr6.eq) goto loc_82280750;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82280750
	if (ctx.cr6.eq) goto loc_82280750;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f1,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8227c0d8
	ctx.lr = 0x82280724;
	sub_8227C0D8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,28604
	ctx.r4.s64 = ctx.r11.s64 + 28604;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// li r6,89
	ctx.r6.s64 = 89;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r5,356(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x82280750;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82280750:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822e9928
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8228075C"))) PPC_WEAK_FUNC(sub_8228075C);
PPC_FUNC_IMPL(__imp__sub_8228075C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82280760"))) PPC_WEAK_FUNC(sub_82280760);
PPC_FUNC_IMPL(__imp__sub_82280760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x82280768;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x822807a8
	if (!ctx.cr6.eq) goto loc_822807A8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,4490
	ctx.r7.s64 = 4490;
	// addi r6,r11,28256
	ctx.r6.s64 = ctx.r11.s64 + 28256;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,-10216
	ctx.r5.s64 = ctx.r11.s64 + -10216;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x822807A8;
	sub_821BBC58(ctx, base);
loc_822807A8:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,90
	ctx.r4.s64 = 90;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821c16c8
	ctx.lr = 0x822807B8;
	sub_821C16C8(ctx, base);
	// oris r11,r3,19200
	ctx.r11.u64 = ctx.r3.u64 | 1258291200;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82280808
	if (ctx.cr6.eq) goto loc_82280808;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82280808
	if (ctx.cr6.eq) goto loc_82280808;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8227c0d8
	ctx.lr = 0x822807DC;
	sub_8227C0D8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,28604
	ctx.r4.s64 = ctx.r11.s64 + 28604;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// li r6,90
	ctx.r6.s64 = 90;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,360(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x82280808;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82280808:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82280814"))) PPC_WEAK_FUNC(sub_82280814);
PPC_FUNC_IMPL(__imp__sub_82280814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82280818"))) PPC_WEAK_FUNC(sub_82280818);
PPC_FUNC_IMPL(__imp__sub_82280818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x82280820;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82280860
	if (!ctx.cr6.eq) goto loc_82280860;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,447
	ctx.r7.s64 = 447;
	// addi r6,r11,28256
	ctx.r6.s64 = ctx.r11.s64 + 28256;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,-10216
	ctx.r5.s64 = ctx.r11.s64 + -10216;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x82280860;
	sub_821BBC58(ctx, base);
loc_82280860:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821c16c8
	ctx.lr = 0x82280870;
	sub_821C16C8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x822808d8
	if (!ctx.cr6.eq) goto loc_822808D8;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82280894
	if (ctx.cr6.eq) goto loc_82280894;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821c19d0
	ctx.lr = 0x82280894;
	sub_821C19D0(ctx, base);
loc_82280894:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822808d0
	if (ctx.cr6.eq) goto loc_822808D0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822808d0
	if (ctx.cr6.eq) goto loc_822808D0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,28352
	ctx.r4.s64 = ctx.r11.s64 + 28352;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// li r6,105
	ctx.r6.s64 = 105;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,420(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 420);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x822808D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822808D0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82280934
	goto loc_82280934;
loc_822808D8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822808f4
	if (ctx.cr6.eq) goto loc_822808F4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821c19d0
	ctx.lr = 0x822808F4;
	sub_821C19D0(ctx, base);
loc_822808F4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82280930
	if (ctx.cr6.eq) goto loc_82280930;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82280930
	if (ctx.cr6.eq) goto loc_82280930;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,28352
	ctx.r4.s64 = ctx.r11.s64 + 28352;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// li r6,105
	ctx.r6.s64 = 105;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,420(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 420);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82280930;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82280930:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82280934:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8228093C"))) PPC_WEAK_FUNC(sub_8228093C);
PPC_FUNC_IMPL(__imp__sub_8228093C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82280940"))) PPC_WEAK_FUNC(sub_82280940);
PPC_FUNC_IMPL(__imp__sub_82280940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98dc
	ctx.lr = 0x82280948;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r11,-10544
	ctx.r31.s64 = ctx.r11.s64 + -10544;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addi r30,r11,28256
	ctx.r30.s64 = ctx.r11.s64 + 28256;
	// bne cr6,0x82280994
	if (!ctx.cr6.eq) goto loc_82280994;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,504
	ctx.r7.s64 = 504;
	// addi r5,r11,-10216
	ctx.r5.s64 = ctx.r11.s64 + -10216;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82280994;
	sub_821BBC58(ctx, base);
loc_82280994:
	// cmpwi cr6,r29,16
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 16, ctx.xer);
	// blt cr6,0x822809b8
	if (ctx.cr6.lt) goto loc_822809B8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,505
	ctx.r7.s64 = 505;
	// addi r5,r11,28924
	ctx.r5.s64 = ctx.r11.s64 + 28924;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x822809B8;
	sub_821BBC58(ctx, base);
loc_822809B8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x822809dc
	if (!ctx.cr6.lt) goto loc_822809DC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,506
	ctx.r7.s64 = 506;
	// addi r5,r11,28912
	ctx.r5.s64 = ctx.r11.s64 + 28912;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x822809DC;
	sub_821BBC58(ctx, base);
loc_822809DC:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821c16c8
	ctx.lr = 0x822809EC;
	sub_821C16C8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x82280a50
	if (ctx.cr6.eq) goto loc_82280A50;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82280a10
	if (ctx.cr6.eq) goto loc_82280A10;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821c19d0
	ctx.lr = 0x82280A10;
	sub_821C19D0(ctx, base);
loc_82280A10:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82280a48
	if (ctx.cr6.eq) goto loc_82280A48;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82280a48
	if (ctx.cr6.eq) goto loc_82280A48;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,28352
	ctx.r4.s64 = ctx.r11.s64 + 28352;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,27240(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27240);
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x82280A48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82280A48:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82280aa8
	goto loc_82280AA8;
loc_82280A50:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82280a6c
	if (ctx.cr6.eq) goto loc_82280A6C;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821c19d0
	ctx.lr = 0x82280A6C;
	sub_821C19D0(ctx, base);
loc_82280A6C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82280aa4
	if (ctx.cr6.eq) goto loc_82280AA4;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82280aa4
	if (ctx.cr6.eq) goto loc_82280AA4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,28352
	ctx.r4.s64 = ctx.r11.s64 + 28352;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,27240(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27240);
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x82280AA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82280AA4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82280AA8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e992c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82280AB0"))) PPC_WEAK_FUNC(sub_82280AB0);
PPC_FUNC_IMPL(__imp__sub_82280AB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98dc
	ctx.lr = 0x82280AB8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r11,-10544
	ctx.r31.s64 = ctx.r11.s64 + -10544;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addi r30,r11,28256
	ctx.r30.s64 = ctx.r11.s64 + 28256;
	// bne cr6,0x82280b04
	if (!ctx.cr6.eq) goto loc_82280B04;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,561
	ctx.r7.s64 = 561;
	// addi r5,r11,-10216
	ctx.r5.s64 = ctx.r11.s64 + -10216;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82280B04;
	sub_821BBC58(ctx, base);
loc_82280B04:
	// cmpwi cr6,r29,16
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 16, ctx.xer);
	// blt cr6,0x82280b28
	if (ctx.cr6.lt) goto loc_82280B28;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,562
	ctx.r7.s64 = 562;
	// addi r5,r11,28924
	ctx.r5.s64 = ctx.r11.s64 + 28924;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82280B28;
	sub_821BBC58(ctx, base);
loc_82280B28:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x82280b4c
	if (!ctx.cr6.lt) goto loc_82280B4C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,563
	ctx.r7.s64 = 563;
	// addi r5,r11,28912
	ctx.r5.s64 = ctx.r11.s64 + 28912;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82280B4C;
	sub_821BBC58(ctx, base);
loc_82280B4C:
	// li r4,135
	ctx.r4.s64 = 135;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821c13c0
	ctx.lr = 0x82280B58;
	sub_821C13C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821c16c8
	ctx.lr = 0x82280B6C;
	sub_821C16C8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82280bdc
	if (!ctx.cr6.eq) goto loc_82280BDC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82280bdc
	if (!ctx.cr6.eq) goto loc_82280BDC;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82280b98
	if (ctx.cr6.eq) goto loc_82280B98;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821c19d0
	ctx.lr = 0x82280B98;
	sub_821C19D0(ctx, base);
loc_82280B98:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82280bd4
	if (ctx.cr6.eq) goto loc_82280BD4;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82280bd4
	if (ctx.cr6.eq) goto loc_82280BD4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,28352
	ctx.r4.s64 = ctx.r11.s64 + 28352;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x82280BD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82280BD4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82280c38
	goto loc_82280C38;
loc_82280BDC:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82280bf8
	if (ctx.cr6.eq) goto loc_82280BF8;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821c19d0
	ctx.lr = 0x82280BF8;
	sub_821C19D0(ctx, base);
loc_82280BF8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82280c34
	if (ctx.cr6.eq) goto loc_82280C34;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82280c34
	if (ctx.cr6.eq) goto loc_82280C34;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,28352
	ctx.r4.s64 = ctx.r11.s64 + 28352;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x82280C34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82280C34:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82280C38:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e992c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82280C40"))) PPC_WEAK_FUNC(sub_82280C40);
PPC_FUNC_IMPL(__imp__sub_82280C40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98dc
	ctx.lr = 0x82280C48;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r11,-10544
	ctx.r31.s64 = ctx.r11.s64 + -10544;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addi r30,r11,28256
	ctx.r30.s64 = ctx.r11.s64 + 28256;
	// bne cr6,0x82280c94
	if (!ctx.cr6.eq) goto loc_82280C94;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,619
	ctx.r7.s64 = 619;
	// addi r5,r11,-10216
	ctx.r5.s64 = ctx.r11.s64 + -10216;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82280C94;
	sub_821BBC58(ctx, base);
loc_82280C94:
	// cmpwi cr6,r29,16
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 16, ctx.xer);
	// blt cr6,0x82280cb8
	if (ctx.cr6.lt) goto loc_82280CB8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,620
	ctx.r7.s64 = 620;
	// addi r5,r11,28924
	ctx.r5.s64 = ctx.r11.s64 + 28924;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82280CB8;
	sub_821BBC58(ctx, base);
loc_82280CB8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x82280cdc
	if (!ctx.cr6.lt) goto loc_82280CDC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,621
	ctx.r7.s64 = 621;
	// addi r5,r11,28912
	ctx.r5.s64 = ctx.r11.s64 + 28912;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82280CDC;
	sub_821BBC58(ctx, base);
loc_82280CDC:
	// li r4,135
	ctx.r4.s64 = 135;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821c13c0
	ctx.lr = 0x82280CE8;
	sub_821C13C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821c16c8
	ctx.lr = 0x82280CFC;
	sub_821C16C8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82280d6c
	if (!ctx.cr6.eq) goto loc_82280D6C;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// bne cr6,0x82280d6c
	if (!ctx.cr6.eq) goto loc_82280D6C;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82280d28
	if (ctx.cr6.eq) goto loc_82280D28;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821c19d0
	ctx.lr = 0x82280D28;
	sub_821C19D0(ctx, base);
loc_82280D28:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82280d64
	if (ctx.cr6.eq) goto loc_82280D64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82280d64
	if (ctx.cr6.eq) goto loc_82280D64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,28352
	ctx.r4.s64 = ctx.r11.s64 + 28352;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x82280D64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82280D64:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82280dc8
	goto loc_82280DC8;
loc_82280D6C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82280d88
	if (ctx.cr6.eq) goto loc_82280D88;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821c19d0
	ctx.lr = 0x82280D88;
	sub_821C19D0(ctx, base);
loc_82280D88:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82280dc4
	if (ctx.cr6.eq) goto loc_82280DC4;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82280dc4
	if (ctx.cr6.eq) goto loc_82280DC4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,28352
	ctx.r4.s64 = ctx.r11.s64 + 28352;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x82280DC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82280DC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82280DC8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e992c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82280DD0"))) PPC_WEAK_FUNC(sub_82280DD0);
PPC_FUNC_IMPL(__imp__sub_82280DD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98dc
	ctx.lr = 0x82280DD8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r11,-10544
	ctx.r31.s64 = ctx.r11.s64 + -10544;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addi r30,r11,28256
	ctx.r30.s64 = ctx.r11.s64 + 28256;
	// bne cr6,0x82280e24
	if (!ctx.cr6.eq) goto loc_82280E24;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,677
	ctx.r7.s64 = 677;
	// addi r5,r11,-10216
	ctx.r5.s64 = ctx.r11.s64 + -10216;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82280E24;
	sub_821BBC58(ctx, base);
loc_82280E24:
	// cmpwi cr6,r29,16
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 16, ctx.xer);
	// blt cr6,0x82280e48
	if (ctx.cr6.lt) goto loc_82280E48;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,678
	ctx.r7.s64 = 678;
	// addi r5,r11,28924
	ctx.r5.s64 = ctx.r11.s64 + 28924;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82280E48;
	sub_821BBC58(ctx, base);
loc_82280E48:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x82280e6c
	if (!ctx.cr6.lt) goto loc_82280E6C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,679
	ctx.r7.s64 = 679;
	// addi r5,r11,28912
	ctx.r5.s64 = ctx.r11.s64 + 28912;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82280E6C;
	sub_821BBC58(ctx, base);
loc_82280E6C:
	// li r4,135
	ctx.r4.s64 = 135;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821c13c0
	ctx.lr = 0x82280E78;
	sub_821C13C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821c16c8
	ctx.lr = 0x82280E8C;
	sub_821C16C8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82280efc
	if (!ctx.cr6.eq) goto loc_82280EFC;
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// bne cr6,0x82280efc
	if (!ctx.cr6.eq) goto loc_82280EFC;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82280eb8
	if (ctx.cr6.eq) goto loc_82280EB8;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821c19d0
	ctx.lr = 0x82280EB8;
	sub_821C19D0(ctx, base);
loc_82280EB8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82280ef4
	if (ctx.cr6.eq) goto loc_82280EF4;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82280ef4
	if (ctx.cr6.eq) goto loc_82280EF4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,28352
	ctx.r4.s64 = ctx.r11.s64 + 28352;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x82280EF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82280EF4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82280f58
	goto loc_82280F58;
loc_82280EFC:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82280f18
	if (ctx.cr6.eq) goto loc_82280F18;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821c19d0
	ctx.lr = 0x82280F18;
	sub_821C19D0(ctx, base);
loc_82280F18:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82280f54
	if (ctx.cr6.eq) goto loc_82280F54;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82280f54
	if (ctx.cr6.eq) goto loc_82280F54;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,28352
	ctx.r4.s64 = ctx.r11.s64 + 28352;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r11,r11,27240
	ctx.r11.s64 = ctx.r11.s64 + 27240;
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x82280F54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82280F54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82280F58:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e992c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82280F60"))) PPC_WEAK_FUNC(sub_82280F60);
PPC_FUNC_IMPL(__imp__sub_82280F60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e0
	ctx.lr = 0x82280F68;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82280fac
	if (!ctx.cr6.eq) goto loc_82280FAC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,683
	ctx.r7.s64 = 683;
	// addi r6,r11,28944
	ctx.r6.s64 = ctx.r11.s64 + 28944;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,28936
	ctx.r5.s64 = ctx.r11.s64 + 28936;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x82280FAC;
	sub_821BBC58(ctx, base);
loc_82280FAC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82280fc0
	if (!ctx.cr0.eq) goto loc_82280FC0;
loc_82280FB8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82280ffc
	goto loc_82280FFC;
loc_82280FC0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82280fb8
	if (ctx.cr6.eq) goto loc_82280FB8;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
loc_82280FCC:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82281004
	if (!ctx.cr6.eq) goto loc_82281004;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82281014
	if (!ctx.cr6.eq) goto loc_82281014;
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_82280FF8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82280FFC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e9930
	__restgprlr_26(ctx, base);
	return;
loc_82281004:
	// bge cr6,0x82281010
	if (!ctx.cr6.lt) goto loc_82281010;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82281014
	goto loc_82281014;
loc_82281010:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82281014:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82280fcc
	if (!ctx.cr6.eq) goto loc_82280FCC;
	// b 0x82280ff8
	goto loc_82280FF8;
}

__attribute__((alias("__imp__sub_82281020"))) PPC_WEAK_FUNC(sub_82281020);
PPC_FUNC_IMPL(__imp__sub_82281020) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82281030
	if (ctx.cr6.eq) goto loc_82281030;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
loc_82281030:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82281038"))) PPC_WEAK_FUNC(sub_82281038);
PPC_FUNC_IMPL(__imp__sub_82281038) {
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
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82257ee8
	ctx.lr = 0x8228105C;
	sub_82257EE8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8228108C"))) PPC_WEAK_FUNC(sub_8228108C);
PPC_FUNC_IMPL(__imp__sub_8228108C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82281090"))) PPC_WEAK_FUNC(sub_82281090);
PPC_FUNC_IMPL(__imp__sub_82281090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98dc
	ctx.lr = 0x82281098;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r29,r11,-10544
	ctx.r29.s64 = ctx.r11.s64 + -10544;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r28,r11,28944
	ctx.r28.s64 = ctx.r11.s64 + 28944;
	// bne cr6,0x822810e0
	if (!ctx.cr6.eq) goto loc_822810E0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,66
	ctx.r7.s64 = 66;
	// addi r5,r11,4264
	ctx.r5.s64 = ctx.r11.s64 + 4264;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x822810E0;
	sub_821BBC58(ctx, base);
loc_822810E0:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82281104
	if (!ctx.cr6.eq) goto loc_82281104;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,67
	ctx.r7.s64 = 67;
	// addi r5,r11,4252
	ctx.r5.s64 = ctx.r11.s64 + 4252;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82281104;
	sub_821BBC58(ctx, base);
loc_82281104:
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82281114;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82281138
	if (!ctx.cr0.eq) goto loc_82281138;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,70
	ctx.r7.s64 = 70;
	// addi r5,r11,29048
	ctx.r5.s64 = ctx.r11.s64 + 29048;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82281138;
	sub_821BBC58(ctx, base);
loc_82281138:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r26,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bl 0x82257db8
	ctx.lr = 0x8228116C;
	sub_82257DB8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// bne 0x82281194
	if (!ctx.cr0.eq) goto loc_82281194;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,88
	ctx.r7.s64 = 88;
	// addi r5,r11,29024
	ctx.r5.s64 = ctx.r11.s64 + 29024;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82281194;
	sub_821BBC58(ctx, base);
loc_82281194:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e992c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822811A0"))) PPC_WEAK_FUNC(sub_822811A0);
PPC_FUNC_IMPL(__imp__sub_822811A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98d8
	ctx.lr = 0x822811A8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r24,20(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r28,1
	ctx.r28.s64 = 1;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8228130c
	if (ctx.cr6.eq) goto loc_8228130C;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne 0x822811fc
	if (!ctx.cr0.eq) goto loc_822811FC;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82281038
	ctx.lr = 0x822811E8;
	sub_82281038(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_822811FC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822812c4
	if (ctx.cr6.eq) goto loc_822812C4;
loc_82281204:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82281258
	if (!ctx.cr6.eq) goto loc_82281258;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r26,r27
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x822812c4
	if (ctx.cr6.eq) goto loc_822812C4;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82281250
	if (!ctx.cr6.eq) goto loc_82281250;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281038
	ctx.lr = 0x82281240;
	sub_82281038(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82281250:
	// lwz r30,12(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// b 0x822812b8
	goto loc_822812B8;
loc_82281258:
	// bge cr6,0x8228128c
	if (!ctx.cr6.lt) goto loc_8228128C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82281284
	if (!ctx.cr6.eq) goto loc_82281284;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281038
	ctx.lr = 0x82281274;
	sub_82281038(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82281284:
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x822812b8
	goto loc_822812B8;
loc_8228128C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822812b4
	if (!ctx.cr6.eq) goto loc_822812B4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281038
	ctx.lr = 0x822812A4;
	sub_82281038(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_822812B4:
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
loc_822812B8:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r26,r27
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82281204
	if (ctx.cr6.lt) goto loc_82281204;
loc_822812C4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8228130c
	if (!ctx.cr6.lt) goto loc_8228130C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281038
	ctx.lr = 0x822812E0;
	sub_82281038(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82281304
	if (!ctx.cr6.gt) goto loc_82281304;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_82281304:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// b 0x82281310
	goto loc_82281310;
loc_8228130C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82281310:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822e9928
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82281318"))) PPC_WEAK_FUNC(sub_82281318);
PPC_FUNC_IMPL(__imp__sub_82281318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98dc
	ctx.lr = 0x82281320;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r27,r11,-10544
	ctx.r27.s64 = ctx.r11.s64 + -10544;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r26,r11,28944
	ctx.r26.s64 = ctx.r11.s64 + 28944;
	// bne cr6,0x8228135c
	if (!ctx.cr6.eq) goto loc_8228135C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,572
	ctx.r7.s64 = 572;
	// addi r5,r11,28936
	ctx.r5.s64 = ctx.r11.s64 + 28936;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x8228135C;
	sub_821BBC58(ctx, base);
loc_8228135C:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8228141c
	if (ctx.cr6.lt) goto loc_8228141C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r25,r11,29060
	ctx.r25.s64 = ctx.r11.s64 + 29060;
loc_82281378:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8228139c
	if (!ctx.cr0.eq) goto loc_8228139C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8228139c
	if (!ctx.cr0.eq) goto loc_8228139C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822813a4
	if (ctx.cr0.eq) goto loc_822813A4;
loc_8228139C:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x82281378
	goto loc_82281378;
loc_822813A4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x82257fe8
	ctx.lr = 0x822813B0;
	sub_82257FE8(ctx, base);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// beq 0x82281418
	if (ctx.cr0.eq) goto loc_82281418;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// lwz r31,16(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x822813e8
	if (!ctx.cr0.eq) goto loc_822813E8;
	// li r7,616
	ctx.r7.s64 = 616;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x822813E8;
	sub_821BBC58(ctx, base);
loc_822813E8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822813fc
	if (!ctx.cr6.eq) goto loc_822813FC;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// b 0x82281378
	goto loc_82281378;
loc_822813FC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82281410
	if (!ctx.cr6.eq) goto loc_82281410;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// b 0x82281378
	goto loc_82281378;
loc_82281410:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// b 0x82281378
	goto loc_82281378;
loc_82281418:
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
loc_8228141C:
	// stw r28,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r28.u32);
	// stw r28,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r28.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e992c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8228142C"))) PPC_WEAK_FUNC(sub_8228142C);
PPC_FUNC_IMPL(__imp__sub_8228142C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82281430"))) PPC_WEAK_FUNC(sub_82281430);
PPC_FUNC_IMPL(__imp__sub_82281430) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8228146c
	if (!ctx.cr6.eq) goto loc_8228146C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,109
	ctx.r7.s64 = 109;
	// addi r6,r11,28944
	ctx.r6.s64 = ctx.r11.s64 + 28944;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,28936
	ctx.r5.s64 = ctx.r11.s64 + 28936;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x8228146C;
	sub_821BBC58(ctx, base);
loc_8228146C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281318
	ctx.lr = 0x82281474;
	sub_82281318(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82257e78
	ctx.lr = 0x8228147C;
	sub_82257E78(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82281490;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_822814A4"))) PPC_WEAK_FUNC(sub_822814A4);
PPC_FUNC_IMPL(__imp__sub_822814A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822814A8"))) PPC_WEAK_FUNC(sub_822814A8);
PPC_FUNC_IMPL(__imp__sub_822814A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-25033
	ctx.r11.s64 = -1640562688;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// ori r10,r11,31161
	ctx.r10.u64 = ctx.r11.u64 | 31161;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// blt cr6,0x82281584
	if (ctx.cr6.lt) goto loc_82281584;
	// li r8,3
	ctx.r8.s64 = 3;
	// divwu r8,r4,r8
	ctx.r8.u32 = ctx.r4.u32 / ctx.r8.u32;
loc_822814CC:
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r7,r7,-3
	ctx.r7.s64 = ctx.r7.s64 + -3;
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// subf r6,r9,r5
	ctx.r6.s64 = ctx.r5.s64 - ctx.r9.s64;
	// rlwinm r5,r9,19,13,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x7FFFF;
	// subf r6,r10,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r10.s64;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// xor r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r5.u64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r6,r11,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// xor r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r6.u64;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// rlwinm r6,r10,19,13,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x7FFFF;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// xor r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r6.u64;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// rlwinm r6,r9,20,12,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0xFFFFF;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// xor r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r6.u64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r6,r11,16,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// xor r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r6.u64;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// rlwinm r6,r10,27,5,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// xor r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r6.u64;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// rlwinm r6,r9,29,3,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// xor r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r6.u64;
	// rlwinm r6,r11,10,0,21
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// xor r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r6.u64;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// rlwinm r6,r10,17,15,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x1FFFF;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// xor r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r6.u64;
	// bne 0x822814cc
	if (!ctx.cr0.eq) goto loc_822814CC;
loc_82281584:
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// beq cr6,0x822815a4
	if (ctx.cr6.eq) goto loc_822815A4;
	// cmplwi cr6,r7,2
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 2, ctx.xer);
	// bne cr6,0x822815ac
	if (!ctx.cr6.eq) goto loc_822815AC;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
loc_822815A4:
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
loc_822815AC:
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// rlwinm r8,r9,19,13,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x7FFFF;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// xor r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r8,r11,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// xor r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// rlwinm r8,r10,19,13,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x7FFFF;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// xor r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// rlwinm r8,r9,20,12,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0xFFFFF;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// xor r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r8,r11,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// xor r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// rlwinm r8,r10,27,5,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// xor r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// rlwinm r8,r9,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// xor r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r8,r11,10,0,21
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// xor r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// rlwinm r10,r10,17,15,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x1FFFF;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// xor r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82281640"))) PPC_WEAK_FUNC(sub_82281640);
PPC_FUNC_IMPL(__imp__sub_82281640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e0
	ctx.lr = 0x82281648;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,24600
	ctx.r11.s64 = ctx.r11.s64 + 24600;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r26,8(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r31,r11,-10544
	ctx.r31.s64 = ctx.r11.s64 + -10544;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r29,r11,30168
	ctx.r29.s64 = ctx.r11.s64 + 30168;
	// bne cr6,0x82281698
	if (!ctx.cr6.eq) goto loc_82281698;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,1690
	ctx.r7.s64 = 1690;
	// addi r5,r11,15592
	ctx.r5.s64 = ctx.r11.s64 + 15592;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82281698;
	sub_821BBC58(ctx, base);
loc_82281698:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8226c7c0
	ctx.lr = 0x822816A4;
	sub_8226C7C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822816c4
	if (!ctx.cr0.eq) goto loc_822816C4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,1691
	ctx.r7.s64 = 1691;
	// addi r5,r11,30260
	ctx.r5.s64 = ctx.r11.s64 + 30260;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821bbc58
	ctx.lr = 0x822816C4;
	sub_821BBC58(ctx, base);
loc_822816C4:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r31,r11,r26
	ctx.r31.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8226c7c0
	ctx.lr = 0x822816D8;
	sub_8226C7C0(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// andc r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8226c7c0
	ctx.lr = 0x82281704;
	sub_8226C7C0(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// slw r10,r27,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r10.u8 & 0x3F));
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e9930
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82281738"))) PPC_WEAK_FUNC(sub_82281738);
PPC_FUNC_IMPL(__imp__sub_82281738) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98c4
	ctx.lr = 0x82281740;
	__savegprlr_19(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// bl 0x8229ebc0
	ctx.lr = 0x82281764;
	sub_8229EBC0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r25,r11,-10544
	ctx.r25.s64 = ctx.r11.s64 + -10544;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r24,r11,30168
	ctx.r24.s64 = ctx.r11.s64 + 30168;
	// mr. r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bne 0x82281798
	if (!ctx.cr0.eq) goto loc_82281798;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,1730
	ctx.r7.s64 = 1730;
	// addi r5,r11,30300
	ctx.r5.s64 = ctx.r11.s64 + 30300;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82281798;
	sub_821BBC58(ctx, base);
loc_82281798:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,9472(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9472);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x822817d8
	if (!ctx.cr6.eq) goto loc_822817D8;
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x822817d8
	if (!ctx.cr6.eq) goto loc_822817D8;
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x822817d8
	if (!ctx.cr6.eq) goto loc_822817D8;
	// lfs f13,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x822817d8
	if (!ctx.cr6.eq) goto loc_822817D8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82281900
	goto loc_82281900;
loc_822817D8:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8229ee20
	ctx.lr = 0x822817E4;
	sub_8229EE20(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r23,r11,30280
	ctx.r23.s64 = ctx.r11.s64 + 30280;
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bgt 0x8228180c
	if (ctx.cr0.gt) goto loc_8228180C;
	// li r7,1750
	ctx.r7.s64 = 1750;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x8228180C;
	sub_821BBC58(ctx, base);
loc_8228180C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82281848
	if (!ctx.cr6.gt) goto loc_82281848;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// subf r28,r30,r11
	ctx.r28.s64 = ctx.r11.s64 - ctx.r30.s64;
	// subf r27,r30,r10
	ctx.r27.s64 = ctx.r10.s64 - ctx.r30.s64;
loc_82281824:
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// lwzx r5,r28,r30
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r30.u32);
	// li r4,128
	ctx.r4.s64 = 128;
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8229f2a8
	ctx.lr = 0x82281838;
	sub_8229F2A8(ctx, base);
	// stwx r3,r27,r30
	PPC_STORE_U32(ctx.r27.u32 + ctx.r30.u32, ctx.r3.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82281824
	if (!ctx.cr0.eq) goto loc_82281824;
loc_82281848:
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8229f140
	ctx.lr = 0x82281858;
	sub_8229F140(ctx, base);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8229f108
	ctx.lr = 0x8228186C;
	sub_8229F108(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt 0x8228188c
	if (ctx.cr0.gt) goto loc_8228188C;
	// li r7,1763
	ctx.r7.s64 = 1763;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x8228188C;
	sub_821BBC58(ctx, base);
loc_8228188C:
	// cmplwi cr6,r19,1
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 1, ctx.xer);
	// beq cr6,0x822818e0
	if (ctx.cr6.eq) goto loc_822818E0;
	// cmplwi cr6,r19,2
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 2, ctx.xer);
	// beq cr6,0x822818c4
	if (ctx.cr6.eq) goto loc_822818C4;
	// cmplwi cr6,r19,4
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 4, ctx.xer);
	// beq cr6,0x822818bc
	if (ctx.cr6.eq) goto loc_822818BC;
	// cmplwi cr6,r19,8
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 8, ctx.xer);
	// bne cr6,0x82281910
	if (!ctx.cr6.eq) goto loc_82281910;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// b 0x8228190c
	goto loc_8228190C;
loc_822818BC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82281904
	goto loc_82281904;
loc_822818C4:
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwinm r11,r11,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// b 0x82281900
	goto loc_82281900;
loc_822818E0:
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// rotlwi r10,r11,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_82281900:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82281904:
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8228190C:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82281910:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822e9914
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8228191C"))) PPC_WEAK_FUNC(sub_8228191C);
PPC_FUNC_IMPL(__imp__sub_8228191C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82281920"))) PPC_WEAK_FUNC(sub_82281920);
PPC_FUNC_IMPL(__imp__sub_82281920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98d8
	ctx.lr = 0x82281928;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x8228197c
	if (ctx.cr6.eq) goto loc_8228197C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,34
	ctx.r4.s64 = 34;
	// bl 0x821c16c8
	ctx.lr = 0x8228194C;
	sub_821C16C8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c16c8
	ctx.lr = 0x82281960;
	sub_821C16C8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c16c8
	ctx.lr = 0x82281974;
	sub_821C16C8(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// b 0x822819a0
	goto loc_822819A0;
loc_8228197C:
	// li r4,960
	ctx.r4.s64 = 960;
	// bl 0x821c13c0
	ctx.lr = 0x82281984;
	sub_821C13C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,961
	ctx.r4.s64 = 961;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c13c0
	ctx.lr = 0x82281994;
	sub_821C13C0(ctx, base);
	// lis r24,770
	ctx.r24.s64 = 50462720;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// ori r24,r24,256
	ctx.r24.u64 = ctx.r24.u64 | 256;
loc_822819A0:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r29,r11,-10544
	ctx.r29.s64 = ctx.r11.s64 + -10544;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r28,r11,30168
	ctx.r28.s64 = ctx.r11.s64 + 30168;
	// beq cr6,0x822819c0
	if (ctx.cr6.eq) goto loc_822819C0;
	// cmplwi cr6,r30,17
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 17, ctx.xer);
	// blt cr6,0x822819dc
	if (ctx.cr6.lt) goto loc_822819DC;
loc_822819C0:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,321
	ctx.r7.s64 = 321;
	// addi r5,r11,32224
	ctx.r5.s64 = ctx.r11.s64 + 32224;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x822819DC;
	sub_821BBC58(ctx, base);
loc_822819DC:
	// clrlwi r26,r27,24
	ctx.r26.u64 = ctx.r27.u32 & 0xFF;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mulli r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 * 12;
	// cmplwi cr6,r26,64
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 64, ctx.xer);
	// addi r30,r11,29072
	ctx.r30.s64 = ctx.r11.s64 + 29072;
	// bne cr6,0x82281a38
	if (!ctx.cr6.eq) goto loc_82281A38;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// bne cr6,0x82281a24
	if (!ctx.cr6.eq) goto loc_82281A24;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,331
	ctx.r7.s64 = 331;
	// addi r5,r11,32196
	ctx.r5.s64 = ctx.r11.s64 + 32196;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82281A24;
	sub_821BBC58(ctx, base);
loc_82281A24:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82281a54
	if (!ctx.cr6.eq) goto loc_82281A54;
	// lwzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// b 0x82281a50
	goto loc_82281A50;
loc_82281A38:
	// lwzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// bne cr6,0x82281a54
	if (!ctx.cr6.eq) goto loc_82281A54;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
loc_82281A50:
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
loc_82281A54:
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// lwzx r30,r31,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// blt cr6,0x82281a8c
	if (ctx.cr6.lt) goto loc_82281A8C;
	// rlwinm r11,r27,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 24) & 0xFF;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82281a8c
	if (ctx.cr6.eq) goto loc_82281A8C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,369
	ctx.r7.s64 = 369;
	// addi r5,r11,32080
	ctx.r5.s64 = ctx.r11.s64 + 32080;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82281A8C;
	sub_821BBC58(ctx, base);
loc_82281A8C:
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// blt cr6,0x82281abc
	if (ctx.cr6.lt) goto loc_82281ABC;
	// rlwinm r11,r27,16,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 16) & 0xFF;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82281abc
	if (ctx.cr6.eq) goto loc_82281ABC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,372
	ctx.r7.s64 = 372;
	// addi r5,r11,31960
	ctx.r5.s64 = ctx.r11.s64 + 31960;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82281ABC;
	sub_821BBC58(ctx, base);
loc_82281ABC:
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x82281aec
	if (ctx.cr6.lt) goto loc_82281AEC;
	// rlwinm r11,r27,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 8) & 0xFF;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82281aec
	if (ctx.cr6.eq) goto loc_82281AEC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,375
	ctx.r7.s64 = 375;
	// addi r5,r11,31840
	ctx.r5.s64 = ctx.r11.s64 + 31840;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82281AEC;
	sub_821BBC58(ctx, base);
loc_82281AEC:
	// cmplwi cr6,r26,34
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 34, ctx.xer);
	// bne cr6,0x82281b10
	if (!ctx.cr6.eq) goto loc_82281B10;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,383
	ctx.r7.s64 = 383;
	// addi r5,r11,31760
	ctx.r5.s64 = ctx.r11.s64 + 31760;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82281B10;
	sub_821BBC58(ctx, base);
loc_82281B10:
	// cmplwi cr6,r26,35
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 35, ctx.xer);
	// bne cr6,0x82281b34
	if (!ctx.cr6.eq) goto loc_82281B34;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,385
	ctx.r7.s64 = 385;
	// addi r5,r11,31680
	ctx.r5.s64 = ctx.r11.s64 + 31680;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82281B34;
	sub_821BBC58(ctx, base);
loc_82281B34:
	// cmplwi cr6,r26,17
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 17, ctx.xer);
	// bne cr6,0x82281b58
	if (!ctx.cr6.eq) goto loc_82281B58;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,387
	ctx.r7.s64 = 387;
	// addi r5,r11,31600
	ctx.r5.s64 = ctx.r11.s64 + 31600;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82281B58;
	sub_821BBC58(ctx, base);
loc_82281B58:
	// cmplwi cr6,r26,2
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 2, ctx.xer);
	// bne cr6,0x82281b7c
	if (!ctx.cr6.eq) goto loc_82281B7C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,389
	ctx.r7.s64 = 389;
	// addi r5,r11,31512
	ctx.r5.s64 = ctx.r11.s64 + 31512;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82281B7C;
	sub_821BBC58(ctx, base);
loc_82281B7C:
	// cmplwi cr6,r26,18
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 18, ctx.xer);
	// bne cr6,0x82281ba0
	if (!ctx.cr6.eq) goto loc_82281BA0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,391
	ctx.r7.s64 = 391;
	// addi r5,r11,31424
	ctx.r5.s64 = ctx.r11.s64 + 31424;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82281BA0;
	sub_821BBC58(ctx, base);
loc_82281BA0:
	// li r31,1
	ctx.r31.s64 = 1;
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 1, ctx.xer);
	// blt cr6,0x82281bf8
	if (ctx.cr6.lt) goto loc_82281BF8;
	// beq cr6,0x82281bf0
	if (ctx.cr6.eq) goto loc_82281BF0;
	// cmplwi cr6,r26,3
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 3, ctx.xer);
	// beq cr6,0x82281be8
	if (ctx.cr6.eq) goto loc_82281BE8;
	// cmplwi cr6,r26,32
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 32, ctx.xer);
	// beq cr6,0x82281be0
	if (ctx.cr6.eq) goto loc_82281BE0;
	// cmplwi cr6,r26,33
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 33, ctx.xer);
	// beq cr6,0x82281bd8
	if (ctx.cr6.eq) goto loc_82281BD8;
	// cmplwi cr6,r26,64
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 64, ctx.xer);
	// bne cr6,0x82281bf8
	if (!ctx.cr6.eq) goto loc_82281BF8;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82281bfc
	goto loc_82281BFC;
loc_82281BD8:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82281bfc
	goto loc_82281BFC;
loc_82281BE0:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82281bfc
	goto loc_82281BFC;
loc_82281BE8:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82281bfc
	goto loc_82281BFC;
loc_82281BF0:
	// stw r31,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r31.u32);
	// b 0x82281c00
	goto loc_82281C00;
loc_82281BF8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82281BFC:
	// stw r11,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r11.u32);
loc_82281C00:
	// clrlwi. r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82281cb4
	if (!ctx.cr0.eq) goto loc_82281CB4;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// blt cr6,0x82281c48
	if (ctx.cr6.lt) goto loc_82281C48;
	// rlwinm r11,r24,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 24) & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82281c48
	if (ctx.cr6.eq) goto loc_82281C48;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82281c48
	if (ctx.cr6.eq) goto loc_82281C48;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x82281c48
	if (ctx.cr6.eq) goto loc_82281C48;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,450
	ctx.r7.s64 = 450;
	// addi r5,r11,31168
	ctx.r5.s64 = ctx.r11.s64 + 31168;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82281C48;
	sub_821BBC58(ctx, base);
loc_82281C48:
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// blt cr6,0x82281c88
	if (ctx.cr6.lt) goto loc_82281C88;
	// rlwinm r11,r24,16,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 16) & 0xFF;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82281c88
	if (ctx.cr6.eq) goto loc_82281C88;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82281c88
	if (ctx.cr6.eq) goto loc_82281C88;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x82281c88
	if (ctx.cr6.eq) goto loc_82281C88;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,454
	ctx.r7.s64 = 454;
	// addi r5,r11,30912
	ctx.r5.s64 = ctx.r11.s64 + 30912;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82281C88;
	sub_821BBC58(ctx, base);
loc_82281C88:
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x82281d94
	if (ctx.cr6.lt) goto loc_82281D94;
	// rlwinm r11,r24,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 8) & 0xFF;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82281d94
	if (ctx.cr6.eq) goto loc_82281D94;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82281d94
	if (ctx.cr6.eq) goto loc_82281D94;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x82281d94
	if (ctx.cr6.eq) goto loc_82281D94;
	// li r7,458
	ctx.r7.s64 = 458;
	// b 0x82281d7c
	goto loc_82281D7C;
loc_82281CB4:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82281cd8
	if (ctx.cr6.eq) goto loc_82281CD8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,466
	ctx.r7.s64 = 466;
	// addi r5,r11,30832
	ctx.r5.s64 = ctx.r11.s64 + 30832;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82281CD8;
	sub_821BBC58(ctx, base);
loc_82281CD8:
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// blt cr6,0x82281d18
	if (ctx.cr6.lt) goto loc_82281D18;
	// rlwinm r11,r24,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 24) & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82281d18
	if (ctx.cr6.eq) goto loc_82281D18;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82281d18
	if (ctx.cr6.eq) goto loc_82281D18;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x82281d18
	if (ctx.cr6.eq) goto loc_82281D18;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,472
	ctx.r7.s64 = 472;
	// addi r5,r11,31168
	ctx.r5.s64 = ctx.r11.s64 + 31168;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82281D18;
	sub_821BBC58(ctx, base);
loc_82281D18:
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// blt cr6,0x82281d54
	if (ctx.cr6.lt) goto loc_82281D54;
	// rlwinm. r11,r24,16,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 16) & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82281d54
	if (ctx.cr0.eq) goto loc_82281D54;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82281d54
	if (ctx.cr6.eq) goto loc_82281D54;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x82281d54
	if (ctx.cr6.eq) goto loc_82281D54;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,476
	ctx.r7.s64 = 476;
	// addi r5,r11,30576
	ctx.r5.s64 = ctx.r11.s64 + 30576;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82281D54;
	sub_821BBC58(ctx, base);
loc_82281D54:
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x82281d94
	if (ctx.cr6.lt) goto loc_82281D94;
	// rlwinm r11,r24,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 8) & 0xFF;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82281d94
	if (ctx.cr6.eq) goto loc_82281D94;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82281d94
	if (ctx.cr6.eq) goto loc_82281D94;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x82281d94
	if (ctx.cr6.eq) goto loc_82281D94;
	// li r7,480
	ctx.r7.s64 = 480;
loc_82281D7C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,30320
	ctx.r5.s64 = ctx.r11.s64 + 30320;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82281D94;
	sub_821BBC58(ctx, base);
loc_82281D94:
	// stw r31,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r31.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822e9928
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82281DA0"))) PPC_WEAK_FUNC(sub_82281DA0);
PPC_FUNC_IMPL(__imp__sub_82281DA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x82281DA8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821c16c8
	ctx.lr = 0x82281DC4;
	sub_821C16C8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c16c8
	ctx.lr = 0x82281DD8;
	sub_821C16C8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c16c8
	ctx.lr = 0x82281DEC;
	sub_821C16C8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r31,r11,-10544
	ctx.r31.s64 = ctx.r11.s64 + -10544;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r30,r11,30168
	ctx.r30.s64 = ctx.r11.s64 + 30168;
	// beq cr6,0x82281e0c
	if (ctx.cr6.eq) goto loc_82281E0C;
	// cmplwi cr6,r29,17
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 17, ctx.xer);
	// blt cr6,0x82281e28
	if (ctx.cr6.lt) goto loc_82281E28;
loc_82281E0C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,553
	ctx.r7.s64 = 553;
	// addi r5,r11,32284
	ctx.r5.s64 = ctx.r11.s64 + 32284;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82281E28;
	sub_821BBC58(ctx, base);
loc_82281E28:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bne cr6,0x82281e64
	if (!ctx.cr6.eq) goto loc_82281E64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,29280
	ctx.r11.s64 = ctx.r11.s64 + 29280;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// bne 0x82281ecc
	if (!ctx.cr0.eq) goto loc_82281ECC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,564
	ctx.r7.s64 = 564;
	// addi r5,r11,32268
	ctx.r5.s64 = ctx.r11.s64 + 32268;
	// b 0x82281ebc
	goto loc_82281EBC;
loc_82281E64:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,29280
	ctx.r11.s64 = ctx.r11.s64 + 29280;
	// bne cr6,0x82281e98
	if (!ctx.cr6.eq) goto loc_82281E98;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// bne 0x82281ecc
	if (!ctx.cr0.eq) goto loc_82281ECC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,572
	ctx.r7.s64 = 572;
	// addi r5,r11,32268
	ctx.r5.s64 = ctx.r11.s64 + 32268;
	// b 0x82281ebc
	goto loc_82281EBC;
loc_82281E98:
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// bne 0x82281ecc
	if (!ctx.cr0.eq) goto loc_82281ECC;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// beq cr6,0x82281ecc
	if (ctx.cr6.eq) goto loc_82281ECC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,585
	ctx.r7.s64 = 585;
	// addi r5,r11,572
	ctx.r5.s64 = ctx.r11.s64 + 572;
loc_82281EBC:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82281ECC;
	sub_821BBC58(ctx, base);
loc_82281ECC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82281ED4"))) PPC_WEAK_FUNC(sub_82281ED4);
PPC_FUNC_IMPL(__imp__sub_82281ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82281ED8"))) PPC_WEAK_FUNC(sub_82281ED8);
PPC_FUNC_IMPL(__imp__sub_82281ED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x82281EE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82281f20
	if (!ctx.cr6.eq) goto loc_82281F20;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,244
	ctx.r7.s64 = 244;
	// addi r6,r11,32400
	ctx.r6.s64 = ctx.r11.s64 + 32400;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,32372
	ctx.r5.s64 = ctx.r11.s64 + 32372;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x82281F20;
	sub_821BBC58(ctx, base);
loc_82281F20:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8229f818
	ctx.lr = 0x82281F2C;
	sub_8229F818(ctx, base);
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82281F38"))) PPC_WEAK_FUNC(sub_82281F38);
PPC_FUNC_IMPL(__imp__sub_82281F38) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,2144(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2144);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82281F40"))) PPC_WEAK_FUNC(sub_82281F40);
PPC_FUNC_IMPL(__imp__sub_82281F40) {
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
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x82291aa0
	ctx.lr = 0x82281F5C;
	sub_82291AA0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,370(r11)
	PPC_STORE_U8(ctx.r11.u32 + 370, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_82281F7C"))) PPC_WEAK_FUNC(sub_82281F7C);
PPC_FUNC_IMPL(__imp__sub_82281F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82281F80"))) PPC_WEAK_FUNC(sub_82281F80);
PPC_FUNC_IMPL(__imp__sub_82281F80) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82268f20
	ctx.lr = 0x82281FB4;
	sub_82268F20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82281FD4"))) PPC_WEAK_FUNC(sub_82281FD4);
PPC_FUNC_IMPL(__imp__sub_82281FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82281FD8"))) PPC_WEAK_FUNC(sub_82281FD8);
PPC_FUNC_IMPL(__imp__sub_82281FD8) {
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
	// addi r31,r3,184
	ctx.r31.s64 = ctx.r3.s64 + 184;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229ddf8
	ctx.lr = 0x82281FFC;
	sub_8229DDF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229de78
	ctx.lr = 0x82282008;
	sub_8229DE78(ctx, base);
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

__attribute__((alias("__imp__sub_82282020"))) PPC_WEAK_FUNC(sub_82282020);
PPC_FUNC_IMPL(__imp__sub_82282020) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,2072(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2072);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82282028"))) PPC_WEAK_FUNC(sub_82282028);
PPC_FUNC_IMPL(__imp__sub_82282028) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,2076(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2076);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82282030"))) PPC_WEAK_FUNC(sub_82282030);
PPC_FUNC_IMPL(__imp__sub_82282030) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,2073(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2073);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82282038"))) PPC_WEAK_FUNC(sub_82282038);
PPC_FUNC_IMPL(__imp__sub_82282038) {
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
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8228207c
	if (!ctx.cr0.eq) goto loc_8228207C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,1902
	ctx.r7.s64 = 1902;
	// addi r6,r11,32568
	ctx.r6.s64 = ctx.r11.s64 + 32568;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,32544
	ctx.r5.s64 = ctx.r11.s64 + 32544;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x8228207C;
	sub_821BBC58(ctx, base);
loc_8228207C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,58
	ctx.r11.s64 = ctx.r11.s64 + 58;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
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

__attribute__((alias("__imp__sub_822820A0"))) PPC_WEAK_FUNC(sub_822820A0);
PPC_FUNC_IMPL(__imp__sub_822820A0) {
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
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822820e4
	if (!ctx.cr0.eq) goto loc_822820E4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,1909
	ctx.r7.s64 = 1909;
	// addi r6,r11,32568
	ctx.r6.s64 = ctx.r11.s64 + 32568;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,32544
	ctx.r5.s64 = ctx.r11.s64 + 32544;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x822820E4;
	sub_821BBC58(ctx, base);
loc_822820E4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,58
	ctx.r11.s64 = ctx.r11.s64 + 58;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r10,r10,0,23,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82282124"))) PPC_WEAK_FUNC(sub_82282124);
PPC_FUNC_IMPL(__imp__sub_82282124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82282128"))) PPC_WEAK_FUNC(sub_82282128);
PPC_FUNC_IMPL(__imp__sub_82282128) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82282170
	if (!ctx.cr6.eq) goto loc_82282170;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,1919
	ctx.r7.s64 = 1919;
	// addi r6,r11,32568
	ctx.r6.s64 = ctx.r11.s64 + 32568;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,32648
	ctx.r5.s64 = ctx.r11.s64 + 32648;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x82282170;
	sub_821BBC58(ctx, base);
loc_82282170:
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// beq 0x822821ac
	if (ctx.cr0.eq) goto loc_822821AC;
	// addi r10,r11,57
	ctx.r10.s64 = ctx.r11.s64 + 57;
	// addi r11,r11,58
	ctx.r11.s64 = ctx.r11.s64 + 58;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,57
	ctx.r11.s64 = ctx.r11.s64 + 57;
	// b 0x822821b0
	goto loc_822821B0;
loc_822821AC:
	// addi r11,r11,58
	ctx.r11.s64 = ctx.r11.s64 + 58;
loc_822821B0:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_822821D0"))) PPC_WEAK_FUNC(sub_822821D0);
PPC_FUNC_IMPL(__imp__sub_822821D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x822821D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r30,r11,-10544
	ctx.r30.s64 = ctx.r11.s64 + -10544;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r29,r11,32568
	ctx.r29.s64 = ctx.r11.s64 + 32568;
	// ble cr6,0x82282220
	if (!ctx.cr6.gt) goto loc_82282220;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,1945
	ctx.r7.s64 = 1945;
	// addi r5,r11,32736
	ctx.r5.s64 = ctx.r11.s64 + 32736;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82282220;
	sub_821BBC58(ctx, base);
loc_82282220:
	// lwz r11,952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 952);
	// lbz r11,369(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 369);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82282264
	if (ctx.cr0.eq) goto loc_82282264;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82282264
	if (!ctx.cr6.eq) goto loc_82282264;
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82282264
	if (ctx.cr0.eq) goto loc_82282264;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,1948
	ctx.r7.s64 = 1948;
	// addi r5,r11,32664
	ctx.r5.s64 = ctx.r11.s64 + 32664;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82282264;
	sub_821BBC58(ctx, base);
loc_82282264:
	// addi r11,r28,58
	ctx.r11.s64 = ctx.r28.s64 + 58;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82282278"))) PPC_WEAK_FUNC(sub_82282278);
PPC_FUNC_IMPL(__imp__sub_82282278) {
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
	// lwz r3,2068(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2068);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8229faf8
	ctx.lr = 0x82282298;
	sub_8229FAF8(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_822822B0"))) PPC_WEAK_FUNC(sub_822822B0);
PPC_FUNC_IMPL(__imp__sub_822822B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x822822B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r3,2068(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2068);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8228232c
	if (!ctx.cr6.gt) goto loc_8228232C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_822822DC:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822822f4
	if (!ctx.cr6.lt) goto loc_822822F4;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// b 0x822822fc
	goto loc_822822FC;
loc_822822F4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8229faf8
	ctx.lr = 0x822822FC;
	sub_8229FAF8(ctx, base);
loc_822822FC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82282314
	if (!ctx.cr6.eq) goto loc_82282314;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,2068(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2068);
	// bl 0x8229fa30
	ctx.lr = 0x82282314;
	sub_8229FA30(ctx, base);
loc_82282314:
	// lwz r3,2068(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2068);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822822dc
	if (ctx.cr6.lt) goto loc_822822DC;
loc_8228232C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82282334"))) PPC_WEAK_FUNC(sub_82282334);
PPC_FUNC_IMPL(__imp__sub_82282334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82282338"))) PPC_WEAK_FUNC(sub_82282338);
PPC_FUNC_IMPL(__imp__sub_82282338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98d8
	ctx.lr = 0x82282340;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r24,136(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 136);
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822824d8
	if (ctx.cr6.eq) goto loc_822824D8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r28,r11,-10544
	ctx.r28.s64 = ctx.r11.s64 + -10544;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r27,r11,32756
	ctx.r27.s64 = ctx.r11.s64 + 32756;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r26,r11,32400
	ctx.r26.s64 = ctx.r11.s64 + 32400;
loc_82282370:
	// lwz r31,28(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// b 0x822824bc
	goto loc_822824BC;
loc_82282378:
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822824b8
	if (ctx.cr0.eq) goto loc_822824B8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228239C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// blt cr6,0x82282430
	if (ctx.cr6.lt) goto loc_82282430;
	// addi r30,r31,84
	ctx.r30.s64 = ctx.r31.s64 + 84;
loc_822823A8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,35
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 35, ctx.xer);
	// beq cr6,0x822823f4
	if (ctx.cr6.eq) goto loc_822823F4;
	// cmpwi cr6,r11,36
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 36, ctx.xer);
	// beq cr6,0x822823f4
	if (ctx.cr6.eq) goto loc_822823F4;
	// cmpwi cr6,r11,37
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 37, ctx.xer);
	// beq cr6,0x822823f4
	if (ctx.cr6.eq) goto loc_822823F4;
	// cmpwi cr6,r11,38
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 38, ctx.xer);
	// beq cr6,0x822823f4
	if (ctx.cr6.eq) goto loc_822823F4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822823E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x822823a8
	if (!ctx.cr6.gt) goto loc_822823A8;
	// b 0x82282430
	goto loc_82282430;
loc_822823F4:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,172(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 172);
	// li r4,31
	ctx.r4.s64 = 31;
	// bl 0x822912e8
	ctx.lr = 0x82282404;
	sub_822912E8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82282424
	if (!ctx.cr0.eq) goto loc_82282424;
	// li r7,306
	ctx.r7.s64 = 306;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82282424;
	sub_821BBC58(ctx, base);
loc_82282424:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a2ee8
	ctx.lr = 0x82282430;
	sub_822A2EE8(ctx, base);
loc_82282430:
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82282470
	if (ctx.cr0.eq) goto loc_82282470;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r4,12(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// bl 0x822a29d0
	ctx.lr = 0x82282448;
	sub_822A29D0(ctx, base);
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// bne cr6,0x82282470
	if (!ctx.cr6.eq) goto loc_82282470;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,172(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 172);
	// li r4,31
	ctx.r4.s64 = 31;
	// bl 0x822912e8
	ctx.lr = 0x82282460;
	sub_822912E8(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82282470
	if (ctx.cr0.eq) goto loc_82282470;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a2ee8
	ctx.lr = 0x82282470;
	sub_822A2EE8(ctx, base);
loc_82282470:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822824b8
	if (ctx.cr6.eq) goto loc_822824B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a1ec8
	ctx.lr = 0x82282484;
	sub_822A1EC8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822824b8
	if (ctx.cr0.eq) goto loc_822824B8;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,42
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 42, ctx.xer);
	// beq cr6,0x822824b8
	if (ctx.cr6.eq) goto loc_822824B8;
	// lwz r30,28(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822a2ee8
	ctx.lr = 0x822824A8;
	sub_822A2EE8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x822a0490
	ctx.lr = 0x822824B8;
	sub_822A0490(ctx, base);
loc_822824B8:
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_822824BC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82282378
	if (!ctx.cr6.eq) goto loc_82282378;
	// lwz r24,8(r24)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82282370
	if (!ctx.cr6.eq) goto loc_82282370;
loc_822824D8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822e9928
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822824E0"))) PPC_WEAK_FUNC(sub_822824E0);
PPC_FUNC_IMPL(__imp__sub_822824E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x822824E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r4,152(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x82282510
	if (ctx.cr0.eq) goto loc_82282510;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// bl 0x82269050
	ctx.lr = 0x82282510;
	sub_82269050(ctx, base);
loc_82282510:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// bl 0x82268f20
	ctx.lr = 0x82282524;
	sub_82268F20(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r3.u32);
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
loc_82282530:
	// lwzx r9,r11,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r8,152(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// stwx r9,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82282530
	if (!ctx.cr0.eq) goto loc_82282530;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82282550"))) PPC_WEAK_FUNC(sub_82282550);
PPC_FUNC_IMPL(__imp__sub_82282550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98dc
	ctx.lr = 0x82282558;
	__savegprlr_25(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,336(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x822825d4
	if (ctx.cr6.lt) goto loc_822825D4;
	// addi r27,r1,80
	ctx.r27.s64 = ctx.r1.s64 + 80;
loc_8228257C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r29,432(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82268f20
	ctx.lr = 0x82282590;
	sub_82268F20(ctx, base);
	// addic. r30,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r30.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// beq 0x822825b0
	if (ctx.cr0.eq) goto loc_822825B0;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// bl 0x82281f80
	ctx.lr = 0x822825AC;
	sub_82281F80(ctx, base);
	// b 0x822825b4
	goto loc_822825B4;
loc_822825B0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_822825B4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// lwz r11,336(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8228257c
	if (!ctx.cr6.gt) goto loc_8228257C;
loc_822825D4:
	// lwz r30,136(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// b 0x822825fc
	goto loc_822825FC;
loc_822825DC:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8229faf8
	ctx.lr = 0x822825F4;
	sub_8229FAF8(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
loc_822825FC:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822825dc
	if (!ctx.cr6.eq) goto loc_822825DC;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x8229f890
	ctx.lr = 0x82282610;
	sub_8229F890(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82268f20
	ctx.lr = 0x82282628;
	sub_82268F20(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r3,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r3.u32);
	// addi r29,r30,-1
	ctx.r29.s64 = ctx.r30.s64 + -1;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r11,336(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x822826a4
	if (ctx.cr6.lt) goto loc_822826A4;
	// addi r27,r1,80
	ctx.r27.s64 = ctx.r1.s64 + 80;
loc_8228264C:
	// lwz r26,0(r27)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82282688
	if (ctx.cr6.eq) goto loc_82282688;
	// rotlwi r28,r26,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r26.u32, 0);
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_82282664:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822a4920
	ctx.lr = 0x8228266C;
	sub_822A4920(ctx, base);
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// stwx r3,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82282664
	if (!ctx.cr6.eq) goto loc_82282664;
loc_82282688:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// lwz r11,336(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8228264c
	if (!ctx.cr6.gt) goto loc_8228264C;
loc_822826A4:
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x822e992c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822826B0"))) PPC_WEAK_FUNC(sub_822826B0);
PPC_FUNC_IMPL(__imp__sub_822826B0) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,18
	ctx.r4.s64 = 18;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x82291b00
	ctx.lr = 0x822826D4;
	sub_82291B00(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,2072(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2072, ctx.r11.u8);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r11,2076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2076, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_822826F8"))) PPC_WEAK_FUNC(sub_822826F8);
PPC_FUNC_IMPL(__imp__sub_822826F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98d8
	ctx.lr = 0x82282700;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822826b0
	ctx.lr = 0x8228270C;
	sub_822826B0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r11,2073(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2073, ctx.r11.u8);
	// lwz r11,172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x822a00d0
	ctx.lr = 0x82282728;
	sub_822A00D0(ctx, base);
	// b 0x82282808
	goto loc_82282808;
loc_8228272C:
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r25,r11,32
	ctx.r25.s64 = ctx.r11.s64 + 32;
loc_82282734:
	// cntlzw r11,r26
	ctx.r11.u64 = ctx.r26.u32 == 0 ? 32 : __builtin_clz(ctx.r26.u32);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r27,r11,21
	ctx.r27.s64 = ctx.r11.s64 + 21;
	// cmpw cr6,r10,r27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x822827f4
	if (!ctx.cr6.eq) goto loc_822827F4;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822827f4
	if (!ctx.cr6.eq) goto loc_822827F4;
	// li r3,38
	ctx.r3.s64 = 38;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x822a1f08
	ctx.lr = 0x82282768;
	sub_822A1F08(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822a2390
	ctx.lr = 0x82282778;
	sub_822A2390(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a2390
	ctx.lr = 0x82282788;
	sub_822A2390(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
loc_8228278C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822827AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// blt cr6,0x8228278c
	if (ctx.cr6.lt) goto loc_8228278C;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a2390
	ctx.lr = 0x822827C8;
	sub_822A2390(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// bl 0x82291b00
	ctx.lr = 0x822827D8;
	sub_82291B00(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a2390
	ctx.lr = 0x822827E8;
	sub_822A2390(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,164(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// bl 0x822a4f98
	ctx.lr = 0x822827F4;
	sub_822A4F98(ctx, base);
loc_822827F4:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// blt cr6,0x82282734
	if (ctx.cr6.lt) goto loc_82282734;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822a0010
	ctx.lr = 0x82282808;
	sub_822A0010(ctx, base);
loc_82282808:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bne cr6,0x8228272c
	if (!ctx.cr6.eq) goto loc_8228272C;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822e9928
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82282824"))) PPC_WEAK_FUNC(sub_82282824);
PPC_FUNC_IMPL(__imp__sub_82282824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82282828"))) PPC_WEAK_FUNC(sub_82282828);
PPC_FUNC_IMPL(__imp__sub_82282828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98c8
	ctx.lr = 0x82282830;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r21,r11,-10544
	ctx.r21.s64 = ctx.r11.s64 + -10544;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r20,r11,32400
	ctx.r20.s64 = ctx.r11.s64 + 32400;
	// beq cr6,0x822828f4
	if (ctx.cr6.eq) goto loc_822828F4;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x822912b0
	ctx.lr = 0x82282864;
	sub_822912B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8228289c
	if (!ctx.cr0.eq) goto loc_8228289C;
	// lwz r5,56(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	// lwz r4,80(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 80);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x82291308
	ctx.lr = 0x8228287C;
	sub_82291308(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,128(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 128);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82282898;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822828b4
	goto loc_822828B4;
loc_8228289C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,128(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 128);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822828B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822828B4:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x822828d8
	if (!ctx.cr6.eq) goto loc_822828D8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r7,649
	ctx.r7.s64 = 649;
	// addi r5,r11,-32752
	ctx.r5.s64 = ctx.r11.s64 + -32752;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x821bbc58
	ctx.lr = 0x822828D8;
	sub_821BBC58(ctx, base);
loc_822828D8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a0440
	ctx.lr = 0x822828E4;
	sub_822A0440(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822a2390
	ctx.lr = 0x822828F4;
	sub_822A2390(ctx, base);
loc_822828F4:
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// li r24,1
	ctx.r24.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x82282bac
	if (ctx.cr6.lt) goto loc_82282BAC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r26,r27,84
	ctx.r26.s64 = ctx.r27.s64 + 84;
	// addi r25,r11,32360
	ctx.r25.s64 = ctx.r11.s64 + 32360;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r22,r11,-31456
	ctx.r22.s64 = ctx.r11.s64 + -31456;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r23,r11,-32768
	ctx.r23.s64 = ctx.r11.s64 + -32768;
loc_82282920:
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r9,26
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 26, ctx.xer);
	// beq cr6,0x82282934
	if (ctx.cr6.eq) goto loc_82282934;
	// cmpwi cr6,r9,27
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 27, ctx.xer);
	// bne cr6,0x8228294c
	if (!ctx.cr6.eq) goto loc_8228294C;
loc_82282934:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,484(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 484, ctx.r10.u32);
	// stw r10,-24(r26)
	PPC_STORE_U32(ctx.r26.u32 + -24, ctx.r10.u32);
	// stw r9,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r9.u32);
loc_8228294C:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x822912b0
	ctx.lr = 0x8228295C;
	sub_822912B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82282994
	if (!ctx.cr0.eq) goto loc_82282994;
	// lwz r5,-24(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + -24);
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x82291308
	ctx.lr = 0x82282974;
	sub_82291308(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,-16(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + -16);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82282990;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822829ac
	goto loc_822829AC;
loc_82282994:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,-16(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + -16);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822829AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822829AC:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x822a0490
	ctx.lr = 0x822829BC;
	sub_822A0490(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822a2390
	ctx.lr = 0x822829CC;
	sub_822A2390(ctx, base);
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// bne cr6,0x82282a50
	if (!ctx.cr6.eq) goto loc_82282A50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822826b0
	ctx.lr = 0x822829E0;
	sub_822826B0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,62
	ctx.r3.s64 = 62;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x822a1f08
	ctx.lr = 0x822829F0;
	sub_822A1F08(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r11,2073(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2073, ctx.r11.u8);
	// bl 0x822a2390
	ctx.lr = 0x82282A08;
	sub_822A2390(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a2390
	ctx.lr = 0x82282A18;
	sub_822A2390(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r11.u32);
	// bl 0x82282828
	ctx.lr = 0x82282A2C;
	sub_82282828(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// bl 0x822a4f98
	ctx.lr = 0x82282A38;
	sub_822A4F98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a1fb0
	ctx.lr = 0x82282A40;
	sub_822A1FB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82282b10
	if (!ctx.cr0.eq) goto loc_82282B10;
	// li r7,704
	ctx.r7.s64 = 704;
	// b 0x82282afc
	goto loc_82282AFC;
loc_82282A50:
	// cmpwi cr6,r11,27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27, ctx.xer);
	// bne cr6,0x82282b10
	if (!ctx.cr6.eq) goto loc_82282B10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822826b0
	ctx.lr = 0x82282A60;
	sub_822826B0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x822a1f08
	ctx.lr = 0x82282A70;
	sub_822A1F08(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822a2390
	ctx.lr = 0x82282A80;
	sub_822A2390(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a2390
	ctx.lr = 0x82282A90;
	sub_822A2390(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82282AB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82282AD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82282828
	ctx.lr = 0x82282ADC;
	sub_82282828(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// bl 0x822a4f98
	ctx.lr = 0x82282AE8;
	sub_822A4F98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a1fb0
	ctx.lr = 0x82282AF0;
	sub_822A1FB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82282b10
	if (!ctx.cr0.eq) goto loc_82282B10;
	// li r7,718
	ctx.r7.s64 = 718;
loc_82282AFC:
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82282B10;
	sub_821BBC58(ctx, base);
loc_82282B10:
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// mulli r11,r11,52
	ctx.r11.s64 = ctx.r11.s64 * 52;
	// lwzx r11,r11,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r22.u32);
	// rlwinm. r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82282b98
	if (!ctx.cr0.eq) goto loc_82282B98;
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82282b98
	if (ctx.cr0.eq) goto loc_82282B98;
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x82282b98
	if (ctx.cr6.eq) goto loc_82282B98;
	// lbz r11,128(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 128);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82282b4c
	if (ctx.cr6.eq) goto loc_82282B4C;
	// lbz r11,48(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 48);
loc_82282B4C:
	// stb r11,48(r26)
	PPC_STORE_U8(ctx.r26.u32 + 48, ctx.r11.u8);
	// lbz r11,129(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 129);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82282b64
	if (ctx.cr6.eq) goto loc_82282B64;
	// lbz r11,49(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 49);
loc_82282B64:
	// stb r11,49(r26)
	PPC_STORE_U8(ctx.r26.u32 + 49, ctx.r11.u8);
	// lbz r11,130(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 130);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// li r11,2
	ctx.r11.s64 = 2;
	// beq cr6,0x82282b7c
	if (ctx.cr6.eq) goto loc_82282B7C;
	// lbz r11,50(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 50);
loc_82282B7C:
	// stb r11,50(r26)
	PPC_STORE_U8(ctx.r26.u32 + 50, ctx.r11.u8);
	// lbz r11,131(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 131);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// li r11,3
	ctx.r11.s64 = 3;
	// beq cr6,0x82282b94
	if (ctx.cr6.eq) goto loc_82282B94;
	// lbz r11,51(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 51);
loc_82282B94:
	// stb r11,51(r26)
	PPC_STORE_U8(ctx.r26.u32 + 51, ctx.r11.u8);
loc_82282B98:
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82282920
	if (!ctx.cr6.gt) goto loc_82282920;
loc_82282BAC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822e9918
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82282BB4"))) PPC_WEAK_FUNC(sub_82282BB4);
PPC_FUNC_IMPL(__imp__sub_82282BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82282BB8"))) PPC_WEAK_FUNC(sub_82282BB8);
PPC_FUNC_IMPL(__imp__sub_82282BB8) {
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
	// lwz r31,136(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// b 0x82282be4
	goto loc_82282BE4;
loc_82282BD0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a5130
	ctx.lr = 0x82282BD8;
	sub_822A5130(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82282c08
	if (ctx.cr0.eq) goto loc_82282C08;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82282BE4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82282bd0
	if (!ctx.cr6.eq) goto loc_82282BD0;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82282BF4:
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
loc_82282C08:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82282bf4
	goto loc_82282BF4;
}

__attribute__((alias("__imp__sub_82282C10"))) PPC_WEAK_FUNC(sub_82282C10);
PPC_FUNC_IMPL(__imp__sub_82282C10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x82282C18;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r11,r30,31
	ctx.r11.s64 = ctx.r30.s64 + 31;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r31,r11,27,5,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 3;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82268f20
	ctx.lr = 0x82282C3C;
	sub_82268F20(ctx, base);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// beq cr6,0x82282c78
	if (ctx.cr6.eq) goto loc_82282C78;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
loc_82282C5C:
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82282c5c
	if (ctx.cr6.lt) goto loc_82282C5C;
loc_82282C78:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82282C84"))) PPC_WEAK_FUNC(sub_82282C84);
PPC_FUNC_IMPL(__imp__sub_82282C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82282C88"))) PPC_WEAK_FUNC(sub_82282C88);
PPC_FUNC_IMPL(__imp__sub_82282C88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x82282C90;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,23
	ctx.r4.s64 = 23;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x82291b00
	ctx.lr = 0x82282CA8;
	sub_82291B00(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r30,428(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 428);
	// lwz r27,28(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r28,32(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x82268f20
	ctx.lr = 0x82282CCC;
	sub_82268F20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// beq 0x82282cec
	if (ctx.cr0.eq) goto loc_82282CEC;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x822a3860
	ctx.lr = 0x82282CE4;
	sub_822A3860(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82282cf0
	goto loc_82282CF0;
loc_82282CEC:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82282CF0:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a2390
	ctx.lr = 0x82282D00;
	sub_822A2390(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a2390
	ctx.lr = 0x82282D10;
	sub_822A2390(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a2390
	ctx.lr = 0x82282D20;
	sub_822A2390(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
loc_82282D24:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82282D44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// blt cr6,0x82282d24
	if (ctx.cr6.lt) goto loc_82282D24;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a07f8
	ctx.lr = 0x82282D60;
	sub_822A07F8(ctx, base);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x822a28e0
	ctx.lr = 0x82282D68;
	sub_822A28E0(ctx, base);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82282D7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// bl 0x822a4f98
	ctx.lr = 0x82282D88;
	sub_822A4F98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a1fb0
	ctx.lr = 0x82282D90;
	sub_822A1FB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82282dbc
	if (!ctx.cr0.eq) goto loc_82282DBC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,1198
	ctx.r7.s64 = 1198;
	// addi r6,r11,32400
	ctx.r6.s64 = ctx.r11.s64 + 32400;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-32744
	ctx.r5.s64 = ctx.r11.s64 + -32744;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x82282DBC;
	sub_821BBC58(ctx, base);
loc_82282DBC:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8229faf8
	ctx.lr = 0x82282DCC;
	sub_8229FAF8(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82282DD8"))) PPC_WEAK_FUNC(sub_82282DD8);
PPC_FUNC_IMPL(__imp__sub_82282DD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x82282DE0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r6,r11,-26120
	ctx.r6.s64 = ctx.r11.s64 + -26120;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8227f660
	ctx.lr = 0x82282E04;
	sub_8227F660(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r6,r11,-26120
	ctx.r6.s64 = ctx.r11.s64 + -26120;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8227f700
	ctx.lr = 0x82282E20;
	sub_8227F700(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r6,r11,-26120
	ctx.r6.s64 = ctx.r11.s64 + -26120;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8227f7a0
	ctx.lr = 0x82282E3C;
	sub_8227F7A0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r6,r11,-26120
	ctx.r6.s64 = ctx.r11.s64 + -26120;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8227f840
	ctx.lr = 0x82282E58;
	sub_8227F840(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// li r3,18
	ctx.r3.s64 = 18;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r29,32(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x822a4378
	ctx.lr = 0x82282E6C;
	sub_822A4378(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822a2390
	ctx.lr = 0x82282E7C;
	sub_822A2390(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a2390
	ctx.lr = 0x82282E8C;
	sub_822A2390(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f4,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f3,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822a2f98
	ctx.lr = 0x82282EAC;
	sub_822A2F98(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82282ECC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stb r11,154(r30)
	PPC_STORE_U8(ctx.r30.u32 + 154, ctx.r11.u8);
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r3,948(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 948);
	// bl 0x822a5088
	ctx.lr = 0x82282EE4;
	sub_822A5088(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// li r4,23
	ctx.r4.s64 = 23;
	// bl 0x82291b00
	ctx.lr = 0x82282EF4;
	sub_82291B00(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x822a43e8
	ctx.lr = 0x82282F04;
	sub_822A43E8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822a2390
	ctx.lr = 0x82282F14;
	sub_822A2390(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a2390
	ctx.lr = 0x82282F24;
	sub_822A2390(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
loc_82282F28:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82282F48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// blt cr6,0x82282f28
	if (ctx.cr6.lt) goto loc_82282F28;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a2390
	ctx.lr = 0x82282F64;
	sub_822A2390(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f4,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f3,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822a2f98
	ctx.lr = 0x82282F84;
	sub_822A2F98(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82282FA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,948(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 948);
	// bl 0x822a5088
	ctx.lr = 0x82282FB4;
	sub_822A5088(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82282FBC"))) PPC_WEAK_FUNC(sub_82282FBC);
PPC_FUNC_IMPL(__imp__sub_82282FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82282FC0"))) PPC_WEAK_FUNC(sub_82282FC0);
PPC_FUNC_IMPL(__imp__sub_82282FC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98d0
	ctx.lr = 0x82282FC8;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r29,r11,-26120
	ctx.r29.s64 = ctx.r11.s64 + -26120;
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,464(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 464);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82282FF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x8227ca28
	ctx.lr = 0x82283008;
	sub_8227CA28(ctx, base);
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r29,r11,-26120
	ctx.r29.s64 = ctx.r11.s64 + -26120;
	// lwz r3,464(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 464);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228302C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x8227cb40
	ctx.lr = 0x82283044;
	sub_8227CB40(ctx, base);
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r28,r11,-26120
	ctx.r28.s64 = ctx.r11.s64 + -26120;
	// lwz r3,464(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 464);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82283068;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x8227cc50
	ctx.lr = 0x82283080;
	sub_8227CC50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,484(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// stw r5,484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 484, ctx.r5.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x82291b00
	ctx.lr = 0x822830A0;
	sub_82291B00(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// bl 0x822a5528
	ctx.lr = 0x822830AC;
	sub_822A5528(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// addi r23,r11,-10544
	ctx.r23.s64 = ctx.r11.s64 + -10544;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r22,r11,32400
	ctx.r22.s64 = ctx.r11.s64 + 32400;
	// beq cr6,0x822830e0
	if (ctx.cr6.eq) goto loc_822830E0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r7,1338
	ctx.r7.s64 = 1338;
	// addi r5,r11,-32676
	ctx.r5.s64 = ctx.r11.s64 + -32676;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x822830E0;
	sub_821BBC58(ctx, base);
loc_822830E0:
	// lwz r9,168(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// lwz r9,60(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
loc_82283100:
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x82283110
	if (!ctx.cr6.gt) goto loc_82283110;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// b 0x8228311c
	goto loc_8228311C;
loc_82283110:
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_8228311C:
	// clrlwi. r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82283134
	if (ctx.cr0.eq) goto loc_82283134;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x82283100
	goto loc_82283100;
loc_82283134:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// lwz r27,32(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bne cr6,0x8228337c
	if (!ctx.cr6.eq) goto loc_8228337C;
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r29,r11,-26120
	ctx.r29.s64 = ctx.r11.s64 + -26120;
	// lwz r3,464(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 464);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82283164;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x8227cd68
	ctx.lr = 0x8228317C;
	sub_8227CD68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822832fc
	if (!ctx.cr0.eq) goto loc_822832FC;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r6,r11,-26120
	ctx.r6.s64 = ctx.r11.s64 + -26120;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8227fb18
	ctx.lr = 0x822831A0;
	sub_8227FB18(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r6,r11,-26120
	ctx.r6.s64 = ctx.r11.s64 + -26120;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8227fc20
	ctx.lr = 0x822831BC;
	sub_8227FC20(ctx, base);
	// li r3,18
	ctx.r3.s64 = 18;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x822a4378
	ctx.lr = 0x822831C8;
	sub_822A4378(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822a2390
	ctx.lr = 0x822831D8;
	sub_822A2390(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r29,r11,32364
	ctx.r29.s64 = ctx.r11.s64 + 32364;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,-16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -16);
	// stw r11,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r11.u32);
	// lfs f4,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x822a2f98
	ctx.lr = 0x82283208;
	sub_822A2F98(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,153(r30)
	PPC_STORE_U8(ctx.r30.u32 + 153, ctx.r11.u8);
	// bl 0x822a2390
	ctx.lr = 0x82283220;
	sub_822A2390(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r11.u32);
	// bl 0x82282828
	ctx.lr = 0x82283234;
	sub_82282828(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a4f98
	ctx.lr = 0x82283240;
	sub_822A4F98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a1fb0
	ctx.lr = 0x82283248;
	sub_822A1FB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8228326c
	if (!ctx.cr0.eq) goto loc_8228326C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r7,1372
	ctx.r7.s64 = 1372;
	// addi r5,r11,-32692
	ctx.r5.s64 = ctx.r11.s64 + -32692;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x8228326C;
	sub_821BBC58(ctx, base);
loc_8228326C:
	// li r3,19
	ctx.r3.s64 = 19;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x822a4378
	ctx.lr = 0x82283278;
	sub_822A4378(ctx, base);
	// lwz r11,-16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r10,23
	ctx.r10.s64 = 23;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r25,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r25.u32);
	// stw r10,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r10.u32);
	// stw r11,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r11.u32);
	// bl 0x822a2390
	ctx.lr = 0x8228329C;
	sub_822A2390(ctx, base);
	// lwz r11,-4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r11.u32);
	// lfs f4,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x822a2f98
	ctx.lr = 0x822832C4;
	sub_822A2F98(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82282828
	ctx.lr = 0x822832D0;
	sub_82282828(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a4f98
	ctx.lr = 0x822832DC;
	sub_822A4F98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a1fb0
	ctx.lr = 0x822832E4;
	sub_822A1FB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82283564
	if (!ctx.cr0.eq) goto loc_82283564;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r7,1383
	ctx.r7.s64 = 1383;
	// addi r5,r11,-32708
	ctx.r5.s64 = ctx.r11.s64 + -32708;
	// b 0x82283554
	goto loc_82283554;
loc_822832FC:
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x822a1f08
	ctx.lr = 0x82283308;
	sub_822A1F08(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r11,32364
	ctx.r29.s64 = ctx.r11.s64 + 32364;
	// li r10,23
	ctx.r10.s64 = 23;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r25,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r25.u32);
	// lwz r11,-16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -16);
	// stw r10,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r10.u32);
	// stw r11,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r11.u32);
	// bl 0x822a2390
	ctx.lr = 0x82283334;
	sub_822A2390(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r11.u32);
	// bl 0x82282828
	ctx.lr = 0x82283348;
	sub_82282828(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a1fb0
	ctx.lr = 0x82283350;
	sub_822A1FB0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a4f98
	ctx.lr = 0x8228335C;
	sub_822A4F98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a1fb0
	ctx.lr = 0x82283364;
	sub_822A1FB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82283564
	if (!ctx.cr0.eq) goto loc_82283564;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r7,1394
	ctx.r7.s64 = 1394;
	// addi r5,r11,-32768
	ctx.r5.s64 = ctx.r11.s64 + -32768;
	// b 0x82283554
	goto loc_82283554;
loc_8228337C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82283540
	if (ctx.cr6.eq) goto loc_82283540;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r6,r11,-26120
	ctx.r6.s64 = ctx.r11.s64 + -26120;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8227fe20
	ctx.lr = 0x822833A0;
	sub_8227FE20(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r6,r11,-26120
	ctx.r6.s64 = ctx.r11.s64 + -26120;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8227fd80
	ctx.lr = 0x822833BC;
	sub_8227FD80(ctx, base);
	// li r3,64
	ctx.r3.s64 = 64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x822a3cd8
	ctx.lr = 0x822833C8;
	sub_822A3CD8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,23
	ctx.r29.s64 = 23;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r25,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r25.u32);
	// stw r29,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r29.u32);
	// bl 0x822a2390
	ctx.lr = 0x822833E4;
	sub_822A2390(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r26,r11,32364
	ctx.r26.s64 = ctx.r11.s64 + 32364;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r11,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r11.u32);
	// bl 0x82282828
	ctx.lr = 0x82283400;
	sub_82282828(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a4f98
	ctx.lr = 0x8228340C;
	sub_822A4F98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a1fb0
	ctx.lr = 0x82283414;
	sub_822A1FB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r24,r11,-32708
	ctx.r24.s64 = ctx.r11.s64 + -32708;
	// bne 0x8228343c
	if (!ctx.cr0.eq) goto loc_8228343C;
	// li r7,1412
	ctx.r7.s64 = 1412;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x8228343C;
	sub_821BBC58(ctx, base);
loc_8228343C:
	// li r3,19
	ctx.r3.s64 = 19;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x822a4378
	ctx.lr = 0x82283448;
	sub_822A4378(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r25,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r25.u32);
	// stw r29,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r29.u32);
	// stw r25,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r25.u32);
	// stw r29,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r29.u32);
	// lfs f4,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x822a2f98
	ctx.lr = 0x82283478;
	sub_822A2F98(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82282828
	ctx.lr = 0x82283484;
	sub_82282828(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a4f98
	ctx.lr = 0x82283490;
	sub_822A4F98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a1fb0
	ctx.lr = 0x82283498;
	sub_822A1FB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822834b8
	if (!ctx.cr0.eq) goto loc_822834B8;
	// li r7,1420
	ctx.r7.s64 = 1420;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x822834B8;
	sub_821BBC58(ctx, base);
loc_822834B8:
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x822a43e8
	ctx.lr = 0x822834C4;
	sub_822A43E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r25,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r25.u32);
	// stw r29,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r29.u32);
	// stw r25,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r25.u32);
	// stw r29,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r29.u32);
	// bl 0x822a2390
	ctx.lr = 0x822834E4;
	sub_822A2390(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r11.u32);
	// lfs f4,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x822a2f98
	ctx.lr = 0x8228350C;
	sub_822A2F98(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82282828
	ctx.lr = 0x82283518;
	sub_82282828(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a4f98
	ctx.lr = 0x82283524;
	sub_822A4F98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a1fb0
	ctx.lr = 0x8228352C;
	sub_822A1FB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82283564
	if (!ctx.cr0.eq) goto loc_82283564;
	// li r7,1430
	ctx.r7.s64 = 1430;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// b 0x82283554
	goto loc_82283554;
loc_82283540:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x82283564
	if (!ctx.cr6.eq) goto loc_82283564;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r7,1432
	ctx.r7.s64 = 1432;
	// addi r5,r11,-32724
	ctx.r5.s64 = ctx.r11.s64 + -32724;
loc_82283554:
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82283564;
	sub_821BBC58(ctx, base);
loc_82283564:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822e9920
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8228356C"))) PPC_WEAK_FUNC(sub_8228356C);
PPC_FUNC_IMPL(__imp__sub_8228356C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82283570"))) PPC_WEAK_FUNC(sub_82283570);
PPC_FUNC_IMPL(__imp__sub_82283570) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x822a1f08
	ctx.lr = 0x82283594;
	sub_822A1F08(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,23
	ctx.r9.s64 = 23;
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f4,9580(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9580);
	ctx.f4.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// lfs f3,9472(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9472);
	ctx.f3.f64 = double(temp.f32);
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// bl 0x822a2f98
	ctx.lr = 0x822835CC;
	sub_822A2F98(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82282828
	ctx.lr = 0x822835D8;
	sub_82282828(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// bl 0x822a4f98
	ctx.lr = 0x822835E4;
	sub_822A4F98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a1fb0
	ctx.lr = 0x822835EC;
	sub_822A1FB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82283618
	if (!ctx.cr0.eq) goto loc_82283618;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,1445
	ctx.r7.s64 = 1445;
	// addi r6,r11,32400
	ctx.r6.s64 = ctx.r11.s64 + 32400;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-32768
	ctx.r5.s64 = ctx.r11.s64 + -32768;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x82283618;
	sub_821BBC58(ctx, base);
loc_82283618:
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

__attribute__((alias("__imp__sub_82283630"))) PPC_WEAK_FUNC(sub_82283630);
PPC_FUNC_IMPL(__imp__sub_82283630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98c4
	ctx.lr = 0x82283638;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r19,136(r24)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r24.u32 + 136);
	// lwz r11,8(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8228380c
	if (ctx.cr6.eq) goto loc_8228380C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r22,r11,-10544
	ctx.r22.s64 = ctx.r11.s64 + -10544;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r21,r11,-32640
	ctx.r21.s64 = ctx.r11.s64 + -32640;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r20,r11,32400
	ctx.r20.s64 = ctx.r11.s64 + 32400;
loc_82283668:
	// lwz r30,28(r19)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28);
	// b 0x822837f0
	goto loc_822837F0;
loc_82283670:
	// lwz r11,228(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822837ec
	if (ctx.cr0.eq) goto loc_822837EC;
	// lwz r23,20(r30)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi r23,0
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble 0x822837ec
	if (!ctx.cr0.gt) goto loc_822837EC;
	// addi r10,r30,84
	ctx.r10.s64 = ctx.r30.s64 + 84;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
loc_82283698:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822836c4
	if (ctx.cr6.eq) goto loc_822836C4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822836c4
	if (ctx.cr6.eq) goto loc_822836C4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x822836c4
	if (ctx.cr6.eq) goto loc_822836C4;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x822836c8
	if (!ctx.cr6.eq) goto loc_822836C8;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// b 0x822836c8
	goto loc_822836C8;
loc_822836C4:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_822836C8:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82283698
	if (!ctx.cr0.eq) goto loc_82283698;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x822837ec
	if (ctx.cr6.eq) goto loc_822837EC;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822837ec
	if (ctx.cr6.eq) goto loc_822837EC;
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// li r25,0
	ctx.r25.s64 = 0;
	// bgt cr6,0x822836f4
	if (ctx.cr6.gt) goto loc_822836F4;
	// li r25,1
	ctx.r25.s64 = 1;
loc_822836F4:
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x8228371c
	if (ctx.cr6.eq) goto loc_8228371C;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// beq cr6,0x8228371c
	if (ctx.cr6.eq) goto loc_8228371C;
	// li r7,1915
	ctx.r7.s64 = 1915;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x8228371C;
	sub_821BBC58(ctx, base);
loc_8228371C:
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r27,r30,32
	ctx.r27.s64 = ctx.r30.s64 + 32;
loc_82283724:
	// lwz r11,52(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82283740
	if (ctx.cr6.eq) goto loc_82283740;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82283740
	if (ctx.cr6.eq) goto loc_82283740;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82283748
	if (!ctx.cr6.eq) goto loc_82283748;
loc_82283740:
	// clrlwi. r10,r25,24
	ctx.r10.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82283758
	if (!ctx.cr0.eq) goto loc_82283758;
loc_82283748:
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x822837dc
	if (!ctx.cr6.eq) goto loc_822837DC;
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822837dc
	if (!ctx.cr0.eq) goto loc_822837DC;
loc_82283758:
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// bl 0x822a1f08
	ctx.lr = 0x82283764;
	sub_822A1F08(ctx, base);
	// lwz r11,12(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// lwz r29,0(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,484(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// stw r5,484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 484, ctx.r5.u32);
	// lwz r3,172(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 172);
	// bl 0x82291b00
	ctx.lr = 0x82283788;
	sub_82291B00(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x822a2390
	ctx.lr = 0x8228379C;
	sub_822A2390(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a2390
	ctx.lr = 0x822837AC;
	sub_822A2390(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a07f8
	ctx.lr = 0x822837BC;
	sub_822A07F8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r26,1
	ctx.r4.s64 = ctx.r26.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a2390
	ctx.lr = 0x822837CC;
	sub_822A2390(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,948(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 948);
	// bl 0x822a5088
	ctx.lr = 0x822837DC;
	sub_822A5088(ctx, base);
loc_822837DC:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpw cr6,r26,r23
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x82283724
	if (ctx.cr6.lt) goto loc_82283724;
loc_822837EC:
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
loc_822837F0:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82283670
	if (!ctx.cr6.eq) goto loc_82283670;
	// lwz r19,8(r19)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	// lwz r11,8(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82283668
	if (!ctx.cr6.eq) goto loc_82283668;
loc_8228380C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822e9914
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82283814"))) PPC_WEAK_FUNC(sub_82283814);
PPC_FUNC_IMPL(__imp__sub_82283814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82283818"))) PPC_WEAK_FUNC(sub_82283818);
PPC_FUNC_IMPL(__imp__sub_82283818) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98cc
	ctx.lr = 0x82283820;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r30,184
	ctx.r3.s64 = ctx.r30.s64 + 184;
	// bl 0x8229e2b0
	ctx.lr = 0x8228383C;
	sub_8229E2B0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82283cdc
	if (ctx.cr0.eq) goto loc_82283CDC;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82291b00
	ctx.lr = 0x82283854;
	sub_82291B00(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82283868;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r23,r11,-10544
	ctx.r23.s64 = ctx.r11.s64 + -10544;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r22,r11,32400
	ctx.r22.s64 = ctx.r11.s64 + 32400;
	// bne 0x8228389c
	if (!ctx.cr0.eq) goto loc_8228389C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r7,1977
	ctx.r7.s64 = 1977;
	// addi r5,r11,-32544
	ctx.r5.s64 = ctx.r11.s64 + -32544;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x8228389C;
	sub_821BBC58(ctx, base);
loc_8228389C:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r29,428(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82268f20
	ctx.lr = 0x822838B0;
	sub_82268F20(ctx, base);
	// addic. r31,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r31.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// beq 0x822838d4
	if (ctx.cr0.eq) goto loc_822838D4;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,428(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// bl 0x82281f80
	ctx.lr = 0x822838CC;
	sub_82281F80(ctx, base);
	// mr r21,r31
	ctx.r21.u64 = ctx.r31.u64;
	// b 0x822838d8
	goto loc_822838D8;
loc_822838D4:
	// li r21,0
	ctx.r21.s64 = 0;
loc_822838D8:
	// li r24,1
	ctx.r24.s64 = 1;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
loc_822838E8:
	// lwz r11,36(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r25,r10
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82283900
	if (!ctx.cr6.gt) goto loc_82283900;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8228390c
	goto loc_8228390C;
loc_82283900:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// lwzx r31,r10,r26
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
loc_8228390C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82283970
	if (ctx.cr0.eq) goto loc_82283970;
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82283964
	if (ctx.cr0.eq) goto loc_82283964;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82283964
	if (!ctx.cr6.gt) goto loc_82283964;
	// addi r28,r31,84
	ctx.r28.s64 = ctx.r31.s64 + 84;
loc_82283934:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bne cr6,0x82283950
	if (!ctx.cr6.eq) goto loc_82283950;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r4,4(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// bl 0x8229faf8
	ctx.lr = 0x8228394C;
	sub_8229FAF8(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
loc_82283950:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82283934
	if (ctx.cr6.lt) goto loc_82283934;
loc_82283964:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x822838e8
	goto loc_822838E8;
loc_82283970:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r24,2073(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2073, ctx.r24.u8);
	// lwz r10,484(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// stw r5,484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 484, ctx.r5.u32);
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// bl 0x82291b00
	ctx.lr = 0x82283990;
	sub_82291B00(ctx, base);
	// lwz r11,52(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r10,48(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822839c0
	if (ctx.cr6.eq) goto loc_822839C0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r7,1996
	ctx.r7.s64 = 1996;
	// addi r5,r11,-32584
	ctx.r5.s64 = ctx.r11.s64 + -32584;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x822839C0;
	sub_821BBC58(ctx, base);
loc_822839C0:
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x822a1f08
	ctx.lr = 0x822839CC;
	sub_822A1F08(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822a2390
	ctx.lr = 0x822839DC;
	sub_822A2390(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a2390
	ctx.lr = 0x822839EC;
	sub_822A2390(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82283A0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82283A2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82282828
	ctx.lr = 0x82283A38;
	sub_82282828(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,164(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// bl 0x822a4f98
	ctx.lr = 0x82283A44;
	sub_822A4F98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a1fb0
	ctx.lr = 0x82283A4C;
	sub_822A1FB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82283a70
	if (!ctx.cr0.eq) goto loc_82283A70;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r7,2008
	ctx.r7.s64 = 2008;
	// addi r5,r11,-32768
	ctx.r5.s64 = ctx.r11.s64 + -32768;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82283A70;
	sub_821BBC58(ctx, base);
loc_82283A70:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822826b0
	ctx.lr = 0x82283A78;
	sub_822826B0(ctx, base);
	// lwz r11,48(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82283bd4
	if (ctx.cr6.eq) goto loc_82283BD4;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x822a1f08
	ctx.lr = 0x82283A94;
	sub_822A1F08(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822a2390
	ctx.lr = 0x82283AA4;
	sub_822A2390(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82283AC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82283AE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a2390
	ctx.lr = 0x82283AF4;
	sub_822A2390(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r24,159(r31)
	PPC_STORE_U8(ctx.r31.u32 + 159, ctx.r24.u8);
	// addi r6,r11,-26120
	ctx.r6.s64 = ctx.r11.s64 + -26120;
	// lwz r7,12(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x8227f540
	ctx.lr = 0x82283B14;
	sub_8227F540(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r7,12(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r11,-26120
	ctx.r6.s64 = ctx.r11.s64 + -26120;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8227f558
	ctx.lr = 0x82283B30;
	sub_8227F558(ctx, base);
	// lfs f4,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f3.f64 = double(temp.f32);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// bl 0x822a2f98
	ctx.lr = 0x82283B50;
	sub_822A2F98(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r24,154(r31)
	PPC_STORE_U8(ctx.r31.u32 + 154, ctx.r24.u8);
	// lwz r3,164(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// bl 0x822a4f98
	ctx.lr = 0x82283B60;
	sub_822A4F98(ctx, base);
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x822a1f08
	ctx.lr = 0x82283B6C;
	sub_822A1F08(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822a2390
	ctx.lr = 0x82283B7C;
	sub_822A2390(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82283B9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82283BBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a2390
	ctx.lr = 0x82283BCC;
	sub_822A2390(ctx, base);
	// stb r24,153(r31)
	PPC_STORE_U8(ctx.r31.u32 + 153, ctx.r24.u8);
	// b 0x82283c40
	goto loc_82283C40;
loc_82283BD4:
	// li r3,49
	ctx.r3.s64 = 49;
	// bl 0x822a1f08
	ctx.lr = 0x82283BDC;
	sub_822A1F08(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822a2390
	ctx.lr = 0x82283BEC;
	sub_822A2390(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82283C0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82283C2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r24,159(r31)
	PPC_STORE_U8(ctx.r31.u32 + 159, ctx.r24.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a2390
	ctx.lr = 0x82283C40;
	sub_822A2390(ctx, base);
loc_82283C40:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,164(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// bl 0x822a4f98
	ctx.lr = 0x82283C4C;
	sub_822A4F98(ctx, base);
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82283cdc
	if (ctx.cr0.eq) goto loc_82283CDC;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82283c74
	if (!ctx.cr6.lt) goto loc_82283C74;
loc_82283C68:
	// lwz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// b 0x82283c80
	goto loc_82283C80;
loc_82283C74:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8229faf8
	ctx.lr = 0x82283C80;
	sub_8229FAF8(ctx, base);
loc_82283C80:
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x82283cc8
	if (ctx.cr6.lt) goto loc_82283CC8;
	// addi r29,r31,84
	ctx.r29.s64 = ctx.r31.s64 + 84;
loc_82283C98:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bne cr6,0x82283cb4
	if (!ctx.cr6.eq) goto loc_82283CB4;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a2390
	ctx.lr = 0x82283CB4;
	sub_822A2390(ctx, base);
loc_82283CB4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82283c98
	if (!ctx.cr6.gt) goto loc_82283C98;
loc_82283CC8:
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82283c68
	if (ctx.cr6.lt) goto loc_82283C68;
loc_82283CDC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822e991c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82283CE4"))) PPC_WEAK_FUNC(sub_82283CE4);
PPC_FUNC_IMPL(__imp__sub_82283CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82283CE8"))) PPC_WEAK_FUNC(sub_82283CE8);
PPC_FUNC_IMPL(__imp__sub_82283CE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98d0
	ctx.lr = 0x82283CF0;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// bl 0x8229e2b0
	ctx.lr = 0x82283D0C;
	sub_8229E2B0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82283ff4
	if (ctx.cr0.eq) goto loc_82283FF4;
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// bl 0x822a5528
	ctx.lr = 0x82283D1C;
	sub_822A5528(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// addi r23,r11,-10544
	ctx.r23.s64 = ctx.r11.s64 + -10544;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r22,r11,32400
	ctx.r22.s64 = ctx.r11.s64 + 32400;
	// beq cr6,0x82283d50
	if (ctx.cr6.eq) goto loc_82283D50;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r7,2104
	ctx.r7.s64 = 2104;
	// addi r5,r11,-32676
	ctx.r5.s64 = ctx.r11.s64 + -32676;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82283D50;
	sub_821BBC58(ctx, base);
loc_82283D50:
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r25,88(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82283D70:
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x82283d80
	if (!ctx.cr6.gt) goto loc_82283D80;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// b 0x82283d8c
	goto loc_82283D8C;
loc_82283D80:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
loc_82283D8C:
	// clrlwi. r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82283da4
	if (ctx.cr0.eq) goto loc_82283DA4;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// b 0x82283d70
	goto loc_82283D70;
loc_82283DA4:
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r6,r11,-26120
	ctx.r6.s64 = ctx.r11.s64 + -26120;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r27,32(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// bl 0x8227fe20
	ctx.lr = 0x82283DC8;
	sub_8227FE20(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r6,r11,-26120
	ctx.r6.s64 = ctx.r11.s64 + -26120;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8227fd80
	ctx.lr = 0x82283DE4;
	sub_8227FD80(ctx, base);
	// li r3,64
	ctx.r3.s64 = 64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x822a3cd8
	ctx.lr = 0x82283DF0;
	sub_822A3CD8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,32
	ctx.r28.s64 = 32;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r26,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r26.u32);
	// stw r28,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r28.u32);
	// bl 0x822a2390
	ctx.lr = 0x82283E0C;
	sub_822A2390(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r29,r11,32352
	ctx.r29.s64 = ctx.r11.s64 + 32352;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r11,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r11.u32);
	// bl 0x82282828
	ctx.lr = 0x82283E28;
	sub_82282828(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822a4f98
	ctx.lr = 0x82283E34;
	sub_822A4F98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a1fb0
	ctx.lr = 0x82283E3C;
	sub_822A1FB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r24,r11,-32708
	ctx.r24.s64 = ctx.r11.s64 + -32708;
	// bne 0x82283e64
	if (!ctx.cr0.eq) goto loc_82283E64;
	// li r7,2130
	ctx.r7.s64 = 2130;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82283E64;
	sub_821BBC58(ctx, base);
loc_82283E64:
	// li r3,19
	ctx.r3.s64 = 19;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x822a4378
	ctx.lr = 0x82283E70;
	sub_822A4378(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r26,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r26.u32);
	// stw r28,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r28.u32);
	// stw r26,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r26.u32);
	// stw r28,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r28.u32);
	// lfs f4,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x822a2f98
	ctx.lr = 0x82283EA0;
	sub_822A2F98(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82282828
	ctx.lr = 0x82283EAC;
	sub_82282828(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822a4f98
	ctx.lr = 0x82283EB8;
	sub_822A4F98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a1fb0
	ctx.lr = 0x82283EC0;
	sub_822A1FB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82283ee0
	if (!ctx.cr0.eq) goto loc_82283EE0;
	// li r7,2139
	ctx.r7.s64 = 2139;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82283EE0;
	sub_821BBC58(ctx, base);
loc_82283EE0:
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x822a43e8
	ctx.lr = 0x82283EEC;
	sub_822A43E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r26,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r26.u32);
	// stw r11,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r11.u32);
	// stw r28,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r28.u32);
	// stw r26,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r26.u32);
	// stw r28,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r28.u32);
	// bl 0x822a2390
	ctx.lr = 0x82283F14;
	sub_822A2390(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r11.u32);
	// lfs f4,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x822a2f98
	ctx.lr = 0x82283F3C;
	sub_822A2F98(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82282828
	ctx.lr = 0x82283F48;
	sub_82282828(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822a4f98
	ctx.lr = 0x82283F54;
	sub_822A4F98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a1fb0
	ctx.lr = 0x82283F5C;
	sub_822A1FB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82283f7c
	if (!ctx.cr0.eq) goto loc_82283F7C;
	// li r7,2151
	ctx.r7.s64 = 2151;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82283F7C;
	sub_821BBC58(ctx, base);
loc_82283F7C:
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x822a1f08
	ctx.lr = 0x82283F88;
	sub_822A1F08(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r26,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r26.u32);
	// stw r28,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r28.u32);
	// stw r11,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r11.u32);
	// bl 0x822a2390
	ctx.lr = 0x82283FA8;
	sub_822A2390(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r11.u32);
	// bl 0x82282828
	ctx.lr = 0x82283FBC;
	sub_82282828(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822a4f98
	ctx.lr = 0x82283FC8;
	sub_822A4F98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a1fb0
	ctx.lr = 0x82283FD0;
	sub_822A1FB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82283ff4
	if (!ctx.cr0.eq) goto loc_82283FF4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r7,2161
	ctx.r7.s64 = 2161;
	// addi r5,r11,-32768
	ctx.r5.s64 = ctx.r11.s64 + -32768;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82283FF4;
	sub_821BBC58(ctx, base);
loc_82283FF4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822e9920
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82283FFC"))) PPC_WEAK_FUNC(sub_82283FFC);
PPC_FUNC_IMPL(__imp__sub_82283FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82284000"))) PPC_WEAK_FUNC(sub_82284000);
PPC_FUNC_IMPL(__imp__sub_82284000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x82284008;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r29,r11,-26120
	ctx.r29.s64 = ctx.r11.s64 + -26120;
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r3,464(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82284030;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// bl 0x8227e4a8
	ctx.lr = 0x82284048;
	sub_8227E4A8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x822841f0
	if (!ctx.cr6.eq) goto loc_822841F0;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r5,r11,-26120
	ctx.r5.s64 = ctx.r11.s64 + -26120;
	// bl 0x8227ea70
	ctx.lr = 0x82284068;
	sub_8227EA70(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// addi r28,r11,-10544
	ctx.r28.s64 = ctx.r11.s64 + -10544;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r27,r11,32400
	ctx.r27.s64 = ctx.r11.s64 + 32400;
	// beq cr6,0x8228409c
	if (ctx.cr6.eq) goto loc_8228409C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r7,2364
	ctx.r7.s64 = 2364;
	// addi r5,r11,-32516
	ctx.r5.s64 = ctx.r11.s64 + -32516;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x8228409C;
	sub_821BBC58(ctx, base);
loc_8228409C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,164(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r6,32340(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32340);
	// oris r11,r10,5
	ctx.r11.u64 = ctx.r10.u64 | 327680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x822a8650
	ctx.lr = 0x822840CC;
	sub_822A8650(ctx, base);
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x822a1f08
	ctx.lr = 0x822840D8;
	sub_822A1F08(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r29,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
	// lwz r11,84(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82284108;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82284128;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82284148;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82284168;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,25
	ctx.r10.s64 = 25;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
loc_82284178:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82284198;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// blt cr6,0x82284178
	if (ctx.cr6.lt) goto loc_82284178;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82282828
	ctx.lr = 0x822841B0;
	sub_82282828(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// bl 0x822a4fe0
	ctx.lr = 0x822841BC;
	sub_822A4FE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a1fb0
	ctx.lr = 0x822841C4;
	sub_822A1FB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822841e8
	if (!ctx.cr0.eq) goto loc_822841E8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r7,2382
	ctx.r7.s64 = 2382;
	// addi r5,r11,-32768
	ctx.r5.s64 = ctx.r11.s64 + -32768;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x822841E8;
	sub_821BBC58(ctx, base);
loc_822841E8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,124(r30)
	PPC_STORE_U8(ctx.r30.u32 + 124, ctx.r11.u8);
loc_822841F0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822841F8"))) PPC_WEAK_FUNC(sub_822841F8);
PPC_FUNC_IMPL(__imp__sub_822841F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e0
	ctx.lr = 0x82284200;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f0,9472(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9472);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_82284224:
	// lwz r29,12(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r26,r11,-26120
	ctx.r26.s64 = ctx.r11.s64 + -26120;
	// lwz r3,464(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 464);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82284244;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// bl 0x82280818
	ctx.lr = 0x8228425C;
	sub_82280818(ctx, base);
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// blt cr6,0x82284224
	if (ctx.cr6.lt) goto loc_82284224;
	// lbz r11,126(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 126);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8228441c
	if (ctx.cr0.eq) goto loc_8228441C;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8228441c
	if (ctx.cr6.eq) goto loc_8228441C;
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228441c
	if (ctx.cr0.eq) goto loc_8228441C;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r6,r11,-26120
	ctx.r6.s64 = ctx.r11.s64 + -26120;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8227f400
	ctx.lr = 0x822842C0;
	sub_8227F400(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r6,r11,-26120
	ctx.r6.s64 = ctx.r11.s64 + -26120;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8227f400
	ctx.lr = 0x822842DC;
	sub_8227F400(ctx, base);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// li r3,23
	ctx.r3.s64 = 23;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r29,32(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x822a1f08
	ctx.lr = 0x822842F0;
	sub_822A1F08(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822a2390
	ctx.lr = 0x82284300;
	sub_822A2390(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a2390
	ctx.lr = 0x82284310;
	sub_822A2390(ctx, base);
	// lfs f4,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// li r5,2
	ctx.r5.s64 = 2;
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x822a2f98
	ctx.lr = 0x82284330;
	sub_822A2F98(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82282828
	ctx.lr = 0x8228433C;
	sub_82282828(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// bl 0x822a5088
	ctx.lr = 0x8228434C;
	sub_822A5088(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a1fb0
	ctx.lr = 0x82284354;
	sub_822A1FB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r28,r11,-10544
	ctx.r28.s64 = ctx.r11.s64 + -10544;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r27,r11,32400
	ctx.r27.s64 = ctx.r11.s64 + 32400;
	// bne 0x82284388
	if (!ctx.cr0.eq) goto loc_82284388;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r7,2421
	ctx.r7.s64 = 2421;
	// addi r5,r11,-32476
	ctx.r5.s64 = ctx.r11.s64 + -32476;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82284388;
	sub_821BBC58(ctx, base);
loc_82284388:
	// li r3,25
	ctx.r3.s64 = 25;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x822a1f08
	ctx.lr = 0x82284394;
	sub_822A1F08(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822a2390
	ctx.lr = 0x822843A4;
	sub_822A2390(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a2390
	ctx.lr = 0x822843B4;
	sub_822A2390(ctx, base);
	// lfs f4,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f4.f64 = double(temp.f32);
	// li r5,2
	ctx.r5.s64 = 2;
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x822a2f98
	ctx.lr = 0x822843D4;
	sub_822A2F98(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82282828
	ctx.lr = 0x822843E0;
	sub_82282828(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// bl 0x822a5088
	ctx.lr = 0x822843F0;
	sub_822A5088(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a1fb0
	ctx.lr = 0x822843F8;
	sub_822A1FB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8228441c
	if (!ctx.cr0.eq) goto loc_8228441C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r7,2429
	ctx.r7.s64 = 2429;
	// addi r5,r11,-32492
	ctx.r5.s64 = ctx.r11.s64 + -32492;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x8228441C;
	sub_821BBC58(ctx, base);
loc_8228441C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e9930
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82284424"))) PPC_WEAK_FUNC(sub_82284424);
PPC_FUNC_IMPL(__imp__sub_82284424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82284428"))) PPC_WEAK_FUNC(sub_82284428);
PPC_FUNC_IMPL(__imp__sub_82284428) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98b0
	ctx.lr = 0x82284430;
	__savegprlr_14(ctx, base);
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822826b0
	ctx.lr = 0x82284444;
	sub_822826B0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r29,r30,1096
	ctx.r29.s64 = ctx.r30.s64 + 1096;
	// addi r11,r11,29152
	ctx.r11.s64 = ctx.r11.s64 + 29152;
	// li r28,16
	ctx.r28.s64 = 16;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r15,0
	ctx.r15.s64 = 0;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// li r17,1
	ctx.r17.s64 = 1;
	// addi r11,r11,-32768
	ctx.r11.s64 = ctx.r11.s64 + -32768;
	// lfs f30,9580(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9580);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,9472(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9472);
	ctx.f31.f64 = double(temp.f32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r11,r11,-32436
	ctx.r11.s64 = ctx.r11.s64 + -32436;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r21,r11,-10544
	ctx.r21.s64 = ctx.r11.s64 + -10544;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r11,r11,-32460
	ctx.r11.s64 = ctx.r11.s64 + -32460;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r20,r11,32400
	ctx.r20.s64 = ctx.r11.s64 + 32400;
loc_822844B0:
	// lwz r24,0(r29)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi r24,0
	ctx.cr0.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq 0x82284aa0
	if (ctx.cr0.eq) goto loc_82284AA0;
	// lwz r11,32(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bne cr6,0x82284aa0
	if (!ctx.cr6.eq) goto loc_82284AA0;
	// lwz r23,36(r24)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r24.u32 + 36);
	// li r26,0
	ctx.r26.s64 = 0;
	// li r19,0
	ctx.r19.s64 = 0;
	// mr r16,r17
	ctx.r16.u64 = ctx.r17.u64;
	// lwz r18,4(r23)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
loc_822844DC:
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmplw cr6,r16,r11
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822844f0
	if (!ctx.cr6.gt) goto loc_822844F0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822844fc
	goto loc_822844FC;
loc_822844F0:
	// lwz r10,8(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// lwzx r26,r10,r19
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r19.u32);
loc_822844FC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82284a50
	if (ctx.cr0.eq) goto loc_82284A50;
	// lwz r11,228(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 228);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82284a44
	if (ctx.cr0.eq) goto loc_82284A44;
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// mr r25,r17
	ctx.r25.u64 = ctx.r17.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x82284a44
	if (ctx.cr6.lt) goto loc_82284A44;
	// addi r22,r26,32
	ctx.r22.s64 = ctx.r26.s64 + 32;
loc_82284524:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82284a28
	if (!ctx.cr6.eq) goto loc_82284A28;
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lwz r28,12(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// addi r29,r11,-26120
	ctx.r29.s64 = ctx.r11.s64 + -26120;
	// lwz r3,464(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82284554;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// bl 0x82280ab0
	ctx.lr = 0x8228456C;
	sub_82280AB0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82284740
	if (!ctx.cr6.eq) goto loc_82284740;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// bne cr6,0x8228470c
	if (!ctx.cr6.eq) goto loc_8228470C;
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x822a1f08
	ctx.lr = 0x82284588;
	sub_822A1F08(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,484(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// stw r5,484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 484, ctx.r5.u32);
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// bl 0x82291b00
	ctx.lr = 0x822845A8;
	sub_82291B00(ctx, base);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// bl 0x822a2390
	ctx.lr = 0x822845BC;
	sub_822A2390(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x822a2390
	ctx.lr = 0x822845CC;
	sub_822A2390(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822845EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228460C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r17,159(r31)
	PPC_STORE_U8(ctx.r31.u32 + 159, ctx.r17.u8);
	// bl 0x82282828
	ctx.lr = 0x8228461C;
	sub_82282828(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,164(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// bl 0x822a4f98
	ctx.lr = 0x82284628;
	sub_822A4F98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a1fb0
	ctx.lr = 0x82284630;
	sub_822A1FB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82284650
	if (!ctx.cr0.eq) goto loc_82284650;
	// li r7,2501
	ctx.r7.s64 = 2501;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82284650;
	sub_821BBC58(ctx, base);
loc_82284650:
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x822a1f08
	ctx.lr = 0x8228465C;
	sub_822A1F08(ctx, base);
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822a2390
	ctx.lr = 0x8228466C;
	sub_822A2390(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f30.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822a2f98
	ctx.lr = 0x8228468C;
	sub_822A2F98(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822846AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822846CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82282828
	ctx.lr = 0x822846D8;
	sub_82282828(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,164(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// bl 0x822a4f98
	ctx.lr = 0x822846E4;
	sub_822A4F98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a1fb0
	ctx.lr = 0x822846EC;
	sub_822A1FB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8228470c
	if (!ctx.cr0.eq) goto loc_8228470C;
	// li r7,2511
	ctx.r7.s64 = 2511;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x8228470C;
	sub_821BBC58(ctx, base);
loc_8228470C:
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822a2390
	ctx.lr = 0x8228471C;
	sub_822A2390(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82282828
	ctx.lr = 0x82284728;
	sub_82282828(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822a1fb0
	ctx.lr = 0x82284730;
	sub_822A1FB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82284a28
	if (!ctx.cr0.eq) goto loc_82284A28;
	// li r7,2516
	ctx.r7.s64 = 2516;
	// b 0x82284a14
	goto loc_82284A14;
loc_82284740:
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r29,r11,-26120
	ctx.r29.s64 = ctx.r11.s64 + -26120;
	// lwz r3,464(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82284760;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// bl 0x82280940
	ctx.lr = 0x82284778;
	sub_82280940(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82284a28
	if (!ctx.cr0.eq) goto loc_82284A28;
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x822a1f08
	ctx.lr = 0x8228478C;
	sub_822A1F08(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,484(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// stw r5,484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 484, ctx.r5.u32);
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// bl 0x82291b00
	ctx.lr = 0x822847AC;
	sub_82291B00(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x822a2390
	ctx.lr = 0x822847C0;
	sub_822A2390(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x822a2390
	ctx.lr = 0x822847D0;
	sub_822A2390(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822847F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82284810;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r17,159(r31)
	PPC_STORE_U8(ctx.r31.u32 + 159, ctx.r17.u8);
	// bl 0x82282828
	ctx.lr = 0x82284820;
	sub_82282828(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,164(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// bl 0x822a4f98
	ctx.lr = 0x8228482C;
	sub_822A4F98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a1fb0
	ctx.lr = 0x82284834;
	sub_822A1FB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82284854
	if (!ctx.cr0.eq) goto loc_82284854;
	// li r7,2536
	ctx.r7.s64 = 2536;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82284854;
	sub_821BBC58(ctx, base);
loc_82284854:
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x822a1f08
	ctx.lr = 0x82284860;
	sub_822A1F08(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822a2390
	ctx.lr = 0x82284870;
	sub_822A2390(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82284890;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822848B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a2390
	ctx.lr = 0x822848C0;
	sub_822A2390(ctx, base);
	// lwz r29,12(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r14,r11,-26120
	ctx.r14.s64 = ctx.r11.s64 + -26120;
	// lwz r3,464(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 464);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822848E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// bl 0x82280c40
	ctx.lr = 0x822848F8;
	sub_82280C40(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82284908
	if (!ctx.cr6.eq) goto loc_82284908;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x8228494c
	goto loc_8228494C;
loc_82284908:
	// lwz r29,12(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r14,r11,-26120
	ctx.r14.s64 = ctx.r11.s64 + -26120;
	// lwz r3,464(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 464);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82284928;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// bl 0x82280dd0
	ctx.lr = 0x82284940;
	sub_82280DD0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8228498c
	if (!ctx.cr6.eq) goto loc_8228498C;
	// li r6,2
	ctx.r6.s64 = 2;
loc_8228494C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82284968;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82284988;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822849a4
	goto loc_822849A4;
loc_8228498C:
	// li r7,2565
	ctx.r7.s64 = 2565;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x822849A4;
	sub_821BBC58(ctx, base);
loc_822849A4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82282828
	ctx.lr = 0x822849B0;
	sub_82282828(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,164(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// bl 0x822a4f98
	ctx.lr = 0x822849BC;
	sub_822A4F98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a1fb0
	ctx.lr = 0x822849C4;
	sub_822A1FB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822849e4
	if (!ctx.cr0.eq) goto loc_822849E4;
	// li r7,2570
	ctx.r7.s64 = 2570;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x822849E4;
	sub_821BBC58(ctx, base);
loc_822849E4:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822a2390
	ctx.lr = 0x822849F4;
	sub_822A2390(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82282828
	ctx.lr = 0x82284A00;
	sub_82282828(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822a1fb0
	ctx.lr = 0x82284A08;
	sub_822A1FB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82284a28
	if (!ctx.cr0.eq) goto loc_82284A28;
	// li r7,2575
	ctx.r7.s64 = 2575;
loc_82284A14:
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82284A28;
	sub_821BBC58(ctx, base);
loc_82284A28:
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82284524
	if (!ctx.cr6.gt) goto loc_82284524;
	// lwz r28,96(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r29,100(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_82284A44:
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// addi r19,r19,4
	ctx.r19.s64 = ctx.r19.s64 + 4;
	// b 0x822844dc
	goto loc_822844DC;
loc_82284A50:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq cr6,0x82284aa0
	if (ctx.cr6.eq) goto loc_82284AA0;
	// rlwinm r31,r18,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
loc_82284A5C:
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// addi r18,r18,-1
	ctx.r18.s64 = ctx.r18.s64 + -1;
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// cmplw cr6,r18,r11
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82284a7c
	if (!ctx.cr6.lt) goto loc_82284A7C;
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// b 0x82284a8c
	goto loc_82284A8C;
loc_82284A7C:
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8229faf8
	ctx.lr = 0x82284A88;
	sub_8229FAF8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82284A8C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822a08a0
	ctx.lr = 0x82284A98;
	sub_822A08A0(ctx, base);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne cr6,0x82284a5c
	if (!ctx.cr6.eq) goto loc_82284A5C;
loc_82284AA0:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// bne 0x822844b0
	if (!ctx.cr0.eq) goto loc_822844B0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x822e9900
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82284AC4"))) PPC_WEAK_FUNC(sub_82284AC4);
PPC_FUNC_IMPL(__imp__sub_82284AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82284AC8"))) PPC_WEAK_FUNC(sub_82284AC8);
PPC_FUNC_IMPL(__imp__sub_82284AC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x82284AD0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82284bf4
	if (!ctx.cr6.eq) goto loc_82284BF4;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// bl 0x822a5528
	ctx.lr = 0x82284AEC;
	sub_822A5528(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// addi r28,r11,-10544
	ctx.r28.s64 = ctx.r11.s64 + -10544;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r27,r11,32400
	ctx.r27.s64 = ctx.r11.s64 + 32400;
	// beq cr6,0x82284b20
	if (ctx.cr6.eq) goto loc_82284B20;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r7,2604
	ctx.r7.s64 = 2604;
	// addi r5,r11,-32676
	ctx.r5.s64 = ctx.r11.s64 + -32676;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82284B20;
	sub_821BBC58(ctx, base);
loc_82284B20:
	// lwz r11,168(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82284B3C:
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x82284b4c
	if (!ctx.cr6.gt) goto loc_82284B4C;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x82284b58
	goto loc_82284B58;
loc_82284B4C:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
loc_82284B58:
	// clrlwi. r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82284b70
	if (ctx.cr0.eq) goto loc_82284B70;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// b 0x82284b3c
	goto loc_82284B3C;
loc_82284B70:
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x822a1f08
	ctx.lr = 0x82284B7C;
	sub_822A1F08(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f4,9472(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9472);
	ctx.f4.f64 = double(temp.f32);
	// li r11,5
	ctx.r11.s64 = 5;
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x822a2f98
	ctx.lr = 0x82284BB0;
	sub_822A2F98(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82282828
	ctx.lr = 0x82284BBC;
	sub_82282828(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a4f98
	ctx.lr = 0x82284BC8;
	sub_822A4F98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a1fb0
	ctx.lr = 0x82284BD0;
	sub_822A1FB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82284bf4
	if (!ctx.cr0.eq) goto loc_82284BF4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r7,2616
	ctx.r7.s64 = 2616;
	// addi r5,r11,-32768
	ctx.r5.s64 = ctx.r11.s64 + -32768;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82284BF4;
	sub_821BBC58(ctx, base);
loc_82284BF4:
	// lwz r11,168(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// b 0x82284c1c
	goto loc_82284C1C;
loc_82284C00:
	// lwz r9,228(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82284c18
	if (ctx.cr0.eq) goto loc_82284C18;
	// lwz r9,80(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// beq cr6,0x82284c2c
	if (ctx.cr6.eq) goto loc_82284C2C;
loc_82284C18:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82284C1C:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82284c00
	if (!ctx.cr0.eq) goto loc_82284C00;
	// b 0x82284c30
	goto loc_82284C30;
loc_82284C2C:
	// stw r11,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r11.u32);
loc_82284C30:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82284C38"))) PPC_WEAK_FUNC(sub_82284C38);
PPC_FUNC_IMPL(__imp__sub_82284C38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x82284C40;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r11,r11,-31456
	ctx.r11.s64 = ctx.r11.s64 + -31456;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r10,-13160
	ctx.r10.s64 = ctx.r10.s64 + -13160;
	// li r3,142
	ctx.r3.s64 = 142;
	// lwz r11,7432(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7432);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82284C74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,46
	ctx.r10.s64 = 46;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// lbz r11,2144(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2144);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82284d14
	if (ctx.cr0.eq) goto loc_82284D14;
	// lwz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82284d14
	if (ctx.cr0.eq) goto loc_82284D14;
	// lwz r29,948(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 948);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a4fe0
	ctx.lr = 0x82284CB4;
	sub_822A4FE0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// bl 0x82282128
	ctx.lr = 0x82284CC0;
	sub_82282128(ctx, base);
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82284d14
	if (ctx.cr6.eq) goto loc_82284D14;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// lwz r11,948(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 948);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82284d08
	if (ctx.cr6.eq) goto loc_82284D08;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,2823
	ctx.r7.s64 = 2823;
	// addi r6,r11,32400
	ctx.r6.s64 = ctx.r11.s64 + 32400;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-32420
	ctx.r5.s64 = ctx.r11.s64 + -32420;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x82284D08;
	sub_821BBC58(ctx, base);
loc_82284D08:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,120(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// bl 0x82282128
	ctx.lr = 0x82284D14;
	sub_82282128(ctx, base);
loc_82284D14:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82284D1C"))) PPC_WEAK_FUNC(sub_82284D1C);
PPC_FUNC_IMPL(__imp__sub_82284D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82284D20"))) PPC_WEAK_FUNC(sub_82284D20);
PPC_FUNC_IMPL(__imp__sub_82284D20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x82284D28;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 948);
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// rlwinm. r30,r11,29,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82284d78
	if (ctx.cr0.eq) goto loc_82284D78;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82284D54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82284d78
	if (ctx.cr0.eq) goto loc_82284D78;
	// lwz r11,948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 948);
	// lwz r10,948(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 948);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// xori r30,r11,1
	ctx.r30.u64 = ctx.r11.u64 ^ 1;
loc_82284D78:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82284D84"))) PPC_WEAK_FUNC(sub_82284D84);
PPC_FUNC_IMPL(__imp__sub_82284D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82284D88"))) PPC_WEAK_FUNC(sub_82284D88);
PPC_FUNC_IMPL(__imp__sub_82284D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98c0
	ctx.lr = 0x82284D90;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r11,2148(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 2148);
	// lwz r10,12(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2148(r25)
	PPC_STORE_U32(ctx.r25.u32 + 2148, ctx.r11.u32);
	// lwz r31,432(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 432);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82268f20
	ctx.lr = 0x82284DB8;
	sub_82268F20(ctx, base);
	// addic. r30,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r30.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// beq 0x82284ddc
	if (ctx.cr0.eq) goto loc_82284DDC;
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// bl 0x82281f80
	ctx.lr = 0x82284DD4;
	sub_82281F80(ctx, base);
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
	// b 0x82284de0
	goto loc_82284DE0;
loc_82284DDC:
	// li r24,0
	ctx.r24.s64 = 0;
loc_82284DE0:
	// lwz r11,96(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 96);
	// lwz r22,4(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi r22,0
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble 0x82285394
	if (!ctx.cr0.gt) goto loc_82285394;
	// rlwinm r11,r22,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r23,r22,-1
	ctx.r23.s64 = ctx.r22.s64 + -1;
	// addi r21,r11,-4
	ctx.r21.s64 = ctx.r11.s64 + -4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r20,r11,-10544
	ctx.r20.s64 = ctx.r11.s64 + -10544;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r19,r11,-32368
	ctx.r19.s64 = ctx.r11.s64 + -32368;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r18,r11,32400
	ctx.r18.s64 = ctx.r11.s64 + 32400;
loc_82284E14:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82284e38
	if (ctx.cr6.eq) goto loc_82284E38;
	// li r7,2864
	ctx.r7.s64 = 2864;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82284E38;
	sub_821BBC58(ctx, base);
loc_82284E38:
	// lwz r3,96(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 96);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82284e54
	if (!ctx.cr6.lt) goto loc_82284E54;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r21
	ctx.r3.u64 = ctx.r11.u64 + ctx.r21.u64;
	// b 0x82284e5c
	goto loc_82284E5C;
loc_82284E54:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x8229faf8
	ctx.lr = 0x82284E5C;
	sub_8229FAF8(ctx, base);
loc_82284E5C:
	// lwz r27,0(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82284E74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bgt cr6,0x82285378
	if (ctx.cr6.gt) goto loc_82285378;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82284E90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82285378
	if (ctx.cr0.eq) goto loc_82285378;
	// lwz r11,228(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 228);
	// rlwinm. r11,r11,29,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82285378
	if (!ctx.cr0.eq) goto loc_82285378;
	// lwz r3,236(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 236);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82284EB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82285378
	if (!ctx.cr0.eq) goto loc_82285378;
	// lwz r31,236(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 236);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a2960
	ctx.lr = 0x82284ED0;
	sub_822A2960(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822850dc
	if (ctx.cr0.eq) goto loc_822850DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,100(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 100);
	// bl 0x82284d20
	ctx.lr = 0x82284EE4;
	sub_82284D20(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822850dc
	if (ctx.cr0.eq) goto loc_822850DC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82284F00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82285044
	if (ctx.cr0.eq) goto loc_82285044;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r26,1
	ctx.r26.s64 = 1;
	// li r28,1
	ctx.r28.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x82284fac
	if (ctx.cr6.lt) goto loc_82284FAC;
	// addi r29,r31,236
	ctx.r29.s64 = ctx.r31.s64 + 236;
loc_82284F20:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82284F38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82284f94
	if (!ctx.cr0.eq) goto loc_82284F94;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,100(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 100);
	// bl 0x82284d20
	ctx.lr = 0x82284F4C;
	sub_82284D20(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82284f94
	if (ctx.cr0.eq) goto loc_82284F94;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r11,50
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 50, ctx.xer);
	// beq cr6,0x82284f94
	if (ctx.cr6.eq) goto loc_82284F94;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82284f94
	if (ctx.cr6.eq) goto loc_82284F94;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82284F80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82284f94
	if (!ctx.cr0.eq) goto loc_82284F94;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// bne cr6,0x82284f98
	if (!ctx.cr6.eq) goto loc_82284F98;
loc_82284F94:
	// li r26,0
	ctx.r26.s64 = 0;
loc_82284F98:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82284f20
	if (!ctx.cr6.gt) goto loc_82284F20;
loc_82284FAC:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82285378
	if (ctx.cr0.eq) goto loc_82285378;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r28,1
	ctx.r28.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x8228500c
	if (ctx.cr6.lt) goto loc_8228500C;
	// addi r29,r31,236
	ctx.r29.s64 = ctx.r31.s64 + 236;
loc_82284FC8:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,2148(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 2148);
	// lwz r10,892(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 892);
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82284ff8
	if (!ctx.cr0.eq) goto loc_82284FF8;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r11,892(r30)
	PPC_STORE_U32(ctx.r30.u32 + 892, ctx.r11.u32);
	// lwz r4,4(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// bl 0x8229faf8
	ctx.lr = 0x82284FF4;
	sub_8229FAF8(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
loc_82284FF8:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82284fc8
	if (!ctx.cr6.gt) goto loc_82284FC8;
loc_8228500C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822822b0
	ctx.lr = 0x82285018;
	sub_822822B0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228502C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82285040;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822850dc
	goto loc_822850DC;
loc_82285044:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,50
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 50, ctx.xer);
	// beq cr6,0x82285378
	if (ctx.cr6.eq) goto loc_82285378;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82285378
	if (ctx.cr6.eq) goto loc_82285378;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82285070;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82285378
	if (!ctx.cr0.eq) goto loc_82285378;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// beq cr6,0x82285378
	if (ctx.cr6.eq) goto loc_82285378;
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82285378
	if (!ctx.cr0.eq) goto loc_82285378;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822822b0
	ctx.lr = 0x8228509C;
	sub_822822B0(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822850B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,2148(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 2148);
	// lwz r10,892(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 892);
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822850dc
	if (!ctx.cr0.eq) goto loc_822850DC;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r11,892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 892, ctx.r11.u32);
	// lwz r4,4(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// bl 0x8229faf8
	ctx.lr = 0x822850D8;
	sub_8229FAF8(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
loc_822850DC:
	// lwz r26,80(r27)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r27.u32 + 80);
	// lwz r27,56(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	// b 0x82285368
	goto loc_82285368;
loc_822850E8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822850f8
	if (ctx.cr6.eq) goto loc_822850F8;
	// lwz r3,8(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// b 0x82285104
	goto loc_82285104;
loc_822850F8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8229faf8
	ctx.lr = 0x82285104;
	sub_8229FAF8(ctx, base);
loc_82285104:
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x82285384
	if (ctx.cr0.eq) goto loc_82285384;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8229fa30
	ctx.lr = 0x8228511C;
	sub_8229FA30(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a2960
	ctx.lr = 0x82285128;
	sub_822A2960(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228528c
	if (ctx.cr0.eq) goto loc_8228528C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,100(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 100);
	// bl 0x82284d20
	ctx.lr = 0x8228513C;
	sub_82284D20(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228528c
	if (ctx.cr0.eq) goto loc_8228528C;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,50
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 50, ctx.xer);
	// beq cr6,0x8228528c
	if (ctx.cr6.eq) goto loc_8228528C;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8228528c
	if (ctx.cr6.eq) goto loc_8228528C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82285170;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8228528c
	if (!ctx.cr0.eq) goto loc_8228528C;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// beq cr6,0x8228528c
	if (ctx.cr6.eq) goto loc_8228528C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82285198;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82285210
	if (ctx.cr0.eq) goto loc_82285210;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r28,1
	ctx.r28.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x822851f8
	if (ctx.cr6.lt) goto loc_822851F8;
	// addi r29,r31,236
	ctx.r29.s64 = ctx.r31.s64 + 236;
loc_822851B4:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,2148(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 2148);
	// lwz r10,892(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 892);
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822851e4
	if (!ctx.cr0.eq) goto loc_822851E4;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r11,892(r30)
	PPC_STORE_U32(ctx.r30.u32 + 892, ctx.r11.u32);
	// lwz r4,4(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// bl 0x8229faf8
	ctx.lr = 0x822851E0;
	sub_8229FAF8(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
loc_822851E4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x822851b4
	if (!ctx.cr6.gt) goto loc_822851B4;
loc_822851F8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228520C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82285368
	goto loc_82285368;
loc_82285210:
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228525c
	if (ctx.cr0.eq) goto loc_8228525C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82282038
	ctx.lr = 0x82285224;
	sub_82282038(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,2148(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 2148);
	// lwz r10,892(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 892);
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82285254
	if (!ctx.cr0.eq) goto loc_82285254;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r11,892(r30)
	PPC_STORE_U32(ctx.r30.u32 + 892, ctx.r11.u32);
	// lwz r4,4(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// bl 0x8229faf8
	ctx.lr = 0x82285250;
	sub_8229FAF8(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
loc_82285254:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822820a0
	ctx.lr = 0x8228525C;
	sub_822820A0(ctx, base);
loc_8228525C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228527C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,100(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 100);
	// bl 0x82282128
	ctx.lr = 0x82285288;
	sub_82282128(ctx, base);
	// b 0x82285368
	goto loc_82285368;
loc_8228528C:
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// bl 0x822a3d40
	ctx.lr = 0x82285298;
	sub_822A3D40(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822821d0
	ctx.lr = 0x822852A8;
	sub_822821D0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822852C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,100(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 100);
	// bl 0x82282128
	ctx.lr = 0x822852D4;
	sub_82282128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,100(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 100);
	// bl 0x82284d20
	ctx.lr = 0x822852E0;
	sub_82284D20(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82285358
	if (ctx.cr0.eq) goto loc_82285358;
	// lwz r11,100(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 100);
	// lwz r3,948(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 948);
	// lwz r11,948(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 948);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82285350
	if (!ctx.cr6.eq) goto loc_82285350;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82285328
	goto loc_82285328;
loc_82285310:
	// lwz r11,100(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 100);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82285340
	if (ctx.cr6.eq) goto loc_82285340;
	// lwz r29,8(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82285328:
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82285334;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82285310
	if (ctx.cr0.eq) goto loc_82285310;
	// b 0x82285344
	goto loc_82285344;
loc_82285340:
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_82285344:
	// lwz r3,948(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 948);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x82285360
	goto loc_82285360;
loc_82285350:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// b 0x82285360
	goto loc_82285360;
loc_82285358:
	// lwz r4,100(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 100);
	// lwz r3,948(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 948);
loc_82285360:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x822a5028
	ctx.lr = 0x82285368;
	sub_822A5028(ctx, base);
loc_82285368:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822850e8
	if (!ctx.cr0.eq) goto loc_822850E8;
	// b 0x82285384
	goto loc_82285384;
loc_82285378:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,100(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 100);
	// bl 0x82282128
	ctx.lr = 0x82285384;
	sub_82282128(ctx, base);
loc_82285384:
	// addic. r22,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// addi r21,r21,-4
	ctx.r21.s64 = ctx.r21.s64 + -4;
	// addi r23,r23,-1
	ctx.r23.s64 = ctx.r23.s64 + -1;
	// bgt 0x82284e14
	if (ctx.cr0.gt) goto loc_82284E14;
loc_82285394:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822e9910
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8228539C"))) PPC_WEAK_FUNC(sub_8228539C);
PPC_FUNC_IMPL(__imp__sub_8228539C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822853A0"))) PPC_WEAK_FUNC(sub_822853A0);
PPC_FUNC_IMPL(__imp__sub_822853A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98dc
	ctx.lr = 0x822853A8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lbz r11,2144(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 2144);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r11,r11,-31456
	ctx.r11.s64 = ctx.r11.s64 + -31456;
	// beq 0x822853cc
	if (ctx.cr0.eq) goto loc_822853CC;
	// lwz r10,7588(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7588);
	// b 0x822853d0
	goto loc_822853D0;
loc_822853CC:
	// lwz r10,7536(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7536);
loc_822853D0:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,-13160
	ctx.r11.s64 = ctx.r11.s64 + -13160;
	// li r3,144
	ctx.r3.s64 = 144;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822853F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,45
	ctx.r11.s64 = 45;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,100(r27)
	PPC_STORE_U32(ctx.r27.u32 + 100, ctx.r3.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r10,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r10.u32);
	// lwz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82285418
	if (ctx.cr0.eq) goto loc_82285418;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82285418:
	// lwz r10,100(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// stw r11,168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 168, ctx.r11.u32);
	// lwz r25,168(r27)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r27.u32 + 168);
	// lwz r11,132(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 132);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,132(r25)
	PPC_STORE_U32(ctx.r25.u32 + 132, ctx.r11.u32);
	// lwz r29,84(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 84);
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq 0x8228568c
	if (ctx.cr0.eq) goto loc_8228568C;
loc_8228543C:
	// lwz r11,132(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 132);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,132(r25)
	PPC_STORE_U32(ctx.r25.u32 + 132, ctx.r11.u32);
	// lwz r11,132(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 132);
	// rlwinm. r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82285474
	if (!ctx.cr0.eq) goto loc_82285474;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82285474
	if (!ctx.cr0.eq) goto loc_82285474;
	// rlwinm. r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82285474
	if (!ctx.cr0.eq) goto loc_82285474;
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// lwz r29,84(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne 0x8228543c
	if (!ctx.cr0.eq) goto loc_8228543C;
loc_82285474:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8228568c
	if (ctx.cr6.eq) goto loc_8228568C;
	// lwz r11,60(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 60);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8228568c
	if (!ctx.cr6.eq) goto loc_8228568C;
	// lwz r11,132(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 132);
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,132(r29)
	PPC_STORE_U32(ctx.r29.u32 + 132, ctx.r11.u32);
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// lwz r3,352(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 352);
	// bl 0x82282c10
	ctx.lr = 0x822854AC;
	sub_82282C10(ctx, base);
	// lwz r31,36(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// b 0x82285524
	goto loc_82285524;
loc_822854B4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822854C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822854dc
	if (!ctx.cr0.eq) goto loc_822854DC;
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// rlwinm. r11,r11,19,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82285520
	if (ctx.cr0.eq) goto loc_82285520;
loc_822854DC:
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// blt cr6,0x82285520
	if (ctx.cr6.lt) goto loc_82285520;
	// addi r11,r31,236
	ctx.r11.s64 = ctx.r31.s64 + 236;
loc_822854FC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,228(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 228);
	// ori r8,r8,8192
	ctx.r8.u64 = ctx.r8.u64 | 8192;
	// stw r8,228(r9)
	PPC_STORE_U32(ctx.r9.u32 + 228, ctx.r8.u32);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x822854fc
	if (!ctx.cr6.gt) goto loc_822854FC;
loc_82285520:
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82285524:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822854b4
	if (!ctx.cr6.eq) goto loc_822854B4;
	// lwz r31,28(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// lwz r26,112(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	// b 0x82285588
	goto loc_82285588;
loc_8228553C:
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82285584
	if (ctx.cr0.eq) goto loc_82285584;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228555C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82285580
	if (!ctx.cr0.eq) goto loc_82285580;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82285578;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82285594
	if (ctx.cr0.eq) goto loc_82285594;
loc_82285580:
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_82285584:
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82285588:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8228553c
	if (!ctx.cr6.eq) goto loc_8228553C;
loc_82285594:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r31,432(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82268f20
	ctx.lr = 0x822855A8;
	sub_82268F20(ctx, base);
	// addic. r30,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r30.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// beq 0x822855c8
	if (ctx.cr0.eq) goto loc_822855C8;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// bl 0x82281f80
	ctx.lr = 0x822855C4;
	sub_82281F80(ctx, base);
	// b 0x822855cc
	goto loc_822855CC;
loc_822855C8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_822855CC:
	// lwz r31,36(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// b 0x822855e8
	goto loc_822855E8;
loc_822855D4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8229faf8
	ctx.lr = 0x822855E0;
	sub_8229FAF8(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_822855E8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822855d4
	if (!ctx.cr6.eq) goto loc_822855D4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82285678
	if (ctx.cr0.eq) goto loc_82285678;
loc_82285604:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82285614
	if (ctx.cr6.eq) goto loc_82285614;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// b 0x82285620
	goto loc_82285620;
loc_82285614:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8229faf8
	ctx.lr = 0x82285620;
	sub_8229FAF8(ctx, base);
loc_82285620:
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8229fa30
	ctx.lr = 0x82285630;
	sub_8229FA30(ctx, base);
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// rlwinm. r11,r11,19,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82285660
	if (ctx.cr0.eq) goto loc_82285660;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82285648
	if (!ctx.cr6.eq) goto loc_82285648;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_82285648:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229f838
	ctx.lr = 0x82285650;
	sub_8229F838(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a5028
	ctx.lr = 0x82285660;
	sub_822A5028(ctx, base);
loc_82285660:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82285604
	if (!ctx.cr0.eq) goto loc_82285604;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bne cr6,0x8228567c
	if (!ctx.cr6.eq) goto loc_8228567C;
loc_82285678:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_8228567C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,100(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// bl 0x822a5028
	ctx.lr = 0x82285688;
	sub_822A5028(ctx, base);
	// b 0x822856fc
	goto loc_822856FC;
loc_8228568C:
	// lwz r31,28(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// b 0x822856dc
	goto loc_822856DC;
loc_82285694:
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822856d8
	if (ctx.cr0.eq) goto loc_822856D8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822856B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822856d8
	if (!ctx.cr0.eq) goto loc_822856D8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822856D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822856ec
	if (ctx.cr0.eq) goto loc_822856EC;
loc_822856D8:
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_822856DC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82285694
	if (!ctx.cr6.eq) goto loc_82285694;
	// b 0x822856fc
	goto loc_822856FC;
loc_822856EC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,100(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822a5088
	ctx.lr = 0x822856FC;
	sub_822A5088(ctx, base);
loc_822856FC:
	// lwz r11,132(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 132);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,132(r25)
	PPC_STORE_U32(ctx.r25.u32 + 132, ctx.r11.u32);
	// lwz r4,104(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 104);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x8228571c
	if (ctx.cr0.eq) goto loc_8228571C;
	// lwz r3,100(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// bl 0x82282128
	ctx.lr = 0x8228571C;
	sub_82282128(ctx, base);
loc_8228571C:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r31,432(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82268f20
	ctx.lr = 0x82285730;
	sub_82268F20(ctx, base);
	// addic. r30,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r30.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// beq 0x82285750
	if (ctx.cr0.eq) goto loc_82285750;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// bl 0x82281f80
	ctx.lr = 0x8228574C;
	sub_82281F80(ctx, base);
	// b 0x82285754
	goto loc_82285754;
loc_82285750:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82285754:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82285760:
	// lwz r11,88(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 88);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82285778
	if (!ctx.cr6.gt) goto loc_82285778;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82285784
	goto loc_82285784;
loc_82285778:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwzx r28,r10,r31
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
loc_82285784:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82285834
	if (ctx.cr0.eq) goto loc_82285834;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8229faf8
	ctx.lr = 0x82285798;
	sub_8229FAF8(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// b 0x82285760
	goto loc_82285760;
loc_822857A8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822857b8
	if (ctx.cr6.eq) goto loc_822857B8;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// b 0x822857c4
	goto loc_822857C4;
loc_822857B8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8229faf8
	ctx.lr = 0x822857C4;
	sub_8229FAF8(ctx, base);
loc_822857C4:
	// lwz r27,0(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8229fa30
	ctx.lr = 0x822857D4;
	sub_8229FA30(ctx, base);
	// lwz r11,132(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 132);
	// li r28,0
	ctx.r28.s64 = 0;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r11,132(r27)
	PPC_STORE_U32(ctx.r27.u32 + 132, ctx.r11.u32);
loc_822857EC:
	// lwz r11,88(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 88);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82285804
	if (!ctx.cr6.gt) goto loc_82285804;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82285810
	goto loc_82285810;
loc_82285804:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwzx r28,r10,r31
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
loc_82285810:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82285834
	if (ctx.cr0.eq) goto loc_82285834;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8229faf8
	ctx.lr = 0x82285824;
	sub_8229FAF8(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// b 0x822857ec
	goto loc_822857EC;
loc_82285834:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822857a8
	if (!ctx.cr0.eq) goto loc_822857A8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e992c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82285848"))) PPC_WEAK_FUNC(sub_82285848);
PPC_FUNC_IMPL(__imp__sub_82285848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e0
	ctx.lr = 0x82285850;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r26,r31,128
	ctx.r26.s64 = ctx.r31.s64 + 128;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// stw r5,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r5.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stb r30,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r30.u8);
	// stb r30,125(r31)
	PPC_STORE_U8(ctx.r31.u32 + 125, ctx.r30.u8);
	// stb r30,126(r31)
	PPC_STORE_U8(ctx.r31.u32 + 126, ctx.r30.u8);
	// bl 0x8229f858
	ctx.lr = 0x822858A0;
	sub_8229F858(ctx, base);
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// li r5,1880
	ctx.r5.s64 = 1880;
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// bl 0x822e9960
	ctx.lr = 0x822858BC;
	sub_822E9960(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r30,2064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2064, ctx.r30.u32);
	// stb r30,2072(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2072, ctx.r30.u8);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stb r30,2073(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2073, ctx.r30.u8);
	// stw r30,2076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2076, ctx.r30.u32);
	// stw r10,2080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2080, ctx.r10.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r30,2084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2084, ctx.r30.u32);
	// stw r30,2088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2088, ctx.r30.u32);
	// stw r30,2092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2092, ctx.r30.u32);
	// stw r30,2096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2096, ctx.r30.u32);
	// stw r30,2148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2148, ctx.r30.u32);
	// stw r30,2152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2152, ctx.r30.u32);
	// stw r30,2156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2156, ctx.r30.u32);
	// stw r30,2160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2160, ctx.r30.u32);
	// stw r30,2164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2164, ctx.r30.u32);
	// stw r30,2168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2168, ctx.r30.u32);
	// stw r30,2172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2172, ctx.r30.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82285914:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82285914
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82285914;
	// lwz r28,428(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 428);
	// li r4,48
	ctx.r4.s64 = 48;
	// stw r31,1712(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1712, ctx.r31.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82268f20
	ctx.lr = 0x82285934;
	sub_82268F20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// beq 0x82285954
	if (ctx.cr0.eq) goto loc_82285954;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82291020
	ctx.lr = 0x8228594C;
	sub_82291020(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82285958
	goto loc_82285958;
loc_82285954:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82285958:
	// li r3,1024
	ctx.r3.s64 = 1024;
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// lwz r4,428(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 428);
	// bl 0x82282c10
	ctx.lr = 0x82285968;
	sub_82282C10(ctx, base);
	// stw r3,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r3.u32);
	// lwz r28,428(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 428);
	// li r4,144
	ctx.r4.s64 = 144;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82268f20
	ctx.lr = 0x8228597C;
	sub_82268F20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// beq 0x82285998
	if (ctx.cr0.eq) goto loc_82285998;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822a5c48
	ctx.lr = 0x82285994;
	sub_822A5C48(ctx, base);
	// b 0x8228599c
	goto loc_8228599C;
loc_82285998:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8228599C:
	// stw r3,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r3.u32);
	// li r4,140
	ctx.r4.s64 = 140;
	// lwz r28,428(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 428);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82268f20
	ctx.lr = 0x822859B0;
	sub_82268F20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// beq 0x822859cc
	if (ctx.cr0.eq) goto loc_822859CC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822a5ca0
	ctx.lr = 0x822859C8;
	sub_822A5CA0(ctx, base);
	// b 0x822859d0
	goto loc_822859D0;
loc_822859CC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_822859D0:
	// stw r3,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r3.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r28,428(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 428);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82268f20
	ctx.lr = 0x822859E4;
	sub_82268F20(ctx, base);
	// addic. r27,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r27.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// beq 0x82285a00
	if (ctx.cr0.eq) goto loc_82285A00;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,428(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 428);
	// bl 0x82281f80
	ctx.lr = 0x822859FC;
	sub_82281F80(ctx, base);
	// b 0x82285a04
	goto loc_82285A04;
loc_82285A00:
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
loc_82285A04:
	// stw r27,2068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2068, ctx.r27.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r28,428(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 428);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82268f20
	ctx.lr = 0x82285A18;
	sub_82268F20(ctx, base);
	// addic. r27,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r27.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// beq 0x82285a34
	if (ctx.cr0.eq) goto loc_82285A34;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,428(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 428);
	// bl 0x82281f80
	ctx.lr = 0x82285A30;
	sub_82281F80(ctx, base);
	// b 0x82285a38
	goto loc_82285A38;
loc_82285A34:
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
loc_82285A38:
	// stw r27,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r27.u32);
	// lbz r4,356(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 356);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// stb r4,2144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2144, ctx.r4.u8);
	// bl 0x82291830
	ctx.lr = 0x82285A4C;
	sub_82291830(ctx, base);
	// lwz r28,164(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8229f8e0
	ctx.lr = 0x82285A5C;
	sub_8229F8E0(ctx, base);
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// lwz r28,168(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8229f8b8
	ctx.lr = 0x82285A70;
	sub_8229F8B8(ctx, base);
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// lbz r11,2144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2144);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82285a8c
	if (ctx.cr0.eq) goto loc_82285A8C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r11,r11,-15136
	ctx.r11.s64 = ctx.r11.s64 + -15136;
	// b 0x82285a94
	goto loc_82285A94;
loc_82285A8C:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r11,r11,-15400
	ctx.r11.s64 = ctx.r11.s64 + -15400;
loc_82285A94:
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// lwz r4,428(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 428);
	// lwz r28,4(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82282c10
	ctx.lr = 0x82285AAC;
	sub_82282C10(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,2136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2136, ctx.r11.u32);
	// lwz r4,428(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 428);
	// bl 0x82282c10
	ctx.lr = 0x82285AC0;
	sub_82282C10(ctx, base);
	// lwz r11,2136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2136);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r3,2140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2140, ctx.r3.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x82285af8
	if (!ctx.cr6.gt) goto loc_82285AF8;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
loc_82285AE0:
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82285ae0
	if (ctx.cr6.lt) goto loc_82285AE0;
loc_82285AF8:
	// lwz r10,2140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2140);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82285b24
	if (!ctx.cr6.gt) goto loc_82285B24;
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
loc_82285B0C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82285b0c
	if (ctx.cr6.lt) goto loc_82285B0C;
loc_82285B24:
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// lwz r3,428(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 428);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82268f20
	ctx.lr = 0x82285B38;
	sub_82268F20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e9930
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82285B4C"))) PPC_WEAK_FUNC(sub_82285B4C);
PPC_FUNC_IMPL(__imp__sub_82285B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82285B50"))) PPC_WEAK_FUNC(sub_82285B50);
PPC_FUNC_IMPL(__imp__sub_82285B50) {
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
	// lwz r11,2140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2140);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82285b80
	if (ctx.cr0.eq) goto loc_82285B80;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x82269050
	ctx.lr = 0x82285B80;
	sub_82269050(ctx, base);
loc_82285B80:
	// lwz r11,2136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2136);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82285b98
	if (ctx.cr0.eq) goto loc_82285B98;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x82269050
	ctx.lr = 0x82285B98;
	sub_82269050(ctx, base);
loc_82285B98:
	// lwz r3,2068(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2068);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82285bac
	if (ctx.cr0.eq) goto loc_82285BAC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8228bf18
	ctx.lr = 0x82285BAC;
	sub_8228BF18(ctx, base);
loc_82285BAC:
	// lwz r30,172(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x82285bcc
	if (ctx.cr0.eq) goto loc_82285BCC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82293728
	ctx.lr = 0x82285BC0;
	sub_82293728(ctx, base);
	// addi r4,r30,-4
	ctx.r4.s64 = ctx.r30.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x82269050
	ctx.lr = 0x82285BCC;
	sub_82269050(ctx, base);
loc_82285BCC:
	// addi r30,r31,128
	ctx.r30.s64 = ctx.r31.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8229f900
	ctx.lr = 0x82285BD8;
	sub_8229F900(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,152(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// lwz r3,428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// bl 0x82269050
	ctx.lr = 0x82285BE8;
	sub_82269050(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,156(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r3,428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// bl 0x82269050
	ctx.lr = 0x82285BF8;
	sub_82269050(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,160(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r3,428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// bl 0x82269050
	ctx.lr = 0x82285C08;
	sub_82269050(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r11,r11,-27448
	ctx.r11.s64 = ctx.r11.s64 + -27448;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82285C30"))) PPC_WEAK_FUNC(sub_82285C30);
PPC_FUNC_IMPL(__imp__sub_82285C30) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82285cbc
	if (!ctx.cr6.eq) goto loc_82285CBC;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r4,44
	ctx.r4.s64 = 44;
	// lwz r31,432(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82268f20
	ctx.lr = 0x82285C68;
	sub_82268F20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// beq 0x82285c88
	if (ctx.cr0.eq) goto loc_82285C88;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822a45a8
	ctx.lr = 0x82285C80;
	sub_822A45A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82285c8c
	goto loc_82285C8C;
loc_82285C88:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82285C8C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,164(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// bl 0x822a4ad0
	ctx.lr = 0x82285C98;
	sub_822A4AD0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x822824e0
	ctx.lr = 0x82285CA8;
	sub_822824E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a46a0
	ctx.lr = 0x82285CB0;
	sub_822A46A0(ctx, base);
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x82269050
	ctx.lr = 0x82285CBC;
	sub_82269050(ctx, base);
loc_82285CBC:
	// lwz r3,152(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
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

__attribute__((alias("__imp__sub_82285CD8"))) PPC_WEAK_FUNC(sub_82285CD8);
PPC_FUNC_IMPL(__imp__sub_82285CD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x82285CE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82285d5c
	if (!ctx.cr6.eq) goto loc_82285D5C;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x8229f890
	ctx.lr = 0x82285CFC;
	sub_8229F890(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r29,r30,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// lwz r3,428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// bl 0x82268f20
	ctx.lr = 0x82285D14;
	sub_82268F20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// bl 0x82285c30
	ctx.lr = 0x82285D24;
	sub_82285C30(ctx, base);
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blt cr6,0x82285d5c
	if (ctx.cr6.lt) goto loc_82285D5C;
	// li r10,4
	ctx.r10.s64 = 4;
	// add r11,r29,r3
	ctx.r11.u64 = ctx.r29.u64 + ctx.r3.u64;
loc_82285D40:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r8,156(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stwx r9,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82285d40
	if (!ctx.cr0.eq) goto loc_82285D40;
loc_82285D5C:
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82285D68"))) PPC_WEAK_FUNC(sub_82285D68);
PPC_FUNC_IMPL(__imp__sub_82285D68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x82285D70;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r29,r11,-26120
	ctx.r29.s64 = ctx.r11.s64 + -26120;
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,464(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 464);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82285D98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x8227d1c8
	ctx.lr = 0x82285DB0;
	sub_8227D1C8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82285de8
	if (ctx.cr6.eq) goto loc_82285DE8;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82285df0
	if (!ctx.cr6.eq) goto loc_82285DF0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,553
	ctx.r7.s64 = 553;
	// addi r6,r11,32400
	ctx.r6.s64 = ctx.r11.s64 + 32400;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,29152
	ctx.r5.s64 = ctx.r11.s64 + 29152;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x82285DE4;
	sub_821BBC58(ctx, base);
	// b 0x82285df0
	goto loc_82285DF0;
loc_82285DE8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822826f8
	ctx.lr = 0x82285DF0;
	sub_822826F8(ctx, base);
loc_82285DF0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82285DF8"))) PPC_WEAK_FUNC(sub_82285DF8);
PPC_FUNC_IMPL(__imp__sub_82285DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x82285E00;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r29,r11,-26120
	ctx.r29.s64 = ctx.r11.s64 + -26120;
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,464(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 464);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82285E28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x8227c2f8
	ctx.lr = 0x82285E40;
	sub_8227C2F8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82285e78
	if (ctx.cr6.eq) goto loc_82285E78;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82285ec8
	if (!ctx.cr6.eq) goto loc_82285EC8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,1013
	ctx.r7.s64 = 1013;
	// addi r6,r11,32400
	ctx.r6.s64 = ctx.r11.s64 + 32400;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,29152
	ctx.r5.s64 = ctx.r11.s64 + 29152;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x82285E74;
	sub_821BBC58(ctx, base);
	// b 0x82285ec8
	goto loc_82285EC8;
loc_82285E78:
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r29,r11,-26120
	ctx.r29.s64 = ctx.r11.s64 + -26120;
	// lwz r3,464(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 464);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82285E98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x8227c428
	ctx.lr = 0x82285EB0;
	sub_8227C428(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82285ec4
	if (!ctx.cr6.eq) goto loc_82285EC4;
	// bl 0x82282c88
	ctx.lr = 0x82285EC0;
	sub_82282C88(ctx, base);
	// b 0x82285ec8
	goto loc_82285EC8;
loc_82285EC4:
	// bl 0x82282dd8
	ctx.lr = 0x82285EC8;
	sub_82282DD8(ctx, base);
loc_82285EC8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82285ED0"))) PPC_WEAK_FUNC(sub_82285ED0);
PPC_FUNC_IMPL(__imp__sub_82285ED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98cc
	ctx.lr = 0x82285ED8;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822826b0
	ctx.lr = 0x82285EE4;
	sub_822826B0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r10,484(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// stw r5,484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 484, ctx.r5.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x82291b00
	ctx.lr = 0x82285F04;
	sub_82291B00(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r10,484(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// stw r5,484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 484, ctx.r5.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x82291b00
	ctx.lr = 0x82285F24;
	sub_82291B00(ctx, base);
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// bl 0x822a5528
	ctx.lr = 0x82285F2C;
	sub_822A5528(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// addi r24,r11,-10544
	ctx.r24.s64 = ctx.r11.s64 + -10544;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r23,r11,32400
	ctx.r23.s64 = ctx.r11.s64 + 32400;
	// beq cr6,0x82285f60
	if (ctx.cr6.eq) goto loc_82285F60;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r7,1083
	ctx.r7.s64 = 1083;
	// addi r5,r11,-32676
	ctx.r5.s64 = ctx.r11.s64 + -32676;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82285F60;
	sub_821BBC58(ctx, base);
loc_82285F60:
	// lwz r22,168(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r21,80(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r10,60(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 60);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_82285F7C:
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x82285f8c
	if (!ctx.cr6.gt) goto loc_82285F8C;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x82285f98
	goto loc_82285F98;
loc_82285F8C:
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
loc_82285F98:
	// clrlwi. r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82285fb0
	if (ctx.cr0.eq) goto loc_82285FB0;
	// mr r21,r9
	ctx.r21.u64 = ctx.r9.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x82285f7c
	goto loc_82285F7C;
loc_82285FB0:
	// li r3,135
	ctx.r3.s64 = 135;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x822a1f08
	ctx.lr = 0x82285FBC;
	sub_822A1F08(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822a2390
	ctx.lr = 0x82285FCC;
	sub_822A2390(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,168(r30)
	PPC_STORE_U32(ctx.r30.u32 + 168, ctx.r11.u32);
loc_82285FD8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82285FF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// blt cr6,0x82285fd8
	if (ctx.cr6.lt) goto loc_82285FD8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82282828
	ctx.lr = 0x82286010;
	sub_82282828(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,164
	ctx.r4.s64 = 164;
	// lwz r29,428(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82268f20
	ctx.lr = 0x82286024;
	sub_82268F20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// beq 0x82286050
	if (ctx.cr0.eq) goto loc_82286050;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822a6060
	ctx.lr = 0x82286048;
	sub_822A6060(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x82286054
	goto loc_82286054;
loc_82286050:
	// li r27,0
	ctx.r27.s64 = 0;
loc_82286054:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a1fb0
	ctx.lr = 0x8228605C;
	sub_822A1FB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82286080
	if (!ctx.cr0.eq) goto loc_82286080;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r7,1100
	ctx.r7.s64 = 1100;
	// addi r5,r11,-32332
	ctx.r5.s64 = ctx.r11.s64 + -32332;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82286080;
	sub_821BBC58(ctx, base);
loc_82286080:
	// li r3,105
	ctx.r3.s64 = 105;
	// lwz r28,144(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 144);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x822a1f08
	ctx.lr = 0x82286090;
	sub_822A1F08(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822a2390
	ctx.lr = 0x822860A0;
	sub_822A2390(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822860C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822860E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82286100;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82286120;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a2390
	ctx.lr = 0x82286130;
	sub_822A2390(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82286150;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82286170;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82268de8
	ctx.lr = 0x82286178;
	sub_82268DE8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r11.u32);
	// bl 0x82282828
	ctx.lr = 0x8228618C;
	sub_82282828(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a4f98
	ctx.lr = 0x82286198;
	sub_822A4F98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a1fb0
	ctx.lr = 0x822861A0;
	sub_822A1FB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r26,r11,-32352
	ctx.r26.s64 = ctx.r11.s64 + -32352;
	// bne 0x822861c8
	if (!ctx.cr0.eq) goto loc_822861C8;
	// li r7,1121
	ctx.r7.s64 = 1121;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x822861C8;
	sub_821BBC58(ctx, base);
loc_822861C8:
	// li r3,78
	ctx.r3.s64 = 78;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x822a1f08
	ctx.lr = 0x822861D4;
	sub_822A1F08(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,31
	ctx.r10.s64 = 31;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
	// stw r10,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r10.u32);
	// bl 0x822a2390
	ctx.lr = 0x822861F4;
	sub_822A2390(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82282828
	ctx.lr = 0x82286200;
	sub_82282828(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a4f98
	ctx.lr = 0x8228620C;
	sub_822A4F98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a1fb0
	ctx.lr = 0x82286214;
	sub_822A1FB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82286234
	if (!ctx.cr0.eq) goto loc_82286234;
	// li r7,1129
	ctx.r7.s64 = 1129;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82286234;
	sub_821BBC58(ctx, base);
loc_82286234:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// li r3,19
	ctx.r3.s64 = 19;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r29,32(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x822a1f08
	ctx.lr = 0x82286248;
	sub_822A1F08(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822a2390
	ctx.lr = 0x82286258;
	sub_822A2390(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82286278;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82286298;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822862B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822862D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a2390
	ctx.lr = 0x822862E8;
	sub_822A2390(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a2390
	ctx.lr = 0x822862F8;
	sub_822A2390(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
loc_822862FC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228631C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228633C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// blt cr6,0x822862fc
	if (ctx.cr6.lt) goto loc_822862FC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82282828
	ctx.lr = 0x82286354;
	sub_82282828(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a4f98
	ctx.lr = 0x82286360;
	sub_822A4F98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a1fb0
	ctx.lr = 0x82286368;
	sub_822A1FB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82286388
	if (!ctx.cr0.eq) goto loc_82286388;
	// li r7,1151
	ctx.r7.s64 = 1151;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82286388;
	sub_821BBC58(ctx, base);
loc_82286388:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,140
	ctx.r4.s64 = 140;
	// lwz r30,428(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82268f20
	ctx.lr = 0x8228639C;
	sub_82268F20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// beq 0x822863bc
	if (ctx.cr0.eq) goto loc_822863BC;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x822a51b8
	ctx.lr = 0x822863B4;
	sub_822A51B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x822863c0
	goto loc_822863C0;
loc_822863BC:
	// li r30,0
	ctx.r30.s64 = 0;
loc_822863C0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r30,148(r27)
	PPC_STORE_U32(ctx.r27.u32 + 148, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822a5958
	ctx.lr = 0x822863D0;
	sub_822A5958(ctx, base);
	// lwz r29,152(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 152);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822a5958
	ctx.lr = 0x822863E0;
	sub_822A5958(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a5958
	ctx.lr = 0x822863EC;
	sub_822A5958(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x822a5ee8
	ctx.lr = 0x82286400;
	sub_822A5EE8(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281ed8
	ctx.lr = 0x82286410;
	sub_82281ED8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281ed8
	ctx.lr = 0x82286420;
	sub_82281ED8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281ed8
	ctx.lr = 0x82286430;
	sub_82281ED8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281ed8
	ctx.lr = 0x82286440;
	sub_82281ED8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822e991c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82286448"))) PPC_WEAK_FUNC(sub_82286448);
PPC_FUNC_IMPL(__imp__sub_82286448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x82286450;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r29,r11,-26120
	ctx.r29.s64 = ctx.r11.s64 + -26120;
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r3,464(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82286478;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// bl 0x8227c2f8
	ctx.lr = 0x82286490;
	sub_8227C2F8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x822864c8
	if (ctx.cr6.eq) goto loc_822864C8;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82286544
	if (!ctx.cr6.eq) goto loc_82286544;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,1282
	ctx.r7.s64 = 1282;
	// addi r6,r11,32400
	ctx.r6.s64 = ctx.r11.s64 + 32400;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,29152
	ctx.r5.s64 = ctx.r11.s64 + 29152;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x822864C4;
	sub_821BBC58(ctx, base);
	// b 0x82286544
	goto loc_82286544;
loc_822864C8:
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82286534
	if (!ctx.cr6.gt) goto loc_82286534;
	// li r29,0
	ctx.r29.s64 = 0;
loc_822864E4:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822864fc
	if (!ctx.cr6.lt) goto loc_822864FC;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x82286504
	goto loc_82286504;
loc_822864FC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8229faf8
	ctx.lr = 0x82286504;
	sub_8229FAF8(ctx, base);
loc_82286504:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmpwi cr6,r11,23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 23, ctx.xer);
	// beq cr6,0x82286530
	if (ctx.cr6.eq) goto loc_82286530;
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822864e4
	if (ctx.cr6.lt) goto loc_822864E4;
	// b 0x82286534
	goto loc_82286534;
loc_82286530:
	// li r28,1
	ctx.r28.s64 = 1;
loc_82286534:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82286544
	if (!ctx.cr0.eq) goto loc_82286544;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82283570
	ctx.lr = 0x82286544;
	sub_82283570(ctx, base);
loc_82286544:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8228654C"))) PPC_WEAK_FUNC(sub_8228654C);
PPC_FUNC_IMPL(__imp__sub_8228654C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82286550"))) PPC_WEAK_FUNC(sub_82286550);
PPC_FUNC_IMPL(__imp__sub_82286550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x82286558;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r29,r11,-26120
	ctx.r29.s64 = ctx.r11.s64 + -26120;
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,464(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 464);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82286580;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x8227c6d8
	ctx.lr = 0x82286598;
	sub_8227C6D8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x822865d0
	if (ctx.cr6.eq) goto loc_822865D0;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x822865d8
	if (!ctx.cr6.eq) goto loc_822865D8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,1307
	ctx.r7.s64 = 1307;
	// addi r6,r11,32400
	ctx.r6.s64 = ctx.r11.s64 + 32400;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,29152
	ctx.r5.s64 = ctx.r11.s64 + 29152;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x822865CC;
	sub_821BBC58(ctx, base);
	// b 0x822865d8
	goto loc_822865D8;
loc_822865D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82282fc0
	ctx.lr = 0x822865D8;
	sub_82282FC0(ctx, base);
loc_822865D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822865E0"))) PPC_WEAK_FUNC(sub_822865E0);
PPC_FUNC_IMPL(__imp__sub_822865E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98c8
	ctx.lr = 0x822865E8;
	__savegprlr_20(ctx, base);
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,484(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// stw r5,484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 484, ctx.r5.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x82291b00
	ctx.lr = 0x82286610;
	sub_82291B00(ctx, base);
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r29,r11,-26120
	ctx.r29.s64 = ctx.r11.s64 + -26120;
	// lwz r3,464(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 464);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82286634;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x8227e790
	ctx.lr = 0x8228664C;
	sub_8227E790(ctx, base);
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r29,r11,-26120
	ctx.r29.s64 = ctx.r11.s64 + -26120;
	// lwz r3,464(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 464);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228666C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x8227ca28
	ctx.lr = 0x82286684;
	sub_8227CA28(ctx, base);
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r29,r11,-26120
	ctx.r29.s64 = ctx.r11.s64 + -26120;
	// lwz r3,464(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 464);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822866A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x8227cb40
	ctx.lr = 0x822866BC;
	sub_8227CB40(ctx, base);
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r29,r11,-26120
	ctx.r29.s64 = ctx.r11.s64 + -26120;
	// lwz r3,464(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 464);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822866DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x8227cc50
	ctx.lr = 0x822866F4;
	sub_8227CC50(ctx, base);
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// bl 0x822a5528
	ctx.lr = 0x822866FC;
	sub_822A5528(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// addi r23,r11,-10544
	ctx.r23.s64 = ctx.r11.s64 + -10544;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r22,r11,32400
	ctx.r22.s64 = ctx.r11.s64 + 32400;
	// beq cr6,0x82286730
	if (ctx.cr6.eq) goto loc_82286730;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r7,1505
	ctx.r7.s64 = 1505;
	// addi r5,r11,-32676
	ctx.r5.s64 = ctx.r11.s64 + -32676;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82286730;
	sub_821BBC58(ctx, base);
loc_82286730:
	// lwz r9,168(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r20,1
	ctx.r20.s64 = 1;
	// lwz r25,92(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// lwz r9,60(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
loc_82286754:
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x82286764
	if (!ctx.cr6.gt) goto loc_82286764;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// b 0x82286770
	goto loc_82286770;
loc_82286764:
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_82286770:
	// clrlwi. r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82286788
	if (ctx.cr0.eq) goto loc_82286788;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x82286754
	goto loc_82286754;
loc_82286788:
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r28,r11,-26120
	ctx.r28.s64 = ctx.r11.s64 + -26120;
	// lwz r3,464(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 464);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822867A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x8227cd68
	ctx.lr = 0x822867C0;
	sub_8227CD68(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r21,r11,-32352
	ctx.r21.s64 = ctx.r11.s64 + -32352;
	// bne 0x82286850
	if (!ctx.cr0.eq) goto loc_82286850;
	// li r3,105
	ctx.r3.s64 = 105;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x822a1f08
	ctx.lr = 0x822867DC;
	sub_822A1F08(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822a2390
	ctx.lr = 0x822867EC;
	sub_822A2390(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r9,23
	ctx.r9.s64 = 23;
	// stw r29,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r29.u32);
	// addi r11,r11,32360
	ctx.r11.s64 = ctx.r11.s64 + 32360;
	// stw r9,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r9.u32);
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r10.u32);
	// stw r11,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r11.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82268e50
	ctx.lr = 0x82286818;
	sub_82268E50(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r11.u32);
	// bl 0x82282828
	ctx.lr = 0x8228682C;
	sub_82282828(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822a4f98
	ctx.lr = 0x82286838;
	sub_822A4F98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a1fb0
	ctx.lr = 0x82286840;
	sub_822A1FB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82286db4
	if (!ctx.cr0.eq) goto loc_82286DB4;
	// li r7,1527
	ctx.r7.s64 = 1527;
	// b 0x82286ab8
	goto loc_82286AB8;
loc_82286850:
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r28,r11,-26120
	ctx.r28.s64 = ctx.r11.s64 + -26120;
	// lwz r3,464(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 464);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82286870;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x8227ce80
	ctx.lr = 0x82286888;
	sub_8227CE80(ctx, base);
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r27,r11,-26120
	ctx.r27.s64 = ctx.r11.s64 + -26120;
	// lwz r3,464(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 464);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822868AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x8227cf98
	ctx.lr = 0x822868C4;
	sub_8227CF98(ctx, base);
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r26,r11,-26120
	ctx.r26.s64 = ctx.r11.s64 + -26120;
	// lwz r3,464(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 464);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822868E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x8227d0b0
	ctx.lr = 0x82286900;
	sub_8227D0B0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x82286ad0
	if (!ctx.cr6.eq) goto loc_82286AD0;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r6,r11,-26120
	ctx.r6.s64 = ctx.r11.s64 + -26120;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82280108
	ctx.lr = 0x82286928;
	sub_82280108(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// addi r30,r11,-32516
	ctx.r30.s64 = ctx.r11.s64 + -32516;
	// beq cr6,0x82286950
	if (ctx.cr6.eq) goto loc_82286950;
	// li r7,1554
	ctx.r7.s64 = 1554;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82286950;
	sub_821BBC58(ctx, base);
loc_82286950:
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r6,r11,-26120
	ctx.r6.s64 = ctx.r11.s64 + -26120;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822801a8
	ctx.lr = 0x8228696C;
	sub_822801A8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8228698c
	if (ctx.cr6.eq) goto loc_8228698C;
	// li r7,1558
	ctx.r7.s64 = 1558;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x8228698C;
	sub_821BBC58(ctx, base);
loc_8228698C:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// li r3,18
	ctx.r3.s64 = 18;
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lfs f0,9580(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9580);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// bl 0x822a1f08
	ctx.lr = 0x822869B0;
	sub_822A1F08(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822a2390
	ctx.lr = 0x822869C0;
	sub_822A2390(ctx, base);
	// lfs f4,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x822a2f98
	ctx.lr = 0x822869E0;
	sub_822A2F98(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,23
	ctx.r10.s64 = 23;
	// stw r29,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r29.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r20,154(r30)
	PPC_STORE_U8(ctx.r30.u32 + 154, ctx.r20.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,32360(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32360);
	// stw r10,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r10.u32);
	// stw r11,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r11.u32);
	// bl 0x82282828
	ctx.lr = 0x82286A08;
	sub_82282828(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822a4f98
	ctx.lr = 0x82286A14;
	sub_822A4F98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a1fb0
	ctx.lr = 0x82286A1C;
	sub_822A1FB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82286a3c
	if (!ctx.cr0.eq) goto loc_82286A3C;
	// li r7,1570
	ctx.r7.s64 = 1570;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82286A3C;
	sub_821BBC58(ctx, base);
loc_82286A3C:
	// li r3,19
	ctx.r3.s64 = 19;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x822a1f08
	ctx.lr = 0x82286A48;
	sub_822A1F08(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822a2390
	ctx.lr = 0x82286A58;
	sub_822A2390(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r20,164(r30)
	PPC_STORE_U8(ctx.r30.u32 + 164, ctx.r20.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a2390
	ctx.lr = 0x82286A6C;
	sub_822A2390(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822a2f98
	ctx.lr = 0x82286A8C;
	sub_822A2F98(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82282828
	ctx.lr = 0x82286A98;
	sub_82282828(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822a4f98
	ctx.lr = 0x82286AA4;
	sub_822A4F98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a1fb0
	ctx.lr = 0x82286AAC;
	sub_822A1FB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82286db4
	if (!ctx.cr0.eq) goto loc_82286DB4;
	// li r7,1579
	ctx.r7.s64 = 1579;
loc_82286AB8:
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82286ACC;
	sub_821BBC58(ctx, base);
	// b 0x82286db4
	goto loc_82286DB4;
loc_82286AD0:
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// beq cr6,0x82286ae0
	if (ctx.cr6.eq) goto loc_82286AE0;
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// bne cr6,0x82286db0
	if (!ctx.cr6.eq) goto loc_82286DB0;
loc_82286AE0:
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r6,r11,-26120
	ctx.r6.s64 = ctx.r11.s64 + -26120;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82280248
	ctx.lr = 0x82286AFC;
	sub_82280248(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82286b20
	if (ctx.cr6.eq) goto loc_82286B20;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r7,1588
	ctx.r7.s64 = 1588;
	// addi r5,r11,-32516
	ctx.r5.s64 = ctx.r11.s64 + -32516;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82286B20;
	sub_821BBC58(ctx, base);
loc_82286B20:
	// li r3,19
	ctx.r3.s64 = 19;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x822a1f08
	ctx.lr = 0x82286B2C;
	sub_822A1F08(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822a2390
	ctx.lr = 0x82286B3C;
	sub_822A2390(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,23
	ctx.r10.s64 = 23;
	// stw r29,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r29.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,32360(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32360);
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// stw r11,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r11.u32);
	// lfs f4,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x822a2f98
	ctx.lr = 0x82286B74;
	sub_822A2F98(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82282828
	ctx.lr = 0x82286B80;
	sub_82282828(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822a4f98
	ctx.lr = 0x82286B8C;
	sub_822A4F98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a1fb0
	ctx.lr = 0x82286B94;
	sub_822A1FB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82286bb4
	if (!ctx.cr0.eq) goto loc_82286BB4;
	// li r7,1596
	ctx.r7.s64 = 1596;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82286BB4;
	sub_821BBC58(ctx, base);
loc_82286BB4:
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// bne cr6,0x82286c38
	if (!ctx.cr6.eq) goto loc_82286C38;
	// li r3,19
	ctx.r3.s64 = 19;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x822a1f08
	ctx.lr = 0x82286BC8;
	sub_822A1F08(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822a2390
	ctx.lr = 0x82286BD8;
	sub_822A2390(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a2390
	ctx.lr = 0x82286BE8;
	sub_822A2390(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a2390
	ctx.lr = 0x82286BF8;
	sub_822A2390(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82282828
	ctx.lr = 0x82286C04;
	sub_82282828(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822a4f98
	ctx.lr = 0x82286C10;
	sub_822A4F98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a1fb0
	ctx.lr = 0x82286C18;
	sub_822A1FB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82286c38
	if (!ctx.cr0.eq) goto loc_82286C38;
	// li r7,1605
	ctx.r7.s64 = 1605;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82286C38;
	sub_821BBC58(ctx, base);
loc_82286C38:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfd f1,-32288(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + -32288);
	// bl 0x822ed2b0
	ctx.lr = 0x82286C44;
	sub_822ED2B0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lfd f1,-28440(r11)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + -28440);
	// bl 0x822ed2b0
	ctx.lr = 0x82286C54;
	sub_822ED2B0(ctx, base);
	// fdiv f0,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64 / ctx.f1.f64;
	// li r3,19
	ctx.r3.s64 = 19;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// frsp f31,f0
	ctx.f31.f64 = double(float(ctx.f0.f64));
	// bl 0x822a1f08
	ctx.lr = 0x82286C68;
	sub_822A1F08(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822a2390
	ctx.lr = 0x82286C78;
	sub_822A2390(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a2390
	ctx.lr = 0x82286C88;
	sub_822A2390(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822a2f98
	ctx.lr = 0x82286CA8;
	sub_822A2F98(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82282828
	ctx.lr = 0x82286CB4;
	sub_82282828(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822a4f98
	ctx.lr = 0x82286CC0;
	sub_822A4F98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a1fb0
	ctx.lr = 0x82286CC8;
	sub_822A1FB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82286ce8
	if (!ctx.cr0.eq) goto loc_82286CE8;
	// li r7,1634
	ctx.r7.s64 = 1634;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82286CE8;
	sub_821BBC58(ctx, base);
loc_82286CE8:
	// li r3,55
	ctx.r3.s64 = 55;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x822a1f08
	ctx.lr = 0x82286CF4;
	sub_822A1F08(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822a2390
	ctx.lr = 0x82286D04;
	sub_822A2390(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a2390
	ctx.lr = 0x82286D14;
	sub_822A2390(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82282828
	ctx.lr = 0x82286D20;
	sub_82282828(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822a4f98
	ctx.lr = 0x82286D2C;
	sub_822A4F98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a1fb0
	ctx.lr = 0x82286D34;
	sub_822A1FB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82286d54
	if (!ctx.cr0.eq) goto loc_82286D54;
	// li r7,1642
	ctx.r7.s64 = 1642;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82286D54;
	sub_821BBC58(ctx, base);
loc_82286D54:
	// li r3,64
	ctx.r3.s64 = 64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x822a1f08
	ctx.lr = 0x82286D60;
	sub_822A1F08(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822a2390
	ctx.lr = 0x82286D70;
	sub_822A2390(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a2390
	ctx.lr = 0x82286D80;
	sub_822A2390(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82282828
	ctx.lr = 0x82286D8C;
	sub_82282828(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822a4f98
	ctx.lr = 0x82286D98;
	sub_822A4F98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a1fb0
	ctx.lr = 0x82286DA0;
	sub_822A1FB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82286db4
	if (!ctx.cr0.eq) goto loc_82286DB4;
	// li r7,1649
	ctx.r7.s64 = 1649;
	// b 0x82286ab8
	goto loc_82286AB8;
loc_82286DB0:
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82286DB4:
	// lwz r28,12(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r27,r11,-26120
	ctx.r27.s64 = ctx.r11.s64 + -26120;
	// lwz r3,464(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 464);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82286DD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// bl 0x8227c428
	ctx.lr = 0x82286DEC;
	sub_8227C428(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82286ee4
	if (!ctx.cr6.eq) goto loc_82286EE4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r28,428(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r26,28(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r27,32(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x82268f20
	ctx.lr = 0x82286E14;
	sub_82268F20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// beq 0x82286e30
	if (ctx.cr0.eq) goto loc_82286E30;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x822a3860
	ctx.lr = 0x82286E2C;
	sub_822A3860(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82286E30:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a2390
	ctx.lr = 0x82286E40;
	sub_822A2390(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a2390
	ctx.lr = 0x82286E50;
	sub_822A2390(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a2390
	ctx.lr = 0x82286E60;
	sub_822A2390(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x822a07f8
	ctx.lr = 0x82286E70;
	sub_822A07F8(ctx, base);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x822a28e0
	ctx.lr = 0x82286E78;
	sub_822A28E0(ctx, base);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82286E8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82282828
	ctx.lr = 0x82286E98;
	sub_82282828(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// bl 0x822a4f98
	ctx.lr = 0x82286EA4;
	sub_822A4F98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a1fb0
	ctx.lr = 0x82286EAC;
	sub_822A1FB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82286ecc
	if (!ctx.cr0.eq) goto loc_82286ECC;
	// li r7,1672
	ctx.r7.s64 = 1672;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82286ECC;
	sub_821BBC58(ctx, base);
loc_82286ECC:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stw r29,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r29.u32);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8229faf8
	ctx.lr = 0x82286EDC;
	sub_8229FAF8(ctx, base);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// b 0x822870d8
	goto loc_822870D8;
loc_82286EE4:
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r6,r11,-26120
	ctx.r6.s64 = ctx.r11.s64 + -26120;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8227f660
	ctx.lr = 0x82286F00;
	sub_8227F660(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r6,r11,-26120
	ctx.r6.s64 = ctx.r11.s64 + -26120;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8227f700
	ctx.lr = 0x82286F1C;
	sub_8227F700(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r6,r11,-26120
	ctx.r6.s64 = ctx.r11.s64 + -26120;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8227f7a0
	ctx.lr = 0x82286F38;
	sub_8227F7A0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r6,r11,-26120
	ctx.r6.s64 = ctx.r11.s64 + -26120;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8227f840
	ctx.lr = 0x82286F54;
	sub_8227F840(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// li r3,18
	ctx.r3.s64 = 18;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r29,32(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x822a4378
	ctx.lr = 0x82286F68;
	sub_822A4378(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822a2390
	ctx.lr = 0x82286F78;
	sub_822A2390(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a2390
	ctx.lr = 0x82286F88;
	sub_822A2390(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f4,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f3,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822a2f98
	ctx.lr = 0x82286FA8;
	sub_822A2F98(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82286FC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r20,154(r30)
	PPC_STORE_U8(ctx.r30.u32 + 154, ctx.r20.u8);
	// bl 0x82282828
	ctx.lr = 0x82286FD8;
	sub_82282828(ctx, base);
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,948(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 948);
	// bl 0x822a5088
	ctx.lr = 0x82286FE8;
	sub_822A5088(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a1fb0
	ctx.lr = 0x82286FF0;
	sub_822A1FB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82287014
	if (!ctx.cr0.eq) goto loc_82287014;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r7,1706
	ctx.r7.s64 = 1706;
	// addi r5,r11,-32692
	ctx.r5.s64 = ctx.r11.s64 + -32692;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82287014;
	sub_821BBC58(ctx, base);
loc_82287014:
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x822a43e8
	ctx.lr = 0x82287020;
	sub_822A43E8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822a2390
	ctx.lr = 0x82287030;
	sub_822A2390(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a2390
	ctx.lr = 0x82287040;
	sub_822A2390(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a2390
	ctx.lr = 0x82287050;
	sub_822A2390(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f4,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f3,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822a2f98
	ctx.lr = 0x82287070;
	sub_822A2F98(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82287090;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82282828
	ctx.lr = 0x8228709C;
	sub_82282828(ctx, base);
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,948(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 948);
	// bl 0x822a5088
	ctx.lr = 0x822870AC;
	sub_822A5088(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a1fb0
	ctx.lr = 0x822870B4;
	sub_822A1FB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822870d8
	if (!ctx.cr0.eq) goto loc_822870D8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r7,1720
	ctx.r7.s64 = 1720;
	// addi r5,r11,-32312
	ctx.r5.s64 = ctx.r11.s64 + -32312;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x822870D8;
	sub_821BBC58(ctx, base);
loc_822870D8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x822e9918
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822870E4"))) PPC_WEAK_FUNC(sub_822870E4);
PPC_FUNC_IMPL(__imp__sub_822870E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822870E8"))) PPC_WEAK_FUNC(sub_822870E8);
PPC_FUNC_IMPL(__imp__sub_822870E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98c0
	ctx.lr = 0x822870F0;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822826b0
	ctx.lr = 0x822870FC;
	sub_822826B0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lwz r10,484(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// stw r5,484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 484, ctx.r5.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x82291b00
	ctx.lr = 0x8228711C;
	sub_82291B00(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// lwz r10,484(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// stw r5,484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 484, ctx.r5.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x82291b00
	ctx.lr = 0x8228713C;
	sub_82291B00(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// bl 0x822a5528
	ctx.lr = 0x82287148;
	sub_822A5528(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// addi r22,r11,-10544
	ctx.r22.s64 = ctx.r11.s64 + -10544;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r21,r11,32400
	ctx.r21.s64 = ctx.r11.s64 + 32400;
	// beq cr6,0x8228717c
	if (ctx.cr6.eq) goto loc_8228717C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r7,1765
	ctx.r7.s64 = 1765;
	// addi r5,r11,-32676
	ctx.r5.s64 = ctx.r11.s64 + -32676;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x8228717C;
	sub_821BBC58(ctx, base);
loc_8228717C:
	// lwz r18,168(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// li r25,1
	ctx.r25.s64 = 1;
	// lwz r19,80(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// lwz r10,60(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 60);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_8228719C:
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x822871ac
	if (!ctx.cr6.gt) goto loc_822871AC;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x822871b8
	goto loc_822871B8;
loc_822871AC:
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
loc_822871B8:
	// clrlwi. r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x822871d0
	if (ctx.cr0.eq) goto loc_822871D0;
	// mr r19,r9
	ctx.r19.u64 = ctx.r9.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x8228719c
	goto loc_8228719C;
loc_822871D0:
	// li r3,64
	ctx.r3.s64 = 64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x822a1f08
	ctx.lr = 0x822871DC;
	sub_822A1F08(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822a2390
	ctx.lr = 0x822871EC;
	sub_822A2390(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// stb r25,164(r30)
	PPC_STORE_U8(ctx.r30.u32 + 164, ctx.r25.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,32348(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32348);
	// stw r11,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r11.u32);
	// bl 0x822a2390
	ctx.lr = 0x8228720C;
	sub_822A2390(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
loc_82287210:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82287230;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// blt cr6,0x82287210
	if (ctx.cr6.lt) goto loc_82287210;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82282828
	ctx.lr = 0x82287248;
	sub_82282828(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x822a4f98
	ctx.lr = 0x82287254;
	sub_822A4F98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a1fb0
	ctx.lr = 0x8228725C;
	sub_822A1FB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r24,r11,-32352
	ctx.r24.s64 = ctx.r11.s64 + -32352;
	// bne 0x82287284
	if (!ctx.cr0.eq) goto loc_82287284;
	// li r7,1783
	ctx.r7.s64 = 1783;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82287284;
	sub_821BBC58(ctx, base);
loc_82287284:
	// li r3,135
	ctx.r3.s64 = 135;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x822a1f08
	ctx.lr = 0x82287290;
	sub_822A1F08(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822a2390
	ctx.lr = 0x822872A0;
	sub_822A2390(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,164
	ctx.r4.s64 = 164;
	// stw r11,168(r30)
	PPC_STORE_U32(ctx.r30.u32 + 168, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r29,428(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82268f20
	ctx.lr = 0x822872BC;
	sub_82268F20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// beq 0x822872e8
	if (ctx.cr0.eq) goto loc_822872E8;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822a6060
	ctx.lr = 0x822872E0;
	sub_822A6060(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x822872ec
	goto loc_822872EC;
loc_822872E8:
	// li r27,0
	ctx.r27.s64 = 0;
loc_822872EC:
	// li r29,0
	ctx.r29.s64 = 0;
loc_822872F0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82287310;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// blt cr6,0x822872f0
	if (ctx.cr6.lt) goto loc_822872F0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82282828
	ctx.lr = 0x82287328;
	sub_82282828(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a1fb0
	ctx.lr = 0x82287330;
	sub_822A1FB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82287354
	if (!ctx.cr0.eq) goto loc_82287354;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r7,1794
	ctx.r7.s64 = 1794;
	// addi r5,r11,-32280
	ctx.r5.s64 = ctx.r11.s64 + -32280;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82287354;
	sub_821BBC58(ctx, base);
loc_82287354:
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r28,144(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 144);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x822a1f08
	ctx.lr = 0x82287364;
	sub_822A1F08(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822a2390
	ctx.lr = 0x82287374;
	sub_822A2390(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82287394;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822873B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822873D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822873F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r25,159(r30)
	PPC_STORE_U8(ctx.r30.u32 + 159, ctx.r25.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a2390
	ctx.lr = 0x82287408;
	sub_822A2390(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82287428;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82287448;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82282828
	ctx.lr = 0x82287454;
	sub_82282828(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a4f98
	ctx.lr = 0x82287460;
	sub_822A4F98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a1fb0
	ctx.lr = 0x82287468;
	sub_822A1FB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82287488
	if (!ctx.cr0.eq) goto loc_82287488;
	// li r7,1810
	ctx.r7.s64 = 1810;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82287488;
	sub_821BBC58(ctx, base);
loc_82287488:
	// li r3,105
	ctx.r3.s64 = 105;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x822a1f08
	ctx.lr = 0x82287494;
	sub_822A1F08(ctx, base);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822a2390
	ctx.lr = 0x822874A4;
	sub_822A2390(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822874C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822874E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82287504;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82287524;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a2390
	ctx.lr = 0x82287534;
	sub_822A2390(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82268eb8
	ctx.lr = 0x8228753C;
	sub_82268EB8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r11.u32);
	// bl 0x82282828
	ctx.lr = 0x82287550;
	sub_82282828(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a4f98
	ctx.lr = 0x8228755C;
	sub_822A4F98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a1fb0
	ctx.lr = 0x82287564;
	sub_822A1FB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82287584
	if (!ctx.cr0.eq) goto loc_82287584;
	// li r7,1825
	ctx.r7.s64 = 1825;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82287584;
	sub_821BBC58(ctx, base);
loc_82287584:
	// li r3,78
	ctx.r3.s64 = 78;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x822a1f08
	ctx.lr = 0x82287590;
	sub_822A1F08(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,31
	ctx.r10.s64 = 31;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
	// stw r10,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r10.u32);
	// bl 0x822a2390
	ctx.lr = 0x822875B0;
	sub_822A2390(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82282828
	ctx.lr = 0x822875BC;
	sub_82282828(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a4f98
	ctx.lr = 0x822875C8;
	sub_822A4F98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a1fb0
	ctx.lr = 0x822875D0;
	sub_822A1FB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822875f0
	if (!ctx.cr0.eq) goto loc_822875F0;
	// li r7,1833
	ctx.r7.s64 = 1833;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x822875F0;
	sub_821BBC58(ctx, base);
loc_822875F0:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// li r3,19
	ctx.r3.s64 = 19;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r29,32(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x822a1f08
	ctx.lr = 0x82287604;
	sub_822A1F08(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822a2390
	ctx.lr = 0x82287614;
	sub_822A2390(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82287634;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82287654;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82287674;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82287694;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a2390
	ctx.lr = 0x822876A4;
	sub_822A2390(ctx, base);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a2390
	ctx.lr = 0x822876B4;
	sub_822A2390(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
loc_822876B8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822876D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822876F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// blt cr6,0x822876b8
	if (ctx.cr6.lt) goto loc_822876B8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82282828
	ctx.lr = 0x82287710;
	sub_82282828(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a4f98
	ctx.lr = 0x8228771C;
	sub_822A4F98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a1fb0
	ctx.lr = 0x82287724;
	sub_822A1FB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82287744
	if (!ctx.cr0.eq) goto loc_82287744;
	// li r7,1856
	ctx.r7.s64 = 1856;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82287744;
	sub_821BBC58(ctx, base);
loc_82287744:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,140
	ctx.r4.s64 = 140;
	// lwz r30,428(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82268f20
	ctx.lr = 0x82287758;
	sub_82268F20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// beq 0x82287778
	if (ctx.cr0.eq) goto loc_82287778;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x822a51b8
	ctx.lr = 0x82287770;
	sub_822A51B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8228777c
	goto loc_8228777C;
loc_82287778:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8228777C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r30,148(r27)
	PPC_STORE_U32(ctx.r27.u32 + 148, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822a5958
	ctx.lr = 0x8228778C;
	sub_822A5958(ctx, base);
	// lwz r29,152(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 152);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822a5958
	ctx.lr = 0x8228779C;
	sub_822A5958(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a5958
	ctx.lr = 0x822877A8;
	sub_822A5958(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x822a5ee8
	ctx.lr = 0x822877BC;
	sub_822A5EE8(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281ed8
	ctx.lr = 0x822877CC;
	sub_82281ED8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281ed8
	ctx.lr = 0x822877DC;
	sub_82281ED8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281ed8
	ctx.lr = 0x822877EC;
	sub_82281ED8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281ed8
	ctx.lr = 0x822877FC;
	sub_82281ED8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822e9910
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82287804"))) PPC_WEAK_FUNC(sub_82287804);
PPC_FUNC_IMPL(__imp__sub_82287804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82287808"))) PPC_WEAK_FUNC(sub_82287808);
PPC_FUNC_IMPL(__imp__sub_82287808) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98c0
	ctx.lr = 0x82287810;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822826b0
	ctx.lr = 0x8228781C;
	sub_822826B0(ctx, base);
	// li r25,1
	ctx.r25.s64 = 1;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stb r25,2073(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2073, ctx.r25.u8);
	// lwz r10,484(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// stw r5,484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 484, ctx.r5.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x82291b00
	ctx.lr = 0x82287844;
	sub_82291B00(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// lwz r10,484(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// stw r5,484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 484, ctx.r5.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x82291b00
	ctx.lr = 0x82287864;
	sub_82291B00(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// bl 0x822a5528
	ctx.lr = 0x82287870;
	sub_822A5528(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// addi r22,r11,-10544
	ctx.r22.s64 = ctx.r11.s64 + -10544;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r21,r11,32400
	ctx.r21.s64 = ctx.r11.s64 + 32400;
	// beq cr6,0x822878a4
	if (ctx.cr6.eq) goto loc_822878A4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r7,2205
	ctx.r7.s64 = 2205;
	// addi r5,r11,-32676
	ctx.r5.s64 = ctx.r11.s64 + -32676;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x822878A4;
	sub_821BBC58(ctx, base);
loc_822878A4:
	// lwz r18,168(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r20,84(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// lwz r10,60(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 60);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_822878C0:
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x822878d0
	if (!ctx.cr6.gt) goto loc_822878D0;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x822878dc
	goto loc_822878DC;
loc_822878D0:
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
loc_822878DC:
	// clrlwi. r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x822878f4
	if (ctx.cr0.eq) goto loc_822878F4;
	// mr r20,r9
	ctx.r20.u64 = ctx.r9.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x822878c0
	goto loc_822878C0;
loc_822878F4:
	// li r3,64
	ctx.r3.s64 = 64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x822a1f08
	ctx.lr = 0x82287900;
	sub_822A1F08(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822a2390
	ctx.lr = 0x82287910;
	sub_822A2390(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82287930;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82287950;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82287970;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82287990;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a2390
	ctx.lr = 0x822879A0;
	sub_822A2390(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
loc_822879A4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822879C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// blt cr6,0x822879a4
	if (ctx.cr6.lt) goto loc_822879A4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r25,164(r30)
	PPC_STORE_U8(ctx.r30.u32 + 164, ctx.r25.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82282828
	ctx.lr = 0x822879E0;
	sub_82282828(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x822a4f98
	ctx.lr = 0x822879EC;
	sub_822A4F98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a1fb0
	ctx.lr = 0x822879F4;
	sub_822A1FB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82287a18
	if (!ctx.cr0.eq) goto loc_82287A18;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r7,2226
	ctx.r7.s64 = 2226;
	// addi r5,r11,-32196
	ctx.r5.s64 = ctx.r11.s64 + -32196;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82287A18;
	sub_821BBC58(ctx, base);
loc_82287A18:
	// li r3,36
	ctx.r3.s64 = 36;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x822a1f08
	ctx.lr = 0x82287A24;
	sub_822A1F08(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822a2390
	ctx.lr = 0x82287A34;
	sub_822A2390(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82287A54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82287A74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82287A94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82287AB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a2390
	ctx.lr = 0x82287AC4;
	sub_822A2390(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a2390
	ctx.lr = 0x82287AD4;
	sub_822A2390(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a2390
	ctx.lr = 0x82287AE4;
	sub_822A2390(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
loc_82287AE8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82287B08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82287B28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82287B48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// blt cr6,0x82287ae8
	if (ctx.cr6.lt) goto loc_82287AE8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82282828
	ctx.lr = 0x82287B60;
	sub_82282828(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x822a4f98
	ctx.lr = 0x82287B6C;
	sub_822A4F98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a1fb0
	ctx.lr = 0x82287B74;
	sub_822A1FB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82287b98
	if (!ctx.cr0.eq) goto loc_82287B98;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r7,2245
	ctx.r7.s64 = 2245;
	// addi r5,r11,-32216
	ctx.r5.s64 = ctx.r11.s64 + -32216;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82287B98;
	sub_821BBC58(ctx, base);
loc_82287B98:
	// li r3,135
	ctx.r3.s64 = 135;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x822a1f08
	ctx.lr = 0x82287BA4;
	sub_822A1F08(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822a2390
	ctx.lr = 0x82287BB4;
	sub_822A2390(ctx, base);
	// li r23,2
	ctx.r23.s64 = 2;
	// li r4,164
	ctx.r4.s64 = 164;
	// stw r23,168(r30)
	PPC_STORE_U32(ctx.r30.u32 + 168, ctx.r23.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r29,428(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82268f20
	ctx.lr = 0x82287BD0;
	sub_82268F20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// beq 0x82287bfc
	if (ctx.cr0.eq) goto loc_82287BFC;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822a6060
	ctx.lr = 0x82287BF4;
	sub_822A6060(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// b 0x82287c00
	goto loc_82287C00;
loc_82287BFC:
	// li r26,0
	ctx.r26.s64 = 0;
loc_82287C00:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82287C04:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82287C24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// blt cr6,0x82287c04
	if (ctx.cr6.lt) goto loc_82287C04;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82282828
	ctx.lr = 0x82287C3C;
	sub_82282828(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a1fb0
	ctx.lr = 0x82287C44;
	sub_822A1FB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82287c68
	if (!ctx.cr0.eq) goto loc_82287C68;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r7,2256
	ctx.r7.s64 = 2256;
	// addi r5,r11,-32332
	ctx.r5.s64 = ctx.r11.s64 + -32332;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82287C68;
	sub_821BBC58(ctx, base);
loc_82287C68:
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r28,144(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 144);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x822a1f08
	ctx.lr = 0x82287C78;
	sub_822A1F08(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822a2390
	ctx.lr = 0x82287C88;
	sub_822A2390(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a2390
	ctx.lr = 0x82287C98;
	sub_822A2390(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r25,159(r30)
	PPC_STORE_U8(ctx.r30.u32 + 159, ctx.r25.u8);
	// bl 0x82282828
	ctx.lr = 0x82287CA8;
	sub_82282828(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a4f98
	ctx.lr = 0x82287CB4;
	sub_822A4F98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a1fb0
	ctx.lr = 0x82287CBC;
	sub_822A1FB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82287ce0
	if (!ctx.cr0.eq) goto loc_82287CE0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r7,2266
	ctx.r7.s64 = 2266;
	// addi r5,r11,-32768
	ctx.r5.s64 = ctx.r11.s64 + -32768;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82287CE0;
	sub_821BBC58(ctx, base);
loc_82287CE0:
	// li r3,18
	ctx.r3.s64 = 18;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x822a1f08
	ctx.lr = 0x82287CEC;
	sub_822A1F08(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822a2390
	ctx.lr = 0x82287CFC;
	sub_822A2390(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82287D1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82287D3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82287D5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82287D7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a2390
	ctx.lr = 0x82287D8C;
	sub_822A2390(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r25,153(r30)
	PPC_STORE_U8(ctx.r30.u32 + 153, ctx.r25.u8);
	// addi r6,r11,-26120
	ctx.r6.s64 = ctx.r11.s64 + -26120;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8227f540
	ctx.lr = 0x82287DAC;
	sub_8227F540(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r6,r11,-26120
	ctx.r6.s64 = ctx.r11.s64 + -26120;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8227f558
	ctx.lr = 0x82287DC8;
	sub_8227F558(ctx, base);
	// lfs f4,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f3.f64 = double(temp.f32);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// bl 0x822a2f98
	ctx.lr = 0x82287DE8;
	sub_822A2F98(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82282828
	ctx.lr = 0x82287DF4;
	sub_82282828(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a4f98
	ctx.lr = 0x82287E00;
	sub_822A4F98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a1fb0
	ctx.lr = 0x82287E08;
	sub_822A1FB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82287e2c
	if (!ctx.cr0.eq) goto loc_82287E2C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r7,2291
	ctx.r7.s64 = 2291;
	// addi r5,r11,-32692
	ctx.r5.s64 = ctx.r11.s64 + -32692;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82287E2C;
	sub_821BBC58(ctx, base);
loc_82287E2C:
	// li r3,19
	ctx.r3.s64 = 19;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x822a1f08
	ctx.lr = 0x82287E38;
	sub_822A1F08(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822a2390
	ctx.lr = 0x82287E48;
	sub_822A2390(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82287E68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82287E88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82287EA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82287EC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a2390
	ctx.lr = 0x82287ED8;
	sub_822A2390(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,2
	ctx.r5.s64 = 2;
	// stb r25,159(r30)
	PPC_STORE_U8(ctx.r30.u32 + 159, ctx.r25.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f4,-8556(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8556);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x822a2f98
	ctx.lr = 0x82287F00;
	sub_822A2F98(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82282828
	ctx.lr = 0x82287F0C;
	sub_82282828(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a4f98
	ctx.lr = 0x82287F18;
	sub_822A4F98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a1fb0
	ctx.lr = 0x82287F20;
	sub_822A1FB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82287f44
	if (!ctx.cr0.eq) goto loc_82287F44;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r7,2305
	ctx.r7.s64 = 2305;
	// addi r5,r11,-32708
	ctx.r5.s64 = ctx.r11.s64 + -32708;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82287F44;
	sub_821BBC58(ctx, base);
loc_82287F44:
	// li r3,105
	ctx.r3.s64 = 105;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x822a1f08
	ctx.lr = 0x82287F50;
	sub_822A1F08(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822a2390
	ctx.lr = 0x82287F60;
	sub_822A2390(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82287F80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82287FA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82287FC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82287FE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a2390
	ctx.lr = 0x82287FF0;
	sub_822A2390(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82268fe8
	ctx.lr = 0x82287FF8;
	sub_82268FE8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r11.u32);
	// bl 0x82282828
	ctx.lr = 0x8228800C;
	sub_82282828(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a4f98
	ctx.lr = 0x82288018;
	sub_822A4F98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a1fb0
	ctx.lr = 0x82288020;
	sub_822A1FB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82288044
	if (!ctx.cr0.eq) goto loc_82288044;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r7,2318
	ctx.r7.s64 = 2318;
	// addi r5,r11,-32236
	ctx.r5.s64 = ctx.r11.s64 + -32236;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82288044;
	sub_821BBC58(ctx, base);
loc_82288044:
	// li r3,78
	ctx.r3.s64 = 78;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x822a1f08
	ctx.lr = 0x82288050;
	sub_822A1F08(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r11,31
	ctx.r11.s64 = 31;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r23,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r23.u32);
	// stw r11,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r11.u32);
loc_82288064:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82288084;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// blt cr6,0x82288064
	if (ctx.cr6.lt) goto loc_82288064;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a2390
	ctx.lr = 0x822880A0;
	sub_822A2390(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82282828
	ctx.lr = 0x822880AC;
	sub_82282828(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a4f98
	ctx.lr = 0x822880B8;
	sub_822A4F98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a1fb0
	ctx.lr = 0x822880C0;
	sub_822A1FB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822880e4
	if (!ctx.cr0.eq) goto loc_822880E4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r7,2329
	ctx.r7.s64 = 2329;
	// addi r5,r11,-32256
	ctx.r5.s64 = ctx.r11.s64 + -32256;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x822880E4;
	sub_821BBC58(ctx, base);
loc_822880E4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,140
	ctx.r4.s64 = 140;
	// lwz r30,428(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82268f20
	ctx.lr = 0x822880F8;
	sub_82268F20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// beq 0x82288118
	if (ctx.cr0.eq) goto loc_82288118;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x822a51b8
	ctx.lr = 0x82288110;
	sub_822A51B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8228811c
	goto loc_8228811C;
loc_82288118:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8228811C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r30,148(r26)
	PPC_STORE_U32(ctx.r26.u32 + 148, ctx.r30.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822a5958
	ctx.lr = 0x8228812C;
	sub_822A5958(ctx, base);
	// lwz r29,152(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 152);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822a5958
	ctx.lr = 0x8228813C;
	sub_822A5958(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a5958
	ctx.lr = 0x82288148;
	sub_822A5958(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x822a5ee8
	ctx.lr = 0x8228815C;
	sub_822A5EE8(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281ed8
	ctx.lr = 0x8228816C;
	sub_82281ED8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281ed8
	ctx.lr = 0x8228817C;
	sub_82281ED8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281ed8
	ctx.lr = 0x8228818C;
	sub_82281ED8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281ed8
	ctx.lr = 0x8228819C;
	sub_82281ED8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822e9910
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822881A4"))) PPC_WEAK_FUNC(sub_822881A4);
PPC_FUNC_IMPL(__imp__sub_822881A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822881A8"))) PPC_WEAK_FUNC(sub_822881A8);
PPC_FUNC_IMPL(__imp__sub_822881A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x822881B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r29,r11,-26120
	ctx.r29.s64 = ctx.r11.s64 + -26120;
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,464(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 464);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822881D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x8227c1e0
	ctx.lr = 0x822881F0;
	sub_8227C1E0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82288228
	if (ctx.cr6.eq) goto loc_82288228;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82288230
	if (!ctx.cr6.eq) goto loc_82288230;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,2453
	ctx.r7.s64 = 2453;
	// addi r6,r11,32400
	ctx.r6.s64 = ctx.r11.s64 + 32400;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,29152
	ctx.r5.s64 = ctx.r11.s64 + 29152;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x82288224;
	sub_821BBC58(ctx, base);
	// b 0x82288230
	goto loc_82288230;
loc_82288228:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82284428
	ctx.lr = 0x82288230;
	sub_82284428(ctx, base);
loc_82288230:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82288238"))) PPC_WEAK_FUNC(sub_82288238);
PPC_FUNC_IMPL(__imp__sub_82288238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e0
	ctx.lr = 0x82288240;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82285cd8
	ctx.lr = 0x8228824C;
	sub_82285CD8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r27,r31,128
	ctx.r27.s64 = ctx.r31.s64 + 128;
loc_82288254:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// bl 0x8229f890
	ctx.lr = 0x82288264;
	sub_8229F890(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// blt cr6,0x82288318
	if (ctx.cr6.lt) goto loc_82288318;
	// addi r28,r26,4
	ctx.r28.s64 = ctx.r26.s64 + 4;
loc_82288270:
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82288288;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82288300
	if (!ctx.cr0.eq) goto loc_82288300;
	// lwz r7,56(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,132(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
loc_822882A4:
	// lwz r8,4(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x822882b8
	if (!ctx.cr6.gt) goto loc_822882B8;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x822882c4
	goto loc_822882C4;
loc_822882B8:
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_822882C4:
	// clrlwi. r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x822882e8
	if (ctx.cr0.eq) goto loc_822882E8;
	// lwz r8,132(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r5,132(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 | ctx.r5.u64;
	// stw r8,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r8.u32);
	// b 0x822882a4
	goto loc_822882A4;
loc_822882E8:
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// subf r11,r11,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// xori r30,r11,1
	ctx.r30.u64 = ctx.r11.u64 ^ 1;
loc_82288300:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bl 0x8229f890
	ctx.lr = 0x82288310;
	sub_8229F890(ctx, base);
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x82288270
	if (!ctx.cr6.gt) goto loc_82288270;
loc_82288318:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82288254
	if (!ctx.cr0.eq) goto loc_82288254;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e9930
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82288328"))) PPC_WEAK_FUNC(sub_82288328);
PPC_FUNC_IMPL(__imp__sub_82288328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98b0
	ctx.lr = 0x82288330;
	__savegprlr_14(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lwz r16,136(r21)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r21.u32 + 136);
	// lwz r11,8(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82288830
	if (ctx.cr6.eq) goto loc_82288830;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r19,-32251
	ctx.r19.s64 = -2113601536;
	// addi r14,r11,-32144
	ctx.r14.s64 = ctx.r11.s64 + -32144;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r22,0
	ctx.r22.s64 = 0;
	// addi r11,r11,-32160
	ctx.r11.s64 = ctx.r11.s64 + -32160;
	// li r20,1
	ctx.r20.s64 = 1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r18,r11,-10544
	ctx.r18.s64 = ctx.r11.s64 + -10544;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r15,r11,-32176
	ctx.r15.s64 = ctx.r11.s64 + -32176;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r17,r11,32400
	ctx.r17.s64 = ctx.r11.s64 + 32400;
loc_82288380:
	// lwz r31,28(r16)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r16.u32 + 28);
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82288820
	if (ctx.cr6.eq) goto loc_82288820;
loc_82288398:
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82288574
	if (ctx.cr0.eq) goto loc_82288574;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r27,84(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822883BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82288574
	if (ctx.cr0.eq) goto loc_82288574;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822883D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82288574
	if (ctx.cr0.eq) goto loc_82288574;
	// cmpwi cr6,r27,30
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 30, ctx.xer);
	// beq cr6,0x82288400
	if (ctx.cr6.eq) goto loc_82288400;
	// cmpwi cr6,r27,12
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 12, ctx.xer);
	// beq cr6,0x82288400
	if (ctx.cr6.eq) goto loc_82288400;
	// cmpwi cr6,r27,13
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 13, ctx.xer);
	// beq cr6,0x82288400
	if (ctx.cr6.eq) goto loc_82288400;
	// cmpwi cr6,r27,14
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 14, ctx.xer);
	// bne cr6,0x82288574
	if (!ctx.cr6.eq) goto loc_82288574;
loc_82288400:
	// lwz r11,12(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12);
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r30,432(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82268f20
	ctx.lr = 0x82288414;
	sub_82268F20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// mr r23,r29
	ctx.r23.u64 = ctx.r29.u64;
	// stw r10,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r10.u32);
	// stb r20,176(r31)
	PPC_STORE_U8(ctx.r31.u32 + 176, ctx.r20.u8);
	// lwz r28,132(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x822a2c20
	ctx.lr = 0x8228844C;
	sub_822A2C20(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// ble cr6,0x82288480
	if (!ctx.cr6.gt) goto loc_82288480;
	// li r7,3304
	ctx.r7.s64 = 3304;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82288480;
	sub_821BBC58(ctx, base);
loc_82288480:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x822884d0
	if (ctx.cr6.eq) goto loc_822884D0;
loc_8228848C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x822884bc
	if (!ctx.cr6.eq) goto loc_822884BC;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x822884bc
	if (!ctx.cr6.eq) goto loc_822884BC;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r10,r10,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r10.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822884c8
	if (!ctx.cr0.eq) goto loc_822884C8;
loc_822884BC:
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8228848c
	if (!ctx.cr0.eq) goto loc_8228848C;
loc_822884C8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8228852c
	if (!ctx.cr6.eq) goto loc_8228852C;
loc_822884D0:
	// lwz r11,12(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12);
	// li r4,52
	ctx.r4.s64 = 52;
	// lwz r30,432(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82268f20
	ctx.lr = 0x822884E4;
	sub_82268F20(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// stw r28,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r20,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r20.u32);
	// stw r8,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r8.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// b 0x82288570
	goto loc_82288570;
loc_8228852C:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82288548
	if (!ctx.cr6.lt) goto loc_82288548;
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
loc_82288548:
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82288564
	if (!ctx.cr6.gt) goto loc_82288564;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
loc_82288564:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
loc_82288570:
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82288574:
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82288398
	if (!ctx.cr6.eq) goto loc_82288398;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82288820
	if (ctx.cr6.eq) goto loc_82288820;
loc_8228858C:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x822885ac
	if (!ctx.cr6.eq) goto loc_822885AC;
	// li r7,3348
	ctx.r7.s64 = 3348;
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x822885AC;
	sub_821BBC58(ctx, base);
loc_822885AC:
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r3,172(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 172);
	// li r4,31
	ctx.r4.s64 = 31;
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
	// bl 0x82291b00
	ctx.lr = 0x822885C0;
	sub_82291B00(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x8228870c
	goto loc_8228870C;
loc_822885C8:
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// addi r26,r25,44
	ctx.r26.s64 = ctx.r25.s64 + 44;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r25,0(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r22,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r22.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x822885fc
	if (ctx.cr6.gt) goto loc_822885FC;
	// li r7,3359
	ctx.r7.s64 = 3359;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x822885FC;
	sub_821BBC58(ctx, base);
loc_822885FC:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// lwz r29,28(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r28,128(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// bl 0x822a2390
	ctx.lr = 0x82288618;
	sub_822A2390(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,32340(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 32340);
	// stw r11,128(r10)
	PPC_STORE_U32(ctx.r10.u32 + 128, ctx.r11.u32);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x822a0440
	ctx.lr = 0x82288630;
	sub_822A0440(ctx, base);
	// lwz r11,12(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12);
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r30,428(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82268f20
	ctx.lr = 0x82288644;
	sub_82268F20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// beq 0x82288668
	if (ctx.cr0.eq) goto loc_82288668;
	// li r4,128
	ctx.r4.s64 = 128;
	// lwz r5,12(r21)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12);
	// bl 0x822a3510
	ctx.lr = 0x82288660;
	sub_822A3510(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8228866c
	goto loc_8228866C;
loc_82288668:
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_8228866C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a2390
	ctx.lr = 0x8228867C;
	sub_822A2390(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r28,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a2390
	ctx.lr = 0x82288690;
	sub_822A2390(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a0440
	ctx.lr = 0x8228869C;
	sub_822A0440(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822a0490
	ctx.lr = 0x822886AC;
	sub_822A0490(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x822a5028
	ctx.lr = 0x822886BC;
	sub_822A5028(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r30,180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 180, ctx.r30.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r22,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r22.u32);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// stw r22,184(r11)
	PPC_STORE_U32(ctx.r11.u32 + 184, ctx.r22.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// ble cr6,0x8228870c
	if (!ctx.cr6.gt) goto loc_8228870C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r24,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r24.u32);
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// stw r22,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r22.u32);
	// stw r22,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r22.u32);
	// stw r22,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r22.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_8228870C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x822885c8
	if (!ctx.cr6.eq) goto loc_822885C8;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// b 0x82288808
	goto loc_82288808;
loc_8228871C:
	// addi r10,r23,16
	ctx.r10.s64 = ctx.r23.s64 + 16;
	// lwz r31,0(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// lwz r23,0(r10)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r22,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r22.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r6,36(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x822887f4
	if (ctx.cr6.eq) goto loc_822887F4;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bgt cr6,0x822887a4
	if (ctx.cr6.gt) goto loc_822887A4;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82288770
	if (!ctx.cr6.lt) goto loc_82288770;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,184(r8)
	PPC_STORE_U32(ctx.r8.u32 + 184, ctx.r11.u32);
loc_82288770:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8229f838
	ctx.lr = 0x82288778;
	sub_8229F838(ctx, base);
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8229f818
	ctx.lr = 0x82288784;
	sub_8229F818(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x822a2ee8
	ctx.lr = 0x82288790;
	sub_822A2EE8(ctx, base);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,20(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// bl 0x822a0490
	ctx.lr = 0x822887A0;
	sub_822A0490(ctx, base);
	// b 0x82288808
	goto loc_82288808;
loc_822887A4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822887bc
	if (!ctx.cr6.lt) goto loc_822887BC;
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_822887BC:
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x822887d8
	if (!ctx.cr6.gt) goto loc_822887D8;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_822887D8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// b 0x82288808
	goto loc_82288808;
loc_822887F4:
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82288808
	if (!ctx.cr6.lt) goto loc_82288808;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,184(r8)
	PPC_STORE_U32(ctx.r8.u32 + 184, ctx.r11.u32);
loc_82288808:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x8228871c
	if (!ctx.cr6.eq) goto loc_8228871C;
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// mr r23,r29
	ctx.r23.u64 = ctx.r29.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x8228858c
	if (!ctx.cr6.eq) goto loc_8228858C;
loc_82288820:
	// lwz r16,8(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// lwz r11,8(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82288380
	if (!ctx.cr6.eq) goto loc_82288380;
loc_82288830:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822e9900
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82288838"))) PPC_WEAK_FUNC(sub_82288838);
PPC_FUNC_IMPL(__imp__sub_82288838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x82288840;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r29,r11,-26120
	ctx.r29.s64 = ctx.r11.s64 + -26120;
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,464(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 464);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82288868;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x8227c808
	ctx.lr = 0x82288880;
	sub_8227C808(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x822888b8
	if (ctx.cr6.eq) goto loc_822888B8;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x822888c0
	if (!ctx.cr6.eq) goto loc_822888C0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,1054
	ctx.r7.s64 = 1054;
	// addi r6,r11,32400
	ctx.r6.s64 = ctx.r11.s64 + 32400;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,29152
	ctx.r5.s64 = ctx.r11.s64 + 29152;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x822888B4;
	sub_821BBC58(ctx, base);
	// b 0x822888c0
	goto loc_822888C0;
loc_822888B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82285ed0
	ctx.lr = 0x822888C0;
	sub_82285ED0(ctx, base);
loc_822888C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822888C8"))) PPC_WEAK_FUNC(sub_822888C8);
PPC_FUNC_IMPL(__imp__sub_822888C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x822888D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r29,r11,-26120
	ctx.r29.s64 = ctx.r11.s64 + -26120;
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,464(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 464);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822888F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x8227c6d8
	ctx.lr = 0x82288910;
	sub_8227C6D8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82288948
	if (ctx.cr6.eq) goto loc_82288948;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82288950
	if (!ctx.cr6.eq) goto loc_82288950;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,1465
	ctx.r7.s64 = 1465;
	// addi r6,r11,32400
	ctx.r6.s64 = ctx.r11.s64 + 32400;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,29152
	ctx.r5.s64 = ctx.r11.s64 + 29152;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x82288944;
	sub_821BBC58(ctx, base);
	// b 0x82288950
	goto loc_82288950;
loc_82288948:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822865e0
	ctx.lr = 0x82288950;
	sub_822865E0(ctx, base);
loc_82288950:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82288958"))) PPC_WEAK_FUNC(sub_82288958);
PPC_FUNC_IMPL(__imp__sub_82288958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x82288960;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r29,r11,-26120
	ctx.r29.s64 = ctx.r11.s64 + -26120;
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,464(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 464);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82288988;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x8227c918
	ctx.lr = 0x822889A0;
	sub_8227C918(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x822889d8
	if (ctx.cr6.eq) goto loc_822889D8;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x822889e0
	if (!ctx.cr6.eq) goto loc_822889E0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,1741
	ctx.r7.s64 = 1741;
	// addi r6,r11,32400
	ctx.r6.s64 = ctx.r11.s64 + 32400;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,29152
	ctx.r5.s64 = ctx.r11.s64 + 29152;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x822889D4;
	sub_821BBC58(ctx, base);
	// b 0x822889e0
	goto loc_822889E0;
loc_822889D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822870e8
	ctx.lr = 0x822889E0;
	sub_822870E8(ctx, base);
loc_822889E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822889E8"))) PPC_WEAK_FUNC(sub_822889E8);
PPC_FUNC_IMPL(__imp__sub_822889E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x822889F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r29,r11,-26120
	ctx.r29.s64 = ctx.r11.s64 + -26120;
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,464(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 464);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82288A18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x8227d658
	ctx.lr = 0x82288A30;
	sub_8227D658(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82288a68
	if (ctx.cr6.eq) goto loc_82288A68;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82288a70
	if (!ctx.cr6.eq) goto loc_82288A70;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,2182
	ctx.r7.s64 = 2182;
	// addi r6,r11,32400
	ctx.r6.s64 = ctx.r11.s64 + 32400;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,29152
	ctx.r5.s64 = ctx.r11.s64 + 29152;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x82288A64;
	sub_821BBC58(ctx, base);
	// b 0x82288a70
	goto loc_82288A70;
loc_82288A68:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82287808
	ctx.lr = 0x82288A70;
	sub_82287808(ctx, base);
loc_82288A70:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82288A78"))) PPC_WEAK_FUNC(sub_82288A78);
PPC_FUNC_IMPL(__imp__sub_82288A78) {
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
	// bl 0x82288238
	ctx.lr = 0x82288A90;
	sub_82288238(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822853a0
	ctx.lr = 0x82288A98;
	sub_822853A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82284c38
	ctx.lr = 0x82288AA0;
	sub_82284C38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82284d88
	ctx.lr = 0x82288AA8;
	sub_82284D88(ctx, base);
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

__attribute__((alias("__imp__sub_82288ABC"))) PPC_WEAK_FUNC(sub_82288ABC);
PPC_FUNC_IMPL(__imp__sub_82288ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82288AC0"))) PPC_WEAK_FUNC(sub_82288AC0);
PPC_FUNC_IMPL(__imp__sub_82288AC0) {
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
	// bl 0x82288838
	ctx.lr = 0x82288AD8;
	sub_82288838(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82288958
	ctx.lr = 0x82288AE0;
	sub_82288958(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822889e8
	ctx.lr = 0x82288AE8;
	sub_822889E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82285df8
	ctx.lr = 0x82288AF0;
	sub_82285DF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822888c8
	ctx.lr = 0x82288AF8;
	sub_822888C8(ctx, base);
	// lwz r8,2068(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2068);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
loc_82288B08:
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82288b1c
	if (!ctx.cr6.gt) goto loc_82288B1C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82288b28
	goto loc_82288B28;
loc_82288B1C:
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
loc_82288B28:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82288b68
	if (ctx.cr0.eq) goto loc_82288B68;
	// lwz r11,228(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 228);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82288b5c
	if (ctx.cr0.eq) goto loc_82288B5C;
	// lwz r11,80(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x82288b5c
	if (!ctx.cr6.eq) goto loc_82288B5C;
	// lwz r11,56(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// lwz r6,2096(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2096);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x82288b5c
	if (!ctx.cr6.gt) goto loc_82288B5C;
	// stw r11,2096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2096, ctx.r11.u32);
loc_82288B5C:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// b 0x82288b08
	goto loc_82288B08;
loc_82288B68:
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

__attribute__((alias("__imp__sub_82288B7C"))) PPC_WEAK_FUNC(sub_82288B7C);
PPC_FUNC_IMPL(__imp__sub_82288B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82288B80"))) PPC_WEAK_FUNC(sub_82288B80);
PPC_FUNC_IMPL(__imp__sub_82288B80) {
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
	// bl 0x822a9058
	ctx.lr = 0x82288BA0;
	sub_822A9058(ctx, base);
	// lbz r11,2144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2144);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82288c18
	if (ctx.cr0.eq) goto loc_82288C18;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lbz r11,1004(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1004);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82288bc4
	if (ctx.cr0.eq) goto loc_82288BC4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82284ac8
	ctx.lr = 0x82288BC4;
	sub_82284AC8(ctx, base);
loc_82288BC4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82286448
	ctx.lr = 0x82288BCC;
	sub_82286448(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82286550
	ctx.lr = 0x82288BD4;
	sub_82286550(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82283ce8
	ctx.lr = 0x82288BDC;
	sub_82283CE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82284000
	ctx.lr = 0x82288BE4;
	sub_82284000(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,1112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1112);
	// rlwinm. r11,r11,17,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82288bfc
	if (ctx.cr0.eq) goto loc_82288BFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82288328
	ctx.lr = 0x82288BFC;
	sub_82288328(ctx, base);
loc_82288BFC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,380(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 380);
	// stw r11,2088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2088, ctx.r11.u32);
	// bl 0x822841f8
	ctx.lr = 0x82288C14;
	sub_822841F8(ctx, base);
	// b 0x82288c74
	goto loc_82288C74;
loc_82288C18:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82288c54
	if (!ctx.cr6.eq) goto loc_82288C54;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82288c54
	if (!ctx.cr6.eq) goto loc_82288C54;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,532
	ctx.r7.s64 = 532;
	// addi r6,r11,32400
	ctx.r6.s64 = ctx.r11.s64 + 32400;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,32480
	ctx.r5.s64 = ctx.r11.s64 + 32480;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x82288C54;
	sub_821BBC58(ctx, base);
loc_82288C54:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82285d68
	ctx.lr = 0x82288C5C;
	sub_82285D68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82288ac0
	ctx.lr = 0x82288C64;
	sub_82288AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82283818
	ctx.lr = 0x82288C6C;
	sub_82283818(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822881a8
	ctx.lr = 0x82288C74;
	sub_822881A8(ctx, base);
loc_82288C74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a6a58
	ctx.lr = 0x82288C7C;
	sub_822A6A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82282338
	ctx.lr = 0x82288C84;
	sub_82282338(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822af638
	ctx.lr = 0x82288C8C;
	sub_822AF638(ctx, base);
	// lwz r5,2156(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2156);
	// cmpwi r5,0
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82288ca8
	if (ctx.cr0.eq) goto loc_82288CA8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r11,-32120
	ctx.r4.s64 = ctx.r11.s64 + -32120;
	// bl 0x821313e0
	ctx.lr = 0x82288CA8;
	sub_821313E0(ctx, base);
loc_82288CA8:
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

__attribute__((alias("__imp__sub_82288CC0"))) PPC_WEAK_FUNC(sub_82288CC0);
PPC_FUNC_IMPL(__imp__sub_82288CC0) {
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
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x82288d08
	if (ctx.cr0.eq) goto loc_82288D08;
loc_82288CE4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r30,0(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r3,420(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 420);
	// lwz r11,412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 412);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82288CFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82288ce4
	if (!ctx.cr6.eq) goto loc_82288CE4;
loc_82288D08:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82288D38"))) PPC_WEAK_FUNC(sub_82288D38);
PPC_FUNC_IMPL(__imp__sub_82288D38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82288d7c
	if (ctx.cr6.eq) goto loc_82288D7C;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// b 0x82288d70
	goto loc_82288D70;
loc_82288D64:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
loc_82288D70:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82288d64
	if (!ctx.cr0.eq) goto loc_82288D64;
	// blr 
	return;
loc_82288D7C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82288D84"))) PPC_WEAK_FUNC(sub_82288D84);
PPC_FUNC_IMPL(__imp__sub_82288D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82288D88"))) PPC_WEAK_FUNC(sub_82288D88);
PPC_FUNC_IMPL(__imp__sub_82288D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x82288D90;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,12248
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 12248, ctx.xer);
	// bge cr6,0x82288da4
	if (!ctx.cr6.lt) goto loc_82288DA4;
	// li r4,12248
	ctx.r4.s64 = 12248;
loc_82288DA4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r4,8
	ctx.r30.s64 = ctx.r4.s64 + 8;
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,420(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 420);
	// lwz r11,416(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 416);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82288DC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82288DF4"))) PPC_WEAK_FUNC(sub_82288DF4);
PPC_FUNC_IMPL(__imp__sub_82288DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82288DF8"))) PPC_WEAK_FUNC(sub_82288DF8);
PPC_FUNC_IMPL(__imp__sub_82288DF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,20(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,424(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	// b 0x82269050
	sub_82269050(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82288E10"))) PPC_WEAK_FUNC(sub_82288E10);
PPC_FUNC_IMPL(__imp__sub_82288E10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82288E14"))) PPC_WEAK_FUNC(sub_82288E14);
PPC_FUNC_IMPL(__imp__sub_82288E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82288E18"))) PPC_WEAK_FUNC(sub_82288E18);
PPC_FUNC_IMPL(__imp__sub_82288E18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x82288E20;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,4
	ctx.r29.s64 = 4;
	// lbz r11,5(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 5);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82288e44
	if (ctx.cr0.eq) goto loc_82288E44;
	// li r29,2
	ctx.r29.s64 = 2;
loc_82288E44:
	// lwz r31,424(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 424);
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82268f20
	ctx.lr = 0x82288E54;
	sub_82268F20(ctx, base);
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq 0x82288e80
	if (ctx.cr0.eq) goto loc_82288E80;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// b 0x82288e84
	goto loc_82288E84;
loc_82288E80:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82288E84:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r28.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82288E9C"))) PPC_WEAK_FUNC(sub_82288E9C);
PPC_FUNC_IMPL(__imp__sub_82288E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82288EA0"))) PPC_WEAK_FUNC(sub_82288EA0);
PPC_FUNC_IMPL(__imp__sub_82288EA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x82288EA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82288f20
	if (ctx.cr6.eq) goto loc_82288F20;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82288f20
	if (ctx.cr6.eq) goto loc_82288F20;
	// lwz r31,424(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 424);
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82268f20
	ctx.lr = 0x82288ED8;
	sub_82268F20(ctx, base);
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// beq 0x82288f08
	if (ctx.cr0.eq) goto loc_82288F08;
	// li r10,14
	ctx.r10.s64 = 14;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r8,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// b 0x82288f0c
	goto loc_82288F0C;
loc_82288F08:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82288F0C:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// stw r28,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r28.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x82288f2c
	goto loc_82288F2C;
loc_82288F20:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82288e18
	ctx.lr = 0x82288F2C;
	sub_82288E18(ctx, base);
loc_82288F2C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82288F34"))) PPC_WEAK_FUNC(sub_82288F34);
PPC_FUNC_IMPL(__imp__sub_82288F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82288F38"))) PPC_WEAK_FUNC(sub_82288F38);
PPC_FUNC_IMPL(__imp__sub_82288F38) {
	PPC_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82288F40:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x82288f88
	if (ctx.cr6.eq) goto loc_82288F88;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r10,64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// blt cr6,0x82288f40
	if (ctx.cr6.lt) goto loc_82288F40;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r7,214
	ctx.r7.s64 = 214;
	// addi r6,r11,-32040
	ctx.r6.s64 = ctx.r11.s64 + -32040;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,29152
	ctx.r5.s64 = ctx.r11.s64 + 29152;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// b 0x821bbc58
	sub_821BBC58(ctx, base);
	return;
loc_82288F88:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82288F94"))) PPC_WEAK_FUNC(sub_82288F94);
PPC_FUNC_IMPL(__imp__sub_82288F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82288F98"))) PPC_WEAK_FUNC(sub_82288F98);
PPC_FUNC_IMPL(__imp__sub_82288F98) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lbz r11,1(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// lwz r3,336(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82288fd8
	if (!ctx.cr0.eq) goto loc_82288FD8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,356(r31)
	PPC_STORE_U8(ctx.r31.u32 + 356, ctx.r11.u8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82288fe8
	goto loc_82288FE8;
loc_82288FD8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,356(r31)
	PPC_STORE_U8(ctx.r31.u32 + 356, ctx.r11.u8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82288FE8:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82288FF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// stb r11,1004(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1004, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82289014"))) PPC_WEAK_FUNC(sub_82289014);
PPC_FUNC_IMPL(__imp__sub_82289014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82289018"))) PPC_WEAK_FUNC(sub_82289018);
PPC_FUNC_IMPL(__imp__sub_82289018) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bge cr6,0x82289030
	if (!ctx.cr6.lt) goto loc_82289030;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82289030:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8228903c
	if (!ctx.cr0.eq) goto loc_8228903C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8228903C:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x8228906c
	if (ctx.cr6.eq) goto loc_8228906C;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x82289064
	if (ctx.cr6.eq) goto loc_82289064;
	// cmpwi cr6,r11,113
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 113, ctx.xer);
	// beq cr6,0x8228906c
	if (ctx.cr6.eq) goto loc_8228906C;
	// cmpwi cr6,r11,114
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 114, ctx.xer);
	// beq cr6,0x82289064
	if (ctx.cr6.eq) goto loc_82289064;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82289064:
	// lhz r3,10(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10);
	// blr 
	return;
loc_8228906C:
	// lhz r3,6(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82289074"))) PPC_WEAK_FUNC(sub_82289074);
PPC_FUNC_IMPL(__imp__sub_82289074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82289078"))) PPC_WEAK_FUNC(sub_82289078);
PPC_FUNC_IMPL(__imp__sub_82289078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x82289080;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r29,r10,16
	ctx.r29.u64 = ctx.r10.u32 & 0xFFFF;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r29,100
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 100, ctx.xer);
	// bge cr6,0x822890a4
	if (!ctx.cr6.lt) goto loc_822890A4;
	// li r10,1
	ctx.r10.s64 = 1;
loc_822890A4:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822890b0
	if (!ctx.cr0.eq) goto loc_822890B0;
	// li r29,0
	ctx.r29.s64 = 0;
loc_822890B0:
	// cmpwi cr6,r29,15
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 15, ctx.xer);
	// beq cr6,0x82289214
	if (ctx.cr6.eq) goto loc_82289214;
	// cmpwi cr6,r29,79
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 79, ctx.xer);
	// beq cr6,0x822891c0
	if (ctx.cr6.eq) goto loc_822891C0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x822a63b0
	ctx.lr = 0x822890D4;
	sub_822A63B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82289128
	if (!ctx.cr0.gt) goto loc_82289128;
loc_822890DC:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,0,9,9
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x822890fc
	if (ctx.cr0.eq) goto loc_822890FC;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
loc_822890FC:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82289114
	if (ctx.cr0.eq) goto loc_82289114;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82289114:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x822a63b0
	ctx.lr = 0x82289120;
	sub_822A63B0(ctx, base);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x822890dc
	if (ctx.cr6.lt) goto loc_822890DC;
loc_82289128:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x822a6430
	ctx.lr = 0x82289134;
	sub_822A6430(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82289188
	if (!ctx.cr0.gt) goto loc_82289188;
loc_8228913C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,0,9,9
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8228915c
	if (ctx.cr0.eq) goto loc_8228915C;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
loc_8228915C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82289174
	if (ctx.cr0.eq) goto loc_82289174;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82289174:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x822a6430
	ctx.lr = 0x82289180;
	sub_822A6430(ctx, base);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8228913c
	if (ctx.cr6.lt) goto loc_8228913C;
loc_82289188:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x822a64a0
	ctx.lr = 0x82289194;
	sub_822A64A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82289264
	if (!ctx.cr0.gt) goto loc_82289264;
loc_8228919C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x822a64a0
	ctx.lr = 0x822891B4;
	sub_822A64A0(ctx, base);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8228919c
	if (ctx.cr6.lt) goto loc_8228919C;
	// b 0x82289264
	goto loc_82289264;
loc_822891C0:
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,79
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 79, ctx.xer);
	// beq cr6,0x822891d4
	if (ctx.cr6.eq) goto loc_822891D4;
	// li r8,0
	ctx.r8.s64 = 0;
loc_822891D4:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// lhz r10,2(r8)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + 2);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82289264
	if (ctx.cr0.eq) goto loc_82289264;
loc_822891F8:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lhz r10,2(r8)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + 2);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822891f8
	if (ctx.cr6.lt) goto loc_822891F8;
	// b 0x82289264
	goto loc_82289264;
loc_82289214:
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15, ctx.xer);
	// beq cr6,0x82289228
	if (ctx.cr6.eq) goto loc_82289228;
	// li r8,0
	ctx.r8.s64 = 0;
loc_82289228:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// lhz r10,2(r8)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + 2);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82289264
	if (ctx.cr0.eq) goto loc_82289264;
loc_8228924C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lhz r10,2(r8)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + 2);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8228924c
	if (ctx.cr6.lt) goto loc_8228924C;
loc_82289264:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8228926C"))) PPC_WEAK_FUNC(sub_8228926C);
PPC_FUNC_IMPL(__imp__sub_8228926C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82289270"))) PPC_WEAK_FUNC(sub_82289270);
PPC_FUNC_IMPL(__imp__sub_82289270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x82289278;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// bl 0x82268f20
	ctx.lr = 0x82289298;
	sub_82268F20(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// stb r29,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r29.u8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822892BC"))) PPC_WEAK_FUNC(sub_822892BC);
PPC_FUNC_IMPL(__imp__sub_822892BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822892C0"))) PPC_WEAK_FUNC(sub_822892C0);
PPC_FUNC_IMPL(__imp__sub_822892C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bge cr6,0x822892d8
	if (!ctx.cr6.lt) goto loc_822892D8;
	// li r10,1
	ctx.r10.s64 = 1;
loc_822892D8:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822892e4
	if (!ctx.cr0.eq) goto loc_822892E4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822892E4:
	// cmpwi cr6,r11,40
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 40, ctx.xer);
	// beq cr6,0x82289318
	if (ctx.cr6.eq) goto loc_82289318;
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// beq cr6,0x82289318
	if (ctx.cr6.eq) goto loc_82289318;
	// cmpwi cr6,r11,41
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 41, ctx.xer);
	// beq cr6,0x82289318
	if (ctx.cr6.eq) goto loc_82289318;
	// cmpwi cr6,r11,42
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 42, ctx.xer);
	// beq cr6,0x82289318
	if (ctx.cr6.eq) goto loc_82289318;
	// cmpwi cr6,r11,39
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 39, ctx.xer);
	// beq cr6,0x82289318
	if (ctx.cr6.eq) goto loc_82289318;
	// cmpwi cr6,r11,83
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 83, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8228931c
	if (!ctx.cr6.eq) goto loc_8228931C;
loc_82289318:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8228931C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82289324"))) PPC_WEAK_FUNC(sub_82289324);
PPC_FUNC_IMPL(__imp__sub_82289324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82289328"))) PPC_WEAK_FUNC(sub_82289328);
PPC_FUNC_IMPL(__imp__sub_82289328) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bge cr6,0x82289340
	if (!ctx.cr6.lt) goto loc_82289340;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82289340:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8228934c
	if (!ctx.cr0.eq) goto loc_8228934C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8228934C:
	// cmpwi cr6,r11,53
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 53, ctx.xer);
	// beq cr6,0x82289378
	if (ctx.cr6.eq) goto loc_82289378;
	// cmpwi cr6,r11,52
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 52, ctx.xer);
	// beq cr6,0x82289378
	if (ctx.cr6.eq) goto loc_82289378;
	// cmpwi cr6,r11,39
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 39, ctx.xer);
	// beq cr6,0x82289378
	if (ctx.cr6.eq) goto loc_82289378;
	// cmpwi cr6,r11,62
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 62, ctx.xer);
	// beq cr6,0x82289378
	if (ctx.cr6.eq) goto loc_82289378;
	// cmpwi cr6,r11,50
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 50, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8228937c
	if (!ctx.cr6.eq) goto loc_8228937C;
loc_82289378:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8228937C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82289384"))) PPC_WEAK_FUNC(sub_82289384);
PPC_FUNC_IMPL(__imp__sub_82289384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82289388"))) PPC_WEAK_FUNC(sub_82289388);
PPC_FUNC_IMPL(__imp__sub_82289388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x82289390;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r29,432(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 432);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82268f20
	ctx.lr = 0x822893D0;
	sub_82268F20(ctx, base);
	// addic. r28,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r28.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// beq 0x822893f0
	if (ctx.cr0.eq) goto loc_822893F0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// bl 0x82281f80
	ctx.lr = 0x822893EC;
	sub_82281F80(ctx, base);
	// b 0x822893f4
	goto loc_822893F4;
loc_822893F0:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_822893F4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,20
	ctx.r4.s64 = 20;
	// stw r28,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r28.u32);
	// lwz r28,432(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82268f20
	ctx.lr = 0x8228940C;
	sub_82268F20(ctx, base);
	// addic. r29,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r29.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// beq 0x8228942c
	if (ctx.cr0.eq) goto loc_8228942C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// bl 0x82281f80
	ctx.lr = 0x82289428;
	sub_82281F80(ctx, base);
	// b 0x82289430
	goto loc_82289430;
loc_8228942C:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82289430:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,20
	ctx.r4.s64 = 20;
	// stw r29,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
	// lwz r28,432(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82268f20
	ctx.lr = 0x82289448;
	sub_82268F20(ctx, base);
	// addic. r29,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r29.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// beq 0x8228946c
	if (ctx.cr0.eq) goto loc_8228946C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// bl 0x82281f80
	ctx.lr = 0x82289464;
	sub_82281F80(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82289470
	goto loc_82289470;
loc_8228946C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82289470:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// lwz r3,432(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 432);
	// bl 0x82268f20
	ctx.lr = 0x82289488;
	sub_82268F20(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r29,r10,-10544
	ctx.r29.s64 = ctx.r10.s64 + -10544;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r27,r10,29152
	ctx.r27.s64 = ctx.r10.s64 + 29152;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r28,r10,-32040
	ctx.r28.s64 = ctx.r10.s64 + -32040;
	// stb r30,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r30.u8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// beq 0x822894e4
	if (ctx.cr0.eq) goto loc_822894E4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x822894fc
	goto loc_822894FC;
loc_822894E4:
	// li r7,132
	ctx.r7.s64 = 132;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x822894FC;
	sub_821BBC58(ctx, base);
loc_822894FC:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82289520
	if (!ctx.cr0.eq) goto loc_82289520;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82289524
	if (ctx.cr0.eq) goto loc_82289524;
loc_82289520:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82289524:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// beq cr6,0x82289580
	if (ctx.cr6.eq) goto loc_82289580;
	// lbz r11,3(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82289548
	if (!ctx.cr0.eq) goto loc_82289548;
	// lbz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82289564
	if (ctx.cr6.eq) goto loc_82289564;
loc_82289548:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r7,139
	ctx.r7.s64 = 139;
	// addi r5,r11,-31952
	ctx.r5.s64 = ctx.r11.s64 + -31952;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82289564;
	sub_821BBC58(ctx, base);
loc_82289564:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82288f98
	ctx.lr = 0x82289570;
	sub_82288F98(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x82289598
	goto loc_82289598;
loc_82289580:
	// li r7,144
	ctx.r7.s64 = 144;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x82289598;
	sub_821BBC58(ctx, base);
loc_82289598:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822895AC"))) PPC_WEAK_FUNC(sub_822895AC);
PPC_FUNC_IMPL(__imp__sub_822895AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822895B0"))) PPC_WEAK_FUNC(sub_822895B0);
PPC_FUNC_IMPL(__imp__sub_822895B0) {
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
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822895d8
	if (ctx.cr0.eq) goto loc_822895D8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8228bf18
	ctx.lr = 0x822895D8;
	sub_8228BF18(ctx, base);
loc_822895D8:
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822895ec
	if (ctx.cr0.eq) goto loc_822895EC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8228bf18
	ctx.lr = 0x822895EC;
	sub_8228BF18(ctx, base);
loc_822895EC:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82289600
	if (ctx.cr0.eq) goto loc_82289600;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8228bf18
	ctx.lr = 0x82289600;
	sub_8228BF18(ctx, base);
loc_82289600:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r5,52(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,-31868
	ctx.r4.s64 = ctx.r11.s64 + -31868;
	// bl 0x821313e0
	ctx.lr = 0x82289614;
	sub_821313E0(ctx, base);
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

__attribute__((alias("__imp__sub_82289628"))) PPC_WEAK_FUNC(sub_82289628);
PPC_FUNC_IMPL(__imp__sub_82289628) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98b0
	ctx.lr = 0x82289630;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r20,1
	ctx.r20.s64 = 1;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bge cr6,0x8228965c
	if (!ctx.cr6.lt) goto loc_8228965C;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_8228965C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82289668
	if (!ctx.cr0.eq) goto loc_82289668;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82289668:
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// srawi r9,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 5;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// addi r11,r11,-32064
	ctx.r11.s64 = ctx.r11.s64 + -32064;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r8,r20,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r20.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// and. r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822896a4
	if (!ctx.cr0.eq) goto loc_822896A4;
loc_8228969C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8228a6ec
	goto loc_8228A6EC;
loc_822896A4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi cr6,r10,15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15, ctx.xer);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// beq cr6,0x822896bc
	if (ctx.cr6.eq) goto loc_822896BC;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_822896BC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822896e0
	if (ctx.cr6.eq) goto loc_822896E0;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r10,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x822896a4
	goto loc_822896A4;
loc_822896E0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r14,80(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r21,-1
	ctx.r21.s64 = -1;
	// addi r17,r11,29152
	ctx.r17.s64 = ctx.r11.s64 + 29152;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r16,r11,-31792
	ctx.r16.s64 = ctx.r11.s64 + -31792;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r19,r11,-10544
	ctx.r19.s64 = ctx.r11.s64 + -10544;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r15,r11,-31808
	ctx.r15.s64 = ctx.r11.s64 + -31808;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r18,r11,-32040
	ctx.r18.s64 = ctx.r11.s64 + -32040;
loc_82289710:
	// lwz r28,20(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bge cr6,0x8228972c
	if (!ctx.cr6.lt) goto loc_8228972C;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_8228972C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bne 0x8228973c
	if (!ctx.cr0.eq) goto loc_8228973C;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_8228973C:
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// beq cr6,0x82289750
	if (ctx.cr6.eq) goto loc_82289750;
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// bne cr6,0x82289754
	if (!ctx.cr6.eq) goto loc_82289754;
loc_82289750:
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_82289754:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822898cc
	if (!ctx.cr0.eq) goto loc_822898CC;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// bge cr6,0x8228976c
	if (!ctx.cr6.lt) goto loc_8228976C;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_8228976C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bne 0x8228977c
	if (!ctx.cr0.eq) goto loc_8228977C;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_8228977C:
	// addi r10,r10,-83
	ctx.r10.s64 = ctx.r10.s64 + -83;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822898cc
	if (!ctx.cr0.eq) goto loc_822898CC;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// bge cr6,0x8228979c
	if (!ctx.cr6.lt) goto loc_8228979C;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_8228979C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bne 0x822897ac
	if (!ctx.cr0.eq) goto loc_822897AC;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_822897AC:
	// cmpwi cr6,r10,113
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 113, ctx.xer);
	// beq cr6,0x822897c0
	if (ctx.cr6.eq) goto loc_822897C0;
	// cmpwi cr6,r10,114
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 114, ctx.xer);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// bne cr6,0x822897c4
	if (!ctx.cr6.eq) goto loc_822897C4;
loc_822897C0:
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_822897C4:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822898cc
	if (!ctx.cr0.eq) goto loc_822898CC;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// bge cr6,0x822897dc
	if (!ctx.cr6.lt) goto loc_822897DC;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_822897DC:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bne 0x822897ec
	if (!ctx.cr0.eq) goto loc_822897EC;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_822897EC:
	// addi r10,r10,-132
	ctx.r10.s64 = ctx.r10.s64 + -132;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822898cc
	if (!ctx.cr0.eq) goto loc_822898CC;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// bge cr6,0x8228980c
	if (!ctx.cr6.lt) goto loc_8228980C;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_8228980C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bne 0x8228981c
	if (!ctx.cr0.eq) goto loc_8228981C;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_8228981C:
	// cmpwi cr6,r10,52
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 52, ctx.xer);
	// beq cr6,0x82289830
	if (ctx.cr6.eq) goto loc_82289830;
	// cmpwi cr6,r10,53
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 53, ctx.xer);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// bne cr6,0x82289834
	if (!ctx.cr6.eq) goto loc_82289834;
loc_82289830:
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_82289834:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822898cc
	if (!ctx.cr0.eq) goto loc_822898CC;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// bge cr6,0x8228984c
	if (!ctx.cr6.lt) goto loc_8228984C;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_8228984C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bne 0x8228985c
	if (!ctx.cr0.eq) goto loc_8228985C;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_8228985C:
	// addi r10,r10,-39
	ctx.r10.s64 = ctx.r10.s64 + -39;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822898cc
	if (!ctx.cr0.eq) goto loc_822898CC;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// bge cr6,0x8228987c
	if (!ctx.cr6.lt) goto loc_8228987C;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_8228987C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bne 0x8228988c
	if (!ctx.cr0.eq) goto loc_8228988C;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_8228988C:
	// addi r10,r10,-41
	ctx.r10.s64 = ctx.r10.s64 + -41;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822898cc
	if (!ctx.cr0.eq) goto loc_822898CC;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// bge cr6,0x822898ac
	if (!ctx.cr6.lt) goto loc_822898AC;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_822898AC:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bne 0x822898bc
	if (!ctx.cr0.eq) goto loc_822898BC;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_822898BC:
	// addi r10,r10,-29
	ctx.r10.s64 = ctx.r10.s64 + -29;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8228a608
	if (ctx.cr0.eq) goto loc_8228A608;
loc_822898CC:
	// mr r22,r29
	ctx.r22.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// bge cr6,0x822898e0
	if (!ctx.cr6.lt) goto loc_822898E0;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_822898E0:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822898ec
	if (!ctx.cr0.eq) goto loc_822898EC;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_822898EC:
	// cmpwi cr6,r11,52
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 52, ctx.xer);
	// bgt cr6,0x82289e44
	if (ctx.cr6.gt) goto loc_82289E44;
	// beq cr6,0x8228a5b0
	if (ctx.cr6.eq) goto loc_8228A5B0;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x82289d60
	if (ctx.cr6.eq) goto loc_82289D60;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x82289ac4
	if (ctx.cr6.eq) goto loc_82289AC4;
	// cmpwi cr6,r11,29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 29, ctx.xer);
	// beq cr6,0x82289a98
	if (ctx.cr6.eq) goto loc_82289A98;
	// cmpwi cr6,r11,39
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 39, ctx.xer);
	// beq cr6,0x82289984
	if (ctx.cr6.eq) goto loc_82289984;
	// cmpwi cr6,r11,41
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 41, ctx.xer);
	// beq cr6,0x82289970
	if (ctx.cr6.eq) goto loc_82289970;
	// cmpwi cr6,r11,50
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 50, ctx.xer);
	// bne cr6,0x8228a5c4
	if (!ctx.cr6.eq) goto loc_8228A5C4;
	// addi r11,r28,8
	ctx.r11.s64 = ctx.r28.s64 + 8;
loc_8228992C:
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bge cr6,0x8228994c
	if (!ctx.cr6.lt) goto loc_8228994C;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_8228994C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82289958
	if (!ctx.cr0.eq) goto loc_82289958;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82289958:
	// addi r11,r11,-83
	ctx.r11.s64 = ctx.r11.s64 + -83;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8228a39c
	if (!ctx.cr0.eq) goto loc_8228A39C;
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// b 0x8228992c
	goto loc_8228992C;
loc_82289970:
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x822a4920
	ctx.lr = 0x82289978;
	sub_822A4920(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8228a5c0
	if (ctx.cr0.eq) goto loc_8228A5C0;
	// b 0x82289ab8
	goto loc_82289AB8;
loc_82289984:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x822899a8
	if (!ctx.cr6.lt) goto loc_822899A8;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x822899ac
	goto loc_822899AC;
loc_822899A8:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_822899AC:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228a5c0
	if (ctx.cr0.eq) goto loc_8228A5C0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82289ab8
	if (!ctx.cr6.eq) goto loc_82289AB8;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_822899C4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82289a04
	if (!ctx.cr6.eq) goto loc_82289A04;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bge cr6,0x822899e8
	if (!ctx.cr6.lt) goto loc_822899E8;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_822899E8:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822899f4
	if (!ctx.cr0.eq) goto loc_822899F4;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_822899F4:
	// addi r11,r11,-41
	ctx.r11.s64 = ctx.r11.s64 + -41;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8228a5c4
	if (!ctx.cr0.eq) goto loc_8228A5C4;
loc_82289A04:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x82289a20
	if (!ctx.cr6.lt) goto loc_82289A20;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82289A20:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bne 0x82289a30
	if (!ctx.cr0.eq) goto loc_82289A30;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82289A30:
	// cmpwi cr6,r11,52
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 52, ctx.xer);
	// beq cr6,0x82289a44
	if (ctx.cr6.eq) goto loc_82289A44;
	// cmpwi cr6,r11,53
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 53, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bne cr6,0x82289a48
	if (!ctx.cr6.eq) goto loc_82289A48;
loc_82289A44:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82289A48:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82289a58
	if (ctx.cr0.eq) goto loc_82289A58;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// b 0x82289a8c
	goto loc_82289A8C;
loc_82289A58:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bge cr6,0x82289a68
	if (!ctx.cr6.lt) goto loc_82289A68;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82289A68:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bne 0x82289a78
	if (!ctx.cr0.eq) goto loc_82289A78;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82289A78:
	// addi r11,r11,-41
	ctx.r11.s64 = ctx.r11.s64 + -41;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82289a8c
	if (ctx.cr0.eq) goto loc_82289A8C;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
loc_82289A8C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82289078
	ctx.lr = 0x82289A94;
	sub_82289078(ctx, base);
	// b 0x822899c4
	goto loc_822899C4;
loc_82289A98:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r5,r11,1
	ctx.r5.u64 = ctx.r11.u64 ^ 1;
	// bl 0x82289270
	ctx.lr = 0x82289AB8;
	sub_82289270(ctx, base);
loc_82289AB8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82289078
	ctx.lr = 0x82289AC0;
	sub_82289078(ctx, base);
	// b 0x8228a5c4
	goto loc_8228A5C4;
loc_82289AC4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,336(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8228a674
	if (ctx.cr6.gt) goto loc_8228A674;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82289AF0:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82289c20
	if (ctx.cr6.eq) goto loc_82289C20;
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82289b14
	if (ctx.cr6.eq) goto loc_82289B14;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82289af0
	if (!ctx.cr0.eq) goto loc_82289AF0;
loc_82289B14:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82289B18:
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cntlzw r10,r8
	ctx.r10.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
loc_82289B2C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82289c28
	if (ctx.cr6.eq) goto loc_82289C28;
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82289b50
	if (ctx.cr6.eq) goto loc_82289B50;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82289b2c
	if (!ctx.cr0.eq) goto loc_82289B2C;
loc_82289B50:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82289B54:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82289c30
	if (ctx.cr0.eq) goto loc_82289C30;
	// clrlwi. r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82289ab8
	if (ctx.cr0.eq) goto loc_82289AB8;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r30,20(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8229faf8
	ctx.lr = 0x82289B84;
	sub_8229FAF8(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r3,432(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 432);
	// bl 0x82268f20
	ctx.lr = 0x82289BA4;
	sub_82268F20(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8229faf8
	ctx.lr = 0x82289BB8;
	sub_8229FAF8(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// stb r29,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r29.u8);
	// stb r29,2(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2, ctx.r29.u8);
	// stb r29,3(r30)
	PPC_STORE_U8(ctx.r30.u32 + 3, ctx.r29.u8);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r9,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// lbz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// stb r9,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r9.u8);
	// lbz r10,3(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// stb r10,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r10.u8);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stb r29,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r29.u8);
	// stb r29,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r29.u8);
	// stb r29,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r29.u8);
	// stb r29,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r29.u8);
	// b 0x82289d4c
	goto loc_82289D4C;
loc_82289C20:
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// b 0x82289b18
	goto loc_82289B18;
loc_82289C28:
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// b 0x82289b54
	goto loc_82289B54;
loc_82289C30:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r30,20(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8229faf8
	ctx.lr = 0x82289C40;
	sub_8229FAF8(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r3,432(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 432);
	// bl 0x82268f20
	ctx.lr = 0x82289C60;
	sub_82268F20(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8229faf8
	ctx.lr = 0x82289C74;
	sub_8229FAF8(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// addi r9,r30,4
	ctx.r9.s64 = ctx.r30.s64 + 4;
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// stb r29,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r29.u8);
	// stb r29,2(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2, ctx.r29.u8);
	// stb r29,3(r30)
	PPC_STORE_U8(ctx.r30.u32 + 3, ctx.r29.u8);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ori r11,r11,53
	ctx.r11.u64 = ctx.r11.u64 | 53;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stb r8,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r8.u8);
	// lbz r8,1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r8,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r8.u8);
	// lbz r8,2(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// stb r8,2(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2, ctx.r8.u8);
	// lbz r10,3(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// stb r10,3(r9)
	PPC_STORE_U8(ctx.r9.u32 + 3, ctx.r10.u8);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stb r29,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r29.u8);
	// stb r29,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r29.u8);
	// stb r29,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r29.u8);
	// stb r29,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r29.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// ori r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 8;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r9,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r9.u8);
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stb r9,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r9.u8);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// stb r9,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r9.u8);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stb r29,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r29.u8);
	// stb r29,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r29.u8);
	// stb r29,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r29.u8);
	// stb r29,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r29.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// ori r10,r10,41
	ctx.r10.u64 = ctx.r10.u64 | 41;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stb r29,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r29.u8);
	// stb r29,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r29.u8);
	// stb r29,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r29.u8);
	// stb r29,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r29.u8);
loc_82289D4C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// ori r10,r10,83
	ctx.r10.u64 = ctx.r10.u64 | 83;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// b 0x8228a5c4
	goto loc_8228A5C4;
loc_82289D60:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,336(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8228a68c
	if (ctx.cr6.gt) goto loc_8228A68C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82289018
	ctx.lr = 0x82289D80;
	sub_82289018(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8229faf8
	ctx.lr = 0x82289D94;
	sub_8229FAF8(ctx, base);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_82289DAC:
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x82289dc8
	if (!ctx.cr6.lt) goto loc_82289DC8;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82289DC8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bne 0x82289dd8
	if (!ctx.cr0.eq) goto loc_82289DD8;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82289DD8:
	// addi r11,r11,-40
	ctx.r11.s64 = ctx.r11.s64 + -40;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8228a5c4
	if (!ctx.cr0.eq) goto loc_8228A5C4;
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bge cr6,0x82289df8
	if (!ctx.cr6.lt) goto loc_82289DF8;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82289DF8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bne 0x82289e08
	if (!ctx.cr0.eq) goto loc_82289E08;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82289E08:
	// addi r11,r11,-50
	ctx.r11.s64 = ctx.r11.s64 + -50;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82289e38
	if (ctx.cr0.eq) goto loc_82289E38;
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x8228a39c
	if (ctx.cr6.eq) goto loc_8228A39C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82289E38:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82289078
	ctx.lr = 0x82289E40;
	sub_82289078(ctx, base);
	// b 0x82289dac
	goto loc_82289DAC;
loc_82289E44:
	// cmpwi cr6,r11,53
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 53, ctx.xer);
	// beq cr6,0x8228a3d8
	if (ctx.cr6.eq) goto loc_8228A3D8;
	// cmpwi cr6,r11,83
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 83, ctx.xer);
	// beq cr6,0x8228a308
	if (ctx.cr6.eq) goto loc_8228A308;
	// cmpwi cr6,r11,113
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 113, ctx.xer);
	// beq cr6,0x8228a228
	if (ctx.cr6.eq) goto loc_8228A228;
	// cmpwi cr6,r11,114
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 114, ctx.xer);
	// beq cr6,0x82289e70
	if (ctx.cr6.eq) goto loc_82289E70;
	// cmpwi cr6,r11,132
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 132, ctx.xer);
	// bne cr6,0x8228a5c4
	if (!ctx.cr6.eq) goto loc_8228A5C4;
	// b 0x82289ab8
	goto loc_82289AB8;
loc_82289E70:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r9,336(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// lwz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x8228a6a4
	if (ctx.cr6.gt) goto loc_8228A6A4;
	// li r4,20000
	ctx.r4.s64 = 20000;
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// bl 0x82268f20
	ctx.lr = 0x82289E94;
	sub_82268F20(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r23,r30
	ctx.r23.u64 = ctx.r30.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8229faf8
	ctx.lr = 0x82289EAC;
	sub_8229FAF8(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// lwz r28,20(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82289018
	ctx.lr = 0x82289EBC;
	sub_82289018(ctx, base);
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// stb r29,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r29.u8);
	// stb r29,2(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2, ctx.r29.u8);
	// stb r29,3(r30)
	PPC_STORE_U8(ctx.r30.u32 + 3, ctx.r29.u8);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ori r11,r11,53
	ctx.r11.u64 = ctx.r11.u64 | 53;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r30,r10,4
	ctx.r30.s64 = ctx.r10.s64 + 4;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r9,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r9.u8);
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stb r9,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r9.u8);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stb r11,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r11.u8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r3,432(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 432);
	// bl 0x82268f20
	ctx.lr = 0x82289F2C;
	sub_82268F20(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// li r11,64
	ctx.r11.s64 = 64;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82289F40:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82289f40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82289F40;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82288f38
	ctx.lr = 0x82289F58;
	sub_82288F38(ctx, base);
	// lwz r24,20(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
loc_82289F5C:
	// lwz r27,20(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// clrlwi r28,r11,16
	ctx.r28.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmpwi cr6,r28,100
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 100, ctx.xer);
	// bge cr6,0x82289f78
	if (!ctx.cr6.lt) goto loc_82289F78;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82289F78:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bne 0x82289f88
	if (!ctx.cr0.eq) goto loc_82289F88;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82289F88:
	// cmpwi cr6,r11,113
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 113, ctx.xer);
	// beq cr6,0x82289f9c
	if (ctx.cr6.eq) goto loc_82289F9C;
	// cmpwi cr6,r11,114
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 114, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bne cr6,0x82289fa0
	if (!ctx.cr6.eq) goto loc_82289FA0;
loc_82289F9C:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82289FA0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82289ffc
	if (ctx.cr0.eq) goto loc_82289FFC;
	// cmpwi cr6,r28,100
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 100, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bge cr6,0x82289fb8
	if (!ctx.cr6.lt) goto loc_82289FB8;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82289FB8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82289fc4
	if (!ctx.cr0.eq) goto loc_82289FC4;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_82289FC4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82289018
	ctx.lr = 0x82289FCC;
	sub_82289018(ctx, base);
	// addi r11,r27,4
	ctx.r11.s64 = ctx.r27.s64 + 4;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,114
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 114, ctx.xer);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bne cr6,0x82289fe8
	if (!ctx.cr6.eq) goto loc_82289FE8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82289FE8:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x82288f38
	ctx.lr = 0x82289FFC;
	sub_82288F38(ctx, base);
loc_82289FFC:
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bge cr6,0x8228a018
	if (!ctx.cr6.lt) goto loc_8228A018;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_8228A018:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8228a024
	if (!ctx.cr0.eq) goto loc_8228A024;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8228A024:
	// addi r11,r11,-132
	ctx.r11.s64 = ctx.r11.s64 + -132;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228a0bc
	if (ctx.cr0.eq) goto loc_8228A0BC;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpw cr6,r7,r25
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r25.s32, ctx.xer);
	// bne cr6,0x8228a048
	if (!ctx.cr6.eq) goto loc_8228A048;
	// lwz r14,20(r31)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
loc_8228A048:
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8228A054:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x8228a06c
	if (ctx.cr6.eq) goto loc_8228A06C;
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x8228a080
	if (!ctx.cr6.eq) goto loc_8228A080;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_8228A06C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r10,64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// blt cr6,0x8228a054
	if (ctx.cr6.lt) goto loc_8228A054;
	// b 0x8228a084
	goto loc_8228A084;
loc_8228A080:
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
loc_8228A084:
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x8228a0c8
	if (ctx.cr6.eq) goto loc_8228A0C8;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_8228A094:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x8228a0b4
	if (ctx.cr6.eq) goto loc_8228A0B4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// blt cr6,0x8228a094
	if (ctx.cr6.lt) goto loc_8228A094;
	// b 0x8228a0bc
	goto loc_8228A0BC;
loc_8228A0B4:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r21,r11,r26
	PPC_STORE_U32(ctx.r11.u32 + ctx.r26.u32, ctx.r21.u32);
loc_8228A0BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82289078
	ctx.lr = 0x8228A0C4;
	sub_82289078(ctx, base);
	// b 0x82289f5c
	goto loc_82289F5C;
loc_8228A0C8:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r24,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r24.u32);
	// addi r27,r11,8
	ctx.r27.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r24,r27
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x8228a134
	if (ctx.cr6.eq) goto loc_8228A134;
loc_8228A0DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,20(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82289078
	ctx.lr = 0x8228A0E8;
	sub_82289078(ctx, base);
	// b 0x8228a11c
	goto loc_8228A11C;
loc_8228A0EC:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r9,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r9.u8);
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stb r9,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r9.u8);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stb r11,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r11.u8);
loc_8228A11C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8228a0ec
	if (!ctx.cr6.eq) goto loc_8228A0EC;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x8228a0dc
	if (!ctx.cr6.eq) goto loc_8228A0DC;
loc_8228A134:
	// cmplw cr6,r27,r14
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r14.u32, ctx.xer);
	// beq cr6,0x8228a1c4
	if (ctx.cr6.eq) goto loc_8228A1C4;
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r29,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r29.u8);
	// stb r29,2(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2, ctx.r29.u8);
	// stb r29,3(r30)
	PPC_STORE_U8(ctx.r30.u32 + 3, ctx.r29.u8);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ori r11,r11,39
	ctx.r11.u64 = ctx.r11.u64 | 39;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// stw r14,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r14.u32);
	// bl 0x82289078
	ctx.lr = 0x8228A168;
	sub_82289078(ctx, base);
	// b 0x8228a1b8
	goto loc_8228A1B8;
loc_8228A16C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,20(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82289078
	ctx.lr = 0x8228A178;
	sub_82289078(ctx, base);
	// b 0x8228a1ac
	goto loc_8228A1AC;
loc_8228A17C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r9,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r9.u8);
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stb r9,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r9.u8);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stb r11,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r11.u8);
loc_8228A1AC:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8228a17c
	if (!ctx.cr6.eq) goto loc_8228A17C;
loc_8228A1B8:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x8228a16c
	if (!ctx.cr6.eq) goto loc_8228A16C;
loc_8228A1C4:
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// stb r29,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r29.u8);
	// stb r29,2(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2, ctx.r29.u8);
	// stb r29,3(r30)
	PPC_STORE_U8(ctx.r30.u32 + 3, ctx.r29.u8);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ori r11,r11,41
	ctx.r11.u64 = ctx.r11.u64 | 41;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stb r29,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r29.u8);
	// stb r29,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r29.u8);
	// stb r29,6(r30)
	PPC_STORE_U8(ctx.r30.u32 + 6, ctx.r29.u8);
	// stb r29,7(r30)
	PPC_STORE_U8(ctx.r30.u32 + 7, ctx.r29.u8);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// ori r11,r11,83
	ctx.r11.u64 = ctx.r11.u64 | 83;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8229faf8
	ctx.lr = 0x8228A20C;
	sub_8229FAF8(ctx, base);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r23,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r23.u32);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// bl 0x82269050
	ctx.lr = 0x8228A224;
	sub_82269050(ctx, base);
	// b 0x8228a5c4
	goto loc_8228A5C4;
loc_8228A228:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82289018
	ctx.lr = 0x8228A230;
	sub_82289018(ctx, base);
	// addi r11,r28,8
	ctx.r11.s64 = ctx.r28.s64 + 8;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x8228a2f8
	goto loc_8228A2F8;
loc_8228A244:
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bge cr6,0x8228a260
	if (!ctx.cr6.lt) goto loc_8228A260;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_8228A260:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8228a26c
	if (!ctx.cr0.eq) goto loc_8228A26C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8228A26C:
	// addi r11,r11,-132
	ctx.r11.s64 = ctx.r11.s64 + -132;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228a29c
	if (ctx.cr0.eq) goto loc_8228A29C;
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x8228a5c4
	if (ctx.cr6.eq) goto loc_8228A5C4;
loc_8228A29C:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82289328
	ctx.lr = 0x8228A2A4;
	sub_82289328(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228a2ec
	if (ctx.cr0.eq) goto loc_8228A2EC;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_8228A2B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82289078
	ctx.lr = 0x8228A2B8;
	sub_82289078(ctx, base);
	// lwz r28,20(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82289328
	ctx.lr = 0x8228A2C4;
	sub_82289328(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228a2d0
	if (ctx.cr0.eq) goto loc_8228A2D0;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
loc_8228A2D0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822892c0
	ctx.lr = 0x8228A2D8;
	sub_822892C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228a2e4
	if (ctx.cr0.eq) goto loc_8228A2E4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_8228A2E4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x8228a2b0
	if (!ctx.cr6.gt) goto loc_8228A2B0;
loc_8228A2EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82289078
	ctx.lr = 0x8228A2F4;
	sub_82289078(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
loc_8228A2F8:
	// bl 0x822892c0
	ctx.lr = 0x8228A2FC;
	sub_822892C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228a244
	if (ctx.cr0.eq) goto loc_8228A244;
	// b 0x8228a5c4
	goto loc_8228A5C4;
loc_8228A308:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8228a32c
	if (!ctx.cr6.eq) goto loc_8228A32C;
	// li r7,794
	ctx.r7.s64 = 794;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x8228A32C;
	sub_821BBC58(ctx, base);
loc_8228A32C:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x822a4920
	ctx.lr = 0x8228A334;
	sub_822A4920(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x8228a350
	if (!ctx.cr6.lt) goto loc_8228A350;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_8228A350:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8228a35c
	if (!ctx.cr0.eq) goto loc_8228A35C;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_8228A35C:
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bne cr6,0x8228a3a8
	if (!ctx.cr6.eq) goto loc_8228A3A8;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8228a390
	if (ctx.cr6.gt) goto loc_8228A390;
	// li r7,801
	ctx.r7.s64 = 801;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x8228A390;
	sub_821BBC58(ctx, base);
loc_8228A390:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_8228A39C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x8228a5f8
	goto loc_8228A5F8;
loc_8228A3A8:
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// bne cr6,0x8228a3bc
	if (!ctx.cr6.eq) goto loc_8228A3BC;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x8228a39c
	goto loc_8228A39C;
loc_8228A3BC:
	// li r7,806
	ctx.r7.s64 = 806;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x8228A3D4;
	sub_821BBC58(ctx, base);
	// b 0x8228a39c
	goto loc_8228A39C;
loc_8228A3D8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8228A3EC:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8228a554
	if (ctx.cr6.eq) goto loc_8228A554;
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8228a410
	if (ctx.cr6.eq) goto loc_8228A410;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8228a3ec
	if (!ctx.cr0.eq) goto loc_8228A3EC;
loc_8228A410:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_8228A414:
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cntlzw r10,r8
	ctx.r10.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// clrlwi r30,r10,24
	ctx.r30.u64 = ctx.r10.u32 & 0xFF;
loc_8228A428:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8228a55c
	if (ctx.cr6.eq) goto loc_8228A55C;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8228a44c
	if (ctx.cr6.eq) goto loc_8228A44C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8228a428
	if (!ctx.cr0.eq) goto loc_8228A428;
loc_8228A44C:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_8228A450:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8228a5b0
	if (ctx.cr0.eq) goto loc_8228A5B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82289078
	ctx.lr = 0x8228A470;
	sub_82289078(ctx, base);
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8228a5a4
	if (!ctx.cr0.eq) goto loc_8228A5A4;
	// bl 0x8229faf8
	ctx.lr = 0x8228A484;
	sub_8229FAF8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_8228A490:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x8228a500
	if (!ctx.cr6.eq) goto loc_8228A500;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bge cr6,0x8228a4b4
	if (!ctx.cr6.lt) goto loc_8228A4B4;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_8228A4B4:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bne 0x8228a4c4
	if (!ctx.cr0.eq) goto loc_8228A4C4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_8228A4C4:
	// addi r10,r10,-39
	ctx.r10.s64 = ctx.r10.s64 + -39;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8228a5c4
	if (!ctx.cr0.eq) goto loc_8228A5C4;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// bge cr6,0x8228a4e4
	if (!ctx.cr6.lt) goto loc_8228A4E4;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_8228A4E4:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8228a4f0
	if (!ctx.cr0.eq) goto loc_8228A4F0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8228A4F0:
	// addi r11,r11,-41
	ctx.r11.s64 = ctx.r11.s64 + -41;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8228a5c4
	if (!ctx.cr0.eq) goto loc_8228A5C4;
loc_8228A500:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x8228a51c
	if (!ctx.cr6.lt) goto loc_8228A51C;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_8228A51C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bne 0x8228a52c
	if (!ctx.cr0.eq) goto loc_8228A52C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8228A52C:
	// cmpwi cr6,r11,52
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 52, ctx.xer);
	// beq cr6,0x8228a540
	if (ctx.cr6.eq) goto loc_8228A540;
	// cmpwi cr6,r11,53
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 53, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bne cr6,0x8228a544
	if (!ctx.cr6.eq) goto loc_8228A544;
loc_8228A540:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_8228A544:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228a564
	if (ctx.cr0.eq) goto loc_8228A564;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// b 0x8228a598
	goto loc_8228A598;
loc_8228A554:
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// b 0x8228a414
	goto loc_8228A414;
loc_8228A55C:
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// b 0x8228a450
	goto loc_8228A450;
loc_8228A564:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bge cr6,0x8228a574
	if (!ctx.cr6.lt) goto loc_8228A574;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_8228A574:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bne 0x8228a584
	if (!ctx.cr0.eq) goto loc_8228A584;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8228A584:
	// addi r11,r11,-41
	ctx.r11.s64 = ctx.r11.s64 + -41;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228a598
	if (ctx.cr0.eq) goto loc_8228A598;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
loc_8228A598:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82289078
	ctx.lr = 0x8228A5A0;
	sub_82289078(ctx, base);
	// b 0x8228a490
	goto loc_8228A490;
loc_8228A5A4:
	// bl 0x8229faf8
	ctx.lr = 0x8228A5A8;
	sub_8229FAF8(ctx, base);
	// stw r20,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r20.u32);
	// b 0x8228a5c4
	goto loc_8228A5C4;
loc_8228A5B0:
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8229faf8
	ctx.lr = 0x8228A5BC;
	sub_8229FAF8(ctx, base);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
loc_8228A5C0:
	// mr r22,r20
	ctx.r22.u64 = ctx.r20.u64;
loc_8228A5C4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi cr6,r10,15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15, ctx.xer);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// beq cr6,0x8228a5dc
	if (ctx.cr6.eq) goto loc_8228A5DC;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_8228A5DC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8228a600
	if (ctx.cr6.eq) goto loc_8228A600;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r10,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8228A5F8:
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x8228a5c4
	goto loc_8228A5C4;
loc_8228A600:
	// clrlwi. r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82289710
	if (ctx.cr0.eq) goto loc_82289710;
loc_8228A608:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x8228a624
	if (!ctx.cr6.lt) goto loc_8228A624;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_8228A624:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bne 0x8228a634
	if (!ctx.cr0.eq) goto loc_8228A634;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8228A634:
	// addi r11,r11,-40
	ctx.r11.s64 = ctx.r11.s64 + -40;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8228a6d4
	if (!ctx.cr0.eq) goto loc_8228A6D4;
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bge cr6,0x8228a654
	if (!ctx.cr6.lt) goto loc_8228A654;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_8228A654:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228a660
	if (ctx.cr0.eq) goto loc_8228A660;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
loc_8228A660:
	// addi r11,r29,-43
	ctx.r11.s64 = ctx.r29.s64 + -43;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8228a6d4
	if (!ctx.cr0.eq) goto loc_8228A6D4;
	// b 0x8228969c
	goto loc_8228969C;
loc_8228A674:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,27
	ctx.r10.s64 = 27;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r10,340(r11)
	PPC_STORE_U32(ctx.r11.u32 + 340, ctx.r10.u32);
	// bl 0x822ee4b0
	ctx.lr = 0x8228A68C;
	sub_822EE4B0(ctx, base);
loc_8228A68C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,27
	ctx.r10.s64 = 27;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r10,340(r11)
	PPC_STORE_U32(ctx.r11.u32 + 340, ctx.r10.u32);
	// bl 0x822ee4b0
	ctx.lr = 0x8228A6A4;
	sub_822EE4B0(ctx, base);
loc_8228A6A4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,27
	ctx.r10.s64 = 27;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r10,340(r11)
	PPC_STORE_U32(ctx.r11.u32 + 340, ctx.r10.u32);
	// bl 0x822ee4b0
	ctx.lr = 0x8228A6BC;
	sub_822EE4B0(ctx, base);
loc_8228A6BC:
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x822a4920
	ctx.lr = 0x8228A6C4;
	sub_822A4920(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// bl 0x82269050
	ctx.lr = 0x8228A6D4;
	sub_82269050(ctx, base);
loc_8228A6D4:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228a6bc
	if (ctx.cr0.eq) goto loc_8228A6BC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8228A6EC:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822e9900
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8228A6F4"))) PPC_WEAK_FUNC(sub_8228A6F4);
PPC_FUNC_IMPL(__imp__sub_8228A6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8228A6F8"))) PPC_WEAK_FUNC(sub_8228A6F8);
PPC_FUNC_IMPL(__imp__sub_8228A6F8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r9,2160(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2160);
	// lwz r10,76(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// lwz r11,2164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2164);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r9,2168(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2168);
	// lwz r10,2172(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2172);
	// stw r8,2160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2160, ctx.r8.u32);
	// lwz r8,80(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r11,2164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2164, ctx.r11.u32);
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,2168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2168, ctx.r11.u32);
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,2172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2172, ctx.r11.u32);
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8228a774
	if (!ctx.cr6.gt) goto loc_8228A774;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r5,76(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r11,-31400
	ctx.r4.s64 = ctx.r11.s64 + -31400;
	// bl 0x821313e0
	ctx.lr = 0x8228A774;
	sub_821313E0(ctx, base);
loc_8228A774:
	// lwz r5,80(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// cmpwi r5,0
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble 0x8228a790
	if (!ctx.cr0.gt) goto loc_8228A790;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r11,-31464
	ctx.r4.s64 = ctx.r11.s64 + -31464;
	// bl 0x821313e0
	ctx.lr = 0x8228A790;
	sub_821313E0(ctx, base);
loc_8228A790:
	// lwz r5,84(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// cmpwi r5,0
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble 0x8228a7ac
	if (!ctx.cr0.gt) goto loc_8228A7AC;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r11,-31508
	ctx.r4.s64 = ctx.r11.s64 + -31508;
	// bl 0x821313e0
	ctx.lr = 0x8228A7AC;
	sub_821313E0(ctx, base);
loc_8228A7AC:
	// lwz r5,88(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// cmpwi r5,0
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble 0x8228a7c8
	if (!ctx.cr0.gt) goto loc_8228A7C8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r11,-31544
	ctx.r4.s64 = ctx.r11.s64 + -31544;
	// bl 0x821313e0
	ctx.lr = 0x8228A7C8;
	sub_821313E0(ctx, base);
loc_8228A7C8:
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r6,64(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r11,-31616
	ctx.r4.s64 = ctx.r11.s64 + -31616;
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// addze r5,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r5.s64 = temp.s64;
	// subf r7,r6,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r6.s64;
	// add r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 + ctx.r5.u64;
	// bl 0x821313e0
	ctx.lr = 0x8228A7F4;
	sub_821313E0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r4,r11,-31672
	ctx.r4.s64 = ctx.r11.s64 + -31672;
	// lwz r6,60(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// srawi r11,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 1;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addze r5,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r5.s64 = temp.s64;
	// bl 0x821313e0
	ctx.lr = 0x8228A814;
	sub_821313E0(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8228a868
	if (!ctx.cr0.eq) goto loc_8228A868;
	// lwz r5,72(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// cmpwi r5,0
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x8228a850
	if (ctx.cr0.eq) goto loc_8228A850;
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// twllei r5,0
	// mulli r10,r11,100
	ctx.r10.s64 = ctx.r11.s64 * 100;
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r7,r10,r5
	ctx.r7.s32 = ctx.r10.s32 / ctx.r5.s32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// andc r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 & ~ctx.r11.u64;
	// twlgei r11,-1
	// b 0x8228a854
	goto loc_8228A854;
loc_8228A850:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8228A854:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r6,68(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r11,-31744
	ctx.r4.s64 = ctx.r11.s64 + -31744;
	// bl 0x821313e0
	ctx.lr = 0x8228A868;
	sub_821313E0(ctx, base);
loc_8228A868:
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

__attribute__((alias("__imp__sub_8228A880"))) PPC_WEAK_FUNC(sub_8228A880);
PPC_FUNC_IMPL(__imp__sub_8228A880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x8228A888;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bbbc0
	ctx.lr = 0x8228A8B0;
	sub_821BBBC0(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bbbc0
	ctx.lr = 0x8228A8C4;
	sub_821BBBC0(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bbbc0
	ctx.lr = 0x8228A8D8;
	sub_821BBBC0(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bbbc0
	ctx.lr = 0x8228A8EC;
	sub_821BBBC0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,9
	ctx.r5.s64 = 9;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bbbc0
	ctx.lr = 0x8228A900;
	sub_821BBBC0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bbbc0
	ctx.lr = 0x8228A914;
	sub_821BBBC0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r11,r11,-15872
	ctx.r11.s64 = ctx.r11.s64 + -15872;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,24(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x821bbbc0
	ctx.lr = 0x8228A930;
	sub_821BBBC0(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r9,r11,6
	ctx.r9.s64 = ctx.r11.s64 + 6;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r11.u32);
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r10,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8228A954"))) PPC_WEAK_FUNC(sub_8228A954);
PPC_FUNC_IMPL(__imp__sub_8228A954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8228A958"))) PPC_WEAK_FUNC(sub_8228A958);
PPC_FUNC_IMPL(__imp__sub_8228A958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x8228A960;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// beq cr6,0x8228a980
	if (ctx.cr6.eq) goto loc_8228A980;
	// li r6,0
	ctx.r6.s64 = 0;
loc_8228A980:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bbbc0
	ctx.lr = 0x8228A990;
	sub_821BBBC0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,38
	ctx.r5.s64 = 38;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bbbc0
	ctx.lr = 0x8228A9A4;
	sub_821BBBC0(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,42
	ctx.r4.s64 = 42;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bbbc0
	ctx.lr = 0x8228A9B8;
	sub_821BBBC0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bbbc0
	ctx.lr = 0x8228A9CC;
	sub_821BBBC0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r11,r11,-15872
	ctx.r11.s64 = ctx.r11.s64 + -15872;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,68(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// bl 0x821bbbc0
	ctx.lr = 0x8228A9E8;
	sub_821BBBC0(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8228AA08"))) PPC_WEAK_FUNC(sub_8228AA08);
PPC_FUNC_IMPL(__imp__sub_8228AA08) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821bbbc0
	ctx.lr = 0x8228AA38;
	sub_821BBBC0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,11
	ctx.r5.s64 = 11;
	// li r4,33
	ctx.r4.s64 = 33;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821bbbc0
	ctx.lr = 0x8228AA4C;
	sub_821BBBC0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821bbbc0
	ctx.lr = 0x8228AA60;
	sub_821BBBC0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r11,r11,-15872
	ctx.r11.s64 = ctx.r11.s64 + -15872;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,20(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x821bbbc0
	ctx.lr = 0x8228AA7C;
	sub_821BBBC0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8228AAAC"))) PPC_WEAK_FUNC(sub_8228AAAC);
PPC_FUNC_IMPL(__imp__sub_8228AAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8228AAB0"))) PPC_WEAK_FUNC(sub_8228AAB0);
PPC_FUNC_IMPL(__imp__sub_8228AAB0) {
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
	// lwz r4,952(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 952);
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// bl 0x822a29d0
	ctx.lr = 0x8228AAC8;
	sub_822A29D0(ctx, base);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x8228ab08
	if (ctx.cr6.eq) goto loc_8228AB08;
	// ble cr6,0x8228ab00
	if (!ctx.cr6.gt) goto loc_8228AB00;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// ble cr6,0x8228aaf8
	if (!ctx.cr6.gt) goto loc_8228AAF8;
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// ble cr6,0x8228ab08
	if (!ctx.cr6.gt) goto loc_8228AB08;
	// addi r11,r3,-43
	ctx.r11.s64 = ctx.r3.s64 + -43;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x8228ab00
	if (ctx.cr6.gt) goto loc_8228AB00;
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8228ab0c
	goto loc_8228AB0C;
loc_8228AAF8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8228ab0c
	goto loc_8228AB0C;
loc_8228AB00:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8228ab0c
	goto loc_8228AB0C;
loc_8228AB08:
	// li r3,2
	ctx.r3.s64 = 2;
loc_8228AB0C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8228AB1C"))) PPC_WEAK_FUNC(sub_8228AB1C);
PPC_FUNC_IMPL(__imp__sub_8228AB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8228AB20"))) PPC_WEAK_FUNC(sub_8228AB20);
PPC_FUNC_IMPL(__imp__sub_8228AB20) {
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
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8228abb8
	if (ctx.cr6.eq) goto loc_8228ABB8;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8228abb0
	if (ctx.cr6.eq) goto loc_8228ABB0;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8228aba8
	if (ctx.cr6.eq) goto loc_8228ABA8;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x8228ab88
	if (ctx.cr6.eq) goto loc_8228AB88;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x8228aba0
	if (ctx.cr6.eq) goto loc_8228ABA0;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x8228ab98
	if (ctx.cr6.eq) goto loc_8228AB98;
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// beq cr6,0x8228ab90
	if (ctx.cr6.eq) goto loc_8228AB90;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r7,2874
	ctx.r7.s64 = 2874;
	// addi r6,r11,-31344
	ctx.r6.s64 = ctx.r11.s64 + -31344;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,29152
	ctx.r5.s64 = ctx.r11.s64 + 29152;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x8228AB88;
	sub_821BBC58(ctx, base);
loc_8228AB88:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8228abbc
	goto loc_8228ABBC;
loc_8228AB90:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8228abbc
	goto loc_8228ABBC;
loc_8228AB98:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x8228abbc
	goto loc_8228ABBC;
loc_8228ABA0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8228abbc
	goto loc_8228ABBC;
loc_8228ABA8:
	// li r3,5
	ctx.r3.s64 = 5;
	// b 0x8228abbc
	goto loc_8228ABBC;
loc_8228ABB0:
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x8228abbc
	goto loc_8228ABBC;
loc_8228ABB8:
	// li r3,7
	ctx.r3.s64 = 7;
loc_8228ABBC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

