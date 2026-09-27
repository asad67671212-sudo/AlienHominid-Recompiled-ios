#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82135610"))) PPC_WEAK_FUNC(sub_82135610);
PPC_FUNC_IMPL(__imp__sub_82135610) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// stw r30,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r30.u32);
	// rlwinm r11,r11,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	// stw r30,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r30.u32);
	// stw r30,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r30.u32);
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// bl 0x822e9ff0
	ctx.lr = 0x82135654;
	sub_822E9FF0(ctx, base);
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// addi r3,r31,180
	ctx.r3.s64 = ctx.r31.s64 + 180;
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
	// bl 0x822e9ff0
	ctx.lr = 0x82135674;
	sub_822E9FF0(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r30,212(r31)
	PPC_STORE_U16(ctx.r31.u32 + 212, ctx.r30.u16);
	// addi r3,r31,216
	ctx.r3.s64 = ctx.r31.s64 + 216;
	// bl 0x822e9ff0
	ctx.lr = 0x82135688;
	sub_822E9FF0(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r30.u32);
	// addi r3,r31,252
	ctx.r3.s64 = ctx.r31.s64 + 252;
	// bl 0x822e9ff0
	ctx.lr = 0x8213569C;
	sub_822E9FF0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_821356BC"))) PPC_WEAK_FUNC(sub_821356BC);
PPC_FUNC_IMPL(__imp__sub_821356BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821356C0"))) PPC_WEAK_FUNC(sub_821356C0);
PPC_FUNC_IMPL(__imp__sub_821356C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x821356C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x8212e828
	ctx.lr = 0x821356E0;
	sub_8212E828(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82135710
	if (ctx.cr0.eq) goto loc_82135710;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212e868
	ctx.lr = 0x821356F0;
	sub_8212E868(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-14368
	ctx.r10.s64 = ctx.r11.s64 + -14368;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x82135714
	goto loc_82135714;
loc_82135710:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82135714:
	// stw r28,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r28.u32);
	// stw r29,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r29.u32);
	// lwz r11,328(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r3,328(r30)
	PPC_STORE_U32(ctx.r30.u32 + 328, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82135730"))) PPC_WEAK_FUNC(sub_82135730);
PPC_FUNC_IMPL(__imp__sub_82135730) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82135760
	if (ctx.cr0.eq) goto loc_82135760;
	// bl 0x821ab978
	ctx.lr = 0x8213575C;
	sub_821AB978(ctx, base);
	// stw r30,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r30.u32);
loc_82135760:
	// lwz r3,312(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82135774
	if (ctx.cr0.eq) goto loc_82135774;
	// bl 0x820edd20
	ctx.lr = 0x82135770;
	sub_820EDD20(ctx, base);
	// stw r30,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r30.u32);
loc_82135774:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82135794
	if (ctx.cr0.eq) goto loc_82135794;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82135790;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
loc_82135794:
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

__attribute__((alias("__imp__sub_821357AC"))) PPC_WEAK_FUNC(sub_821357AC);
PPC_FUNC_IMPL(__imp__sub_821357AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821357B0"))) PPC_WEAK_FUNC(sub_821357B0);
PPC_FUNC_IMPL(__imp__sub_821357B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4192(r1)
	ea = -4192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r10,r11,18620
	ctx.r10.s64 = ctx.r11.s64 + 18620;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r9,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r9.u32);
loc_821357E0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82135804
	if (ctx.cr0.eq) goto loc_82135804;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x821357e0
	if (ctx.cr6.eq) goto loc_821357E0;
loc_82135804:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82135820
	if (!ctx.cr0.eq) goto loc_82135820;
	// addi r5,r31,16
	ctx.r5.s64 = ctx.r31.s64 + 16;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,2000
	ctx.r4.s64 = 2000;
	// bl 0x821113b0
	ctx.lr = 0x8213581C;
	sub_821113B0(ctx, base);
	// b 0x82135854
	goto loc_82135854;
loc_82135820:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82104ab0
	ctx.lr = 0x82135830;
	sub_82104AB0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r11,27488
	ctx.r6.s64 = ctx.r11.s64 + 27488;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,7100
	ctx.r5.s64 = 7100;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// stb r11,4175(r1)
	PPC_STORE_U8(ctx.r1.u32 + 4175, ctx.r11.u8);
	// bl 0x82110f18
	ctx.lr = 0x82135854;
	sub_82110F18(ctx, base);
loc_82135854:
	// addi r1,r1,4192
	ctx.r1.s64 = ctx.r1.s64 + 4192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82135868"))) PPC_WEAK_FUNC(sub_82135868);
PPC_FUNC_IMPL(__imp__sub_82135868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x82135870;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x821358fc
	if (ctx.cr0.eq) goto loc_821358FC;
loc_82135890:
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82135898:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r7,r7,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq 0x821358bc
	if (ctx.cr0.eq) goto loc_821358BC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82135898
	if (ctx.cr6.eq) goto loc_82135898;
loc_821358BC:
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8213594c
	if (ctx.cr0.eq) goto loc_8213594C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_821358CC:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821358cc
	if (!ctx.cr6.eq) goto loc_821358CC;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// bne 0x82135890
	if (!ctx.cr0.eq) goto loc_82135890;
loc_821358FC:
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82135918
	if (ctx.cr6.gt) goto loc_82135918;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821347c0
	ctx.lr = 0x82135918;
	sub_821347C0(ctx, base);
loc_82135918:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82135920:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82135920
	if (!ctx.cr6.eq) goto loc_82135920;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_8213594C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82135958"))) PPC_WEAK_FUNC(sub_82135958);
PPC_FUNC_IMPL(__imp__sub_82135958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98d8
	ctx.lr = 0x82135960;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// stb r28,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r28.u8);
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// stb r28,0(r24)
	PPC_STORE_U8(ctx.r24.u32 + 0, ctx.r28.u8);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// stw r28,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r28.u32);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,46
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 46, ctx.xer);
	// bne cr6,0x82135a08
	if (!ctx.cr6.eq) goto loc_82135A08;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 1;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// b 0x821359cc
	goto loc_821359CC;
loc_821359B8:
	// cmpwi cr6,r11,91
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 91, ctx.xer);
	// beq cr6,0x821359dc
	if (ctx.cr6.eq) goto loc_821359DC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821359dc
	if (ctx.cr6.eq) goto loc_821359DC;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_821359CC:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,46
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 46, ctx.xer);
	// bne cr6,0x821359b8
	if (!ctx.cr6.eq) goto loc_821359B8;
loc_821359DC:
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r30,r11,65535
	ctx.r30.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r26,r30
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x821359f8
	if (ctx.cr6.gt) goto loc_821359F8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821347c0
	ctx.lr = 0x821359F8;
	sub_821347C0(ctx, base);
loc_821359F8:
	// subf r11,r31,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r31.s64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stb r28,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r28.u8);
	// b 0x82135ab4
	goto loc_82135AB4;
loc_82135A08:
	// cmpwi cr6,r11,91
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 91, ctx.xer);
	// bne cr6,0x82135a5c
	if (!ctx.cr6.eq) goto loc_82135A5C;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// bl 0x822ea960
	ctx.lr = 0x82135A24;
	sub_822EA960(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// b 0x82135a38
	goto loc_82135A38;
loc_82135A2C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82135a48
	if (ctx.cr6.eq) goto loc_82135A48;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_82135A38:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,93
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 93, ctx.xer);
	// bne cr6,0x82135a2c
	if (!ctx.cr6.eq) goto loc_82135A2C;
loc_82135A48:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82135a8c
	if (ctx.cr6.eq) goto loc_82135A8C;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x82135a8c
	goto loc_82135A8C;
loc_82135A5C:
	// stw r28,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r28.u32);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// b 0x82135a80
	goto loc_82135A80;
loc_82135A68:
	// cmpwi cr6,r11,91
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 91, ctx.xer);
	// beq cr6,0x82135a8c
	if (ctx.cr6.eq) goto loc_82135A8C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82135a8c
	if (ctx.cr6.eq) goto loc_82135A8C;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
loc_82135A80:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,46
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 46, ctx.xer);
	// bne cr6,0x82135a68
	if (!ctx.cr6.eq) goto loc_82135A68;
loc_82135A8C:
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r30,r11,65535
	ctx.r30.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r26,r30
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x82135aac
	if (ctx.cr6.gt) goto loc_82135AAC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821347c0
	ctx.lr = 0x82135AAC;
	sub_821347C0(ctx, base);
loc_82135AAC:
	// subf r11,r31,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r31.s64;
	// stbx r28,r11,r27
	PPC_STORE_U8(ctx.r11.u32 + ctx.r27.u32, ctx.r28.u8);
loc_82135AB4:
	// cmplw cr6,r25,r30
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x82135acc
	if (ctx.cr6.gt) goto loc_82135ACC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821347c0
	ctx.lr = 0x82135ACC;
	sub_821347C0(ctx, base);
loc_82135ACC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822e9928
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82135AD4"))) PPC_WEAK_FUNC(sub_82135AD4);
PPC_FUNC_IMPL(__imp__sub_82135AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82135AD8"))) PPC_WEAK_FUNC(sub_82135AD8);
PPC_FUNC_IMPL(__imp__sub_82135AD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98d4
	ctx.lr = 0x82135AE0;
	__savegprlr_23(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// li r7,128
	ctx.r7.s64 = 128;
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82135958
	ctx.lr = 0x82135B10;
	sub_82135958(ctx, base);
	// lwz r23,84(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r23,2
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 2, ctx.xer);
	// bne cr6,0x82135b2c
	if (!ctx.cr6.eq) goto loc_82135B2C;
	// li r4,128
	ctx.r4.s64 = 128;
	// lwz r5,0(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821347c0
	ctx.lr = 0x82135B2C;
	sub_821347C0(ctx, base);
loc_82135B2C:
	// lbz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 224);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r24,80(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// extsb. r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82135bbc
	if (ctx.cr0.eq) goto loc_82135BBC;
	// lwz r11,56(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 56);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82135bbc
	if (!ctx.cr6.gt) goto loc_82135BBC;
	// addi r6,r25,60
	ctx.r6.s64 = ctx.r25.s64 + 60;
loc_82135B54:
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
loc_82135B60:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82135b84
	if (ctx.cr0.eq) goto loc_82135B84;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82135b60
	if (ctx.cr6.eq) goto loc_82135B60;
loc_82135B84:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82135ba8
	if (!ctx.cr0.eq) goto loc_82135BA8;
	// lwz r11,52(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 52);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x82135ba8
	if (!ctx.cr6.eq) goto loc_82135BA8;
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82135ca0
	if (ctx.cr6.eq) goto loc_82135CA0;
loc_82135BA8:
	// lwz r11,56(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 56);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82135b54
	if (ctx.cr6.lt) goto loc_82135B54;
loc_82135BBC:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1084
	ctx.r4.s64 = 1084;
	// beq cr6,0x82135cc0
	if (ctx.cr6.eq) goto loc_82135CC0;
	// bl 0x8212e6e0
	ctx.lr = 0x82135BD4;
	sub_8212E6E0(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82135BE0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82135be0
	if (!ctx.cr6.eq) goto loc_82135BE0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8212e6e0
	ctx.lr = 0x82135C10;
	sub_8212E6E0(ctx, base);
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82135c30
	if (ctx.cr6.gt) goto loc_82135C30;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x821347c0
	ctx.lr = 0x82135C30;
	sub_821347C0(ctx, base);
loc_82135C30:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r24,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r24.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stw r23,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r23.u32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// stw r28,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r28.u32);
	// stw r28,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r28.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r28,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r28.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r28,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r28.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x82135ad8
	ctx.lr = 0x82135C94;
	sub_82135AD8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82135d84
	if (!ctx.cr6.eq) goto loc_82135D84;
	// b 0x82135da4
	goto loc_82135DA4;
loc_82135CA0:
	// addi r11,r5,15
	ctx.r11.s64 = ctx.r5.s64 + 15;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwzx r6,r11,r25
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// bl 0x82135ad8
	ctx.lr = 0x82135CBC;
	sub_82135AD8(ctx, base);
	// b 0x82135da4
	goto loc_82135DA4;
loc_82135CC0:
	// bl 0x8212e6e0
	ctx.lr = 0x82135CC4;
	sub_8212E6E0(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82135CD0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82135cd0
	if (!ctx.cr6.eq) goto loc_82135CD0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8212e6e0
	ctx.lr = 0x82135D00;
	sub_8212E6E0(ctx, base);
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82135d20
	if (ctx.cr6.gt) goto loc_82135D20;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x821347c0
	ctx.lr = 0x82135D20;
	sub_821347C0(ctx, base);
loc_82135D20:
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r24,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r24.u32);
	// stw r23,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r23.u32);
	// stw r28,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r28.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// lwz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r28,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r28.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82135D84:
	// lwz r11,56(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 56);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r11,r25
	PPC_STORE_U32(ctx.r11.u32 + ctx.r25.u32, ctx.r31.u32);
	// lwz r11,56(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 56);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,56(r25)
	PPC_STORE_U32(ctx.r25.u32 + 56, ctx.r11.u32);
loc_82135DA4:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x822e9924
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82135DAC"))) PPC_WEAK_FUNC(sub_82135DAC);
PPC_FUNC_IMPL(__imp__sub_82135DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82135DB0"))) PPC_WEAK_FUNC(sub_82135DB0);
PPC_FUNC_IMPL(__imp__sub_82135DB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98c8
	ctx.lr = 0x82135DB8;
	__savegprlr_20(ctx, base);
	// stwu r1,-2256(r1)
	ea = -2256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// sth r9,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r9.u16);
	// sth r8,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r8.u16);
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// sth r10,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r10.u16);
	// bne cr6,0x82135e24
	if (!ctx.cr6.eq) goto loc_82135E24;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82135e28
	if (!ctx.cr6.eq) goto loc_82135E28;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82135e28
	if (ctx.cr6.eq) goto loc_82135E28;
loc_82135E24:
	// lwz r31,60(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
loc_82135E28:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82135e40
	if (!ctx.cr0.eq) goto loc_82135E40;
	// sth r11,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r11.u16);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// b 0x82135ed8
	goto loc_82135ED8;
loc_82135E40:
	// clrlwi r20,r11,16
	ctx.r20.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r20,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r20.u16);
	// ble cr6,0x82135ec0
	if (!ctx.cr6.gt) goto loc_82135EC0;
	// addi r29,r1,100
	ctx.r29.s64 = ctx.r1.s64 + 100;
	// addi r30,r31,60
	ctx.r30.s64 = ctx.r31.s64 + 60;
loc_82135E60:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82135868
	ctx.lr = 0x82135E78;
	sub_82135868(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// stw r11,-4(r29)
	PPC_STORE_U32(ctx.r29.u32 + -4, ctx.r11.u32);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x82135db0
	ctx.lr = 0x82135EA4;
	sub_82135DB0(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82135e60
	if (ctx.cr6.lt) goto loc_82135E60;
loc_82135EC0:
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// clrlwi r4,r20,16
	ctx.r4.u64 = ctx.r20.u32 & 0xFFFF;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821341e0
	ctx.lr = 0x82135ED4;
	sub_821341E0(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
loc_82135ED8:
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821342a8
	ctx.lr = 0x82135EE8;
	sub_821342A8(ctx, base);
	// addi r1,r1,2256
	ctx.r1.s64 = ctx.r1.s64 + 2256;
	// b 0x822e9918
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82135EF0"))) PPC_WEAK_FUNC(sub_82135EF0);
PPC_FUNC_IMPL(__imp__sub_82135EF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x82135EF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82135f24
	if (!ctx.cr6.gt) goto loc_82135F24;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82135f50
	goto loc_82135F50;
loc_82135F24:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82134820
	ctx.lr = 0x82135F34;
	sub_82134820(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82135f50
	if (ctx.cr0.lt) goto loc_82135F50;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// subf r4,r11,r31
	ctx.r4.s64 = ctx.r31.s64 - ctx.r11.s64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x821347c0
	ctx.lr = 0x82135F50;
	sub_821347C0(ctx, base);
loc_82135F50:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82135F58"))) PPC_WEAK_FUNC(sub_82135F58);
PPC_FUNC_IMPL(__imp__sub_82135F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r3,3032(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3032);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821357b0
	ctx.lr = 0x82135F94;
	sub_821357B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82135FA4"))) PPC_WEAK_FUNC(sub_82135FA4);
PPC_FUNC_IMPL(__imp__sub_82135FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82135FA8"))) PPC_WEAK_FUNC(sub_82135FA8);
PPC_FUNC_IMPL(__imp__sub_82135FA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821357b0
	ctx.lr = 0x82135FE0;
	sub_821357B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82135FF0"))) PPC_WEAK_FUNC(sub_82135FF0);
PPC_FUNC_IMPL(__imp__sub_82135FF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98b0
	ctx.lr = 0x82135FF8;
	__savegprlr_14(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r24,277
	ctx.r24.s64 = 277;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// addi r31,r10,-17480
	ctx.r31.s64 = ctx.r10.s64 + -17480;
	// stw r22,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r22.u32);
	// stw r25,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r25.u32);
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// stw r22,60(r25)
	PPC_STORE_U32(ctx.r25.u32 + 60, ctx.r22.u32);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// stw r22,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r22.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stw r22,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r22.u32);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r22,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r22.u32);
	// li r21,1
	ctx.r21.s64 = 1;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
loc_8213605C:
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// extsb. r10,r4
	ctx.r10.s64 = ctx.r4.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r8,r5,1
	ctx.r8.s64 = ctx.r5.s64 + 1;
	// lbz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// beq 0x821360a8
	if (ctx.cr0.eq) goto loc_821360A8;
loc_82136074:
	// cmpwi cr6,r10,95
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 95, ctx.xer);
	// bne cr6,0x82136084
	if (!ctx.cr6.eq) goto loc_82136084;
	// extsb. r28,r7
	ctx.r28.s64 = ctx.r7.s8;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x821360bc
	if (ctx.cr0.eq) goto loc_821360BC;
loc_82136084:
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x821360c4
	if (!ctx.cr6.eq) goto loc_821360C4;
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// extsb. r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82136074
	if (!ctx.cr0.eq) goto loc_82136074;
loc_821360A8:
	// extsb r10,r7
	ctx.r10.s64 = ctx.r7.s8;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// b 0x821360c8
	goto loc_821360C8;
loc_821360BC:
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// b 0x821360c8
	goto loc_821360C8;
loc_821360C4:
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_821360C8:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x821360e4
	if (!ctx.cr0.eq) goto loc_821360E4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// cmpwi cr6,r30,128
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 128, ctx.xer);
	// blt cr6,0x8213605c
	if (ctx.cr6.lt) goto loc_8213605C;
	// b 0x82136128
	goto loc_82136128;
loc_821360E4:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_821360EC:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821360ec
	if (!ctx.cr6.eq) goto loc_821360EC;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// add r23,r10,r11
	ctx.r23.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 0);
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// cmplwi cr6,r11,95
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 95, ctx.xer);
	// bne cr6,0x82136124
	if (!ctx.cr6.eq) goto loc_82136124;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
loc_82136124:
	// stw r23,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
loc_82136128:
	// cmplwi cr6,r30,128
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 128, ctx.xer);
	// bne cr6,0x82136138
	if (!ctx.cr6.eq) goto loc_82136138;
loc_82136130:
	// li r3,277
	ctx.r3.s64 = 277;
	// b 0x82136f94
	goto loc_82136F94;
loc_82136138:
	// lwz r10,64(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 64);
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x82136170
	if (!ctx.cr6.eq) goto loc_82136170;
	// lwz r9,72(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 72);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82136474
	if (ctx.cr6.eq) goto loc_82136474;
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r31,10
	ctx.r9.s64 = ctx.r31.s64 + 10;
	// lhzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
loc_82136170:
	// cmplwi cr6,r11,65526
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65526, ctx.xer);
	// bgt cr6,0x82136474
	if (ctx.cr6.gt) goto loc_82136474;
	// beq cr6,0x8213646c
	if (ctx.cr6.eq) goto loc_8213646C;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x8213642c
	if (ctx.cr6.gt) goto loc_8213642C;
	// beq cr6,0x82136424
	if (ctx.cr6.eq) goto loc_82136424;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821361c8
	if (ctx.cr6.lt) goto loc_821361C8;
	// beq cr6,0x821361c0
	if (ctx.cr6.eq) goto loc_821361C0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x821361b8
	if (ctx.cr6.lt) goto loc_821361B8;
	// beq cr6,0x821361b0
	if (ctx.cr6.eq) goto loc_821361B0;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x821361d0
	if (!ctx.cr6.lt) goto loc_821361D0;
	// li r24,262
	ctx.r24.s64 = 262;
	// b 0x821361cc
	goto loc_821361CC;
loc_821361B0:
	// li r24,261
	ctx.r24.s64 = 261;
	// b 0x821361cc
	goto loc_821361CC;
loc_821361B8:
	// li r24,260
	ctx.r24.s64 = 260;
	// b 0x821361cc
	goto loc_821361CC;
loc_821361C0:
	// li r24,259
	ctx.r24.s64 = 259;
	// b 0x821361cc
	goto loc_821361CC;
loc_821361C8:
	// li r24,258
	ctx.r24.s64 = 258;
loc_821361CC:
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
loc_821361D0:
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r31,4
	ctx.r8.s64 = ctx.r31.s64 + 4;
	// addi r9,r24,-259
	ctx.r9.s64 = ctx.r24.s64 + -259;
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// rlwinm r9,r11,4,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// rlwinm r28,r11,13,23,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1FF;
	// rlwinm r11,r11,15,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x3;
	// stw r9,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r9.u32);
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// bgt cr6,0x8213620c
	if (ctx.cr6.gt) goto loc_8213620C;
	// cmplwi cr6,r28,248
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 248, ctx.xer);
	// beq cr6,0x8213620c
	if (ctx.cr6.eq) goto loc_8213620C;
	// stw r21,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r21.u32);
loc_8213620C:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82136220
	if (!ctx.cr6.eq) goto loc_82136220;
	// cmplwi cr6,r28,248
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 248, ctx.xer);
	// bne cr6,0x8213622c
	if (!ctx.cr6.eq) goto loc_8213622C;
	// stw r21,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r21.u32);
loc_82136220:
	// cmplwi cr6,r28,248
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 248, ctx.xer);
	// bne cr6,0x8213622c
	if (!ctx.cr6.eq) goto loc_8213622C;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
loc_8213622C:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82136240
	if (!ctx.cr6.eq) goto loc_82136240;
	// cmplwi cr6,r28,248
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 248, ctx.xer);
	// bne cr6,0x82136240
	if (!ctx.cr6.eq) goto loc_82136240;
	// stw r21,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r21.u32);
loc_82136240:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82136254
	if (!ctx.cr6.eq) goto loc_82136254;
	// cmplwi cr6,r28,248
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 248, ctx.xer);
	// bne cr6,0x82136254
	if (!ctx.cr6.eq) goto loc_82136254;
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
loc_82136254:
	// li r11,2024
	ctx.r11.s64 = 2024;
	// stw r11,60(r25)
	PPC_STORE_U32(ctx.r25.u32 + 60, ctx.r11.u32);
	// lbz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 0);
	// extsb. r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82136f58
	if (ctx.cr0.eq) goto loc_82136F58;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r30,100(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r11,r11,-13252
	ctx.r11.s64 = ctx.r11.s64 + -13252;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-13264
	ctx.r11.s64 = ctx.r11.s64 + -13264;
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-13272
	ctx.r11.s64 = ctx.r11.s64 + -13272;
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-13336
	ctx.r11.s64 = ctx.r11.s64 + -13336;
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r25,r11,-31376
	ctx.r25.s64 = ctx.r11.s64 + -31376;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r24,r11,-31384
	ctx.r24.s64 = ctx.r11.s64 + -31384;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r23,r11,-31388
	ctx.r23.s64 = ctx.r11.s64 + -31388;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r22,r11,-31396
	ctx.r22.s64 = ctx.r11.s64 + -31396;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-13396
	ctx.r11.s64 = ctx.r11.s64 + -13396;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r21,r11,-31480
	ctx.r21.s64 = ctx.r11.s64 + -31480;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r20,r11,-31492
	ctx.r20.s64 = ctx.r11.s64 + -31492;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r19,r11,-31504
	ctx.r19.s64 = ctx.r11.s64 + -31504;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r18,r11,-31512
	ctx.r18.s64 = ctx.r11.s64 + -31512;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r17,r11,20600
	ctx.r17.s64 = ctx.r11.s64 + 20600;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r16,r11,-31520
	ctx.r16.s64 = ctx.r11.s64 + -31520;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r15,r11,-31528
	ctx.r15.s64 = ctx.r11.s64 + -31528;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r14,r11,-31544
	ctx.r14.s64 = ctx.r11.s64 + -31544;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-31556
	ctx.r11.s64 = ctx.r11.s64 + -31556;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-31568
	ctx.r11.s64 = ctx.r11.s64 + -31568;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-31580
	ctx.r11.s64 = ctx.r11.s64 + -31580;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-31588
	ctx.r11.s64 = ctx.r11.s64 + -31588;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-31592
	ctx.r11.s64 = ctx.r11.s64 + -31592;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-13412
	ctx.r11.s64 = ctx.r11.s64 + -13412;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-31620
	ctx.r11.s64 = ctx.r11.s64 + -31620;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-31624
	ctx.r11.s64 = ctx.r11.s64 + -31624;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
loc_82136368:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8213638c
	if (ctx.cr6.eq) goto loc_8213638C;
loc_82136370:
	// cmpwi cr6,r10,95
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 95, ctx.xer);
	// beq cr6,0x8213638c
	if (ctx.cr6.eq) goto loc_8213638C;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// extsb. r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82136370
	if (!ctx.cr0.eq) goto loc_82136370;
loc_8213638C:
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// subf r31,r4,r30
	ctx.r31.s64 = ctx.r30.s64 - ctx.r4.s64;
	// cmplwi cr6,r31,15
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 15, ctx.xer);
	// bgt cr6,0x82136130
	if (ctx.cr6.gt) goto loc_82136130;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x822e9960
	ctx.lr = 0x821363A8;
	sub_822E9960(ctx, base);
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// beq cr6,0x821363c8
	if (ctx.cr6.eq) goto loc_821363C8;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
loc_821363C8:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821364fc
	if (ctx.cr6.eq) goto loc_821364FC;
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
loc_821363E0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82136404
	if (ctx.cr0.eq) goto loc_82136404;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x821363e0
	if (ctx.cr6.eq) goto loc_821363E0;
loc_82136404:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x821364fc
	if (!ctx.cr0.eq) goto loc_821364FC;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// oris r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 1048576;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// b 0x82136f40
	goto loc_82136F40;
loc_82136424:
	// li r24,263
	ctx.r24.s64 = 263;
	// b 0x821361cc
	goto loc_821361CC;
loc_8213642C:
	// cmplwi cr6,r11,65512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65512, ctx.xer);
	// beq cr6,0x82136464
	if (ctx.cr6.eq) goto loc_82136464;
	// cmplwi cr6,r11,65513
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65513, ctx.xer);
	// beq cr6,0x8213645c
	if (ctx.cr6.eq) goto loc_8213645C;
	// cmplwi cr6,r11,65514
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65514, ctx.xer);
	// beq cr6,0x82136454
	if (ctx.cr6.eq) goto loc_82136454;
	// cmplwi cr6,r11,65515
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65515, ctx.xer);
	// bne cr6,0x821361d0
	if (!ctx.cr6.eq) goto loc_821361D0;
	// li r24,273
	ctx.r24.s64 = 273;
	// b 0x821361cc
	goto loc_821361CC;
loc_82136454:
	// li r24,274
	ctx.r24.s64 = 274;
	// b 0x821361cc
	goto loc_821361CC;
loc_8213645C:
	// li r24,275
	ctx.r24.s64 = 275;
	// b 0x821361cc
	goto loc_821361CC;
loc_82136464:
	// li r24,276
	ctx.r24.s64 = 276;
	// b 0x821361cc
	goto loc_821361CC;
loc_8213646C:
	// li r24,272
	ctx.r24.s64 = 272;
	// b 0x821361cc
	goto loc_821361CC;
loc_82136474:
	// addis r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -65536;
	// addi r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 9;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x821361d0
	if (ctx.cr6.gt) goto loc_821361D0;
	// lis r12,-32253
	ctx.r12.s64 = -2113732608;
	// addi r12,r12,-14880
	ctx.r12.s64 = ctx.r12.s64 + -14880;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32237
	ctx.r12.s64 = -2112684032;
	// addi r12,r12,25040
	ctx.r12.s64 = ctx.r12.s64 + 25040;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_821364D4;
	case 1:
		goto loc_821364C4;
	case 2:
		goto loc_821364E4;
	case 3:
		goto loc_821364DC;
	case 4:
		goto loc_821364CC;
	case 5:
		goto loc_821364BC;
	case 6:
		goto loc_821364B4;
	case 7:
		goto loc_821364AC;
	case 8:
		goto loc_821364EC;
	default:
		__builtin_unreachable();
	}
loc_821364AC:
	// li r24,265
	ctx.r24.s64 = 265;
	// b 0x821361cc
	goto loc_821361CC;
loc_821364B4:
	// li r24,264
	ctx.r24.s64 = 264;
	// b 0x821361cc
	goto loc_821361CC;
loc_821364BC:
	// li r24,266
	ctx.r24.s64 = 266;
	// b 0x821361cc
	goto loc_821361CC;
loc_821364C4:
	// li r24,270
	ctx.r24.s64 = 270;
	// b 0x821361cc
	goto loc_821361CC;
loc_821364CC:
	// li r24,267
	ctx.r24.s64 = 267;
	// b 0x821361cc
	goto loc_821361CC;
loc_821364D4:
	// li r24,271
	ctx.r24.s64 = 271;
	// b 0x821361cc
	goto loc_821361CC;
loc_821364DC:
	// li r24,268
	ctx.r24.s64 = 268;
	// b 0x821361cc
	goto loc_821361CC;
loc_821364E4:
	// li r24,269
	ctx.r24.s64 = 269;
	// b 0x821361cc
	goto loc_821361CC;
loc_821364EC:
	// li r11,2023
	ctx.r11.s64 = 2023;
	// li r3,277
	ctx.r3.s64 = 277;
	// stw r11,60(r25)
	PPC_STORE_U32(ctx.r25.u32 + 60, ctx.r11.u32);
	// b 0x82136f94
	goto loc_82136F94;
loc_821364FC:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82136594
	if (ctx.cr6.eq) goto loc_82136594;
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
loc_82136510:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82136534
	if (ctx.cr0.eq) goto loc_82136534;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82136510
	if (ctx.cr6.eq) goto loc_82136510;
loc_82136534:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82136548
	if (!ctx.cr0.eq) goto loc_82136548;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// oris r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 4194304;
	// b 0x82136584
	goto loc_82136584;
loc_82136548:
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
loc_82136550:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82136574
	if (ctx.cr0.eq) goto loc_82136574;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82136550
	if (ctx.cr6.eq) goto loc_82136550;
loc_82136574:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82136594
	if (!ctx.cr0.eq) goto loc_82136594;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
loc_82136584:
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// b 0x82136f40
	goto loc_82136F40;
loc_82136594:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8213666c
	if (ctx.cr6.eq) goto loc_8213666C;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
loc_821365AC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x821365d0
	if (ctx.cr0.eq) goto loc_821365D0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x821365ac
	if (ctx.cr6.eq) goto loc_821365AC;
loc_821365D0:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x821365e0
	if (!ctx.cr0.eq) goto loc_821365E0;
	// lis r7,4096
	ctx.r7.s64 = 268435456;
	// b 0x82136654
	goto loc_82136654;
loc_821365E0:
	// lwz r10,156(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
loc_821365E8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8213660c
	if (ctx.cr0.eq) goto loc_8213660C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x821365e8
	if (ctx.cr6.eq) goto loc_821365E8;
loc_8213660C:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8213661c
	if (!ctx.cr0.eq) goto loc_8213661C;
	// lis r7,6144
	ctx.r7.s64 = 402653184;
	// b 0x82136654
	goto loc_82136654;
loc_8213661C:
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
loc_82136624:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82136648
	if (ctx.cr0.eq) goto loc_82136648;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82136624
	if (ctx.cr6.eq) goto loc_82136624;
loc_82136648:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82136654
	if (!ctx.cr0.eq) goto loc_82136654;
	// lis r7,8192
	ctx.r7.s64 = 536870912;
loc_82136654:
	// or r27,r7,r27
	ctx.r27.u64 = ctx.r7.u64 | ctx.r27.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8213666c
	if (ctx.cr6.eq) goto loc_8213666C;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// b 0x82136f40
	goto loc_82136F40;
loc_8213666C:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213676c
	if (ctx.cr6.eq) goto loc_8213676C;
	// lbz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 192);
	// addi r31,r1,192
	ctx.r31.s64 = ctx.r1.s64 + 192;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821366ac
	if (ctx.cr0.eq) goto loc_821366AC;
loc_82136688:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x822ecf18
	ctx.lr = 0x82136694;
	sub_822ECF18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821366ac
	if (ctx.cr0.eq) goto loc_821366AC;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82136688
	if (!ctx.cr6.eq) goto loc_82136688;
loc_821366AC:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821366c8
	if (ctx.cr6.eq) goto loc_821366C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ea960
	ctx.lr = 0x821366C0;
	sub_822EA960(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x821366cc
	goto loc_821366CC;
loc_821366C8:
	// li r28,0
	ctx.r28.s64 = 0;
loc_821366CC:
	// cmplwi cr6,r28,15
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 15, ctx.xer);
	// bgt cr6,0x82136768
	if (ctx.cr6.gt) goto loc_82136768;
	// lbz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x82136700
	if (ctx.cr0.eq) goto loc_82136700;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// b 0x821366fc
	goto loc_821366FC;
loc_821366F0:
	// bl 0x822ecf38
	ctx.lr = 0x821366F4;
	sub_822ECF38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8213670c
	if (ctx.cr0.eq) goto loc_8213670C;
loc_821366FC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82136700:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb. r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821366f0
	if (!ctx.cr0.eq) goto loc_821366F0;
loc_8213670C:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82136764
	if (!ctx.cr6.eq) goto loc_82136764;
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
loc_82136720:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82136744
	if (ctx.cr0.eq) goto loc_82136744;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82136720
	if (ctx.cr6.eq) goto loc_82136720;
loc_82136744:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x821367c4
	if (!ctx.cr0.eq) goto loc_821367C4;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x821367fc
	if (!ctx.cr6.eq) goto loc_821367FC;
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
loc_8213675C:
	// lwz r3,388(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// bl 0x82135fa8
	ctx.lr = 0x82136764;
	sub_82135FA8(ctx, base);
loc_82136764:
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
loc_82136768:
	// lwz r28,124(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
loc_8213676C:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82136130
	if (ctx.cr6.eq) goto loc_82136130;
	// lbz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 192);
	// addi r31,r1,192
	ctx.r31.s64 = ctx.r1.s64 + 192;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821367a8
	if (ctx.cr0.eq) goto loc_821367A8;
loc_82136784:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x822ecf18
	ctx.lr = 0x82136790;
	sub_822ECF18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821367a8
	if (ctx.cr0.eq) goto loc_821367A8;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82136784
	if (!ctx.cr6.eq) goto loc_82136784;
loc_821367A8:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82136aec
	if (ctx.cr6.eq) goto loc_82136AEC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ea960
	ctx.lr = 0x821367BC;
	sub_822EA960(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82136af0
	goto loc_82136AF0;
loc_821367C4:
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
loc_821367CC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x821367f0
	if (ctx.cr0.eq) goto loc_821367F0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x821367cc
	if (ctx.cr6.eq) goto loc_821367CC;
loc_821367F0:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8213681c
	if (!ctx.cr0.eq) goto loc_8213681C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_821367FC:
	// rlwinm r10,r28,16,12,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 16) & 0xF0000;
	// lwz r28,124(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// li r29,0
	ctx.r29.s64 = 0;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// or r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 | ctx.r27.u64;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// b 0x82136f3c
	goto loc_82136F3C;
loc_8213681C:
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
loc_82136824:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82136848
	if (ctx.cr0.eq) goto loc_82136848;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82136824
	if (ctx.cr6.eq) goto loc_82136824;
loc_82136848:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82136858
	if (!ctx.cr0.eq) goto loc_82136858;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x821367fc
	goto loc_821367FC;
loc_82136858:
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// mr r10,r15
	ctx.r10.u64 = ctx.r15.u64;
loc_82136860:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82136884
	if (ctx.cr0.eq) goto loc_82136884;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82136860
	if (ctx.cr6.eq) goto loc_82136860;
loc_82136884:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82136894
	if (!ctx.cr0.eq) goto loc_82136894;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x821367fc
	goto loc_821367FC;
loc_82136894:
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
loc_8213689C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x821368c0
	if (ctx.cr0.eq) goto loc_821368C0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8213689c
	if (ctx.cr6.eq) goto loc_8213689C;
loc_821368C0:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x821368d0
	if (!ctx.cr0.eq) goto loc_821368D0;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x821367fc
	goto loc_821367FC;
loc_821368D0:
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
loc_821368D8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x821368fc
	if (ctx.cr0.eq) goto loc_821368FC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x821368d8
	if (ctx.cr6.eq) goto loc_821368D8;
loc_821368FC:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8213690c
	if (!ctx.cr0.eq) goto loc_8213690C;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x821367fc
	goto loc_821367FC;
loc_8213690C:
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
loc_82136914:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82136938
	if (ctx.cr0.eq) goto loc_82136938;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82136914
	if (ctx.cr6.eq) goto loc_82136914;
loc_82136938:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82136948
	if (!ctx.cr0.eq) goto loc_82136948;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x821367fc
	goto loc_821367FC;
loc_82136948:
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
loc_82136950:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82136974
	if (ctx.cr0.eq) goto loc_82136974;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82136950
	if (ctx.cr6.eq) goto loc_82136950;
loc_82136974:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82136984
	if (!ctx.cr0.eq) goto loc_82136984;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x821367fc
	goto loc_821367FC;
loc_82136984:
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_8213698C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x821369b0
	if (ctx.cr0.eq) goto loc_821369B0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8213698c
	if (ctx.cr6.eq) goto loc_8213698C;
loc_821369B0:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x821369c0
	if (!ctx.cr0.eq) goto loc_821369C0;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x821367fc
	goto loc_821367FC;
loc_821369C0:
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
loc_821369C8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x821369ec
	if (ctx.cr0.eq) goto loc_821369EC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x821369c8
	if (ctx.cr6.eq) goto loc_821369C8;
loc_821369EC:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x821369fc
	if (!ctx.cr0.eq) goto loc_821369FC;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// b 0x8213675c
	goto loc_8213675C;
loc_821369FC:
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_82136A04:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82136a28
	if (ctx.cr0.eq) goto loc_82136A28;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82136a04
	if (ctx.cr6.eq) goto loc_82136A04;
loc_82136A28:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82136a38
	if (!ctx.cr0.eq) goto loc_82136A38;
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x821367fc
	goto loc_821367FC;
loc_82136A38:
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_82136A40:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82136a64
	if (ctx.cr0.eq) goto loc_82136A64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82136a40
	if (ctx.cr6.eq) goto loc_82136A40;
loc_82136A64:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82136a74
	if (!ctx.cr0.eq) goto loc_82136A74;
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x821367fc
	goto loc_821367FC;
loc_82136A74:
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
loc_82136A7C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82136aa0
	if (ctx.cr0.eq) goto loc_82136AA0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82136a7c
	if (ctx.cr6.eq) goto loc_82136A7C;
loc_82136AA0:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82136ab0
	if (!ctx.cr0.eq) goto loc_82136AB0;
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x821367fc
	goto loc_821367FC;
loc_82136AB0:
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_82136AB8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82136adc
	if (ctx.cr0.eq) goto loc_82136ADC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82136ab8
	if (ctx.cr6.eq) goto loc_82136AB8;
loc_82136ADC:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82136764
	if (!ctx.cr0.eq) goto loc_82136764;
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x821367fc
	goto loc_821367FC;
loc_82136AEC:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82136AF0:
	// cmplwi cr6,r30,15
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 15, ctx.xer);
	// bgt cr6,0x82136130
	if (ctx.cr6.gt) goto loc_82136130;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82136b20
	if (ctx.cr6.eq) goto loc_82136B20;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// b 0x82136b1c
	goto loc_82136B1C;
loc_82136B10:
	// bl 0x822ecf38
	ctx.lr = 0x82136B14;
	sub_822ECF38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82136b2c
	if (ctx.cr0.eq) goto loc_82136B2C;
loc_82136B1C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82136B20:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb. r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82136b10
	if (!ctx.cr0.eq) goto loc_82136B10;
loc_82136B2C:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82136130
	if (!ctx.cr6.eq) goto loc_82136130;
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
loc_82136B40:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82136b64
	if (ctx.cr0.eq) goto loc_82136B64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82136b40
	if (ctx.cr6.eq) goto loc_82136B40;
loc_82136B64:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82136b74
	if (!ctx.cr0.eq) goto loc_82136B74;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82136f28
	goto loc_82136F28;
loc_82136B74:
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
loc_82136B7C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82136ba0
	if (ctx.cr0.eq) goto loc_82136BA0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82136b7c
	if (ctx.cr6.eq) goto loc_82136B7C;
loc_82136BA0:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82136bb0
	if (!ctx.cr0.eq) goto loc_82136BB0;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82136f28
	goto loc_82136F28;
loc_82136BB0:
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
loc_82136BB8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82136bdc
	if (ctx.cr0.eq) goto loc_82136BDC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82136bb8
	if (ctx.cr6.eq) goto loc_82136BB8;
loc_82136BDC:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82136bec
	if (!ctx.cr0.eq) goto loc_82136BEC;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82136f28
	goto loc_82136F28;
loc_82136BEC:
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// mr r10,r15
	ctx.r10.u64 = ctx.r15.u64;
loc_82136BF4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82136c18
	if (ctx.cr0.eq) goto loc_82136C18;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82136bf4
	if (ctx.cr6.eq) goto loc_82136BF4;
loc_82136C18:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82136c28
	if (!ctx.cr0.eq) goto loc_82136C28;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82136f28
	goto loc_82136F28;
loc_82136C28:
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
loc_82136C30:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82136c54
	if (ctx.cr0.eq) goto loc_82136C54;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82136c30
	if (ctx.cr6.eq) goto loc_82136C30;
loc_82136C54:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82136c64
	if (!ctx.cr0.eq) goto loc_82136C64;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82136f28
	goto loc_82136F28;
loc_82136C64:
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
loc_82136C6C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82136c90
	if (ctx.cr0.eq) goto loc_82136C90;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82136c6c
	if (ctx.cr6.eq) goto loc_82136C6C;
loc_82136C90:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82136ca0
	if (!ctx.cr0.eq) goto loc_82136CA0;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82136f28
	goto loc_82136F28;
loc_82136CA0:
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
loc_82136CA8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82136ccc
	if (ctx.cr0.eq) goto loc_82136CCC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82136ca8
	if (ctx.cr6.eq) goto loc_82136CA8;
loc_82136CCC:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82136cdc
	if (!ctx.cr0.eq) goto loc_82136CDC;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x82136f28
	goto loc_82136F28;
loc_82136CDC:
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
loc_82136CE4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82136d08
	if (ctx.cr0.eq) goto loc_82136D08;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82136ce4
	if (ctx.cr6.eq) goto loc_82136CE4;
loc_82136D08:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82136d18
	if (!ctx.cr0.eq) goto loc_82136D18;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82136f28
	goto loc_82136F28;
loc_82136D18:
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_82136D20:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82136d44
	if (ctx.cr0.eq) goto loc_82136D44;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82136d20
	if (ctx.cr6.eq) goto loc_82136D20;
loc_82136D44:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82136d54
	if (!ctx.cr0.eq) goto loc_82136D54;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x82136f28
	goto loc_82136F28;
loc_82136D54:
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
loc_82136D5C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82136d80
	if (ctx.cr0.eq) goto loc_82136D80;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82136d5c
	if (ctx.cr6.eq) goto loc_82136D5C;
loc_82136D80:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82136f9c
	if (ctx.cr0.eq) goto loc_82136F9C;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_82136D90:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82136db4
	if (ctx.cr0.eq) goto loc_82136DB4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82136d90
	if (ctx.cr6.eq) goto loc_82136D90;
loc_82136DB4:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82136dc4
	if (!ctx.cr0.eq) goto loc_82136DC4;
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x82136f28
	goto loc_82136F28;
loc_82136DC4:
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_82136DCC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82136df0
	if (ctx.cr0.eq) goto loc_82136DF0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82136dcc
	if (ctx.cr6.eq) goto loc_82136DCC;
loc_82136DF0:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82136e00
	if (!ctx.cr0.eq) goto loc_82136E00;
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x82136f28
	goto loc_82136F28;
loc_82136E00:
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
loc_82136E08:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82136e2c
	if (ctx.cr0.eq) goto loc_82136E2C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82136e08
	if (ctx.cr6.eq) goto loc_82136E08;
loc_82136E2C:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82136e3c
	if (!ctx.cr0.eq) goto loc_82136E3C;
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x82136f28
	goto loc_82136F28;
loc_82136E3C:
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_82136E44:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82136e68
	if (ctx.cr0.eq) goto loc_82136E68;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82136e44
	if (ctx.cr6.eq) goto loc_82136E44;
loc_82136E68:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82136e78
	if (!ctx.cr0.eq) goto loc_82136E78;
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x82136f28
	goto loc_82136F28;
loc_82136E78:
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
loc_82136E80:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82136ea4
	if (ctx.cr0.eq) goto loc_82136EA4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82136e80
	if (ctx.cr6.eq) goto loc_82136E80;
loc_82136EA4:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82136eb4
	if (!ctx.cr0.eq) goto loc_82136EB4;
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x82136f28
	goto loc_82136F28;
loc_82136EB4:
	// lwz r10,172(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
loc_82136EBC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82136ee0
	if (ctx.cr0.eq) goto loc_82136EE0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82136ebc
	if (ctx.cr6.eq) goto loc_82136EBC;
loc_82136EE0:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82136ef0
	if (!ctx.cr0.eq) goto loc_82136EF0;
	// li r11,14
	ctx.r11.s64 = 14;
	// b 0x82136f28
	goto loc_82136F28;
loc_82136EF0:
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
loc_82136EF8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82136f1c
	if (ctx.cr0.eq) goto loc_82136F1C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82136ef8
	if (ctx.cr6.eq) goto loc_82136EF8;
loc_82136F1C:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82136130
	if (!ctx.cr0.eq) goto loc_82136130;
	// li r11,15
	ctx.r11.s64 = 15;
loc_82136F28:
	// rlwinm r10,r30,16,12,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xF0000;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// li r26,0
	ctx.r26.s64 = 0;
	// or r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 | ctx.r11.u64;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82136F3C:
	// lwz r30,100(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_82136F40:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// extsb. r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82136368
	if (!ctx.cr0.eq) goto loc_82136368;
	// lwz r25,388(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r24,96(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_82136F58:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x82136130
	if (!ctx.cr6.eq) goto loc_82136130;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82136130
	if (!ctx.cr6.eq) goto loc_82136130;
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r28,108(r25)
	PPC_STORE_U32(ctx.r25.u32 + 108, ctx.r28.u32);
	// stw r27,120(r25)
	PPC_STORE_U32(ctx.r25.u32 + 120, ctx.r27.u32);
	// stw r22,60(r25)
	PPC_STORE_U32(ctx.r25.u32 + 60, ctx.r22.u32);
	// stw r11,104(r25)
	PPC_STORE_U32(ctx.r25.u32 + 104, ctx.r11.u32);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stw r11,112(r25)
	PPC_STORE_U32(ctx.r25.u32 + 112, ctx.r11.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,116(r25)
	PPC_STORE_U32(ctx.r25.u32 + 116, ctx.r11.u32);
loc_82136F94:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x822e9900
	__restgprlr_14(ctx, base);
	return;
loc_82136F9C:
	// lwz r3,388(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x82135fa8
	ctx.lr = 0x82136FA8;
	sub_82135FA8(ctx, base);
	// b 0x82136130
	goto loc_82136130;
}

__attribute__((alias("__imp__sub_82136FAC"))) PPC_WEAK_FUNC(sub_82136FAC);
PPC_FUNC_IMPL(__imp__sub_82136FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82136FB0"))) PPC_WEAK_FUNC(sub_82136FB0);
PPC_FUNC_IMPL(__imp__sub_82136FB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98c8
	ctx.lr = 0x82136FB8;
	__savegprlr_20(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// li r20,1
	ctx.r20.s64 = 1;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821376b8
	if (ctx.cr0.eq) goto loc_821376B8;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// beq cr6,0x82137010
	if (ctx.cr6.eq) goto loc_82137010;
	// addi r30,r31,60
	ctx.r30.s64 = ctx.r31.s64 + 60;
loc_82136FE8:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82136fb0
	ctx.lr = 0x82136FF4;
	sub_82136FB0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82137608
	if (ctx.cr6.eq) goto loc_82137608;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82136fe8
	if (ctx.cr6.lt) goto loc_82136FE8;
loc_82137010:
	// addi r30,r31,60
	ctx.r30.s64 = ctx.r31.s64 + 60;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821374b8
	if (!ctx.cr6.eq) goto loc_821374B8;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821370d4
	if (!ctx.cr6.gt) goto loc_821370D4;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8213703C:
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82137088
	if (!ctx.cr6.lt) goto loc_82137088;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_82137050:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,52(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// lwz r6,52(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x821370b4
	if (ctx.cr6.eq) goto loc_821370B4;
	// ble cr6,0x82137074
	if (!ctx.cr6.gt) goto loc_82137074;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_82137074:
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82137050
	if (ctx.cr6.lt) goto loc_82137050;
loc_82137088:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,52(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821370c0
	if (ctx.cr6.eq) goto loc_821370C0;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8213703c
	if (ctx.cr6.lt) goto loc_8213703C;
	// b 0x821370d4
	goto loc_821370D4;
loc_821370B4:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,-12660
	ctx.r5.s64 = ctx.r11.s64 + -12660;
	// b 0x821375f8
	goto loc_821375F8;
loc_821370C0:
	// addi r11,r3,15
	ctx.r11.s64 = ctx.r3.s64 + 15;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r26,r11,r31
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi r26,0
	ctx.cr0.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne 0x821370e0
	if (!ctx.cr0.eq) goto loc_821370E0;
loc_821370D4:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,-12700
	ctx.r5.s64 = ctx.r11.s64 + -12700;
	// b 0x821375f8
	goto loc_821375F8;
loc_821370E0:
	// lwz r24,4(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r23,28(r26)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// lwz r22,24(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 2, ctx.xer);
	// mullw r11,r22,r23
	ctx.r11.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r23.s32);
	// beq cr6,0x82137108
	if (ctx.cr6.eq) goto loc_82137108;
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// beq cr6,0x82137108
	if (ctx.cr6.eq) goto loc_82137108;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// b 0x82137120
	goto loc_82137120;
loc_82137108:
	// clrlwi. r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82137118
	if (!ctx.cr0.eq) goto loc_82137118;
	// rlwinm r25,r11,30,2,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// b 0x82137120
	goto loc_82137120;
loc_82137118:
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r25,r11,1
	ctx.r25.s64 = ctx.r11.s64 + 1;
loc_82137120:
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// ble cr6,0x82137320
	if (!ctx.cr6.gt) goto loc_82137320;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r5,r31,64
	ctx.r5.s64 = ctx.r31.s64 + 64;
loc_8213713C:
	// lwz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
loc_82137148:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8213716c
	if (ctx.cr0.eq) goto loc_8213716C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82137148
	if (ctx.cr6.eq) goto loc_82137148;
loc_8213716C:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82137354
	if (!ctx.cr0.eq) goto loc_82137354;
	// lwz r11,48(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwz r10,48(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 48);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82137360
	if (!ctx.cr6.eq) goto loc_82137360;
	// lwz r11,56(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	// lwz r10,56(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 56);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82137360
	if (!ctx.cr6.eq) goto loc_82137360;
	// lwz r11,16(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// lwz r10,16(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82137360
	if (!ctx.cr6.eq) goto loc_82137360;
	// lwz r11,28(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x82137360
	if (!ctx.cr6.eq) goto loc_82137360;
	// lwz r11,24(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// bne cr6,0x82137360
	if (!ctx.cr6.eq) goto loc_82137360;
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r24.s32, ctx.xer);
	// bne cr6,0x82137360
	if (!ctx.cr6.eq) goto loc_82137360;
	// lwz r11,20(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// lwz r10,20(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82137360
	if (!ctx.cr6.eq) goto loc_82137360;
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,40(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// beq 0x821371f8
	if (ctx.cr0.eq) goto loc_821371F8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82137210
	if (ctx.cr6.eq) goto loc_82137210;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,-12784
	ctx.r5.s64 = ctx.r11.s64 + -12784;
	// b 0x821375f8
	goto loc_821375F8;
loc_821371F8:
	// lwz r10,40(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82137210
	if (ctx.cr6.eq) goto loc_82137210;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82137360
	if (!ctx.cr6.eq) goto loc_82137360;
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
loc_82137210:
	// clrlwi. r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82137224
	if (ctx.cr0.eq) goto loc_82137224;
	// lwz r11,44(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8213736c
	if (!ctx.cr6.eq) goto loc_8213736C;
loc_82137224:
	// lwz r11,44(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8213723c
	if (ctx.cr0.eq) goto loc_8213723C;
	// lwz r9,44(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 44);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821375f0
	if (ctx.cr6.eq) goto loc_821375F0;
loc_8213723C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82137258
	if (!ctx.cr6.eq) goto loc_82137258;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82137258
	if (!ctx.cr6.eq) goto loc_82137258;
	// lwz r11,44(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821375f0
	if (!ctx.cr6.eq) goto loc_821375F0;
loc_82137258:
	// lwz r11,44(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82137270
	if (ctx.cr6.eq) goto loc_82137270;
	// lwz r11,52(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 52);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82137348
	if (!ctx.cr6.eq) goto loc_82137348;
loc_82137270:
	// lwz r9,12(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x82137300
	if (ctx.cr6.eq) goto loc_82137300;
	// cmplw cr6,r9,r25
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x82137300
	if (!ctx.cr6.eq) goto loc_82137300;
	// lwz r8,12(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x82137298
	if (ctx.cr6.eq) goto loc_82137298;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x821372cc
	if (!ctx.cr6.gt) goto loc_821372CC;
loc_82137298:
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x821372cc
	if (!ctx.cr6.lt) goto loc_821372CC;
	// addi r10,r5,4
	ctx.r10.s64 = ctx.r5.s64 + 4;
loc_821372A8:
	// lwz r28,0(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r28,12(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// bne cr6,0x82137378
	if (!ctx.cr6.eq) goto loc_82137378;
	// lwz r28,56(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x821372a8
	if (ctx.cr6.lt) goto loc_821372A8;
loc_821372CC:
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x8213730c
	if (ctx.cr6.eq) goto loc_8213730C;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82137378
	if (ctx.cr6.lt) goto loc_82137378;
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// mullw r11,r9,r6
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// lwz r9,8(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8213730c
	if (ctx.cr6.eq) goto loc_8213730C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,-12836
	ctx.r5.s64 = ctx.r11.s64 + -12836;
	// b 0x821375f8
	goto loc_821375F8;
loc_82137300:
	// lwz r11,12(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82137378
	if (!ctx.cr6.eq) goto loc_82137378;
loc_8213730C:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8213713c
	if (ctx.cr6.lt) goto loc_8213713C;
loc_82137320:
	// addi r11,r4,14
	ctx.r11.s64 = ctx.r4.s64 + 14;
	// lwz r10,44(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 44);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// beq cr6,0x82137384
	if (ctx.cr6.eq) goto loc_82137384;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82137384
	if (ctx.cr6.eq) goto loc_82137384;
loc_82137348:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,-12928
	ctx.r5.s64 = ctx.r11.s64 + -12928;
	// b 0x821375f8
	goto loc_821375F8;
loc_82137354:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,-12976
	ctx.r5.s64 = ctx.r11.s64 + -12976;
	// b 0x821375f8
	goto loc_821375F8;
loc_82137360:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,-13024
	ctx.r5.s64 = ctx.r11.s64 + -13024;
	// b 0x821375f8
	goto loc_821375F8;
loc_8213736C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,-13088
	ctx.r5.s64 = ctx.r11.s64 + -13088;
	// b 0x821375f8
	goto loc_821375F8;
loc_82137378:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,-13152
	ctx.r5.s64 = ctx.r11.s64 + -13152;
	// b 0x821375f8
	goto loc_821375F8;
loc_82137384:
	// lwz r10,20(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// lwz r10,16(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r11,24(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r11,28(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r11,40(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lwz r11,44(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82137448
	if (ctx.cr6.eq) goto loc_82137448;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r10,40(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// lwz r3,4(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// mullw r27,r11,r10
	ctx.r27.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8212e6e0
	ctx.lr = 0x821373E4;
	sub_8212E6E0(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// bl 0x822e9ff0
	ctx.lr = 0x821373F4;
	sub_822E9FF0(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8213744c
	if (!ctx.cr6.gt) goto loc_8213744C;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
loc_82137408:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r4,44(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x82137430
	if (ctx.cr0.eq) goto loc_82137430;
	// lwz r11,40(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mullw r11,r11,r27
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32);
	// lwz r5,40(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822e9960
	ctx.lr = 0x82137430;
	sub_822E9960(ctx, base);
loc_82137430:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82137408
	if (ctx.cr6.lt) goto loc_82137408;
	// b 0x8213744c
	goto loc_8213744C;
loc_82137448:
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
loc_8213744C:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8213746c
	if (!ctx.cr6.eq) goto loc_8213746C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x821376b8
	goto loc_821376B8;
loc_8213746C:
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x821376b8
	if (!ctx.cr6.gt) goto loc_821376B8;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82137484:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x821376b8
	if (ctx.cr6.eq) goto loc_821376B8;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82137484
	if (ctx.cr6.lt) goto loc_82137484;
	// b 0x821376b8
	goto loc_821376B8;
loc_821374B8:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821376b8
	if (!ctx.cr6.eq) goto loc_821376B8;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82137534
	if (!ctx.cr6.gt) goto loc_82137534;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_821374D4:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8213751c
	if (!ctx.cr6.lt) goto loc_8213751C;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
loc_821374E8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r4,8(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// ble cr6,0x82137508
	if (!ctx.cr6.gt) goto loc_82137508;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_82137508:
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x821374e8
	if (ctx.cr6.lt) goto loc_821374E8;
loc_8213751C:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r7,-1
	ctx.r9.s64 = ctx.r7.s64 + -1;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821374d4
	if (ctx.cr6.lt) goto loc_821374D4;
loc_82137534:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r10,5
	ctx.r10.s64 = 5;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r20,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r20.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// stw r20,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r20.u32);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// beq 0x8213762c
	if (ctx.cr0.eq) goto loc_8213762C;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82137578:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82137594
	if (ctx.cr6.eq) goto loc_82137594;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82137594:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mullw r5,r5,r4
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// mullw r11,r5,r11
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,40(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mullw r11,r8,r11
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lwz r11,44(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// beq cr6,0x82137610
	if (ctx.cr6.eq) goto loc_82137610;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82137618
	if (!ctx.cr6.eq) goto loc_82137618;
loc_821375F0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,-13224
	ctx.r5.s64 = ctx.r11.s64 + -13224;
loc_821375F8:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r4,r11,-13244
	ctx.r4.s64 = ctx.r11.s64 + -13244;
	// bl 0x82135fa8
	ctx.lr = 0x82137608;
	sub_82135FA8(ctx, base);
loc_82137608:
	// li r20,-1
	ctx.r20.s64 = -1;
	// b 0x821376b8
	goto loc_821376B8;
loc_82137610:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821375f0
	if (!ctx.cr6.eq) goto loc_821375F0;
loc_82137618:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82137578
	if (ctx.cr6.lt) goto loc_82137578;
loc_8213762C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82137640
	if (!ctx.cr6.eq) goto loc_82137640;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82137640:
	// lwz r11,44(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821376b8
	if (ctx.cr6.eq) goto loc_821376B8;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r3,4(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// bl 0x8212e6e0
	ctx.lr = 0x8213765C;
	sub_8212E6E0(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821376b8
	if (!ctx.cr6.gt) goto loc_821376B8;
loc_82137670:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// add r3,r10,r28
	ctx.r3.u64 = ctx.r10.u64 + ctx.r28.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r4,44(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mullw r5,r10,r9
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// bl 0x822e9960
	ctx.lr = 0x82137690;
	sub_822E9960(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82137670
	if (ctx.cr6.lt) goto loc_82137670;
loc_821376B8:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822e9918
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821376C4"))) PPC_WEAK_FUNC(sub_821376C4);
PPC_FUNC_IMPL(__imp__sub_821376C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821376C8"))) PPC_WEAK_FUNC(sub_821376C8);
PPC_FUNC_IMPL(__imp__sub_821376C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98c4
	ctx.lr = 0x821376D0;
	__savegprlr_19(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r21,1
	ctx.r21.s64 = 1;
	// addi r26,r31,16
	ctx.r26.s64 = ctx.r31.s64 + 16;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82138274
	if (!ctx.cr6.eq) goto loc_82138274;
	// addi r22,r31,24
	ctx.r22.s64 = ctx.r31.s64 + 24;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r10,r11,-11968
	ctx.r10.s64 = ctx.r11.s64 + -11968;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
loc_8213770C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82137730
	if (ctx.cr0.eq) goto loc_82137730;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8213770c
	if (ctx.cr6.eq) goto loc_8213770C;
loc_82137730:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82138274
	if (!ctx.cr0.eq) goto loc_82138274;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x822e9ff0
	ctx.lr = 0x82137748;
	sub_822E9FF0(ctx, base);
	// li r19,0
	ctx.r19.s64 = 0;
	// stw r21,32(r20)
	PPC_STORE_U32(ctx.r20.u32 + 32, ctx.r21.u32);
	// stb r19,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r19.u8);
	// b 0x8213776c
	goto loc_8213776C;
loc_82137758:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8213820c
	if (ctx.cr6.eq) goto loc_8213820C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82137784
	if (!ctx.cr6.eq) goto loc_82137784;
loc_8213776C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82133be8
	ctx.lr = 0x82137778;
	sub_82133BE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82137758
	if (!ctx.cr0.lt) goto loc_82137758;
	// b 0x821381fc
	goto loc_821381FC;
loc_82137784:
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
loc_82137788:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821377a0
	if (!ctx.cr6.eq) goto loc_821377A0;
	// lbz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r22.u32 + 0);
	// cmplwi cr6,r10,44
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 44, ctx.xer);
	// beq cr6,0x8213787c
	if (ctx.cr6.eq) goto loc_8213787C;
loc_821377A0:
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x821377bc
	if (!ctx.cr6.eq) goto loc_821377BC;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// stw r11,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r11.u32);
	// lwz r5,0(r22)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// b 0x82137844
	goto loc_82137844;
loc_821377BC:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82137824
	if (!ctx.cr6.eq) goto loc_82137824;
	// lbz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,91
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 91, ctx.xer);
	// beq cr6,0x821377ec
	if (ctx.cr6.eq) goto loc_821377EC;
	// cmpwi cr6,r11,93
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 93, ctx.xer);
	// beq cr6,0x821377ec
	if (ctx.cr6.eq) goto loc_821377EC;
	// cmpwi cr6,r11,46
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 46, ctx.xer);
	// beq cr6,0x821377ec
	if (ctx.cr6.eq) goto loc_821377EC;
	// cmpwi cr6,r11,36
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 36, ctx.xer);
	// bne cr6,0x82138268
	if (!ctx.cr6.eq) goto loc_82138268;
loc_821377EC:
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82135ef0
	ctx.lr = 0x821377FC;
	sub_82135EF0(ctx, base);
	// lbz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,91
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 91, ctx.xer);
	// bne cr6,0x82137814
	if (!ctx.cr6.eq) goto loc_82137814;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8213825c
	if (!ctx.cr6.eq) goto loc_8213825C;
loc_82137814:
	// addi r11,r11,-93
	ctx.r11.s64 = ctx.r11.s64 + -93;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r29,r11,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82137850
	goto loc_82137850;
loc_82137824:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82138268
	if (!ctx.cr6.eq) goto loc_82138268;
	// li r5,10
	ctx.r5.s64 = 10;
	// lwz r3,0(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// bl 0x822ed748
	ctx.lr = 0x82137840;
	sub_822ED748(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_82137844:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82135ef0
	ctx.lr = 0x82137850;
	sub_82135EF0(ctx, base);
loc_82137850:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82133be8
	ctx.lr = 0x8213785C;
	sub_82133BE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821381fc
	if (ctx.cr0.lt) goto loc_821381FC;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8213820c
	if (ctx.cr6.eq) goto loc_8213820C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x82137850
	if (ctx.cr6.eq) goto loc_82137850;
	// b 0x82137788
	goto loc_82137788;
loc_8213787C:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821378b0
	if (ctx.cr6.eq) goto loc_821378B0;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82137890:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82137890
	if (!ctx.cr6.eq) goto loc_82137890;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi. r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821378d0
	if (!ctx.cr0.eq) goto loc_821378D0;
loc_821378B0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,-11988
	ctx.r5.s64 = ctx.r11.s64 + -11988;
	// b 0x82138238
	goto loc_82138238;
loc_821378BC:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8213820c
	if (ctx.cr6.eq) goto loc_8213820C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x821378e8
	if (!ctx.cr6.eq) goto loc_821378E8;
loc_821378D0:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82133be8
	ctx.lr = 0x821378DC;
	sub_82133BE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x821378bc
	if (!ctx.cr0.lt) goto loc_821378BC;
	// b 0x821381fc
	goto loc_821381FC;
loc_821378E8:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x82137900
	if (ctx.cr6.eq) goto loc_82137900;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,-12008
	ctx.r5.s64 = ctx.r11.s64 + -12008;
	// b 0x82138238
	goto loc_82138238;
loc_82137900:
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// lwz r4,0(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r3,r11,28176
	ctx.r3.s64 = ctx.r11.s64 + 28176;
	// bl 0x82134130
	ctx.lr = 0x82137914;
	sub_82134130(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82137928
	if (!ctx.cr0.lt) goto loc_82137928;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,-12032
	ctx.r5.s64 = ctx.r11.s64 + -12032;
	// b 0x82138238
	goto loc_82138238;
loc_82137928:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r11,20(r20)
	PPC_STORE_U32(ctx.r20.u32 + 20, ctx.r11.u32);
	// b 0x82137948
	goto loc_82137948;
loc_82137934:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8213820c
	if (ctx.cr6.eq) goto loc_8213820C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82137960
	if (!ctx.cr6.eq) goto loc_82137960;
loc_82137948:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82133be8
	ctx.lr = 0x82137954;
	sub_82133BE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82137934
	if (!ctx.cr0.lt) goto loc_82137934;
	// b 0x821381fc
	goto loc_821381FC;
loc_82137960:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82137990
	if (ctx.cr6.eq) goto loc_82137990;
	// lbz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 0);
	// cmplwi cr6,r11,44
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 44, ctx.xer);
	// beq cr6,0x82137990
	if (ctx.cr6.eq) goto loc_82137990;
	// b 0x82137bf4
	goto loc_82137BF4;
loc_8213797C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8213820c
	if (ctx.cr6.eq) goto loc_8213820C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x821379a8
	if (!ctx.cr6.eq) goto loc_821379A8;
loc_82137990:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82133be8
	ctx.lr = 0x8213799C;
	sub_82133BE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8213797c
	if (!ctx.cr0.lt) goto loc_8213797C;
	// b 0x821381fc
	goto loc_821381FC;
loc_821379A8:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x821379c0
	if (ctx.cr6.eq) goto loc_821379C0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,-12052
	ctx.r5.s64 = ctx.r11.s64 + -12052;
	// b 0x82138238
	goto loc_82138238;
loc_821379C0:
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// lwz r4,0(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r3,r11,28120
	ctx.r3.s64 = ctx.r11.s64 + 28120;
	// bl 0x82134130
	ctx.lr = 0x821379D4;
	sub_82134130(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x821379e8
	if (!ctx.cr0.lt) goto loc_821379E8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,-12076
	ctx.r5.s64 = ctx.r11.s64 + -12076;
	// b 0x82138238
	goto loc_82138238;
loc_821379E8:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r11,16(r20)
	PPC_STORE_U32(ctx.r20.u32 + 16, ctx.r11.u32);
	// b 0x82137a08
	goto loc_82137A08;
loc_821379F4:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8213820c
	if (ctx.cr6.eq) goto loc_8213820C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82137a20
	if (!ctx.cr6.eq) goto loc_82137A20;
loc_82137A08:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82133be8
	ctx.lr = 0x82137A14;
	sub_82133BE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x821379f4
	if (!ctx.cr0.lt) goto loc_821379F4;
	// b 0x821381fc
	goto loc_821381FC;
loc_82137A20:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82137a50
	if (ctx.cr6.eq) goto loc_82137A50;
	// lbz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 0);
	// cmplwi cr6,r11,44
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 44, ctx.xer);
	// beq cr6,0x82137a50
	if (ctx.cr6.eq) goto loc_82137A50;
	// b 0x82137bf4
	goto loc_82137BF4;
loc_82137A3C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8213820c
	if (ctx.cr6.eq) goto loc_8213820C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82137a68
	if (!ctx.cr6.eq) goto loc_82137A68;
loc_82137A50:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82133be8
	ctx.lr = 0x82137A5C;
	sub_82133BE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82137a3c
	if (!ctx.cr0.lt) goto loc_82137A3C;
	// b 0x821381fc
	goto loc_821381FC;
loc_82137A68:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82137a98
	if (ctx.cr6.eq) goto loc_82137A98;
	// lbz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 0);
	// cmplwi cr6,r11,91
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 91, ctx.xer);
	// beq cr6,0x82137a98
	if (ctx.cr6.eq) goto loc_82137A98;
	// b 0x82137ba4
	goto loc_82137BA4;
loc_82137A84:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8213820c
	if (ctx.cr6.eq) goto loc_8213820C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82137ab0
	if (!ctx.cr6.eq) goto loc_82137AB0;
loc_82137A98:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82133be8
	ctx.lr = 0x82137AA4;
	sub_82133BE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82137a84
	if (!ctx.cr0.lt) goto loc_82137A84;
	// b 0x821381fc
	goto loc_821381FC;
loc_82137AB0:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82137b48
	if (!ctx.cr6.eq) goto loc_82137B48;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// stw r11,24(r20)
	PPC_STORE_U32(ctx.r20.u32 + 24, ctx.r11.u32);
	// b 0x82137adc
	goto loc_82137ADC;
loc_82137AC8:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8213820c
	if (ctx.cr6.eq) goto loc_8213820C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82137af4
	if (!ctx.cr6.eq) goto loc_82137AF4;
loc_82137ADC:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82133be8
	ctx.lr = 0x82137AE8;
	sub_82133BE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82137ac8
	if (!ctx.cr0.lt) goto loc_82137AC8;
	// b 0x821381fc
	goto loc_821381FC;
loc_82137AF4:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82137b24
	if (ctx.cr6.eq) goto loc_82137B24;
	// lbz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 0);
	// cmplwi cr6,r11,44
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 44, ctx.xer);
	// beq cr6,0x82137b24
	if (ctx.cr6.eq) goto loc_82137B24;
	// b 0x82137ba4
	goto loc_82137BA4;
loc_82137B10:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8213820c
	if (ctx.cr6.eq) goto loc_8213820C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82137b3c
	if (!ctx.cr6.eq) goto loc_82137B3C;
loc_82137B24:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82133be8
	ctx.lr = 0x82137B30;
	sub_82133BE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82137b10
	if (!ctx.cr0.lt) goto loc_82137B10;
	// b 0x821381fc
	goto loc_821381FC;
loc_82137B3C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82137b54
	if (ctx.cr6.eq) goto loc_82137B54;
loc_82137B48:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,-12120
	ctx.r5.s64 = ctx.r11.s64 + -12120;
	// b 0x82138238
	goto loc_82138238;
loc_82137B54:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// stw r11,28(r20)
	PPC_STORE_U32(ctx.r20.u32 + 28, ctx.r11.u32);
	// b 0x82137b74
	goto loc_82137B74;
loc_82137B60:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8213820c
	if (ctx.cr6.eq) goto loc_8213820C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82137b8c
	if (!ctx.cr6.eq) goto loc_82137B8C;
loc_82137B74:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82133be8
	ctx.lr = 0x82137B80;
	sub_82133BE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82137b60
	if (!ctx.cr0.lt) goto loc_82137B60;
	// b 0x821381fc
	goto loc_821381FC;
loc_82137B8C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82137bc4
	if (ctx.cr6.eq) goto loc_82137BC4;
	// lbz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 0);
	// cmplwi cr6,r11,93
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 93, ctx.xer);
	// beq cr6,0x82137bc4
	if (ctx.cr6.eq) goto loc_82137BC4;
loc_82137BA4:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,-12168
	ctx.r5.s64 = ctx.r11.s64 + -12168;
	// b 0x82138238
	goto loc_82138238;
loc_82137BB0:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8213820c
	if (ctx.cr6.eq) goto loc_8213820C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82137bdc
	if (!ctx.cr6.eq) goto loc_82137BDC;
loc_82137BC4:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82133be8
	ctx.lr = 0x82137BD0;
	sub_82133BE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82137bb0
	if (!ctx.cr0.lt) goto loc_82137BB0;
	// b 0x821381fc
	goto loc_821381FC;
loc_82137BDC:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82137c14
	if (ctx.cr6.eq) goto loc_82137C14;
	// lbz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 0);
	// cmplwi cr6,r11,44
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 44, ctx.xer);
	// beq cr6,0x82137c14
	if (ctx.cr6.eq) goto loc_82137C14;
loc_82137BF4:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,-12196
	ctx.r5.s64 = ctx.r11.s64 + -12196;
	// b 0x82138238
	goto loc_82138238;
loc_82137C00:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8213820c
	if (ctx.cr6.eq) goto loc_8213820C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82137c2c
	if (!ctx.cr6.eq) goto loc_82137C2C;
loc_82137C14:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82133be8
	ctx.lr = 0x82137C20;
	sub_82133BE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82137c00
	if (!ctx.cr0.lt) goto loc_82137C00;
	// b 0x821381fc
	goto loc_821381FC;
loc_82137C2C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82138250
	if (!ctx.cr6.eq) goto loc_82138250;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x82138250
	if (ctx.cr6.lt) goto loc_82138250;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x822ecf18
	ctx.lr = 0x82137C54;
	sub_822ECF18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82137e48
	if (ctx.cr0.eq) goto loc_82137E48;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x822ed0c0
	ctx.lr = 0x82137C6C;
	sub_822ED0C0(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,98
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 98, ctx.xer);
	// beq cr6,0x82137cb8
	if (ctx.cr6.eq) goto loc_82137CB8;
	// cmpwi cr6,r11,99
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 99, ctx.xer);
	// beq cr6,0x82137cac
	if (ctx.cr6.eq) goto loc_82137CAC;
	// cmpwi cr6,r11,105
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 105, ctx.xer);
	// beq cr6,0x82137ca4
	if (ctx.cr6.eq) goto loc_82137CA4;
	// cmpwi cr6,r11,115
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 115, ctx.xer);
	// beq cr6,0x82137c9c
	if (ctx.cr6.eq) goto loc_82137C9C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,-12224
	ctx.r5.s64 = ctx.r11.s64 + -12224;
	// b 0x82138238
	goto loc_82138238;
loc_82137C9C:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82137cb0
	goto loc_82137CB0;
loc_82137CA4:
	// stw r21,4(r20)
	PPC_STORE_U32(ctx.r20.u32 + 4, ctx.r21.u32);
	// b 0x82137cbc
	goto loc_82137CBC;
loc_82137CAC:
	// li r11,2
	ctx.r11.s64 = 2;
loc_82137CB0:
	// stw r11,4(r20)
	PPC_STORE_U32(ctx.r20.u32 + 4, ctx.r11.u32);
	// b 0x82137cbc
	goto loc_82137CBC;
loc_82137CB8:
	// stw r19,4(r20)
	PPC_STORE_U32(ctx.r20.u32 + 4, ctx.r19.u32);
loc_82137CBC:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x822ecf18
	ctx.lr = 0x82137CCC;
	sub_822ECF18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82137d28
	if (ctx.cr0.eq) goto loc_82137D28;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x822ed0c0
	ctx.lr = 0x82137CE4;
	sub_822ED0C0(ctx, base);
	// cmpwi cr6,r3,120
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 120, ctx.xer);
	// bne cr6,0x82137d28
	if (!ctx.cr6.eq) goto loc_82137D28;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,8(r20)
	PPC_STORE_U32(ctx.r20.u32 + 8, ctx.r11.u32);
	// stw r11,12(r20)
	PPC_STORE_U32(ctx.r20.u32 + 12, ctx.r11.u32);
	// b 0x82137d10
	goto loc_82137D10;
loc_82137CFC:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8213820c
	if (ctx.cr6.eq) goto loc_8213820C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82137dc4
	if (!ctx.cr6.eq) goto loc_82137DC4;
loc_82137D10:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82133be8
	ctx.lr = 0x82137D1C;
	sub_82133BE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82137cfc
	if (!ctx.cr0.lt) goto loc_82137CFC;
	// b 0x821381fc
	goto loc_821381FC;
loc_82137D28:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82137d60
	if (!ctx.cr6.gt) goto loc_82137D60;
loc_82137D38:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lbzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x822ecf38
	ctx.lr = 0x82137D48;
	sub_822ECF38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82137e48
	if (ctx.cr0.eq) goto loc_82137E48;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82137d38
	if (ctx.cr6.lt) goto loc_82137D38;
loc_82137D60:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// bl 0x822ea960
	ctx.lr = 0x82137D6C;
	sub_822EA960(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82137e48
	if (ctx.cr0.lt) goto loc_82137E48;
	// stw r3,8(r20)
	PPC_STORE_U32(ctx.r20.u32 + 8, ctx.r3.u32);
	// b 0x82137d90
	goto loc_82137D90;
loc_82137D7C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8213820c
	if (ctx.cr6.eq) goto loc_8213820C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82137da8
	if (!ctx.cr6.eq) goto loc_82137DA8;
loc_82137D90:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82133be8
	ctx.lr = 0x82137D9C;
	sub_82133BE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82137d7c
	if (!ctx.cr0.lt) goto loc_82137D7C;
	// b 0x821381fc
	goto loc_821381FC;
loc_82137DA8:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82137dc0
	if (!ctx.cr6.eq) goto loc_82137DC0;
	// lbz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 0);
	// cmplwi cr6,r11,45
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45, ctx.xer);
	// beq cr6,0x82137e10
	if (ctx.cr6.eq) goto loc_82137E10;
loc_82137DC0:
	// stw r21,12(r20)
	PPC_STORE_U32(ctx.r20.u32 + 12, ctx.r21.u32);
loc_82137DC4:
	// stw r19,44(r20)
	PPC_STORE_U32(ctx.r20.u32 + 44, ctx.r19.u32);
	// stw r19,40(r20)
	PPC_STORE_U32(ctx.r20.u32 + 40, ctx.r19.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82138218
	if (!ctx.cr6.eq) goto loc_82138218;
	// lbz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 0);
	// cmplwi cr6,r11,44
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 44, ctx.xer);
	// bne cr6,0x82138218
	if (!ctx.cr6.eq) goto loc_82138218;
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82137e9c
	if (!ctx.cr6.eq) goto loc_82137E9C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,-12264
	ctx.r5.s64 = ctx.r11.s64 + -12264;
	// b 0x82138238
	goto loc_82138238;
loc_82137DFC:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8213820c
	if (ctx.cr6.eq) goto loc_8213820C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82137e28
	if (!ctx.cr6.eq) goto loc_82137E28;
loc_82137E10:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82133be8
	ctx.lr = 0x82137E1C;
	sub_82133BE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82137dfc
	if (!ctx.cr0.lt) goto loc_82137DFC;
	// b 0x821381fc
	goto loc_821381FC;
loc_82137E28:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82137e48
	if (!ctx.cr6.eq) goto loc_82137E48;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r10,8(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addic. r11,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82137e54
	if (!ctx.cr0.lt) goto loc_82137E54;
loc_82137E48:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,-12308
	ctx.r5.s64 = ctx.r11.s64 + -12308;
	// b 0x82138238
	goto loc_82138238;
loc_82137E54:
	// stw r11,12(r20)
	PPC_STORE_U32(ctx.r20.u32 + 12, ctx.r11.u32);
	// b 0x82137e70
	goto loc_82137E70;
loc_82137E5C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8213820c
	if (ctx.cr6.eq) goto loc_8213820C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82137dc4
	if (!ctx.cr6.eq) goto loc_82137DC4;
loc_82137E70:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82133be8
	ctx.lr = 0x82137E7C;
	sub_82133BE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82137e5c
	if (!ctx.cr0.lt) goto loc_82137E5C;
	// b 0x821381fc
	goto loc_821381FC;
loc_82137E88:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8213820c
	if (ctx.cr6.eq) goto loc_8213820C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82137eb4
	if (!ctx.cr6.eq) goto loc_82137EB4;
loc_82137E9C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82133be8
	ctx.lr = 0x82137EA8;
	sub_82133BE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82137e88
	if (!ctx.cr0.lt) goto loc_82137E88;
	// b 0x821381fc
	goto loc_821381FC;
loc_82137EB4:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82137ecc
	if (ctx.cr6.eq) goto loc_82137ECC;
	// lbz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 0);
	// cmplwi cr6,r11,123
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 123, ctx.xer);
	// bne cr6,0x821381c8
	if (!ctx.cr6.eq) goto loc_821381C8;
loc_82137ECC:
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// lwz r28,12(r20)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r20.u32 + 12);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82137ee4
	if (ctx.cr6.eq) goto loc_82137EE4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82137ee8
	if (!ctx.cr6.eq) goto loc_82137EE8;
loc_82137EE4:
	// rlwinm r28,r28,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
loc_82137EE8:
	// rlwinm r4,r28,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r4,40(r20)
	PPC_STORE_U32(ctx.r20.u32 + 40, ctx.r4.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8212e6e0
	ctx.lr = 0x82137EFC;
	sub_8212E6E0(ctx, base);
	// mr r25,r19
	ctx.r25.u64 = ctx.r19.u64;
	// stw r3,44(r20)
	PPC_STORE_U32(ctx.r20.u32 + 44, ctx.r3.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82138198
	if (ctx.cr6.eq) goto loc_82138198;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r23,r11,29160
	ctx.r23.s64 = ctx.r11.s64 + 29160;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r24,r11,29152
	ctx.r24.s64 = ctx.r11.s64 + 29152;
loc_82137F20:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82133be8
	ctx.lr = 0x82137F2C;
	sub_82133BE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821381fc
	if (ctx.cr0.lt) goto loc_821381FC;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8213820c
	if (ctx.cr6.eq) goto loc_8213820C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x82137f20
	if (ctx.cr6.eq) goto loc_82137F20;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82137f8c
	if (!ctx.cr6.eq) goto loc_82137F8C;
	// lbz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 0);
	// cmplwi cr6,r11,45
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45, ctx.xer);
	// bne cr6,0x82137f8c
	if (!ctx.cr6.eq) goto loc_82137F8C;
	// li r29,-1
	ctx.r29.s64 = -1;
loc_82137F64:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82133be8
	ctx.lr = 0x82137F70;
	sub_82133BE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821381fc
	if (ctx.cr0.lt) goto loc_821381FC;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8213820c
	if (ctx.cr6.eq) goto loc_8213820C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x82137f64
	if (ctx.cr6.eq) goto loc_82137F64;
loc_82137F8C:
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82138070
	if (ctx.cr6.lt) goto loc_82138070;
	// beq cr6,0x82138058
	if (ctx.cr6.eq) goto loc_82138058;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82138118
	if (!ctx.cr6.lt) goto loc_82138118;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82137fc8
	if (ctx.cr6.eq) goto loc_82137FC8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82137fc8
	if (ctx.cr6.eq) goto loc_82137FC8;
	// ble cr6,0x82137fcc
	if (!ctx.cr6.gt) goto loc_82137FCC;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// ble cr6,0x82137fe4
	if (!ctx.cr6.gt) goto loc_82137FE4;
	// b 0x82137fcc
	goto loc_82137FCC;
loc_82137FC8:
	// li r11,2
	ctx.r11.s64 = 2;
loc_82137FCC:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82138024
	if (ctx.cr6.eq) goto loc_82138024;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82138008
	if (ctx.cr6.eq) goto loc_82138008;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82138088
	if (!ctx.cr6.eq) goto loc_82138088;
loc_82137FE4:
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
	// lfd f0,0(r22)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r22.u32 + 0);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x82138050
	goto loc_82138050;
loc_82138008:
	// lwa r11,0(r22)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r22.u32 + 0));
	// extsw r10,r29
	ctx.r10.s64 = ctx.r29.s32;
	// std r10,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r10.u64);
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// lfd f13,128(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// b 0x8213803c
	goto loc_8213803C;
loc_82138024:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// extsw r10,r29
	ctx.r10.s64 = ctx.r29.s32;
	// std r10,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r10.u64);
	// std r11,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r11.u64);
	// lfd f0,136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// lfd f13,144(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
loc_8213803C:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_82138050:
	// stfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// b 0x82138118
	goto loc_82138118;
loc_82138058:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82138088
	if (!ctx.cr6.eq) goto loc_82138088;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mullw r11,r29,r11
	ctx.r11.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r11.s32);
	// b 0x82138114
	goto loc_82138114;
loc_82138070:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82138094
	if (!ctx.cr6.eq) goto loc_82138094;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82138114
	if (!ctx.cr6.gt) goto loc_82138114;
loc_82138088:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,-12336
	ctx.r5.s64 = ctx.r11.s64 + -12336;
	// b 0x82138238
	goto loc_82138238;
loc_82138094:
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82138088
	if (!ctx.cr6.eq) goto loc_82138088;
	// lwz r7,0(r22)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_821380A8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x821380cc
	if (ctx.cr0.eq) goto loc_821380CC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x821380a8
	if (ctx.cr6.eq) goto loc_821380A8;
loc_821380CC:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x821380dc
	if (!ctx.cr0.eq) goto loc_821380DC;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// b 0x82138114
	goto loc_82138114;
loc_821380DC:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_821380E4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82138108
	if (ctx.cr0.eq) goto loc_82138108;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x821380e4
	if (ctx.cr6.eq) goto loc_821380E4;
loc_82138108:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82138088
	if (!ctx.cr0.eq) goto loc_82138088;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82138114:
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_82138118:
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82138164
	if (ctx.cr6.eq) goto loc_82138164;
loc_82138124:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82133be8
	ctx.lr = 0x82138130;
	sub_82133BE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821381fc
	if (ctx.cr0.lt) goto loc_821381FC;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8213820c
	if (ctx.cr6.eq) goto loc_8213820C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x82138124
	if (ctx.cr6.eq) goto loc_82138124;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82138164
	if (ctx.cr6.eq) goto loc_82138164;
	// lbz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 0);
	// cmplwi cr6,r11,44
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 44, ctx.xer);
	// bne cr6,0x82138178
	if (!ctx.cr6.eq) goto loc_82138178;
loc_82138164:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplw cr6,r25,r28
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82137f20
	if (ctx.cr6.lt) goto loc_82137F20;
	// b 0x82138198
	goto loc_82138198;
loc_82138178:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,-12396
	ctx.r5.s64 = ctx.r11.s64 + -12396;
	// b 0x82138238
	goto loc_82138238;
loc_82138184:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8213820c
	if (ctx.cr6.eq) goto loc_8213820C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x821381b0
	if (!ctx.cr6.eq) goto loc_821381B0;
loc_82138198:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82133be8
	ctx.lr = 0x821381A4;
	sub_82133BE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82138184
	if (!ctx.cr0.lt) goto loc_82138184;
	// b 0x821381fc
	goto loc_821381FC;
loc_821381B0:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821381e8
	if (ctx.cr6.eq) goto loc_821381E8;
	// lbz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 0);
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x821381e8
	if (ctx.cr6.eq) goto loc_821381E8;
loc_821381C8:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,-12440
	ctx.r5.s64 = ctx.r11.s64 + -12440;
	// b 0x82138238
	goto loc_82138238;
loc_821381D4:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8213820c
	if (ctx.cr6.eq) goto loc_8213820C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82138218
	if (!ctx.cr6.eq) goto loc_82138218;
loc_821381E8:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82133be8
	ctx.lr = 0x821381F4;
	sub_82133BE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x821381d4
	if (!ctx.cr0.lt) goto loc_821381D4;
loc_821381FC:
	// li r30,-1
	ctx.r30.s64 = -1;
	// stw r21,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r21.u32);
	// stw r21,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r21.u32);
	// b 0x82138278
	goto loc_82138278;
loc_8213820C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,-12468
	ctx.r5.s64 = ctx.r11.s64 + -12468;
	// b 0x82138238
	goto loc_82138238;
loc_82138218:
	// lwz r11,32(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82138278
	if (!ctx.cr6.eq) goto loc_82138278;
	// lwz r11,36(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 36);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82138278
	if (!ctx.cr6.eq) goto loc_82138278;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,-12524
	ctx.r5.s64 = ctx.r11.s64 + -12524;
loc_82138238:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-13244
	ctx.r4.s64 = ctx.r11.s64 + -13244;
	// bl 0x82135fa8
	ctx.lr = 0x82138248;
	sub_82135FA8(ctx, base);
	// li r30,-1
	ctx.r30.s64 = -1;
	// b 0x82138278
	goto loc_82138278;
loc_82138250:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,-12552
	ctx.r5.s64 = ctx.r11.s64 + -12552;
	// b 0x82138238
	goto loc_82138238;
loc_8213825C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,-12596
	ctx.r5.s64 = ctx.r11.s64 + -12596;
	// b 0x82138238
	goto loc_82138238;
loc_82138268:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,-12616
	ctx.r5.s64 = ctx.r11.s64 + -12616;
	// b 0x82138238
	goto loc_82138238;
loc_82138274:
	// li r30,280
	ctx.r30.s64 = 280;
loc_82138278:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x822e9914
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82138284"))) PPC_WEAK_FUNC(sub_82138284);
PPC_FUNC_IMPL(__imp__sub_82138284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82138288"))) PPC_WEAK_FUNC(sub_82138288);
PPC_FUNC_IMPL(__imp__sub_82138288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98b0
	ctx.lr = 0x82138290;
	__savegprlr_14(ctx, base);
	// stwu r1,-1552(r1)
	ea = -1552 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// ld r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// li r14,284
	ctx.r14.s64 = 284;
	// addi r11,r24,16
	ctx.r11.s64 = ctx.r24.s64 + 16;
	// lwz r9,92(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 92);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ld r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// ld r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// ld r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 24);
	// std r10,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r10.u64);
	// beq cr6,0x821382f4
	if (ctx.cr6.eq) goto loc_821382F4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,-11832
	ctx.r5.s64 = ctx.r11.s64 + -11832;
loc_821382D4:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r4,r11,-13244
	ctx.r4.s64 = ctx.r11.s64 + -13244;
	// bl 0x82135fa8
	ctx.lr = 0x821382E4;
	sub_82135FA8(ctx, base);
loc_821382E4:
	// li r14,-1
	ctx.r14.s64 = -1;
loc_821382E8:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// addi r1,r1,1552
	ctx.r1.s64 = ctx.r1.s64 + 1552;
	// b 0x822e9900
	__restgprlr_14(ctx, base);
	return;
loc_821382F4:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r22,0
	ctx.r22.s64 = 0;
	// stw r11,92(r24)
	PPC_STORE_U32(ctx.r24.u32 + 92, ctx.r11.u32);
	// lwz r3,128(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 128);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82138320
	if (ctx.cr0.eq) goto loc_82138320;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213831C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r22,128(r24)
	PPC_STORE_U32(ctx.r24.u32 + 128, ctx.r22.u32);
loc_82138320:
	// li r5,1084
	ctx.r5.s64 = 1084;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x822e9ff0
	ctx.lr = 0x82138330;
	sub_822E9FF0(ctx, base);
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// b 0x82138360
	goto loc_82138360;
loc_82138338:
	// cmpwi cr6,r3,280
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 280, ctx.xer);
	// beq cr6,0x82138380
	if (ctx.cr6.eq) goto loc_82138380;
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82135ad8
	ctx.lr = 0x82138354;
	sub_82135AD8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x821382e4
	if (ctx.cr6.eq) goto loc_821382E4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82138360:
	// li r6,128
	ctx.r6.s64 = 128;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821376c8
	ctx.lr = 0x82138374;
	sub_821376C8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82138338
	if (!ctx.cr6.eq) goto loc_82138338;
	// b 0x821382e4
	goto loc_821382E4;
loc_82138380:
	// lwz r30,360(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821383b8
	if (ctx.cr6.eq) goto loc_821383B8;
	// addi r28,r1,364
	ctx.r28.s64 = ctx.r1.s64 + 364;
loc_82138394:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82136fb0
	ctx.lr = 0x821383A0;
	sub_82136FB0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x821382e4
	if (ctx.cr6.eq) goto loc_821382E4;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82138394
	if (ctx.cr6.lt) goto loc_82138394;
loc_821383B8:
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,4(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// mulli r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 * 20;
	// bl 0x8212e6e0
	ctx.lr = 0x821383C8;
	sub_8212E6E0(ctx, base);
	// mulli r19,r31,66
	ctx.r19.s64 = ctx.r31.s64 * 66;
	// li r5,4
	ctx.r5.s64 = 4;
	// rlwinm r4,r19,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lwz r3,4(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// bl 0x8212e6e0
	ctx.lr = 0x821383E4;
	sub_8212E6E0(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r22,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r22.u32);
	// rlwinm r4,r31,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// lwz r3,4(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// bl 0x8212e6e0
	ctx.lr = 0x821383FC;
	sub_8212E6E0(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// stw r22,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r22.u32);
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82138438
	if (ctx.cr6.eq) goto loc_82138438;
	// addi r10,r1,364
	ctx.r10.s64 = ctx.r1.s64 + 364;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82138418:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// lwz r9,32(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r23,r9,r23
	ctx.r23.u64 = ctx.r9.u64 + ctx.r23.u64;
	// bne 0x82138418
	if (!ctx.cr0.eq) goto loc_82138418;
loc_82138438:
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,4(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x8212e6e0
	ctx.lr = 0x82138448;
	sub_8212E6E0(ctx, base);
	// rlwinm r27,r31,7,0,24
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 7) & 0xFFFFFF80;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// lwz r3,4(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// mr r18,r22
	ctx.r18.u64 = ctx.r22.u64;
	// bl 0x8212e6e0
	ctx.lr = 0x82138464;
	sub_8212E6E0(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// stw r22,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r22.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8213852c
	if (ctx.cr6.eq) goto loc_8213852C;
	// addi r29,r1,364
	ctx.r29.s64 = ctx.r1.s64 + 364;
	// addi r31,r21,6
	ctx.r31.s64 = ctx.r21.s64 + 6;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_82138484:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82135868
	ctx.lr = 0x8213849C;
	sub_82135868(ctx, base);
	// stw r3,-6(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6, ctx.r3.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// sth r11,-2(r31)
	PPC_STORE_U16(ctx.r31.u32 + -2, ctx.r11.u16);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// sth r22,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r22.u16);
	// sth r11,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r11.u16);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821384f0
	if (ctx.cr6.eq) goto loc_821384F0;
	// add r3,r18,r15
	ctx.r3.u64 = ctx.r18.u64 + ctx.r15.u64;
	// stw r3,10(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10, ctx.r3.u32);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// mullw r26,r11,r10
	ctx.r26.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x822e9960
	ctx.lr = 0x821384E8;
	sub_822E9960(ctx, base);
	// add r18,r26,r18
	ctx.r18.u64 = ctx.r26.u64 + ctx.r18.u64;
	// b 0x821384f4
	goto loc_821384F4;
loc_821384F0:
	// stw r22,10(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10, ctx.r22.u32);
loc_821384F4:
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// addi r7,r1,116
	ctx.r7.s64 = ctx.r1.s64 + 116;
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82135db0
	ctx.lr = 0x82138518;
	sub_82135DB0(ctx, base);
	// stw r3,6(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6, ctx.r3.u32);
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// bne 0x82138484
	if (!ctx.cr0.eq) goto loc_82138484;
loc_8213852C:
	// cmplw cr6,r18,r23
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x82138540
	if (ctx.cr6.eq) goto loc_82138540;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,-11864
	ctx.r5.s64 = ctx.r11.s64 + -11864;
	// b 0x821382d4
	goto loc_821382D4;
loc_82138540:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r19.u32, ctx.xer);
	// ble cr6,0x82138558
	if (!ctx.cr6.gt) goto loc_82138558;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,-11916
	ctx.r5.s64 = ctx.r11.s64 + -11916;
	// b 0x821382d4
	goto loc_821382D4;
loc_82138558:
	// mulli r30,r28,20
	ctx.r30.s64 = ctx.r28.s64 * 20;
	// lwz r3,4(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r29,r30,28
	ctx.r29.s64 = ctx.r30.s64 + 28;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r26,r10,r29
	ctx.r26.u64 = ctx.r10.u64 + ctx.r29.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// add r25,r11,r26
	ctx.r25.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// add r27,r25,r18
	ctx.r27.u64 = ctx.r25.u64 + ctx.r18.u64;
	// add r23,r27,r11
	ctx.r23.u64 = ctx.r27.u64 + ctx.r11.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x8212e6e0
	ctx.lr = 0x82138590;
	sub_8212E6E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,28
	ctx.r11.s64 = 28;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r22,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r22.u32);
	// stw r22,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r22.u32);
	// stw r22,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r22.u32);
	// stw r22,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r22.u32);
	// bl 0x822e9960
	ctx.lr = 0x821385C8;
	sub_822E9960(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82138620
	if (ctx.cr6.eq) goto loc_82138620;
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
loc_821385D4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x821385ec
	if (ctx.cr0.eq) goto loc_821385EC;
	// subf r10,r15,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r15.s64;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_821385EC:
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// subf r7,r17,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r17.s64;
	// subf r8,r20,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r20.s64;
	// add r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 + ctx.r29.u64;
	// add r8,r8,r27
	ctx.r8.u64 = ctx.r8.u64 + ctx.r27.u64;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// bne 0x821385d4
	if (!ctx.cr0.eq) goto loc_821385D4;
loc_82138620:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// add r30,r31,r29
	ctx.r30.u64 = ctx.r31.u64 + ctx.r29.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e9960
	ctx.lr = 0x82138638;
	sub_822E9960(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82138678
	if (ctx.cr6.eq) goto loc_82138678;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
loc_8213864C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82138664
	if (ctx.cr0.eq) goto loc_82138664;
	// subf r10,r16,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r16.s64;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82138664:
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8213864c
	if (ctx.cr6.lt) goto loc_8213864C;
loc_82138678:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// add r30,r31,r26
	ctx.r30.u64 = ctx.r31.u64 + ctx.r26.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e9960
	ctx.lr = 0x82138690;
	sub_822E9960(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821386dc
	if (ctx.cr6.eq) goto loc_821386DC;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_821386A4:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r7,r20,r27
	ctx.r7.s64 = ctx.r27.s64 - ctx.r20.s64;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// subf r8,r17,r29
	ctx.r8.s64 = ctx.r29.s64 - ctx.r17.s64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x821386a4
	if (ctx.cr6.lt) goto loc_821386A4;
loc_821386DC:
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// add r3,r31,r25
	ctx.r3.u64 = ctx.r31.u64 + ctx.r25.u64;
	// bl 0x822e9960
	ctx.lr = 0x821386EC;
	sub_822E9960(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// add r3,r31,r27
	ctx.r3.u64 = ctx.r31.u64 + ctx.r27.u64;
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x822e9960
	ctx.lr = 0x821386FC;
	sub_822E9960(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x822f9920
	ctx.lr = 0x82138708;
	sub_822F9920(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8213871c
	if (ctx.cr0.eq) goto loc_8213871C;
	// bl 0x8210f8f8
	ctx.lr = 0x82138714;
	sub_8210F8F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82138720
	goto loc_82138720;
loc_8213871C:
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_82138720:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210f928
	ctx.lr = 0x82138734;
	sub_8210F928(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82138748
	if (!ctx.cr0.lt) goto loc_82138748;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,-11956
	ctx.r5.s64 = ctx.r11.s64 + -11956;
	// b 0x821382d4
	goto loc_821382D4;
loc_82138748:
	// lwz r11,324(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 324);
	// stw r30,128(r24)
	PPC_STORE_U32(ctx.r24.u32 + 128, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82138768
	if (ctx.cr6.eq) goto loc_82138768;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lwz r3,316(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 316);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821ad288
	ctx.lr = 0x82138768;
	sub_821AD288(ctx, base);
loc_82138768:
	// stw r22,124(r24)
	PPC_STORE_U32(ctx.r24.u32 + 124, ctx.r22.u32);
	// b 0x821382e8
	goto loc_821382E8;
}

__attribute__((alias("__imp__sub_82138770"))) PPC_WEAK_FUNC(sub_82138770);
PPC_FUNC_IMPL(__imp__sub_82138770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98b8
	ctx.lr = 0x82138778;
	__savegprlr_16(ctx, base);
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// li r17,0
	ctx.r17.s64 = 0;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r18,r5
	ctx.r18.u64 = ctx.r5.u64;
	// mr r31,r17
	ctx.r31.u64 = ctx.r17.u64;
	// lwz r24,8(r22)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// mr r27,r17
	ctx.r27.u64 = ctx.r17.u64;
	// stw r17,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r17.u32);
	// mr r20,r17
	ctx.r20.u64 = ctx.r17.u64;
	// mr r26,r17
	ctx.r26.u64 = ctx.r17.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
	// lbz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 0);
	// mr r23,r24
	ctx.r23.u64 = ctx.r24.u64;
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82138c3c
	if (ctx.cr6.eq) goto loc_82138C3C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r16,r11,-31632
	ctx.r16.s64 = ctx.r11.s64 + -31632;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r21,r11,-15416
	ctx.r21.s64 = ctx.r11.s64 + -15416;
	// b 0x821387e0
	goto loc_821387E0;
loc_821387D4:
	// cmpwi cr6,r11,95
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 95, ctx.xer);
	// beq cr6,0x821387ec
	if (ctx.cr6.eq) goto loc_821387EC;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
loc_821387E0:
	// lbz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821387d4
	if (!ctx.cr0.eq) goto loc_821387D4;
loc_821387EC:
	// subf r30,r23,r25
	ctx.r30.s64 = ctx.r25.s64 - ctx.r23.s64;
	// cmplwi cr6,r30,15
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 15, ctx.xer);
	// ble cr6,0x82138838
	if (!ctx.cr6.gt) goto loc_82138838;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x8213895c
	if (!ctx.cr6.eq) goto loc_8213895C;
loc_82138800:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x82138c84
	if (ctx.cr6.eq) goto loc_82138C84;
loc_82138808:
	// lwz r11,40(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 40);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82138c6c
	if (!ctx.cr0.eq) goto loc_82138C6C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r8,24(r18)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r18.u32 + 24);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// lwz r3,0(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// addi r6,r11,32292
	ctx.r6.s64 = ctx.r11.s64 + 32292;
	// li r5,2005
	ctx.r5.s64 = 2005;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x82110f18
	ctx.lr = 0x82138834;
	sub_82110F18(ctx, base);
	// b 0x82138ca0
	goto loc_82138CA0;
loc_82138838:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822e9960
	ctx.lr = 0x82138848;
	sub_822E9960(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stbx r17,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r17.u8);
	// lbz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82138860
	if (ctx.cr6.eq) goto loc_82138860;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
loc_82138860:
	// mr r23,r25
	ctx.r23.u64 = ctx.r25.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82138bec
	if (ctx.cr6.eq) goto loc_82138BEC;
	// lbz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// addi r31,r1,128
	ctx.r31.s64 = ctx.r1.s64 + 128;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821388a0
	if (ctx.cr0.eq) goto loc_821388A0;
loc_8213887C:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x822ecf18
	ctx.lr = 0x82138888;
	sub_822ECF18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821388a0
	if (ctx.cr0.eq) goto loc_821388A0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8213887c
	if (!ctx.cr6.eq) goto loc_8213887C;
loc_821388A0:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821388bc
	if (ctx.cr6.eq) goto loc_821388BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ea960
	ctx.lr = 0x821388B4;
	sub_822EA960(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x821388c4
	goto loc_821388C4;
loc_821388BC:
	// lis r27,0
	ctx.r27.s64 = 0;
	// ori r27,r27,65535
	ctx.r27.u64 = ctx.r27.u64 | 65535;
loc_821388C4:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821388e8
	if (ctx.cr6.eq) goto loc_821388E8;
	// stb r17,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r17.u8);
	// b 0x821388e4
	goto loc_821388E4;
loc_821388D8:
	// bl 0x822ecf38
	ctx.lr = 0x821388DC;
	sub_822ECF38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821388f4
	if (ctx.cr0.eq) goto loc_821388F4;
loc_821388E4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_821388E8:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb. r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821388d8
	if (!ctx.cr0.eq) goto loc_821388D8;
loc_821388F4:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82138800
	if (!ctx.cr6.eq) goto loc_82138800;
	// mr r8,r17
	ctx.r8.u64 = ctx.r17.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
loc_8213890C:
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
loc_82138914:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r7,r7,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82138938
	if (ctx.cr0.eq) goto loc_82138938;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82138914
	if (ctx.cr6.eq) goto loc_82138914;
loc_82138938:
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82138954
	if (ctx.cr0.eq) goto loc_82138954;
	// addi r5,r5,24
	ctx.r5.s64 = ctx.r5.s64 + 24;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r6,r6,24
	ctx.r6.s64 = ctx.r6.s64 + 24;
	// cmplwi cr6,r5,432
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 432, ctx.xer);
	// blt cr6,0x8213890c
	if (ctx.cr6.lt) goto loc_8213890C;
loc_82138954:
	// cmplwi cr6,r8,18
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 18, ctx.xer);
	// bne cr6,0x82138a74
	if (!ctx.cr6.eq) goto loc_82138A74;
loc_8213895C:
	// lwz r11,72(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82138800
	if (ctx.cr6.eq) goto loc_82138800;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82138970:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82138970
	if (!ctx.cr6.eq) goto loc_82138970;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r31,r11,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r31,256
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 256, ctx.xer);
	// bge cr6,0x82138800
	if (!ctx.cr6.lt) goto loc_82138800;
	// addi r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 1;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822e9960
	ctx.lr = 0x821389A4;
	sub_822E9960(ctx, base);
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// ble cr6,0x82138a04
	if (!ctx.cr6.gt) goto loc_82138A04;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lbz r11,-4(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + -4);
	// cmplwi cr6,r11,95
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 95, ctx.xer);
	// bne cr6,0x82138a04
	if (!ctx.cr6.eq) goto loc_82138A04;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lbz r11,-3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// bne cr6,0x82138a04
	if (!ctx.cr6.eq) goto loc_82138A04;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lbz r11,-2(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// cmplwi cr6,r11,98
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 98, ctx.xer);
	// bne cr6,0x82138a04
	if (!ctx.cr6.eq) goto loc_82138A04;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lbz r11,-1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r11,115
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 115, ctx.xer);
	// bne cr6,0x82138a04
	if (!ctx.cr6.eq) goto loc_82138A04;
	// addi r31,r31,-3
	ctx.r31.s64 = ctx.r31.s64 + -3;
	// stb r17,-4(r10)
	PPC_STORE_U8(ctx.r10.u32 + -4, ctx.r17.u8);
loc_82138A04:
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// ld r9,0(r22)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r22.u32 + 0);
	// ld r8,8(r22)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r22.u32 + 8);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// ld r7,16(r22)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r22.u32 + 16);
	// li r5,1
	ctx.r5.s64 = 1;
	// ld r30,24(r22)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r22.u32 + 24);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r3,76(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 76);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// std r7,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r7.u64);
	// std r30,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r30.u64);
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// lwz r10,80(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 80);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82138A4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82138800
	if (!ctx.cr0.eq) goto loc_82138800;
	// add r25,r31,r24
	ctx.r25.u64 = ctx.r31.u64 + ctx.r24.u64;
	// mr r31,r17
	ctx.r31.u64 = ctx.r17.u64;
	// mr r27,r17
	ctx.r27.u64 = ctx.r17.u64;
	// mr r26,r17
	ctx.r26.u64 = ctx.r17.u64;
	// mr r28,r17
	ctx.r28.u64 = ctx.r17.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r23,r25
	ctx.r23.u64 = ctx.r25.u64;
	// b 0x82138c30
	goto loc_82138C30;
loc_82138A74:
	// lwz r10,64(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 64);
	// mulli r11,r8,12
	ctx.r11.s64 = ctx.r8.s64 * 12;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r21,8
	ctx.r10.s64 = ctx.r21.s64 + 8;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x82138800
	if (ctx.cr6.eq) goto loc_82138800;
	// mulli r9,r8,24
	ctx.r9.s64 = ctx.r8.s64 * 24;
	// addi r11,r21,20
	ctx.r11.s64 = ctx.r21.s64 + 20;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82138ad4
	if (ctx.cr6.eq) goto loc_82138AD4;
	// cmplwi cr6,r27,65535
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 65535, ctx.xer);
	// bne cr6,0x82138ac0
	if (!ctx.cr6.eq) goto loc_82138AC0;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x82138c84
	if (ctx.cr6.eq) goto loc_82138C84;
	// lwz r27,24(r18)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r18.u32 + 24);
	// b 0x82138adc
	goto loc_82138ADC;
loc_82138AC0:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x82138adc
	if (ctx.cr6.eq) goto loc_82138ADC;
	// lwz r11,24(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 24);
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// b 0x82138adc
	goto loc_82138ADC;
loc_82138AD4:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// bne cr6,0x82138808
	if (!ctx.cr6.eq) goto loc_82138808;
loc_82138ADC:
	// cmplwi cr6,r27,65535
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 65535, ctx.xer);
	// bne cr6,0x82138af4
	if (!ctx.cr6.eq) goto loc_82138AF4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82138800
	if (!ctx.cr6.eq) goto loc_82138800;
	// mr r27,r17
	ctx.r27.u64 = ctx.r17.u64;
	// b 0x82138b10
	goto loc_82138B10;
loc_82138AF4:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x82138b08
	if (ctx.cr6.eq) goto loc_82138B08;
	// lwz r11,40(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82138b10
	if (!ctx.cr6.eq) goto loc_82138B10;
loc_82138B08:
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82138800
	if (!ctx.cr6.lt) goto loc_82138800;
loc_82138B10:
	// addi r11,r21,4
	ctx.r11.s64 = ctx.r21.s64 + 4;
	// addi r10,r21,16
	ctx.r10.s64 = ctx.r21.s64 + 16;
	// lwzx r31,r9,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r26,r9,r10
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// bne cr6,0x82138b68
	if (!ctx.cr6.eq) goto loc_82138B68;
	// clrlwi r11,r27,19
	ctx.r11.u64 = ctx.r27.u32 & 0x1FFF;
	// cmplwi cr6,r11,2048
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2048, ctx.xer);
	// blt cr6,0x82138b60
	if (ctx.cr6.lt) goto loc_82138B60;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bge cr6,0x82138b44
	if (!ctx.cr6.lt) goto loc_82138B44;
	// li r31,11
	ctx.r31.s64 = 11;
	// b 0x82138b60
	goto loc_82138B60;
loc_82138B44:
	// cmplwi cr6,r11,6144
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6144, ctx.xer);
	// bge cr6,0x82138b54
	if (!ctx.cr6.lt) goto loc_82138B54;
	// li r31,12
	ctx.r31.s64 = 12;
	// b 0x82138b60
	goto loc_82138B60;
loc_82138B54:
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bge cr6,0x82138b60
	if (!ctx.cr6.lt) goto loc_82138B60;
	// li r31,13
	ctx.r31.s64 = 13;
loc_82138B60:
	// clrlwi r27,r11,21
	ctx.r27.u64 = ctx.r11.u32 & 0x7FF;
	// b 0x82138be0
	goto loc_82138BE0;
loc_82138B68:
	// cmpwi cr6,r31,-3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -3, ctx.xer);
	// bne cr6,0x82138b78
	if (!ctx.cr6.eq) goto loc_82138B78;
	// li r27,62
	ctx.r27.s64 = 62;
	// b 0x82138bdc
	goto loc_82138BDC;
loc_82138B78:
	// cmpwi cr6,r31,-4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -4, ctx.xer);
	// bne cr6,0x82138b88
	if (!ctx.cr6.eq) goto loc_82138B88;
	// li r27,63
	ctx.r27.s64 = 63;
	// b 0x82138bdc
	goto loc_82138BDC;
loc_82138B88:
	// cmplwi cr6,r31,9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 9, ctx.xer);
	// bne cr6,0x82138b98
	if (!ctx.cr6.eq) goto loc_82138B98;
	// li r27,61
	ctx.r27.s64 = 61;
	// b 0x82138bdc
	goto loc_82138BDC;
loc_82138B98:
	// cmpwi cr6,r31,-6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -6, ctx.xer);
	// bne cr6,0x82138bac
	if (!ctx.cr6.eq) goto loc_82138BAC;
	// li r31,17
	ctx.r31.s64 = 17;
	// mr r27,r17
	ctx.r27.u64 = ctx.r17.u64;
	// b 0x82138be0
	goto loc_82138BE0;
loc_82138BAC:
	// cmpwi cr6,r31,-7
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -7, ctx.xer);
	// bne cr6,0x82138bc0
	if (!ctx.cr6.eq) goto loc_82138BC0;
	// li r31,17
	ctx.r31.s64 = 17;
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x82138be0
	goto loc_82138BE0;
loc_82138BC0:
	// cmpwi cr6,r31,-1000
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1000, ctx.xer);
	// bne cr6,0x82138bd0
	if (!ctx.cr6.eq) goto loc_82138BD0;
	// li r27,32
	ctx.r27.s64 = 32;
	// b 0x82138bdc
	goto loc_82138BDC;
loc_82138BD0:
	// cmpwi cr6,r31,-1001
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1001, ctx.xer);
	// bne cr6,0x82138be0
	if (!ctx.cr6.eq) goto loc_82138BE0;
	// addi r27,r27,33
	ctx.r27.s64 = ctx.r27.s64 + 33;
loc_82138BDC:
	// li r31,4
	ctx.r31.s64 = 4;
loc_82138BE0:
	// mr r28,r17
	ctx.r28.u64 = ctx.r17.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x82138c30
	goto loc_82138C30;
loc_82138BEC:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82138800
	if (ctx.cr6.eq) goto loc_82138800;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
loc_82138BFC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82138c20
	if (ctx.cr0.eq) goto loc_82138C20;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82138bfc
	if (ctx.cr6.eq) goto loc_82138BFC;
loc_82138C20:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82138800
	if (!ctx.cr0.eq) goto loc_82138800;
	// lis r20,2816
	ctx.r20.s64 = 184549376;
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
loc_82138C30:
	// lbz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821387e0
	if (!ctx.cr6.eq) goto loc_821387E0;
loc_82138C3C:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x8212e828
	ctx.lr = 0x82138C44;
	sub_8212E828(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82138cdc
	if (ctx.cr0.eq) goto loc_82138CDC;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821a95b0
	ctx.lr = 0x82138C64;
	sub_821A95B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82138ce0
	goto loc_82138CE0;
loc_82138C6C:
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82138ca0
	if (ctx.cr6.eq) goto loc_82138CA0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r6,r11,32264
	ctx.r6.s64 = ctx.r11.s64 + 32264;
	// b 0x82138c8c
	goto loc_82138C8C;
loc_82138C84:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r6,r11,32240
	ctx.r6.s64 = ctx.r11.s64 + 32240;
loc_82138C8C:
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// lwz r3,0(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// li r5,2005
	ctx.r5.s64 = 2005;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x82110f18
	ctx.lr = 0x82138CA0;
	sub_82110F18(ctx, base);
loc_82138CA0:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,48
	ctx.r3.s64 = 48;
	// stw r11,52(r19)
	PPC_STORE_U32(ctx.r19.u32 + 52, ctx.r11.u32);
	// bl 0x8212e828
	ctx.lr = 0x82138CB0;
	sub_8212E828(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82138cd4
	if (ctx.cr0.eq) goto loc_82138CD4;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x821a95b0
	ctx.lr = 0x82138CD0;
	sub_821A95B0(ctx, base);
	// b 0x82138d4c
	goto loc_82138D4C;
loc_82138CD4:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// b 0x82138d4c
	goto loc_82138D4C;
loc_82138CDC:
	// mr r31,r17
	ctx.r31.u64 = ctx.r17.u64;
loc_82138CE0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82138cf0
	if (!ctx.cr6.eq) goto loc_82138CF0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82138d4c
	goto loc_82138D4C;
loc_82138CF0:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82138d00
	if (ctx.cr6.eq) goto loc_82138D00;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_82138D00:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x82138d48
	if (ctx.cr6.eq) goto loc_82138D48;
	// lwz r11,40(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 40);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r17,40(r18)
	PPC_STORE_U32(ctx.r18.u32 + 40, ctx.r17.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82138d48
	if (!ctx.cr6.eq) goto loc_82138D48;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82138d48
	if (ctx.cr0.eq) goto loc_82138D48;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// beq cr6,0x82138d48
	if (ctx.cr6.eq) goto loc_82138D48;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// addi r4,r11,-11784
	ctx.r4.s64 = ctx.r11.s64 + -11784;
	// bl 0x82135fa8
	ctx.lr = 0x82138D48;
	sub_82135FA8(ctx, base);
loc_82138D48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82138D4C:
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// b 0x822e9908
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82138D54"))) PPC_WEAK_FUNC(sub_82138D54);
PPC_FUNC_IMPL(__imp__sub_82138D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82138D58"))) PPC_WEAK_FUNC(sub_82138D58);
PPC_FUNC_IMPL(__imp__sub_82138D58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e0
	ctx.lr = 0x82138D60;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82138d88
	if (ctx.cr6.eq) goto loc_82138D88;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_82138D88:
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x821391a8
	if (!ctx.cr6.eq) goto loc_821391A8;
	// lwz r11,48(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x821391a8
	if (!ctx.cr6.eq) goto loc_821391A8;
	// lwz r29,56(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	// lwz r7,52(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// addi r11,r29,-27
	ctx.r11.s64 = ctx.r29.s64 + -27;
	// addi r10,r29,-35
	ctx.r10.s64 = ctx.r29.s64 + -35;
	// subfic r11,r11,7
	ctx.xer.ca = ctx.r11.u32 <= 7;
	ctx.r11.s64 = 7 - ctx.r11.s64;
	// addi r9,r7,-20
	ctx.r9.s64 = ctx.r7.s64 + -20;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r10,r10,4
	ctx.xer.ca = ctx.r10.u32 <= 4;
	ctx.r10.s64 = 4 - ctx.r10.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r9,r9,3
	ctx.xer.ca = ctx.r9.u32 <= 3;
	ctx.r9.s64 = 3 - ctx.r9.s64;
	// addi r8,r7,-24
	ctx.r8.s64 = ctx.r7.s64 + -24;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r8,r8,3
	ctx.xer.ca = ctx.r8.u32 <= 3;
	ctx.r8.s64 = 3 - ctx.r8.s64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82138e08
	if (!ctx.cr0.eq) goto loc_82138E08;
	// clrlwi. r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x82138e0c
	if (ctx.cr0.eq) goto loc_82138E0C;
loc_82138E08:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82138E0C:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// bne 0x82138e24
	if (!ctx.cr0.eq) goto loc_82138E24;
	// clrlwi. r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x82138e28
	if (ctx.cr0.eq) goto loc_82138E28;
loc_82138E24:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82138E28:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82138e44
	if (ctx.cr0.eq) goto loc_82138E44;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82138e44
	if (ctx.cr0.eq) goto loc_82138E44;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-10760
	ctx.r4.s64 = ctx.r11.s64 + -10760;
	// b 0x821391b0
	goto loc_821391B0;
loc_82138E44:
	// cmplwi cr6,r29,23
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 23, ctx.xer);
	// beq cr6,0x82138e68
	if (ctx.cr6.eq) goto loc_82138E68;
	// cmplwi cr6,r29,24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 24, ctx.xer);
	// beq cr6,0x82138e68
	if (ctx.cr6.eq) goto loc_82138E68;
	// cmplwi cr6,r29,252
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 252, ctx.xer);
	// beq cr6,0x82138e68
	if (ctx.cr6.eq) goto loc_82138E68;
	// cmplwi cr6,r29,253
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 253, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82138e6c
	if (!ctx.cr6.eq) goto loc_82138E6C;
loc_82138E68:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82138E6C:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,29
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 29, ctx.xer);
	// beq cr6,0x82138e84
	if (ctx.cr6.eq) goto loc_82138E84;
	// cmplwi cr6,r7,244
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 244, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82138e88
	if (!ctx.cr6.eq) goto loc_82138E88;
loc_82138E84:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82138E88:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82138ea4
	if (ctx.cr0.eq) goto loc_82138EA4;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82138ea4
	if (ctx.cr0.eq) goto loc_82138EA4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-10804
	ctx.r4.s64 = ctx.r11.s64 + -10804;
	// b 0x821391b0
	goto loc_821391B0;
loc_82138EA4:
	// lwz r28,104(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// cmplwi r28,0
	ctx.cr0.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq 0x82139020
	if (ctx.cr0.eq) goto loc_82139020;
	// lwz r10,96(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82139020
	if (ctx.cr0.eq) goto loc_82139020;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r29,241
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 241, ctx.xer);
	// beq cr6,0x82138f08
	if (ctx.cr6.eq) goto loc_82138F08;
	// cmplwi cr6,r29,243
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 243, ctx.xer);
	// beq cr6,0x82138ef0
	if (ctx.cr6.eq) goto loc_82138EF0;
	// cmplwi cr6,r29,251
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 251, ctx.xer);
	// ble cr6,0x82138ee0
	if (!ctx.cr6.gt) goto loc_82138EE0;
	// cmplwi cr6,r29,253
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 253, ctx.xer);
	// ble cr6,0x82138ef0
	if (!ctx.cr6.gt) goto loc_82138EF0;
loc_82138EE0:
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// addi r11,r11,27928
	ctx.r11.s64 = ctx.r11.s64 + 27928;
	// lbzx r31,r29,r11
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// b 0x82138ef4
	goto loc_82138EF4;
loc_82138EF0:
	// li r31,2
	ctx.r31.s64 = 2;
loc_82138EF4:
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// bne cr6,0x82138f08
	if (!ctx.cr6.eq) goto loc_82138F08;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,-10912
	ctx.r5.s64 = ctx.r11.s64 + -10912;
	// b 0x82138f10
	goto loc_82138F10;
loc_82138F08:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,-11016
	ctx.r5.s64 = ctx.r11.s64 + -11016;
loc_82138F10:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82138f34
	if (ctx.cr6.eq) goto loc_82138F34;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-11044
	ctx.r4.s64 = ctx.r11.s64 + -11044;
loc_82138F28:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82135fa8
	ctx.lr = 0x82138F30;
	sub_82135FA8(ctx, base);
	// b 0x821391b8
	goto loc_821391B8;
loc_82138F34:
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82138f50
	if (ctx.cr6.eq) goto loc_82138F50;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-11076
	ctx.r4.s64 = ctx.r11.s64 + -11076;
	// b 0x82138f28
	goto loc_82138F28;
loc_82138F50:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82138f6c
	if (ctx.cr6.eq) goto loc_82138F6C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-11112
	ctx.r4.s64 = ctx.r11.s64 + -11112;
	// b 0x82138f28
	goto loc_82138F28;
loc_82138F6C:
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// xori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 ^ 1;
	// xor. r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82139014
	if (!ctx.cr0.eq) goto loc_82139014;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82138fac
	if (ctx.cr6.eq) goto loc_82138FAC;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82139014
	if (!ctx.cr6.eq) goto loc_82139014;
loc_82138FAC:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r7,11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 11, ctx.xer);
	// blt cr6,0x82138fc4
	if (ctx.cr6.lt) goto loc_82138FC4;
	// cmplwi cr6,r7,14
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 14, ctx.xer);
	// bgt cr6,0x82138fc4
	if (ctx.cr6.gt) goto loc_82138FC4;
	// li r10,5
	ctx.r10.s64 = 5;
loc_82138FC4:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r11,r11,-11124
	ctx.r11.s64 = ctx.r11.s64 + -11124;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lbzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82134660
	ctx.lr = 0x82138FE0;
	sub_82134660(ctx, base);
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// and r10,r3,r6
	ctx.r10.u64 = ctx.r3.u64 & ctx.r6.u64;
	// and r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 & ctx.r6.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82139000
	if (ctx.cr6.eq) goto loc_82139000;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-11224
	ctx.r4.s64 = ctx.r11.s64 + -11224;
	// b 0x821391b0
	goto loc_821391B0;
loc_82139000:
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// bne cr6,0x82139020
	if (!ctx.cr6.eq) goto loc_82139020;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-11328
	ctx.r4.s64 = ctx.r11.s64 + -11328;
	// b 0x821391b0
	goto loc_821391B0;
loc_82139014:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-11380
	ctx.r4.s64 = ctx.r11.s64 + -11380;
	// b 0x82138f28
	goto loc_82138F28;
loc_82139020:
	// lwz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// lis r9,3328
	ctx.r9.s64 = 218103808;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8213904c
	if (ctx.cr0.eq) goto loc_8213904C;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82139044
	if (!ctx.cr6.eq) goto loc_82139044;
	// li r10,-1
	ctx.r10.s64 = -1;
	// b 0x82139050
	goto loc_82139050;
loc_82139044:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82139050
	goto loc_82139050;
loc_8213904C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82139050:
	// lwz r11,92(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82139078
	if (ctx.cr0.eq) goto loc_82139078;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82139070
	if (!ctx.cr6.eq) goto loc_82139070;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x8213907c
	goto loc_8213907C;
loc_82139070:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8213907c
	goto loc_8213907C;
loc_82139078:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8213907C:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82139090
	if (ctx.cr6.eq) goto loc_82139090;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-11440
	ctx.r4.s64 = ctx.r11.s64 + -11440;
	// b 0x821391b0
	goto loc_821391B0;
loc_82139090:
	// lwz r7,84(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// lwz r8,88(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 88);
	// cmplwi r7,0
	ctx.cr0.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq 0x821390b0
	if (ctx.cr0.eq) goto loc_821390B0;
	// lwz r11,16(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x821390b4
	if (!ctx.cr6.eq) goto loc_821390B4;
loc_821390B0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821390B4:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821390d0
	if (ctx.cr6.eq) goto loc_821390D0;
	// lwz r11,16(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x821390d4
	if (ctx.cr6.eq) goto loc_821390D4;
loc_821390D0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821390D4:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821390f0
	if (ctx.cr6.eq) goto loc_821390F0;
	// lwz r11,16(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x821390f4
	if (!ctx.cr6.eq) goto loc_821390F4;
loc_821390F0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821390F4:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82139110
	if (ctx.cr6.eq) goto loc_82139110;
	// lwz r11,16(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82139114
	if (ctx.cr6.eq) goto loc_82139114;
loc_82139110:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82139114:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// beq 0x82139144
	if (ctx.cr0.eq) goto loc_82139144;
	// clrlwi. r5,r9,24
	ctx.r5.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82139144
	if (ctx.cr0.eq) goto loc_82139144;
	// lwz r7,24(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// lwz r8,24(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82139144
	if (ctx.cr6.eq) goto loc_82139144;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-11512
	ctx.r4.s64 = ctx.r11.s64 + -11512;
	// b 0x821391b0
	goto loc_821391B0;
loc_82139144:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82139154
	if (ctx.cr6.eq) goto loc_82139154;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82139164
	if (!ctx.cr0.eq) goto loc_82139164;
loc_82139154:
	// clrlwi. r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82139170
	if (ctx.cr0.eq) goto loc_82139170;
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82139170
	if (ctx.cr0.eq) goto loc_82139170;
loc_82139164:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-11640
	ctx.r4.s64 = ctx.r11.s64 + -11640;
	// b 0x821391b0
	goto loc_821391B0;
loc_82139170:
	// stw r29,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r29.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// lwz r11,72(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 72);
	// stw r11,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r11.u32);
	// lwz r11,88(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 88);
	// stw r11,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r11.u32);
	// bne cr6,0x82139194
	if (!ctx.cr6.eq) goto loc_82139194;
	// lwz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// stw r11,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r11.u32);
loc_82139194:
	// lwz r11,100(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r11.u32);
	// stw r10,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r10.u32);
	// b 0x821391b8
	goto loc_821391B8;
loc_821391A8:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-11712
	ctx.r4.s64 = ctx.r11.s64 + -11712;
loc_821391B0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82135fa8
	ctx.lr = 0x821391B8;
	sub_82135FA8(ctx, base);
loc_821391B8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822e9930
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821391C4"))) PPC_WEAK_FUNC(sub_821391C4);
PPC_FUNC_IMPL(__imp__sub_821391C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821391C8"))) PPC_WEAK_FUNC(sub_821391C8);
PPC_FUNC_IMPL(__imp__sub_821391C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98b0
	ctx.lr = 0x821391D0;
	__savegprlr_14(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,112(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 112);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r4.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r3,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r3.u8);
	// stb r5,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r5.u8);
	// stw r6,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// stb r3,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r3.u8);
	// stb r3,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r3.u8);
	// beq 0x821395fc
	if (ctx.cr0.eq) goto loc_821395FC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r24,r11,-10156
	ctx.r24.s64 = ctx.r11.s64 + -10156;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r27,r11,-10200
	ctx.r27.s64 = ctx.r11.s64 + -10200;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r28,r11,-10248
	ctx.r28.s64 = ctx.r11.s64 + -10248;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r15,r11,-10256
	ctx.r15.s64 = ctx.r11.s64 + -10256;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r14,r11,-10264
	ctx.r14.s64 = ctx.r11.s64 + -10264;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r26,r11,-10344
	ctx.r26.s64 = ctx.r11.s64 + -10344;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r25,r11,-10368
	ctx.r25.s64 = ctx.r11.s64 + -10368;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r23,r11,-10420
	ctx.r23.s64 = ctx.r11.s64 + -10420;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r22,r11,-10472
	ctx.r22.s64 = ctx.r11.s64 + -10472;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r21,r11,-10488
	ctx.r21.s64 = ctx.r11.s64 + -10488;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r20,r11,-10524
	ctx.r20.s64 = ctx.r11.s64 + -10524;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r19,r11,-10532
	ctx.r19.s64 = ctx.r11.s64 + -10532;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r18,r11,-10540
	ctx.r18.s64 = ctx.r11.s64 + -10540;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r17,r11,-10556
	ctx.r17.s64 = ctx.r11.s64 + -10556;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r16,r11,-31568
	ctx.r16.s64 = ctx.r11.s64 + -31568;
	// b 0x8213929c
	goto loc_8213929C;
loc_82139288:
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r4,316(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
loc_8213929C:
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// cmplwi r7,0
	ctx.cr0.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lwz r31,24(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// beq 0x821392c0
	if (ctx.cr0.eq) goto loc_821392C0;
	// addi r3,r7,16
	ctx.r3.s64 = ctx.r7.s64 + 16;
loc_821392C0:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
loc_821392C8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x821392ec
	if (ctx.cr0.eq) goto loc_821392EC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x821392c8
	if (ctx.cr6.eq) goto loc_821392C8;
loc_821392EC:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8213932c
	if (!ctx.cr0.eq) goto loc_8213932C;
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addi r10,r6,1
	ctx.r10.s64 = ctx.r6.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82139314
	if (ctx.cr0.eq) goto loc_82139314;
	// stb r5,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r5.u8);
loc_82139314:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82139320
	if (ctx.cr6.eq) goto loc_82139320;
	// stb r5,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r5.u8);
loc_82139320:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwimi r11,r5,9,21,22
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 9) & 0x600) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF9FF);
	// b 0x821393e8
	goto loc_821393E8;
loc_8213932C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
loc_82139334:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82139358
	if (ctx.cr0.eq) goto loc_82139358;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82139334
	if (ctx.cr6.eq) goto loc_82139334;
loc_82139358:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82139380
	if (!ctx.cr0.eq) goto loc_82139380;
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addi r10,r6,1
	ctx.r10.s64 = ctx.r6.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821393d4
	if (ctx.cr0.eq) goto loc_821393D4;
	// b 0x821393d0
	goto loc_821393D0;
loc_82139380:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
loc_82139388:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x821393ac
	if (ctx.cr0.eq) goto loc_821393AC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82139388
	if (ctx.cr6.eq) goto loc_82139388;
loc_821393AC:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x821393f0
	if (!ctx.cr0.eq) goto loc_821393F0;
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addi r10,r6,1
	ctx.r10.s64 = ctx.r6.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821393d4
	if (!ctx.cr0.eq) goto loc_821393D4;
loc_821393D0:
	// stb r5,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r5.u8);
loc_821393D4:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821393e0
	if (ctx.cr6.eq) goto loc_821393E0;
	// stb r5,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r5.u8);
loc_821393E0:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwimi r11,r5,10,21,22
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 10) & 0x600) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF9FF);
loc_821393E8:
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// b 0x82139518
	goto loc_82139518;
loc_821393F0:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
loc_821393F8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8213941c
	if (ctx.cr0.eq) goto loc_8213941C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x821393f8
	if (ctx.cr6.eq) goto loc_821393F8;
loc_8213941C:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8213947c
	if (!ctx.cr0.eq) goto loc_8213947C;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82134980
	ctx.lr = 0x82139434;
	sub_82134980(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8213944c
	if (!ctx.cr0.lt) goto loc_8213944C;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
loc_82139440:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82135fa8
	ctx.lr = 0x82139448;
	sub_82135FA8(ctx, base);
	// b 0x82139514
	goto loc_82139514;
loc_8213944C:
	// lwz r11,316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r9,0,29,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x7) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF8);
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// ori r10,r10,1536
	ctx.r10.u64 = ctx.r10.u64 | 1536;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x82139518
	goto loc_82139518;
loc_8213947C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
loc_82139484:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x821394a8
	if (ctx.cr0.eq) goto loc_821394A8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82139484
	if (ctx.cr6.eq) goto loc_82139484;
loc_821394A8:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82139504
	if (!ctx.cr0.eq) goto loc_82139504;
	// lbz r11,114(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 114);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821394c4
	if (ctx.cr0.eq) goto loc_821394C4;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// b 0x82139440
	goto loc_82139440;
loc_821394C4:
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// stb r11,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r11.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// bl 0x82134a68
	ctx.lr = 0x821394DC;
	sub_82134A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821394fc
	if (ctx.cr0.lt) goto loc_821394FC;
	// lwz r11,316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwimi r9,r10,8,23,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0x100) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFEFF);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x82139518
	goto loc_82139518;
loc_821394FC:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// b 0x82139440
	goto loc_82139440;
loc_82139504:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82135fa8
	ctx.lr = 0x82139514;
	sub_82135FA8(ctx, base);
loc_82139514:
	// li r29,1
	ctx.r29.s64 = 1;
loc_82139518:
	// lbz r11,115(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 115);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82139554
	if (ctx.cr0.eq) goto loc_82139554;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8213954c
	if (!ctx.cr6.eq) goto loc_8213954C;
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8213954c
	if (!ctx.cr0.eq) goto loc_8213954C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82135fa8
	ctx.lr = 0x82139548;
	sub_82135FA8(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
loc_8213954C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r11.u8);
loc_82139554:
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82139598
	if (ctx.cr0.eq) goto loc_82139598;
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8213957c
	if (!ctx.cr0.eq) goto loc_8213957C;
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
loc_8213957C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82135fa8
	ctx.lr = 0x8213958C;
	sub_82135FA8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
loc_82139598:
	// lbz r11,113(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821395c0
	if (ctx.cr0.eq) goto loc_821395C0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82135fa8
	ctx.lr = 0x821395B4;
	sub_82135FA8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// stb r11,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r11.u8);
loc_821395C0:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x821395e4
	if (!ctx.cr6.gt) goto loc_821395E4;
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821395e4
	if (!ctx.cr0.eq) goto loc_821395E4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82135fa8
	ctx.lr = 0x821395E0;
	sub_82135FA8(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
loc_821395E4:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82139288
	if (!ctx.cr6.eq) goto loc_82139288;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82139640
	if (!ctx.cr6.eq) goto loc_82139640;
loc_821395FC:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82139640
	if (!ctx.cr0.eq) goto loc_82139640;
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82139624
	if (ctx.cr0.eq) goto loc_82139624;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,-10576
	ctx.r5.s64 = ctx.r11.s64 + -10576;
	// b 0x8213962c
	goto loc_8213962C;
loc_82139624:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,-10612
	ctx.r5.s64 = ctx.r11.s64 + -10612;
loc_8213962C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-10668
	ctx.r4.s64 = ctx.r11.s64 + -10668;
	// bl 0x82135fa8
	ctx.lr = 0x8213963C;
	sub_82135FA8(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
loc_82139640:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82139654
	if (ctx.cr0.eq) goto loc_82139654;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82139658
	goto loc_82139658;
loc_82139654:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82139658:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x822e9900
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82139660"))) PPC_WEAK_FUNC(sub_82139660);
PPC_FUNC_IMPL(__imp__sub_82139660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e0
	ctx.lr = 0x82139668;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82139688
	if (!ctx.cr6.eq) goto loc_82139688;
loc_82139680:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82139738
	goto loc_82139738;
loc_82139688:
	// lwz r31,112(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x82139728
	if (ctx.cr0.eq) goto loc_82139728;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r28,r11,-10116
	ctx.r28.s64 = ctx.r11.s64 + -10116;
loc_821396A4:
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_821396BC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x821396e0
	if (ctx.cr0.eq) goto loc_821396E0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x821396bc
	if (ctx.cr6.eq) goto loc_821396BC;
loc_821396E0:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82139704
	if (!ctx.cr0.eq) goto loc_82139704;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82139740
	if (!ctx.cr6.eq) goto loc_82139740;
	// lwz r11,12(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82139758
	if (ctx.cr0.eq) goto loc_82139758;
	// addi r27,r11,16
	ctx.r27.s64 = ctx.r11.s64 + 16;
	// b 0x82139720
	goto loc_82139720;
loc_82139704:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82139720
	if (ctx.cr6.eq) goto loc_82139720;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82135fa8
	ctx.lr = 0x8213971C;
	sub_82135FA8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
loc_82139720:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821396a4
	if (!ctx.cr6.eq) goto loc_821396A4;
loc_82139728:
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne 0x82139738
	if (!ctx.cr0.eq) goto loc_82139738;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82139738:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822e9930
	__restgprlr_26(ctx, base);
	return;
loc_82139740:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-13964
	ctx.r4.s64 = ctx.r11.s64 + -13964;
loc_82139748:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82135fa8
	ctx.lr = 0x82139754;
	sub_82135FA8(ctx, base);
	// b 0x82139680
	goto loc_82139680;
loc_82139758:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-14116
	ctx.r4.s64 = ctx.r11.s64 + -14116;
	// b 0x82139748
	goto loc_82139748;
}

__attribute__((alias("__imp__sub_82139764"))) PPC_WEAK_FUNC(sub_82139764);
PPC_FUNC_IMPL(__imp__sub_82139764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82139768"))) PPC_WEAK_FUNC(sub_82139768);
PPC_FUNC_IMPL(__imp__sub_82139768) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,-10076
	ctx.r5.s64 = ctx.r11.s64 + -10076;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82139660
	ctx.lr = 0x8213978C;
	sub_82139660(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821397ac
	if (ctx.cr0.eq) goto loc_821397AC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bl 0x82134a68
	ctx.lr = 0x821397A0;
	sub_82134A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821397ac
	if (ctx.cr0.lt) goto loc_821397AC;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_821397AC:
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

__attribute__((alias("__imp__sub_821397C4"))) PPC_WEAK_FUNC(sub_821397C4);
PPC_FUNC_IMPL(__imp__sub_821397C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821397C8"))) PPC_WEAK_FUNC(sub_821397C8);
PPC_FUNC_IMPL(__imp__sub_821397C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,88(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x821397fc
	if (!ctx.cr6.gt) goto loc_821397FC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-10064
	ctx.r4.s64 = ctx.r11.s64 + -10064;
	// bl 0x82135fa8
	ctx.lr = 0x821397F4;
	sub_82135FA8(ctx, base);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16389
	ctx.r11.u64 = ctx.r11.u64 | 16389;
loc_821397FC:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82139810"))) PPC_WEAK_FUNC(sub_82139810);
PPC_FUNC_IMPL(__imp__sub_82139810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e0
	ctx.lr = 0x82139818;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,36(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82139844:
	// srw r7,r9,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	// subf r7,r10,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r10.s64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r7,r7,30
	ctx.r7.u64 = ctx.r7.u32 & 0x3;
	// slw r7,r7,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// or r28,r7,r28
	ctx.r28.u64 = ctx.r7.u64 | ctx.r28.u64;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x82139844
	if (ctx.cr6.lt) goto loc_82139844;
	// lwz r11,20(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// lis r10,256
	ctx.r10.s64 = 16777216;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82139894
	if (ctx.cr6.eq) goto loc_82139894;
	// lis r10,2816
	ctx.r10.s64 = 184549376;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821398c0
	if (ctx.cr6.eq) goto loc_821398C0;
	// lis r10,3072
	ctx.r10.s64 = 201326592;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82139898
	if (!ctx.cr6.eq) goto loc_82139898;
	// li r8,1
	ctx.r8.s64 = 1;
loc_82139894:
	// li r27,1
	ctx.r27.s64 = 1;
loc_82139898:
	// lwz r11,16(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821398d4
	if (ctx.cr0.eq) goto loc_821398D4;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x821398c8
	if (ctx.cr6.eq) goto loc_821398C8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r26,1
	ctx.r5.s64 = ctx.r26.s64 + 1;
	// addi r4,r11,-9936
	ctx.r4.s64 = ctx.r11.s64 + -9936;
	// bl 0x82135fa8
	ctx.lr = 0x821398BC;
	sub_82135FA8(ctx, base);
	// b 0x82139908
	goto loc_82139908;
loc_821398C0:
	// li r8,1
	ctx.r8.s64 = 1;
	// b 0x82139898
	goto loc_82139898;
loc_821398C8:
	// lbz r30,27(r6)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r6.u32 + 27);
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x82139908
	goto loc_82139908;
loc_821398D4:
	// lwz r11,24(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// clrlwi r30,r11,26
	ctx.r30.u64 = ctx.r11.u32 & 0x3F;
	// beq cr6,0x821398ec
	if (ctx.cr6.eq) goto loc_821398EC;
	// ori r30,r30,128
	ctx.r30.u64 = ctx.r30.u64 | 128;
loc_821398EC:
	// lwz r11,40(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 40);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82139908
	if (ctx.cr0.eq) goto loc_82139908;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x82139908
	if (!ctx.cr6.eq) goto loc_82139908;
	// ori r30,r30,64
	ctx.r30.u64 = ctx.r30.u64 | 64;
loc_82139908:
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 1, ctx.xer);
	// blt cr6,0x82139954
	if (ctx.cr6.lt) goto loc_82139954;
	// beq cr6,0x82139938
	if (ctx.cr6.eq) goto loc_82139938;
	// cmplwi cr6,r26,3
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 3, ctx.xer);
	// bge cr6,0x82139974
	if (!ctx.cr6.lt) goto loc_82139974;
	// stb r28,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r28.u8);
	// stb r30,11(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11, ctx.r30.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwimi r11,r27,24,7,7
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r27.u32, 24) & 0x1000000) | (ctx.r11.u64 & 0xFFFFFFFFFEFFFFFF);
	// rlwimi r10,r29,29,2,2
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r29.u32, 29) & 0x20000000) | (ctx.r10.u64 & 0xFFFFFFFFDFFFFFFF);
	// b 0x8213996c
	goto loc_8213996C;
loc_82139938:
	// stb r28,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r28.u8);
	// stb r30,10(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10, ctx.r30.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwimi r11,r27,25,6,6
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r27.u32, 25) & 0x2000000) | (ctx.r11.u64 & 0xFFFFFFFFFDFFFFFF);
	// rlwimi r10,r29,30,1,1
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r29.u32, 30) & 0x40000000) | (ctx.r10.u64 & 0xFFFFFFFFBFFFFFFF);
	// b 0x8213996c
	goto loc_8213996C;
loc_82139954:
	// stb r28,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r28.u8);
	// stb r30,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r30.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwimi r11,r27,26,5,5
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r27.u32, 26) & 0x4000000) | (ctx.r11.u64 & 0xFFFFFFFFFBFFFFFF);
	// rlwimi r10,r29,31,0,0
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r29.u32, 31) & 0x80000000) | (ctx.r10.u64 & 0xFFFFFFFF7FFFFFFF);
loc_8213996C:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_82139974:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822e9930
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213997C"))) PPC_WEAK_FUNC(sub_8213997C);
PPC_FUNC_IMPL(__imp__sub_8213997C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82139980"))) PPC_WEAK_FUNC(sub_82139980);
PPC_FUNC_IMPL(__imp__sub_82139980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98d4
	ctx.lr = 0x82139988;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// addi r31,r1,112
	ctx.r31.s64 = ctx.r1.s64 + 112;
	// std r24,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r24.u64);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r5,68
	ctx.r29.s64 = ctx.r5.s64 + 68;
	// addi r27,r11,-9132
	ctx.r27.s64 = ctx.r11.s64 + -9132;
	// li r23,1
	ctx.r23.s64 = 1;
loc_821399B8:
	// lwz r30,16(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x82139ad8
	if (ctx.cr0.eq) goto loc_82139AD8;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82139a1c
	if (ctx.cr0.eq) goto loc_82139A1C;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82139b88
	if (ctx.cr6.eq) goto loc_82139B88;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82139a00
	if (ctx.cr6.eq) goto loc_82139A00;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x82139a00
	if (ctx.cr6.eq) goto loc_82139A00;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x82139a00
	if (ctx.cr6.eq) goto loc_82139A00;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82135fa8
	ctx.lr = 0x821399FC;
	sub_82135FA8(ctx, base);
	// b 0x82139a2c
	goto loc_82139A2C;
loc_82139A00:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r10,r11,25,1,6
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 25) & 0x7E000000) | (ctx.r10.u64 & 0xFFFFFFFF81FFFFFF);
	// clrlwi r11,r9,7
	ctx.r11.u64 = ctx.r9.u32 & 0x1FFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// b 0x82139a28
	goto loc_82139A28;
loc_82139A1C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// rlwimi r11,r10,25,1,6
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 25) & 0x7E000000) | (ctx.r11.u64 & 0xFFFFFFFF81FFFFFF);
loc_82139A28:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82139A2C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// bl 0x821344e0
	ctx.lr = 0x82139A38;
	sub_821344E0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82139b9c
	if (ctx.cr6.eq) goto loc_82139B9C;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
loc_82139A4C:
	// srw r10,r3,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r8.u8 & 0x3F));
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x82139a74
	if (ctx.cr6.lt) goto loc_82139A74;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// blt cr6,0x82139b74
	if (ctx.cr6.lt) goto loc_82139B74;
	// beq cr6,0x82139b60
	if (ctx.cr6.eq) goto loc_82139B60;
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// blt cr6,0x82139b48
	if (ctx.cr6.lt) goto loc_82139B48;
	// bne cr6,0x82139a8c
	if (!ctx.cr6.eq) goto loc_82139A8C;
loc_82139A74:
	// slw r7,r24,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r11.u8 & 0x3F));
loc_82139A78:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82139A7C:
	// rlwinm r7,r7,17,0,14
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 17) & 0xFFFE0000;
	// or r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 | ctx.r10.u64;
	// rlwimi r7,r10,0,15,6
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFFFE01FFFF) | (ctx.r7.u64 & 0x1FE0000);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
loc_82139A8C:
	// addi r8,r8,3
	ctx.r8.s64 = ctx.r8.s64 + 3;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplwi cr6,r8,12
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 12, ctx.xer);
	// blt cr6,0x82139a4c
	if (ctx.cr6.lt) goto loc_82139A4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// rlwimi r11,r9,28,15,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 28) & 0x10000) | (ctx.r11.u64 & 0xFFFFFFFFFFFEFFFF);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82139ad8
	if (ctx.cr0.eq) goto loc_82139AD8;
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82139bec
	if (!ctx.cr0.eq) goto loc_82139BEC;
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r10,15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15, ctx.xer);
	// bne cr6,0x82139bf8
	if (!ctx.cr6.eq) goto loc_82139BF8;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82139AD8:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// blt cr6,0x821399b8
	if (ctx.cr6.lt) goto loc_821399B8;
loc_82139AEC:
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r11,2
	ctx.r11.s64 = 2;
loc_82139AFC:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r6,r7,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x82139b14
	if (!ctx.cr0.eq) goto loc_82139B14;
	// rlwinm. r7,r7,0,7,14
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1FE0000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// bne 0x82139b18
	if (!ctx.cr0.eq) goto loc_82139B18;
loc_82139B14:
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
loc_82139B18:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82139afc
	if (!ctx.cr0.eq) goto loc_82139AFC;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82139c04
	if (ctx.cr6.eq) goto loc_82139C04;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82139c04
	if (ctx.cr6.eq) goto loc_82139C04;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-9192
	ctx.r4.s64 = ctx.r11.s64 + -9192;
	// b 0x82139b90
	goto loc_82139B90;
loc_82139B48:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r7,r10,0,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82139bb0
	if (ctx.cr0.eq) goto loc_82139BB0;
	// li r7,3
	ctx.r7.s64 = 3;
loc_82139B58:
	// slw r7,r7,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// b 0x82139a7c
	goto loc_82139A7C;
loc_82139B60:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r7,r10,0,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82139bbc
	if (ctx.cr0.eq) goto loc_82139BBC;
	// li r7,2
	ctx.r7.s64 = 2;
	// b 0x82139b58
	goto loc_82139B58;
loc_82139B74:
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82139bc8
	if (!ctx.cr6.eq) goto loc_82139BC8;
	// slw r7,r23,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r11.u8 & 0x3F));
	// b 0x82139a78
	goto loc_82139A78;
loc_82139B88:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-9224
	ctx.r4.s64 = ctx.r11.s64 + -9224;
loc_82139B90:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82135fa8
	ctx.lr = 0x82139B98;
	sub_82135FA8(ctx, base);
	// b 0x82139e8c
	goto loc_82139E8C;
loc_82139B9C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r4,r11,-9264
	ctx.r4.s64 = ctx.r11.s64 + -9264;
	// bl 0x82135fa8
	ctx.lr = 0x82139BAC;
	sub_82135FA8(ctx, base);
	// b 0x82139aec
	goto loc_82139AEC;
loc_82139BB0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-9336
	ctx.r4.s64 = ctx.r11.s64 + -9336;
	// b 0x82139b90
	goto loc_82139B90;
loc_82139BBC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-9408
	ctx.r4.s64 = ctx.r11.s64 + -9408;
	// b 0x82139b90
	goto loc_82139B90;
loc_82139BC8:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,-24232
	ctx.r11.s64 = ctx.r11.s64 + -24232;
	// addi r4,r10,-9440
	ctx.r4.s64 = ctx.r10.s64 + -9440;
	// lbzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
loc_82139BDC:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x82135fa8
	ctx.lr = 0x82139BE8;
	sub_82135FA8(ctx, base);
	// b 0x82139e8c
	goto loc_82139E8C;
loc_82139BEC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-9512
	ctx.r4.s64 = ctx.r11.s64 + -9512;
	// b 0x82139b90
	goto loc_82139B90;
loc_82139BF8:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-9592
	ctx.r4.s64 = ctx.r11.s64 + -9592;
	// b 0x82139b90
	goto loc_82139B90;
loc_82139C04:
	// lwz r28,112(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r29,116(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm. r11,r28,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82139c20
	if (!ctx.cr0.eq) goto loc_82139C20;
	// rlwinm. r11,r29,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// beq 0x82139c24
	if (ctx.cr0.eq) goto loc_82139C24;
loc_82139C20:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82139C24:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwimi r10,r11,15,16,16
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 15) & 0x8000) | (ctx.r10.u64 & 0xFFFFFFFFFFFF7FFF);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// beq 0x82139dc8
	if (ctx.cr0.eq) goto loc_82139DC8;
	// rlwinm. r31,r28,15,24,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 15) & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// rlwinm r11,r28,7,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 7) & 0x3F;
	// bne 0x82139c48
	if (!ctx.cr0.eq) goto loc_82139C48;
	// rlwinm r11,r29,7,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 7) & 0x3F;
loc_82139C48:
	// rlwinm r10,r29,7,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 7) & 0x3F;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82139c68
	if (ctx.cr6.eq) goto loc_82139C68;
	// rlwinm. r10,r29,0,7,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x1FE0000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82139c68
	if (ctx.cr0.eq) goto loc_82139C68;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-9656
	ctx.r4.s64 = ctx.r11.s64 + -9656;
	// b 0x82139b90
	goto loc_82139B90;
loc_82139C68:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// rlwimi r10,r11,0,26,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3F) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFC0);
	// rlwinm r3,r29,15,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 15) & 0xFF;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
loc_82139C90:
	// srw r11,r31,r7
	ctx.r11.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r7.u8 & 0x3F));
	// srw r10,r3,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r7.u8 & 0x3F));
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82139cb0
	if (!ctx.cr6.eq) goto loc_82139CB0;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x82139da4
	if (ctx.cr6.eq) goto loc_82139DA4;
loc_82139CB0:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82139cc8
	if (ctx.cr6.eq) goto loc_82139CC8;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82139cc8
	if (ctx.cr6.lt) goto loc_82139CC8;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bge cr6,0x82139dbc
	if (!ctx.cr6.lt) goto loc_82139DBC;
loc_82139CC8:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82139ce4
	if (!ctx.cr6.eq) goto loc_82139CE4;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82139ce4
	if (!ctx.cr6.eq) goto loc_82139CE4;
	// li r9,4
	ctx.r9.s64 = 4;
loc_82139CE4:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// blt cr6,0x82139d30
	if (ctx.cr6.lt) goto loc_82139D30;
	// beq cr6,0x82139d24
	if (ctx.cr6.eq) goto loc_82139D24;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// blt cr6,0x82139d1c
	if (ctx.cr6.lt) goto loc_82139D1C;
	// beq cr6,0x82139d14
	if (ctx.cr6.eq) goto loc_82139D14;
	// cmplwi cr6,r9,5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 5, ctx.xer);
	// bge cr6,0x82139d3c
	if (!ctx.cr6.lt) goto loc_82139D3C;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x82139d38
	goto loc_82139D38;
loc_82139D14:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x82139d28
	goto loc_82139D28;
loc_82139D1C:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// b 0x82139d34
	goto loc_82139D34;
loc_82139D24:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82139D28:
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// b 0x82139d3c
	goto loc_82139D3C;
loc_82139D30:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_82139D34:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82139D38:
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
loc_82139D3C:
	// slw r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// slw r11,r11,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r8.u8 & 0x3F));
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// or r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 | ctx.r6.u64;
	// or r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 | ctx.r5.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// blt cr6,0x82139c90
	if (ctx.cr6.lt) goto loc_82139C90;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwimi r6,r5,4,24,27
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 4) & 0xF0) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFF0F);
	// clrlwi. r31,r4,24
	ctx.r31.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// rlwimi r11,r6,16,8,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r6.u32, 16) & 0xFF0000) | (ctx.r11.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// beq 0x82139d8c
	if (ctx.cr0.eq) goto loc_82139D8C;
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82139d8c
	if (ctx.cr0.eq) goto loc_82139D8C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r4,r11,-9704
	ctx.r4.s64 = ctx.r11.s64 + -9704;
	// bl 0x82135fa8
	ctx.lr = 0x82139D8C;
	sub_82135FA8(ctx, base);
loc_82139D8C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82139e7c
	if (ctx.cr6.eq) goto loc_82139E7C;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// ori r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 16384;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// b 0x82139e7c
	goto loc_82139E7C;
loc_82139DA4:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r10,-9776
	ctx.r4.s64 = ctx.r10.s64 + -9776;
loc_82139DAC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-24232
	ctx.r11.s64 = ctx.r11.s64 + -24232;
	// lbzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// b 0x82139bdc
	goto loc_82139BDC;
loc_82139DBC:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r10,-9836
	ctx.r4.s64 = ctx.r10.s64 + -9836;
	// b 0x82139dac
	goto loc_82139DAC;
loc_82139DC8:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
loc_82139DCC:
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// lwzx r8,r8,r7
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// rlwinm r7,r8,15,17,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 15) & 0x7FFF;
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
loc_82139DEC:
	// srw r4,r6,r10
	ctx.r4.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r4,r4,30
	ctx.r4.u64 = ctx.r4.u32 & 0x3;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// bne cr6,0x82139e04
	if (!ctx.cr6.eq) goto loc_82139E04;
	// slw r4,r23,r9
	ctx.r4.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r9.u8 & 0x3F));
	// or r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 | ctx.r11.u64;
loc_82139E04:
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// blt cr6,0x82139dec
	if (ctx.cr6.lt) goto loc_82139DEC;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82139e44
	if (!ctx.cr6.eq) goto loc_82139E44;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r11,r11,16,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF0000;
	// rlwimi r10,r28,16,17,22
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r28.u32, 16) & 0x7E00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF81FF);
	// rlwinm r9,r9,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	// rlwinm r10,r10,23,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x7F;
	// rlwinm r9,r9,0,16,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// b 0x82139e6c
	goto loc_82139E6C;
loc_82139E44:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r11,r11,20,8,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF00000;
	// rlwinm r9,r8,31,17,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x4000;
	// rlwimi r10,r7,0,18,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3F00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFC0FF);
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwinm r10,r10,0,18,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// rlwinm r10,r10,0,12,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF0FFFFF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_82139E6C:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// blt cr6,0x82139dcc
	if (ctx.cr6.lt) goto loc_82139DCC;
loc_82139E7C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwimi r28,r29,1,14,14
	ctx.r28.u64 = (__builtin_rotateleft32(ctx.r29.u32, 1) & 0x20000) | (ctx.r28.u64 & 0xFFFFFFFFFFFDFFFF);
	// rlwimi r11,r28,8,6,7
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r28.u32, 8) & 0x3000000) | (ctx.r11.u64 & 0xFFFFFFFFFCFFFFFF);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_82139E8C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822e9924
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82139E94"))) PPC_WEAK_FUNC(sub_82139E94);
PPC_FUNC_IMPL(__imp__sub_82139E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82139E98"))) PPC_WEAK_FUNC(sub_82139E98);
PPC_FUNC_IMPL(__imp__sub_82139E98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x82139EA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,20(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lis r11,256
	ctx.r11.s64 = 16777216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lis r28,3072
	ctx.r28.s64 = 201326592;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82139ecc
	if (ctx.cr6.eq) goto loc_82139ECC;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82139ee4
	if (!ctx.cr6.eq) goto loc_82139EE4;
loc_82139ECC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-9024
	ctx.r4.s64 = ctx.r11.s64 + -9024;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82135fa8
	ctx.lr = 0x82139EE0;
	sub_82135FA8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82139EE4:
	// lis r11,2816
	ctx.r11.s64 = 184549376;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82139ef8
	if (ctx.cr6.eq) goto loc_82139EF8;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82139f10
	if (!ctx.cr6.eq) goto loc_82139F10;
loc_82139EF8:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-9096
	ctx.r4.s64 = ctx.r11.s64 + -9096;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82135fa8
	ctx.lr = 0x82139F0C;
	sub_82135FA8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82139F10:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82139F18"))) PPC_WEAK_FUNC(sub_82139F18);
PPC_FUNC_IMPL(__imp__sub_82139F18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98d8
	ctx.lr = 0x82139F20;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r11,92(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 92);
	// lwz r31,0(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r29,4(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r24,8(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// beq 0x82139f7c
	if (ctx.cr0.eq) goto loc_82139F7C;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lis r10,3328
	ctx.r10.s64 = 218103808;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r11,-1
	ctx.r11.s64 = -1;
	// beq cr6,0x82139f64
	if (ctx.cr6.eq) goto loc_82139F64;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82139F64:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// oris r29,r29,32768
	ctx.r29.u64 = ctx.r29.u64 | 2147483648;
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82139f78
	if (ctx.cr6.gt) goto loc_82139F78;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82139F78:
	// rlwimi r24,r11,31,0,0
	ctx.r24.u64 = (__builtin_rotateleft32(ctx.r11.u32, 31) & 0x80000000) | (ctx.r24.u64 & 0xFFFFFFFF7FFFFFFF);
loc_82139F7C:
	// clrlwi r11,r31,27
	ctx.r11.u64 = ctx.r31.u32 & 0x1F;
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// bgt cr6,0x8213a040
	if (ctx.cr6.gt) goto loc_8213A040;
	// lwz r30,84(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r5,r11,-8408
	ctx.r5.s64 = ctx.r11.s64 + -8408;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82139e98
	ctx.lr = 0x82139FA0;
	sub_82139E98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8213a170
	if (!ctx.cr0.eq) goto loc_8213A170;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82139fc8
	if (ctx.cr6.eq) goto loc_82139FC8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-8468
	ctx.r4.s64 = ctx.r11.s64 + -8468;
loc_82139FBC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82135fa8
	ctx.lr = 0x82139FC4;
	sub_82135FA8(ctx, base);
	// b 0x8213a170
	goto loc_8213A170;
loc_82139FC8:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwimi r31,r10,12,14,19
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0x3F000) | (ctx.r31.u64 & 0xFFFFFFFFFFFC0FFF);
	// beq 0x82139ff8
	if (ctx.cr0.eq) goto loc_82139FF8;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// beq cr6,0x82139ff4
	if (ctx.cr6.eq) goto loc_82139FF4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-8560
	ctx.r4.s64 = ctx.r11.s64 + -8560;
	// b 0x82139fbc
	goto loc_82139FBC;
loc_82139FF4:
	// oris r31,r31,4
	ctx.r31.u64 = ctx.r31.u64 | 262144;
loc_82139FF8:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// rlwinm r9,r29,0,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFF000;
	// addi r10,r10,-8596
	ctx.r10.s64 = ctx.r10.s64 + -8596;
	// rlwinm r8,r11,25,27,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1C;
	// rlwinm r7,r11,28,27,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1C;
	// rlwinm r6,r11,31,27,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1C;
	// rlwinm r11,r11,2,27,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1C;
	// lwzx r8,r8,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwzx r7,r7,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// lwzx r6,r6,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// rlwimi r7,r8,3,26,28
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 3) & 0x38) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFC7);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// clrlwi r10,r7,26
	ctx.r10.u64 = ctx.r7.u32 & 0x3F;
	// rlwimi r6,r10,3,0,28
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 3) & 0xFFFFFFF8) | (ctx.r6.u64 & 0xFFFFFFFF00000007);
	// rlwimi r11,r6,3,0,28
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r6.u32, 3) & 0xFFFFFFF8) | (ctx.r11.u64 & 0xFFFFFFFF00000007);
	// or r29,r11,r9
	ctx.r29.u64 = ctx.r11.u64 | ctx.r9.u64;
	// b 0x8213a044
	goto loc_8213A044;
loc_8213A040:
	// ori r29,r29,4095
	ctx.r29.u64 = ctx.r29.u64 | 4095;
loc_8213A044:
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 1, ctx.xer);
	// beq cr6,0x8213a164
	if (ctx.cr6.eq) goto loc_8213A164;
	// lwz r30,96(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213a068
	if (ctx.cr6.eq) goto loc_8213A068;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-8664
	ctx.r4.s64 = ctx.r11.s64 + -8664;
	// b 0x82139fbc
	goto loc_82139FBC;
loc_8213A068:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8213a090
	if (ctx.cr0.eq) goto loc_8213A090;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// beq cr6,0x8213a08c
	if (ctx.cr6.eq) goto loc_8213A08C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-8752
	ctx.r4.s64 = ctx.r11.s64 + -8752;
	// b 0x82139fbc
	goto loc_82139FBC;
loc_8213A08C:
	// ori r31,r31,2048
	ctx.r31.u64 = ctx.r31.u64 | 2048;
loc_8213A090:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,12052
	ctx.r5.s64 = ctx.r11.s64 + 12052;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82139e98
	ctx.lr = 0x8213A0A4;
	sub_82139E98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8213a170
	if (!ctx.cr0.eq) goto loc_8213A170;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// rlwimi r31,r11,5,21,26
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r11.u32, 5) & 0x7E0) | (ctx.r31.u64 & 0xFFFFFFFFFFFFF81F);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// clrlwi. r9,r11,27
	ctx.r9.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8213a15c
	if (ctx.cr0.eq) goto loc_8213A15C;
	// rlwimi r11,r10,26,0,5
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 26) & 0xFC000000) | (ctx.r11.u64 & 0xFFFFFFFF03FFFFFF);
	// cmplwi cr6,r9,18
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 18, ctx.xer);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// beq cr6,0x8213a134
	if (ctx.cr6.eq) goto loc_8213A134;
	// cmplwi cr6,r9,24
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 24, ctx.xer);
	// beq cr6,0x8213a0f8
	if (ctx.cr6.eq) goto loc_8213A0F8;
	// rlwinm r9,r10,0,24,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC0;
	// rlwinm r11,r31,8,24,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 8) & 0xC0;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8213a164
	if (ctx.cr6.eq) goto loc_8213A164;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-8824
	ctx.r4.s64 = ctx.r11.s64 + -8824;
	// b 0x8213a128
	goto loc_8213A128;
loc_8213A0F8:
	// rlwinm r11,r31,6,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0x3;
	// rlwinm r9,r31,4,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0x3;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8213a120
	if (!ctx.cr6.eq) goto loc_8213A120;
	// rlwinm r9,r31,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x3;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8213a120
	if (!ctx.cr6.eq) goto loc_8213A120;
	// rlwinm r10,r10,26,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8213a164
	if (ctx.cr6.eq) goto loc_8213A164;
loc_8213A120:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-8888
	ctx.r4.s64 = ctx.r11.s64 + -8888;
loc_8213A128:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82135fa8
	ctx.lr = 0x8213A130;
	sub_82135FA8(ctx, base);
	// b 0x8213a164
	goto loc_8213A164;
loc_8213A134:
	// rlwinm r11,r31,4,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0x3;
	// rlwinm r9,r31,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x3;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8213a150
	if (!ctx.cr6.eq) goto loc_8213A150;
	// rlwinm r10,r10,26,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8213a164
	if (ctx.cr6.eq) goto loc_8213A164;
loc_8213A150:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-8956
	ctx.r4.s64 = ctx.r11.s64 + -8956;
	// b 0x8213a128
	goto loc_8213A128;
loc_8213A15C:
	// rlwimi r11,r10,30,0,1
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 30) & 0xC0000000) | (ctx.r11.u64 & 0xFFFFFFFF3FFFFFFF);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_8213A164:
	// stw r31,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r31.u32);
	// stw r29,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r29.u32);
	// stw r24,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r24.u32);
loc_8213A170:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822e9928
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213A178"))) PPC_WEAK_FUNC(sub_8213A178);
PPC_FUNC_IMPL(__imp__sub_8213A178) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e0
	ctx.lr = 0x8213A180;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8213a250
	if (!ctx.cr0.eq) goto loc_8213A250;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r26,r29,164
	ctx.r26.s64 = ctx.r29.s64 + 164;
loc_8213A1A4:
	// lbzx r9,r26,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r11.u32);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x8213a1b8
	if (ctx.cr0.eq) goto loc_8213A1B8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_8213A1B8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8213a1a4
	if (ctx.cr6.lt) goto loc_8213A1A4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8213a250
	if (ctx.cr6.eq) goto loc_8213A250;
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8213a250
	if (ctx.cr6.eq) goto loc_8213A250;
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r4,r10,-8344
	ctx.r4.s64 = ctx.r10.s64 + -8344;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// addi r11,r11,111
	ctx.r11.s64 = ctx.r11.s64 + 111;
	// extsb r30,r11
	ctx.r30.s64 = ctx.r11.s8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82135fa8
	ctx.lr = 0x8213A210;
	sub_82135FA8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8213a250
	if (ctx.cr6.eq) goto loc_8213A250;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r27,r11,-8396
	ctx.r27.s64 = ctx.r11.s64 + -8396;
loc_8213A224:
	// lbzx r11,r26,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r31.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8213a244
	if (!ctx.cr0.eq) goto loc_8213A244;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82135fa8
	ctx.lr = 0x8213A244;
	sub_82135FA8(ctx, base);
loc_8213A244:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x8213a224
	if (ctx.cr6.lt) goto loc_8213A224;
loc_8213A250:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822e9930
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213A258"))) PPC_WEAK_FUNC(sub_8213A258);
PPC_FUNC_IMPL(__imp__sub_8213A258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x8213A260;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8213A270:
	// lwz r11,124(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213a290
	if (ctx.cr6.eq) goto loc_8213A290;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82133be8
	ctx.lr = 0x8213A288;
	sub_82133BE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8213a354
	if (ctx.cr0.lt) goto loc_8213A354;
loc_8213A290:
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r31,124(r29)
	PPC_STORE_U32(ctx.r29.u32 + 124, ctx.r31.u32);
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// beq cr6,0x8213a320
	if (ctx.cr6.eq) goto loc_8213A320;
	// lbz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8213a2f8
	if (ctx.cr6.lt) goto loc_8213A2F8;
	// beq cr6,0x8213a2cc
	if (ctx.cr6.eq) goto loc_8213A2CC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8213a320
	if (!ctx.cr6.lt) goto loc_8213A320;
loc_8213A2B8:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stb r30,8(r29)
	PPC_STORE_U8(ctx.r29.u32 + 8, ctx.r30.u8);
	// bl 0x82106c58
	ctx.lr = 0x8213A2C8;
	sub_82106C58(ctx, base);
	// b 0x8213a320
	goto loc_8213A320;
loc_8213A2CC:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8213a2b8
	if (!ctx.cr6.eq) goto loc_8213A2B8;
	// lbz r11,25(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 25);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8213a2b8
	if (!ctx.cr6.eq) goto loc_8213A2B8;
	// lbz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 24);
	// cmplwi cr6,r11,46
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 46, ctx.xer);
	// bne cr6,0x8213a2b8
	if (!ctx.cr6.eq) goto loc_8213A2B8;
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r11,8(r29)
	PPC_STORE_U8(ctx.r29.u32 + 8, ctx.r11.u8);
	// b 0x8213a320
	goto loc_8213A320;
loc_8213A2F8:
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// bne cr6,0x8213a320
	if (!ctx.cr6.eq) goto loc_8213A320;
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x82133ac8
	ctx.lr = 0x8213A308;
	sub_82133AC8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8213a320
	if (ctx.cr0.eq) goto loc_8213A320;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82106c58
	ctx.lr = 0x8213A31C;
	sub_82106C58(ctx, base);
	// stb r31,8(r29)
	PPC_STORE_U8(ctx.r29.u32 + 8, ctx.r31.u8);
loc_8213A320:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bgt cr6,0x8213a4d8
	if (ctx.cr6.gt) goto loc_8213A4D8;
	// lis r12,-32253
	ctx.r12.s64 = -2113732608;
	// addi r12,r12,-14864
	ctx.r12.s64 = ctx.r12.s64 + -14864;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32236
	ctx.r12.s64 = -2112618496;
	// addi r12,r12,-23952
	ctx.r12.s64 = ctx.r12.s64 + -23952;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8213A4D8;
	case 1:
		goto loc_8213A364;
	case 2:
		goto loc_8213A378;
	case 3:
		goto loc_8213A378;
	case 4:
		goto loc_8213A378;
	case 5:
		goto loc_8213A380;
	case 6:
		goto loc_8213A380;
	case 7:
		goto loc_8213A380;
	case 8:
		goto loc_8213A380;
	case 9:
		goto loc_8213A388;
	case 10:
		goto loc_8213A4D8;
	case 11:
		goto loc_8213A4D8;
	case 12:
		goto loc_8213A270;
	case 13:
		goto loc_8213A35C;
	default:
		__builtin_unreachable();
	}
loc_8213A354:
	// stw r31,52(r29)
	PPC_STORE_U32(ctx.r29.u32 + 52, ctx.r31.u32);
	// stw r31,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r31.u32);
loc_8213A35C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8213a4dc
	goto loc_8213A4DC;
loc_8213A364:
	// lbz r11,25(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 25);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8213a4d8
	if (!ctx.cr6.eq) goto loc_8213A4D8;
	// lbz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r29.u32 + 24);
	// b 0x8213a4dc
	goto loc_8213A4DC;
loc_8213A378:
	// li r3,278
	ctx.r3.s64 = 278;
	// b 0x8213a4dc
	goto loc_8213A4DC;
loc_8213A380:
	// li r3,279
	ctx.r3.s64 = 279;
	// b 0x8213a4dc
	goto loc_8213A4DC;
loc_8213A388:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r9,r10,-31344
	ctx.r9.s64 = ctx.r10.s64 + -31344;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8213A398:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r7,r7,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq 0x8213a3bc
	if (ctx.cr0.eq) goto loc_8213A3BC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8213a398
	if (ctx.cr6.eq) goto loc_8213A398;
loc_8213A3BC:
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x8213a3cc
	if (!ctx.cr0.eq) goto loc_8213A3CC;
	// li r3,257
	ctx.r3.s64 = 257;
	// b 0x8213a4dc
	goto loc_8213A4DC;
loc_8213A3CC:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r10,29160
	ctx.r9.s64 = ctx.r10.s64 + 29160;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8213A3D8:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r7,r7,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq 0x8213a3fc
	if (ctx.cr0.eq) goto loc_8213A3FC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8213a3d8
	if (ctx.cr6.eq) goto loc_8213A3D8;
loc_8213A3FC:
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x8213a40c
	if (!ctx.cr0.eq) goto loc_8213A40C;
	// li r3,281
	ctx.r3.s64 = 281;
	// b 0x8213a4dc
	goto loc_8213A4DC;
loc_8213A40C:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r10,29152
	ctx.r9.s64 = ctx.r10.s64 + 29152;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8213A418:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r7,r7,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq 0x8213a43c
	if (ctx.cr0.eq) goto loc_8213A43C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8213a418
	if (ctx.cr6.eq) goto loc_8213A418;
loc_8213A43C:
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x8213a44c
	if (!ctx.cr0.eq) goto loc_8213A44C;
	// li r3,282
	ctx.r3.s64 = 282;
	// b 0x8213a4dc
	goto loc_8213A4DC;
loc_8213A44C:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r10,-8236
	ctx.r9.s64 = ctx.r10.s64 + -8236;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8213A458:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r7,r7,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq 0x8213a47c
	if (ctx.cr0.eq) goto loc_8213A47C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8213a458
	if (ctx.cr6.eq) goto loc_8213A458;
loc_8213A47C:
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x8213a48c
	if (!ctx.cr0.eq) goto loc_8213A48C;
	// li r3,283
	ctx.r3.s64 = 283;
	// b 0x8213a4dc
	goto loc_8213A4DC;
loc_8213A48C:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r10,r10,-11968
	ctx.r10.s64 = ctx.r10.s64 + -11968;
loc_8213A494:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8213a4b8
	if (ctx.cr0.eq) goto loc_8213A4B8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8213a494
	if (ctx.cr6.eq) goto loc_8213A494;
loc_8213A4B8:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bne 0x8213a4d0
	if (!ctx.cr0.eq) goto loc_8213A4D0;
	// bl 0x82138288
	ctx.lr = 0x8213A4CC;
	sub_82138288(ctx, base);
	// b 0x8213a4dc
	goto loc_8213A4DC;
loc_8213A4D0:
	// bl 0x82135ff0
	ctx.lr = 0x8213A4D4;
	sub_82135FF0(ctx, base);
	// b 0x8213a4dc
	goto loc_8213A4DC;
loc_8213A4D8:
	// li r3,280
	ctx.r3.s64 = 280;
loc_8213A4DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213A4E4"))) PPC_WEAK_FUNC(sub_8213A4E4);
PPC_FUNC_IMPL(__imp__sub_8213A4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213A4E8"))) PPC_WEAK_FUNC(sub_8213A4E8);
PPC_FUNC_IMPL(__imp__sub_8213A4E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98b0
	ctx.lr = 0x8213A4F0;
	__savegprlr_14(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// ori r27,r10,16389
	ctx.r27.u64 = ctx.r10.u64 | 16389;
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213a524
	if (ctx.cr6.eq) goto loc_8213A524;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-7888
	ctx.r4.s64 = ctx.r11.s64 + -7888;
	// bl 0x82135fa8
	ctx.lr = 0x8213A520;
	sub_82135FA8(ctx, base);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_8213A524:
	// lwz r10,112(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8213a98c
	if (ctx.cr0.eq) goto loc_8213A98C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r19,r11,-7924
	ctx.r19.s64 = ctx.r11.s64 + -7924;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r23,r11,-7980
	ctx.r23.s64 = ctx.r11.s64 + -7980;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r15,r11,-8020
	ctx.r15.s64 = ctx.r11.s64 + -8020;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r22,r11,-8052
	ctx.r22.s64 = ctx.r11.s64 + -8052;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r18,r11,-8092
	ctx.r18.s64 = ctx.r11.s64 + -8092;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r14,r11,-8152
	ctx.r14.s64 = ctx.r11.s64 + -8152;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r17,r11,-8184
	ctx.r17.s64 = ctx.r11.s64 + -8184;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r21,r11,-8224
	ctx.r21.s64 = ctx.r11.s64 + -8224;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-10256
	ctx.r11.s64 = ctx.r11.s64 + -10256;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-10264
	ctx.r11.s64 = ctx.r11.s64 + -10264;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// addi r16,r11,27648
	ctx.r16.s64 = ctx.r11.s64 + 27648;
	// b 0x8213a598
	goto loc_8213A598;
loc_8213A594:
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
loc_8213A598:
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r26,r10,16
	ctx.r26.s64 = ctx.r10.s64 + 16;
	// lwz r24,24(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bne 0x8213a5c0
	if (!ctx.cr0.eq) goto loc_8213A5C0;
	// li r26,0
	ctx.r26.s64 = 0;
loc_8213A5C0:
	// li r25,0
	ctx.r25.s64 = 0;
	// li r20,0
	ctx.r20.s64 = 0;
	// addi r29,r16,16
	ctx.r29.s64 = ctx.r16.s64 + 16;
loc_8213A5CC:
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8213a964
	if (!ctx.cr0.eq) goto loc_8213A964;
	// lwz r5,-16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + -16);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_8213A5E0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8213a604
	if (ctx.cr0.eq) goto loc_8213A604;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8213a5e0
	if (ctx.cr6.eq) goto loc_8213A5E0;
loc_8213A604:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8213a954
	if (!ctx.cr0.eq) goto loc_8213A954;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r25,1
	ctx.r25.s64 = 1;
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8213a624
	if (ctx.cr0.eq) goto loc_8213A624;
	// lwz r11,-12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -12);
	// b 0x8213a628
	goto loc_8213A628;
loc_8213A624:
	// lwz r11,-8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8);
loc_8213A628:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8213a650
	if (!ctx.cr6.eq) goto loc_8213A650;
	// lwz r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8213a640
	if (!ctx.cr6.eq) goto loc_8213A640;
	// lwz r6,124(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
loc_8213A640:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82135fa8
	ctx.lr = 0x8213A64C;
	sub_82135FA8(ctx, base);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_8213A650:
	// lbz r11,-4(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + -4);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,296(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// slw r30,r9,r11
	ctx.r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// and. r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 & ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8213a67c
	if (ctx.cr0.eq) goto loc_8213A67C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,-16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + -16);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// bl 0x82135fa8
	ctx.lr = 0x8213A678;
	sub_82135FA8(ctx, base);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_8213A67C:
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// lwz r10,300(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// or r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 | ctx.r30.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// bne cr6,0x8213a6a4
	if (!ctx.cr6.eq) goto loc_8213A6A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// bl 0x82135fa8
	ctx.lr = 0x8213A6A0;
	sub_82135FA8(ctx, base);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_8213A6A4:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// blt cr6,0x8213a954
	if (ctx.cr6.lt) goto loc_8213A954;
	// lbz r11,-3(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + -3);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8213a72c
	if (ctx.cr6.lt) goto loc_8213A72C;
	// beq cr6,0x8213a700
	if (ctx.cr6.eq) goto loc_8213A700;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8213a7c4
	if (!ctx.cr6.lt) goto loc_8213A7C4;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82134980
	ctx.lr = 0x8213A6E0;
	sub_82134980(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bge 0x8213a7d0
	if (!ctx.cr0.lt) goto loc_8213A7D0;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
loc_8213A6EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,-16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + -16);
	// bl 0x82135fa8
	ctx.lr = 0x8213A6F8;
	sub_82135FA8(ctx, base);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// b 0x8213a954
	goto loc_8213A954;
loc_8213A700:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82134a68
	ctx.lr = 0x8213A70C;
	sub_82134A68(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bge 0x8213a7d0
	if (!ctx.cr0.lt) goto loc_8213A7D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,-16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + -16);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// bl 0x82135fa8
	ctx.lr = 0x8213A724;
	sub_82135FA8(ctx, base);
	// lwz r30,112(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// b 0x8213a7c4
	goto loc_8213A7C4;
loc_8213A72C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8213a7b0
	if (ctx.cr6.eq) goto loc_8213A7B0;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x8213a7b0
	if (!ctx.cr6.eq) goto loc_8213A7B0;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r6,8(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x8213a7a0
	if (ctx.cr0.eq) goto loc_8213A7A0;
loc_8213A754:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_8213A75C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r7,r7,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x8213a780
	if (ctx.cr0.eq) goto loc_8213A780;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8213a75c
	if (ctx.cr6.eq) goto loc_8213A75C;
loc_8213A780:
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8213a798
	if (ctx.cr0.eq) goto loc_8213A798;
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne 0x8213a754
	if (!ctx.cr0.eq) goto loc_8213A754;
loc_8213A798:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8213a7a8
	if (!ctx.cr6.eq) goto loc_8213A7A8;
loc_8213A7A0:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// b 0x8213a6ec
	goto loc_8213A6EC;
loc_8213A7A8:
	// lbz r30,4(r5)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r5.u32 + 4);
	// b 0x8213a7c4
	goto loc_8213A7C4;
loc_8213A7B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,-16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + -16);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// bl 0x82135fa8
	ctx.lr = 0x8213A7C0;
	sub_82135FA8(ctx, base);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_8213A7C4:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x8213a954
	if (ctx.cr6.lt) goto loc_8213A954;
	// b 0x8213a7d4
	goto loc_8213A7D4;
loc_8213A7D0:
	// lwz r30,112(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_8213A7D4:
	// lbz r11,-4(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + -4);
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// bgt cr6,0x8213a954
	if (ctx.cr6.gt) goto loc_8213A954;
	// lis r12,-32253
	ctx.r12.s64 = -2113732608;
	// addi r12,r12,-14848
	ctx.r12.s64 = ctx.r12.s64 + -14848;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32236
	ctx.r12.s64 = -2112618496;
	// addi r12,r12,-22520
	ctx.r12.s64 = ctx.r12.s64 + -22520;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8213A808;
	case 1:
		goto loc_8213A818;
	case 2:
		goto loc_8213A828;
	case 3:
		goto loc_8213A834;
	case 4:
		goto loc_8213A840;
	case 5:
		goto loc_8213A84C;
	case 6:
		goto loc_8213A858;
	case 7:
		goto loc_8213A864;
	case 8:
		goto loc_8213A870;
	case 9:
		goto loc_8213A87C;
	case 10:
		goto loc_8213A888;
	case 11:
		goto loc_8213A894;
	case 12:
		goto loc_8213A8A4;
	case 13:
		goto loc_8213A8B0;
	case 14:
		goto loc_8213A8B8;
	case 15:
		goto loc_8213A8C4;
	case 16:
		goto loc_8213A8D0;
	case 17:
		goto loc_8213A8DC;
	case 18:
		goto loc_8213A8F0;
	case 19:
		goto loc_8213A918;
	case 20:
		goto loc_8213A92C;
	case 21:
		goto loc_8213A904;
	default:
		__builtin_unreachable();
	}
loc_8213A808:
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// rlwimi r30,r11,0,0,25
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFFC0) | (ctx.r30.u64 & 0xFFFFFFFF0000003F);
	// stw r30,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r30.u32);
	// b 0x8213a954
	goto loc_8213A954;
loc_8213A818:
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// rlwimi r11,r30,8,18,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 8) & 0x3F00) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC0FF);
loc_8213A820:
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
	// b 0x8213a954
	goto loc_8213A954;
loc_8213A828:
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// rlwimi r11,r30,16,15,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 16) & 0x10000) | (ctx.r11.u64 & 0xFFFFFFFFFFFEFFFF);
	// b 0x8213a820
	goto loc_8213A820;
loc_8213A834:
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// rlwimi r11,r30,17,14,14
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 17) & 0x20000) | (ctx.r11.u64 & 0xFFFFFFFFFFFDFFFF);
	// b 0x8213a820
	goto loc_8213A820;
loc_8213A840:
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// rlwimi r11,r30,18,13,13
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 18) & 0x40000) | (ctx.r11.u64 & 0xFFFFFFFFFFFBFFFF);
	// b 0x8213a820
	goto loc_8213A820;
loc_8213A84C:
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// rlwimi r11,r30,19,12,12
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 19) & 0x80000) | (ctx.r11.u64 & 0xFFFFFFFFFFF7FFFF);
	// b 0x8213a820
	goto loc_8213A820;
loc_8213A858:
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// rlwimi r11,r30,20,8,11
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 20) & 0xF00000) | (ctx.r11.u64 & 0xFFFFFFFFFF0FFFFF);
	// b 0x8213a820
	goto loc_8213A820;
loc_8213A864:
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// rlwimi r11,r30,24,5,7
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 24) & 0x7000000) | (ctx.r11.u64 & 0xFFFFFFFFF8FFFFFF);
	// b 0x8213a820
	goto loc_8213A820;
loc_8213A870:
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// rlwimi r11,r30,27,4,4
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 27) & 0x8000000) | (ctx.r11.u64 & 0xFFFFFFFFF7FFFFFF);
	// b 0x8213a820
	goto loc_8213A820;
loc_8213A87C:
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// rlwimi r11,r30,28,1,3
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 28) & 0x70000000) | (ctx.r11.u64 & 0xFFFFFFFF8FFFFFFF);
	// b 0x8213a820
	goto loc_8213A820;
loc_8213A888:
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// rlwimi r11,r30,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// b 0x8213a820
	goto loc_8213A820;
loc_8213A894:
	// lwz r11,292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// rlwimi r11,r30,0,31,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 0) & 0x1) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFE);
loc_8213A89C:
	// stw r11,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r11.u32);
	// b 0x8213a954
	goto loc_8213A954;
loc_8213A8A4:
	// lwz r11,292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// rlwimi r11,r30,1,30,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 1) & 0x2) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFD);
	// b 0x8213a89c
	goto loc_8213A89C;
loc_8213A8B0:
	// stb r30,294(r31)
	PPC_STORE_U8(ctx.r31.u32 + 294, ctx.r30.u8);
	// b 0x8213a954
	goto loc_8213A954;
loc_8213A8B8:
	// lwz r11,292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// rlwimi r11,r30,16,15,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 16) & 0x10000) | (ctx.r11.u64 & 0xFFFFFFFFFFFEFFFF);
	// b 0x8213a89c
	goto loc_8213A89C;
loc_8213A8C4:
	// lwz r11,292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// rlwimi r11,r30,17,14,14
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 17) & 0x20000) | (ctx.r11.u64 & 0xFFFFFFFFFFFDFFFF);
	// b 0x8213a89c
	goto loc_8213A89C;
loc_8213A8D0:
	// lwz r11,292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// rlwimi r11,r30,18,13,13
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 18) & 0x40000) | (ctx.r11.u64 & 0xFFFFFFFFFFFBFFFF);
	// b 0x8213a89c
	goto loc_8213A89C;
loc_8213A8DC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8213a954
	if (ctx.cr6.eq) goto loc_8213A954;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// b 0x8213a950
	goto loc_8213A950;
loc_8213A8F0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8213a954
	if (!ctx.cr6.eq) goto loc_8213A954;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// b 0x8213a950
	goto loc_8213A950;
loc_8213A904:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8213a954
	if (!ctx.cr6.eq) goto loc_8213A954;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// b 0x8213a950
	goto loc_8213A950;
loc_8213A918:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8213a954
	if (!ctx.cr6.eq) goto loc_8213A954;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// b 0x8213a950
	goto loc_8213A950;
loc_8213A92C:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821397c8
	ctx.lr = 0x8213A938;
	sub_821397C8(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x8213a954
	if (ctx.cr0.lt) goto loc_8213A954;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8213a954
	if (ctx.cr6.eq) goto loc_8213A954;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
loc_8213A950:
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_8213A954:
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// addi r29,r29,20
	ctx.r29.s64 = ctx.r29.s64 + 20;
	// cmplwi cr6,r20,14
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 14, ctx.xer);
	// blt cr6,0x8213a5cc
	if (ctx.cr6.lt) goto loc_8213A5CC;
loc_8213A964:
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8213a980
	if (!ctx.cr0.eq) goto loc_8213A980;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82135fa8
	ctx.lr = 0x8213A97C;
	sub_82135FA8(ctx, base);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_8213A980:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8213a594
	if (!ctx.cr6.eq) goto loc_8213A594;
loc_8213A98C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x822e9900
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213A998"))) PPC_WEAK_FUNC(sub_8213A998);
PPC_FUNC_IMPL(__imp__sub_8213A998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x8213A9A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8213a9d0
	if (!ctx.cr6.eq) goto loc_8213A9D0;
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// bl 0x8213a178
	ctx.lr = 0x8213A9C4;
	sub_8213A178(ctx, base);
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r3,312(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// bl 0x820edd28
	ctx.lr = 0x8213A9D0;
	sub_820EDD28(ctx, base);
loc_8213A9D0:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8213aa40
	if (ctx.cr6.eq) goto loc_8213AA40;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8213aa18
	if (ctx.cr0.eq) goto loc_8213AA18;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8213aa40
	if (!ctx.cr6.eq) goto loc_8213AA40;
	// li r11,3
	ctx.r11.s64 = 3;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r3,312(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// rlwimi r4,r30,0,29,23
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r30.u32, 0) & 0xFFFFFFFFFFFFFF07) | (ctx.r4.u64 & 0xF8);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x820e8318
	ctx.lr = 0x8213AA04;
	sub_820E8318(ctx, base);
	// lwz r3,316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8213aa40
	if (ctx.cr0.eq) goto loc_8213AA40;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8213aa3c
	goto loc_8213AA3C;
loc_8213AA18:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r3,312(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// rlwinm r4,r11,0,24,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF8;
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// bl 0x820e8318
	ctx.lr = 0x8213AA2C;
	sub_820E8318(ctx, base);
	// lwz r3,316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8213aa40
	if (ctx.cr0.eq) goto loc_8213AA40;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8213AA3C:
	// bl 0x821ab9a8
	ctx.lr = 0x8213AA40;
	sub_821AB9A8(ctx, base);
loc_8213AA40:
	// lwz r3,312(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213AA4C"))) PPC_WEAK_FUNC(sub_8213AA4C);
PPC_FUNC_IMPL(__imp__sub_8213AA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213AA50"))) PPC_WEAK_FUNC(sub_8213AA50);
PPC_FUNC_IMPL(__imp__sub_8213AA50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98d0
	ctx.lr = 0x8213AA58;
	__savegprlr_22(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r27,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r27.u32);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplwi cr6,r11,245
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 245, ctx.xer);
	// beq cr6,0x8213b084
	if (ctx.cr6.eq) goto loc_8213B084;
	// cmplwi cr6,r11,246
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 246, ctx.xer);
	// beq cr6,0x8213aef0
	if (ctx.cr6.eq) goto loc_8213AEF0;
	// cmplwi cr6,r11,247
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 247, ctx.xer);
	// beq cr6,0x8213ae28
	if (ctx.cr6.eq) goto loc_8213AE28;
	// cmplwi cr6,r11,248
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 248, ctx.xer);
	// bne cr6,0x8213b1a8
	if (!ctx.cr6.eq) goto loc_8213B1A8;
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213aaa8
	if (ctx.cr6.eq) goto loc_8213AAA8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-6428
	ctx.r4.s64 = ctx.r11.s64 + -6428;
	// bl 0x82135fa8
	ctx.lr = 0x8213AAA8;
	sub_82135FA8(ctx, base);
loc_8213AAA8:
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lwz r28,84(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// rlwinm r25,r11,10,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	// lwz r10,76(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// clrlwi r23,r10,28
	ctx.r23.u64 = ctx.r10.u32 & 0xF;
	// rlwinm r29,r10,16,28,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xF;
	// rlwinm. r9,r11,0,8,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// clrlwi r22,r11,24
	ctx.r22.u64 = ctx.r11.u32 & 0xFF;
	// beq 0x8213aadc
	if (ctx.cr0.eq) goto loc_8213AADC;
	// li r25,2
	ctx.r25.s64 = 2;
loc_8213AADC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r26,32(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// addi r24,r11,-6448
	ctx.r24.s64 = ctx.r11.s64 + -6448;
loc_8213AAEC:
	// srw r11,r26,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r26.u32 >> (ctx.r30.u8 & 0x3F));
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8213ab54
	if (ctx.cr6.eq) goto loc_8213AB54;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x8213ab4c
	if (ctx.cr6.eq) goto loc_8213AB4C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8213ab44
	if (ctx.cr6.eq) goto loc_8213AB44;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x8213ab3c
	if (ctx.cr6.eq) goto loc_8213AB3C;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x8213abac
	if (ctx.cr6.eq) goto loc_8213ABAC;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x8213aba0
	if (ctx.cr6.eq) goto loc_8213ABA0;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x8213ab58
	if (!ctx.cr6.eq) goto loc_8213AB58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82135fa8
	ctx.lr = 0x8213AB38;
	sub_82135FA8(ctx, base);
	// b 0x8213ab58
	goto loc_8213AB58;
loc_8213AB3C:
	// ori r27,r27,8
	ctx.r27.u64 = ctx.r27.u64 | 8;
	// b 0x8213ab58
	goto loc_8213AB58;
loc_8213AB44:
	// ori r27,r27,4
	ctx.r27.u64 = ctx.r27.u64 | 4;
	// b 0x8213ab58
	goto loc_8213AB58;
loc_8213AB4C:
	// ori r27,r27,2
	ctx.r27.u64 = ctx.r27.u64 | 2;
	// b 0x8213ab58
	goto loc_8213AB58;
loc_8213AB54:
	// ori r27,r27,1
	ctx.r27.u64 = ctx.r27.u64 | 1;
loc_8213AB58:
	// addi r30,r30,3
	ctx.r30.s64 = ctx.r30.s64 + 3;
	// cmpwi cr6,r30,12
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 12, ctx.xer);
	// blt cr6,0x8213aaec
	if (ctx.cr6.lt) goto loc_8213AAEC;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8213acd4
	if (ctx.cr0.eq) goto loc_8213ACD4;
	// clrlwi. r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8213acd4
	if (ctx.cr0.eq) goto loc_8213ACD4;
	// cmplwi cr6,r23,9
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 9, ctx.xer);
	// beq cr6,0x8213abc8
	if (ctx.cr6.eq) goto loc_8213ABC8;
	// cmplwi cr6,r23,13
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 13, ctx.xer);
	// ble cr6,0x8213ab94
	if (!ctx.cr6.gt) goto loc_8213AB94;
	// cmplwi cr6,r23,15
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 15, ctx.xer);
	// ble cr6,0x8213abc8
	if (!ctx.cr6.gt) goto loc_8213ABC8;
loc_8213AB94:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-6552
	ctx.r4.s64 = ctx.r11.s64 + -6552;
	// b 0x8213abb4
	goto loc_8213ABB4;
loc_8213ABA0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-6572
	ctx.r4.s64 = ctx.r11.s64 + -6572;
	// b 0x8213abb4
	goto loc_8213ABB4;
loc_8213ABAC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-6592
	ctx.r4.s64 = ctx.r11.s64 + -6592;
loc_8213ABB4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82135fa8
	ctx.lr = 0x8213ABBC;
	sub_82135FA8(ctx, base);
loc_8213ABBC:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8213b1ac
	goto loc_8213B1AC;
loc_8213ABC8:
	// rlwinm r11,r23,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 4) & 0xFFFFFFF0;
	// li r9,1
	ctx.r9.s64 = 1;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// clrlwi r8,r11,27
	ctx.r8.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r11,r10,45
	ctx.r11.s64 = ctx.r10.s64 + 45;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// slw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8213ac4c
	if (ctx.cr0.eq) goto loc_8213AC4C;
	// cmplwi cr6,r23,9
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 9, ctx.xer);
	// bne cr6,0x8213ac18
	if (!ctx.cr6.eq) goto loc_8213AC18;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,-13272
	ctx.r5.s64 = ctx.r11.s64 + -13272;
	// b 0x8213ac34
	goto loc_8213AC34;
loc_8213AC18:
	// cmplwi cr6,r23,14
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 14, ctx.xer);
	// bne cr6,0x8213ac2c
	if (!ctx.cr6.eq) goto loc_8213AC2C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,-13264
	ctx.r5.s64 = ctx.r11.s64 + -13264;
	// b 0x8213ac34
	goto loc_8213AC34;
loc_8213AC2C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,-13252
	ctx.r5.s64 = ctx.r11.s64 + -13252;
loc_8213AC34:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r11,-6632
	ctx.r4.s64 = ctx.r11.s64 + -6632;
loc_8213AC40:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8213AC44:
	// bl 0x82135fa8
	ctx.lr = 0x8213AC48;
	sub_82135FA8(ctx, base);
	// b 0x8213abbc
	goto loc_8213ABBC;
loc_8213AC4C:
	// addi r11,r31,180
	ctx.r11.s64 = ctx.r31.s64 + 180;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r30,24(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// blt cr6,0x8213ac78
	if (ctx.cr6.lt) goto loc_8213AC78;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-6704
	ctx.r4.s64 = ctx.r11.s64 + -6704;
	// b 0x8213abb4
	goto loc_8213ABB4;
loc_8213AC78:
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r10,212(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 212);
	// and. r9,r10,r27
	ctx.r9.u64 = ctx.r10.u64 & ctx.r27.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8213acac
	if (ctx.cr0.eq) goto loc_8213ACAC;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r10,-6776
	ctx.r4.s64 = ctx.r10.s64 + -6776;
loc_8213AC94:
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,28016
	ctx.r11.s64 = ctx.r11.s64 + 28016;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwzx r6,r9,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// b 0x8213ac44
	goto loc_8213AC44;
loc_8213ACAC:
	// or r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 | ctx.r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r10,212(r11)
	PPC_STORE_U8(ctx.r11.u32 + 212, ctx.r10.u8);
	// bl 0x8213a998
	ctx.lr = 0x8213ACBC;
	sub_8213A998(ctx, base);
	// rlwimi r29,r23,4,24,27
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r23.u32, 4) & 0xF0) | (ctx.r29.u64 & 0xFFFFFFFFFFFFFF0F);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// clrlwi r6,r29,24
	ctx.r6.u64 = ctx.r29.u32 & 0xFF;
	// bl 0x820ed6b0
	ctx.lr = 0x8213ACD0;
	sub_820ED6B0(ctx, base);
	// b 0x8213b1a8
	goto loc_8213B1A8;
loc_8213ACD4:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwimi r11,r25,4,26,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r25.u32, 4) & 0x30) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFCF);
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// rlwimi r29,r11,4,0,27
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r11.u32, 4) & 0xFFFFFFF0) | (ctx.r29.u64 & 0xFFFFFFFF0000000F);
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// clrlwi r8,r11,27
	ctx.r8.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r11,r10,33
	ctx.r11.s64 = ctx.r10.s64 + 33;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// slw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8213ad28
	if (ctx.cr0.eq) goto loc_8213AD28;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-6840
	ctx.r4.s64 = ctx.r11.s64 + -6840;
	// b 0x8213abb4
	goto loc_8213ABB4;
loc_8213AD28:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r31,132
	ctx.r11.s64 = ctx.r31.s64 + 132;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r30,24(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// cmplwi cr6,r30,15
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 15, ctx.xer);
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// addi r10,r10,111
	ctx.r10.s64 = ctx.r10.s64 + 111;
	// ble cr6,0x8213ad70
	if (!ctx.cr6.gt) goto loc_8213AD70;
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r4,r11,-6884
	ctx.r4.s64 = ctx.r11.s64 + -6884;
	// b 0x8213ac40
	goto loc_8213AC40;
loc_8213AD70:
	// cmplwi cr6,r23,9
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 9, ctx.xer);
	// bne cr6,0x8213ad84
	if (!ctx.cr6.eq) goto loc_8213AD84;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-6960
	ctx.r4.s64 = ctx.r11.s64 + -6960;
	// b 0x8213abb4
	goto loc_8213ABB4;
loc_8213AD84:
	// cmplwi cr6,r23,14
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 14, ctx.xer);
	// bne cr6,0x8213ad98
	if (!ctx.cr6.eq) goto loc_8213AD98;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-7048
	ctx.r4.s64 = ctx.r11.s64 + -7048;
	// b 0x8213abb4
	goto loc_8213ABB4;
loc_8213AD98:
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// lwz r8,16(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r9,r9,0,30,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// addi r9,r9,6
	ctx.r9.s64 = ctx.r9.s64 + 6;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8213ade4
	if (ctx.cr6.eq) goto loc_8213ADE4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213adcc
	if (ctx.cr6.eq) goto loc_8213ADCC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,-10264
	ctx.r5.s64 = ctx.r11.s64 + -10264;
	// b 0x8213add4
	goto loc_8213ADD4;
loc_8213ADCC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,-10256
	ctx.r5.s64 = ctx.r11.s64 + -10256;
loc_8213ADD4:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// addi r4,r11,-7104
	ctx.r4.s64 = ctx.r11.s64 + -7104;
	// b 0x8213ac40
	goto loc_8213AC40;
loc_8213ADE4:
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r10,164(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 164);
	// and. r9,r10,r27
	ctx.r9.u64 = ctx.r10.u64 & ctx.r27.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8213ae04
	if (ctx.cr0.eq) goto loc_8213AE04;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r10,-7168
	ctx.r4.s64 = ctx.r10.s64 + -7168;
	// b 0x8213ac94
	goto loc_8213AC94;
loc_8213AE04:
	// or r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 | ctx.r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r10,164(r11)
	PPC_STORE_U8(ctx.r11.u32 + 164, ctx.r10.u8);
	// bl 0x8213a998
	ctx.lr = 0x8213AE14;
	sub_8213A998(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x820ed698
	ctx.lr = 0x8213AE24;
	sub_820ED698(ctx, base);
	// b 0x8213b1a8
	goto loc_8213B1A8;
loc_8213AE28:
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213ae44
	if (ctx.cr6.eq) goto loc_8213AE44;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-7208
	ctx.r4.s64 = ctx.r11.s64 + -7208;
	// bl 0x82135fa8
	ctx.lr = 0x8213AE44;
	sub_82135FA8(ctx, base);
loc_8213AE44:
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14, ctx.xer);
	// bne cr6,0x8213aee4
	if (!ctx.cr6.eq) goto loc_8213AEE4;
	// lwz r29,24(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r9,r29,27
	ctx.r9.u64 = ctx.r29.u32 & 0x1F;
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r30,r10,1
	ctx.r30.u64 = ctx.r10.u64 ^ 1;
	// rlwinm r10,r29,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 27) & 0x7FFFFFF;
	// slw r9,r11,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// addi r11,r10,63
	ctx.r11.s64 = ctx.r10.s64 + 63;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8213aeb8
	if (ctx.cr0.eq) goto loc_8213AEB8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-7256
	ctx.r4.s64 = ctx.r11.s64 + -7256;
loc_8213AEB0:
	// bl 0x82135fa8
	ctx.lr = 0x8213AEB4;
	sub_82135FA8(ctx, base);
	// b 0x8213b1a8
	goto loc_8213B1A8;
loc_8213AEB8:
	// addi r11,r31,252
	ctx.r11.s64 = ctx.r31.s64 + 252;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x8213a998
	ctx.lr = 0x8213AED4;
	sub_8213A998(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x820ea7d0
	ctx.lr = 0x8213AEE0;
	sub_820EA7D0(ctx, base);
	// b 0x8213b1a8
	goto loc_8213B1A8;
loc_8213AEE4:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-7292
	ctx.r4.s64 = ctx.r11.s64 + -7292;
	// b 0x8213b1a0
	goto loc_8213B1A0;
loc_8213AEF0:
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213af0c
	if (ctx.cr6.eq) goto loc_8213AF0C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-7332
	ctx.r4.s64 = ctx.r11.s64 + -7332;
	// bl 0x82135fa8
	ctx.lr = 0x8213AF0C;
	sub_82135FA8(ctx, base);
loc_8213AF0C:
	// lwz r29,84(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x8213b078
	if (!ctx.cr6.eq) goto loc_8213B078;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r30,96
	ctx.r11.s64 = ctx.r30.s64 + 96;
	// li r9,4
	ctx.r9.s64 = 4;
loc_8213AF2C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// beq cr6,0x8213af44
	if (ctx.cr6.eq) goto loc_8213AF44;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// bne cr6,0x8213af4c
	if (!ctx.cr6.eq) goto loc_8213AF4C;
loc_8213AF44:
	// lwz r8,24(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_8213AF4C:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x8213af2c
	if (!ctx.cr0.eq) goto loc_8213AF2C;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8213af70
	if (ctx.cr6.lt) goto loc_8213AF70;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x8213af84
	if (!ctx.cr6.gt) goto loc_8213AF84;
loc_8213AF70:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-7400
	ctx.r4.s64 = ctx.r11.s64 + -7400;
	// bl 0x82135fa8
	ctx.lr = 0x8213AF80;
	sub_82135FA8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
loc_8213AF84:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8213af98
	if (ctx.cr6.lt) goto loc_8213AF98;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x8213afac
	if (!ctx.cr6.gt) goto loc_8213AFAC;
loc_8213AF98:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-7472
	ctx.r4.s64 = ctx.r11.s64 + -7472;
	// bl 0x82135fa8
	ctx.lr = 0x8213AFA8;
	sub_82135FA8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
loc_8213AFAC:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,-128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -128, ctx.xer);
	// blt cr6,0x8213afc0
	if (ctx.cr6.lt) goto loc_8213AFC0;
	// cmpwi cr6,r11,127
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 127, ctx.xer);
	// ble cr6,0x8213afd4
	if (!ctx.cr6.gt) goto loc_8213AFD4;
loc_8213AFC0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-7544
	ctx.r4.s64 = ctx.r11.s64 + -7544;
	// bl 0x82135fa8
	ctx.lr = 0x8213AFD0;
	sub_82135FA8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
loc_8213AFD4:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213aff4
	if (ctx.cr6.eq) goto loc_8213AFF4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-7600
	ctx.r4.s64 = ctx.r11.s64 + -7600;
	// bl 0x82135fa8
	ctx.lr = 0x8213AFF0;
	sub_82135FA8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
loc_8213AFF4:
	// lwz r30,24(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// li r9,1
	ctx.r9.s64 = 1;
	// clrlwi r11,r30,27
	ctx.r11.u64 = ctx.r30.u32 & 0x1F;
	// rlwinm r10,r30,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 27) & 0x7FFFFFF;
	// slw r9,r9,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// addi r11,r10,62
	ctx.r11.s64 = ctx.r10.s64 + 62;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8213b040
	if (ctx.cr0.eq) goto loc_8213B040;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-7648
	ctx.r4.s64 = ctx.r11.s64 + -7648;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8213aeb0
	goto loc_8213AEB0;
loc_8213B040:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x8213b1a8
	if (!ctx.cr6.eq) goto loc_8213B1A8;
	// addi r11,r31,248
	ctx.r11.s64 = ctx.r31.s64 + 248;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x8213a998
	ctx.lr = 0x8213B068;
	sub_8213A998(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x820ec040
	ctx.lr = 0x8213B074;
	sub_820EC040(ctx, base);
	// b 0x8213b1a8
	goto loc_8213B1A8;
loc_8213B078:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-7688
	ctx.r4.s64 = ctx.r11.s64 + -7688;
	// b 0x8213b1a0
	goto loc_8213B1A0;
loc_8213B084:
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213b0a0
	if (ctx.cr6.eq) goto loc_8213B0A0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-7728
	ctx.r4.s64 = ctx.r11.s64 + -7728;
	// bl 0x82135fa8
	ctx.lr = 0x8213B0A0;
	sub_82135FA8(ctx, base);
loc_8213B0A0:
	// lwz r26,84(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8213b198
	if (!ctx.cr6.eq) goto loc_8213B198;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r1,128
	ctx.r29.s64 = ctx.r1.s64 + 128;
	// addi r30,r30,96
	ctx.r30.s64 = ctx.r30.s64 + 96;
	// li r28,4
	ctx.r28.s64 = 4;
	// addi r27,r11,-7764
	ctx.r27.s64 = ctx.r11.s64 + -7764;
loc_8213B0C4:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8213b150
	if (ctx.cr6.eq) goto loc_8213B150;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8213b150
	if (ctx.cr6.eq) goto loc_8213B150;
	// ble cr6,0x8213b154
	if (!ctx.cr6.gt) goto loc_8213B154;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bgt cr6,0x8213b154
	if (ctx.cr6.gt) goto loc_8213B154;
loc_8213B0E8:
	// lfd f0,24(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
loc_8213B0F4:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x8213b0c4
	if (!ctx.cr0.eq) goto loc_8213B0C4;
	// lwz r30,24(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r9,r30,27
	ctx.r9.u64 = ctx.r30.u32 & 0x1F;
	// rlwinm r10,r30,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 27) & 0x7FFFFFF;
	// slw r9,r11,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// addi r11,r10,54
	ctx.r11.s64 = ctx.r10.s64 + 54;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8213b16c
	if (ctx.cr0.eq) goto loc_8213B16C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-7812
	ctx.r4.s64 = ctx.r11.s64 + -7812;
	// b 0x8213aeb0
	goto loc_8213AEB0;
loc_8213B150:
	// li r11,2
	ctx.r11.s64 = 2;
loc_8213B154:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8213b0e8
	if (ctx.cr6.eq) goto loc_8213B0E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82135fa8
	ctx.lr = 0x8213B168;
	sub_82135FA8(ctx, base);
	// b 0x8213b0f4
	goto loc_8213B0F4;
loc_8213B16C:
	// addi r11,r31,216
	ctx.r11.s64 = ctx.r31.s64 + 216;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x8213a998
	ctx.lr = 0x8213B188;
	sub_8213A998(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x820ea7e8
	ctx.lr = 0x8213B194;
	sub_820EA7E8(ctx, base);
	// b 0x8213b1a8
	goto loc_8213B1A8;
loc_8213B198:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-7848
	ctx.r4.s64 = ctx.r11.s64 + -7848;
loc_8213B1A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82135fa8
	ctx.lr = 0x8213B1A8;
	sub_82135FA8(ctx, base);
loc_8213B1A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8213B1AC:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822e9920
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213B1B4"))) PPC_WEAK_FUNC(sub_8213B1B4);
PPC_FUNC_IMPL(__imp__sub_8213B1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213B1B8"))) PPC_WEAK_FUNC(sub_8213B1B8);
PPC_FUNC_IMPL(__imp__sub_8213B1B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98cc
	ctx.lr = 0x8213B1C0;
	__savegprlr_21(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stw r22,300(r21)
	PPC_STORE_U32(ctx.r21.u32 + 300, ctx.r22.u32);
	// lwz r10,92(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 92);
	// std r22,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r22.u64);
	// stw r22,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r22.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8213b224
	if (ctx.cr0.eq) goto loc_8213B224;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lis r10,3328
	ctx.r10.s64 = 218103808;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r11,-1
	ctx.r11.s64 = -1;
	// beq cr6,0x8213b204
	if (ctx.cr6.eq) goto loc_8213B204;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8213B204:
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// oris r10,r10,4096
	ctx.r10.u64 = ctx.r10.u64 | 268435456;
	// bgt cr6,0x8213b21c
	if (ctx.cr6.gt) goto loc_8213B21C;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_8213B21C:
	// rlwimi r10,r11,27,4,4
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 27) & 0x8000000) | (ctx.r10.u64 & 0xFFFFFFFFF7FFFFFF);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
loc_8213B224:
	// lwz r11,48(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 48);
	// addi r10,r11,-3
	ctx.r10.s64 = ctx.r11.s64 + -3;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// clrlwi r23,r10,24
	ctx.r23.u64 = ctx.r10.u32 & 0xFF;
	// lis r10,-32207
	ctx.r10.s64 = -2110717952;
	// clrlwi r24,r9,24
	ctx.r24.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// addi r27,r10,27928
	ctx.r27.s64 = ctx.r10.s64 + 27928;
	// beq cr6,0x8213b260
	if (ctx.cr6.eq) goto loc_8213B260;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x8213b308
	if (!ctx.cr6.eq) goto loc_8213B308;
loc_8213B260:
	// lwz r11,52(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 52);
	// cmplwi cr6,r11,240
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 240, ctx.xer);
	// beq cr6,0x8213b2a4
	if (ctx.cr6.eq) goto loc_8213B2A4;
	// cmplwi cr6,r11,242
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 242, ctx.xer);
	// beq cr6,0x8213b290
	if (ctx.cr6.eq) goto loc_8213B290;
	// cmplwi cr6,r11,244
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 244, ctx.xer);
	// bne cr6,0x8213b2a8
	if (!ctx.cr6.eq) goto loc_8213B2A8;
	// lwz r11,96(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 96);
	// li r10,29
	ctx.r10.s64 = 29;
	// stw r11,100(r26)
	PPC_STORE_U32(ctx.r26.u32 + 100, ctx.r11.u32);
	// stw r10,52(r26)
	PPC_STORE_U32(ctx.r26.u32 + 52, ctx.r10.u32);
	// b 0x8213b2a8
	goto loc_8213B2A8;
loc_8213B290:
	// lwz r11,96(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 96);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,52(r26)
	PPC_STORE_U32(ctx.r26.u32 + 52, ctx.r10.u32);
	// stw r11,100(r26)
	PPC_STORE_U32(ctx.r26.u32 + 100, ctx.r11.u32);
	// b 0x8213b2a8
	goto loc_8213B2A8;
loc_8213B2A4:
	// li r23,1
	ctx.r23.s64 = 1;
loc_8213B2A8:
	// clrlwi. r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8213b308
	if (!ctx.cr0.eq) goto loc_8213B308;
	// lwz r11,52(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 52);
	// addi r10,r27,52
	ctx.r10.s64 = ctx.r27.s64 + 52;
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// rlwimi r9,r11,24,3,7
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 24) & 0x1F000000) | (ctx.r9.u64 & 0xFFFFFFFFE0FFFFFF);
	// rlwinm r11,r9,8,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0x1F;
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// lbzx r30,r11,r10
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x8213b30c
	if (ctx.cr0.eq) goto loc_8213B30C;
	// addi r29,r26,96
	ctx.r29.s64 = ctx.r26.s64 + 96;
loc_8213B2DC:
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq 0x8213b2f8
	if (ctx.cr0.eq) goto loc_8213B2F8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82139810
	ctx.lr = 0x8213B2F8;
	sub_82139810(ctx, base);
loc_8213B2F8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x8213b2dc
	if (ctx.cr6.lt) goto loc_8213B2DC;
loc_8213B308:
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
loc_8213B30C:
	// lwz r8,48(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 48);
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// beq cr6,0x8213b320
	if (ctx.cr6.eq) goto loc_8213B320;
	// cmplwi cr6,r8,4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 4, ctx.xer);
	// bne cr6,0x8213b598
	if (!ctx.cr6.eq) goto loc_8213B598;
loc_8213B320:
	// addi r7,r8,-3
	ctx.r7.s64 = ctx.r8.s64 + -3;
	// lwz r11,56(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 56);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// cmplwi cr6,r11,241
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 241, ctx.xer);
	// rlwinm r7,r7,28,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0x2;
	// xori r29,r7,2
	ctx.r29.u64 = ctx.r7.u64 ^ 2;
	// addi r7,r29,24
	ctx.r7.s64 = ctx.r29.s64 + 24;
	// rlwinm r25,r7,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r25,r26
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r26.u32);
	// beq cr6,0x8213b380
	if (ctx.cr6.eq) goto loc_8213B380;
	// cmplwi cr6,r11,243
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 243, ctx.xer);
	// beq cr6,0x8213b374
	if (ctx.cr6.eq) goto loc_8213B374;
	// cmplwi cr6,r11,252
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 252, ctx.xer);
	// beq cr6,0x8213b36c
	if (ctx.cr6.eq) goto loc_8213B36C;
	// cmplwi cr6,r11,253
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 253, ctx.xer);
	// bne cr6,0x8213b384
	if (!ctx.cr6.eq) goto loc_8213B384;
	// li r11,24
	ctx.r11.s64 = 24;
	// b 0x8213b378
	goto loc_8213B378;
loc_8213B36C:
	// li r11,23
	ctx.r11.s64 = 23;
	// b 0x8213b378
	goto loc_8213B378;
loc_8213B374:
	// li r11,5
	ctx.r11.s64 = 5;
loc_8213B378:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x8213b384
	goto loc_8213B384;
loc_8213B380:
	// li r24,1
	ctx.r24.s64 = 1;
loc_8213B384:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8213b3bc
	if (ctx.cr0.eq) goto loc_8213B3BC;
	// lwz r10,36(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// clrlwi r7,r10,30
	ctx.r7.u64 = ctx.r10.u32 & 0x3;
	// mulli r7,r7,85
	ctx.r7.s64 = ctx.r7.s64 * 85;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x8213b3bc
	if (ctx.cr6.eq) goto loc_8213B3BC;
loc_8213B3A0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-5480
	ctx.r4.s64 = ctx.r11.s64 + -5480;
loc_8213B3A8:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82135fa8
	ctx.lr = 0x8213B3B0;
	sub_82135FA8(ctx, base);
loc_8213B3B0:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8213b7f8
	goto loc_8213B7F8;
loc_8213B3BC:
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// clrlwi. r7,r24,24
	ctx.r7.u64 = ctx.r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// rlwimi r10,r11,26,0,5
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 26) & 0xFC000000) | (ctx.r10.u64 & 0xFFFFFFFF03FFFFFF);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// bne 0x8213b59c
	if (!ctx.cr0.eq) goto loc_8213B59C;
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// beq cr6,0x8213b3ec
	if (ctx.cr6.eq) goto loc_8213B3EC;
	// lwz r7,52(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 52);
	// addi r8,r27,52
	ctx.r8.s64 = ctx.r27.s64 + 52;
	// lbzx r8,r7,r8
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// bge cr6,0x8213b59c
	if (!ctx.cr6.lt) goto loc_8213B59C;
loc_8213B3EC:
	// lbzx r31,r11,r27
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x8213b59c
	if (ctx.cr0.eq) goto loc_8213B59C;
	// addi r11,r28,36
	ctx.r11.s64 = ctx.r28.s64 + 36;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bne cr6,0x8213b42c
	if (!ctx.cr6.eq) goto loc_8213B42C;
	// clrlwi r11,r10,30
	ctx.r11.u64 = ctx.r10.u32 & 0x3;
	// mulli r11,r11,85
	ctx.r11.s64 = ctx.r11.s64 * 85;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8213b4ac
	if (!ctx.cr6.eq) goto loc_8213B4AC;
	// b 0x8213b3a0
	goto loc_8213B3A0;
loc_8213B42C:
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// beq cr6,0x8213b46c
	if (ctx.cr6.eq) goto loc_8213B46C;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// bne cr6,0x8213b49c
	if (!ctx.cr6.eq) goto loc_8213B49C;
	// clrlwi r11,r10,30
	ctx.r11.u64 = ctx.r10.u32 & 0x3;
	// mulli r11,r11,85
	ctx.r11.s64 = ctx.r11.s64 * 85;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8213b490
	if (!ctx.cr6.eq) goto loc_8213B490;
	// addi r11,r29,25
	ctx.r11.s64 = ctx.r29.s64 + 25;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// mulli r10,r10,85
	ctx.r10.s64 = ctx.r10.s64 * 85;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// b 0x8213b480
	goto loc_8213B480;
loc_8213B46C:
	// rlwinm r11,r10,30,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3;
	// clrlwi r9,r10,30
	ctx.r9.u64 = ctx.r10.u32 & 0x3;
	// mulli r11,r11,84
	ctx.r11.s64 = ctx.r11.s64 * 84;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_8213B480:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8213b49c
	if (!ctx.cr6.eq) goto loc_8213B49C;
loc_8213B490:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-5584
	ctx.r4.s64 = ctx.r11.s64 + -5584;
	// b 0x8213b3a8
	goto loc_8213B3A8;
loc_8213B49C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82134660
	ctx.lr = 0x8213B4A8;
	sub_82134660(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
loc_8213B4AC:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82139810
	ctx.lr = 0x8213B4C0;
	sub_82139810(ctx, base);
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// bne cr6,0x8213b594
	if (!ctx.cr6.eq) goto loc_8213B594;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x8213b4e0
	if (ctx.cr6.eq) goto loc_8213B4E0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-5672
	ctx.r4.s64 = ctx.r11.s64 + -5672;
	// b 0x8213b3a8
	goto loc_8213B3A8;
loc_8213B4E0:
	// addi r11,r29,25
	ctx.r11.s64 = ctx.r29.s64 + 25;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8213b588
	if (ctx.cr0.eq) goto loc_8213B588;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8213b588
	if (!ctx.cr6.eq) goto loc_8213B588;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r9,26,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3;
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8213b538
	if (!ctx.cr6.eq) goto loc_8213B538;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r11,r11,-5680
	ctx.r11.s64 = ctx.r11.s64 + -5680;
	// addi r4,r9,-5792
	ctx.r4.s64 = ctx.r9.s64 + -5792;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lbzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x82135fa8
	ctx.lr = 0x8213B534;
	sub_82135FA8(ctx, base);
	// b 0x8213b3b0
	goto loc_8213B3B0;
loc_8213B538:
	// lwzx r10,r25,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r26.u32);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8213b558
	if (ctx.cr6.eq) goto loc_8213B558;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-5904
	ctx.r4.s64 = ctx.r11.s64 + -5904;
	// b 0x8213b3a8
	goto loc_8213B3A8;
loc_8213B558:
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwimi r7,r8,0,30,25
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFFFFFFFFFFFFC3) | (ctx.r7.u64 & 0x3C);
	// rlwimi r9,r11,28,2,2
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 28) & 0x20000000) | (ctx.r9.u64 & 0xFFFFFFFFDFFFFFFF);
	// rlwimi r10,r11,26,5,5
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 26) & 0x4000000) | (ctx.r10.u64 & 0xFFFFFFFFFBFFFFFF);
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// b 0x8213b59c
	goto loc_8213B59C;
loc_8213B588:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-5992
	ctx.r4.s64 = ctx.r11.s64 + -5992;
	// b 0x8213b3a8
	goto loc_8213B3A8;
loc_8213B594:
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
loc_8213B598:
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_8213B59C:
	// clrlwi. r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8213b5b0
	if (ctx.cr0.eq) goto loc_8213B5B0;
	// clrlwi r11,r10,6
	ctx.r11.u64 = ctx.r10.u32 & 0x3FFFFFF;
	// oris r11,r11,51200
	ctx.r11.u64 = ctx.r11.u64 | 3355443200;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
loc_8213B5B0:
	// clrlwi. r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8213b5c4
	if (ctx.cr0.eq) goto loc_8213B5C4;
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwimi r9,r11,25,3,7
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 25) & 0x1F000000) | (ctx.r9.u64 & 0xFFFFFFFFE0FFFFFF);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
loc_8213B5C4:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82139980
	ctx.lr = 0x8213B5D4;
	sub_82139980(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lwz r5,48(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 48);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// std r22,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r22.u64);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// stw r22,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r22.u32);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// li r28,-1
	ctx.r28.s64 = -1;
loc_8213B604:
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// bne cr6,0x8213b61c
	if (!ctx.cr6.eq) goto loc_8213B61C;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// bne cr6,0x8213b630
	if (!ctx.cr6.eq) goto loc_8213B630;
	// lwz r11,96(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 96);
	// b 0x8213b628
	goto loc_8213B628;
loc_8213B61C:
	// addi r11,r8,24
	ctx.r11.s64 = ctx.r8.s64 + 24;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
loc_8213B628:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8213b638
	if (!ctx.cr6.eq) goto loc_8213B638;
loc_8213B630:
	// stw r28,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r28.u32);
	// b 0x8213b69c
	goto loc_8213B69C;
loc_8213B638:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x8213b6a4
	if (!ctx.cr6.eq) goto loc_8213B6A4;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lis r4,2816
	ctx.r4.s64 = 184549376;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8213b668
	if (ctx.cr6.eq) goto loc_8213B668;
	// lis r4,3072
	ctx.r4.s64 = 201326592;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8213b668
	if (ctx.cr6.eq) goto loc_8213B668;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// b 0x8213b66c
	goto loc_8213B66C;
loc_8213B668:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_8213B66C:
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8213b698
	if (ctx.cr0.eq) goto loc_8213B698;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x8213b690
	if (!ctx.cr6.eq) goto loc_8213B690;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// b 0x8213b694
	goto loc_8213B694;
loc_8213B690:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_8213B694:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8213B698:
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_8213B69C:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_8213B6A4:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// blt cr6,0x8213b604
	if (ctx.cr6.lt) goto loc_8213B604;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8213b6e0
	if (ctx.cr6.eq) goto loc_8213B6E0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8213b6d4
	if (ctx.cr6.eq) goto loc_8213B6D4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r4,r11,-6128
	ctx.r4.s64 = ctx.r11.s64 + -6128;
	// bl 0x82135fa8
	ctx.lr = 0x8213B6D0;
	sub_82135FA8(ctx, base);
	// b 0x8213b6e0
	goto loc_8213B6E0;
loc_8213B6D4:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
loc_8213B6E0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8213b700
	if (ctx.cr6.eq) goto loc_8213B700;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8213b700
	if (ctx.cr6.eq) goto loc_8213B700;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r4,r11,-6248
	ctx.r4.s64 = ctx.r11.s64 + -6248;
	// bl 0x82135fa8
	ctx.lr = 0x8213B700;
	sub_82135FA8(ctx, base);
loc_8213B700:
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 3, ctx.xer);
	// lwz r30,136(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r31,132(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bne cr6,0x8213b738
	if (!ctx.cr6.eq) goto loc_8213B738;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8213b738
	if (ctx.cr6.eq) goto loc_8213B738;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x8213b738
	if (ctx.cr6.eq) goto loc_8213B738;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x8213b738
	if (ctx.cr6.eq) goto loc_8213B738;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r4,r11,-6384
	ctx.r4.s64 = ctx.r11.s64 + -6384;
	// bl 0x82135fa8
	ctx.lr = 0x8213B738;
	sub_82135FA8(ctx, base);
loc_8213B738:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cntlzw r10,r29
	ctx.r10.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// rlwinm r11,r11,29,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x4;
	// clrlwi r9,r9,1
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r9,r9,0,3,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// rlwinm r11,r11,29,0,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0xE0000000;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// beq cr6,0x8213b77c
	if (ctx.cr6.eq) goto loc_8213B77C;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x8213b788
	goto loc_8213B788;
loc_8213B77C:
	// addi r10,r30,-1
	ctx.r10.s64 = ctx.r30.s64 + -1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_8213B788:
	// rlwimi r11,r10,30,1,1
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 30) & 0x40000000) | (ctx.r11.u64 & 0xFFFFFFFFBFFFFFFF);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x8213a998
	ctx.lr = 0x8213B79C;
	sub_8213A998(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820edd80
	ctx.lr = 0x8213B7A8;
	sub_820EDD80(ctx, base);
	// lwz r11,80(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213b7c8
	if (ctx.cr6.eq) goto loc_8213B7C8;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ea800
	ctx.lr = 0x8213B7C8;
	sub_820EA800(ctx, base);
loc_8213B7C8:
	// lwz r11,324(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213b7f4
	if (ctx.cr6.eq) goto loc_8213B7F4;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,36(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// lwz r6,32(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,316(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 316);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821af940
	ctx.lr = 0x8213B7F4;
	sub_821AF940(ctx, base);
loc_8213B7F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8213B7F8:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822e991c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213B800"))) PPC_WEAK_FUNC(sub_8213B800);
PPC_FUNC_IMPL(__imp__sub_8213B800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x8213B808;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// addi r8,r11,24488
	ctx.r8.s64 = ctx.r11.s64 + 24488;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stw r10,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r10.u32);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82134b48
	ctx.lr = 0x8213B840;
	sub_82134B48(ctx, base);
	// lwz r30,52(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x82139f18
	ctx.lr = 0x8213B858;
	sub_82139F18(ctx, base);
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// bne cr6,0x8213b8b8
	if (!ctx.cr6.eq) goto loc_8213B8B8;
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,-1003
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1003, ctx.xer);
	// beq cr6,0x8213b88c
	if (ctx.cr6.eq) goto loc_8213B88C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-5324
	ctx.r4.s64 = ctx.r11.s64 + -5324;
	// bl 0x82135fa8
	ctx.lr = 0x8213B880;
	sub_82135FA8(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8213b984
	goto loc_8213B984;
loc_8213B88C:
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// subfic r11,r11,95
	ctx.xer.ca = ctx.r11.u32 <= 95;
	ctx.r11.s64 = 95 - ctx.r11.s64;
	// divwu r8,r11,r10
	ctx.r8.u32 = ctx.r11.u32 / ctx.r10.u32;
	// divwu r10,r11,r10
	ctx.r10.u32 = ctx.r11.u32 / ctx.r10.u32;
	// mulli r8,r8,3
	ctx.r8.s64 = ctx.r8.s64 * 3;
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// rlwimi r10,r11,5,25,26
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 5) & 0x60) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF9F);
	// rlwimi r9,r10,20,5,11
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 20) & 0x7F00000) | (ctx.r9.u64 & 0xFFFFFFFFF80FFFFF);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
loc_8213B8B8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213a998
	ctx.lr = 0x8213B8C4;
	sub_8213A998(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8213b924
	if (!ctx.cr6.eq) goto loc_8213B924;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// bne cr6,0x8213b8e8
	if (!ctx.cr6.eq) goto loc_8213B8E8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-14216
	ctx.r4.s64 = ctx.r11.s64 + -14216;
	// b 0x8213b904
	goto loc_8213B904;
loc_8213B8E8:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8213b910
	if (ctx.cr0.eq) goto loc_8213B910;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-5380
	ctx.r4.s64 = ctx.r11.s64 + -5380;
loc_8213B904:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82135fa8
	ctx.lr = 0x8213B90C;
	sub_82135FA8(ctx, base);
	// b 0x8213b980
	goto loc_8213B980;
loc_8213B910:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820edd68
	ctx.lr = 0x8213B920;
	sub_820EDD68(ctx, base);
	// b 0x8213b934
	goto loc_8213B934;
loc_8213B924:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820edd50
	ctx.lr = 0x8213B934;
	sub_820EDD50(ctx, base);
loc_8213B934:
	// lwz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213b954
	if (ctx.cr6.eq) goto loc_8213B954;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820ea800
	ctx.lr = 0x8213B954;
	sub_820EA800(ctx, base);
loc_8213B954:
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213b980
	if (ctx.cr6.eq) goto loc_8213B980;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,36(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// li r8,-1
	ctx.r8.s64 = -1;
	// lwz r6,32(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821af940
	ctx.lr = 0x8213B980;
	sub_821AF940(ctx, base);
loc_8213B980:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8213B984:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213B98C"))) PPC_WEAK_FUNC(sub_8213B98C);
PPC_FUNC_IMPL(__imp__sub_8213B98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213B990"))) PPC_WEAK_FUNC(sub_8213B990);
PPC_FUNC_IMPL(__imp__sub_8213B990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x8213B998;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r6,r11,24488
	ctx.r6.s64 = ctx.r11.s64 + 24488;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r10,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r10.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82135038
	ctx.lr = 0x8213B9C8;
	sub_82135038(ctx, base);
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82139f18
	ctx.lr = 0x8213B9DC;
	sub_82139F18(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r10,19
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 19, ctx.xer);
	// bgt cr6,0x8213ba24
	if (ctx.cr6.gt) goto loc_8213BA24;
	// lwz r10,100(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r9,-1002
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1002, ctx.xer);
	// beq cr6,0x8213ba18
	if (ctx.cr6.eq) goto loc_8213BA18;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-5268
	ctx.r4.s64 = ctx.r11.s64 + -5268;
	// bl 0x82135fa8
	ctx.lr = 0x8213BA0C;
	sub_82135FA8(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8213ba8c
	goto loc_8213BA8C;
loc_8213BA18:
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// rlwimi r11,r10,20,7,11
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 20) & 0x1F00000) | (ctx.r11.u64 & 0xFFFFFFFFFE0FFFFF);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
loc_8213BA24:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213a998
	ctx.lr = 0x8213BA30;
	sub_8213A998(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x820edd38
	ctx.lr = 0x8213BA3C;
	sub_820EDD38(ctx, base);
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213ba5c
	if (ctx.cr6.eq) goto loc_8213BA5C;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820ea800
	ctx.lr = 0x8213BA5C;
	sub_820EA800(ctx, base);
loc_8213BA5C:
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213ba88
	if (ctx.cr6.eq) goto loc_8213BA88;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,36(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// li r8,-1
	ctx.r8.s64 = -1;
	// lwz r6,32(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821af940
	ctx.lr = 0x8213BA88;
	sub_821AF940(ctx, base);
loc_8213BA88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8213BA8C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213BA94"))) PPC_WEAK_FUNC(sub_8213BA94);
PPC_FUNC_IMPL(__imp__sub_8213BA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213BA98"))) PPC_WEAK_FUNC(sub_8213BA98);
PPC_FUNC_IMPL(__imp__sub_8213BA98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x8213BAA0;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r5,24
	ctx.r11.s64 = ctx.r5.s64 + 24;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,18
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 18, ctx.xer);
	// beq cr6,0x8213bad0
	if (ctx.cr6.eq) goto loc_8213BAD0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-5204
	ctx.r4.s64 = ctx.r11.s64 + -5204;
	// bl 0x82135fa8
	ctx.lr = 0x8213BACC;
	sub_82135FA8(ctx, base);
	// b 0x8213bb70
	goto loc_8213BB70;
loc_8213BAD0:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r29,24(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x8213a998
	ctx.lr = 0x8213BADC;
	sub_8213A998(ctx, base);
	// bl 0x820edfc0
	ctx.lr = 0x8213BAE0;
	sub_820EDFC0(ctx, base);
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x8213bafc
	goto loc_8213BAFC;
loc_8213BAEC:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8213bb04
	if (ctx.cr6.eq) goto loc_8213BB04;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_8213BAFC:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8213baec
	if (!ctx.cr0.eq) goto loc_8213BAEC;
loc_8213BB04:
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// li r30,-1
	ctx.r30.s64 = -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8213bb28
	if (!ctx.cr6.eq) goto loc_8213BB28;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821356c0
	ctx.lr = 0x8213BB24;
	sub_821356C0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_8213BB28:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8212e828
	ctx.lr = 0x8213BB30;
	sub_8212E828(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8213bb5c
	if (ctx.cr0.eq) goto loc_8213BB5C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212e868
	ctx.lr = 0x8213BB40;
	sub_8212E868(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// addi r10,r11,-14368
	ctx.r10.s64 = ctx.r11.s64 + -14368;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x8213bb60
	goto loc_8213BB60;
loc_8213BB5C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8213BB60:
	// stw r27,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r27.u32);
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
loc_8213BB70:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213BB78"))) PPC_WEAK_FUNC(sub_8213BB78);
PPC_FUNC_IMPL(__imp__sub_8213BB78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98d8
	ctx.lr = 0x8213BB80;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r27,328(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 328);
	// bl 0x8213a998
	ctx.lr = 0x8213BB94;
	sub_8213A998(ctx, base);
	// bl 0x820edfc0
	ctx.lr = 0x8213BB98;
	sub_820EDFC0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8213bc34
	if (ctx.cr6.eq) goto loc_8213BC34;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r26,r11,-5128
	ctx.r26.s64 = ctx.r11.s64 + -5128;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r25,r11,-5168
	ctx.r25.s64 = ctx.r11.s64 + -5168;
loc_8213BBB4:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8213bbc8
	if (!ctx.cr6.eq) goto loc_8213BBC8;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// b 0x8213bbd4
	goto loc_8213BBD4;
loc_8213BBC8:
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x8213bbe4
	if (ctx.cr6.lt) goto loc_8213BBE4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_8213BBD4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,20(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// bl 0x82135fa8
	ctx.lr = 0x8213BBE0;
	sub_82135FA8(ctx, base);
	// b 0x8213bc28
	goto loc_8213BC28;
loc_8213BBE4:
	// lwz r31,8(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x8213bc28
	if (ctx.cr0.eq) goto loc_8213BC28;
	// clrlwi r28,r11,19
	ctx.r28.u64 = ctx.r11.u32 & 0x1FFF;
loc_8213BBF4:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8213a998
	ctx.lr = 0x8213BC04;
	sub_8213A998(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x820ea848
	ctx.lr = 0x8213BC0C;
	sub_820EA848(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFE000;
	// or r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 | ctx.r28.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x8213bbf4
	if (!ctx.cr0.eq) goto loc_8213BBF4;
loc_8213BC28:
	// lwz r27,12(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplwi r27,0
	ctx.cr0.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne 0x8213bbb4
	if (!ctx.cr0.eq) goto loc_8213BBB4;
loc_8213BC34:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,328(r29)
	PPC_STORE_U32(ctx.r29.u32 + 328, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822e9928
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213BC44"))) PPC_WEAK_FUNC(sub_8213BC44);
PPC_FUNC_IMPL(__imp__sub_8213BC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213BC48"))) PPC_WEAK_FUNC(sub_8213BC48);
PPC_FUNC_IMPL(__imp__sub_8213BC48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98d8
	ctx.lr = 0x8213BC50;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8213a998
	ctx.lr = 0x8213BC60;
	sub_8213A998(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x820ea818
	ctx.lr = 0x8213BC68;
	sub_820EA818(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq 0x8213bd2c
	if (ctx.cr0.eq) goto loc_8213BD2C;
	// li r24,1
	ctx.r24.s64 = 1;
loc_8213BC84:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x820ea878
	ctx.lr = 0x8213BC94;
	sub_820EA878(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8213bd50
	if (ctx.cr0.eq) goto loc_8213BD50;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8213bd14
	if (!ctx.cr6.eq) goto loc_8213BD14;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8213bd14
	if (ctx.cr0.eq) goto loc_8213BD14;
	// lwz r10,64(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8213bcec
	if (ctx.cr0.eq) goto loc_8213BCEC;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8213bcf4
	if (ctx.cr6.lt) goto loc_8213BCF4;
	// cmplwi cr6,r11,61
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 61, ctx.xer);
	// bne cr6,0x8213bd14
	if (!ctx.cr6.eq) goto loc_8213BD14;
	// lwz r11,288(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 288);
	// oris r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 134217728;
	// stw r11,288(r28)
	PPC_STORE_U32(ctx.r28.u32 + 288, ctx.r11.u32);
	// b 0x8213bd14
	goto loc_8213BD14;
loc_8213BCEC:
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bgt cr6,0x8213bd14
	if (ctx.cr6.gt) goto loc_8213BD14;
loc_8213BCF4:
	// slw r10,r24,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r11.u8 & 0x3F));
	// and. r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 & ctx.r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8213bd14
	if (!ctx.cr0.eq) goto loc_8213BD14;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// or r31,r10,r31
	ctx.r31.u64 = ctx.r10.u64 | ctx.r31.u64;
	// bge cr6,0x8213bd14
	if (!ctx.cr6.lt) goto loc_8213BD14;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_8213BD14:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x8213bc84
	if (ctx.cr6.lt) goto loc_8213BC84;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// bne cr6,0x8213bd30
	if (!ctx.cr6.eq) goto loc_8213BD30;
loc_8213BD2C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8213BD30:
	// lwz r10,64(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8213bd64
	if (ctx.cr0.eq) goto loc_8213BD64;
	// lwz r10,288(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 288);
	// rlwimi r10,r11,28,1,3
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 28) & 0x70000000) | (ctx.r10.u64 & 0xFFFFFFFF8FFFFFFF);
	// b 0x8213bd88
	goto loc_8213BD88;
loc_8213BD50:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-5060
	ctx.r4.s64 = ctx.r11.s64 + -5060;
	// bl 0x82135fa8
	ctx.lr = 0x8213BD60;
	sub_82135FA8(ctx, base);
	// b 0x8213bd8c
	goto loc_8213BD8C;
loc_8213BD64:
	// lwz r10,96(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// rlwinm. r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8213bd74
	if (!ctx.cr0.eq) goto loc_8213BD74;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8213BD74:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213bd80
	if (ctx.cr6.eq) goto loc_8213BD80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8213BD80:
	// lwz r10,288(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 288);
	// rlwimi r10,r11,20,8,11
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 20) & 0xF00000) | (ctx.r10.u64 & 0xFFFFFFFFFF0FFFFF);
loc_8213BD88:
	// stw r10,288(r28)
	PPC_STORE_U32(ctx.r28.u32 + 288, ctx.r10.u32);
loc_8213BD8C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822e9928
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213BD94"))) PPC_WEAK_FUNC(sub_8213BD94);
PPC_FUNC_IMPL(__imp__sub_8213BD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213BD98"))) PPC_WEAK_FUNC(sub_8213BD98);
PPC_FUNC_IMPL(__imp__sub_8213BD98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98d4
	ctx.lr = 0x8213BDA0;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r24,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r24.u32);
	// lwz r10,80(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 80);
	// std r24,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r24.u64);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8213bdd8
	if (ctx.cr6.eq) goto loc_8213BDD8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-4692
	ctx.r4.s64 = ctx.r11.s64 + -4692;
	// bl 0x82135fa8
	ctx.lr = 0x8213BDD8;
	sub_82135FA8(ctx, base);
loc_8213BDD8:
	// lwz r28,92(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 92);
	// lis r23,3328
	ctx.r23.s64 = 218103808;
	// lwz r29,52(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 52);
	// cmplwi r28,0
	ctx.cr0.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq 0x8213bdfc
	if (ctx.cr0.eq) goto loc_8213BDFC;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x8213be00
	if (!ctx.cr6.eq) goto loc_8213BE00;
loc_8213BDFC:
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
loc_8213BE00:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8213be40
	if (ctx.cr6.eq) goto loc_8213BE40;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8213be30
	if (ctx.cr6.eq) goto loc_8213BE30;
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 2, ctx.xer);
	// ble cr6,0x8213be40
	if (!ctx.cr6.gt) goto loc_8213BE40;
	// cmplwi cr6,r29,8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 8, ctx.xer);
	// beq cr6,0x8213be40
	if (ctx.cr6.eq) goto loc_8213BE40;
	// cmplwi cr6,r29,249
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 249, ctx.xer);
	// ble cr6,0x8213be30
	if (!ctx.cr6.gt) goto loc_8213BE30;
	// cmplwi cr6,r29,251
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 251, ctx.xer);
	// ble cr6,0x8213be40
	if (!ctx.cr6.gt) goto loc_8213BE40;
loc_8213BE30:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-4732
	ctx.r4.s64 = ctx.r11.s64 + -4732;
	// bl 0x82135fa8
	ctx.lr = 0x8213BE40;
	sub_82135FA8(ctx, base);
loc_8213BE40:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwimi r11,r29,12,16,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 12) & 0xF000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0FFF);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// bl 0x8213a998
	ctx.lr = 0x8213BE58;
	sub_8213A998(ctx, base);
	// bl 0x820ea818
	ctx.lr = 0x8213BE5C;
	sub_820EA818(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// slw r11,r27,r29
	ctx.r11.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r29.u8 & 0x3F));
	// andi. r11,r11,16404
	ctx.r11.u64 = ctx.r11.u64 & 16404;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8213be74
	if (ctx.cr0.eq) goto loc_8213BE74;
	// stw r27,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r27.u32);
loc_8213BE74:
	// cmplwi cr6,r29,30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 30, ctx.xer);
	// bgt cr6,0x8213c230
	if (ctx.cr6.gt) goto loc_8213C230;
	// beq cr6,0x8213c184
	if (ctx.cr6.eq) goto loc_8213C184;
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bgt cr6,0x8213c32c
	if (ctx.cr6.gt) goto loc_8213C32C;
	// lis r12,-32253
	ctx.r12.s64 = -2113732608;
	// addi r12,r12,-14824
	ctx.r12.s64 = ctx.r12.s64 + -14824;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32236
	ctx.r12.s64 = -2112618496;
	// addi r12,r12,-16716
	ctx.r12.s64 = ctx.r12.s64 + -16716;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8213BEB4;
	case 1:
		goto loc_8213BEFC;
	case 2:
		goto loc_8213BF30;
	case 3:
		goto loc_8213BF30;
	case 4:
		goto loc_8213C32C;
	case 5:
		goto loc_8213C32C;
	case 6:
		goto loc_8213BF9C;
	case 7:
		goto loc_8213C034;
	case 8:
		goto loc_8213C100;
	case 9:
		goto loc_8213C32C;
	case 10:
		goto loc_8213C0A8;
	case 11:
		goto loc_8213C16C;
	case 12:
		goto loc_8213BF30;
	case 13:
		goto loc_8213BF30;
	default:
		__builtin_unreachable();
	}
loc_8213BEB4:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82139768
	ctx.lr = 0x8213BEC0;
	sub_82139768(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// rlwimi r11,r3,15,16,16
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 15) & 0x8000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF7FFF);
	// rlwimi r11,r30,0,20,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 0) & 0xFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF000);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// beq cr6,0x8213c32c
	if (ctx.cr6.eq) goto loc_8213C32C;
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// li r11,20480
	ctx.r11.s64 = 20480;
	// ori r12,r12,23551
	ctx.r12.u64 = ctx.r12.u64 | 23551;
loc_8213BEE4:
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// rlwimi r11,r25,10,21,21
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r25.u32, 10) & 0x400) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFBFF);
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_8213BEF4:
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// b 0x8213c32c
	goto loc_8213C32C;
loc_8213BEFC:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82139768
	ctx.lr = 0x8213BF08;
	sub_82139768(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// rlwimi r11,r3,15,16,16
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 15) & 0x8000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF7FFF);
	// rlwimi r11,r30,0,20,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 0) & 0xFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF000);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// beq cr6,0x8213c32c
	if (ctx.cr6.eq) goto loc_8213C32C;
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// li r11,24576
	ctx.r11.s64 = 24576;
	// ori r12,r12,27647
	ctx.r12.u64 = ctx.r12.u64 | 27647;
	// b 0x8213bee4
	goto loc_8213BEE4;
loc_8213BF30:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82139768
	ctx.lr = 0x8213BF3C;
	sub_82139768(ctx, base);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r11,96(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 96);
	// rlwimi r10,r3,15,16,16
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r3.u32, 15) & 0x8000) | (ctx.r10.u64 & 0xFFFFFFFFFFFF7FFF);
	// rlwimi r10,r30,0,20,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r30.u32, 0) & 0xFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF000);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14, ctx.xer);
	// bne cr6,0x8213bf88
	if (!ctx.cr6.eq) goto loc_8213BF88;
	// lbz r10,27(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 27);
	// lwz r9,124(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// rlwinm r9,r9,0,30,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFC03;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x8213c32c
	if (ctx.cr6.eq) goto loc_8213C32C;
	// ori r11,r10,1024
	ctx.r11.u64 = ctx.r10.u64 | 1024;
	// b 0x8213bef4
	goto loc_8213BEF4;
loc_8213BF88:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-4772
	ctx.r4.s64 = ctx.r11.s64 + -4772;
loc_8213BF90:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82135fa8
	ctx.lr = 0x8213BF98;
	sub_82135FA8(ctx, base);
	// b 0x8213c32c
	goto loc_8213C32C;
loc_8213BF9C:
	// lwz r11,96(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 96);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// beq cr6,0x8213bfc0
	if (ctx.cr6.eq) goto loc_8213BFC0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-4816
	ctx.r4.s64 = ctx.r11.s64 + -4816;
	// bl 0x82135fa8
	ctx.lr = 0x8213BFBC;
	sub_82135FA8(ctx, base);
	// b 0x8213bfd0
	goto loc_8213BFD0;
loc_8213BFC0:
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rlwimi r10,r11,16,11,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x1F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFE0FFFF);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
loc_8213BFD0:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213ba98
	ctx.lr = 0x8213BFE0;
	sub_8213BA98(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,-4824
	ctx.r5.s64 = ctx.r11.s64 + -4824;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82139660
	ctx.lr = 0x8213BFF8;
	sub_82139660(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8213c32c
	if (ctx.cr0.eq) goto loc_8213C32C;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// bl 0x82134a68
	ctx.lr = 0x8213C00C;
	sub_82134A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8213c028
	if (ctx.cr0.lt) goto loc_8213C028;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwimi r11,r10,13,18,18
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 13) & 0x2000) | (ctx.r11.u64 & 0xFFFFFFFFFFFFDFFF);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// b 0x8213c32c
	goto loc_8213C32C;
loc_8213C028:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-4868
	ctx.r4.s64 = ctx.r11.s64 + -4868;
	// b 0x8213bf90
	goto loc_8213BF90;
loc_8213C034:
	// lwz r11,96(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 96);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// beq cr6,0x8213c058
	if (ctx.cr6.eq) goto loc_8213C058;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-4816
	ctx.r4.s64 = ctx.r11.s64 + -4816;
	// bl 0x82135fa8
	ctx.lr = 0x8213C054;
	sub_82135FA8(ctx, base);
	// b 0x8213c068
	goto loc_8213C068;
loc_8213C058:
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rlwimi r10,r11,16,11,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x1F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFE0FFFF);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
loc_8213C068:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213ba98
	ctx.lr = 0x8213C078;
	sub_8213BA98(ctx, base);
	// lwz r11,92(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 92);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8213c32c
	if (ctx.cr0.eq) goto loc_8213C32C;
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// oris r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 2097152;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x8213c32c
	if (ctx.cr6.eq) goto loc_8213C32C;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// b 0x8213bef4
	goto loc_8213BEF4;
loc_8213C0A8:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,-4880
	ctx.r5.s64 = ctx.r11.s64 + -4880;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82139660
	ctx.lr = 0x8213C0C0;
	sub_82139660(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8213c100
	if (ctx.cr0.eq) goto loc_8213C100;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// bl 0x82134a68
	ctx.lr = 0x8213C0D4;
	sub_82134A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8213c0f0
	if (ctx.cr0.lt) goto loc_8213C0F0;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwimi r11,r10,1,30,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x2) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFD);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// b 0x8213c104
	goto loc_8213C104;
loc_8213C0F0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-4932
	ctx.r4.s64 = ctx.r11.s64 + -4932;
	// bl 0x82135fa8
	ctx.lr = 0x8213C100;
	sub_82135FA8(ctx, base);
loc_8213C100:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
loc_8213C104:
	// lwz r10,96(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 96);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r9,14
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 14, ctx.xer);
	// bne cr6,0x8213c148
	if (!ctx.cr6.eq) goto loc_8213C148;
	// lbz r9,27(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 27);
	// rlwinm r11,r11,0,30,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFC03;
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// subf r10,r10,r23
	ctx.r10.s64 = ctx.r23.s64 - ctx.r10.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// rlwimi r11,r10,10,21,21
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 10) & 0x400) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFBFF);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// b 0x8213c158
	goto loc_8213C158;
loc_8213C148:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-4976
	ctx.r4.s64 = ctx.r11.s64 + -4976;
	// bl 0x82135fa8
	ctx.lr = 0x8213C158;
	sub_82135FA8(ctx, base);
loc_8213C158:
	// li r5,1
	ctx.r5.s64 = 1;
loc_8213C15C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213ba98
	ctx.lr = 0x8213C168;
	sub_8213BA98(ctx, base);
	// b 0x8213c32c
	goto loc_8213C32C;
loc_8213C16C:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821391c8
	ctx.lr = 0x8213C17C;
	sub_821391C8(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// b 0x8213c324
	goto loc_8213C324;
loc_8213C184:
	// lwz r11,96(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 96);
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,18
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 18, ctx.xer);
	// beq cr6,0x8213c1ac
	if (ctx.cr6.eq) goto loc_8213C1AC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-5024
	ctx.r4.s64 = ctx.r11.s64 + -5024;
	// bl 0x82135fa8
	ctx.lr = 0x8213C1A8;
	sub_82135FA8(ctx, base);
	// b 0x8213c20c
	goto loc_8213C20C;
loc_8213C1AC:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r30,24(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x8213a998
	ctx.lr = 0x8213C1B8;
	sub_8213A998(ctx, base);
	// bl 0x820edfc0
	ctx.lr = 0x8213C1BC;
	sub_820EDFC0(ctx, base);
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8213c220
	if (ctx.cr0.eq) goto loc_8213C220;
loc_8213C1CC:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8213c1e4
	if (ctx.cr6.eq) goto loc_8213C1E4;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8213c1cc
	if (!ctx.cr0.eq) goto loc_8213C1CC;
loc_8213C1E4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213c220
	if (ctx.cr6.eq) goto loc_8213C220;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8213c218
	if (ctx.cr6.eq) goto loc_8213C218;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-5044
	ctx.r4.s64 = ctx.r11.s64 + -5044;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82135fa8
	ctx.lr = 0x8213C20C;
	sub_82135FA8(ctx, base);
loc_8213C20C:
	// lis r24,-32768
	ctx.r24.s64 = -2147483648;
	// ori r24,r24,16389
	ctx.r24.u64 = ctx.r24.u64 | 16389;
	// b 0x8213c374
	goto loc_8213C374;
loc_8213C218:
	// stw r5,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
	// b 0x8213c32c
	goto loc_8213C32C;
loc_8213C220:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821356c0
	ctx.lr = 0x8213C22C;
	sub_821356C0(ctx, base);
	// b 0x8213c32c
	goto loc_8213C32C;
loc_8213C230:
	// cmplwi cr6,r29,250
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 250, ctx.xer);
	// beq cr6,0x8213c284
	if (ctx.cr6.eq) goto loc_8213C284;
	// cmplwi cr6,r29,251
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 251, ctx.xer);
	// bne cr6,0x8213c32c
	if (!ctx.cr6.eq) goto loc_8213C32C;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// rlwinm r11,r11,0,19,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF9FFF;
	// ori r11,r11,36864
	ctx.r11.u64 = ctx.r11.u64 | 36864;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// beq cr6,0x8213c270
	if (ctx.cr6.eq) goto loc_8213C270;
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rlwimi r11,r25,10,21,21
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r25.u32, 10) & 0x400) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFBFF);
	// ori r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 16384;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// b 0x8213c27c
	goto loc_8213C27C;
loc_8213C270:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
loc_8213C27C:
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x8213c15c
	goto loc_8213C15C;
loc_8213C284:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// rlwinm r11,r11,0,18,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// ori r11,r11,45056
	ctx.r11.u64 = ctx.r11.u64 | 45056;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// beq cr6,0x8213c2b4
	if (ctx.cr6.eq) goto loc_8213C2B4;
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rlwimi r11,r25,10,21,21
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r25.u32, 10) & 0x400) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFBFF);
	// ori r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 16384;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// b 0x8213c2c0
	goto loc_8213C2C0;
loc_8213C2B4:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
loc_8213C2C0:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213ba98
	ctx.lr = 0x8213C2D0;
	sub_8213BA98(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,-4880
	ctx.r5.s64 = ctx.r11.s64 + -4880;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82139660
	ctx.lr = 0x8213C2E8;
	sub_82139660(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8213c32c
	if (ctx.cr0.eq) goto loc_8213C32C;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// bl 0x82134a68
	ctx.lr = 0x8213C2FC;
	sub_82134A68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8213c314
	if (ctx.cr0.lt) goto loc_8213C314;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwimi r11,r10,1,30,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x2) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFD);
	// b 0x8213bef4
	goto loc_8213BEF4;
loc_8213C314:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-4932
	ctx.r4.s64 = ctx.r11.s64 + -4932;
	// bl 0x82135fa8
	ctx.lr = 0x8213C324;
	sub_82135FA8(ctx, base);
loc_8213C324:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// blt cr6,0x8213c374
	if (ctx.cr6.lt) goto loc_8213C374;
loc_8213C32C:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8213c374
	if (ctx.cr0.eq) goto loc_8213C374;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213a998
	ctx.lr = 0x8213C340;
	sub_8213A998(ctx, base);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// bl 0x820edfa8
	ctx.lr = 0x8213C348;
	sub_820EDFA8(ctx, base);
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213c374
	if (ctx.cr6.eq) goto loc_8213C374;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,36(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	// li r8,-1
	ctx.r8.s64 = -1;
	// lwz r6,32(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// bl 0x821af940
	ctx.lr = 0x8213C374;
	sub_821AF940(ctx, base);
loc_8213C374:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822e9924
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213C380"))) PPC_WEAK_FUNC(sub_8213C380);
PPC_FUNC_IMPL(__imp__sub_8213C380) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8213c3ac
	if (!ctx.cr6.eq) goto loc_8213C3AC;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8213c4b4
	goto loc_8213C4B4;
loc_8213C3AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213bc48
	ctx.lr = 0x8213C3B4;
	sub_8213BC48(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8213c414
	if (!ctx.cr0.eq) goto loc_8213C414;
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8213c3dc
	if (ctx.cr0.eq) goto loc_8213C3DC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-4360
	ctx.r4.s64 = ctx.r11.s64 + -4360;
	// bl 0x82135fa8
	ctx.lr = 0x8213C3DC;
	sub_82135FA8(ctx, base);
loc_8213C3DC:
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8213c3f8
	if (ctx.cr0.eq) goto loc_8213C3F8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-4432
	ctx.r4.s64 = ctx.r11.s64 + -4432;
	// bl 0x82135fa8
	ctx.lr = 0x8213C3F8;
	sub_82135FA8(ctx, base);
loc_8213C3F8:
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// rlwinm. r11,r11,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8213c414
	if (ctx.cr0.eq) goto loc_8213C414;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-4504
	ctx.r4.s64 = ctx.r11.s64 + -4504;
	// bl 0x82135fa8
	ctx.lr = 0x8213C414;
	sub_82135FA8(ctx, base);
loc_8213C414:
	// lwz r10,296(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// rlwinm. r11,r10,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8213c42c
	if (ctx.cr0.eq) goto loc_8213C42C;
	// lwz r9,288(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// oris r9,r9,4
	ctx.r9.u64 = ctx.r9.u64 | 262144;
	// stw r9,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r9.u32);
loc_8213C42C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8213c480
	if (!ctx.cr6.eq) goto loc_8213C480;
	// rlwinm. r11,r10,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8213c458
	if (ctx.cr0.eq) goto loc_8213C458;
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8213c458
	if (ctx.cr0.eq) goto loc_8213C458;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-4572
	ctx.r4.s64 = ctx.r11.s64 + -4572;
	// bl 0x82135fa8
	ctx.lr = 0x8213C458;
	sub_82135FA8(ctx, base);
loc_8213C458:
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8213c480
	if (ctx.cr0.eq) goto loc_8213C480;
	// lwz r11,292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8213c480
	if (ctx.cr0.eq) goto loc_8213C480;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-4640
	ctx.r4.s64 = ctx.r11.s64 + -4640;
	// bl 0x82135fa8
	ctx.lr = 0x8213C480;
	sub_82135FA8(ctx, base);
loc_8213C480:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213c498
	if (ctx.cr6.eq) goto loc_8213C498;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2905
	ctx.r3.u64 = ctx.r3.u64 | 2905;
	// b 0x8213c4b4
	goto loc_8213C4B4;
loc_8213C498:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213a998
	ctx.lr = 0x8213C4A4;
	sub_8213A998(ctx, base);
	// lwz r5,292(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// lwz r4,288(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// bl 0x820e8338
	ctx.lr = 0x8213C4B0;
	sub_820E8338(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8213C4B4:
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

__attribute__((alias("__imp__sub_8213C4C8"))) PPC_WEAK_FUNC(sub_8213C4C8);
PPC_FUNC_IMPL(__imp__sub_8213C4C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98dc
	ctx.lr = 0x8213C4D0;
	__savegprlr_25(ctx, base);
	// stwu r1,-1264(r1)
	ea = -1264 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x8213c380
	ctx.lr = 0x8213C4E4;
	sub_8213C380(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8213c924
	if (ctx.cr0.lt) goto loc_8213C924;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8213c52c
	if (ctx.cr0.eq) goto loc_8213C52C;
	// lwz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8213c520
	if (!ctx.cr6.eq) goto loc_8213C520;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-4112
	ctx.r4.s64 = ctx.r11.s64 + -4112;
	// bl 0x82135fa8
	ctx.lr = 0x8213C514;
	sub_82135FA8(ctx, base);
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2905
	ctx.r3.u64 = ctx.r3.u64 | 2905;
	// b 0x8213c924
	goto loc_8213C924;
loc_8213C520:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8213a998
	ctx.lr = 0x8213C528;
	sub_8213A998(ctx, base);
	// bl 0x820ed680
	ctx.lr = 0x8213C52C;
	sub_820ED680(ctx, base);
loc_8213C52C:
	// lwz r27,316(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// cmplwi r27,0
	ctx.cr0.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq 0x8213c558
	if (ctx.cr0.eq) goto loc_8213C558;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821313e0
	ctx.lr = 0x8213C540;
	sub_821313E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213a998
	ctx.lr = 0x8213C550;
	sub_8213A998(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x820e8350
	ctx.lr = 0x8213C558;
	sub_820E8350(ctx, base);
loc_8213C558:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213a998
	ctx.lr = 0x8213C564;
	sub_8213A998(ctx, base);
	// bl 0x820edda0
	ctx.lr = 0x8213C568;
	sub_820EDDA0(ctx, base);
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213c598
	if (ctx.cr6.eq) goto loc_8213C598;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213a998
	ctx.lr = 0x8213C580;
	sub_8213A998(ctx, base);
	// bl 0x820edfc0
	ctx.lr = 0x8213C584;
	sub_820EDFC0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r11,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// bl 0x821ab988
	ctx.lr = 0x8213C598;
	sub_821AB988(ctx, base);
loc_8213C598:
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213c604
	if (ctx.cr6.eq) goto loc_8213C604;
	// lwz r5,8(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq 0x8213c5e4
	if (ctx.cr0.eq) goto loc_8213C5E4;
	// lis r3,0
	ctx.r3.s64 = 0;
	// li r8,260
	ctx.r8.s64 = 260;
	// addi r7,r1,672
	ctx.r7.s64 = ctx.r1.s64 + 672;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,65001
	ctx.r3.u64 = ctx.r3.u64 | 65001;
	// bl 0x822fa4e0
	ctx.lr = 0x8213C5CC;
	sub_822FA4E0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213a998
	ctx.lr = 0x8213C5D8;
	sub_8213A998(ctx, base);
	// lwz r5,8(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r4,4(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// bl 0x820edd98
	ctx.lr = 0x8213C5E4;
	sub_820EDD98(ctx, base);
loc_8213C5E4:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// bl 0x821af050
	ctx.lr = 0x8213C5F0;
	sub_821AF050(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213a998
	ctx.lr = 0x8213C5FC;
	sub_8213A998(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x820ea7a0
	ctx.lr = 0x8213C604;
	sub_820EA7A0(ctx, base);
loc_8213C604:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213a998
	ctx.lr = 0x8213C610;
	sub_8213A998(ctx, base);
	// bl 0x820edfd8
	ctx.lr = 0x8213C614;
	sub_820EDFD8(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x8210aef8
	ctx.lr = 0x8213C61C;
	sub_8210AEF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8213c924
	if (ctx.cr0.lt) goto loc_8213C924;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// bl 0x8213a998
	ctx.lr = 0x8213C638;
	sub_8213A998(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213C654;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213C670;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820edda8
	ctx.lr = 0x8213C684;
	sub_820EDDA8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8213c718
	if (ctx.cr0.lt) goto loc_8213C718;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8213c6bc
	if (ctx.cr6.eq) goto loc_8213C6BC;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r29,r11,-3936
	ctx.r29.s64 = ctx.r11.s64 + -3936;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213C6B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x820eab48
	ctx.lr = 0x8213C6BC;
	sub_820EAB48(ctx, base);
loc_8213C6BC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8213c718
	if (ctx.cr6.eq) goto loc_8213C718;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8213c718
	if (ctx.cr0.eq) goto loc_8213C718;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r8,r11,18200
	ctx.r8.s64 = ctx.r11.s64 + 18200;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// bl 0x821b68e8
	ctx.lr = 0x8213C6F4;
	sub_821B68E8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8213c718
	if (!ctx.cr0.eq) goto loc_8213C718;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213C710;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8213c924
	goto loc_8213C924;
loc_8213C718:
	// lis r11,-30602
	ctx.r11.s64 = -2005532672;
	// ori r11,r11,2945
	ctx.r11.u64 = ctx.r11.u64 | 2945;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8213c740
	if (!ctx.cr6.eq) goto loc_8213C740;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-4192
	ctx.r4.s64 = ctx.r11.s64 + -4192;
	// bl 0x82135fa8
	ctx.lr = 0x8213C738;
	sub_82135FA8(ctx, base);
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// ori r30,r30,16389
	ctx.r30.u64 = ctx.r30.u64 | 16389;
loc_8213C740:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r3,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r3.u32);
	// blt cr6,0x8213c920
	if (ctx.cr6.lt) goto loc_8213C920;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8213c920
	if (!ctx.cr0.eq) goto loc_8213C920;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8213c774
	if (ctx.cr6.eq) goto loc_8213C774;
	// lwz r10,16(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// rlwinm r29,r10,10,15,21
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1FC00;
loc_8213C774:
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8213c780
	if (ctx.cr0.eq) goto loc_8213C780;
	// oris r29,r29,4
	ctx.r29.u64 = ctx.r29.u64 | 262144;
loc_8213C780:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r30,r1,116
	ctx.r30.s64 = ctx.r1.s64 + 116;
	// addi r27,r11,1720
	ctx.r27.s64 = ctx.r11.s64 + 1720;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213C79C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213C7B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// bl 0x8229bd98
	ctx.lr = 0x8213C7D0;
	sub_8229BD98(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8213c7e4
	if (ctx.cr0.lt) goto loc_8213C7E4;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213c920
	if (ctx.cr6.eq) goto loc_8213C920;
loc_8213C7E4:
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// sth r28,152(r1)
	PPC_STORE_U16(ctx.r1.u32 + 152, ctx.r28.u16);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// stw r4,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r4.u32);
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// bge cr6,0x8213c820
	if (!ctx.cr6.lt) goto loc_8213C820;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r7,r11,-4240
	ctx.r7.s64 = ctx.r11.s64 + -4240;
	// b 0x8213c82c
	goto loc_8213C82C;
loc_8213C820:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r7,r11,-4292
	ctx.r7.s64 = ctx.r11.s64 + -4292;
loc_8213C82C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r6,r11,27488
	ctx.r6.s64 = ctx.r11.s64 + 27488;
	// beq cr6,0x8213c844
	if (ctx.cr6.eq) goto loc_8213C844;
	// li r5,7101
	ctx.r5.s64 = 7101;
	// bl 0x82110f18
	ctx.lr = 0x8213C840;
	sub_82110F18(ctx, base);
	// b 0x8213c84c
	goto loc_8213C84C;
loc_8213C844:
	// li r5,7102
	ctx.r5.s64 = 7102;
	// bl 0x82111118
	ctx.lr = 0x8213C84C;
	sub_82111118(ctx, base);
loc_8213C84C:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r31,r1,144
	ctx.r31.s64 = ctx.r1.s64 + 144;
	// addi r28,r11,18808
	ctx.r28.s64 = ctx.r11.s64 + 18808;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213C86C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213C888;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// bl 0x8229bd98
	ctx.lr = 0x8213C8A0;
	sub_8229BD98(ctx, base);
	// lhz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 152);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8213c8b4
	if (ctx.cr0.eq) goto loc_8213C8B4;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82134888
	ctx.lr = 0x8213C8B4;
	sub_82134888(ctx, base);
loc_8213C8B4:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r31,r1,144
	ctx.r31.s64 = ctx.r1.s64 + 144;
	// addi r29,r11,18808
	ctx.r29.s64 = ctx.r11.s64 + 18808;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213C8D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213C8F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,68
	ctx.r5.s64 = 68;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x821b5618
	ctx.lr = 0x8213C90C;
	sub_821B5618(ctx, base);
	// lhz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 152);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8213c920
	if (ctx.cr0.eq) goto loc_8213C920;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82134888
	ctx.lr = 0x8213C920;
	sub_82134888(ctx, base);
loc_8213C920:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8213C924:
	// addi r1,r1,1264
	ctx.r1.s64 = ctx.r1.s64 + 1264;
	// b 0x822e992c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213C92C"))) PPC_WEAK_FUNC(sub_8213C92C);
PPC_FUNC_IMPL(__imp__sub_8213C92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213C930"))) PPC_WEAK_FUNC(sub_8213C930);
PPC_FUNC_IMPL(__imp__sub_8213C930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x8213C938;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,80(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// ori r30,r10,16389
	ctx.r30.u64 = ctx.r10.u64 | 16389;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213c968
	if (ctx.cr6.eq) goto loc_8213C968;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-3840
	ctx.r4.s64 = ctx.r11.s64 + -3840;
	// bl 0x82135fa8
	ctx.lr = 0x8213C964;
	sub_82135FA8(ctx, base);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8213C968:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8213c988
	if (!ctx.cr0.eq) goto loc_8213C988;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-3912
	ctx.r4.s64 = ctx.r11.s64 + -3912;
	// bl 0x82135fa8
	ctx.lr = 0x8213C984;
	sub_82135FA8(ctx, base);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8213C988:
	// lwz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213c9a8
	if (ctx.cr6.eq) goto loc_8213C9A8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-3964
	ctx.r4.s64 = ctx.r11.s64 + -3964;
	// bl 0x82135fa8
	ctx.lr = 0x8213C9A4;
	sub_82135FA8(ctx, base);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8213C9A8:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213c9c8
	if (ctx.cr6.eq) goto loc_8213C9C8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-4032
	ctx.r4.s64 = ctx.r11.s64 + -4032;
	// bl 0x82135fa8
	ctx.lr = 0x8213C9C4;
	sub_82135FA8(ctx, base);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8213C9C8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x8213ca38
	if (ctx.cr6.lt) goto loc_8213CA38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213bb78
	ctx.lr = 0x8213C9D8;
	sub_8213BB78(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// bl 0x8213c380
	ctx.lr = 0x8213C9E8;
	sub_8213C380(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213a998
	ctx.lr = 0x8213C9F4;
	sub_8213A998(ctx, base);
	// bl 0x820ed680
	ctx.lr = 0x8213C9F8;
	sub_820ED680(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213a998
	ctx.lr = 0x8213CA04;
	sub_8213A998(ctx, base);
	// bl 0x820edfc0
	ctx.lr = 0x8213CA08;
	sub_820EDFC0(ctx, base);
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r4,r10,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// beq 0x8213ca24
	if (ctx.cr0.eq) goto loc_8213CA24;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821ab9b8
	ctx.lr = 0x8213CA24;
	sub_821AB9B8(ctx, base);
loc_8213CA24:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82135610
	ctx.lr = 0x8213CA38;
	sub_82135610(ctx, base);
loc_8213CA38:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213CA44"))) PPC_WEAK_FUNC(sub_8213CA44);
PPC_FUNC_IMPL(__imp__sub_8213CA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213CA48"))) PPC_WEAK_FUNC(sub_8213CA48);
PPC_FUNC_IMPL(__imp__sub_8213CA48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,48(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// beq cr6,0x8213cac8
	if (ctx.cr6.eq) goto loc_8213CAC8;
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// beq cr6,0x8213cab0
	if (ctx.cr6.eq) goto loc_8213CAB0;
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// beq cr6,0x8213ca8c
	if (ctx.cr6.eq) goto loc_8213CA8C;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bne cr6,0x8213cb30
	if (!ctx.cr6.eq) goto loc_8213CB30;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-3640
	ctx.r4.s64 = ctx.r11.s64 + -3640;
	// b 0x8213cab8
	goto loc_8213CAB8;
loc_8213CA8C:
	// lwz r11,52(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// cmplwi cr6,r11,248
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 248, ctx.xer);
	// beq cr6,0x8213caa4
	if (ctx.cr6.eq) goto loc_8213CAA4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-3692
	ctx.r4.s64 = ctx.r11.s64 + -3692;
	// b 0x8213cab8
	goto loc_8213CAB8;
loc_8213CAA4:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-3744
	ctx.r4.s64 = ctx.r11.s64 + -3744;
	// b 0x8213cab8
	goto loc_8213CAB8;
loc_8213CAB0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-3800
	ctx.r4.s64 = ctx.r11.s64 + -3800;
loc_8213CAB8:
	// bl 0x82135fa8
	ctx.lr = 0x8213CABC;
	sub_82135FA8(ctx, base);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16389
	ctx.r11.u64 = ctx.r11.u64 | 16389;
	// b 0x8213cb30
	goto loc_8213CB30;
loc_8213CAC8:
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bgt cr6,0x8213cb30
	if (ctx.cr6.gt) goto loc_8213CB30;
	// lis r12,-32253
	ctx.r12.s64 = -2113732608;
	// addi r12,r12,-14792
	ctx.r12.s64 = ctx.r12.s64 + -14792;
	// lbzx r0,r12,r10
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r10.u32);
	// lis r12,-32236
	ctx.r12.s64 = -2112618496;
	// addi r12,r12,-13576
	ctx.r12.s64 = ctx.r12.s64 + -13576;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_8213CB20;
	case 1:
		goto loc_8213CB18;
	case 2:
		goto loc_8213CAF8;
	case 3:
		goto loc_8213CAF8;
	case 4:
		goto loc_8213CAF8;
	case 5:
		goto loc_8213CB00;
	case 6:
		goto loc_8213CB10;
	case 7:
		goto loc_8213CB28;
	case 8:
		goto loc_8213CB08;
	default:
		__builtin_unreachable();
	}
loc_8213CAF8:
	// bl 0x8213b1b8
	ctx.lr = 0x8213CAFC;
	sub_8213B1B8(ctx, base);
	// b 0x8213cb2c
	goto loc_8213CB2C;
loc_8213CB00:
	// bl 0x8213bd98
	ctx.lr = 0x8213CB04;
	sub_8213BD98(ctx, base);
	// b 0x8213cb2c
	goto loc_8213CB2C;
loc_8213CB08:
	// bl 0x8213c930
	ctx.lr = 0x8213CB0C;
	sub_8213C930(ctx, base);
	// b 0x8213cb2c
	goto loc_8213CB2C;
loc_8213CB10:
	// bl 0x8213a4e8
	ctx.lr = 0x8213CB14;
	sub_8213A4E8(ctx, base);
	// b 0x8213cb2c
	goto loc_8213CB2C;
loc_8213CB18:
	// bl 0x8213b800
	ctx.lr = 0x8213CB1C;
	sub_8213B800(ctx, base);
	// b 0x8213cb2c
	goto loc_8213CB2C;
loc_8213CB20:
	// bl 0x8213b990
	ctx.lr = 0x8213CB24;
	sub_8213B990(ctx, base);
	// b 0x8213cb2c
	goto loc_8213CB2C;
loc_8213CB28:
	// bl 0x8213aa50
	ctx.lr = 0x8213CB2C;
	sub_8213AA50(ctx, base);
loc_8213CB2C:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8213CB30:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213CB44"))) PPC_WEAK_FUNC(sub_8213CB44);
PPC_FUNC_IMPL(__imp__sub_8213CB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213CB48"))) PPC_WEAK_FUNC(sub_8213CB48);
PPC_FUNC_IMPL(__imp__sub_8213CB48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e0
	ctx.lr = 0x8213CB50;
	__savegprlr_26(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8213d464
	if (!ctx.cr6.eq) goto loc_8213D464;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8213cbb4
	if (ctx.cr6.eq) goto loc_8213CBB4;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8213CB88:
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8213cbe8
	if (ctx.cr0.eq) goto loc_8213CBE8;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r9.u32);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r27,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
	// stw r27,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r27.u32);
	// bdnz 0x8213cb88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8213CB88;
loc_8213CBB4:
	// li r26,1
	ctx.r26.s64 = 1;
	// cmplwi cr6,r4,98
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 98, ctx.xer);
	// bgt cr6,0x8213d3fc
	if (ctx.cr6.gt) goto loc_8213D3FC;
	// lis r12,-32253
	ctx.r12.s64 = -2113732608;
	// addi r12,r12,-14776
	ctx.r12.s64 = ctx.r12.s64 + -14776;
	// rlwinm r0,r4,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32236
	ctx.r12.s64 = -2112618496;
	// addi r12,r12,-13336
	ctx.r12.s64 = ctx.r12.s64 + -13336;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		goto loc_8213CCFC;
	case 1:
		goto loc_8213CC0C;
	case 2:
		goto loc_8213CC0C;
	case 3:
		goto loc_8213CC14;
	case 4:
		goto loc_8213CC0C;
	case 5:
		goto loc_8213CC0C;
	case 6:
		goto loc_8213CC28;
	case 7:
		goto loc_8213CCFC;
	case 8:
		goto loc_8213CCE4;
	case 9:
		goto loc_8213CD04;
	case 10:
		goto loc_8213CD18;
	case 11:
		goto loc_8213CC0C;
	case 12:
		goto loc_8213CD24;
	case 13:
		goto loc_8213CC0C;
	case 14:
		goto loc_8213CD38;
	case 15:
		goto loc_8213CD48;
	case 16:
		goto loc_8213CD48;
	case 17:
		goto loc_8213CD48;
	case 18:
		goto loc_8213CD48;
	case 19:
		goto loc_8213CD48;
	case 20:
		goto loc_8213CD48;
	case 21:
		goto loc_8213CD48;
	case 22:
		goto loc_8213CD48;
	case 23:
		goto loc_8213CD48;
	case 24:
		goto loc_8213CD9C;
	case 25:
		goto loc_8213CD9C;
	case 26:
		goto loc_8213CDD8;
	case 27:
		goto loc_8213CDE8;
	case 28:
		goto loc_8213CDF8;
	case 29:
		goto loc_8213CE08;
	case 30:
		goto loc_8213CE20;
	case 31:
		goto loc_8213CD48;
	case 32:
		goto loc_8213CE50;
	case 33:
		goto loc_8213CD48;
	case 34:
		goto loc_8213CE50;
	case 35:
		goto loc_8213CD48;
	case 36:
		goto loc_8213CDD8;
	case 37:
		goto loc_8213CDF8;
	case 38:
		goto loc_8213CE20;
	case 39:
		goto loc_8213CD9C;
	case 40:
		goto loc_8213CE30;
	case 41:
		goto loc_8213CEBC;
	case 42:
		goto loc_8213CEEC;
	case 43:
		goto loc_8213CF14;
	case 44:
		goto loc_8213CF38;
	case 45:
		goto loc_8213CFC0;
	case 46:
		goto loc_8213CC0C;
	case 47:
		goto loc_8213CFE0;
	case 48:
		goto loc_8213CC0C;
	case 49:
		goto loc_8213CC0C;
	case 50:
		goto loc_8213CC0C;
	case 51:
		goto loc_8213D028;
	case 52:
		goto loc_8213CC0C;
	case 53:
		goto loc_8213D078;
	case 54:
		goto loc_8213D0A4;
	case 55:
		goto loc_8213D0D0;
	case 56:
		goto loc_8213CC0C;
	case 57:
		goto loc_8213D118;
	case 58:
		goto loc_8213D3FC;
	case 59:
		goto loc_8213D3FC;
	case 60:
		goto loc_8213D168;
	case 61:
		goto loc_8213D180;
	case 62:
		goto loc_8213CC0C;
	case 63:
		goto loc_8213D188;
	case 64:
		goto loc_8213D1E8;
	case 65:
		goto loc_8213D214;
	case 66:
		goto loc_8213D234;
	case 67:
		goto loc_8213D274;
	case 68:
		goto loc_8213CC0C;
	case 69:
		goto loc_8213CC0C;
	case 70:
		goto loc_8213D2B4;
	case 71:
		goto loc_8213D2C8;
	case 72:
		goto loc_8213D2C8;
	case 73:
		goto loc_8213D2EC;
	case 74:
		goto loc_8213CC0C;
	case 75:
		goto loc_8213CC0C;
	case 76:
		goto loc_8213D310;
	case 77:
		goto loc_8213D39C;
	case 78:
		goto loc_8213D39C;
	case 79:
		goto loc_8213D39C;
	case 80:
		goto loc_8213D39C;
	case 81:
		goto loc_8213D39C;
	case 82:
		goto loc_8213D39C;
	case 83:
		goto loc_8213D39C;
	case 84:
		goto loc_8213D39C;
	case 85:
		goto loc_8213D39C;
	case 86:
		goto loc_8213D39C;
	case 87:
		goto loc_8213D39C;
	case 88:
		goto loc_8213D39C;
	case 89:
		goto loc_8213D39C;
	case 90:
		goto loc_8213D3FC;
	case 91:
		goto loc_8213D39C;
	case 92:
		goto loc_8213D39C;
	case 93:
		goto loc_8213D39C;
	case 94:
		goto loc_8213D39C;
	case 95:
		goto loc_8213D39C;
	case 96:
		goto loc_8213D3CC;
	case 97:
		goto loc_8213D3CC;
	case 98:
		goto loc_8213D3CC;
	default:
		__builtin_unreachable();
	}
loc_8213CBE8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,19004
	ctx.r6.s64 = ctx.r11.s64 + 19004;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// bl 0x82110f18
	ctx.lr = 0x8213CC00;
	sub_82110F18(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r11.u32);
	// b 0x8213d464
	goto loc_8213D464;
loc_8213CC0C:
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// b 0x8213d3fc
	goto loc_8213D3FC;
loc_8213CC14:
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x8212e988
	ctx.lr = 0x8213CC20;
	sub_8212E988(ctx, base);
loc_8213CC20:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8213d3fc
	goto loc_8213D3FC;
loc_8213CC28:
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213d3fc
	if (ctx.cr6.eq) goto loc_8213D3FC;
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213cc58
	if (ctx.cr6.eq) goto loc_8213CC58;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-3568
	ctx.r4.s64 = ctx.r11.s64 + -3568;
	// bl 0x82135fa8
	ctx.lr = 0x8213CC54;
	sub_82135FA8(ctx, base);
	// b 0x8213ccc0
	goto loc_8213CCC0;
loc_8213CC58:
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8213cc7c
	if (!ctx.cr6.eq) goto loc_8213CC7C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r26,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r26.u32);
	// bl 0x8213a178
	ctx.lr = 0x8213CC70;
	sub_8213A178(ctx, base);
	// lwz r4,96(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r3,312(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// bl 0x820edd28
	ctx.lr = 0x8213CC7C;
	sub_820EDD28(ctx, base);
loc_8213CC7C:
	// lwz r3,128(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// lwz r29,312(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213CC94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213CCB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820edd30
	ctx.lr = 0x8213CCC0;
	sub_820EDD30(ctx, base);
loc_8213CCC0:
	// lwz r3,128(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8213d3fc
	if (ctx.cr0.eq) goto loc_8213D3FC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213CCDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r27,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r27.u32);
	// b 0x8213d3fc
	goto loc_8213D3FC;
loc_8213CCE4:
	// lwz r11,284(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8213ccfc
	if (!ctx.cr6.eq) goto loc_8213CCFC;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r11,284(r30)
	PPC_STORE_U32(ctx.r30.u32 + 284, ctx.r11.u32);
loc_8213CCFC:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// b 0x8213d3fc
	goto loc_8213D3FC;
loc_8213CD04:
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_8213CD08:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8213ca48
	ctx.lr = 0x8213CD14;
	sub_8213CA48(ctx, base);
	// b 0x8213d3fc
	goto loc_8213D3FC;
loc_8213CD18:
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r26,80(r4)
	PPC_STORE_U32(ctx.r4.u32 + 80, ctx.r26.u32);
	// b 0x8213cd08
	goto loc_8213CD08;
loc_8213CD24:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82138d58
	ctx.lr = 0x8213CD34;
	sub_82138D58(ctx, base);
	// b 0x8213cc20
	goto loc_8213CC20;
loc_8213CD38:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r31,132(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// b 0x8213d3fc
	goto loc_8213D3FC;
loc_8213CD48:
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// ble cr6,0x8213cd68
	if (!ctx.cr6.gt) goto loc_8213CD68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x821a9398
	ctx.lr = 0x8213CD64;
	sub_821A9398(ctx, base);
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
loc_8213CD68:
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 2, ctx.xer);
	// ble cr6,0x8213d3fc
	if (!ctx.cr6.gt) goto loc_8213D3FC;
	// addi r11,r1,136
	ctx.r11.s64 = ctx.r1.s64 + 136;
	// addi r9,r31,96
	ctx.r9.s64 = ctx.r31.s64 + 96;
	// addi r10,r29,-2
	ctx.r10.s64 = ctx.r29.s64 + -2;
loc_8213CD7C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x8213cd7c
	if (!ctx.cr0.eq) goto loc_8213CD7C;
	// b 0x8213d3fc
	goto loc_8213D3FC;
loc_8213CD9C:
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// ble cr6,0x8213d3fc
	if (!ctx.cr6.gt) goto loc_8213D3FC;
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// addi r9,r31,96
	ctx.r9.s64 = ctx.r31.s64 + 96;
	// addi r10,r29,-1
	ctx.r10.s64 = ctx.r29.s64 + -1;
loc_8213CDB8:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x8213cdb8
	if (!ctx.cr0.eq) goto loc_8213CDB8;
	// b 0x8213d3fc
	goto loc_8213D3FC;
loc_8213CDD8:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// b 0x8213d3fc
	goto loc_8213D3FC;
loc_8213CDE8:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// b 0x8213d3fc
	goto loc_8213D3FC;
loc_8213CDF8:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// b 0x8213d3fc
	goto loc_8213D3FC;
loc_8213CE08:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
loc_8213CE14:
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
loc_8213CE18:
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// b 0x8213d3fc
	goto loc_8213D3FC;
loc_8213CE20:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// b 0x8213ce14
	goto loc_8213CE14;
loc_8213CE30:
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r9,140(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// stw r9,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r9.u32);
	// b 0x8213d3fc
	goto loc_8213D3FC;
loc_8213CE50:
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// ble cr6,0x8213ce70
	if (!ctx.cr6.gt) goto loc_8213CE70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x821a9398
	ctx.lr = 0x8213CE6C;
	sub_821A9398(ctx, base);
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
loc_8213CE70:
	// addi r10,r29,-1
	ctx.r10.s64 = ctx.r29.s64 + -1;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// ble cr6,0x8213cea4
	if (!ctx.cr6.gt) goto loc_8213CEA4;
	// addi r11,r1,136
	ctx.r11.s64 = ctx.r1.s64 + 136;
	// addi r9,r31,96
	ctx.r9.s64 = ctx.r31.s64 + 96;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
loc_8213CE88:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x8213ce88
	if (!ctx.cr0.eq) goto loc_8213CE88;
loc_8213CEA4:
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r27,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r27.u32);
	// b 0x8213ce18
	goto loc_8213CE18;
loc_8213CEBC:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213d3fc
	if (ctx.cr6.eq) goto loc_8213D3FC;
loc_8213CECC:
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bne 0x8213cecc
	if (!ctx.cr0.eq) goto loc_8213CECC;
	// b 0x8213d3fc
	goto loc_8213D3FC;
loc_8213CEEC:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8212e828
	ctx.lr = 0x8213CEF4;
	sub_8212E828(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8213ccfc
	if (ctx.cr0.eq) goto loc_8213CCFC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-3576
	ctx.r6.s64 = ctx.r11.s64 + -3576;
loc_8213CF08:
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_8213CF0C:
	// bl 0x8212e9f0
	ctx.lr = 0x8213CF10;
	sub_8212E9F0(ctx, base);
	// b 0x8213cc20
	goto loc_8213CC20;
loc_8213CF14:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8212e828
	ctx.lr = 0x8213CF1C;
	sub_8212E828(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8213ccfc
	if (ctx.cr0.eq) goto loc_8213CCFC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r6,r11,-3576
	ctx.r6.s64 = ctx.r11.s64 + -3576;
	// b 0x8213cf0c
	goto loc_8213CF0C;
loc_8213CF38:
	// lwz r10,72(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// beq cr6,0x8213cf9c
	if (ctx.cr6.eq) goto loc_8213CF9C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8213cf9c
	if (!ctx.cr6.eq) goto loc_8213CF9C;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82133c30
	ctx.lr = 0x8213CF6C;
	sub_82133C30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8213cf9c
	if (!ctx.cr0.eq) goto loc_8213CF9C;
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213CF90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8213cf9c
	if (!ctx.cr0.eq) goto loc_8213CF9C;
	// lwz r29,112(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_8213CF9C:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8212e828
	ctx.lr = 0x8213CFA4;
	sub_8212E828(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8213ccfc
	if (ctx.cr0.eq) goto loc_8213CCFC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-3584
	ctx.r6.s64 = ctx.r11.s64 + -3584;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x8213cf0c
	goto loc_8213CF0C;
loc_8213CFC0:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8212e828
	ctx.lr = 0x8213CFC8;
	sub_8212E828(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8213ccfc
	if (ctx.cr0.eq) goto loc_8213CCFC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r6,r11,-3584
	ctx.r6.s64 = ctx.r11.s64 + -3584;
	// b 0x8213cf08
	goto loc_8213CF08;
loc_8213CFE0:
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213d3fc
	if (ctx.cr6.eq) goto loc_8213D3FC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8213d3fc
	if (!ctx.cr6.eq) goto loc_8213D3FC;
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213D018;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8213d3fc
	if (!ctx.cr0.eq) goto loc_8213D3FC;
	// lwz r31,112(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// b 0x8213d3fc
	goto loc_8213D3FC;
loc_8213D028:
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213d060
	if (ctx.cr6.eq) goto loc_8213D060;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,2022
	ctx.r5.s64 = 2022;
	// addi r6,r11,-31880
	ctx.r6.s64 = ctx.r11.s64 + -31880;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// bl 0x82110f18
	ctx.lr = 0x8213D050;
	sub_82110F18(ctx, base);
	// li r11,2257
	ctx.r11.s64 = 2257;
	// stw r26,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r26.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// b 0x8213d3fc
	goto loc_8213D3FC;
loc_8213D060:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x82134360
	ctx.lr = 0x8213D070;
	sub_82134360(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// b 0x8213d3fc
	goto loc_8213D3FC;
loc_8213D078:
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213d098
	if (ctx.cr6.eq) goto loc_8213D098;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,2018
	ctx.r5.s64 = 2018;
	// addi r6,r11,-31920
	ctx.r6.s64 = ctx.r11.s64 + -31920;
	// b 0x8213d1d4
	goto loc_8213D1D4;
loc_8213D098:
	// lis r11,3328
	ctx.r11.s64 = 218103808;
loc_8213D09C:
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x8213d3fc
	goto loc_8213D3FC;
loc_8213D0A4:
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8213d0c8
	if (ctx.cr0.eq) goto loc_8213D0C8;
	// lis r10,2816
	ctx.r10.s64 = 184549376;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8213d3fc
	if (!ctx.cr6.eq) goto loc_8213D3FC;
	// lis r11,3072
	ctx.r11.s64 = 201326592;
	// b 0x8213d09c
	goto loc_8213D09C;
loc_8213D0C8:
	// lis r11,256
	ctx.r11.s64 = 16777216;
	// b 0x8213d09c
	goto loc_8213D09C;
loc_8213D0D0:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r31,132(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8213d0f4
	if (ctx.cr6.eq) goto loc_8213D0F4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,2010
	ctx.r5.s64 = 2010;
	// addi r6,r11,-32000
	ctx.r6.s64 = ctx.r11.s64 + -32000;
	// b 0x8213d1d4
	goto loc_8213D1D4;
loc_8213D0F4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213d110
	if (ctx.cr6.eq) goto loc_8213D110;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,2012
	ctx.r5.s64 = 2012;
	// addi r6,r11,-32048
	ctx.r6.s64 = ctx.r11.s64 + -32048;
	// b 0x8213d1d4
	goto loc_8213D1D4;
loc_8213D110:
	// lis r11,1536
	ctx.r11.s64 = 100663296;
	// b 0x8213d09c
	goto loc_8213D09C;
loc_8213D118:
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213d150
	if (ctx.cr6.eq) goto loc_8213D150;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,2022
	ctx.r5.s64 = 2022;
	// addi r6,r11,-32136
	ctx.r6.s64 = ctx.r11.s64 + -32136;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// bl 0x82110f18
	ctx.lr = 0x8213D140;
	sub_82110F18(ctx, base);
	// li r11,228
	ctx.r11.s64 = 228;
	// stw r26,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r26.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// b 0x8213d3fc
	goto loc_8213D3FC;
loc_8213D150:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x82134558
	ctx.lr = 0x8213D160;
	sub_82134558(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// b 0x8213d3fc
	goto loc_8213D3FC;
loc_8213D168:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8213D16C:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x82138770
	ctx.lr = 0x8213D17C;
	sub_82138770(ctx, base);
	// b 0x8213d3e4
	goto loc_8213D3E4;
loc_8213D180:
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// b 0x8213d16c
	goto loc_8213D16C;
loc_8213D188:
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bne cr6,0x8213d1bc
	if (!ctx.cr6.eq) goto loc_8213D1BC;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// stw r27,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r27.u32);
	// b 0x8213d3fc
	goto loc_8213D3FC;
loc_8213D1BC:
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213d3fc
	if (ctx.cr6.eq) goto loc_8213D3FC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,2009
	ctx.r5.s64 = 2009;
	// addi r6,r11,-32216
	ctx.r6.s64 = ctx.r11.s64 + -32216;
loc_8213D1D4:
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82110f18
	ctx.lr = 0x8213D1E0;
	sub_82110F18(ctx, base);
	// stw r26,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r26.u32);
	// b 0x8213d3fc
	goto loc_8213D3FC;
loc_8213D1E8:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x8212e828
	ctx.lr = 0x8213D1F0;
	sub_8212E828(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8213d3ec
	if (ctx.cr0.eq) goto loc_8213D3EC;
	// lwz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r6,0
	ctx.r6.s64 = 0;
loc_8213D200:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821a95b0
	ctx.lr = 0x8213D210;
	sub_821A95B0(ctx, base);
	// b 0x8213d3e4
	goto loc_8213D3E4;
loc_8213D214:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x8212e828
	ctx.lr = 0x8213D21C;
	sub_8212E828(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8213d3ec
	if (ctx.cr0.eq) goto loc_8213D3EC;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,24(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x8213d200
	goto loc_8213D200;
loc_8213D234:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x8212e828
	ctx.lr = 0x8213D23C;
	sub_8212E828(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8213d254
	if (ctx.cr0.eq) goto loc_8213D254;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// bl 0x8212ee48
	ctx.lr = 0x8213D24C;
	sub_8212EE48(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8213d258
	goto loc_8213D258;
loc_8213D254:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_8213D258:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821340b8
	ctx.lr = 0x8213D264;
	sub_821340B8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r26,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r26.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// b 0x8213d3fc
	goto loc_8213D3FC;
loc_8213D274:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x8212e828
	ctx.lr = 0x8213D27C;
	sub_8212E828(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8213d294
	if (ctx.cr0.eq) goto loc_8213D294;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// bl 0x8212ee48
	ctx.lr = 0x8213D28C;
	sub_8212EE48(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8213d298
	goto loc_8213D298;
loc_8213D294:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_8213D298:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821340b8
	ctx.lr = 0x8213D2A4;
	sub_821340B8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// b 0x8213d3fc
	goto loc_8213D3FC;
loc_8213D2B4:
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// b 0x8213d3fc
	goto loc_8213D3FC;
loc_8213D2C8:
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
loc_8213D2E4:
	// stfd f0,24(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.f0.u64);
	// b 0x8213d3fc
	goto loc_8213D3FC;
loc_8213D2EC:
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x8213d2e4
	goto loc_8213D2E4;
loc_8213D310:
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lfd f0,24(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8213d334
	if (!ctx.cr6.eq) goto loc_8213D334;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// b 0x8213d38c
	goto loc_8213D38C;
loc_8213D334:
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8213d348
	if (!ctx.cr6.eq) goto loc_8213D348;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// b 0x8213d390
	goto loc_8213D390;
loc_8213D348:
	// rlwinm r9,r11,0,1,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7F800000;
	// lis r10,32640
	ctx.r10.s64 = 2139095040;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8213d388
	if (!ctx.cr6.eq) goto loc_8213D388;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8213d368
	if (!ctx.cr6.eq) goto loc_8213D368;
	// lis r11,-128
	ctx.r11.s64 = -8388608;
	// b 0x8213d38c
	goto loc_8213D38C;
loc_8213D368:
	// lis r9,-128
	ctx.r9.s64 = -8388608;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8213d380
	if (ctx.cr6.eq) goto loc_8213D380;
	// lis r10,-64
	ctx.r10.s64 = -4194304;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8213d388
	if (!ctx.cr6.eq) goto loc_8213D388;
loc_8213D380:
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// b 0x8213d390
	goto loc_8213D390;
loc_8213D388:
	// xoris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 ^ 2147483648;
loc_8213D38C:
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
loc_8213D390:
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfd f0,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.f0.u64);
	// b 0x8213d3fc
	goto loc_8213D3FC;
loc_8213D39C:
	// li r3,120
	ctx.r3.s64 = 120;
	// bl 0x8212e828
	ctx.lr = 0x8213D3A4;
	sub_8212E828(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8213d3ec
	if (ctx.cr0.eq) goto loc_8213D3EC;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// lwz r9,120(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// lwz r8,116(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// lwz r7,112(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// lwz r6,108(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// lwz r5,104(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// bl 0x821a92b0
	ctx.lr = 0x8213D3C8;
	sub_821A92B0(ctx, base);
	// b 0x8213d3e4
	goto loc_8213D3E4;
loc_8213D3CC:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x8212e828
	ctx.lr = 0x8213D3D4;
	sub_8212E828(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8213d3ec
	if (ctx.cr0.eq) goto loc_8213D3EC;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// bl 0x8212ee48
	ctx.lr = 0x8213D3E4;
	sub_8212EE48(ctx, base);
loc_8213D3E4:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8213d3f0
	goto loc_8213D3F0;
loc_8213D3EC:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_8213D3F0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821340b8
	ctx.lr = 0x8213D3FC;
	sub_821340B8(ctx, base);
loc_8213D3FC:
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8213d464
	if (!ctx.cr6.eq) goto loc_8213D464;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8212e828
	ctx.lr = 0x8213D410;
	sub_8212E828(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8213d430
	if (ctx.cr0.eq) goto loc_8213D430;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r5,48(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r6,r11,18952
	ctx.r6.s64 = ctx.r11.s64 + 18952;
	// bl 0x8212e9f0
	ctx.lr = 0x8213D42C;
	sub_8212E9F0(ctx, base);
	// b 0x8213d434
	goto loc_8213D434;
loc_8213D430:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_8213D434:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8213d460
	if (!ctx.cr6.eq) goto loc_8213D460;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,18920
	ctx.r6.s64 = ctx.r11.s64 + 18920;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// bl 0x82110f18
	ctx.lr = 0x8213D454;
	sub_82110F18(ctx, base);
	// stw r26,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r26.u32);
	// stw r26,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r26.u32);
	// b 0x8213d464
	goto loc_8213D464;
loc_8213D460:
	// stw r3,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r3.u32);
loc_8213D464:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822e9930
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213D46C"))) PPC_WEAK_FUNC(sub_8213D46C);
PPC_FUNC_IMPL(__imp__sub_8213D46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213D470"))) PPC_WEAK_FUNC(sub_8213D470);
PPC_FUNC_IMPL(__imp__sub_8213D470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98d4
	ctx.lr = 0x8213D478;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r11,r31,1032
	ctx.r11.s64 = ctx.r31.s64 + 1032;
	// addi r24,r31,32
	ctx.r24.s64 = ctx.r31.s64 + 32;
	// li r26,-1
	ctx.r26.s64 = -1;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// stw r25,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r25.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stw r25,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r25.u32);
	// addi r27,r11,-22904
	ctx.r27.s64 = ctx.r11.s64 + -22904;
	// stw r26,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r24,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r24.u32);
	// sth r25,0(r24)
	PPC_STORE_U16(ctx.r24.u32 + 0, ctx.r25.u16);
	// addi r23,r11,18620
	ctx.r23.s64 = ctx.r11.s64 + 18620;
loc_8213D4BC:
	// rlwinm r29,r30,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r27,400
	ctx.r11.s64 = ctx.r27.s64 + 400;
	// lhax r11,r29,r11
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r29.u32 + ctx.r11.u32));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8213d5b8
	if (!ctx.cr0.eq) goto loc_8213D5B8;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8213d4f4
	if (!ctx.cr6.lt) goto loc_8213D4F4;
	// lwz r3,3032(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3032);
	// bl 0x8213a258
	ctx.lr = 0x8213D4E4;
	sub_8213A258(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// bge 0x8213d4f4
	if (!ctx.cr0.lt) goto loc_8213D4F4;
	// stw r25,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r25.u32);
loc_8213D4F4:
	// addi r11,r27,880
	ctx.r11.s64 = ctx.r27.s64 + 880;
	// lhax r10,r29,r11
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r29.u32 + ctx.r11.u32));
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8213d57c
	if (ctx.cr0.eq) goto loc_8213D57C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r10,917
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 917, ctx.xer);
	// bgt cr6,0x8213d57c
	if (ctx.cr6.gt) goto loc_8213D57C;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r27,3584
	ctx.r9.s64 = ctx.r27.s64 + 3584;
	// lhax r9,r10,r9
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32));
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8213d57c
	if (!ctx.cr6.eq) goto loc_8213D57C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r9,r31,1030
	ctx.r9.s64 = ctx.r31.s64 + 1030;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8213dc24
	if (!ctx.cr6.lt) goto loc_8213DC24;
	// addi r9,r27,1744
	ctx.r9.s64 = ctx.r27.s64 + 1744;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lhax r30,r10,r9
	ctx.r30.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32));
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// sth r30,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r30.u16);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r26,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8213d4bc
	if (!ctx.cr0.gt) goto loc_8213D4BC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8213d4bc
	goto loc_8213D4BC;
loc_8213D57C:
	// addi r11,r27,1264
	ctx.r11.s64 = ctx.r27.s64 + 1264;
	// lhax r10,r29,r11
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r29.u32 + ctx.r11.u32));
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8213db4c
	if (ctx.cr0.eq) goto loc_8213DB4C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r10,917
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 917, ctx.xer);
	// bgt cr6,0x8213db4c
	if (ctx.cr6.gt) goto loc_8213DB4C;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r27,3584
	ctx.r9.s64 = ctx.r27.s64 + 3584;
	// lhax r9,r10,r9
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32));
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8213db4c
	if (!ctx.cr6.eq) goto loc_8213DB4C;
	// addi r11,r27,1744
	ctx.r11.s64 = ctx.r27.s64 + 1744;
	// lhax r11,r10,r11
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32));
loc_8213D5B8:
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r9,r27,200
	ctx.r9.s64 = ctx.r27.s64 + 200;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// lhax r29,r30,r9
	ctx.r29.s64 = int16_t(PPC_LOAD_U16(ctx.r30.u32 + ctx.r9.u32));
	// rlwinm r28,r29,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r28,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r28.s64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bgt cr6,0x8213da38
	if (ctx.cr6.gt) goto loc_8213DA38;
	// lis r12,-32253
	ctx.r12.s64 = -2113732608;
	// addi r12,r12,-14576
	ctx.r12.s64 = ctx.r12.s64 + -14576;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32236
	ctx.r12.s64 = -2112618496;
	// addi r12,r12,-10740
	ctx.r12.s64 = ctx.r12.s64 + -10740;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8213D60C;
	case 1:
		goto loc_8213D614;
	case 2:
		goto loc_8213D620;
	case 3:
		goto loc_8213D62C;
	case 4:
		goto loc_8213D638;
	case 5:
		goto loc_8213D644;
	case 6:
		goto loc_8213D650;
	case 7:
		goto loc_8213D65C;
	case 8:
		goto loc_8213D664;
	case 9:
		goto loc_8213D670;
	case 10:
		goto loc_8213D67C;
	case 11:
		goto loc_8213D688;
	case 12:
		goto loc_8213D694;
	case 13:
		goto loc_8213D6A0;
	case 14:
		goto loc_8213D6AC;
	case 15:
		goto loc_8213D6B8;
	case 16:
		goto loc_8213D6C4;
	case 17:
		goto loc_8213D6D0;
	case 18:
		goto loc_8213D6DC;
	case 19:
		goto loc_8213D6E8;
	case 20:
		goto loc_8213D6F4;
	case 21:
		goto loc_8213D700;
	case 22:
		goto loc_8213D70C;
	case 23:
		goto loc_8213D718;
	case 24:
		goto loc_8213D724;
	case 25:
		goto loc_8213D730;
	case 26:
		goto loc_8213D73C;
	case 27:
		goto loc_8213D748;
	case 28:
		goto loc_8213D754;
	case 29:
		goto loc_8213D760;
	case 30:
		goto loc_8213D76C;
	case 31:
		goto loc_8213D778;
	case 32:
		goto loc_8213D784;
	case 33:
		goto loc_8213D790;
	case 34:
		goto loc_8213D79C;
	case 35:
		goto loc_8213D7A8;
	case 36:
		goto loc_8213D7B4;
	case 37:
		goto loc_8213D7C0;
	case 38:
		goto loc_8213D7CC;
	case 39:
		goto loc_8213D7D8;
	case 40:
		goto loc_8213D7E4;
	case 41:
		goto loc_8213D7F0;
	case 42:
		goto loc_8213D7FC;
	case 43:
		goto loc_8213D808;
	case 44:
		goto loc_8213D814;
	case 45:
		goto loc_8213D820;
	case 46:
		goto loc_8213D82C;
	case 47:
		goto loc_8213D838;
	case 48:
		goto loc_8213D844;
	case 49:
		goto loc_8213D850;
	case 50:
		goto loc_8213D85C;
	case 51:
		goto loc_8213D868;
	case 52:
		goto loc_8213D874;
	case 53:
		goto loc_8213D880;
	case 54:
		goto loc_8213D88C;
	case 55:
		goto loc_8213D898;
	case 56:
		goto loc_8213D8A4;
	case 57:
		goto loc_8213D8B0;
	case 58:
		goto loc_8213D8BC;
	case 59:
		goto loc_8213D8C8;
	case 60:
		goto loc_8213D8D4;
	case 61:
		goto loc_8213D8E0;
	case 62:
		goto loc_8213D8EC;
	case 63:
		goto loc_8213D8F8;
	case 64:
		goto loc_8213D904;
	case 65:
		goto loc_8213D90C;
	case 66:
		goto loc_8213D914;
	case 67:
		goto loc_8213D920;
	case 68:
		goto loc_8213D92C;
	case 69:
		goto loc_8213D938;
	case 70:
		goto loc_8213D944;
	case 71:
		goto loc_8213D950;
	case 72:
		goto loc_8213D95C;
	case 73:
		goto loc_8213D968;
	case 74:
		goto loc_8213D974;
	case 75:
		goto loc_8213D980;
	case 76:
		goto loc_8213D988;
	case 77:
		goto loc_8213D990;
	case 78:
		goto loc_8213D998;
	case 79:
		goto loc_8213D9A0;
	case 80:
		goto loc_8213D9A8;
	case 81:
		goto loc_8213D9B0;
	case 82:
		goto loc_8213D9B8;
	case 83:
		goto loc_8213D9C0;
	case 84:
		goto loc_8213D9C8;
	case 85:
		goto loc_8213D9D0;
	case 86:
		goto loc_8213D9D8;
	case 87:
		goto loc_8213D9E0;
	case 88:
		goto loc_8213D9E8;
	case 89:
		goto loc_8213D9E8;
	case 90:
		goto loc_8213D9F0;
	case 91:
		goto loc_8213D9F8;
	case 92:
		goto loc_8213DA00;
	case 93:
		goto loc_8213DA08;
	case 94:
		goto loc_8213DA10;
	case 95:
		goto loc_8213DA18;
	case 96:
		goto loc_8213DA20;
	case 97:
		goto loc_8213DA28;
	default:
		__builtin_unreachable();
	}
loc_8213D60C:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8213da2c
	goto loc_8213DA2C;
loc_8213D614:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D620:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D62C:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D638:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D644:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D650:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D65C:
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x8213da2c
	goto loc_8213DA2C;
loc_8213D664:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D670:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,9
	ctx.r4.s64 = 9;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D67C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,10
	ctx.r4.s64 = 10;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D688:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,11
	ctx.r4.s64 = 11;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D694:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,12
	ctx.r4.s64 = 12;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D6A0:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,13
	ctx.r4.s64 = 13;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D6AC:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,14
	ctx.r4.s64 = 14;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D6B8:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,15
	ctx.r4.s64 = 15;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D6C4:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,16
	ctx.r4.s64 = 16;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D6D0:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,17
	ctx.r4.s64 = 17;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D6DC:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,18
	ctx.r4.s64 = 18;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D6E8:
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,19
	ctx.r4.s64 = 19;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D6F4:
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,20
	ctx.r4.s64 = 20;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D700:
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,21
	ctx.r4.s64 = 21;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D70C:
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,22
	ctx.r4.s64 = 22;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D718:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,23
	ctx.r4.s64 = 23;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D724:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,24
	ctx.r4.s64 = 24;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D730:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,25
	ctx.r4.s64 = 25;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D73C:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,26
	ctx.r4.s64 = 26;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D748:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,27
	ctx.r4.s64 = 27;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D754:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,29
	ctx.r4.s64 = 29;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D760:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,28
	ctx.r4.s64 = 28;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D76C:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,30
	ctx.r4.s64 = 30;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D778:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,31
	ctx.r4.s64 = 31;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D784:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,32
	ctx.r4.s64 = 32;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D790:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,33
	ctx.r4.s64 = 33;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D79C:
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,34
	ctx.r4.s64 = 34;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D7A8:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,35
	ctx.r4.s64 = 35;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D7B4:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,36
	ctx.r4.s64 = 36;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D7C0:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,37
	ctx.r4.s64 = 37;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D7CC:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,38
	ctx.r4.s64 = 38;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D7D8:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,39
	ctx.r4.s64 = 39;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D7E4:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,40
	ctx.r4.s64 = 40;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D7F0:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,41
	ctx.r4.s64 = 41;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D7FC:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,42
	ctx.r4.s64 = 42;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D808:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,43
	ctx.r4.s64 = 43;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D814:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,44
	ctx.r4.s64 = 44;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D820:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,45
	ctx.r4.s64 = 45;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D82C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,46
	ctx.r4.s64 = 46;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D838:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,47
	ctx.r4.s64 = 47;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D844:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,48
	ctx.r4.s64 = 48;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D850:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,49
	ctx.r4.s64 = 49;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D85C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,50
	ctx.r4.s64 = 50;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D868:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,51
	ctx.r4.s64 = 51;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D874:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,52
	ctx.r4.s64 = 52;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D880:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,53
	ctx.r4.s64 = 53;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D88C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,54
	ctx.r4.s64 = 54;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D898:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,55
	ctx.r4.s64 = 55;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D8A4:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,56
	ctx.r4.s64 = 56;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D8B0:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,57
	ctx.r4.s64 = 57;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D8BC:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,60
	ctx.r4.s64 = 60;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D8C8:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,61
	ctx.r4.s64 = 61;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D8D4:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,62
	ctx.r4.s64 = 62;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D8E0:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,63
	ctx.r4.s64 = 63;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D8EC:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,64
	ctx.r4.s64 = 64;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D8F8:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,65
	ctx.r4.s64 = 65;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D904:
	// li r4,66
	ctx.r4.s64 = 66;
	// b 0x8213da2c
	goto loc_8213DA2C;
loc_8213D90C:
	// li r4,67
	ctx.r4.s64 = 67;
	// b 0x8213da2c
	goto loc_8213DA2C;
loc_8213D914:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,68
	ctx.r4.s64 = 68;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D920:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,69
	ctx.r4.s64 = 69;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D92C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,70
	ctx.r4.s64 = 70;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D938:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,71
	ctx.r4.s64 = 71;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D944:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,72
	ctx.r4.s64 = 72;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D950:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,73
	ctx.r4.s64 = 73;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D95C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,74
	ctx.r4.s64 = 74;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D968:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,75
	ctx.r4.s64 = 75;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D974:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,76
	ctx.r4.s64 = 76;
	// b 0x8213da30
	goto loc_8213DA30;
loc_8213D980:
	// li r4,77
	ctx.r4.s64 = 77;
	// b 0x8213da2c
	goto loc_8213DA2C;
loc_8213D988:
	// li r4,78
	ctx.r4.s64 = 78;
	// b 0x8213da2c
	goto loc_8213DA2C;
loc_8213D990:
	// li r4,79
	ctx.r4.s64 = 79;
	// b 0x8213da2c
	goto loc_8213DA2C;
loc_8213D998:
	// li r4,80
	ctx.r4.s64 = 80;
	// b 0x8213da2c
	goto loc_8213DA2C;
loc_8213D9A0:
	// li r4,81
	ctx.r4.s64 = 81;
	// b 0x8213da2c
	goto loc_8213DA2C;
loc_8213D9A8:
	// li r4,82
	ctx.r4.s64 = 82;
	// b 0x8213da2c
	goto loc_8213DA2C;
loc_8213D9B0:
	// li r4,83
	ctx.r4.s64 = 83;
	// b 0x8213da2c
	goto loc_8213DA2C;
loc_8213D9B8:
	// li r4,84
	ctx.r4.s64 = 84;
	// b 0x8213da2c
	goto loc_8213DA2C;
loc_8213D9C0:
	// li r4,85
	ctx.r4.s64 = 85;
	// b 0x8213da2c
	goto loc_8213DA2C;
loc_8213D9C8:
	// li r4,87
	ctx.r4.s64 = 87;
	// b 0x8213da2c
	goto loc_8213DA2C;
loc_8213D9D0:
	// li r4,89
	ctx.r4.s64 = 89;
	// b 0x8213da2c
	goto loc_8213DA2C;
loc_8213D9D8:
	// li r4,91
	ctx.r4.s64 = 91;
	// b 0x8213da2c
	goto loc_8213DA2C;
loc_8213D9E0:
	// li r4,86
	ctx.r4.s64 = 86;
	// b 0x8213da2c
	goto loc_8213DA2C;
loc_8213D9E8:
	// li r4,88
	ctx.r4.s64 = 88;
	// b 0x8213da2c
	goto loc_8213DA2C;
loc_8213D9F0:
	// li r4,92
	ctx.r4.s64 = 92;
	// b 0x8213da2c
	goto loc_8213DA2C;
loc_8213D9F8:
	// li r4,93
	ctx.r4.s64 = 93;
	// b 0x8213da2c
	goto loc_8213DA2C;
loc_8213DA00:
	// li r4,94
	ctx.r4.s64 = 94;
	// b 0x8213da2c
	goto loc_8213DA2C;
loc_8213DA08:
	// li r4,95
	ctx.r4.s64 = 95;
	// b 0x8213da2c
	goto loc_8213DA2C;
loc_8213DA10:
	// li r4,96
	ctx.r4.s64 = 96;
	// b 0x8213da2c
	goto loc_8213DA2C;
loc_8213DA18:
	// li r4,97
	ctx.r4.s64 = 97;
	// b 0x8213da2c
	goto loc_8213DA2C;
loc_8213DA20:
	// li r4,98
	ctx.r4.s64 = 98;
	// b 0x8213da2c
	goto loc_8213DA2C;
loc_8213DA28:
	// li r4,99
	ctx.r4.s64 = 99;
loc_8213DA2C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8213DA30:
	// lwz r3,3032(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3032);
	// bl 0x8213cb48
	ctx.lr = 0x8213DA38;
	sub_8213CB48(ctx, base);
loc_8213DA38:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subf r10,r28,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r28.s64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lha r11,0(r11)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r11.u32 + 0));
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// lhax r10,r30,r27
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r30.u32 + ctx.r27.u32));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8213dad0
	if (!ctx.cr0.eq) goto loc_8213DAD0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8213dad0
	if (!ctx.cr6.eq) goto loc_8213DAD0;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r10,25
	ctx.r10.s64 = 25;
	// li r30,25
	ctx.r30.s64 = 25;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8213dabc
	if (!ctx.cr6.lt) goto loc_8213DABC;
	// lwz r3,3032(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3032);
	// bl 0x8213a258
	ctx.lr = 0x8213DAAC;
	sub_8213A258(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// bge 0x8213dabc
	if (!ctx.cr0.lt) goto loc_8213DABC;
	// stw r25,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r25.u32);
loc_8213DABC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8213d4bc
	if (!ctx.cr6.eq) goto loc_8213D4BC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8213dc38
	goto loc_8213DC38;
loc_8213DAD0:
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r27,1648
	ctx.r10.s64 = ctx.r27.s64 + 1648;
	// lhax r10,r9,r10
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32));
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8213db10
	if (ctx.cr0.eq) goto loc_8213DB10;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r10,917
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 917, ctx.xer);
	// bgt cr6,0x8213db10
	if (ctx.cr6.gt) goto loc_8213DB10;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r27,3584
	ctx.r8.s64 = ctx.r27.s64 + 3584;
	// lhax r8,r10,r8
	ctx.r8.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + ctx.r8.u32));
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8213db10
	if (!ctx.cr6.eq) goto loc_8213DB10;
	// addi r11,r27,1744
	ctx.r11.s64 = ctx.r27.s64 + 1744;
	// lhax r30,r10,r11
	ctx.r30.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32));
	// b 0x8213db18
	goto loc_8213DB18;
loc_8213DB10:
	// addi r11,r27,784
	ctx.r11.s64 = ctx.r27.s64 + 784;
	// lhax r30,r9,r11
	ctx.r30.s64 = int16_t(PPC_LOAD_U16(ctx.r9.u32 + ctx.r11.u32));
loc_8213DB18:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r31,1030
	ctx.r10.s64 = ctx.r31.s64 + 1030;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8213dc24
	if (!ctx.cr6.lt) goto loc_8213DC24;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// sth r30,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r30.u16);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
loc_8213DB38:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x8213d4bc
	goto loc_8213D4BC;
loc_8213DB4C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8213db70
	if (!ctx.cr6.eq) goto loc_8213DB70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x82135f58
	ctx.lr = 0x8213DB64;
	sub_82135F58(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8213DB70:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x8213dc10
	if (!ctx.cr6.lt) goto loc_8213DC10;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8213DB84:
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r27,880
	ctx.r11.s64 = ctx.r27.s64 + 880;
	// lha r10,0(r9)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r9.u32 + 0));
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r11,r10,r11
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8213dbc0
	if (ctx.cr0.eq) goto loc_8213DBC0;
	// addi r10,r11,256
	ctx.r10.s64 = ctx.r11.s64 + 256;
	// cmplwi cr6,r10,917
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 917, ctx.xer);
	// bgt cr6,0x8213dbc0
	if (ctx.cr6.gt) goto loc_8213DBC0;
	// addi r11,r27,3584
	ctx.r11.s64 = ctx.r27.s64 + 3584;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// beq cr6,0x8213dbe0
	if (ctx.cr6.eq) goto loc_8213DBE0;
loc_8213DBC0:
	// cmplw cr6,r9,r24
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r24.u32, ctx.xer);
	// ble cr6,0x8213dc34
	if (!ctx.cr6.gt) goto loc_8213DC34;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r10,r9,-2
	ctx.r10.s64 = ctx.r9.s64 + -2;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x8213db84
	goto loc_8213DB84;
loc_8213DBE0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r9,r31,1030
	ctx.r9.s64 = ctx.r31.s64 + 1030;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8213dc24
	if (!ctx.cr6.lt) goto loc_8213DC24;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r27,1744
	ctx.r9.s64 = ctx.r27.s64 + 1744;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lhax r30,r10,r9
	ctx.r30.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32));
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// sth r30,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r30.u16);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// b 0x8213db38
	goto loc_8213DB38;
loc_8213DC10:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213dc34
	if (ctx.cr6.eq) goto loc_8213DC34;
	// stw r26,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// b 0x8213d4bc
	goto loc_8213D4BC;
loc_8213DC24:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,19036
	ctx.r4.s64 = ctx.r11.s64 + 19036;
	// bl 0x82135f58
	ctx.lr = 0x8213DC34;
	sub_82135F58(ctx, base);
loc_8213DC34:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8213DC38:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822e9924
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213DC40"))) PPC_WEAK_FUNC(sub_8213DC40);
PPC_FUNC_IMPL(__imp__sub_8213DC40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e0
	ctx.lr = 0x8213DC48;
	__savegprlr_26(ctx, base);
	// stwu r1,-3232(r1)
	ea = -3232 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x82106c58
	ctx.lr = 0x8213DC74;
	sub_82106C58(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8213dc80
	if (!ctx.cr6.eq) goto loc_8213DC80;
	// addi r29,r30,24
	ctx.r29.s64 = ctx.r30.s64 + 24;
loc_8213DC80:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r28,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r28.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r30,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r30.u32);
	// stb r30,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r30.u8);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r30,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r30.u32);
	// stw r29,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r29.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// bl 0x82135610
	ctx.lr = 0x8213DCC0;
	sub_82135610(ctx, base);
	// stw r30,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// clrlwi. r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8213dcdc
	if (ctx.cr0.eq) goto loc_8213DCDC;
	// stw r29,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
	// stw r29,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r29.u32);
	// b 0x8213dce4
	goto loc_8213DCE4;
loc_8213DCDC:
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
loc_8213DCE4:
	// rlwinm. r11,r27,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8213dcf4
	if (ctx.cr0.eq) goto loc_8213DCF4;
	// stw r29,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r29.u32);
	// b 0x8213dcf8
	goto loc_8213DCF8;
loc_8213DCF4:
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
loc_8213DCF8:
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8213dd20
	if (!ctx.cr6.eq) goto loc_8213DD20;
	// bl 0x820ecc30
	ctx.lr = 0x8213DD08;
	sub_820ECC30(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// bne 0x8213dd20
	if (!ctx.cr0.eq) goto loc_8213DD20;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8213de38
	goto loc_8213DE38;
loc_8213DD20:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// beq cr6,0x8213dd40
	if (ctx.cr6.eq) goto loc_8213DD40;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_8213DD40:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8213dd58
	if (ctx.cr6.eq) goto loc_8213DD58;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bne 0x8213dd5c
	if (!ctx.cr0.eq) goto loc_8213DD5C;
loc_8213DD58:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8213DD5C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// stw r30,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r30.u32);
	// beq cr6,0x8213ddbc
	if (ctx.cr6.eq) goto loc_8213DDBC;
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8213ddbc
	if (!ctx.cr6.eq) goto loc_8213DDBC;
	// lwz r3,20(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r3.u32);
	// bne 0x8213dd90
	if (!ctx.cr0.eq) goto loc_8213DD90;
	// stw r30,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r30.u32);
	// b 0x8213ddbc
	goto loc_8213DDBC;
loc_8213DD90:
	// bl 0x82298ad0
	ctx.lr = 0x8213DD94;
	sub_82298AD0(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r29,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r29.u32);
	// lis r5,-1
	ctx.r5.s64 = -65536;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8213ddac
	if (ctx.cr6.eq) goto loc_8213DDAC;
	// lis r5,-2
	ctx.r5.s64 = -131072;
loc_8213DDAC:
	// ori r5,r5,1021
	ctx.r5.u64 = ctx.r5.u64 | 1021;
	// lwz r3,316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821af938
	ctx.lr = 0x8213DDBC;
	sub_821AF938(ctx, base);
loc_8213DDBC:
	// li r5,3036
	ctx.r5.s64 = 3036;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822e9ff0
	ctx.lr = 0x8213DDCC;
	sub_822E9FF0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r31,3160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3160, ctx.r31.u32);
	// bl 0x8213d470
	ctx.lr = 0x8213DDD8;
	sub_8213D470(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8229bd90
	ctx.lr = 0x8213DDE0;
	sub_8229BD90(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8213de10
	if (!ctx.cr0.eq) goto loc_8213DE10;
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8213de10
	if (!ctx.cr6.eq) goto loc_8213DE10;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8213de10
	if (!ctx.cr6.eq) goto loc_8213DE10;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-3512
	ctx.r4.s64 = ctx.r11.s64 + -3512;
	// bl 0x82135fa8
	ctx.lr = 0x8213DE10;
	sub_82135FA8(ctx, base);
loc_8213DE10:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213bb78
	ctx.lr = 0x8213DE18;
	sub_8213BB78(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8229bd90
	ctx.lr = 0x8213DE20;
	sub_8229BD90(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8213de34
	if (ctx.cr0.eq) goto loc_8213DE34;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2905
	ctx.r3.u64 = ctx.r3.u64 | 2905;
	// b 0x8213de38
	goto loc_8213DE38;
loc_8213DE34:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8213DE38:
	// addi r1,r1,3232
	ctx.r1.s64 = ctx.r1.s64 + 3232;
	// b 0x822e9930
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213DE40"))) PPC_WEAK_FUNC(sub_8213DE40);
PPC_FUNC_IMPL(__imp__sub_8213DE40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98d8
	ctx.lr = 0x8213DE48;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// addi r11,r11,-29812
	ctx.r11.s64 = ctx.r11.s64 + -29812;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_8213DE78:
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r7,r7,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq 0x8213de9c
	if (ctx.cr0.eq) goto loc_8213DE9C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8213de78
	if (ctx.cr6.eq) goto loc_8213DE78;
loc_8213DE9C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-29820
	ctx.r11.s64 = ctx.r11.s64 + -29820;
loc_8213DEA4:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8213dec8
	if (ctx.cr0.eq) goto loc_8213DEC8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8213dea4
	if (ctx.cr6.eq) goto loc_8213DEA4;
loc_8213DEC8:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// cntlzw r11,r8
	ctx.r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// bne cr6,0x8213deec
	if (!ctx.cr6.eq) goto loc_8213DEEC;
	// cntlzw r10,r7
	ctx.r10.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8213df14
	if (!ctx.cr0.eq) goto loc_8213DF14;
loc_8213DEEC:
	// clrlwi. r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8213df14
	if (!ctx.cr0.eq) goto loc_8213DF14;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,2001
	ctx.r5.s64 = 2001;
	// addi r6,r11,-3448
	ctx.r6.s64 = ctx.r11.s64 + -3448;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82110f18
	ctx.lr = 0x8213DF08;
	sub_82110F18(ctx, base);
	// lis r31,-30602
	ctx.r31.s64 = -2005532672;
	// ori r31,r31,2905
	ctx.r31.u64 = ctx.r31.u64 | 2905;
	// b 0x8213dfc8
	goto loc_8213DFC8;
loc_8213DF14:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8213df20
	if (ctx.cr0.eq) goto loc_8213DF20;
	// li r28,1
	ctx.r28.s64 = 1;
loc_8213DF20:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,336
	ctx.r3.s64 = 336;
	// bl 0x822f9920
	ctx.lr = 0x8213DF2C;
	sub_822F9920(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8213df64
	if (ctx.cr0.eq) goto loc_8213DF64;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r31,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r31.u32);
	// stw r31,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r31.u32);
	// stw r31,316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 316, ctx.r31.u32);
	// stw r31,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r31.u32);
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// stw r31,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r31.u32);
	// stw r31,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r31.u32);
	// b 0x8213df68
	goto loc_8213DF68;
loc_8213DF64:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_8213DF68:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8213df7c
	if (!ctx.cr6.eq) goto loc_8213DF7C;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x8213dfc8
	goto loc_8213DFC8;
loc_8213DF7C:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8213dc40
	ctx.lr = 0x8213DF98;
	sub_8213DC40(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x8213dfb4
	if (ctx.cr0.lt) goto loc_8213DFB4;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8213c4c8
	ctx.lr = 0x8213DFB0;
	sub_8213C4C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8213DFB4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82135730
	ctx.lr = 0x8213DFBC;
	sub_82135730(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f99b8
	ctx.lr = 0x8213DFC8;
	sub_822F99B8(ctx, base);
loc_8213DFC8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822e9928
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213DFD4"))) PPC_WEAK_FUNC(sub_8213DFD4);
PPC_FUNC_IMPL(__imp__sub_8213DFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213DFD8"))) PPC_WEAK_FUNC(sub_8213DFD8);
PPC_FUNC_IMPL(__imp__sub_8213DFD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e0
	ctx.lr = 0x8213DFE0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,336
	ctx.r3.s64 = 336;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x822f9920
	ctx.lr = 0x8213E004;
	sub_822F9920(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8213e040
	if (ctx.cr0.eq) goto loc_8213E040;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stw r11,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r11.u32);
	// stw r11,316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 316, ctx.r11.u32);
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// stw r10,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r10.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// b 0x8213e044
	goto loc_8213E044;
loc_8213E040:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8213E044:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8213e058
	if (!ctx.cr6.eq) goto loc_8213E058;
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// b 0x8213e0c4
	goto loc_8213E0C4;
loc_8213E058:
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// bl 0x82107300
	ctx.lr = 0x8213E06C;
	sub_82107300(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8213e0b0
	if (ctx.cr0.lt) goto loc_8213E0B0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213dc40
	ctx.lr = 0x8213E090;
	sub_8213DC40(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8213e0a8
	if (ctx.cr0.lt) goto loc_8213E0A8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82134748
	ctx.lr = 0x8213E0A4;
	sub_82134748(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8213E0A8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8210a360
	ctx.lr = 0x8213E0B0;
	sub_8210A360(ctx, base);
loc_8213E0B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82135730
	ctx.lr = 0x8213E0B8;
	sub_82135730(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f99b8
	ctx.lr = 0x8213E0C4;
	sub_822F99B8(ctx, base);
loc_8213E0C4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e9930
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213E0D0"))) PPC_WEAK_FUNC(sub_8213E0D0);
PPC_FUNC_IMPL(__imp__sub_8213E0D0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r6,1279
	ctx.r6.s64 = 1279;
	// lwz r7,200(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// li r8,32
	ctx.r8.s64 = 32;
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// li r4,255
	ctx.r4.s64 = 255;
	// stw r9,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,340(r11)
	PPC_STORE_U32(ctx.r11.u32 + 340, ctx.r9.u32);
	// lwz r9,108(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// stw r7,264(r11)
	PPC_STORE_U32(ctx.r11.u32 + 264, ctx.r7.u32);
	// li r7,256
	ctx.r7.s64 = 256;
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// rlwinm r9,r9,0,10,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// rlwinm r9,r9,0,4,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// stw r10,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// ori r9,r9,513
	ctx.r9.u64 = ctx.r9.u64 | 513;
	// stw r7,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r7.u32);
	// li r7,24
	ctx.r7.s64 = 24;
	// rlwimi r10,r6,18,6,13
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r6.u32, 18) & 0x3FC0000) | (ctx.r10.u64 & 0xFFFFFFFFFC03FFFF);
	// stw r5,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r5.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r8,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r8.u32);
	// rlwimi r10,r6,18,2,4
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r6.u32, 18) & 0x38000000) | (ctx.r10.u64 & 0xFFFFFFFFC7FFFFFF);
	// stw r8,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r8.u32);
	// stw r4,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r4.u32);
	// stw r7,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r7.u32);
	// stw r8,464(r11)
	PPC_STORE_U32(ctx.r11.u32 + 464, ctx.r8.u32);
	// stw r5,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r5.u32);
	// stw r9,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r9.u32);
	// stw r10,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8213E168"))) PPC_WEAK_FUNC(sub_8213E168);
PPC_FUNC_IMPL(__imp__sub_8213E168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98b0
	ctx.lr = 0x8213E170;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8213e1b8
	if (!ctx.cr6.gt) goto loc_8213E1B8;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8213E18C:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r30.u32);
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// stw r11,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
	// bl 0x8214a5a8
	ctx.lr = 0x8213E1A4;
	sub_8214A5A8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8213e18c
	if (ctx.cr6.lt) goto loc_8213E18C;
loc_8213E1B8:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// ble cr6,0x8213e908
	if (!ctx.cr6.gt) goto loc_8213E908;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// lis r29,24816
	ctx.r29.s64 = 1626341376;
	// lis r14,4336
	ctx.r14.s64 = 284164096;
	// lis r15,4176
	ctx.r15.s64 = 273678336;
	// lis r30,1
	ctx.r30.s64 = 65536;
	// ori r16,r11,16385
	ctx.r16.u64 = ctx.r11.u64 | 16385;
	// lis r17,8208
	ctx.r17.s64 = 537919488;
	// lis r18,24640
	ctx.r18.s64 = 1614807040;
	// lis r19,20528
	ctx.r19.s64 = 1345323008;
	// lis r28,15
	ctx.r28.s64 = 983040;
	// lis r20,24736
	ctx.r20.s64 = 1621098496;
	// lis r21,29504
	ctx.r21.s64 = 1933574144;
	// lis r22,28768
	ctx.r22.s64 = 1885339648;
	// lis r23,28688
	ctx.r23.s64 = 1880096768;
	// lis r24,28880
	ctx.r24.s64 = 1892679680;
	// lis r25,29680
	ctx.r25.s64 = 1945108480;
	// lis r26,29600
	ctx.r26.s64 = 1939865600;
	// lis r27,29776
	ctx.r27.s64 = 1951399936;
loc_8213E214:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r11,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8213e24c
	if (ctx.cr0.eq) goto loc_8213E24C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,14
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 14, ctx.xer);
	// bne cr6,0x8213e24c
	if (!ctx.cr6.eq) goto loc_8213E24C;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// stw r11,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
loc_8213E24C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8215ff50
	ctx.lr = 0x8213E254;
	sub_8215FF50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8213e90c
	if (ctx.cr0.lt) goto loc_8213E90C;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// stw r10,1816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1816, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r10,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x8213e628
	if (ctx.cr6.gt) goto loc_8213E628;
	// beq cr6,0x8213e610
	if (ctx.cr6.eq) goto loc_8213E610;
	// lis r9,8304
	ctx.r9.s64 = 544210944;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8213e480
	if (ctx.cr6.gt) goto loc_8213E480;
	// beq cr6,0x8213e474
	if (ctx.cr6.eq) goto loc_8213E474;
	// cmplw cr6,r11,r14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r14.u32, ctx.xer);
	// bgt cr6,0x8213e3a8
	if (ctx.cr6.gt) goto loc_8213E3A8;
	// beq cr6,0x8213e860
	if (ctx.cr6.eq) goto loc_8213E860;
	// cmplw cr6,r11,r15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r15.u32, ctx.xer);
	// bgt cr6,0x8213e328
	if (ctx.cr6.gt) goto loc_8213E328;
	// beq cr6,0x8213e31c
	if (ctx.cr6.eq) goto loc_8213E31C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213e310
	if (ctx.cr6.eq) goto loc_8213E310;
	// lis r10,4096
	ctx.r10.s64 = 268435456;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8213e304
	if (ctx.cr6.eq) goto loc_8213E304;
	// lis r10,4112
	ctx.r10.s64 = 269484032;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8213e2f8
	if (ctx.cr6.eq) goto loc_8213E2F8;
	// lis r10,4144
	ctx.r10.s64 = 271581184;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8213e2e8
	if (ctx.cr6.eq) goto loc_8213E2E8;
	// lis r10,4160
	ctx.r10.s64 = 272629760;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8213e978
	if (!ctx.cr6.eq) goto loc_8213E978;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// b 0x8213e8dc
	goto loc_8213E8DC;
loc_8213E2E8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
loc_8213E2F0:
	// stw r30,1816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1816, ctx.r30.u32);
	// b 0x8213e8dc
	goto loc_8213E8DC;
loc_8213E2F8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// b 0x8213e8dc
	goto loc_8213E8DC;
loc_8213E304:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// b 0x8213e8dc
	goto loc_8213E8DC;
loc_8213E310:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// b 0x8213e8dc
	goto loc_8213E8DC;
loc_8213E31C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// b 0x8213e2f0
	goto loc_8213E2F0;
loc_8213E328:
	// lis r10,4192
	ctx.r10.s64 = 274726912;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8213e39c
	if (ctx.cr6.eq) goto loc_8213E39C;
	// lis r10,4208
	ctx.r10.s64 = 275775488;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8213e390
	if (ctx.cr6.eq) goto loc_8213E390;
	// lis r10,4304
	ctx.r10.s64 = 282066944;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8213e370
	if (ctx.cr6.eq) goto loc_8213E370;
	// lis r10,4320
	ctx.r10.s64 = 283115520;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8213e978
	if (!ctx.cr6.eq) goto loc_8213E978;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8213e388
	if (ctx.cr0.eq) goto loc_8213E388;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,228(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// b 0x8213e8dc
	goto loc_8213E8DC;
loc_8213E370:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8213e388
	if (ctx.cr0.eq) goto loc_8213E388;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// b 0x8213e8dc
	goto loc_8213E8DC;
loc_8213E388:
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// b 0x8213e8e8
	goto loc_8213E8E8;
loc_8213E390:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// b 0x8213e2f0
	goto loc_8213E2F0;
loc_8213E39C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// b 0x8213e2f0
	goto loc_8213E2F0;
loc_8213E3A8:
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r17.u32, ctx.xer);
	// bgt cr6,0x8213e414
	if (ctx.cr6.gt) goto loc_8213E414;
	// beq cr6,0x8213e760
	if (ctx.cr6.eq) goto loc_8213E760;
	// lis r10,4352
	ctx.r10.s64 = 285212672;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8213e3fc
	if (ctx.cr6.eq) goto loc_8213E3FC;
	// lis r10,4384
	ctx.r10.s64 = 287309824;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8213e304
	if (ctx.cr6.eq) goto loc_8213E304;
	// lis r10,4400
	ctx.r10.s64 = 288358400;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8213e8f0
	if (ctx.cr6.eq) goto loc_8213E8F0;
	// lis r10,4432
	ctx.r10.s64 = 290455552;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8213e304
	if (ctx.cr6.eq) goto loc_8213E304;
	// lis r10,8192
	ctx.r10.s64 = 536870912;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8213e978
	if (!ctx.cr6.eq) goto loc_8213E978;
loc_8213E3F0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// b 0x8213e8dc
	goto loc_8213E8DC;
loc_8213E3FC:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// rlwinm. r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8213e978
	if (!ctx.cr0.eq) goto loc_8213E978;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// b 0x8213e8dc
	goto loc_8213E8DC;
loc_8213E414:
	// lis r10,8224
	ctx.r10.s64 = 538968064;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8213e468
	if (ctx.cr6.eq) goto loc_8213E468;
	// lis r10,8240
	ctx.r10.s64 = 540016640;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8213e45c
	if (ctx.cr6.eq) goto loc_8213E45C;
	// lis r10,8256
	ctx.r10.s64 = 541065216;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8213e450
	if (ctx.cr6.eq) goto loc_8213E450;
	// lis r10,8272
	ctx.r10.s64 = 542113792;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8213e978
	if (!ctx.cr6.eq) goto loc_8213E978;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// b 0x8213e8dc
	goto loc_8213E8DC;
loc_8213E450:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// b 0x8213e8dc
	goto loc_8213E8DC;
loc_8213E45C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// b 0x8213e8dc
	goto loc_8213E8DC;
loc_8213E468:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// b 0x8213e8dc
	goto loc_8213E8DC;
loc_8213E474:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,260(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// b 0x8213e8dc
	goto loc_8213E8DC;
loc_8213E480:
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r18.u32, ctx.xer);
	// bgt cr6,0x8213e584
	if (ctx.cr6.gt) goto loc_8213E584;
	// beq cr6,0x8213e5cc
	if (ctx.cr6.eq) goto loc_8213E5CC;
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r19.u32, ctx.xer);
	// bgt cr6,0x8213e53c
	if (ctx.cr6.gt) goto loc_8213E53C;
	// beq cr6,0x8213e530
	if (ctx.cr6.eq) goto loc_8213E530;
	// lis r9,8320
	ctx.r9.s64 = 545259520;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8213e8f0
	if (ctx.cr6.eq) goto loc_8213E8F0;
	// lis r9,8336
	ctx.r9.s64 = 546308096;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8213e304
	if (ctx.cr6.eq) goto loc_8213E304;
	// lis r9,12288
	ctx.r9.s64 = 805306368;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8213e518
	if (ctx.cr6.eq) goto loc_8213E518;
	// lis r9,20480
	ctx.r9.s64 = 1342177280;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8213e4e0
	if (ctx.cr6.eq) goto loc_8213E4E0;
	// lis r10,20496
	ctx.r10.s64 = 1343225856;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8213e978
	if (!ctx.cr6.eq) goto loc_8213E978;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// b 0x8213e8dc
	goto loc_8213E8DC;
loc_8213E4E0:
	// clrlwi r11,r10,12
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFFF;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8213e504
	if (ctx.cr6.eq) goto loc_8213E504;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x8213e974
	if (!ctx.cr6.eq) goto loc_8213E974;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,584(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 584);
loc_8213E4FC:
	// stw r28,1816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1816, ctx.r28.u32);
	// b 0x8213e8dc
	goto loc_8213E8DC;
loc_8213E504:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,7
	ctx.r10.s64 = 458752;
	// lwz r11,580(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 580);
loc_8213E510:
	// stw r10,1816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1816, ctx.r10.u32);
	// b 0x8213e8dc
	goto loc_8213E8DC;
loc_8213E518:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// rlwinm. r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8213e978
	if (!ctx.cr0.eq) goto loc_8213E978;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// b 0x8213e8dc
	goto loc_8213E8DC;
loc_8213E530:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// b 0x8213e4fc
	goto loc_8213E4FC;
loc_8213E53C:
	// lis r10,24576
	ctx.r10.s64 = 1610612736;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8213e610
	if (ctx.cr6.eq) goto loc_8213E610;
	// lis r10,24592
	ctx.r10.s64 = 1611661312;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8213e6ac
	if (ctx.cr6.eq) goto loc_8213E6AC;
	// lis r10,24608
	ctx.r10.s64 = 1612709888;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8213e694
	if (ctx.cr6.eq) goto loc_8213E694;
	// lis r10,24624
	ctx.r10.s64 = 1613758464;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8213e978
	if (!ctx.cr6.eq) goto loc_8213E978;
loc_8213E56C:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// rlwinm. r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8213e978
	if (!ctx.cr0.eq) goto loc_8213E978;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,272(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// b 0x8213e8dc
	goto loc_8213E8DC;
loc_8213E584:
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, ctx.xer);
	// bgt cr6,0x8213e5e4
	if (ctx.cr6.gt) goto loc_8213E5E4;
	// beq cr6,0x8213e610
	if (ctx.cr6.eq) goto loc_8213E610;
	// lis r10,24656
	ctx.r10.s64 = 1615855616;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8213e610
	if (ctx.cr6.eq) goto loc_8213E610;
	// lis r10,24672
	ctx.r10.s64 = 1616904192;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8213e6ac
	if (ctx.cr6.eq) goto loc_8213E6AC;
	// lis r10,24688
	ctx.r10.s64 = 1617952768;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8213e694
	if (ctx.cr6.eq) goto loc_8213E694;
	// lis r10,24704
	ctx.r10.s64 = 1619001344;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8213e56c
	if (ctx.cr6.eq) goto loc_8213E56C;
	// lis r10,24720
	ctx.r10.s64 = 1620049920;
loc_8213E5C4:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8213e978
	if (!ctx.cr6.eq) goto loc_8213E978;
loc_8213E5CC:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8213e978
	if (ctx.cr0.eq) goto loc_8213E978;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,276(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// b 0x8213e8dc
	goto loc_8213E8DC;
loc_8213E5E4:
	// lis r10,24752
	ctx.r10.s64 = 1622147072;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8213e6ac
	if (ctx.cr6.eq) goto loc_8213E6AC;
	// lis r10,24768
	ctx.r10.s64 = 1623195648;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8213e694
	if (ctx.cr6.eq) goto loc_8213E694;
	// lis r10,24784
	ctx.r10.s64 = 1624244224;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8213e56c
	if (ctx.cr6.eq) goto loc_8213E56C;
	// lis r10,24800
	ctx.r10.s64 = 1625292800;
	// b 0x8213e5c4
	goto loc_8213E5C4;
loc_8213E610:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// rlwinm. r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8213e978
	if (!ctx.cr0.eq) goto loc_8213E978;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// b 0x8213e8dc
	goto loc_8213E8DC;
loc_8213E628:
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// bgt cr6,0x8213e800
	if (ctx.cr6.gt) goto loc_8213E800;
	// beq cr6,0x8213e7f4
	if (ctx.cr6.eq) goto loc_8213E7F4;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// bgt cr6,0x8213e718
	if (ctx.cr6.gt) goto loc_8213E718;
	// beq cr6,0x8213e6f4
	if (ctx.cr6.eq) goto loc_8213E6F4;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// bgt cr6,0x8213e6c4
	if (ctx.cr6.gt) goto loc_8213E6C4;
	// beq cr6,0x8213e6b8
	if (ctx.cr6.eq) goto loc_8213E6B8;
	// lis r10,24832
	ctx.r10.s64 = 1627389952;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8213e6ac
	if (ctx.cr6.eq) goto loc_8213E6AC;
	// lis r10,24848
	ctx.r10.s64 = 1628438528;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8213e694
	if (ctx.cr6.eq) goto loc_8213E694;
	// lis r10,24864
	ctx.r10.s64 = 1629487104;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8213e56c
	if (ctx.cr6.eq) goto loc_8213E56C;
	// lis r10,24880
	ctx.r10.s64 = 1630535680;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8213e5cc
	if (ctx.cr6.eq) goto loc_8213E5CC;
	// lis r10,28672
	ctx.r10.s64 = 1879048192;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8213e978
	if (!ctx.cr6.eq) goto loc_8213E978;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// b 0x8213e8dc
	goto loc_8213E8DC;
loc_8213E694:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// rlwinm. r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8213e978
	if (!ctx.cr0.eq) goto loc_8213E978;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// b 0x8213e8dc
	goto loc_8213E8DC;
loc_8213E6AC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// b 0x8213e8dc
	goto loc_8213E8DC;
loc_8213E6B8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// b 0x8213e8dc
	goto loc_8213E8DC;
loc_8213E6C4:
	// lis r10,28704
	ctx.r10.s64 = 1881145344;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8213e70c
	if (ctx.cr6.eq) goto loc_8213E70C;
	// lis r10,28720
	ctx.r10.s64 = 1882193920;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8213e700
	if (ctx.cr6.eq) goto loc_8213E700;
	// lis r10,28736
	ctx.r10.s64 = 1883242496;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8213e700
	if (ctx.cr6.eq) goto loc_8213E700;
	// lis r10,28752
	ctx.r10.s64 = 1884291072;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8213e978
	if (!ctx.cr6.eq) goto loc_8213E978;
loc_8213E6F4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,216(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	// b 0x8213e8dc
	goto loc_8213E8DC;
loc_8213E700:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// b 0x8213e8dc
	goto loc_8213E8DC;
loc_8213E70C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// b 0x8213e8dc
	goto loc_8213E8DC;
loc_8213E718:
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// bgt cr6,0x8213e794
	if (ctx.cr6.gt) goto loc_8213E794;
	// beq cr6,0x8213e788
	if (ctx.cr6.eq) goto loc_8213E788;
	// lis r10,28784
	ctx.r10.s64 = 1886388224;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8213e6f4
	if (ctx.cr6.eq) goto loc_8213E6F4;
	// lis r10,28800
	ctx.r10.s64 = 1887436800;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8213e778
	if (ctx.cr6.eq) goto loc_8213E778;
	// lis r10,28816
	ctx.r10.s64 = 1888485376;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8213e76c
	if (ctx.cr6.eq) goto loc_8213E76C;
	// lis r10,28848
	ctx.r10.s64 = 1890582528;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8213e3f0
	if (ctx.cr6.eq) goto loc_8213E3F0;
	// lis r10,28864
	ctx.r10.s64 = 1891631104;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8213e978
	if (!ctx.cr6.eq) goto loc_8213E978;
loc_8213E760:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// b 0x8213e8dc
	goto loc_8213E8DC;
loc_8213E76C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// b 0x8213e8dc
	goto loc_8213E8DC;
loc_8213E778:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,3
	ctx.r10.s64 = 196608;
	// lwz r11,284(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 284);
	// b 0x8213e510
	goto loc_8213E510;
loc_8213E788:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// b 0x8213e8dc
	goto loc_8213E8DC;
loc_8213E794:
	// lis r10,29440
	ctx.r10.s64 = 1929379840;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8213e7d8
	if (ctx.cr6.eq) goto loc_8213E7D8;
	// lis r10,29456
	ctx.r10.s64 = 1930428416;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8213e7c4
	if (ctx.cr6.eq) goto loc_8213E7C4;
	// lis r10,29472
	ctx.r10.s64 = 1931476992;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8213e7d0
	if (ctx.cr6.eq) goto loc_8213E7D0;
	// lis r10,29488
	ctx.r10.s64 = 1932525568;
loc_8213E7BC:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8213e978
	if (!ctx.cr6.eq) goto loc_8213E978;
loc_8213E7C4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// b 0x8213e8dc
	goto loc_8213E8DC;
loc_8213E7D0:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8213e7dc
	goto loc_8213E7DC;
loc_8213E7D8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8213E7DC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213E7F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8213e8e8
	goto loc_8213E8E8;
loc_8213E7F4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,300(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// b 0x8213e8dc
	goto loc_8213E8DC;
loc_8213E800:
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bgt cr6,0x8213e898
	if (ctx.cr6.gt) goto loc_8213E898;
	// beq cr6,0x8213e7c4
	if (ctx.cr6.eq) goto loc_8213E7C4;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x8213e86c
	if (ctx.cr6.gt) goto loc_8213E86C;
	// beq cr6,0x8213e854
	if (ctx.cr6.eq) goto loc_8213E854;
	// lis r10,29520
	ctx.r10.s64 = 1934622720;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8213e860
	if (ctx.cr6.eq) goto loc_8213E860;
	// lis r10,29536
	ctx.r10.s64 = 1935671296;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8213e860
	if (ctx.cr6.eq) goto loc_8213E860;
	// lis r10,29552
	ctx.r10.s64 = 1936719872;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8213e860
	if (ctx.cr6.eq) goto loc_8213E860;
	// lis r10,29568
	ctx.r10.s64 = 1937768448;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8213e860
	if (ctx.cr6.eq) goto loc_8213E860;
	// lis r10,29584
	ctx.r10.s64 = 1938817024;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8213e978
	if (!ctx.cr6.eq) goto loc_8213E978;
loc_8213E854:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,288(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// b 0x8213e8dc
	goto loc_8213E8DC;
loc_8213E860:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// b 0x8213e8dc
	goto loc_8213E8DC;
loc_8213E86C:
	// lis r10,29616
	ctx.r10.s64 = 1940914176;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8213e854
	if (ctx.cr6.eq) goto loc_8213E854;
	// lis r10,29632
	ctx.r10.s64 = 1941962752;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8213e854
	if (ctx.cr6.eq) goto loc_8213E854;
	// lis r10,29648
	ctx.r10.s64 = 1943011328;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8213e7c4
	if (ctx.cr6.eq) goto loc_8213E7C4;
	// lis r10,29664
	ctx.r10.s64 = 1944059904;
	// b 0x8213e7bc
	goto loc_8213E7BC;
loc_8213E898:
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bgt cr6,0x8213e92c
	if (ctx.cr6.gt) goto loc_8213E92C;
	// beq cr6,0x8213e8d4
	if (ctx.cr6.eq) goto loc_8213E8D4;
	// lis r10,29696
	ctx.r10.s64 = 1946157056;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8213e7c4
	if (ctx.cr6.eq) goto loc_8213E7C4;
	// lis r10,29712
	ctx.r10.s64 = 1947205632;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8213e920
	if (ctx.cr6.eq) goto loc_8213E920;
	// lis r10,29728
	ctx.r10.s64 = 1948254208;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8213e914
	if (ctx.cr6.eq) goto loc_8213E914;
	// lis r10,29760
	ctx.r10.s64 = 1950351360;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8213e978
	if (!ctx.cr6.eq) goto loc_8213E978;
loc_8213E8D4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,252(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
loc_8213E8DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213E8E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8213E8E8:
	// cmpw cr6,r3,r16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r16.s32, ctx.xer);
	// beq cr6,0x8213e978
	if (ctx.cr6.eq) goto loc_8213E978;
loc_8213E8F0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// blt cr6,0x8213e214
	if (ctx.cr6.lt) goto loc_8213E214;
loc_8213E908:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8213E90C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822e9900
	__restgprlr_14(ctx, base);
	return;
loc_8213E914:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// b 0x8213e8dc
	goto loc_8213E8DC;
loc_8213E920:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,244(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	// b 0x8213e8dc
	goto loc_8213E8DC;
loc_8213E92C:
	// lis r10,29792
	ctx.r10.s64 = 1952448512;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8213e8d4
	if (ctx.cr6.eq) goto loc_8213E8D4;
	// lis r10,29808
	ctx.r10.s64 = 1953497088;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8213e8d4
	if (ctx.cr6.eq) goto loc_8213E8D4;
	// lis r10,29856
	ctx.r10.s64 = 1956642816;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8213e968
	if (ctx.cr6.eq) goto loc_8213E968;
	// lis r10,29872
	ctx.r10.s64 = 1957691392;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8213e978
	if (!ctx.cr6.eq) goto loc_8213E978;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// b 0x8213e8dc
	goto loc_8213E8DC;
loc_8213E968:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,248(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	// b 0x8213e8dc
	goto loc_8213E8DC;
loc_8213E974:
	// twi 31,r0,22
loc_8213E978:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// li r5,4532
	ctx.r5.s64 = 4532;
	// lwz r10,256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,60(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// rlwinm. r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8213e9a0
	if (ctx.cr0.eq) goto loc_8213E9A0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r6,r11,-3096
	ctx.r6.s64 = ctx.r11.s64 + -3096;
	// b 0x8213e9a8
	goto loc_8213E9A8;
loc_8213E9A0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r6,r11,-3152
	ctx.r6.s64 = ctx.r11.s64 + -3152;
loc_8213E9A8:
	// bl 0x82174108
	ctx.lr = 0x8213E9AC;
	sub_82174108(ctx, base);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// b 0x8213e90c
	goto loc_8213E90C;
}

__attribute__((alias("__imp__sub_8213E9B4"))) PPC_WEAK_FUNC(sub_8213E9B4);
PPC_FUNC_IMPL(__imp__sub_8213E9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213E9B8"))) PPC_WEAK_FUNC(sub_8213E9B8);
PPC_FUNC_IMPL(__imp__sub_8213E9B8) {
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
	// lwz r11,344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213e9e8
	if (ctx.cr6.eq) goto loc_8213E9E8;
loc_8213E9E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8213eab0
	goto loc_8213EAB0;
loc_8213E9E8:
	// lis r4,512
	ctx.r4.s64 = 33554432;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,31
	ctx.r4.u64 = ctx.r4.u64 | 31;
	// bl 0x8215b5e8
	ctx.lr = 0x8213E9F8;
	sub_8215B5E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8213eab0
	if (ctx.cr0.lt) goto loc_8213EAB0;
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lis r10,32
	ctx.r10.s64 = 2097152;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8213ea68
	if (!ctx.cr6.eq) goto loc_8213EA68;
	// lis r4,-28672
	ctx.r4.s64 = -1879048192;
loc_8213EA14:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8213EA18:
	// bl 0x82158860
	ctx.lr = 0x8213EA1C;
	sub_82158860(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8213eab0
	if (ctx.cr0.lt) goto loc_8213EAB0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,16389
	ctx.r10.s64 = 16389;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r5,15
	ctx.r5.s64 = 983040;
	// rlwimi r4,r10,29,0,20
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r10.u32, 29) & 0xFFFFF800) | (ctx.r4.u64 & 0xFFFFFFFF000007FF);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,312(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213EA4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8213eab0
	if (ctx.cr0.lt) goto loc_8213EAB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82152df8
	ctx.lr = 0x8213EA5C;
	sub_82152DF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8213eab0
	if (ctx.cr0.lt) goto loc_8213EAB0;
	// b 0x8213e9e0
	goto loc_8213E9E0;
loc_8213EA68:
	// lis r10,64
	ctx.r10.s64 = 4194304;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8213ea7c
	if (!ctx.cr6.eq) goto loc_8213EA7C;
	// lis r4,-24576
	ctx.r4.s64 = -1610612736;
	// b 0x8213ea14
	goto loc_8213EA14;
loc_8213EA7C:
	// lis r10,128
	ctx.r10.s64 = 8388608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8213ea94
	if (!ctx.cr6.eq) goto loc_8213EA94;
	// lis r4,-26624
	ctx.r4.s64 = -1744830464;
	// b 0x8213ea18
	goto loc_8213EA18;
loc_8213EA94:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,4814
	ctx.r5.s64 = 4814;
	// addi r6,r11,-3040
	ctx.r6.s64 = ctx.r11.s64 + -3040;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82174108
	ctx.lr = 0x8213EAA8;
	sub_82174108(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_8213EAB0:
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

__attribute__((alias("__imp__sub_8213EAC8"))) PPC_WEAK_FUNC(sub_8213EAC8);
PPC_FUNC_IMPL(__imp__sub_8213EAC8) {
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
	// lwz r11,344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213eb24
	if (ctx.cr6.eq) goto loc_8213EB24;
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// clrlwi r4,r11,1
	ctx.r4.u64 = ctx.r11.u32 & 0x7FFFFFFF;
loc_8213EAF0:
	// bl 0x82158860
	ctx.lr = 0x8213EAF4;
	sub_82158860(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8213eb10
	if (ctx.cr0.lt) goto loc_8213EB10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82152df8
	ctx.lr = 0x8213EB04;
	sub_82152DF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8213eb10
	if (ctx.cr0.lt) goto loc_8213EB10;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8213EB10:
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
loc_8213EB24:
	// lwz r4,200(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// b 0x8213eaf0
	goto loc_8213EAF0;
}

__attribute__((alias("__imp__sub_8213EB2C"))) PPC_WEAK_FUNC(sub_8213EB2C);
PPC_FUNC_IMPL(__imp__sub_8213EB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213EB30"))) PPC_WEAK_FUNC(sub_8213EB30);
PPC_FUNC_IMPL(__imp__sub_8213EB30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,380(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 380);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8213EB40"))) PPC_WEAK_FUNC(sub_8213EB40);
PPC_FUNC_IMPL(__imp__sub_8213EB40) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,376(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 376);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8213EB50"))) PPC_WEAK_FUNC(sub_8213EB50);
PPC_FUNC_IMPL(__imp__sub_8213EB50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x8213EB58;
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
	// bl 0x821611f0
	ctx.lr = 0x8213EB6C;
	sub_821611F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8213eb94
	if (ctx.cr0.lt) goto loc_8213EB94;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213EB94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8213EB94:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213EB9C"))) PPC_WEAK_FUNC(sub_8213EB9C);
PPC_FUNC_IMPL(__imp__sub_8213EB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213EBA0"))) PPC_WEAK_FUNC(sub_8213EBA0);
PPC_FUNC_IMPL(__imp__sub_8213EBA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x8213EBA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x821521d0
	ctx.lr = 0x8213EBBC;
	sub_821521D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8213ebf0
	if (ctx.cr0.lt) goto loc_8213EBF0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,108(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213EBDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,17
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 17, ctx.xer);
	// bne cr6,0x8213ebec
	if (!ctx.cr6.eq) goto loc_8213EBEC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_8213EBEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8213EBF0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213EBF8"))) PPC_WEAK_FUNC(sub_8213EBF8);
PPC_FUNC_IMPL(__imp__sub_8213EBF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98d4
	ctx.lr = 0x8213EC00;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8213ec28
	if (ctx.cr6.eq) goto loc_8213EC28;
	// lis r24,15
	ctx.r24.s64 = 983040;
	// b 0x8213ecdc
	goto loc_8213ECDC;
loc_8213EC28:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8213ec48
	if (ctx.cr0.eq) goto loc_8213EC48;
	// lis r24,16
	ctx.r24.s64 = 1048576;
loc_8213EC48:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8213ecdc
	if (ctx.cr6.eq) goto loc_8213ECDC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r27,r11,-2984
	ctx.r27.s64 = ctx.r11.s64 + -2984;
loc_8213EC60:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8213eca8
	if (ctx.cr6.lt) goto loc_8213ECA8;
	// beq cr6,0x8213eca0
	if (ctx.cr6.eq) goto loc_8213ECA0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8213ec98
	if (ctx.cr6.lt) goto loc_8213EC98;
	// bne cr6,0x8213ecac
	if (!ctx.cr6.eq) goto loc_8213ECAC;
	// lis r31,8
	ctx.r31.s64 = 524288;
	// b 0x8213ecac
	goto loc_8213ECAC;
loc_8213EC98:
	// lis r31,4
	ctx.r31.s64 = 262144;
	// b 0x8213ecac
	goto loc_8213ECAC;
loc_8213ECA0:
	// lis r31,2
	ctx.r31.s64 = 131072;
	// b 0x8213ecac
	goto loc_8213ECAC;
loc_8213ECA8:
	// lis r31,1
	ctx.r31.s64 = 65536;
loc_8213ECAC:
	// and. r11,r31,r24
	ctx.r11.u64 = ctx.r31.u64 & ctx.r24.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8213eccc
	if (ctx.cr0.eq) goto loc_8213ECCC;
	// lwz r11,256(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 256);
	// li r5,4821
	ctx.r5.s64 = 4821;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,60(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x82174108
	ctx.lr = 0x8213ECCC;
	sub_82174108(ctx, base);
loc_8213ECCC:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// or r24,r31,r24
	ctx.r24.u64 = ctx.r31.u64 | ctx.r24.u64;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8213ec60
	if (!ctx.cr0.eq) goto loc_8213EC60;
loc_8213ECDC:
	// lwz r11,112(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	// rlwinm. r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8213ed70
	if (!ctx.cr0.eq) goto loc_8213ED70;
	// lwz r11,204(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 204);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8213ed6c
	if (!ctx.cr0.eq) goto loc_8213ED6C;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8213ed64
	if (ctx.cr6.eq) goto loc_8213ED64;
	// lwz r8,20(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_8213ED08:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r7,r7,0,6,6
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x8213ed54
	if (!ctx.cr0.eq) goto loc_8213ED54;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,16(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r6
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// clrlwi. r7,r7,31
	ctx.r7.u64 = ctx.r7.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8213ed64
	if (ctx.cr0.eq) goto loc_8213ED64;
	// lwz r7,72(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// beq cr6,0x8213ed64
	if (ctx.cr6.eq) goto loc_8213ED64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8213ed64
	if (!ctx.cr6.eq) goto loc_8213ED64;
loc_8213ED54:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x8213ed08
	if (ctx.cr6.lt) goto loc_8213ED08;
loc_8213ED64:
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x8213ed70
	if (!ctx.cr6.eq) goto loc_8213ED70;
loc_8213ED6C:
	// oris r24,r24,32
	ctx.r24.u64 = ctx.r24.u64 | 2097152;
loc_8213ED70:
	// lwz r11,204(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 204);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8213edc8
	if (ctx.cr0.eq) goto loc_8213EDC8;
	// lwz r11,292(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 292);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213edc8
	if (ctx.cr6.eq) goto loc_8213EDC8;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8213edc8
	if (ctx.cr6.eq) goto loc_8213EDC8;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_8213ED98:
	// lwz r9,296(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 296);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// mulli r9,r9,6
	ctx.r9.s64 = ctx.r9.s64 * 6;
	// lwz r7,292(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 292);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r9,r7
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r8.u32);
	// blt cr6,0x8213ed98
	if (ctx.cr6.lt) goto loc_8213ED98;
loc_8213EDC8:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r24,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r24.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822e9924
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213EDD8"))) PPC_WEAK_FUNC(sub_8213EDD8);
PPC_FUNC_IMPL(__imp__sub_8213EDD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r11,-2904
	ctx.r6.s64 = ctx.r11.s64 + -2904;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,-2924
	ctx.r5.s64 = ctx.r11.s64 + -2924;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-2940
	ctx.r4.s64 = ctx.r11.s64 + -2940;
	// lwz r11,524(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 524);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8213EE00"))) PPC_WEAK_FUNC(sub_8213EE00);
PPC_FUNC_IMPL(__imp__sub_8213EE00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r11,-2844
	ctx.r6.s64 = ctx.r11.s64 + -2844;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,-2868
	ctx.r5.s64 = ctx.r11.s64 + -2868;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-2876
	ctx.r4.s64 = ctx.r11.s64 + -2876;
	// lwz r11,532(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 532);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8213EE28"))) PPC_WEAK_FUNC(sub_8213EE28);
PPC_FUNC_IMPL(__imp__sub_8213EE28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r11,-2844
	ctx.r6.s64 = ctx.r11.s64 + -2844;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,-2868
	ctx.r5.s64 = ctx.r11.s64 + -2868;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-2876
	ctx.r4.s64 = ctx.r11.s64 + -2876;
	// lwz r11,536(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 536);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8213EE50"))) PPC_WEAK_FUNC(sub_8213EE50);
PPC_FUNC_IMPL(__imp__sub_8213EE50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r11,-2780
	ctx.r6.s64 = ctx.r11.s64 + -2780;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,-2800
	ctx.r5.s64 = ctx.r11.s64 + -2800;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-2816
	ctx.r4.s64 = ctx.r11.s64 + -2816;
	// lwz r11,532(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 532);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8213EE78"))) PPC_WEAK_FUNC(sub_8213EE78);
PPC_FUNC_IMPL(__imp__sub_8213EE78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r11,-2780
	ctx.r6.s64 = ctx.r11.s64 + -2780;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,-2800
	ctx.r5.s64 = ctx.r11.s64 + -2800;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-2816
	ctx.r4.s64 = ctx.r11.s64 + -2816;
	// lwz r11,536(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 536);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8213EEA0"))) PPC_WEAK_FUNC(sub_8213EEA0);
PPC_FUNC_IMPL(__imp__sub_8213EEA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x8213EEA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8213eec8
	if (!ctx.cr6.eq) goto loc_8213EEC8;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// b 0x8213f014
	goto loc_8213F014;
loc_8213EEC8:
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8213eee0
	if (!ctx.cr6.eq) goto loc_8213EEE0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8213f014
	goto loc_8213F014;
loc_8213EEE0:
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r11,r10
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_8213EEF8:
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mullw r8,r8,r30
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r30.s32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8213ef5c
	if (!ctx.cr6.eq) goto loc_8213EF5C;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8213ef5c
	if (!ctx.cr6.eq) goto loc_8213EF5C;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,12(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8213ef5c
	if (!ctx.cr6.eq) goto loc_8213EF5C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,16(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8213f000
	if (ctx.cr6.eq) goto loc_8213F000;
loc_8213EF5C:
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// clrlwi r9,r9,21
	ctx.r9.u64 = ctx.r9.u32 & 0x7FF;
	// oris r9,r9,45056
	ctx.r9.u64 = ctx.r9.u64 | 2952790016;
	// ori r9,r9,4096
	ctx.r9.u64 = ctx.r9.u64 | 4096;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8213efc0
	if (ctx.cr6.lt) goto loc_8213EFC0;
	// beq cr6,0x8213efb8
	if (ctx.cr6.eq) goto loc_8213EFB8;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x8213efb0
	if (ctx.cr6.lt) goto loc_8213EFB0;
	// bne cr6,0x8213efc0
	if (!ctx.cr6.eq) goto loc_8213EFC0;
	// oris r9,r9,255
	ctx.r9.u64 = ctx.r9.u64 | 16711680;
	// b 0x8213efbc
	goto loc_8213EFBC;
loc_8213EFB0:
	// oris r9,r9,170
	ctx.r9.u64 = ctx.r9.u64 | 11141120;
	// b 0x8213efbc
	goto loc_8213EFBC;
loc_8213EFB8:
	// oris r9,r9,85
	ctx.r9.u64 = ctx.r9.u64 | 5570560;
loc_8213EFBC:
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
loc_8213EFC0:
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8213efd4
	if (!ctx.cr6.eq) goto loc_8213EFD4;
	// oris r11,r9,3328
	ctx.r11.u64 = ctx.r9.u64 | 218103808;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8213EFD4:
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,572(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 572);
	// mullw r4,r5,r30
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r30.s32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213EFF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8213f014
	if (ctx.cr0.lt) goto loc_8213F014;
loc_8213F000:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// blt cr6,0x8213eef8
	if (ctx.cr6.lt) goto loc_8213EEF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8215ce50
	ctx.lr = 0x8213F014;
	sub_8215CE50(ctx, base);
loc_8213F014:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213F01C"))) PPC_WEAK_FUNC(sub_8213F01C);
PPC_FUNC_IMPL(__imp__sub_8213F01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213F020"))) PPC_WEAK_FUNC(sub_8213F020);
PPC_FUNC_IMPL(__imp__sub_8213F020) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,588(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 588);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8213F034"))) PPC_WEAK_FUNC(sub_8213F034);
PPC_FUNC_IMPL(__imp__sub_8213F034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213F038"))) PPC_WEAK_FUNC(sub_8213F038);
PPC_FUNC_IMPL(__imp__sub_8213F038) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 592);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8213F04C"))) PPC_WEAK_FUNC(sub_8213F04C);
PPC_FUNC_IMPL(__imp__sub_8213F04C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213F050"))) PPC_WEAK_FUNC(sub_8213F050);
PPC_FUNC_IMPL(__imp__sub_8213F050) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,588(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 588);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8213F064"))) PPC_WEAK_FUNC(sub_8213F064);
PPC_FUNC_IMPL(__imp__sub_8213F064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213F068"))) PPC_WEAK_FUNC(sub_8213F068);
PPC_FUNC_IMPL(__imp__sub_8213F068) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 592);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8213F07C"))) PPC_WEAK_FUNC(sub_8213F07C);
PPC_FUNC_IMPL(__imp__sub_8213F07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213F080"))) PPC_WEAK_FUNC(sub_8213F080);
PPC_FUNC_IMPL(__imp__sub_8213F080) {
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
	// lwz r4,256(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r9,16(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8213f0ec
	if (!ctx.cr6.eq) goto loc_8213F0EC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,576(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 576);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213F0D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8213f268
	if (ctx.cr0.lt) goto loc_8213F268;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,46
	ctx.r4.s64 = 46;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8215de88
	ctx.lr = 0x8213F0E8;
	sub_8215DE88(ctx, base);
	// b 0x8213f268
	goto loc_8213F268;
loc_8213F0EC:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8213f1c0
	if (!ctx.cr0.eq) goto loc_8213F1C0;
	// lwz r5,12(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq 0x8213f1b0
	if (ctx.cr0.eq) goto loc_8213F1B0;
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// subf r7,r10,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_8213F120:
	// lwzx r11,r7,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,4(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8213f1b0
	if (!ctx.cr6.eq) goto loc_8213F1B0;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8213f1b0
	if (!ctx.cr6.eq) goto loc_8213F1B0;
	// lwz r3,12(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r30,12(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8213f1b0
	if (!ctx.cr6.eq) goto loc_8213F1B0;
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r30,16(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8213f1b0
	if (!ctx.cr6.eq) goto loc_8213F1B0;
	// lwz r3,60(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8213f1b0
	if (!ctx.cr6.eq) goto loc_8213F1B0;
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8213f1a0
	if (ctx.cr0.eq) goto loc_8213F1A0;
	// lwz r11,96(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8213f1b0
	if (!ctx.cr6.eq) goto loc_8213F1B0;
loc_8213F1A0:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8213f120
	if (ctx.cr6.lt) goto loc_8213F120;
loc_8213F1B0:
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8213f1c0
	if (!ctx.cr6.eq) goto loc_8213F1C0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8213f268
	goto loc_8213F268;
loc_8213F1C0:
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8213f230
	if (!ctx.cr6.gt) goto loc_8213F230;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8213F1D4:
	// lwz r10,256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm. r5,r7,0,4,6
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x8213f218
	if (!ctx.cr0.eq) goto loc_8213F218;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
loc_8213F218:
	// lwz r10,256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8213f1d4
	if (ctx.cr6.lt) goto loc_8213F1D4;
loc_8213F230:
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,572(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 572);
	// clrlwi r5,r11,12
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFFF;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8213F258;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8213f268
	if (ctx.cr0.lt) goto loc_8213F268;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8215e488
	ctx.lr = 0x8213F268;
	sub_8215E488(ctx, base);
loc_8213F268:
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

__attribute__((alias("__imp__sub_8213F280"))) PPC_WEAK_FUNC(sub_8213F280);
PPC_FUNC_IMPL(__imp__sub_8213F280) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,604(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 604);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8213F2A0"))) PPC_WEAK_FUNC(sub_8213F2A0);
PPC_FUNC_IMPL(__imp__sub_8213F2A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8229bd98
	sub_8229BD98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213F2A4"))) PPC_WEAK_FUNC(sub_8213F2A4);
PPC_FUNC_IMPL(__imp__sub_8213F2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213F2A8"))) PPC_WEAK_FUNC(sub_8213F2A8);
PPC_FUNC_IMPL(__imp__sub_8213F2A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,604(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 604);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8213F2C8"))) PPC_WEAK_FUNC(sub_8213F2C8);
PPC_FUNC_IMPL(__imp__sub_8213F2C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,600(r12)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r12.u32 + 600);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8213F2D8"))) PPC_WEAK_FUNC(sub_8213F2D8);
PPC_FUNC_IMPL(__imp__sub_8213F2D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,632(r12)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r12.u32 + 632);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8213F2E8"))) PPC_WEAK_FUNC(sub_8213F2E8);
PPC_FUNC_IMPL(__imp__sub_8213F2E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,620(r12)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r12.u32 + 620);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8213F2F8"))) PPC_WEAK_FUNC(sub_8213F2F8);
PPC_FUNC_IMPL(__imp__sub_8213F2F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,636(r12)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r12.u32 + 636);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8213F308"))) PPC_WEAK_FUNC(sub_8213F308);
PPC_FUNC_IMPL(__imp__sub_8213F308) {
	PPC_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,608(r12)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r12.u32 + 608);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8213F318"))) PPC_WEAK_FUNC(sub_8213F318);
PPC_FUNC_IMPL(__imp__sub_8213F318) {
	PPC_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,624(r12)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r12.u32 + 624);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8213F328"))) PPC_WEAK_FUNC(sub_8213F328);
PPC_FUNC_IMPL(__imp__sub_8213F328) {
	PPC_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,640(r12)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r12.u32 + 640);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8213F338"))) PPC_WEAK_FUNC(sub_8213F338);
PPC_FUNC_IMPL(__imp__sub_8213F338) {
	PPC_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,612(r12)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r12.u32 + 612);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8213F348"))) PPC_WEAK_FUNC(sub_8213F348);
PPC_FUNC_IMPL(__imp__sub_8213F348) {
	PPC_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,628(r12)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r12.u32 + 628);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8213F358"))) PPC_WEAK_FUNC(sub_8213F358);
PPC_FUNC_IMPL(__imp__sub_8213F358) {
	PPC_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,644(r12)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r12.u32 + 644);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8213F368"))) PPC_WEAK_FUNC(sub_8213F368);
PPC_FUNC_IMPL(__imp__sub_8213F368) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-2752
	ctx.r11.s64 = ctx.r11.s64 + -2752;
	// lwz r3,1528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1528);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x8213f39c
	if (ctx.cr0.eq) goto loc_8213F39C;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x822f99b8
	ctx.lr = 0x8213F39C;
	sub_822F99B8(ctx, base);
loc_8213F39C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8215e970
	ctx.lr = 0x8213F3A4;
	sub_8215E970(ctx, base);
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

__attribute__((alias("__imp__sub_8213F3B8"))) PPC_WEAK_FUNC(sub_8213F3B8);
PPC_FUNC_IMPL(__imp__sub_8213F3B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x8213F3C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,1536(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1536);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// bne 0x8213f3dc
	if (!ctx.cr0.eq) goto loc_8213F3DC;
	// li r30,1024
	ctx.r30.s64 = 1024;
loc_8213F3DC:
	// lwz r11,1532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1532);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x8213f400
	if (!ctx.cr6.gt) goto loc_8213F400;
	// lwz r11,1532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1532);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
loc_8213F3F4:
	// rlwinm r30,r30,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x8213f3f4
	if (ctx.cr6.gt) goto loc_8213F3F4;
loc_8213F400:
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8213f44c
	if (ctx.cr6.eq) goto loc_8213F44C;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f9920
	ctx.lr = 0x8213F414;
	sub_822F9920(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x8213f428
	if (!ctx.cr0.eq) goto loc_8213F428;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8213f450
	goto loc_8213F450;
loc_8213F428:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,1532(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1532);
	// lwz r4,1528(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1528);
	// bl 0x822e9960
	ctx.lr = 0x8213F438;
	sub_822E9960(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,1528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1528);
	// bl 0x822f99b8
	ctx.lr = 0x8213F444;
	sub_822F99B8(ctx, base);
	// stw r29,1528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1528, ctx.r29.u32);
	// stw r30,1536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1536, ctx.r30.u32);
loc_8213F44C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8213F450:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213F458"))) PPC_WEAK_FUNC(sub_8213F458);
PPC_FUNC_IMPL(__imp__sub_8213F458) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8215e900
	ctx.lr = 0x8213F478;
	sub_8215E900(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r9,12
	ctx.r9.s64 = 12;
	// addi r10,r11,-2752
	ctx.r10.s64 = ctx.r11.s64 + -2752;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r31,504
	ctx.r3.s64 = ctx.r31.s64 + 504;
	// stw r9,1812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1812, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,1528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1528, ctx.r11.u32);
	// stw r11,1532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1532, ctx.r11.u32);
	// stw r11,1536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1536, ctx.r11.u32);
	// stw r11,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r11.u32);
	// stw r11,1672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1672, ctx.r11.u32);
	// stw r11,1808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1808, ctx.r11.u32);
	// stw r11,1804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1804, ctx.r11.u32);
	// bl 0x821347c0
	ctx.lr = 0x8213F4BC;
	sub_821347C0(ctx, base);
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

__attribute__((alias("__imp__sub_8213F4D8"))) PPC_WEAK_FUNC(sub_8213F4D8);
PPC_FUNC_IMPL(__imp__sub_8213F4D8) {
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
	// bl 0x8213f368
	ctx.lr = 0x8213F4F8;
	sub_8213F368(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8213f50c
	if (ctx.cr0.eq) goto loc_8213F50C;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f99b8
	ctx.lr = 0x8213F50C;
	sub_822F99B8(ctx, base);
loc_8213F50C:
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

__attribute__((alias("__imp__sub_8213F528"))) PPC_WEAK_FUNC(sub_8213F528);
PPC_FUNC_IMPL(__imp__sub_8213F528) {
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
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-2176(r1)
	ea = -2176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,2208
	ctx.r10.s64 = ctx.r1.s64 + 2208;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,2048
	ctx.r4.s64 = 2048;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82104ab0
	ctx.lr = 0x8213F578;
	sub_82104AB0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stb r10,2143(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2143, ctx.r10.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8213F588:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8213f588
	if (!ctx.cr6.eq) goto loc_8213F588;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r30,r11,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8213f3b8
	ctx.lr = 0x8213F5B0;
	sub_8213F3B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8213f5e0
	if (ctx.cr0.lt) goto loc_8213F5E0;
	// lwz r11,1528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1528);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,1532(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1532);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822e9960
	ctx.lr = 0x8213F5D0;
	sub_822E9960(ctx, base);
	// lwz r11,1532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1532);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,1532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1532, ctx.r11.u32);
loc_8213F5E0:
	// addi r1,r1,2176
	ctx.r1.s64 = ctx.r1.s64 + 2176;
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

__attribute__((alias("__imp__sub_8213F5F8"))) PPC_WEAK_FUNC(sub_8213F5F8);
PPC_FUNC_IMPL(__imp__sub_8213F5F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x8213F600;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,1540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1540);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8213f644
	if (!ctx.cr6.gt) goto loc_8213F644;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,-2104
	ctx.r29.s64 = ctx.r11.s64 + -2104;
loc_8213F620:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8213f528
	ctx.lr = 0x8213F62C;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8213f648
	if (ctx.cr0.lt) goto loc_8213F648;
	// lwz r11,1540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1540);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8213f620
	if (ctx.cr6.lt) goto loc_8213F620;
loc_8213F644:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8213F648:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213F650"))) PPC_WEAK_FUNC(sub_8213F650);
PPC_FUNC_IMPL(__imp__sub_8213F650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98d0
	ctx.lr = 0x8213F658;
	__savegprlr_22(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// lwz r11,1812(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1812);
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8213f790
	if (!ctx.cr6.gt) goto loc_8213F790;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r22,r11,-2076
	ctx.r22.s64 = ctx.r11.s64 + -2076;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,-2084
	ctx.r29.s64 = ctx.r11.s64 + -2084;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r28,r11,-2096
	ctx.r28.s64 = ctx.r11.s64 + -2096;
loc_8213F69C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x8213F6A4;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8213f794
	if (ctx.cr0.lt) goto loc_8213F794;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82110e08
	ctx.lr = 0x8213F6C4;
	sub_82110E08(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82110e08
	ctx.lr = 0x8213F6DC;
	sub_82110E08(ctx, base);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8213f528
	ctx.lr = 0x8213F6F4;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8213f794
	if (ctx.cr0.lt) goto loc_8213F794;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8213f734
	if (ctx.cr6.eq) goto loc_8213F734;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82110e08
	ctx.lr = 0x8213F71C;
	sub_82110E08(ctx, base);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8213f528
	ctx.lr = 0x8213F72C;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8213f794
	if (ctx.cr0.lt) goto loc_8213F794;
loc_8213F734:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8213f76c
	if (ctx.cr6.eq) goto loc_8213F76C;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82110e08
	ctx.lr = 0x8213F754;
	sub_82110E08(ctx, base);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8213f528
	ctx.lr = 0x8213F764;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8213f794
	if (ctx.cr0.lt) goto loc_8213F794;
loc_8213F76C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x8213f528
	ctx.lr = 0x8213F778;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8213f794
	if (ctx.cr0.lt) goto loc_8213F794;
	// lwz r11,1812(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1812);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8213f69c
	if (ctx.cr6.lt) goto loc_8213F69C;
loc_8213F790:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8213F794:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x822e9920
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213F79C"))) PPC_WEAK_FUNC(sub_8213F79C);
PPC_FUNC_IMPL(__imp__sub_8213F79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213F7A0"))) PPC_WEAK_FUNC(sub_8213F7A0);
PPC_FUNC_IMPL(__imp__sub_8213F7A0) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// rlwimi r11,r10,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,24,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1F;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bgt cr6,0x8213f844
	if (ctx.cr6.gt) goto loc_8213F844;
	// beq cr6,0x8213f824
	if (ctx.cr6.eq) goto loc_8213F824;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x8213f7e4
	if (!ctx.cr6.gt) goto loc_8213F7E4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8213f804
	if (ctx.cr6.eq) goto loc_8213F804;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// ble cr6,0x8213f854
	if (!ctx.cr6.gt) goto loc_8213F854;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x8213f854
	if (ctx.cr6.gt) goto loc_8213F854;
loc_8213F7E4:
	// lis r9,-32207
	ctx.r9.s64 = -2110717952;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,30296
	ctx.r9.s64 = ctx.r9.s64 + 30296;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// clrlwi r7,r10,21
	ctx.r7.u64 = ctx.r10.u32 & 0x7FF;
	// addi r5,r11,-2008
	ctx.r5.s64 = ctx.r11.s64 + -2008;
	// lwzx r6,r8,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// b 0x82110e08
	sub_82110E08(ctx, base);
	return;
loc_8213F804:
	// lis r9,-32207
	ctx.r9.s64 = -2110717952;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,30296
	ctx.r9.s64 = ctx.r9.s64 + 30296;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// clrlwi r7,r10,21
	ctx.r7.u64 = ctx.r10.u32 & 0x7FF;
	// addi r5,r11,-2024
	ctx.r5.s64 = ctx.r11.s64 + -2024;
	// lwzx r6,r8,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// b 0x82110e08
	sub_82110E08(ctx, base);
	return;
loc_8213F824:
	// lis r9,-32207
	ctx.r9.s64 = -2110717952;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,30296
	ctx.r9.s64 = ctx.r9.s64 + 30296;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// clrlwi r7,r10,21
	ctx.r7.u64 = ctx.r10.u32 & 0x7FF;
	// addi r5,r11,-2044
	ctx.r5.s64 = ctx.r11.s64 + -2044;
	// lwzx r6,r8,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// b 0x82110e08
	sub_82110E08(ctx, base);
	return;
loc_8213F844:
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// beq cr6,0x8213f7e4
	if (ctx.cr6.eq) goto loc_8213F7E4;
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// beq cr6,0x8213f878
	if (ctx.cr6.eq) goto loc_8213F878;
loc_8213F854:
	// lis r9,-32207
	ctx.r9.s64 = -2110717952;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,30296
	ctx.r9.s64 = ctx.r9.s64 + 30296;
	// clrlwi r11,r10,21
	ctx.r11.u64 = ctx.r10.u32 & 0x7FF;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r5,r10,-2056
	ctx.r5.s64 = ctx.r10.s64 + -2056;
	// lwzx r6,r8,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// b 0x82110e08
	sub_82110E08(ctx, base);
	return;
loc_8213F878:
	// lis r10,-32207
	ctx.r10.s64 = -2110717952;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,30296
	ctx.r10.s64 = ctx.r10.s64 + 30296;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,-2068
	ctx.r5.s64 = ctx.r11.s64 + -2068;
	// lwzx r6,r9,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// b 0x82110e08
	sub_82110E08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213F894"))) PPC_WEAK_FUNC(sub_8213F894);
PPC_FUNC_IMPL(__imp__sub_8213F894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213F898"))) PPC_WEAK_FUNC(sub_8213F898);
PPC_FUNC_IMPL(__imp__sub_8213F898) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x8213F8B8;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8213f928
	if (ctx.cr0.lt) goto loc_8213F928;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1980
	ctx.r4.s64 = ctx.r11.s64 + -1980;
	// bl 0x8213f528
	ctx.lr = 0x8213F8D0;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8213f928
	if (ctx.cr0.lt) goto loc_8213F928;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// rlwinm r8,r30,13,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 13) & 0x1;
	// addi r4,r11,-1988
	ctx.r4.s64 = ctx.r11.s64 + -1988;
	// rlwinm r7,r30,14,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 14) & 0x1;
	// rlwinm r6,r30,15,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 15) & 0x1;
	// lwz r11,388(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 388);
	// rlwinm r5,r30,16,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213F904;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8213f928
	if (ctx.cr0.lt) goto loc_8213F928;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1992
	ctx.r4.s64 = ctx.r11.s64 + -1992;
	// bl 0x8213f528
	ctx.lr = 0x8213F91C;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8213f928
	if (ctx.cr0.lt) goto loc_8213F928;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8213F928:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_8213F940"))) PPC_WEAK_FUNC(sub_8213F940);
PPC_FUNC_IMPL(__imp__sub_8213F940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x8213F948;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,1808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1808);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213f9f4
	if (ctx.cr6.eq) goto loc_8213F9F4;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8213f9f4
	if (!ctx.cr6.gt) goto loc_8213F9F4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r27,r11,-1992
	ctx.r27.s64 = ctx.r11.s64 + -1992;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,-2940
	ctx.r29.s64 = ctx.r11.s64 + -2940;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r28,r11,-1968
	ctx.r28.s64 = ctx.r11.s64 + -1968;
loc_8213F984:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x8213F98C;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8213f9f8
	if (ctx.cr0.lt) goto loc_8213F9F8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x8213F9A4;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8213f9f8
	if (ctx.cr0.lt) goto loc_8213F9F8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,436(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 436);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213F9C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8213f9f8
	if (ctx.cr0.lt) goto loc_8213F9F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8213f528
	ctx.lr = 0x8213F9DC;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8213f9f8
	if (ctx.cr0.lt) goto loc_8213F9F8;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8213f984
	if (ctx.cr6.lt) goto loc_8213F984;
loc_8213F9F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8213F9F8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213FA00"))) PPC_WEAK_FUNC(sub_8213FA00);
PPC_FUNC_IMPL(__imp__sub_8213FA00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e0
	ctx.lr = 0x8213FA08;
	__savegprlr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8213faf4
	if (ctx.cr6.eq) goto loc_8213FAF4;
	// andis. r11,r4,85
	ctx.r11.u64 = ctx.r4.u64 & 5570560;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8213fa2c
	if (ctx.cr0.eq) goto loc_8213FA2C;
	// li r26,1
	ctx.r26.s64 = 1;
	// b 0x8213fa3c
	goto loc_8213FA3C;
loc_8213FA2C:
	// andis. r11,r4,170
	ctx.r11.u64 = ctx.r4.u64 & 11141120;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r26,r11,2
	ctx.r26.s64 = ctx.r11.s64 + 2;
loc_8213FA3C:
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8213faf4
	if (!ctx.cr6.gt) goto loc_8213FAF4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r27,r11,-1992
	ctx.r27.s64 = ctx.r11.s64 + -1992;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,-1968
	ctx.r29.s64 = ctx.r11.s64 + -1968;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r28,r11,-1952
	ctx.r28.s64 = ctx.r11.s64 + -1952;
loc_8213FA64:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x8213FA6C;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8213faf8
	if (ctx.cr0.lt) goto loc_8213FAF8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82110e08
	ctx.lr = 0x8213FA88;
	sub_82110E08(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x8213FA98;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8213faf8
	if (ctx.cr0.lt) goto loc_8213FAF8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213FAC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8213faf8
	if (ctx.cr0.lt) goto loc_8213FAF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8213f528
	ctx.lr = 0x8213FADC;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8213faf8
	if (ctx.cr0.lt) goto loc_8213FAF8;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8213fa64
	if (ctx.cr6.lt) goto loc_8213FA64;
loc_8213FAF4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8213FAF8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822e9930
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213FB00"))) PPC_WEAK_FUNC(sub_8213FB00);
PPC_FUNC_IMPL(__imp__sub_8213FB00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98c8
	ctx.lr = 0x8213FB08;
	__savegprlr_20(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r20,r7
	ctx.r20.u64 = ctx.r7.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8213fc70
	if (ctx.cr6.eq) goto loc_8213FC70;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8213fc70
	if (!ctx.cr6.gt) goto loc_8213FC70;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r27,r11,-1992
	ctx.r27.s64 = ctx.r11.s64 + -1992;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,-1916
	ctx.r29.s64 = ctx.r11.s64 + -1916;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r26,r11,-1952
	ctx.r26.s64 = ctx.r11.s64 + -1952;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r25,r11,-1928
	ctx.r25.s64 = ctx.r11.s64 + -1928;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r28,r11,-1940
	ctx.r28.s64 = ctx.r11.s64 + -1940;
loc_8213FB64:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x8213FB6C;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8213fc74
	if (ctx.cr0.lt) goto loc_8213FC74;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82110e08
	ctx.lr = 0x8213FB88;
	sub_82110E08(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82110e08
	ctx.lr = 0x8213FBA0;
	sub_82110E08(ctx, base);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bne cr6,0x8213fbbc
	if (!ctx.cr6.eq) goto loc_8213FBBC;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
loc_8213FBBC:
	// bl 0x82110e08
	ctx.lr = 0x8213FBC0;
	sub_82110E08(ctx, base);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// bne cr6,0x8213fbd8
	if (!ctx.cr6.eq) goto loc_8213FBD8;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
loc_8213FBD8:
	// bl 0x8213f528
	ctx.lr = 0x8213FBDC;
	sub_8213F528(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8213fc74
	if (ctx.cr6.lt) goto loc_8213FC74;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// bne cr6,0x8213fbf4
	if (!ctx.cr6.eq) goto loc_8213FBF4;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// b 0x8213fc10
	goto loc_8213FC10;
loc_8213FBF4:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82110e08
	ctx.lr = 0x8213FC0C;
	sub_82110E08(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
loc_8213FC10:
	// andis. r11,r23,3328
	ctx.r11.u64 = ctx.r23.u64 & 218103808;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// beq 0x8213fc34
	if (ctx.cr0.eq) goto loc_8213FC34;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// b 0x8213fc3c
	goto loc_8213FC3C;
loc_8213FC34:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
loc_8213FC3C:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213FC44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8213fc74
	if (ctx.cr0.lt) goto loc_8213FC74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8213f528
	ctx.lr = 0x8213FC58;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8213fc74
	if (ctx.cr0.lt) goto loc_8213FC74;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8213fb64
	if (ctx.cr6.lt) goto loc_8213FB64;
loc_8213FC70:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8213FC74:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x822e9918
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213FC7C"))) PPC_WEAK_FUNC(sub_8213FC7C);
PPC_FUNC_IMPL(__imp__sub_8213FC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213FC80"))) PPC_WEAK_FUNC(sub_8213FC80);
PPC_FUNC_IMPL(__imp__sub_8213FC80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98d4
	ctx.lr = 0x8213FC88;
	__savegprlr_23(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,15
	ctx.r11.s64 = 983040;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8213fdac
	if (ctx.cr6.eq) goto loc_8213FDAC;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8213fdac
	if (!ctx.cr6.gt) goto loc_8213FDAC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r26,r11,-1992
	ctx.r26.s64 = ctx.r11.s64 + -1992;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r28,r11,-1908
	ctx.r28.s64 = ctx.r11.s64 + -1908;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,-1916
	ctx.r29.s64 = ctx.r11.s64 + -1916;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r27,r11,-1940
	ctx.r27.s64 = ctx.r11.s64 + -1940;
loc_8213FCD8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x8213FCE0;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8213fdb0
	if (ctx.cr0.lt) goto loc_8213FDB0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82110e08
	ctx.lr = 0x8213FCFC;
	sub_82110E08(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82110e08
	ctx.lr = 0x8213FD14;
	sub_82110E08(ctx, base);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bne cr6,0x8213fd2c
	if (!ctx.cr6.eq) goto loc_8213FD2C;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
loc_8213FD2C:
	// bl 0x8213f528
	ctx.lr = 0x8213FD30;
	sub_8213F528(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8213fdb0
	if (ctx.cr6.lt) goto loc_8213FDB0;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x8213fd48
	if (!ctx.cr6.eq) goto loc_8213FD48;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// b 0x8213fd64
	goto loc_8213FD64;
loc_8213FD48:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82110e08
	ctx.lr = 0x8213FD60;
	sub_82110E08(ctx, base);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
loc_8213FD64:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213FD80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8213fdb0
	if (ctx.cr0.lt) goto loc_8213FDB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8213f528
	ctx.lr = 0x8213FD94;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8213fdb0
	if (ctx.cr0.lt) goto loc_8213FDB0;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8213fcd8
	if (ctx.cr6.lt) goto loc_8213FCD8;
loc_8213FDAC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8213FDB0:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x822e9924
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213FDB8"))) PPC_WEAK_FUNC(sub_8213FDB8);
PPC_FUNC_IMPL(__imp__sub_8213FDB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98d4
	ctx.lr = 0x8213FDC0;
	__savegprlr_23(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// lwz r11,1808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1808);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213fef8
	if (ctx.cr6.eq) goto loc_8213FEF8;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8213fef8
	if (!ctx.cr6.gt) goto loc_8213FEF8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r26,r11,-1992
	ctx.r26.s64 = ctx.r11.s64 + -1992;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,-1916
	ctx.r29.s64 = ctx.r11.s64 + -1916;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r28,r11,-1928
	ctx.r28.s64 = ctx.r11.s64 + -1928;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r27,r11,-1940
	ctx.r27.s64 = ctx.r11.s64 + -1940;
loc_8213FE10:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x8213FE18;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8213fefc
	if (ctx.cr0.lt) goto loc_8213FEFC;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82110e08
	ctx.lr = 0x8213FE34;
	sub_82110E08(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82110e08
	ctx.lr = 0x8213FE4C;
	sub_82110E08(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82110e08
	ctx.lr = 0x8213FE60;
	sub_82110E08(ctx, base);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// bne cr6,0x8213fe78
	if (!ctx.cr6.eq) goto loc_8213FE78;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
loc_8213FE78:
	// bl 0x8213f528
	ctx.lr = 0x8213FE7C;
	sub_8213F528(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8213fefc
	if (ctx.cr6.lt) goto loc_8213FEFC;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x8213fe94
	if (!ctx.cr6.eq) goto loc_8213FE94;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// b 0x8213feb0
	goto loc_8213FEB0;
loc_8213FE94:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82110e08
	ctx.lr = 0x8213FEAC;
	sub_82110E08(ctx, base);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
loc_8213FEB0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213FECC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8213fefc
	if (ctx.cr0.lt) goto loc_8213FEFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8213f528
	ctx.lr = 0x8213FEE0;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8213fefc
	if (ctx.cr0.lt) goto loc_8213FEFC;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8213fe10
	if (ctx.cr6.lt) goto loc_8213FE10;
loc_8213FEF8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8213FEFC:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x822e9924
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213FF04"))) PPC_WEAK_FUNC(sub_8213FF04);
PPC_FUNC_IMPL(__imp__sub_8213FF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8213FF08"))) PPC_WEAK_FUNC(sub_8213FF08);
PPC_FUNC_IMPL(__imp__sub_8213FF08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x8213FF10;
	__savegprlr_28(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x8213FF28;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8213ffb8
	if (ctx.cr0.lt) goto loc_8213FFB8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r5,r11,-1888
	ctx.r5.s64 = ctx.r11.s64 + -1888;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82110e08
	ctx.lr = 0x8213FF4C;
	sub_82110E08(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,440(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 440);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213FF68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8213ffb8
	if (ctx.cr0.lt) goto loc_8213FFB8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1992
	ctx.r4.s64 = ctx.r11.s64 + -1992;
	// bl 0x8213f528
	ctx.lr = 0x8213FF80;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8213ffb8
	if (ctx.cr0.lt) goto loc_8213FFB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x8213FF90;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8213ffb8
	if (ctx.cr0.lt) goto loc_8213FFB8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,-1900
	ctx.r4.s64 = ctx.r11.s64 + -1900;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x8213FFAC;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8213ffb8
	if (ctx.cr0.lt) goto loc_8213FFB8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8213FFB8:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8213FFC0"))) PPC_WEAK_FUNC(sub_8213FFC0);
PPC_FUNC_IMPL(__imp__sub_8213FFC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x8213FFC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x8213FFE0;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82140088
	if (ctx.cr0.lt) goto loc_82140088;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-1872
	ctx.r4.s64 = ctx.r11.s64 + -1872;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x8213FFFC;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82140088
	if (ctx.cr0.lt) goto loc_82140088;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x8214000C;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82140088
	if (ctx.cr0.lt) goto loc_82140088;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-1916
	ctx.r4.s64 = ctx.r11.s64 + -1916;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x82140028;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82140088
	if (ctx.cr0.lt) goto loc_82140088;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r5,r11,-1888
	ctx.r5.s64 = ctx.r11.s64 + -1888;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82110e08
	ctx.lr = 0x8214004C;
	sub_82110E08(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,472(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82140064;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82140088
	if (ctx.cr0.lt) goto loc_82140088;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1880
	ctx.r4.s64 = ctx.r11.s64 + -1880;
	// bl 0x8213f528
	ctx.lr = 0x8214007C;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82140088
	if (ctx.cr0.lt) goto loc_82140088;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82140088:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82140090"))) PPC_WEAK_FUNC(sub_82140090);
PPC_FUNC_IMPL(__imp__sub_82140090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x82140098;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x821400B0;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8214010c
	if (ctx.cr0.lt) goto loc_8214010C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r4,r11,-1864
	ctx.r4.s64 = ctx.r11.s64 + -1864;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x821400D4;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8214010c
	if (ctx.cr0.lt) goto loc_8214010C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x821400E4;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8214010c
	if (ctx.cr0.lt) goto loc_8214010C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-1900
	ctx.r4.s64 = ctx.r11.s64 + -1900;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x82140100;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8214010c
	if (ctx.cr0.lt) goto loc_8214010C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8214010C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82140114"))) PPC_WEAK_FUNC(sub_82140114);
PPC_FUNC_IMPL(__imp__sub_82140114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82140118"))) PPC_WEAK_FUNC(sub_82140118);
PPC_FUNC_IMPL(__imp__sub_82140118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x82140120;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x82140138;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82140194
	if (ctx.cr0.lt) goto loc_82140194;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-1872
	ctx.r4.s64 = ctx.r11.s64 + -1872;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x82140154;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82140194
	if (ctx.cr0.lt) goto loc_82140194;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x82140164;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82140194
	if (ctx.cr0.lt) goto loc_82140194;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r4,r11,-1848
	ctx.r4.s64 = ctx.r11.s64 + -1848;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x82140188;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82140194
	if (ctx.cr0.lt) goto loc_82140194;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82140194:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214019C"))) PPC_WEAK_FUNC(sub_8214019C);
PPC_FUNC_IMPL(__imp__sub_8214019C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821401A0"))) PPC_WEAK_FUNC(sub_821401A0);
PPC_FUNC_IMPL(__imp__sub_821401A0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r6,r11,-2904
	ctx.r6.s64 = ctx.r11.s64 + -2904;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,-2924
	ctx.r5.s64 = ctx.r11.s64 + -2924;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r11,-2940
	ctx.r30.s64 = ctx.r11.s64 + -2940;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,528(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 528);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821401E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82140278
	if (ctx.cr0.lt) goto loc_82140278;
	// lwz r11,1804(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1804);
	// addi r11,r11,418
	ctx.r11.s64 = ctx.r11.s64 + 418;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82140290
	if (ctx.cr6.eq) goto loc_82140290;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82140290
	if (ctx.cr6.eq) goto loc_82140290;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x82140214;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82140278
	if (ctx.cr0.lt) goto loc_82140278;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1808
	ctx.r4.s64 = ctx.r11.s64 + -1808;
	// bl 0x8213f528
	ctx.lr = 0x8214022C;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82140278
	if (ctx.cr0.lt) goto loc_82140278;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,-1824
	ctx.r5.s64 = ctx.r11.s64 + -1824;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,460(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 460);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82140254;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82140278
	if (ctx.cr0.lt) goto loc_82140278;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-1880
	ctx.r4.s64 = ctx.r11.s64 + -1880;
loc_82140264:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x8214026C;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82140278
	if (ctx.cr0.lt) goto loc_82140278;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82140278:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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
loc_82140290:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1824
	ctx.r4.s64 = ctx.r11.s64 + -1824;
	// lwz r11,564(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 564);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821402AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82140278
	if (ctx.cr0.lt) goto loc_82140278;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-1828
	ctx.r4.s64 = ctx.r11.s64 + -1828;
	// b 0x82140264
	goto loc_82140264;
}

__attribute__((alias("__imp__sub_821402C0"))) PPC_WEAK_FUNC(sub_821402C0);
PPC_FUNC_IMPL(__imp__sub_821402C0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x821402E0;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8214033c
	if (ctx.cr0.lt) goto loc_8214033C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-1916
	ctx.r4.s64 = ctx.r11.s64 + -1916;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x821402FC;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8214033c
	if (ctx.cr0.lt) goto loc_8214033C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 392);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82140318;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8214033c
	if (ctx.cr0.lt) goto loc_8214033C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1992
	ctx.r4.s64 = ctx.r11.s64 + -1992;
	// bl 0x8213f528
	ctx.lr = 0x82140330;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8214033c
	if (ctx.cr0.lt) goto loc_8214033C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8214033C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_82140354"))) PPC_WEAK_FUNC(sub_82140354);
PPC_FUNC_IMPL(__imp__sub_82140354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82140358"))) PPC_WEAK_FUNC(sub_82140358);
PPC_FUNC_IMPL(__imp__sub_82140358) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 540);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82140380;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821404a4
	if (ctx.cr0.lt) goto loc_821404A4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r30,r11,-2940
	ctx.r30.s64 = ctx.r11.s64 + -2940;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,568(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 568);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821403B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821404a4
	if (ctx.cr0.lt) goto loc_821404A4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,-1908
	ctx.r5.s64 = ctx.r11.s64 + -1908;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,488(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 488);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821403D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821404a4
	if (ctx.cr0.lt) goto loc_821404A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x821403E8;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821404a4
	if (ctx.cr0.lt) goto loc_821404A4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1780
	ctx.r4.s64 = ctx.r11.s64 + -1780;
	// bl 0x8213f528
	ctx.lr = 0x82140400;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821404a4
	if (ctx.cr0.lt) goto loc_821404A4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 492);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214041C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821404a4
	if (ctx.cr0.lt) goto loc_821404A4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1784
	ctx.r4.s64 = ctx.r11.s64 + -1784;
	// bl 0x8213f528
	ctx.lr = 0x82140434;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821404a4
	if (ctx.cr0.lt) goto loc_821404A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x82140444;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821404a4
	if (ctx.cr0.lt) goto loc_821404A4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1788
	ctx.r4.s64 = ctx.r11.s64 + -1788;
	// bl 0x8213f528
	ctx.lr = 0x8214045C;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821404a4
	if (ctx.cr0.lt) goto loc_821404A4;
	// lwz r10,1804(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1804);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,1808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1808);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r10,419
	ctx.r10.s64 = ctx.r10.s64 + 419;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,1808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1808, ctx.r11.u32);
	// stwx r9,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r10,1804(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1804);
	// lwz r11,1540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1540);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,1804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1804, ctx.r10.u32);
	// stw r11,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r11.u32);
	// bl 0x8215d100
	ctx.lr = 0x821404A4;
	sub_8215D100(ctx, base);
loc_821404A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_821404BC"))) PPC_WEAK_FUNC(sub_821404BC);
PPC_FUNC_IMPL(__imp__sub_821404BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821404C0"))) PPC_WEAK_FUNC(sub_821404C0);
PPC_FUNC_IMPL(__imp__sub_821404C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x821404C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,1804(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1804);
	// addi r11,r11,418
	ctx.r11.s64 = ctx.r11.s64 + 418;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82140688
	if (ctx.cr6.lt) goto loc_82140688;
	// bne cr6,0x82140718
	if (!ctx.cr6.eq) goto loc_82140718;
	// lwz r11,1540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1540);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r11.u32);
	// bl 0x8213f5f8
	ctx.lr = 0x821404FC;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82140720
	if (ctx.cr0.lt) goto loc_82140720;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1752
	ctx.r4.s64 = ctx.r11.s64 + -1752;
	// bl 0x8213f528
	ctx.lr = 0x82140514;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82140720
	if (ctx.cr0.lt) goto loc_82140720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x82140524;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82140720
	if (ctx.cr0.lt) goto loc_82140720;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1980
	ctx.r4.s64 = ctx.r11.s64 + -1980;
	// bl 0x8213f528
	ctx.lr = 0x8214053C;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82140720
	if (ctx.cr0.lt) goto loc_82140720;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r7,r11,-2904
	ctx.r7.s64 = ctx.r11.s64 + -2904;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r6,r11,-2924
	ctx.r6.s64 = ctx.r11.s64 + -2924;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,-1764
	ctx.r5.s64 = ctx.r11.s64 + -1764;
	// bl 0x82110e08
	ctx.lr = 0x82140568;
	sub_82110E08(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,472(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82140580;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82140720
	if (ctx.cr0.lt) goto loc_82140720;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r11,-1992
	ctx.r28.s64 = ctx.r11.s64 + -1992;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8213f528
	ctx.lr = 0x8214059C;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82140720
	if (ctx.cr0.lt) goto loc_82140720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x821405AC;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82140720
	if (ctx.cr0.lt) goto loc_82140720;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1808
	ctx.r4.s64 = ctx.r11.s64 + -1808;
	// bl 0x8213f528
	ctx.lr = 0x821405C4;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82140720
	if (ctx.cr0.lt) goto loc_82140720;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-2940
	ctx.r30.s64 = ctx.r11.s64 + -2940;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r29,r11,-1908
	ctx.r29.s64 = ctx.r11.s64 + -1908;
	// lwz r11,460(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 460);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821405F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82140720
	if (ctx.cr0.lt) goto loc_82140720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8213f528
	ctx.lr = 0x8214060C;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82140720
	if (ctx.cr0.lt) goto loc_82140720;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,488(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 488);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82140630;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82140720
	if (ctx.cr0.lt) goto loc_82140720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x82140640;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82140720
	if (ctx.cr0.lt) goto loc_82140720;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1780
	ctx.r4.s64 = ctx.r11.s64 + -1780;
	// bl 0x8213f528
	ctx.lr = 0x82140658;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82140720
	if (ctx.cr0.lt) goto loc_82140720;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 492);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82140674;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82140720
	if (ctx.cr0.lt) goto loc_82140720;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-1784
	ctx.r4.s64 = ctx.r11.s64 + -1784;
	// b 0x821406d4
	goto loc_821406D4;
loc_82140688:
	// lwz r11,1540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1540);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r11.u32);
	// bl 0x8213f5f8
	ctx.lr = 0x8214069C;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82140720
	if (ctx.cr0.lt) goto loc_82140720;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1752
	ctx.r4.s64 = ctx.r11.s64 + -1752;
	// bl 0x8213f528
	ctx.lr = 0x821406B4;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82140720
	if (ctx.cr0.lt) goto loc_82140720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x821406C4;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82140720
	if (ctx.cr0.lt) goto loc_82140720;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-1772
	ctx.r4.s64 = ctx.r11.s64 + -1772;
loc_821406D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x821406DC;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82140720
	if (ctx.cr0.lt) goto loc_82140720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x821406EC;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82140720
	if (ctx.cr0.lt) goto loc_82140720;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1788
	ctx.r4.s64 = ctx.r11.s64 + -1788;
	// bl 0x8213f528
	ctx.lr = 0x82140704;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82140720
	if (ctx.cr0.lt) goto loc_82140720;
	// lwz r11,1540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1540);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r11.u32);
loc_82140718:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8215d3f0
	ctx.lr = 0x82140720;
	sub_8215D3F0(ctx, base);
loc_82140720:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82140728"))) PPC_WEAK_FUNC(sub_82140728);
PPC_FUNC_IMPL(__imp__sub_82140728) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,1804(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1804);
	// addi r11,r11,418
	ctx.r11.s64 = ctx.r11.s64 + 418;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821407d8
	if (ctx.cr6.lt) goto loc_821407D8;
	// bne cr6,0x821407b0
	if (!ctx.cr6.eq) goto loc_821407B0;
	// lwz r10,1808(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1808);
	// lwz r11,1540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1540);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r10,1808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1808, ctx.r10.u32);
	// stw r11,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r11.u32);
	// bl 0x8213f5f8
	ctx.lr = 0x82140774;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821407c4
	if (ctx.cr0.lt) goto loc_821407C4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1748
	ctx.r4.s64 = ctx.r11.s64 + -1748;
	// bl 0x8213f528
	ctx.lr = 0x8214078C;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821407c4
	if (ctx.cr0.lt) goto loc_821407C4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,544(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 544);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821407A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821407A8:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821407c4
	if (ctx.cr0.lt) goto loc_821407C4;
loc_821407B0:
	// lwz r11,1804(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1804);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1804, ctx.r11.u32);
	// bl 0x8215d458
	ctx.lr = 0x821407C4;
	sub_8215D458(ctx, base);
loc_821407C4:
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
loc_821407D8:
	// lwz r11,1540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1540);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r11.u32);
	// bl 0x8213f5f8
	ctx.lr = 0x821407EC;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821407c4
	if (ctx.cr0.lt) goto loc_821407C4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1748
	ctx.r4.s64 = ctx.r11.s64 + -1748;
	// bl 0x8213f528
	ctx.lr = 0x82140804;
	sub_8213F528(ctx, base);
	// b 0x821407a8
	goto loc_821407A8;
}

__attribute__((alias("__imp__sub_82140808"))) PPC_WEAK_FUNC(sub_82140808);
PPC_FUNC_IMPL(__imp__sub_82140808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x82140810;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r11,-1908
	ctx.r30.s64 = ctx.r11.s64 + -1908;
	// lwz r11,1808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1808);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r10,564(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 564);
	// stw r11,1808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1808, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82140844;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82140928
	if (ctx.cr0.lt) goto loc_82140928;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-2940
	ctx.r4.s64 = ctx.r11.s64 + -2940;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,488(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 488);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214086C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82140928
	if (ctx.cr0.lt) goto loc_82140928;
	// lwz r11,1540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1540);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r11.u32);
	// bl 0x8213f5f8
	ctx.lr = 0x82140888;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82140928
	if (ctx.cr0.lt) goto loc_82140928;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1748
	ctx.r4.s64 = ctx.r11.s64 + -1748;
	// bl 0x8213f528
	ctx.lr = 0x821408A0;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82140928
	if (ctx.cr0.lt) goto loc_82140928;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x821408cc
	if (ctx.cr6.eq) goto loc_821408CC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,552(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 552);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821408C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82140928
	if (ctx.cr0.lt) goto loc_82140928;
loc_821408CC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,560(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821408E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82140928
	if (ctx.cr0.lt) goto loc_82140928;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,544(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 544);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821408FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82140928
	if (ctx.cr0.lt) goto loc_82140928;
	// lwz r11,1804(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1804);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1804, ctx.r11.u32);
	// beq cr6,0x82140924
	if (ctx.cr6.eq) goto loc_82140924;
	// bl 0x8215bf68
	ctx.lr = 0x82140920;
	sub_8215BF68(ctx, base);
	// b 0x82140928
	goto loc_82140928;
loc_82140924:
	// bl 0x8215bf00
	ctx.lr = 0x82140928;
	sub_8215BF00(ctx, base);
loc_82140928:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82140930"))) PPC_WEAK_FUNC(sub_82140930);
PPC_FUNC_IMPL(__imp__sub_82140930) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r30,r11,-1824
	ctx.r30.s64 = ctx.r11.s64 + -1824;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,568(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 568);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214096C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821409e4
	if (ctx.cr0.lt) goto loc_821409E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x8214097C;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821409e4
	if (ctx.cr0.lt) goto loc_821409E4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1808
	ctx.r4.s64 = ctx.r11.s64 + -1808;
	// bl 0x8213f528
	ctx.lr = 0x82140994;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821409e4
	if (ctx.cr0.lt) goto loc_821409E4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-2940
	ctx.r4.s64 = ctx.r11.s64 + -2940;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,460(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 460);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821409BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821409e4
	if (ctx.cr0.lt) goto loc_821409E4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1880
	ctx.r4.s64 = ctx.r11.s64 + -1880;
	// bl 0x8213f528
	ctx.lr = 0x821409D4;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821409e4
	if (ctx.cr0.lt) goto loc_821409E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8215bfd0
	ctx.lr = 0x821409E4;
	sub_8215BFD0(ctx, base);
loc_821409E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_821409FC"))) PPC_WEAK_FUNC(sub_821409FC);
PPC_FUNC_IMPL(__imp__sub_821409FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82140A00"))) PPC_WEAK_FUNC(sub_82140A00);
PPC_FUNC_IMPL(__imp__sub_82140A00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98dc
	ctx.lr = 0x82140A08;
	__savegprlr_25(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lis r28,29600
	ctx.r28.s64 = 1939865600;
	// bne cr6,0x82140a2c
	if (!ctx.cr6.eq) goto loc_82140A2C;
	// lis r28,29584
	ctx.r28.s64 = 1938817024;
loc_82140A2C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r26,r11,-1940
	ctx.r26.s64 = ctx.r11.s64 + -1940;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x821347c0
	ctx.lr = 0x82140A44;
	sub_821347C0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,484(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82140A68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82140bac
	if (ctx.cr0.lt) goto loc_82140BAC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x82140A78;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82140bac
	if (ctx.cr0.lt) goto loc_82140BAC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1732
	ctx.r4.s64 = ctx.r11.s64 + -1732;
	// bl 0x8213f528
	ctx.lr = 0x82140A90;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82140bac
	if (ctx.cr0.lt) goto loc_82140BAC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r4,r11,-1988
	ctx.r4.s64 = ctx.r11.s64 + -1988;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r11,388(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 388);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82140AC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82140bac
	if (ctx.cr0.lt) goto loc_82140BAC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r27,r11,-1992
	ctx.r27.s64 = ctx.r11.s64 + -1992;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8213f528
	ctx.lr = 0x82140AE0;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82140bac
	if (ctx.cr0.lt) goto loc_82140BAC;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82140ba8
	if (!ctx.cr6.gt) goto loc_82140BA8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r28,r11,-1740
	ctx.r28.s64 = ctx.r11.s64 + -1740;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,-1916
	ctx.r29.s64 = ctx.r11.s64 + -1916;
loc_82140B08:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x82140B10;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82140bac
	if (ctx.cr0.lt) goto loc_82140BAC;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82110e08
	ctx.lr = 0x82140B30;
	sub_82110E08(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82110e08
	ctx.lr = 0x82140B44;
	sub_82110E08(ctx, base);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x82140B54;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82140bac
	if (ctx.cr0.lt) goto loc_82140BAC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82140B7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82140bac
	if (ctx.cr0.lt) goto loc_82140BAC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8213f528
	ctx.lr = 0x82140B90;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82140bac
	if (ctx.cr0.lt) goto loc_82140BAC;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82140b08
	if (ctx.cr6.lt) goto loc_82140B08;
loc_82140BA8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82140BAC:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822e992c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82140BB4"))) PPC_WEAK_FUNC(sub_82140BB4);
PPC_FUNC_IMPL(__imp__sub_82140BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82140BB8"))) PPC_WEAK_FUNC(sub_82140BB8);
PPC_FUNC_IMPL(__imp__sub_82140BB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98c4
	ctx.lr = 0x82140BC0;
	__savegprlr_19(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x82140BD8;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8214102c
	if (ctx.cr0.lt) goto loc_8214102C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r24,r11,-1732
	ctx.r24.s64 = ctx.r11.s64 + -1732;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x8213f528
	ctx.lr = 0x82140BF4;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8214102c
	if (ctx.cr0.lt) goto loc_8214102C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r27,r11,-1988
	ctx.r27.s64 = ctx.r11.s64 + -1988;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,388(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 388);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82140C2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8214102c
	if (ctx.cr0.lt) goto loc_8214102C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r22,r11,-1992
	ctx.r22.s64 = ctx.r11.s64 + -1992;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x8213f528
	ctx.lr = 0x82140C48;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8214102c
	if (ctx.cr0.lt) goto loc_8214102C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x82140C58;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8214102c
	if (ctx.cr0.lt) goto loc_8214102C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r11,-1692
	ctx.r29.s64 = ctx.r11.s64 + -1692;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8213f528
	ctx.lr = 0x82140C74;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8214102c
	if (ctx.cr0.lt) goto loc_8214102C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82140CA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8214102c
	if (ctx.cr0.lt) goto loc_8214102C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x8213f528
	ctx.lr = 0x82140CB8;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8214102c
	if (ctx.cr0.lt) goto loc_8214102C;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r26,r11,-1740
	ctx.r26.s64 = ctx.r11.s64 + -1740;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r25,r11,-1700
	ctx.r25.s64 = ctx.r11.s64 + -1700;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r28,r11,-1916
	ctx.r28.s64 = ctx.r11.s64 + -1916;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r23,r11,-1712
	ctx.r23.s64 = ctx.r11.s64 + -1712;
	// ble cr6,0x82140d90
	if (!ctx.cr6.gt) goto loc_82140D90;
loc_82140CF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x82140CF8;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8214102c
	if (ctx.cr0.lt) goto loc_8214102C;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82110e08
	ctx.lr = 0x82140D18;
	sub_82110E08(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82110e08
	ctx.lr = 0x82140D2C;
	sub_82110E08(ctx, base);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x82140D3C;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8214102c
	if (ctx.cr0.lt) goto loc_8214102C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82140D64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8214102c
	if (ctx.cr0.lt) goto loc_8214102C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x8213f528
	ctx.lr = 0x82140D78;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8214102c
	if (ctx.cr0.lt) goto loc_8214102C;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82140cf0
	if (ctx.cr6.lt) goto loc_82140CF0;
loc_82140D90:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x82140D98;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8214102c
	if (ctx.cr0.lt) goto loc_8214102C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x8213f528
	ctx.lr = 0x82140DAC;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8214102c
	if (ctx.cr0.lt) goto loc_8214102C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82140DDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8214102c
	if (ctx.cr0.lt) goto loc_8214102C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x8213f528
	ctx.lr = 0x82140DF0;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8214102c
	if (ctx.cr0.lt) goto loc_8214102C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x82140E00;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8214102c
	if (ctx.cr0.lt) goto loc_8214102C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8213f528
	ctx.lr = 0x82140E14;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8214102c
	if (ctx.cr0.lt) goto loc_8214102C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82140E44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8214102c
	if (ctx.cr0.lt) goto loc_8214102C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x8213f528
	ctx.lr = 0x82140E58;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8214102c
	if (ctx.cr0.lt) goto loc_8214102C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r11,-1720
	ctx.r4.s64 = ctx.r11.s64 + -1720;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x822e9fa0
	ctx.lr = 0x82140E74;
	sub_822E9FA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// beq 0x82140e90
	if (ctx.cr0.eq) goto loc_82140E90;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,-1928
	ctx.r5.s64 = ctx.r11.s64 + -1928;
	// b 0x82140e98
	goto loc_82140E98;
loc_82140E90:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,-1940
	ctx.r5.s64 = ctx.r11.s64 + -1940;
loc_82140E98:
	// bl 0x821347c0
	ctx.lr = 0x82140E9C;
	sub_821347C0(ctx, base);
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82140f4c
	if (!ctx.cr6.gt) goto loc_82140F4C;
loc_82140EAC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x82140EB4;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8214102c
	if (ctx.cr0.lt) goto loc_8214102C;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82110e08
	ctx.lr = 0x82140ED4;
	sub_82110E08(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82110e08
	ctx.lr = 0x82140EE8;
	sub_82110E08(ctx, base);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x82140EF8;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8214102c
	if (ctx.cr0.lt) goto loc_8214102C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82140F20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8214102c
	if (ctx.cr0.lt) goto loc_8214102C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x8213f528
	ctx.lr = 0x82140F34;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8214102c
	if (ctx.cr0.lt) goto loc_8214102C;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82140eac
	if (ctx.cr6.lt) goto loc_82140EAC;
loc_82140F4C:
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82141028
	if (!ctx.cr6.gt) goto loc_82141028;
loc_82140F5C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x82140F64;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8214102c
	if (ctx.cr0.lt) goto loc_8214102C;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82110e08
	ctx.lr = 0x82140F84;
	sub_82110E08(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82110e08
	ctx.lr = 0x82140F9C;
	sub_82110E08(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82110e08
	ctx.lr = 0x82140FB0;
	sub_82110E08(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82110e08
	ctx.lr = 0x82140FC4;
	sub_82110E08(ctx, base);
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x82140FD4;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8214102c
	if (ctx.cr0.lt) goto loc_8214102C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,520(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 520);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82140FFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8214102c
	if (ctx.cr0.lt) goto loc_8214102C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x8213f528
	ctx.lr = 0x82141010;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8214102c
	if (ctx.cr0.lt) goto loc_8214102C;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82140f5c
	if (ctx.cr6.lt) goto loc_82140F5C;
loc_82141028:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8214102C:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x822e9914
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82141034"))) PPC_WEAK_FUNC(sub_82141034);
PPC_FUNC_IMPL(__imp__sub_82141034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82141038"))) PPC_WEAK_FUNC(sub_82141038);
PPC_FUNC_IMPL(__imp__sub_82141038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98c0
	ctx.lr = 0x82141040;
	__savegprlr_18(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x82141054;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r20,r11,-1732
	ctx.r20.s64 = ctx.r11.s64 + -1732;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x8213f528
	ctx.lr = 0x82141070;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r19,r11,-1988
	ctx.r19.s64 = ctx.r11.s64 + -1988;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r11,388(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 388);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821410A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r24,r11,-1992
	ctx.r24.s64 = ctx.r11.s64 + -1992;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x8213f528
	ctx.lr = 0x821410C4;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r26,r11,-1916
	ctx.r26.s64 = ctx.r11.s64 + -1916;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r25,r11,-1928
	ctx.r25.s64 = ctx.r11.s64 + -1928;
	// ble cr6,0x82141194
	if (!ctx.cr6.gt) goto loc_82141194;
loc_821410EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x821410F4;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82110e08
	ctx.lr = 0x82141114;
	sub_82110E08(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82110e08
	ctx.lr = 0x82141128;
	sub_82110E08(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x82141138;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,3
	ctx.r8.s64 = 3;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r11,388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82141168;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x8213f528
	ctx.lr = 0x8214117C;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821410ec
	if (ctx.cr6.lt) goto loc_821410EC;
loc_82141194:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x8214119C;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x8213f528
	ctx.lr = 0x821411B0;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r21,r11,-1740
	ctx.r21.s64 = ctx.r11.s64 + -1740;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r11,412(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 412);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821411DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x8213f528
	ctx.lr = 0x821411F0;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r22,r11,-1712
	ctx.r22.s64 = ctx.r11.s64 + -1712;
	// ble cr6,0x821412b8
	if (!ctx.cr6.gt) goto loc_821412B8;
loc_82141210:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x82141218;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82110e08
	ctx.lr = 0x82141238;
	sub_82110E08(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82110e08
	ctx.lr = 0x8214124C;
	sub_82110E08(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x8214125C;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r11,388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214128C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x8213f528
	ctx.lr = 0x821412A0;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82141210
	if (ctx.cr6.lt) goto loc_82141210;
loc_821412B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x821412C0;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x8213f528
	ctx.lr = 0x821412D4;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 408);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821412F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x8213f528
	ctx.lr = 0x8214130C;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x8214131C;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r11,-1692
	ctx.r28.s64 = ctx.r11.s64 + -1692;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8213f528
	ctx.lr = 0x82141338;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,-1660
	ctx.r4.s64 = ctx.r11.s64 + -1660;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,388(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 388);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214136C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x8213f528
	ctx.lr = 0x82141380;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8214141c
	if (!ctx.cr6.gt) goto loc_8214141C;
loc_82141398:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x821413A0;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82110e08
	ctx.lr = 0x821413BC;
	sub_82110E08(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x821413CC;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,496(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 496);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821413F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x8213f528
	ctx.lr = 0x82141404;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82141398
	if (ctx.cr6.lt) goto loc_82141398;
loc_8214141C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x82141424;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x8213f528
	ctx.lr = 0x82141438;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r23,r11,-1700
	ctx.r23.s64 = ctx.r11.s64 + -1700;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lwz r11,468(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 468);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82141464;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x8213f528
	ctx.lr = 0x82141478;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82141510
	if (!ctx.cr6.gt) goto loc_82141510;
loc_82141490:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x82141498;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82110e08
	ctx.lr = 0x821414B4;
	sub_82110E08(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x821414C4;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,504(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 504);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821414E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x8213f528
	ctx.lr = 0x821414F8;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82141490
	if (ctx.cr6.lt) goto loc_82141490;
loc_82141510:
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821415a4
	if (!ctx.cr6.gt) goto loc_821415A4;
loc_82141520:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x82141528;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82110e08
	ctx.lr = 0x82141544;
	sub_82110E08(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x82141554;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,500(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 500);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82141578;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x8213f528
	ctx.lr = 0x8214158C;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82141520
	if (ctx.cr6.lt) goto loc_82141520;
loc_821415A4:
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8214164c
	if (!ctx.cr6.gt) goto loc_8214164C;
loc_821415B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x821415BC;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82110e08
	ctx.lr = 0x821415D8;
	sub_82110E08(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82110e08
	ctx.lr = 0x821415EC;
	sub_82110E08(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x821415FC;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,516(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 516);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82141620;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x8213f528
	ctx.lr = 0x82141634;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821415b4
	if (ctx.cr6.lt) goto loc_821415B4;
loc_8214164C:
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821416dc
	if (!ctx.cr6.gt) goto loc_821416DC;
loc_8214165C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x82141664;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82110e08
	ctx.lr = 0x82141680;
	sub_82110E08(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x82141690;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,508(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 508);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821416B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x8213f528
	ctx.lr = 0x821416C4;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8214165c
	if (ctx.cr6.lt) goto loc_8214165C;
loc_821416DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x821416E4;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x8213f528
	ctx.lr = 0x821416F8;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 392);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82141714;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x8213f528
	ctx.lr = 0x82141728;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821417e8
	if (!ctx.cr6.gt) goto loc_821417E8;
loc_82141740:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x82141748;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82110e08
	ctx.lr = 0x82141768;
	sub_82110E08(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82110e08
	ctx.lr = 0x8214177C;
	sub_82110E08(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x8214178C;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r11,388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821417BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x8213f528
	ctx.lr = 0x821417D0;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82141740
	if (ctx.cr6.lt) goto loc_82141740;
loc_821417E8:
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821347c0
	ctx.lr = 0x821417F8;
	sub_821347C0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lis r4,29600
	ctx.r4.s64 = 1939865600;
	// lwz r11,484(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214181C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,-1940
	ctx.r29.s64 = ctx.r11.s64 + -1940;
	// ble cr6,0x821418d8
	if (!ctx.cr6.gt) goto loc_821418D8;
loc_8214183C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x82141844;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82110e08
	ctx.lr = 0x82141864;
	sub_82110E08(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82110e08
	ctx.lr = 0x82141878;
	sub_82110E08(ctx, base);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x82141888;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,476(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 476);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821418AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x8213f528
	ctx.lr = 0x821418C0;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8214183c
	if (ctx.cr6.lt) goto loc_8214183C;
loc_821418D8:
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82141984
	if (!ctx.cr6.gt) goto loc_82141984;
loc_821418E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x821418F0;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82110e08
	ctx.lr = 0x8214190C;
	sub_82110E08(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82110e08
	ctx.lr = 0x82141920;
	sub_82110E08(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x82141930;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82141958;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x8213f528
	ctx.lr = 0x8214196C;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821418e8
	if (ctx.cr6.lt) goto loc_821418E8;
loc_82141984:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x8214198C;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8213f528
	ctx.lr = 0x821419A0;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lwz r11,388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821419D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x8213f528
	ctx.lr = 0x821419E4;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x821419F4;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1672
	ctx.r4.s64 = ctx.r11.s64 + -1672;
	// bl 0x8213f528
	ctx.lr = 0x82141A0C;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,3
	ctx.r8.s64 = 3;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lwz r11,388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82141A3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x8213f528
	ctx.lr = 0x82141A50;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82141b0c
	if (!ctx.cr6.gt) goto loc_82141B0C;
loc_82141A68:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x82141A70;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82110e08
	ctx.lr = 0x82141A8C;
	sub_82110E08(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82110e08
	ctx.lr = 0x82141AA0;
	sub_82110E08(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x82141AB0;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r11,388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82141AE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x8213f528
	ctx.lr = 0x82141AF4;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82141a68
	if (ctx.cr6.lt) goto loc_82141A68;
loc_82141B0C:
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821347c0
	ctx.lr = 0x82141B1C;
	sub_821347C0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lis r4,29600
	ctx.r4.s64 = 1939865600;
	// lwz r11,484(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82141B40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82141bf4
	if (!ctx.cr6.gt) goto loc_82141BF4;
loc_82141B58:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x82141B60;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82110e08
	ctx.lr = 0x82141B7C;
	sub_82110E08(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82110e08
	ctx.lr = 0x82141B90;
	sub_82110E08(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x82141BA0;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82141BC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x8213f528
	ctx.lr = 0x82141BDC;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82141b58
	if (ctx.cr6.lt) goto loc_82141B58;
loc_82141BF4:
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82141ca0
	if (!ctx.cr6.gt) goto loc_82141CA0;
loc_82141C04:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x82141C0C;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82110e08
	ctx.lr = 0x82141C28;
	sub_82110E08(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82110e08
	ctx.lr = 0x82141C3C;
	sub_82110E08(ctx, base);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x82141C4C;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82141C74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x8213f528
	ctx.lr = 0x82141C88;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82141c04
	if (ctx.cr6.lt) goto loc_82141C04;
loc_82141CA0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x82141CA8;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x8213f528
	ctx.lr = 0x82141CBC;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lwz r11,388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82141CEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x8213f528
	ctx.lr = 0x82141D00;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82141db4
	if (!ctx.cr6.gt) goto loc_82141DB4;
loc_82141D18:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x82141D20;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82110e08
	ctx.lr = 0x82141D3C;
	sub_82110E08(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82110e08
	ctx.lr = 0x82141D50;
	sub_82110E08(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x82141D60;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82141D88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x8213f528
	ctx.lr = 0x82141D9C;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82141d18
	if (ctx.cr6.lt) goto loc_82141D18;
loc_82141DB4:
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82141e6c
	if (!ctx.cr6.gt) goto loc_82141E6C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,-1680
	ctx.r29.s64 = ctx.r11.s64 + -1680;
loc_82141DCC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x82141DD4;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82110e08
	ctx.lr = 0x82141DF4;
	sub_82110E08(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82110e08
	ctx.lr = 0x82141E08;
	sub_82110E08(ctx, base);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x82141E18;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82141E40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x8213f528
	ctx.lr = 0x82141E54;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82141e70
	if (ctx.cr0.lt) goto loc_82141E70;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82141dcc
	if (ctx.cr6.lt) goto loc_82141DCC;
loc_82141E6C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82141E70:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x822e9910
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82141E78"))) PPC_WEAK_FUNC(sub_82141E78);
PPC_FUNC_IMPL(__imp__sub_82141E78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98d8
	ctx.lr = 0x82141E80;
	__savegprlr_24(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// addi r31,r11,-1652
	ctx.r31.s64 = ctx.r11.s64 + -1652;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x822e9fa0
	ctx.lr = 0x82141EB0;
	sub_822E9FA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82141edc
	if (ctx.cr0.eq) goto loc_82141EDC;
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822e9fa0
	ctx.lr = 0x82141EC8;
	sub_822E9FA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82141edc
	if (ctx.cr0.eq) goto loc_82141EDC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,-1712
	ctx.r5.s64 = ctx.r11.s64 + -1712;
	// b 0x82141f28
	goto loc_82141F28;
loc_82141EDC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r31,r11,-1720
	ctx.r31.s64 = ctx.r11.s64 + -1720;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822e9fa0
	ctx.lr = 0x82141EF4;
	sub_822E9FA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82141f20
	if (ctx.cr0.eq) goto loc_82141F20;
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822e9fa0
	ctx.lr = 0x82141F0C;
	sub_822E9FA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82141f20
	if (ctx.cr0.eq) goto loc_82141F20;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,-1928
	ctx.r5.s64 = ctx.r11.s64 + -1928;
	// b 0x82141f28
	goto loc_82141F28;
loc_82141F20:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,-1940
	ctx.r5.s64 = ctx.r11.s64 + -1940;
loc_82141F28:
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821347c0
	ctx.lr = 0x82141F34;
	sub_821347C0(ctx, base);
	// lwz r11,1812(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1812);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r27,r11,-1992
	ctx.r27.s64 = ctx.r11.s64 + -1992;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,-1916
	ctx.r29.s64 = ctx.r11.s64 + -1916;
	// ble cr6,0x82142008
	if (!ctx.cr6.gt) goto loc_82142008;
loc_82141F54:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x82141F5C;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821420ec
	if (ctx.cr0.lt) goto loc_821420EC;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82110e08
	ctx.lr = 0x82141F7C;
	sub_82110E08(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82110e08
	ctx.lr = 0x82141F94;
	sub_82110E08(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82110e08
	ctx.lr = 0x82141FA8;
	sub_82110E08(ctx, base);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8213f528
	ctx.lr = 0x82141FB8;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821420ec
	if (ctx.cr0.lt) goto loc_821420EC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,512(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 512);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82141FDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821420ec
	if (ctx.cr0.lt) goto loc_821420EC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8213f528
	ctx.lr = 0x82141FF0;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821420ec
	if (ctx.cr0.lt) goto loc_821420EC;
	// lwz r11,1812(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1812);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82141f54
	if (ctx.cr6.lt) goto loc_82141F54;
loc_82142008:
	// lwz r11,1812(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1812);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821420e8
	if (!ctx.cr6.gt) goto loc_821420E8;
loc_82142018:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x82142020;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821420ec
	if (ctx.cr0.lt) goto loc_821420EC;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82110e08
	ctx.lr = 0x82142040;
	sub_82110E08(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82110e08
	ctx.lr = 0x82142058;
	sub_82110E08(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82110e08
	ctx.lr = 0x82142070;
	sub_82110E08(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82110e08
	ctx.lr = 0x82142084;
	sub_82110E08(ctx, base);
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8213f528
	ctx.lr = 0x82142094;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821420ec
	if (ctx.cr0.lt) goto loc_821420EC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,520(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 520);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821420BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821420ec
	if (ctx.cr0.lt) goto loc_821420EC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8213f528
	ctx.lr = 0x821420D0;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821420ec
	if (ctx.cr0.lt) goto loc_821420EC;
	// lwz r11,1812(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1812);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82142018
	if (ctx.cr6.lt) goto loc_82142018;
loc_821420E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821420EC:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x822e9928
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821420F4"))) PPC_WEAK_FUNC(sub_821420F4);
PPC_FUNC_IMPL(__imp__sub_821420F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821420F8"))) PPC_WEAK_FUNC(sub_821420F8);
PPC_FUNC_IMPL(__imp__sub_821420F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e0
	ctx.lr = 0x82142100;
	__savegprlr_26(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,5
	ctx.r11.s64 = 5;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwimi r4,r11,29,0,20
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 29) & 0xFFFFF800) | (ctx.r4.u64 & 0xFFFFFFFF000007FF);
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8213f7a0
	ctx.lr = 0x82142128;
	sub_8213F7A0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82110e08
	ctx.lr = 0x82142140;
	sub_82110E08(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r28,r11,-1644
	ctx.r28.s64 = ctx.r11.s64 + -1644;
loc_82142150:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x82142158;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821421a8
	if (ctx.cr0.lt) goto loc_821421A8;
	// lfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stfd f1,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f1.u64);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x82142180;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821421a8
	if (ctx.cr0.lt) goto loc_821421A8;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x82142150
	if (ctx.cr6.lt) goto loc_82142150;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8215bbf0
	ctx.lr = 0x821421A8;
	sub_8215BBF0(ctx, base);
loc_821421A8:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x822e9930
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821421B0"))) PPC_WEAK_FUNC(sub_821421B0);
PPC_FUNC_IMPL(__imp__sub_821421B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82142238
	if (!ctx.cr6.eq) goto loc_82142238;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82142238
	if (!ctx.cr6.eq) goto loc_82142238;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82142238
	if (!ctx.cr6.eq) goto loc_82142238;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82142224
	if (ctx.cr6.lt) goto loc_82142224;
	// beq cr6,0x82142218
	if (ctx.cr6.eq) goto loc_82142218;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8214220c
	if (ctx.cr6.lt) goto loc_8214220C;
	// beq cr6,0x82142200
	if (ctx.cr6.eq) goto loc_82142200;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82142274
	goto loc_82142274;
loc_82142200:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-1556
	ctx.r4.s64 = ctx.r11.s64 + -1556;
	// b 0x8214222c
	goto loc_8214222C;
loc_8214220C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-1572
	ctx.r4.s64 = ctx.r11.s64 + -1572;
	// b 0x8214222c
	goto loc_8214222C;
loc_82142218:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-1588
	ctx.r4.s64 = ctx.r11.s64 + -1588;
	// b 0x8214222c
	goto loc_8214222C;
loc_82142224:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-1604
	ctx.r4.s64 = ctx.r11.s64 + -1604;
loc_8214222C:
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// bl 0x8213f528
	ctx.lr = 0x82142234;
	sub_8213F528(ctx, base);
	// b 0x82142274
	goto loc_82142274;
loc_82142238:
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// or r5,r11,r6
	ctx.r5.u64 = ctx.r11.u64 | ctx.r6.u64;
	// addi r4,r9,-1624
	ctx.r4.s64 = ctx.r9.s64 + -1624;
	// or r9,r5,r7
	ctx.r9.u64 = ctx.r5.u64 | ctx.r7.u64;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// or r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 | ctx.r8.u64;
	// bl 0x8213f528
	ctx.lr = 0x82142274;
	sub_8213F528(ctx, base);
loc_82142274:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82142284"))) PPC_WEAK_FUNC(sub_82142284);
PPC_FUNC_IMPL(__imp__sub_82142284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82142288"))) PPC_WEAK_FUNC(sub_82142288);
PPC_FUNC_IMPL(__imp__sub_82142288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,-1540
	ctx.r4.s64 = ctx.r10.s64 + -1540;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x8213f528
	ctx.lr = 0x821422AC;
	sub_8213F528(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821422BC"))) PPC_WEAK_FUNC(sub_821422BC);
PPC_FUNC_IMPL(__imp__sub_821422BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821422C0"))) PPC_WEAK_FUNC(sub_821422C0);
PPC_FUNC_IMPL(__imp__sub_821422C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,-1524
	ctx.r4.s64 = ctx.r10.s64 + -1524;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x8213f528
	ctx.lr = 0x821422E4;
	sub_8213F528(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821422F4"))) PPC_WEAK_FUNC(sub_821422F4);
PPC_FUNC_IMPL(__imp__sub_821422F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821422F8"))) PPC_WEAK_FUNC(sub_821422F8);
PPC_FUNC_IMPL(__imp__sub_821422F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,-1508
	ctx.r4.s64 = ctx.r10.s64 + -1508;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x8213f528
	ctx.lr = 0x8214231C;
	sub_8213F528(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214232C"))) PPC_WEAK_FUNC(sub_8214232C);
PPC_FUNC_IMPL(__imp__sub_8214232C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82142330"))) PPC_WEAK_FUNC(sub_82142330);
PPC_FUNC_IMPL(__imp__sub_82142330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,-1492
	ctx.r4.s64 = ctx.r10.s64 + -1492;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x8213f528
	ctx.lr = 0x82142354;
	sub_8213F528(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82142364"))) PPC_WEAK_FUNC(sub_82142364);
PPC_FUNC_IMPL(__imp__sub_82142364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82142368"))) PPC_WEAK_FUNC(sub_82142368);
PPC_FUNC_IMPL(__imp__sub_82142368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-1476
	ctx.r4.s64 = ctx.r11.s64 + -1476;
	// bl 0x8213f528
	ctx.lr = 0x82142380;
	sub_8213F528(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82142390"))) PPC_WEAK_FUNC(sub_82142390);
PPC_FUNC_IMPL(__imp__sub_82142390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-1460
	ctx.r4.s64 = ctx.r11.s64 + -1460;
	// bl 0x8213f528
	ctx.lr = 0x821423A8;
	sub_8213F528(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821423B8"))) PPC_WEAK_FUNC(sub_821423B8);
PPC_FUNC_IMPL(__imp__sub_821423B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,-1444
	ctx.r4.s64 = ctx.r10.s64 + -1444;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x8213f528
	ctx.lr = 0x821423E0;
	sub_8213F528(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821423F0"))) PPC_WEAK_FUNC(sub_821423F0);
PPC_FUNC_IMPL(__imp__sub_821423F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,-1424
	ctx.r4.s64 = ctx.r11.s64 + -1424;
	// bl 0x8213f528
	ctx.lr = 0x8214240C;
	sub_8213F528(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214241C"))) PPC_WEAK_FUNC(sub_8214241C);
PPC_FUNC_IMPL(__imp__sub_8214241C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82142420"))) PPC_WEAK_FUNC(sub_82142420);
PPC_FUNC_IMPL(__imp__sub_82142420) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,-1412
	ctx.r4.s64 = ctx.r10.s64 + -1412;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x8213f528
	ctx.lr = 0x82142444;
	sub_8213F528(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82142454"))) PPC_WEAK_FUNC(sub_82142454);
PPC_FUNC_IMPL(__imp__sub_82142454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82142458"))) PPC_WEAK_FUNC(sub_82142458);
PPC_FUNC_IMPL(__imp__sub_82142458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,-1396
	ctx.r4.s64 = ctx.r10.s64 + -1396;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x8213f528
	ctx.lr = 0x8214247C;
	sub_8213F528(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214248C"))) PPC_WEAK_FUNC(sub_8214248C);
PPC_FUNC_IMPL(__imp__sub_8214248C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82142490"))) PPC_WEAK_FUNC(sub_82142490);
PPC_FUNC_IMPL(__imp__sub_82142490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,-1376
	ctx.r4.s64 = ctx.r10.s64 + -1376;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x8213f528
	ctx.lr = 0x821424B4;
	sub_8213F528(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821424C4"))) PPC_WEAK_FUNC(sub_821424C4);
PPC_FUNC_IMPL(__imp__sub_821424C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821424C8"))) PPC_WEAK_FUNC(sub_821424C8);
PPC_FUNC_IMPL(__imp__sub_821424C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,-1360
	ctx.r4.s64 = ctx.r10.s64 + -1360;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x8213f528
	ctx.lr = 0x821424EC;
	sub_8213F528(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821424FC"))) PPC_WEAK_FUNC(sub_821424FC);
PPC_FUNC_IMPL(__imp__sub_821424FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82142500"))) PPC_WEAK_FUNC(sub_82142500);
PPC_FUNC_IMPL(__imp__sub_82142500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,-1340
	ctx.r4.s64 = ctx.r10.s64 + -1340;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x8213f528
	ctx.lr = 0x82142524;
	sub_8213F528(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82142534"))) PPC_WEAK_FUNC(sub_82142534);
PPC_FUNC_IMPL(__imp__sub_82142534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82142538"))) PPC_WEAK_FUNC(sub_82142538);
PPC_FUNC_IMPL(__imp__sub_82142538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,-1320
	ctx.r4.s64 = ctx.r11.s64 + -1320;
	// bl 0x8213f528
	ctx.lr = 0x82142554;
	sub_8213F528(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82142564"))) PPC_WEAK_FUNC(sub_82142564);
PPC_FUNC_IMPL(__imp__sub_82142564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82142568"))) PPC_WEAK_FUNC(sub_82142568);
PPC_FUNC_IMPL(__imp__sub_82142568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,-1304
	ctx.r4.s64 = ctx.r11.s64 + -1304;
	// bl 0x8213f528
	ctx.lr = 0x82142584;
	sub_8213F528(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82142594"))) PPC_WEAK_FUNC(sub_82142594);
PPC_FUNC_IMPL(__imp__sub_82142594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82142598"))) PPC_WEAK_FUNC(sub_82142598);
PPC_FUNC_IMPL(__imp__sub_82142598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,-1288
	ctx.r4.s64 = ctx.r10.s64 + -1288;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x8213f528
	ctx.lr = 0x821425BC;
	sub_8213F528(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821425CC"))) PPC_WEAK_FUNC(sub_821425CC);
PPC_FUNC_IMPL(__imp__sub_821425CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821425D0"))) PPC_WEAK_FUNC(sub_821425D0);
PPC_FUNC_IMPL(__imp__sub_821425D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,-1268
	ctx.r4.s64 = ctx.r11.s64 + -1268;
	// bl 0x8213f528
	ctx.lr = 0x821425EC;
	sub_8213F528(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821425FC"))) PPC_WEAK_FUNC(sub_821425FC);
PPC_FUNC_IMPL(__imp__sub_821425FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82142600"))) PPC_WEAK_FUNC(sub_82142600);
PPC_FUNC_IMPL(__imp__sub_82142600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r4,r11,-1252
	ctx.r4.s64 = ctx.r11.s64 + -1252;
	// bl 0x8213f528
	ctx.lr = 0x8214261C;
	sub_8213F528(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214262C"))) PPC_WEAK_FUNC(sub_8214262C);
PPC_FUNC_IMPL(__imp__sub_8214262C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82142630"))) PPC_WEAK_FUNC(sub_82142630);
PPC_FUNC_IMPL(__imp__sub_82142630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x82142638;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x8214264C;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821426f8
	if (ctx.cr0.lt) goto loc_821426F8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-1120
	ctx.r4.s64 = ctx.r11.s64 + -1120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x82142668;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821426f8
	if (ctx.cr0.lt) goto loc_821426F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x82142678;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821426f8
	if (ctx.cr0.lt) goto loc_821426F8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-1160
	ctx.r4.s64 = ctx.r11.s64 + -1160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x82142694;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821426f8
	if (ctx.cr0.lt) goto loc_821426F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x821426A4;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821426f8
	if (ctx.cr0.lt) goto loc_821426F8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-1188
	ctx.r4.s64 = ctx.r11.s64 + -1188;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x821426C0;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821426f8
	if (ctx.cr0.lt) goto loc_821426F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x821426D0;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821426f8
	if (ctx.cr0.lt) goto loc_821426F8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-1232
	ctx.r4.s64 = ctx.r11.s64 + -1232;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x821426EC;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821426f8
	if (ctx.cr0.lt) goto loc_821426F8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_821426F8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82142700"))) PPC_WEAK_FUNC(sub_82142700);
PPC_FUNC_IMPL(__imp__sub_82142700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x82142708;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x8214271C;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82142824
	if (ctx.cr0.lt) goto loc_82142824;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-908
	ctx.r4.s64 = ctx.r11.s64 + -908;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x82142738;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82142824
	if (ctx.cr0.lt) goto loc_82142824;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x82142748;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82142824
	if (ctx.cr0.lt) goto loc_82142824;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r11,-948
	ctx.r4.s64 = ctx.r11.s64 + -948;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x82142768;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82142824
	if (ctx.cr0.lt) goto loc_82142824;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x82142778;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82142824
	if (ctx.cr0.lt) goto loc_82142824;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-984
	ctx.r4.s64 = ctx.r11.s64 + -984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x82142794;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82142824
	if (ctx.cr0.lt) goto loc_82142824;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x821427A4;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82142824
	if (ctx.cr0.lt) goto loc_82142824;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-1020
	ctx.r4.s64 = ctx.r11.s64 + -1020;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x821427C0;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82142824
	if (ctx.cr0.lt) goto loc_82142824;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x821427D0;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82142824
	if (ctx.cr0.lt) goto loc_82142824;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-1056
	ctx.r4.s64 = ctx.r11.s64 + -1056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x821427EC;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82142824
	if (ctx.cr0.lt) goto loc_82142824;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x821427FC;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82142824
	if (ctx.cr0.lt) goto loc_82142824;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-1092
	ctx.r4.s64 = ctx.r11.s64 + -1092;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x82142818;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82142824
	if (ctx.cr0.lt) goto loc_82142824;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82142824:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214282C"))) PPC_WEAK_FUNC(sub_8214282C);
PPC_FUNC_IMPL(__imp__sub_8214282C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82142830"))) PPC_WEAK_FUNC(sub_82142830);
PPC_FUNC_IMPL(__imp__sub_82142830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// neg r10,r5
	ctx.r10.s64 = -ctx.r5.s64;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// rlwinm r7,r10,2,28,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// addi r4,r11,-824
	ctx.r4.s64 = ctx.r11.s64 + -824;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// bl 0x8213f528
	ctx.lr = 0x82142858;
	sub_8213F528(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82142868"))) PPC_WEAK_FUNC(sub_82142868);
PPC_FUNC_IMPL(__imp__sub_82142868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// neg r10,r5
	ctx.r10.s64 = -ctx.r5.s64;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// clrlwi r7,r10,28
	ctx.r7.u64 = ctx.r10.u32 & 0xF;
	// addi r4,r11,-824
	ctx.r4.s64 = ctx.r11.s64 + -824;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// bl 0x8213f528
	ctx.lr = 0x82142890;
	sub_8213F528(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821428A0"))) PPC_WEAK_FUNC(sub_821428A0);
PPC_FUNC_IMPL(__imp__sub_821428A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,-800
	ctx.r4.s64 = ctx.r10.s64 + -800;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x8213f528
	ctx.lr = 0x821428C4;
	sub_8213F528(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821428D4"))) PPC_WEAK_FUNC(sub_821428D4);
PPC_FUNC_IMPL(__imp__sub_821428D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821428D8"))) PPC_WEAK_FUNC(sub_821428D8);
PPC_FUNC_IMPL(__imp__sub_821428D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,-780
	ctx.r4.s64 = ctx.r10.s64 + -780;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x8213f528
	ctx.lr = 0x821428FC;
	sub_8213F528(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214290C"))) PPC_WEAK_FUNC(sub_8214290C);
PPC_FUNC_IMPL(__imp__sub_8214290C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82142910"))) PPC_WEAK_FUNC(sub_82142910);
PPC_FUNC_IMPL(__imp__sub_82142910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,-760
	ctx.r4.s64 = ctx.r11.s64 + -760;
	// bl 0x8213f528
	ctx.lr = 0x8214292C;
	sub_8213F528(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214293C"))) PPC_WEAK_FUNC(sub_8214293C);
PPC_FUNC_IMPL(__imp__sub_8214293C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82142940"))) PPC_WEAK_FUNC(sub_82142940);
PPC_FUNC_IMPL(__imp__sub_82142940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,-744
	ctx.r4.s64 = ctx.r11.s64 + -744;
	// bl 0x8213f528
	ctx.lr = 0x8214295C;
	sub_8213F528(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214296C"))) PPC_WEAK_FUNC(sub_8214296C);
PPC_FUNC_IMPL(__imp__sub_8214296C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82142970"))) PPC_WEAK_FUNC(sub_82142970);
PPC_FUNC_IMPL(__imp__sub_82142970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,-728
	ctx.r4.s64 = ctx.r10.s64 + -728;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x8213f528
	ctx.lr = 0x82142994;
	sub_8213F528(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821429A4"))) PPC_WEAK_FUNC(sub_821429A4);
PPC_FUNC_IMPL(__imp__sub_821429A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821429A8"))) PPC_WEAK_FUNC(sub_821429A8);
PPC_FUNC_IMPL(__imp__sub_821429A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,-708
	ctx.r4.s64 = ctx.r10.s64 + -708;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x8213f528
	ctx.lr = 0x821429CC;
	sub_8213F528(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821429DC"))) PPC_WEAK_FUNC(sub_821429DC);
PPC_FUNC_IMPL(__imp__sub_821429DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821429E0"))) PPC_WEAK_FUNC(sub_821429E0);
PPC_FUNC_IMPL(__imp__sub_821429E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,-688
	ctx.r4.s64 = ctx.r10.s64 + -688;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x8213f528
	ctx.lr = 0x82142A08;
	sub_8213F528(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82142A18"))) PPC_WEAK_FUNC(sub_82142A18);
PPC_FUNC_IMPL(__imp__sub_82142A18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98c4
	ctx.lr = 0x82142A20;
	__savegprlr_19(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r20,29760
	ctx.r20.s64 = 1950351360;
	// lis r19,29616
	ctx.r19.s64 = 1940914176;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82142b60
	if (!ctx.cr6.gt) goto loc_82142B60;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r28,r11,-604
	ctx.r28.s64 = ctx.r11.s64 + -604;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r27,r11,-616
	ctx.r27.s64 = ctx.r11.s64 + -616;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r26,r11,-628
	ctx.r26.s64 = ctx.r11.s64 + -628;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r25,r11,-640
	ctx.r25.s64 = ctx.r11.s64 + -640;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r24,r11,-1916
	ctx.r24.s64 = ctx.r11.s64 + -1916;
loc_82142A78:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82110e08
	ctx.lr = 0x82142A90;
	sub_82110E08(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82110e08
	ctx.lr = 0x82142AA8;
	sub_82110E08(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82110e08
	ctx.lr = 0x82142AC0;
	sub_82110E08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x82142AC8;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82142be4
	if (ctx.cr0.lt) goto loc_82142BE4;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x82142AE0;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82142be4
	if (ctx.cr0.lt) goto loc_82142BE4;
	// cmplw cr6,r29,r20
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r20.u32, ctx.xer);
	// bgt cr6,0x82142bec
	if (ctx.cr6.gt) goto loc_82142BEC;
	// beq cr6,0x82142b20
	if (ctx.cr6.eq) goto loc_82142B20;
	// lis r11,29584
	ctx.r11.s64 = 1938817024;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82142c10
	if (ctx.cr6.eq) goto loc_82142C10;
	// lis r11,29600
	ctx.r11.s64 = 1939865600;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82142c18
	if (ctx.cr6.eq) goto loc_82142C18;
	// cmplw cr6,r29,r19
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r19.u32, ctx.xer);
	// beq cr6,0x82142b20
	if (ctx.cr6.eq) goto loc_82142B20;
	// lis r11,29632
	ctx.r11.s64 = 1941962752;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82142c20
	if (!ctx.cr6.eq) goto loc_82142C20;
loc_82142B20:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_82142B24:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x82142B2C;
	sub_8213F528(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82142be4
	if (ctx.cr6.lt) goto loc_82142BE4;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x82142B48;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82142be4
	if (ctx.cr0.lt) goto loc_82142BE4;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82142a78
	if (ctx.cr6.lt) goto loc_82142A78;
loc_82142B60:
	// cmplw cr6,r29,r19
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r19.u32, ctx.xer);
	// beq cr6,0x82142b70
	if (ctx.cr6.eq) goto loc_82142B70;
	// cmplw cr6,r29,r20
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r20.u32, ctx.xer);
	// bne cr6,0x82142be0
	if (!ctx.cr6.eq) goto loc_82142BE0;
loc_82142B70:
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82142be0
	if (!ctx.cr6.gt) goto loc_82142BE0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,-664
	ctx.r29.s64 = ctx.r11.s64 + -664;
loc_82142B88:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82110e08
	ctx.lr = 0x82142BA0;
	sub_82110E08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x82142BA8;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82142be4
	if (ctx.cr0.lt) goto loc_82142BE4;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x82142BC8;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82142be4
	if (ctx.cr0.lt) goto loc_82142BE4;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82142b88
	if (ctx.cr6.lt) goto loc_82142B88;
loc_82142BE0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82142BE4:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x822e9914
	__restgprlr_19(ctx, base);
	return;
loc_82142BEC:
	// lis r11,29776
	ctx.r11.s64 = 1951399936;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82142b20
	if (ctx.cr6.eq) goto loc_82142B20;
	// lis r11,29792
	ctx.r11.s64 = 1952448512;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82142c18
	if (ctx.cr6.eq) goto loc_82142C18;
	// lis r11,29808
	ctx.r11.s64 = 1953497088;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82142c20
	if (!ctx.cr6.eq) goto loc_82142C20;
loc_82142C10:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// b 0x82142b24
	goto loc_82142B24;
loc_82142C18:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// b 0x82142b24
	goto loc_82142B24;
loc_82142C20:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82142be4
	goto loc_82142BE4;
}

__attribute__((alias("__imp__sub_82142C2C"))) PPC_WEAK_FUNC(sub_82142C2C);
PPC_FUNC_IMPL(__imp__sub_82142C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82142C30"))) PPC_WEAK_FUNC(sub_82142C30);
PPC_FUNC_IMPL(__imp__sub_82142C30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x82142C38;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x82142C4C;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82142c6c
	if (ctx.cr0.lt) goto loc_82142C6C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r11,-592
	ctx.r4.s64 = ctx.r11.s64 + -592;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x82142C6C;
	sub_8213F528(ctx, base);
loc_82142C6C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82142C74"))) PPC_WEAK_FUNC(sub_82142C74);
PPC_FUNC_IMPL(__imp__sub_82142C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82142C78"))) PPC_WEAK_FUNC(sub_82142C78);
PPC_FUNC_IMPL(__imp__sub_82142C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-552
	ctx.r4.s64 = ctx.r11.s64 + -552;
	// bl 0x8213f528
	ctx.lr = 0x82142C90;
	sub_8213F528(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82142CA0"))) PPC_WEAK_FUNC(sub_82142CA0);
PPC_FUNC_IMPL(__imp__sub_82142CA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98dc
	ctx.lr = 0x82142CA8;
	__savegprlr_25(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x82142CBC;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82142e00
	if (ctx.cr0.lt) goto loc_82142E00;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1732
	ctx.r4.s64 = ctx.r11.s64 + -1732;
	// bl 0x8213f528
	ctx.lr = 0x82142CD4;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82142e00
	if (ctx.cr0.lt) goto loc_82142E00;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,-1660
	ctx.r4.s64 = ctx.r11.s64 + -1660;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,388(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 388);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82142D08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82142e00
	if (ctx.cr0.lt) goto loc_82142E00;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r27,r11,-1992
	ctx.r27.s64 = ctx.r11.s64 + -1992;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8213f528
	ctx.lr = 0x82142D24;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82142e00
	if (ctx.cr0.lt) goto loc_82142E00;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82142dfc
	if (!ctx.cr6.gt) goto loc_82142DFC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,-1740
	ctx.r29.s64 = ctx.r11.s64 + -1740;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r28,r11,-1916
	ctx.r28.s64 = ctx.r11.s64 + -1916;
loc_82142D4C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x82142D54;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82142e00
	if (ctx.cr0.lt) goto loc_82142E00;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82110e08
	ctx.lr = 0x82142D74;
	sub_82110E08(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82110e08
	ctx.lr = 0x82142D8C;
	sub_82110E08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x82142D94;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82142e00
	if (ctx.cr0.lt) goto loc_82142E00;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x82142DAC;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82142e00
	if (ctx.cr0.lt) goto loc_82142E00;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,468(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 468);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82142DD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82142e00
	if (ctx.cr0.lt) goto loc_82142E00;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8213f528
	ctx.lr = 0x82142DE4;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82142e00
	if (ctx.cr0.lt) goto loc_82142E00;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82142d4c
	if (ctx.cr6.lt) goto loc_82142D4C;
loc_82142DFC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82142E00:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822e992c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82142E08"))) PPC_WEAK_FUNC(sub_82142E08);
PPC_FUNC_IMPL(__imp__sub_82142E08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98d0
	ctx.lr = 0x82142E10;
	__savegprlr_22(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x82142E24;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8214330c
	if (ctx.cr0.lt) goto loc_8214330C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1732
	ctx.r4.s64 = ctx.r11.s64 + -1732;
	// bl 0x8213f528
	ctx.lr = 0x82142E3C;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8214330c
	if (ctx.cr0.lt) goto loc_8214330C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r4,r11,-1988
	ctx.r4.s64 = ctx.r11.s64 + -1988;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r11,388(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 388);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82142E70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8214330c
	if (ctx.cr0.lt) goto loc_8214330C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1992
	ctx.r4.s64 = ctx.r11.s64 + -1992;
	// bl 0x8213f528
	ctx.lr = 0x82142E88;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8214330c
	if (ctx.cr0.lt) goto loc_8214330C;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r23,r11,-396
	ctx.r23.s64 = ctx.r11.s64 + -396;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r25,r11,-1928
	ctx.r25.s64 = ctx.r11.s64 + -1928;
	// ble cr6,0x82142f18
	if (!ctx.cr6.gt) goto loc_82142F18;
loc_82142EB0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x82142EB8;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8214330c
	if (ctx.cr0.lt) goto loc_8214330C;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82110e08
	ctx.lr = 0x82142ED8;
	sub_82110E08(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82110e08
	ctx.lr = 0x82142EEC;
	sub_82110E08(ctx, base);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x82142F00;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8214330c
	if (ctx.cr0.lt) goto loc_8214330C;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82142eb0
	if (ctx.cr6.lt) goto loc_82142EB0;
loc_82142F18:
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,-428
	ctx.r29.s64 = ctx.r11.s64 + -428;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r28,r11,-1740
	ctx.r28.s64 = ctx.r11.s64 + -1740;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r26,r11,-1712
	ctx.r26.s64 = ctx.r11.s64 + -1712;
	// ble cr6,0x82142fc4
	if (!ctx.cr6.gt) goto loc_82142FC4;
loc_82142F40:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x82142F48;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8214330c
	if (ctx.cr0.lt) goto loc_8214330C;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82110e08
	ctx.lr = 0x82142F68;
	sub_82110E08(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82110e08
	ctx.lr = 0x82142F7C;
	sub_82110E08(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82110e08
	ctx.lr = 0x82142F90;
	sub_82110E08(ctx, base);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x82142FAC;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8214330c
	if (ctx.cr0.lt) goto loc_8214330C;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82142f40
	if (ctx.cr6.lt) goto loc_82142F40;
loc_82142FC4:
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r27,r11,-460
	ctx.r27.s64 = ctx.r11.s64 + -460;
	// ble cr6,0x82143048
	if (!ctx.cr6.gt) goto loc_82143048;
loc_82142FDC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x82142FE4;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8214330c
	if (ctx.cr0.lt) goto loc_8214330C;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82110e08
	ctx.lr = 0x82143000;
	sub_82110E08(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82110e08
	ctx.lr = 0x82143014;
	sub_82110E08(ctx, base);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x82143030;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8214330c
	if (ctx.cr0.lt) goto loc_8214330C;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82142fdc
	if (ctx.cr6.lt) goto loc_82142FDC;
loc_82143048:
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821430dc
	if (!ctx.cr6.gt) goto loc_821430DC;
loc_82143058:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x82143060;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8214330c
	if (ctx.cr0.lt) goto loc_8214330C;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82110e08
	ctx.lr = 0x82143080;
	sub_82110E08(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82110e08
	ctx.lr = 0x82143094;
	sub_82110E08(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82110e08
	ctx.lr = 0x821430A8;
	sub_82110E08(ctx, base);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x821430C4;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8214330c
	if (ctx.cr0.lt) goto loc_8214330C;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82143058
	if (ctx.cr6.lt) goto loc_82143058;
loc_821430DC:
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82143158
	if (!ctx.cr6.gt) goto loc_82143158;
loc_821430EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x821430F4;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8214330c
	if (ctx.cr0.lt) goto loc_8214330C;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82110e08
	ctx.lr = 0x82143110;
	sub_82110E08(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82110e08
	ctx.lr = 0x82143124;
	sub_82110E08(ctx, base);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x82143140;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8214330c
	if (ctx.cr0.lt) goto loc_8214330C;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821430ec
	if (ctx.cr6.lt) goto loc_821430EC;
loc_82143158:
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821431d8
	if (!ctx.cr6.gt) goto loc_821431D8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,-488
	ctx.r29.s64 = ctx.r11.s64 + -488;
loc_82143170:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x82143178;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8214330c
	if (ctx.cr0.lt) goto loc_8214330C;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82110e08
	ctx.lr = 0x82143194;
	sub_82110E08(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82110e08
	ctx.lr = 0x821431A8;
	sub_82110E08(ctx, base);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x821431C0;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8214330c
	if (ctx.cr0.lt) goto loc_8214330C;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82143170
	if (ctx.cr6.lt) goto loc_82143170;
loc_821431D8:
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r28,r11,-1940
	ctx.r28.s64 = ctx.r11.s64 + -1940;
	// ble cr6,0x82143258
	if (!ctx.cr6.gt) goto loc_82143258;
loc_821431F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x821431F8;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8214330c
	if (ctx.cr0.lt) goto loc_8214330C;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82110e08
	ctx.lr = 0x82143218;
	sub_82110E08(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82110e08
	ctx.lr = 0x8214322C;
	sub_82110E08(ctx, base);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x82143240;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8214330c
	if (ctx.cr0.lt) goto loc_8214330C;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821431f0
	if (ctx.cr6.lt) goto loc_821431F0;
loc_82143258:
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82143308
	if (!ctx.cr6.gt) goto loc_82143308;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,-516
	ctx.r29.s64 = ctx.r11.s64 + -516;
loc_82143270:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x82143278;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8214330c
	if (ctx.cr0.lt) goto loc_8214330C;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82110e08
	ctx.lr = 0x82143298;
	sub_82110E08(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82110e08
	ctx.lr = 0x821432AC;
	sub_82110E08(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82110e08
	ctx.lr = 0x821432C0;
	sub_82110E08(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82110e08
	ctx.lr = 0x821432D4;
	sub_82110E08(ctx, base);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x821432F0;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8214330c
	if (ctx.cr0.lt) goto loc_8214330C;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82143270
	if (ctx.cr6.lt) goto loc_82143270;
loc_82143308:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8214330C:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x822e9920
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82143314"))) PPC_WEAK_FUNC(sub_82143314);
PPC_FUNC_IMPL(__imp__sub_82143314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82143318"))) PPC_WEAK_FUNC(sub_82143318);
PPC_FUNC_IMPL(__imp__sub_82143318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e0
	ctx.lr = 0x82143320;
	__savegprlr_26(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,1812(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1812);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r27,r11,-1928
	ctx.r27.s64 = ctx.r11.s64 + -1928;
	// ble cr6,0x821433b8
	if (!ctx.cr6.gt) goto loc_821433B8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,-348
	ctx.r29.s64 = ctx.r11.s64 + -348;
loc_82143350:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x82143358;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82143458
	if (ctx.cr0.lt) goto loc_82143458;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82110e08
	ctx.lr = 0x82143378;
	sub_82110E08(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82110e08
	ctx.lr = 0x8214338C;
	sub_82110E08(ctx, base);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8213f528
	ctx.lr = 0x821433A0;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82143458
	if (ctx.cr0.lt) goto loc_82143458;
	// lwz r11,1812(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1812);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82143350
	if (ctx.cr6.lt) goto loc_82143350;
loc_821433B8:
	// lwz r11,1812(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1812);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82143454
	if (!ctx.cr6.gt) goto loc_82143454;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,-376
	ctx.r29.s64 = ctx.r11.s64 + -376;
loc_821433D0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x821433D8;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82143458
	if (ctx.cr0.lt) goto loc_82143458;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82110e08
	ctx.lr = 0x821433F8;
	sub_82110E08(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82110e08
	ctx.lr = 0x82143410;
	sub_82110E08(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82110e08
	ctx.lr = 0x82143424;
	sub_82110E08(ctx, base);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8213f528
	ctx.lr = 0x8214343C;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82143458
	if (ctx.cr0.lt) goto loc_82143458;
	// lwz r11,1812(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1812);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821433d0
	if (ctx.cr6.lt) goto loc_821433D0;
loc_82143454:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82143458:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x822e9930
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82143460"))) PPC_WEAK_FUNC(sub_82143460);
PPC_FUNC_IMPL(__imp__sub_82143460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98d8
	ctx.lr = 0x82143468;
	__savegprlr_24(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x8214347C;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821437d4
	if (ctx.cr0.lt) goto loc_821437D4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-276
	ctx.r4.s64 = ctx.r11.s64 + -276;
	// bl 0x8213f528
	ctx.lr = 0x82143494;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821437d4
	if (ctx.cr0.lt) goto loc_821437D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x821434A4;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821437d4
	if (ctx.cr0.lt) goto loc_821437D4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1732
	ctx.r4.s64 = ctx.r11.s64 + -1732;
	// bl 0x8213f528
	ctx.lr = 0x821434BC;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821437d4
	if (ctx.cr0.lt) goto loc_821437D4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r25,r11,-1740
	ctx.r25.s64 = ctx.r11.s64 + -1740;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r11,408(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 408);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821434E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821437d4
	if (ctx.cr0.lt) goto loc_821437D4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1992
	ctx.r4.s64 = ctx.r11.s64 + -1992;
	// bl 0x8213f528
	ctx.lr = 0x82143500;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821437d4
	if (ctx.cr0.lt) goto loc_821437D4;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r26,r11,-1928
	ctx.r26.s64 = ctx.r11.s64 + -1928;
	// ble cr6,0x82143590
	if (!ctx.cr6.gt) goto loc_82143590;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,-300
	ctx.r29.s64 = ctx.r11.s64 + -300;
loc_82143528:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x82143530;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821437d4
	if (ctx.cr0.lt) goto loc_821437D4;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82110e08
	ctx.lr = 0x82143550;
	sub_82110E08(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82110e08
	ctx.lr = 0x82143564;
	sub_82110E08(ctx, base);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x82143578;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821437d4
	if (ctx.cr0.lt) goto loc_821437D4;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82143528
	if (ctx.cr6.lt) goto loc_82143528;
loc_82143590:
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,-328
	ctx.r29.s64 = ctx.r11.s64 + -328;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r27,r11,-1712
	ctx.r27.s64 = ctx.r11.s64 + -1712;
	// ble cr6,0x8214361c
	if (!ctx.cr6.gt) goto loc_8214361C;
loc_821435B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x821435B8;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821437d4
	if (ctx.cr0.lt) goto loc_821437D4;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82110e08
	ctx.lr = 0x821435D8;
	sub_82110E08(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82110e08
	ctx.lr = 0x821435EC;
	sub_82110E08(ctx, base);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x82143604;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821437d4
	if (ctx.cr0.lt) goto loc_821437D4;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821435b0
	if (ctx.cr6.lt) goto loc_821435B0;
loc_8214361C:
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r28,r11,-1940
	ctx.r28.s64 = ctx.r11.s64 + -1940;
	// ble cr6,0x8214369c
	if (!ctx.cr6.gt) goto loc_8214369C;
loc_82143634:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x8214363C;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821437d4
	if (ctx.cr0.lt) goto loc_821437D4;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82110e08
	ctx.lr = 0x82143658;
	sub_82110E08(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82110e08
	ctx.lr = 0x8214366C;
	sub_82110E08(ctx, base);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x82143684;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821437d4
	if (ctx.cr0.lt) goto loc_821437D4;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82143634
	if (ctx.cr6.lt) goto loc_82143634;
loc_8214369C:
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82143734
	if (!ctx.cr6.gt) goto loc_82143734;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,-428
	ctx.r29.s64 = ctx.r11.s64 + -428;
loc_821436B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x821436BC;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821437d4
	if (ctx.cr0.lt) goto loc_821437D4;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82110e08
	ctx.lr = 0x821436D8;
	sub_82110E08(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82110e08
	ctx.lr = 0x821436EC;
	sub_82110E08(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82110e08
	ctx.lr = 0x82143700;
	sub_82110E08(ctx, base);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x8214371C;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821437d4
	if (ctx.cr0.lt) goto loc_821437D4;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821436b4
	if (ctx.cr6.lt) goto loc_821436B4;
loc_82143734:
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821437d0
	if (!ctx.cr6.gt) goto loc_821437D0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,-460
	ctx.r29.s64 = ctx.r11.s64 + -460;
loc_8214374C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x82143754;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821437d4
	if (ctx.cr0.lt) goto loc_821437D4;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82110e08
	ctx.lr = 0x82143774;
	sub_82110E08(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82110e08
	ctx.lr = 0x82143788;
	sub_82110E08(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82110e08
	ctx.lr = 0x8214379C;
	sub_82110E08(ctx, base);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x821437B8;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821437d4
	if (ctx.cr0.lt) goto loc_821437D4;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8214374c
	if (ctx.cr6.lt) goto loc_8214374C;
loc_821437D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821437D4:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x822e9928
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821437DC"))) PPC_WEAK_FUNC(sub_821437DC);
PPC_FUNC_IMPL(__imp__sub_821437DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821437E0"))) PPC_WEAK_FUNC(sub_821437E0);
PPC_FUNC_IMPL(__imp__sub_821437E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98dc
	ctx.lr = 0x821437E8;
	__savegprlr_25(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x821437FC;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82143940
	if (ctx.cr0.lt) goto loc_82143940;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1732
	ctx.r4.s64 = ctx.r11.s64 + -1732;
	// bl 0x8213f528
	ctx.lr = 0x82143814;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82143940
	if (ctx.cr0.lt) goto loc_82143940;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,-1660
	ctx.r4.s64 = ctx.r11.s64 + -1660;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r11,388(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 388);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82143848;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82143940
	if (ctx.cr0.lt) goto loc_82143940;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r27,r11,-1992
	ctx.r27.s64 = ctx.r11.s64 + -1992;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8213f528
	ctx.lr = 0x82143864;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82143940
	if (ctx.cr0.lt) goto loc_82143940;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8214393c
	if (!ctx.cr6.gt) goto loc_8214393C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,-1740
	ctx.r29.s64 = ctx.r11.s64 + -1740;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r28,r11,-1916
	ctx.r28.s64 = ctx.r11.s64 + -1916;
loc_8214388C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x82143894;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82143940
	if (ctx.cr0.lt) goto loc_82143940;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82110e08
	ctx.lr = 0x821438B4;
	sub_82110E08(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82110e08
	ctx.lr = 0x821438CC;
	sub_82110E08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x821438D4;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82143940
	if (ctx.cr0.lt) goto loc_82143940;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x821438EC;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82143940
	if (ctx.cr0.lt) goto loc_82143940;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,456(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 456);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82143910;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82143940
	if (ctx.cr0.lt) goto loc_82143940;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8213f528
	ctx.lr = 0x82143924;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82143940
	if (ctx.cr0.lt) goto loc_82143940;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8214388c
	if (ctx.cr6.lt) goto loc_8214388C;
loc_8214393C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82143940:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822e992c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82143948"))) PPC_WEAK_FUNC(sub_82143948);
PPC_FUNC_IMPL(__imp__sub_82143948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98cc
	ctx.lr = 0x82143950;
	__savegprlr_21(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x82143964;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82143f50
	if (ctx.cr0.lt) goto loc_82143F50;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-276
	ctx.r4.s64 = ctx.r11.s64 + -276;
	// bl 0x8213f528
	ctx.lr = 0x8214397C;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82143f50
	if (ctx.cr0.lt) goto loc_82143F50;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r26,r11,-208
	ctx.r26.s64 = ctx.r11.s64 + -208;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r25,r11,-1928
	ctx.r25.s64 = ctx.r11.s64 + -1928;
	// ble cr6,0x82143a10
	if (!ctx.cr6.gt) goto loc_82143A10;
loc_821439A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x821439AC;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82143f50
	if (ctx.cr0.lt) goto loc_82143F50;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82110e08
	ctx.lr = 0x821439CC;
	sub_82110E08(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82110e08
	ctx.lr = 0x821439E0;
	sub_82110E08(ctx, base);
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x821439F8;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82143f50
	if (ctx.cr0.lt) goto loc_82143F50;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821439a4
	if (ctx.cr6.lt) goto loc_821439A4;
loc_82143A10:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x82143A18;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82143f50
	if (ctx.cr0.lt) goto loc_82143F50;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1732
	ctx.r4.s64 = ctx.r11.s64 + -1732;
	// bl 0x8213f528
	ctx.lr = 0x82143A30;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82143f50
	if (ctx.cr0.lt) goto loc_82143F50;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r23,r11,-1740
	ctx.r23.s64 = ctx.r11.s64 + -1740;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r11,408(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 408);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82143A5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82143f50
	if (ctx.cr0.lt) goto loc_82143F50;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1992
	ctx.r4.s64 = ctx.r11.s64 + -1992;
	// bl 0x8213f528
	ctx.lr = 0x82143A74;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82143f50
	if (ctx.cr0.lt) goto loc_82143F50;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r24,r11,-1712
	ctx.r24.s64 = ctx.r11.s64 + -1712;
	// ble cr6,0x82143b00
	if (!ctx.cr6.gt) goto loc_82143B00;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,-300
	ctx.r29.s64 = ctx.r11.s64 + -300;
loc_82143A9C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x82143AA4;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82143f50
	if (ctx.cr0.lt) goto loc_82143F50;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82110e08
	ctx.lr = 0x82143AC0;
	sub_82110E08(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82110e08
	ctx.lr = 0x82143AD4;
	sub_82110E08(ctx, base);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x82143AE8;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82143f50
	if (ctx.cr0.lt) goto loc_82143F50;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82143a9c
	if (ctx.cr6.lt) goto loc_82143A9C;
loc_82143B00:
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r27,r11,-328
	ctx.r27.s64 = ctx.r11.s64 + -328;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r28,r11,-220
	ctx.r28.s64 = ctx.r11.s64 + -220;
	// ble cr6,0x82143b88
	if (!ctx.cr6.gt) goto loc_82143B88;
loc_82143B20:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x82143B28;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82143f50
	if (ctx.cr0.lt) goto loc_82143F50;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82110e08
	ctx.lr = 0x82143B44;
	sub_82110E08(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82110e08
	ctx.lr = 0x82143B58;
	sub_82110E08(ctx, base);
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x82143B70;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82143f50
	if (ctx.cr0.lt) goto loc_82143F50;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82143b20
	if (ctx.cr6.lt) goto loc_82143B20;
loc_82143B88:
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82143bec
	if (!ctx.cr6.gt) goto loc_82143BEC;
loc_82143B98:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x82143BA0;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82143f50
	if (ctx.cr0.lt) goto loc_82143F50;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82110e08
	ctx.lr = 0x82143BBC;
	sub_82110E08(ctx, base);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x82143BD4;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82143f50
	if (ctx.cr0.lt) goto loc_82143F50;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82143b98
	if (ctx.cr6.lt) goto loc_82143B98;
loc_82143BEC:
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82143c70
	if (!ctx.cr6.gt) goto loc_82143C70;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,-428
	ctx.r29.s64 = ctx.r11.s64 + -428;
loc_82143C04:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x82143C0C;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82143f50
	if (ctx.cr0.lt) goto loc_82143F50;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82110e08
	ctx.lr = 0x82143C28;
	sub_82110E08(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82110e08
	ctx.lr = 0x82143C3C;
	sub_82110E08(ctx, base);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x82143C58;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82143f50
	if (ctx.cr0.lt) goto loc_82143F50;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82143c04
	if (ctx.cr6.lt) goto loc_82143C04;
loc_82143C70:
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82143cec
	if (!ctx.cr6.gt) goto loc_82143CEC;
loc_82143C80:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x82143C88;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82143f50
	if (ctx.cr0.lt) goto loc_82143F50;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82110e08
	ctx.lr = 0x82143CA8;
	sub_82110E08(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82110e08
	ctx.lr = 0x82143CBC;
	sub_82110E08(ctx, base);
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x82143CD4;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82143f50
	if (ctx.cr0.lt) goto loc_82143F50;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82143c80
	if (ctx.cr6.lt) goto loc_82143C80;
loc_82143CEC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x82143CF4;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82143f50
	if (ctx.cr0.lt) goto loc_82143F50;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-248
	ctx.r4.s64 = ctx.r11.s64 + -248;
	// bl 0x8213f528
	ctx.lr = 0x82143D0C;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82143f50
	if (ctx.cr0.lt) goto loc_82143F50;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82143d98
	if (!ctx.cr6.gt) goto loc_82143D98;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,-460
	ctx.r29.s64 = ctx.r11.s64 + -460;
loc_82143D2C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x82143D34;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82143f50
	if (ctx.cr0.lt) goto loc_82143F50;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82110e08
	ctx.lr = 0x82143D50;
	sub_82110E08(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82110e08
	ctx.lr = 0x82143D64;
	sub_82110E08(ctx, base);
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x82143D80;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82143f50
	if (ctx.cr0.lt) goto loc_82143F50;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82143d2c
	if (ctx.cr6.lt) goto loc_82143D2C;
loc_82143D98:
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82143e14
	if (!ctx.cr6.gt) goto loc_82143E14;
loc_82143DA8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x82143DB0;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82143f50
	if (ctx.cr0.lt) goto loc_82143F50;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82110e08
	ctx.lr = 0x82143DD0;
	sub_82110E08(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82110e08
	ctx.lr = 0x82143DE4;
	sub_82110E08(ctx, base);
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x82143DFC;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82143f50
	if (ctx.cr0.lt) goto loc_82143F50;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82143da8
	if (ctx.cr6.lt) goto loc_82143DA8;
loc_82143E14:
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r28,r11,-1940
	ctx.r28.s64 = ctx.r11.s64 + -1940;
	// ble cr6,0x82143e9c
	if (!ctx.cr6.gt) goto loc_82143E9C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,-488
	ctx.r29.s64 = ctx.r11.s64 + -488;
loc_82143E34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x82143E3C;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82143f50
	if (ctx.cr0.lt) goto loc_82143F50;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82110e08
	ctx.lr = 0x82143E58;
	sub_82110E08(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82110e08
	ctx.lr = 0x82143E6C;
	sub_82110E08(ctx, base);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x82143E84;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82143f50
	if (ctx.cr0.lt) goto loc_82143F50;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82143e34
	if (ctx.cr6.lt) goto loc_82143E34;
loc_82143E9C:
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82143f4c
	if (!ctx.cr6.gt) goto loc_82143F4C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,-516
	ctx.r29.s64 = ctx.r11.s64 + -516;
loc_82143EB4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x82143EBC;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82143f50
	if (ctx.cr0.lt) goto loc_82143F50;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82110e08
	ctx.lr = 0x82143EDC;
	sub_82110E08(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82110e08
	ctx.lr = 0x82143EF0;
	sub_82110E08(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82110e08
	ctx.lr = 0x82143F04;
	sub_82110E08(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82110e08
	ctx.lr = 0x82143F18;
	sub_82110E08(ctx, base);
	// addi r8,r1,256
	ctx.r8.s64 = ctx.r1.s64 + 256;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x82143F34;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82143f50
	if (ctx.cr0.lt) goto loc_82143F50;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82143eb4
	if (ctx.cr6.lt) goto loc_82143EB4;
loc_82143F4C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82143F50:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x822e991c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82143F58"))) PPC_WEAK_FUNC(sub_82143F58);
PPC_FUNC_IMPL(__imp__sub_82143F58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x82143F60;
	__savegprlr_29(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x82143F74;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82144010
	if (ctx.cr0.lt) goto loc_82144010;
	// li r11,5
	ctx.r11.s64 = 5;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwimi r4,r11,29,0,20
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 29) & 0xFFFFF800) | (ctx.r4.u64 & 0xFFFFFFFF000007FF);
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8213f7a0
	ctx.lr = 0x82143F9C;
	sub_8213F7A0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82110e08
	ctx.lr = 0x82143FB4;
	sub_82110E08(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f4,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lfs f3,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// addi r4,r11,-180
	ctx.r4.s64 = ctx.r11.s64 + -180;
	// lfs f2,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// stfd f4,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.f4.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 64);
	// stfd f3,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f3.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// stfd f2,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f2.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x8213f528
	ctx.lr = 0x82143FF8;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82144010
	if (ctx.cr0.lt) goto loc_82144010;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8215bbf0
	ctx.lr = 0x82144010;
	sub_8215BBF0(ctx, base);
loc_82144010:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82144018"))) PPC_WEAK_FUNC(sub_82144018);
PPC_FUNC_IMPL(__imp__sub_82144018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x821440a0
	if (!ctx.cr6.eq) goto loc_821440A0;
	// cmplw cr6,r5,r7
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x821440a0
	if (!ctx.cr6.eq) goto loc_821440A0;
	// cmplw cr6,r5,r9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x821440a0
	if (!ctx.cr6.eq) goto loc_821440A0;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// blt cr6,0x8214408c
	if (ctx.cr6.lt) goto loc_8214408C;
	// beq cr6,0x82144080
	if (ctx.cr6.eq) goto loc_82144080;
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// blt cr6,0x82144074
	if (ctx.cr6.lt) goto loc_82144074;
	// beq cr6,0x82144068
	if (ctx.cr6.eq) goto loc_82144068;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x821440bc
	goto loc_821440BC;
loc_82144068:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r10,-48
	ctx.r4.s64 = ctx.r10.s64 + -48;
	// b 0x82144094
	goto loc_82144094;
loc_82144074:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r10,-68
	ctx.r4.s64 = ctx.r10.s64 + -68;
	// b 0x82144094
	goto loc_82144094;
loc_82144080:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r10,-88
	ctx.r4.s64 = ctx.r10.s64 + -88;
	// b 0x82144094
	goto loc_82144094;
loc_8214408C:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r10,-108
	ctx.r4.s64 = ctx.r10.s64 + -108;
loc_82144094:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x8213f528
	ctx.lr = 0x8214409C;
	sub_8213F528(ctx, base);
	// b 0x821440bc
	goto loc_821440BC;
loc_821440A0:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,-144
	ctx.r4.s64 = ctx.r10.s64 + -144;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x8213f528
	ctx.lr = 0x821440BC;
	sub_8213F528(ctx, base);
loc_821440BC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821440CC"))) PPC_WEAK_FUNC(sub_821440CC);
PPC_FUNC_IMPL(__imp__sub_821440CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821440D0"))) PPC_WEAK_FUNC(sub_821440D0);
PPC_FUNC_IMPL(__imp__sub_821440D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,-28
	ctx.r4.s64 = ctx.r10.s64 + -28;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x8213f528
	ctx.lr = 0x821440F4;
	sub_8213F528(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82144104"))) PPC_WEAK_FUNC(sub_82144104);
PPC_FUNC_IMPL(__imp__sub_82144104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82144108"))) PPC_WEAK_FUNC(sub_82144108);
PPC_FUNC_IMPL(__imp__sub_82144108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,-4
	ctx.r4.s64 = ctx.r10.s64 + -4;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x8213f528
	ctx.lr = 0x8214412C;
	sub_8213F528(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214413C"))) PPC_WEAK_FUNC(sub_8214413C);
PPC_FUNC_IMPL(__imp__sub_8214413C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82144140"))) PPC_WEAK_FUNC(sub_82144140);
PPC_FUNC_IMPL(__imp__sub_82144140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,20
	ctx.r4.s64 = ctx.r10.s64 + 20;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x8213f528
	ctx.lr = 0x82144164;
	sub_8213F528(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82144174"))) PPC_WEAK_FUNC(sub_82144174);
PPC_FUNC_IMPL(__imp__sub_82144174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82144178"))) PPC_WEAK_FUNC(sub_82144178);
PPC_FUNC_IMPL(__imp__sub_82144178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,44
	ctx.r4.s64 = ctx.r10.s64 + 44;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x8213f528
	ctx.lr = 0x8214419C;
	sub_8213F528(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821441AC"))) PPC_WEAK_FUNC(sub_821441AC);
PPC_FUNC_IMPL(__imp__sub_821441AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821441B0"))) PPC_WEAK_FUNC(sub_821441B0);
PPC_FUNC_IMPL(__imp__sub_821441B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,68
	ctx.r4.s64 = ctx.r11.s64 + 68;
	// bl 0x8213f528
	ctx.lr = 0x821441C8;
	sub_8213F528(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821441D8"))) PPC_WEAK_FUNC(sub_821441D8);
PPC_FUNC_IMPL(__imp__sub_821441D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,84
	ctx.r4.s64 = ctx.r11.s64 + 84;
	// bl 0x8213f528
	ctx.lr = 0x821441F0;
	sub_8213F528(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82144200"))) PPC_WEAK_FUNC(sub_82144200);
PPC_FUNC_IMPL(__imp__sub_82144200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,104
	ctx.r4.s64 = ctx.r10.s64 + 104;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x8213f528
	ctx.lr = 0x82144228;
	sub_8213F528(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82144238"))) PPC_WEAK_FUNC(sub_82144238);
PPC_FUNC_IMPL(__imp__sub_82144238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,132
	ctx.r4.s64 = ctx.r11.s64 + 132;
	// bl 0x8213f528
	ctx.lr = 0x82144254;
	sub_8213F528(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82144264"))) PPC_WEAK_FUNC(sub_82144264);
PPC_FUNC_IMPL(__imp__sub_82144264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82144268"))) PPC_WEAK_FUNC(sub_82144268);
PPC_FUNC_IMPL(__imp__sub_82144268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,152
	ctx.r4.s64 = ctx.r10.s64 + 152;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x8213f528
	ctx.lr = 0x8214428C;
	sub_8213F528(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214429C"))) PPC_WEAK_FUNC(sub_8214429C);
PPC_FUNC_IMPL(__imp__sub_8214429C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821442A0"))) PPC_WEAK_FUNC(sub_821442A0);
PPC_FUNC_IMPL(__imp__sub_821442A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,188
	ctx.r4.s64 = ctx.r10.s64 + 188;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x8213f528
	ctx.lr = 0x821442C4;
	sub_8213F528(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821442D4"))) PPC_WEAK_FUNC(sub_821442D4);
PPC_FUNC_IMPL(__imp__sub_821442D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821442D8"))) PPC_WEAK_FUNC(sub_821442D8);
PPC_FUNC_IMPL(__imp__sub_821442D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,224
	ctx.r4.s64 = ctx.r10.s64 + 224;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x8213f528
	ctx.lr = 0x821442FC;
	sub_8213F528(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214430C"))) PPC_WEAK_FUNC(sub_8214430C);
PPC_FUNC_IMPL(__imp__sub_8214430C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82144310"))) PPC_WEAK_FUNC(sub_82144310);
PPC_FUNC_IMPL(__imp__sub_82144310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,260
	ctx.r4.s64 = ctx.r10.s64 + 260;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x8213f528
	ctx.lr = 0x82144334;
	sub_8213F528(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82144344"))) PPC_WEAK_FUNC(sub_82144344);
PPC_FUNC_IMPL(__imp__sub_82144344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82144348"))) PPC_WEAK_FUNC(sub_82144348);
PPC_FUNC_IMPL(__imp__sub_82144348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,296
	ctx.r4.s64 = ctx.r10.s64 + 296;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x8213f528
	ctx.lr = 0x8214436C;
	sub_8213F528(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8214437C"))) PPC_WEAK_FUNC(sub_8214437C);
PPC_FUNC_IMPL(__imp__sub_8214437C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82144380"))) PPC_WEAK_FUNC(sub_82144380);
PPC_FUNC_IMPL(__imp__sub_82144380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x82144388;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x8214439C;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821443bc
	if (ctx.cr0.lt) goto loc_821443BC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r11,336
	ctx.r4.s64 = ctx.r11.s64 + 336;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x821443BC;
	sub_8213F528(ctx, base);
loc_821443BC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821443C4"))) PPC_WEAK_FUNC(sub_821443C4);
PPC_FUNC_IMPL(__imp__sub_821443C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821443C8"))) PPC_WEAK_FUNC(sub_821443C8);
PPC_FUNC_IMPL(__imp__sub_821443C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x821443D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x821443E4;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82144404
	if (ctx.cr0.lt) goto loc_82144404;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r11,372
	ctx.r4.s64 = ctx.r11.s64 + 372;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x82144404;
	sub_8213F528(ctx, base);
loc_82144404:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214440C"))) PPC_WEAK_FUNC(sub_8214440C);
PPC_FUNC_IMPL(__imp__sub_8214440C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82144410"))) PPC_WEAK_FUNC(sub_82144410);
PPC_FUNC_IMPL(__imp__sub_82144410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x82144418;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r11,-848
	ctx.r4.s64 = ctx.r11.s64 + -848;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8213f528
	ctx.lr = 0x82144438;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82144474
	if (ctx.cr0.lt) goto loc_82144474;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f5f8
	ctx.lr = 0x82144448;
	sub_8213F5F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82144474
	if (ctx.cr0.lt) goto loc_82144474;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r11,-868
	ctx.r4.s64 = ctx.r11.s64 + -868;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f528
	ctx.lr = 0x82144468;
	sub_8213F528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82144474
	if (ctx.cr0.lt) goto loc_82144474;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82144474:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8214447C"))) PPC_WEAK_FUNC(sub_8214447C);
PPC_FUNC_IMPL(__imp__sub_8214447C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82144480"))) PPC_WEAK_FUNC(sub_82144480);
PPC_FUNC_IMPL(__imp__sub_82144480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,408
	ctx.r4.s64 = ctx.r10.s64 + 408;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x8213f528
	ctx.lr = 0x821444A4;
	sub_8213F528(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821444B4"))) PPC_WEAK_FUNC(sub_821444B4);
PPC_FUNC_IMPL(__imp__sub_821444B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

