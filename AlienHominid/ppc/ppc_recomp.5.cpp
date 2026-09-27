#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_820C9948"))) PPC_WEAK_FUNC(sub_820C9948);
PPC_FUNC_IMPL(__imp__sub_820C9948) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820c998c
	goto loc_820C998C;
loc_820C9954:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x820c996c
	if (ctx.cr0.eq) goto loc_820C996C;
	// cmplwi cr6,r10,53
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 53, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// ble cr6,0x820c9970
	if (!ctx.cr6.gt) goto loc_820C9970;
loc_820C996C:
	// li r10,1
	ctx.r10.s64 = 1;
loc_820C9970:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820c9988
	if (ctx.cr0.eq) goto loc_820C9988;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x820c9988
	if (!ctx.cr6.gt) goto loc_820C9988;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_820C9988:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_820C998C:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820c9954
	if (!ctx.cr0.eq) goto loc_820C9954;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C9998"))) PPC_WEAK_FUNC(sub_820C9998);
PPC_FUNC_IMPL(__imp__sub_820C9998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x820C99A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r6,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r6.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820c99d0
	if (ctx.cr0.eq) goto loc_820C99D0;
	// bl 0x820d4c50
	ctx.lr = 0x820C99C8;
	sub_820D4C50(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_820C99D0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x820c9a00
	if (!ctx.cr6.eq) goto loc_820C9A00;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// bl 0x820d4c18
	ctx.lr = 0x820C99EC;
	sub_820D4C18(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x820c99fc
	if (!ctx.cr0.eq) goto loc_820C99FC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820c9a3c
	goto loc_820C9A3C;
loc_820C99FC:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_820C9A00:
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// bl 0x820c9590
	ctx.lr = 0x820C9A38;
	sub_820C9590(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_820C9A3C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C9A44"))) PPC_WEAK_FUNC(sub_820C9A44);
PPC_FUNC_IMPL(__imp__sub_820C9A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C9A48"))) PPC_WEAK_FUNC(sub_820C9A48);
PPC_FUNC_IMPL(__imp__sub_820C9A48) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r6,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r6.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bne cr6,0x820c9a88
	if (!ctx.cr6.eq) goto loc_820C9A88;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820c9a90
	if (ctx.cr6.eq) goto loc_820C9A90;
loc_820C9A88:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c9998
	ctx.lr = 0x820C9A90;
	sub_820C9998(ctx, base);
loc_820C9A90:
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

__attribute__((alias("__imp__sub_820C9AA8"))) PPC_WEAK_FUNC(sub_820C9AA8);
PPC_FUNC_IMPL(__imp__sub_820C9AA8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1784
	ctx.r3.s64 = 1784;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// bl 0x820d4cd8
	ctx.lr = 0x820C9ACC;
	sub_820D4CD8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820c9ae0
	if (ctx.cr0.eq) goto loc_820C9AE0;
	// bl 0x820cea38
	ctx.lr = 0x820C9AD8;
	sub_820CEA38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x820c9ae4
	goto loc_820C9AE4;
loc_820C9AE0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820C9AE4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_820C9B00"))) PPC_WEAK_FUNC(sub_820C9B00);
PPC_FUNC_IMPL(__imp__sub_820C9B00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x820C9B08;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// beq 0x820c9b5c
	if (ctx.cr0.eq) goto loc_820C9B5C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820cdbc0
	ctx.lr = 0x820C9B38;
	sub_820CDBC0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820c9b5c
	if (ctx.cr0.eq) goto loc_820C9B5C;
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
loc_820C9B5C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C9B68"))) PPC_WEAK_FUNC(sub_820C9B68);
PPC_FUNC_IMPL(__imp__sub_820C9B68) {
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
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820c9b9c
	if (!ctx.cr0.eq) goto loc_820C9B9C;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x820c9ba8
	goto loc_820C9BA8;
loc_820C9B9C:
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x820ceba8
	ctx.lr = 0x820C9BA4;
	sub_820CEBA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820C9BA8:
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

__attribute__((alias("__imp__sub_820C9BBC"))) PPC_WEAK_FUNC(sub_820C9BBC);
PPC_FUNC_IMPL(__imp__sub_820C9BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C9BC0"))) PPC_WEAK_FUNC(sub_820C9BC0);
PPC_FUNC_IMPL(__imp__sub_820C9BC0) {
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
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820c9bf4
	if (!ctx.cr0.eq) goto loc_820C9BF4;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x820c9c00
	goto loc_820C9C00;
loc_820C9BF4:
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x820cde20
	ctx.lr = 0x820C9BFC;
	sub_820CDE20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820C9C00:
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

__attribute__((alias("__imp__sub_820C9C14"))) PPC_WEAK_FUNC(sub_820C9C14);
PPC_FUNC_IMPL(__imp__sub_820C9C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C9C18"))) PPC_WEAK_FUNC(sub_820C9C18);
PPC_FUNC_IMPL(__imp__sub_820C9C18) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820c9cc0
	if (ctx.cr0.eq) goto loc_820C9CC0;
	// lwz r30,12(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lis r9,21065
	ctx.r9.s64 = 1380515840;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// ori r9,r9,17990
	ctx.r9.u64 = ctx.r9.u64 | 17990;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bne cr6,0x820c9cc0
	if (!ctx.cr6.eq) goto loc_820C9CC0;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// b 0x820c9cbc
	goto loc_820C9CBC;
loc_820C9C6C:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x822f8878
	ctx.lr = 0x820C9C84;
	sub_822F8878(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820c9cdc
	if (ctx.cr0.eq) goto loc_820C9CDC;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwbrx r11,0,r11
	ctx.r11.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r11.u32));
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// beq cr6,0x820c9cf4
	if (ctx.cr6.eq) goto loc_820C9CF4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x820c9d00
	if (ctx.cr6.eq) goto loc_820C9D00;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
loc_820C9CBC:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
loc_820C9CC0:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822f86d8
	ctx.lr = 0x820C9CD4;
	sub_822F86D8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820c9c6c
	if (!ctx.cr6.eq) goto loc_820C9C6C;
loc_820C9CDC:
	// bl 0x822f86d0
	ctx.lr = 0x820C9CE0;
	sub_822F86D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x820c9d1c
	if (!ctx.cr0.gt) goto loc_820C9D1C;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r11,32775
	ctx.r3.u64 = ctx.r11.u64 | 2147942400;
	// b 0x820c9d1c
	goto loc_820C9D1C;
loc_820C9CF4:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x820c9d1c
	goto loc_820C9D1C;
loc_820C9D00:
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_820C9D1C:
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

__attribute__((alias("__imp__sub_820C9D34"))) PPC_WEAK_FUNC(sub_820C9D34);
PPC_FUNC_IMPL(__imp__sub_820C9D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C9D38"))) PPC_WEAK_FUNC(sub_820C9D38);
PPC_FUNC_IMPL(__imp__sub_820C9D38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x820C9D40;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// bne cr6,0x820c9d84
	if (!ctx.cr6.eq) goto loc_820C9D84;
	// addi r31,r1,96
	ctx.r31.s64 = ctx.r1.s64 + 96;
loc_820C9D84:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x822f8878
	ctx.lr = 0x820C9DA0;
	sub_822F8878(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820c9dc4
	if (!ctx.cr0.eq) goto loc_820C9DC4;
	// bl 0x822f86d0
	ctx.lr = 0x820C9DAC;
	sub_822F86D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x820c9dbc
	if (!ctx.cr0.gt) goto loc_820C9DBC;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r11,32775
	ctx.r3.u64 = ctx.r11.u64 | 2147942400;
loc_820C9DBC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x820c9dec
	if (ctx.cr6.lt) goto loc_820C9DEC;
loc_820C9DC4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x820c9dec
	if (!ctx.cr6.eq) goto loc_820C9DEC;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822f8a38
	ctx.lr = 0x820C9DE0;
	sub_822F8A38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820c9dec
	if (!ctx.cr0.eq) goto loc_820C9DEC;
	// bl 0x822f86d0
	ctx.lr = 0x820C9DEC;
	sub_822F86D0(ctx, base);
loc_820C9DEC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C9DF8"))) PPC_WEAK_FUNC(sub_820C9DF8);
PPC_FUNC_IMPL(__imp__sub_820C9DF8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r11.u32);
	// stw r11,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r11.u32);
	// stw r11,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// stw r11,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r11.u32);
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r10,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r10.u32);
	// stw r10,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r11,-40(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -40);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r11,-36(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -36);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lwz r11,-32(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lwz r11,-28(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// lwz r11,-24(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// lwz r11,-8(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// lwz r11,-4(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	// stw r10,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r10,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r10.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// stw r10,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r10.u32);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// stw r10,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r10.u32);
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r11.u32);
	// stw r11,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r11.u32);
	// stw r11,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r11.u32);
	// stw r11,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r11.u32);
	// stw r11,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r11.u32);
	// stw r11,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C9F0C"))) PPC_WEAK_FUNC(sub_820C9F0C);
PPC_FUNC_IMPL(__imp__sub_820C9F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C9F10"))) PPC_WEAK_FUNC(sub_820C9F10);
PPC_FUNC_IMPL(__imp__sub_820C9F10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x820C9F18;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r30,68(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x820c9f78
	if (ctx.cr0.eq) goto loc_820C9F78;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f8638
	ctx.lr = 0x820C9F44;
	sub_822F8638(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r5,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r5.u32);
	// bne 0x820c9f60
	if (!ctx.cr0.eq) goto loc_820C9F60;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27512
	ctx.r3.s64 = ctx.r11.s64 + -27512;
	// bl 0x821313e0
	ctx.lr = 0x820C9F5C;
	sub_821313E0(ctx, base);
	// b 0x820c9f78
	goto loc_820C9F78;
loc_820C9F60:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x820c9d38
	ctx.lr = 0x820C9F74;
	sub_820C9D38(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_820C9F78:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C9F84"))) PPC_WEAK_FUNC(sub_820C9F84);
PPC_FUNC_IMPL(__imp__sub_820C9F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C9F88"))) PPC_WEAK_FUNC(sub_820C9F88);
PPC_FUNC_IMPL(__imp__sub_820C9F88) {
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
	// lwz r30,152(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,357
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 357, ctx.xer);
	// beq cr6,0x820c9fbc
	if (ctx.cr6.eq) goto loc_820C9FBC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27476
	ctx.r3.s64 = ctx.r11.s64 + -27476;
	// bl 0x821313e0
	ctx.lr = 0x820C9FBC;
	sub_821313E0(ctx, base);
loc_820C9FBC:
	// li r5,92
	ctx.r5.s64 = 92;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e9ff0
	ctx.lr = 0x820C9FCC;
	sub_822E9FF0(ctx, base);
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,16428
	ctx.r11.s64 = ctx.r11.s64 + 16428;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r10,59(r31)
	PPC_STORE_U8(ctx.r31.u32 + 59, ctx.r10.u8);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stb r8,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r8.u8);
	// lhz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// lhz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820ca030
	if (ctx.cr0.eq) goto loc_820CA030;
	// addi r10,r31,12
	ctx.r10.s64 = ctx.r31.s64 + 12;
	// addi r11,r30,29
	ctx.r11.s64 = ctx.r30.s64 + 29;
loc_820CA008:
	// lwz r8,-13(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r8,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r8.u32);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lhz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x820ca008
	if (ctx.cr6.lt) goto loc_820CA008;
loc_820CA030:
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

__attribute__((alias("__imp__sub_820CA04C"))) PPC_WEAK_FUNC(sub_820CA04C);
PPC_FUNC_IMPL(__imp__sub_820CA04C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CA050"))) PPC_WEAK_FUNC(sub_820CA050);
PPC_FUNC_IMPL(__imp__sub_820CA050) {
	PPC_FUNC_PROLOGUE();
	// lhbrx r7,0,r3
	// addi r11,r3,2
	ctx.r11.s64 = ctx.r3.s64 + 2;
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// addi r8,r3,6
	ctx.r8.s64 = ctx.r3.s64 + 6;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// sth r7,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r7.u16);
	// lhbrx r7,0,r11
	// sth r7,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// lhbrx r11,0,r10
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// lhbrx r11,0,r8
	// sth r11,0(r8)
	PPC_STORE_U16(ctx.r8.u32 + 0, ctx.r11.u16);
	// lhbrx r11,0,r9
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// sth r11,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r11.u16);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
loc_820CA0A0:
	// mulli r11,r10,20
	ctx.r11.s64 = ctx.r10.s64 * 20;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// addi r6,r11,20
	ctx.r6.s64 = ctx.r11.s64 + 20;
	// addi r5,r11,24
	ctx.r5.s64 = ctx.r11.s64 + 24;
	// addi r11,r11,30
	ctx.r11.s64 = ctx.r11.s64 + 30;
	// lwbrx r4,0,r8
	ctx.r4.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r8.u32));
	// stw r4,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r4.u32);
	// lwbrx r8,0,r7
	ctx.r8.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r7.u32));
	// stw r8,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// lwbrx r8,0,r6
	ctx.r8.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r6.u32));
	// stw r8,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// lwbrx r8,0,r5
	ctx.r8.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r5.u32));
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// lhbrx r8,0,r11
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// lhz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820ca0a0
	if (ctx.cr6.lt) goto loc_820CA0A0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CA0FC"))) PPC_WEAK_FUNC(sub_820CA0FC);
PPC_FUNC_IMPL(__imp__sub_820CA0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CA100"))) PPC_WEAK_FUNC(sub_820CA100);
PPC_FUNC_IMPL(__imp__sub_820CA100) {
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
	// li r5,2048
	ctx.r5.s64 = 2048;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822e9ff0
	ctx.lr = 0x820CA120;
	sub_822E9FF0(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,2048
	ctx.r3.s64 = ctx.r31.s64 + 2048;
	// bl 0x822e9ff0
	ctx.lr = 0x820CA130;
	sub_822E9FF0(ctx, base);
	// li r5,3072
	ctx.r5.s64 = 3072;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,2304
	ctx.r3.s64 = ctx.r31.s64 + 2304;
	// bl 0x822e9ff0
	ctx.lr = 0x820CA140;
	sub_822E9FF0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,5376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5376, ctx.r11.u32);
	// stb r11,5380(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5380, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_820CA164"))) PPC_WEAK_FUNC(sub_820CA164);
PPC_FUNC_IMPL(__imp__sub_820CA164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CA168"))) PPC_WEAK_FUNC(sub_820CA168);
PPC_FUNC_IMPL(__imp__sub_820CA168) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,11
	ctx.r5.s64 = 11;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// bl 0x822e9ff0
	ctx.lr = 0x820CA198;
	sub_822E9FF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,6224
	ctx.r11.s64 = ctx.r11.s64 + 6224;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r11,48
	ctx.r11.s64 = 48;
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// bl 0x822b38e8
	ctx.lr = 0x820CA1B4;
	sub_822B38E8(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge 0x820ca1d4
	if (!ctx.cr0.lt) goto loc_820CA1D4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27456
	ctx.r3.s64 = ctx.r11.s64 + -27456;
	// bl 0x821313e0
	ctx.lr = 0x820CA1C8;
	sub_821313E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x820ca1d8
	goto loc_820CA1D8;
loc_820CA1D4:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_820CA1D8:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_820CA1F8"))) PPC_WEAK_FUNC(sub_820CA1F8);
PPC_FUNC_IMPL(__imp__sub_820CA1F8) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ca23c
	if (ctx.cr6.eq) goto loc_820CA23C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820CA218:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// beq cr6,0x820ca250
	if (ctx.cr6.eq) goto loc_820CA250;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820ca218
	if (!ctx.cr6.eq) goto loc_820CA218;
loc_820CA23C:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_820CA240:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820CA250:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27380
	ctx.r3.s64 = ctx.r11.s64 + -27380;
	// bl 0x821313e0
	ctx.lr = 0x820CA25C;
	sub_821313E0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x820ca240
	goto loc_820CA240;
}

__attribute__((alias("__imp__sub_820CA264"))) PPC_WEAK_FUNC(sub_820CA264);
PPC_FUNC_IMPL(__imp__sub_820CA264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CA268"))) PPC_WEAK_FUNC(sub_820CA268);
PPC_FUNC_IMPL(__imp__sub_820CA268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x820CA270;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,512
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 512, ctx.xer);
	// blt cr6,0x820ca2ac
	if (ctx.cr6.lt) goto loc_820CA2AC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27100
	ctx.r3.s64 = ctx.r11.s64 + -27100;
	// bl 0x821313e0
	ctx.lr = 0x820CA29C;
	sub_821313E0(ctx, base);
loc_820CA29C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_820CA2A0:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
loc_820CA2AC:
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r27
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne 0x820ca2cc
	if (!ctx.cr0.eq) goto loc_820CA2CC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27148
	ctx.r3.s64 = ctx.r11.s64 + -27148;
loc_820CA2C4:
	// bl 0x821313e0
	ctx.lr = 0x820CA2C8;
	sub_821313E0(ctx, base);
	// b 0x820ca29c
	goto loc_820CA29C;
loc_820CA2CC:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// stb r29,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r29.u8);
	// bl 0x822e9ff0
	ctx.lr = 0x820CA2E4;
	sub_822E9FF0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820c9f88
	ctx.lr = 0x820CA2F0;
	sub_820C9F88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// bl 0x822b38f0
	ctx.lr = 0x820CA300;
	sub_822B38F0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge 0x820ca314
	if (!ctx.cr0.lt) goto loc_820CA314;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27232
	ctx.r3.s64 = ctx.r11.s64 + -27232;
	// b 0x820ca2c4
	goto loc_820CA2C4;
loc_820CA314:
	// li r5,28
	ctx.r5.s64 = 28;
	// lwz r31,156(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x822e9ff0
	ctx.lr = 0x820CA32C;
	sub_822E9FF0(ctx, base);
	// lwz r10,148(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lwz r10,68(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820ca360
	if (ctx.cr0.eq) goto loc_820CA360;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,127
	ctx.r11.s64 = ctx.r11.s64 + 127;
	// rlwinm r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// b 0x820ca374
	goto loc_820CA374;
loc_820CA360:
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_820CA374:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x822b3630
	ctx.lr = 0x820CA388;
	sub_822B3630(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge 0x820ca39c
	if (!ctx.cr0.lt) goto loc_820CA39C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27288
	ctx.r3.s64 = ctx.r11.s64 + -27288;
	// bl 0x821313e0
	ctx.lr = 0x820CA39C;
	sub_821313E0(ctx, base);
loc_820CA39C:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822b3690
	ctx.lr = 0x820CA3A8;
	sub_822B3690(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge 0x820ca3bc
	if (!ctx.cr0.lt) goto loc_820CA3BC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27324
	ctx.r3.s64 = ctx.r11.s64 + -27324;
	// bl 0x821313e0
	ctx.lr = 0x820CA3BC;
	sub_821313E0(ctx, base);
loc_820CA3BC:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822b3798
	ctx.lr = 0x820CA3C8;
	sub_822B3798(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r10,r27,2304
	ctx.r10.s64 = ctx.r27.s64 + 2304;
loc_820CA3D0:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820ca3f0
	if (ctx.cr6.eq) goto loc_820CA3F0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// blt cr6,0x820ca3d0
	if (ctx.cr6.lt) goto loc_820CA3D0;
	// b 0x820ca29c
	goto loc_820CA29C;
loc_820CA3F0:
	// addi r9,r11,192
	ctx.r9.s64 = ctx.r11.s64 + 192;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mulli r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 * 12;
	// mulli r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 * 12;
	// stwx r8,r9,r27
	PPC_STORE_U32(ctx.r9.u32 + ctx.r27.u32, ctx.r8.u32);
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
	// stw r30,2308(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2308, ctx.r30.u32);
	// b 0x820ca2a0
	goto loc_820CA2A0;
}

__attribute__((alias("__imp__sub_820CA414"))) PPC_WEAK_FUNC(sub_820CA414);
PPC_FUNC_IMPL(__imp__sub_820CA414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CA418"))) PPC_WEAK_FUNC(sub_820CA418);
PPC_FUNC_IMPL(__imp__sub_820CA418) {
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
	// extsh. r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x820ca444
	if (!ctx.cr0.lt) goto loc_820CA444;
loc_820CA434:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x820ca470
	goto loc_820CA470;
loc_820CA444:
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// bge cr6,0x820ca434
	if (!ctx.cr6.lt) goto loc_820CA434;
	// addi r11,r11,192
	ctx.r11.s64 = ctx.r11.s64 + 192;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// lwzx r3,r11,r4
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820ca468
	if (ctx.cr0.eq) goto loc_820CA468;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822b36d8
	ctx.lr = 0x820CA468;
	sub_822B36D8(ctx, base);
loc_820CA468:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_820CA470:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_820CA48C"))) PPC_WEAK_FUNC(sub_820CA48C);
PPC_FUNC_IMPL(__imp__sub_820CA48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CA490"))) PPC_WEAK_FUNC(sub_820CA490);
PPC_FUNC_IMPL(__imp__sub_820CA490) {
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
	// extsh. r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x820ca4bc
	if (!ctx.cr0.lt) goto loc_820CA4BC;
loc_820CA4AC:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x820ca4e4
	goto loc_820CA4E4;
loc_820CA4BC:
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// bge cr6,0x820ca4ac
	if (!ctx.cr6.lt) goto loc_820CA4AC;
	// addi r11,r11,192
	ctx.r11.s64 = ctx.r11.s64 + 192;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// lwzx r3,r11,r4
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820ca4dc
	if (ctx.cr0.eq) goto loc_820CA4DC;
	// bl 0x822b3798
	ctx.lr = 0x820CA4DC;
	sub_822B3798(ctx, base);
loc_820CA4DC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_820CA4E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_820CA500"))) PPC_WEAK_FUNC(sub_820CA500);
PPC_FUNC_IMPL(__imp__sub_820CA500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x820CA508;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,5376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5376);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820ca534
	if (ctx.cr0.eq) goto loc_820CA534;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822b36d8
	ctx.lr = 0x820CA530;
	sub_822B36D8(ctx, base);
	// stw r29,5376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5376, ctx.r29.u32);
loc_820CA534:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CA548"))) PPC_WEAK_FUNC(sub_820CA548);
PPC_FUNC_IMPL(__imp__sub_820CA548) {
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
	// lwz r11,5376(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 5376);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820ca570
	if (ctx.cr0.eq) goto loc_820CA570;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822b3798
	ctx.lr = 0x820CA570;
	sub_822B3798(ctx, base);
loc_820CA570:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_820CA594"))) PPC_WEAK_FUNC(sub_820CA594);
PPC_FUNC_IMPL(__imp__sub_820CA594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CA598"))) PPC_WEAK_FUNC(sub_820CA598);
PPC_FUNC_IMPL(__imp__sub_820CA598) {
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
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820ca5c8
	if (ctx.cr6.eq) goto loc_820CA5C8;
	// bl 0x822f8ae0
	ctx.lr = 0x820CA5C0;
	sub_822F8AE0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_820CA5C8:
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820ca5d8
	if (ctx.cr0.eq) goto loc_820CA5D8;
	// bl 0x822f86c0
	ctx.lr = 0x820CA5D8;
	sub_822F86C0(ctx, base);
loc_820CA5D8:
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820ca5e8
	if (ctx.cr0.eq) goto loc_820CA5E8;
	// bl 0x820d4d38
	ctx.lr = 0x820CA5E8;
	sub_820D4D38(ctx, base);
loc_820CA5E8:
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// beq 0x820ca600
	if (ctx.cr0.eq) goto loc_820CA600;
	// bl 0x820d4d38
	ctx.lr = 0x820CA600;
	sub_820D4D38(ctx, base);
loc_820CA600:
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820ca614
	if (ctx.cr0.eq) goto loc_820CA614;
	// bl 0x820d4d38
	ctx.lr = 0x820CA614;
	sub_820D4D38(ctx, base);
loc_820CA614:
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_820CA630"))) PPC_WEAK_FUNC(sub_820CA630);
PPC_FUNC_IMPL(__imp__sub_820CA630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98d4
	ctx.lr = 0x820CA638;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820ca660
	if (ctx.cr6.eq) goto loc_820CA660;
	// bl 0x822f8ae0
	ctx.lr = 0x820CA658;
	sub_822F8AE0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_820CA660:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r23,0
	ctx.r23.s64 = 0;
	// lis r8,16384
	ctx.r8.s64 = 1073741824;
	// bne 0x820ca674
	if (!ctx.cr0.eq) goto loc_820CA674;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
loc_820CA674:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822f8b38
	ctx.lr = 0x820CA690;
	sub_822F8B38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bne cr6,0x820ca6b8
	if (!ctx.cr6.eq) goto loc_820CA6B8;
	// bl 0x822f86d0
	ctx.lr = 0x820CA6A4;
	sub_822F86D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x820ca874
	if (!ctx.cr0.gt) goto loc_820CA874;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r11,32775
	ctx.r3.u64 = ctx.r11.u64 | 2147942400;
	// b 0x820ca874
	goto loc_820CA874;
loc_820CA6B8:
	// lis r10,21065
	ctx.r10.s64 = 1380515840;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// ori r10,r10,17990
	ctx.r10.u64 = ctx.r10.u64 | 17990;
	// lis r9,26221
	ctx.r9.s64 = 1718419456;
	// addi r28,r31,28
	ctx.r28.s64 = ctx.r31.s64 + 28;
	// ori r9,r9,29728
	ctx.r9.u64 = ctx.r9.u64 | 29728;
	// stw r23,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r23.u32);
	// lis r8,25697
	ctx.r8.s64 = 1684078592;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r27,r31,52
	ctx.r27.s64 = ctx.r31.s64 + 52;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// ori r8,r8,29793
	ctx.r8.u64 = ctx.r8.u64 | 29793;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r7,22337
	ctx.r7.s64 = 1463877632;
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// addi r26,r31,100
	ctx.r26.s64 = ctx.r31.s64 + 100;
	// stw r30,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r30.u32);
	// ori r24,r7,22085
	ctx.r24.u64 = ctx.r7.u64 | 22085;
	// lis r7,29541
	ctx.r7.s64 = 1935998976;
	// lis r6,22605
	ctx.r6.s64 = 1481441280;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// ori r7,r7,25963
	ctx.r7.u64 = ctx.r7.u64 | 25963;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r25,r31,124
	ctx.r25.s64 = ctx.r31.s64 + 124;
	// stw r8,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r8.u32);
	// ori r6,r6,16690
	ctx.r6.u64 = ctx.r6.u64 | 16690;
	// stw r30,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r24,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r24.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r7,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r7.u32);
	// stw r30,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r30.u32);
	// stw r11,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r6,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r6.u32);
	// stw r30,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r30.u32);
	// stw r11,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r11.u32);
	// bl 0x820c9c18
	ctx.lr = 0x820CA760;
	sub_820C9C18(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x820ca7f4
	if (ctx.cr0.lt) goto loc_820CA7F4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820c9c18
	ctx.lr = 0x820CA770;
	sub_820C9C18(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x820ca7f4
	if (ctx.cr0.lt) goto loc_820CA7F4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820c9c18
	ctx.lr = 0x820CA780;
	sub_820C9C18(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x820ca7f4
	if (ctx.cr0.lt) goto loc_820CA7F4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x820c9c18
	ctx.lr = 0x820CA790;
	sub_820C9C18(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x820ca7f4
	if (ctx.cr0.lt) goto loc_820CA7F4;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x820d4cd8
	ctx.lr = 0x820CA7A0;
	sub_820D4CD8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r6,44(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r5,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r5.u32);
	// bl 0x820c9d38
	ctx.lr = 0x820CA7BC;
	sub_820C9D38(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x820ca7f4
	if (ctx.cr0.lt) goto loc_820CA7F4;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// bl 0x820ca050
	ctx.lr = 0x820CA7CC;
	sub_820CA050(ctx, base);
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x820d4cd8
	ctx.lr = 0x820CA7D4;
	sub_820D4CD8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r6,116(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r5,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r5.u32);
	// bl 0x820c9d38
	ctx.lr = 0x820CA7F0;
	sub_820C9D38(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_820CA7F4:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x820c9c18
	ctx.lr = 0x820CA7FC;
	sub_820C9C18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x820ca834
	if (ctx.cr0.lt) goto loc_820CA834;
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// bl 0x820d4cd8
	ctx.lr = 0x820CA80C;
	sub_820D4CD8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r5,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r5.u32);
	// blt cr6,0x820ca834
	if (ctx.cr6.lt) goto loc_820CA834;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,140(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x820c9d38
	ctx.lr = 0x820CA830;
	sub_820C9D38(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_820CA834:
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x820ca864
	if (ctx.cr6.lt) goto loc_820CA864;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820c9d38
	ctx.lr = 0x820CA858;
	sub_820C9D38(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x820ca870
	if (ctx.cr6.eq) goto loc_820CA870;
loc_820CA864:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// b 0x820ca874
	goto loc_820CA874;
loc_820CA870:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820CA874:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822e9924
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CA87C"))) PPC_WEAK_FUNC(sub_820CA87C);
PPC_FUNC_IMPL(__imp__sub_820CA87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CA880"))) PPC_WEAK_FUNC(sub_820CA880);
PPC_FUNC_IMPL(__imp__sub_820CA880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x820CA888;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r27,256
	ctx.r27.s64 = 256;
	// addi r31,r29,2304
	ctx.r31.s64 = ctx.r29.s64 + 2304;
	// li r28,0
	ctx.r28.s64 = 0;
loc_820CA89C:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x820ca8e0
	if (ctx.cr0.eq) goto loc_820CA8E0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822b3578
	ctx.lr = 0x820CA8B4;
	sub_822B3578(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x820ca8e0
	if (!ctx.cr0.eq) goto loc_820CA8E0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822b33f0
	ctx.lr = 0x820CA8C8;
	sub_822B33F0(ctx, base);
	// lwz r11,5376(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5376);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x820ca8d8
	if (!ctx.cr6.eq) goto loc_820CA8D8;
	// stw r28,5376(r29)
	PPC_STORE_U32(ctx.r29.u32 + 5376, ctx.r28.u32);
loc_820CA8D8:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
loc_820CA8E0:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// bne 0x820ca89c
	if (!ctx.cr0.eq) goto loc_820CA89C;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822d9300
	ctx.lr = 0x820CA8F4;
	sub_822D9300(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820ca90c
	if (ctx.cr0.eq) goto loc_820CA90C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27056
	ctx.r3.s64 = ctx.r11.s64 + -27056;
	// bl 0x821313e0
	ctx.lr = 0x820CA908;
	sub_821313E0(ctx, base);
	// b 0x820ca93c
	goto loc_820CA93C;
loc_820CA90C:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820ca938
	if (!ctx.cr6.eq) goto loc_820CA938;
	// lwz r10,5376(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5376);
	// stb r11,5380(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5380, ctx.r11.u8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820ca93c
	if (ctx.cr6.eq) goto loc_820CA93C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x820ca500
	ctx.lr = 0x820CA934;
	sub_820CA500(ctx, base);
	// b 0x820ca93c
	goto loc_820CA93C;
loc_820CA938:
	// stb r28,5380(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5380, ctx.r28.u8);
loc_820CA93C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CA944"))) PPC_WEAK_FUNC(sub_820CA944);
PPC_FUNC_IMPL(__imp__sub_820CA944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CA948"))) PPC_WEAK_FUNC(sub_820CA948);
PPC_FUNC_IMPL(__imp__sub_820CA948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98dc
	ctx.lr = 0x820CA950;
	__savegprlr_25(ctx, base);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,64
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 64, ctx.xer);
	// blt cr6,0x820ca984
	if (ctx.cr6.lt) goto loc_820CA984;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-26836
	ctx.r3.s64 = ctx.r11.s64 + -26836;
	// bl 0x821313e0
	ctx.lr = 0x820CA970;
	sub_821313E0(ctx, base);
loc_820CA970:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// b 0x820cab70
	goto loc_820CAB70;
loc_820CA984:
	// addi r11,r5,512
	ctx.r11.s64 = ctx.r5.s64 + 512;
	// rlwinm r25,r11,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r25,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r26.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ca9ac
	if (ctx.cr6.eq) goto loc_820CA9AC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r11,-26912
	ctx.r3.s64 = ctx.r11.s64 + -26912;
	// bl 0x821313e0
	ctx.lr = 0x820CA9A8;
	sub_821313E0(ctx, base);
	// b 0x820ca970
	goto loc_820CA970;
loc_820CA9AC:
	// addi r11,r6,4
	ctx.r11.s64 = ctx.r6.s64 + 4;
	// b 0x820ca9b8
	goto loc_820CA9B8;
loc_820CA9B4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_820CA9B8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,47
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 47, ctx.xer);
	// bne cr6,0x820ca9b4
	if (!ctx.cr6.eq) goto loc_820CA9B4;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-26932
	ctx.r4.s64 = ctx.r11.s64 + -26932;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x822ea970
	ctx.lr = 0x820CA9DC;
	sub_822EA970(ctx, base);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r10,46
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 46, ctx.xer);
	// beq cr6,0x820ca9fc
	if (ctx.cr6.eq) goto loc_820CA9FC;
loc_820CA9EC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,46
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 46, ctx.xer);
	// bne cr6,0x820ca9ec
	if (!ctx.cr6.eq) goto loc_820CA9EC;
loc_820CA9FC:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r30,r10,-26940
	ctx.r30.s64 = ctx.r10.s64 + -26940;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stb r27,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r27.u8);
loc_820CAA14:
	// lbz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820caa14
	if (!ctx.cr6.eq) goto loc_820CAA14;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
loc_820CAA28:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x820caa28
	if (!ctx.cr0.eq) goto loc_820CAA28;
	// li r3,164
	ctx.r3.s64 = 164;
	// bl 0x820d4cd8
	ctx.lr = 0x820CAA48;
	sub_820D4CD8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820caa5c
	if (ctx.cr0.eq) goto loc_820CAA5C;
	// bl 0x820c9df8
	ctx.lr = 0x820CAA54;
	sub_820C9DF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x820caa60
	goto loc_820CAA60;
loc_820CAA5C:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_820CAA60:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ca630
	ctx.lr = 0x820CAA70;
	sub_820CA630(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x820cab30
	if (!ctx.cr0.lt) goto loc_820CAB30;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-26960
	ctx.r4.s64 = ctx.r11.s64 + -26960;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822ea970
	ctx.lr = 0x820CAA8C;
	sub_822EA970(ctx, base);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r10,46
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 46, ctx.xer);
	// beq cr6,0x820caaac
	if (ctx.cr6.eq) goto loc_820CAAAC;
loc_820CAA9C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,46
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 46, ctx.xer);
	// bne cr6,0x820caa9c
	if (!ctx.cr6.eq) goto loc_820CAA9C;
loc_820CAAAC:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stb r27,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r27.u8);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_820CAAB8:
	// lbz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820caab8
	if (!ctx.cr6.eq) goto loc_820CAAB8;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
loc_820CAACC:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x820caacc
	if (!ctx.cr0.eq) goto loc_820CAACC;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ca630
	ctx.lr = 0x820CAAF4;
	sub_820CA630(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge 0x820cab30
	if (!ctx.cr0.lt) goto loc_820CAB30;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-26992
	ctx.r3.s64 = ctx.r11.s64 + -26992;
loc_820CAB04:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x821313e0
	ctx.lr = 0x820CAB0C;
	sub_821313E0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820cab24
	if (ctx.cr6.eq) goto loc_820CAB24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ca598
	ctx.lr = 0x820CAB1C;
	sub_820CA598(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d4d38
	ctx.lr = 0x820CAB24;
	sub_820D4D38(ctx, base);
loc_820CAB24:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x820cab6c
	goto loc_820CAB6C;
loc_820CAB30:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c9f10
	ctx.lr = 0x820CAB38;
	sub_820C9F10(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge 0x820cab4c
	if (!ctx.cr0.lt) goto loc_820CAB4C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-27024
	ctx.r3.s64 = ctx.r11.s64 + -27024;
	// b 0x820cab04
	goto loc_820CAB04;
loc_820CAB4C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820cab64
	if (ctx.cr6.eq) goto loc_820CAB64;
	// bl 0x822f8ae0
	ctx.lr = 0x820CAB5C;
	sub_822F8AE0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_820CAB64:
	// stwx r31,r25,r26
	PPC_STORE_U32(ctx.r25.u32 + ctx.r26.u32, ctx.r31.u32);
	// stw r27,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r27.u32);
loc_820CAB6C:
	// stw r27,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r27.u32);
loc_820CAB70:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x822e992c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CAB7C"))) PPC_WEAK_FUNC(sub_820CAB7C);
PPC_FUNC_IMPL(__imp__sub_820CAB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CAB80"))) PPC_WEAK_FUNC(sub_820CAB80);
PPC_FUNC_IMPL(__imp__sub_820CAB80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98d8
	ctx.lr = 0x820CAB88;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// clrlwi r4,r5,16
	ctx.r4.u64 = ctx.r5.u32 & 0xFFFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,512
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 512, ctx.xer);
	// blt cr6,0x820cabc0
	if (ctx.cr6.lt) goto loc_820CABC0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-26728
	ctx.r3.s64 = ctx.r11.s64 + -26728;
	// bl 0x821313e0
	ctx.lr = 0x820CABAC;
	sub_821313E0(ctx, base);
loc_820CABAC:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x820cac64
	goto loc_820CAC64;
loc_820CABC0:
	// rlwinm r24,r4,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r27,r24,r26
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r26.u32);
	// cmplwi r27,0
	ctx.cr0.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne 0x820cabe0
	if (!ctx.cr0.eq) goto loc_820CABE0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-26788
	ctx.r3.s64 = ctx.r11.s64 + -26788;
	// bl 0x821313e0
	ctx.lr = 0x820CABDC;
	sub_821313E0(ctx, base);
	// b 0x820cabac
	goto loc_820CABAC;
loc_820CABE0:
	// addi r30,r26,2308
	ctx.r30.s64 = ctx.r26.s64 + 2308;
	// li r25,256
	ctx.r25.s64 = 256;
	// li r29,0
	ctx.r29.s64 = 0;
loc_820CABEC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x820cac3c
	if (!ctx.cr6.eq) goto loc_820CAC3C;
	// lwz r28,-4(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822b36d8
	ctx.lr = 0x820CAC08;
	sub_822B36D8(ctx, base);
	// b 0x820cac14
	goto loc_820CAC14;
loc_820CAC0C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822f8318
	ctx.lr = 0x820CAC14;
	sub_822F8318(ctx, base);
loc_820CAC14:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822b3578
	ctx.lr = 0x820CAC20;
	sub_822B3578(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x820cac0c
	if (!ctx.cr0.eq) goto loc_820CAC0C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822b33f0
	ctx.lr = 0x820CAC34;
	sub_822B33F0(ctx, base);
	// stw r29,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r29.u32);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_820CAC3C:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x820cabec
	if (!ctx.cr0.eq) goto loc_820CABEC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820ca598
	ctx.lr = 0x820CAC50;
	sub_820CA598(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820d4d38
	ctx.lr = 0x820CAC58;
	sub_820D4D38(ctx, base);
	// stwx r29,r24,r26
	PPC_STORE_U32(ctx.r24.u32 + ctx.r26.u32, ctx.r29.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_820CAC64:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822e9928
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CAC70"))) PPC_WEAK_FUNC(sub_820CAC70);
PPC_FUNC_IMPL(__imp__sub_820CAC70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x820CAC78;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,5376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5376);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820cacbc
	if (ctx.cr6.eq) goto loc_820CACBC;
loc_820CAC94:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822f8318
	ctx.lr = 0x820CAC9C;
	sub_822F8318(ctx, base);
	// lwz r11,5376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5376);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822b3578
	ctx.lr = 0x820CACAC;
	sub_822B3578(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x820cac94
	if (!ctx.cr0.eq) goto loc_820CAC94;
	// stw r28,5376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5376, ctx.r28.u32);
loc_820CACBC:
	// addi r31,r31,2048
	ctx.r31.s64 = ctx.r31.s64 + 2048;
	// li r29,64
	ctx.r29.s64 = 64;
loc_820CACC4:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x820cace4
	if (ctx.cr0.eq) goto loc_820CACE4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ca598
	ctx.lr = 0x820CACD8;
	sub_820CA598(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820d4d38
	ctx.lr = 0x820CACE0;
	sub_820D4D38(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_820CACE4:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x820cacc4
	if (!ctx.cr0.eq) goto loc_820CACC4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r28.u32);
	// stw r28,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r28.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CAD04"))) PPC_WEAK_FUNC(sub_820CAD04);
PPC_FUNC_IMPL(__imp__sub_820CAD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CAD08"))) PPC_WEAK_FUNC(sub_820CAD08);
PPC_FUNC_IMPL(__imp__sub_820CAD08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e0
	ctx.lr = 0x820CAD10;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r5,64
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 64, ctx.xer);
	// blt cr6,0x820cad48
	if (ctx.cr6.lt) goto loc_820CAD48;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-26380
	ctx.r3.s64 = ctx.r11.s64 + -26380;
	// bl 0x821313e0
	ctx.lr = 0x820CAD3C;
	sub_821313E0(ctx, base);
loc_820CAD3C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x820caed8
	goto loc_820CAED8;
loc_820CAD48:
	// addi r11,r5,512
	ctx.r11.s64 = ctx.r5.s64 + 512;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r27,r11,r29
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi r27,0
	ctx.cr0.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne 0x820cad70
	if (!ctx.cr0.eq) goto loc_820CAD70;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r11,-26424
	ctx.r3.s64 = ctx.r11.s64 + -26424;
	// bl 0x821313e0
	ctx.lr = 0x820CAD6C;
	sub_821313E0(ctx, base);
	// b 0x820cad3c
	goto loc_820CAD3C;
loc_820CAD70:
	// lbz r11,5380(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5380);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820cad8c
	if (ctx.cr0.eq) goto loc_820CAD8C;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// b 0x820caee0
	goto loc_820CAEE0;
loc_820CAD8C:
	// lwz r11,5376(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5376);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820cada4
	if (ctx.cr6.eq) goto loc_820CADA4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x820ca500
	ctx.lr = 0x820CADA4;
	sub_820CA500(ctx, base);
loc_820CADA4:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
	// bl 0x822e9ff0
	ctx.lr = 0x820CADBC;
	sub_822E9FF0(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820c9f88
	ctx.lr = 0x820CADC8;
	sub_820C9F88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x822b38f0
	ctx.lr = 0x820CADD8;
	sub_822B38F0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge 0x820cadf0
	if (!ctx.cr0.lt) goto loc_820CADF0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-26512
	ctx.r3.s64 = ctx.r11.s64 + -26512;
	// bl 0x821313e0
	ctx.lr = 0x820CADEC;
	sub_821313E0(ctx, base);
	// b 0x820caed4
	goto loc_820CAED4;
loc_820CADF0:
	// li r5,28
	ctx.r5.s64 = 28;
	// lwz r28,156(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 156);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x822e9ff0
	ctx.lr = 0x820CAE08;
	sub_822E9FF0(ctx, base);
	// lwz r10,148(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 148);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lwz r10,68(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 68);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820cae3c
	if (ctx.cr0.eq) goto loc_820CAE3C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// addi r11,r11,127
	ctx.r11.s64 = ctx.r11.s64 + 127;
	// rlwinm r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// b 0x820cae50
	goto loc_820CAE50;
loc_820CAE3C:
	// lbz r11,3(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 3);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
loc_820CAE50:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x822b3630
	ctx.lr = 0x820CAE64;
	sub_822B3630(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge 0x820cae78
	if (!ctx.cr0.lt) goto loc_820CAE78;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-26556
	ctx.r3.s64 = ctx.r11.s64 + -26556;
	// bl 0x821313e0
	ctx.lr = 0x820CAE78;
	sub_821313E0(ctx, base);
loc_820CAE78:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822b3690
	ctx.lr = 0x820CAE84;
	sub_822B3690(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge 0x820cae98
	if (!ctx.cr0.lt) goto loc_820CAE98;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-26592
	ctx.r3.s64 = ctx.r11.s64 + -26592;
	// bl 0x821313e0
	ctx.lr = 0x820CAE98;
	sub_821313E0(ctx, base);
loc_820CAE98:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822b3798
	ctx.lr = 0x820CAEA4;
	sub_822B3798(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r10,r29,2304
	ctx.r10.s64 = ctx.r29.s64 + 2304;
loc_820CAEAC:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820caef0
	if (ctx.cr6.eq) goto loc_820CAEF0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// blt cr6,0x820caeac
	if (ctx.cr6.lt) goto loc_820CAEAC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-26680
	ctx.r3.s64 = ctx.r11.s64 + -26680;
	// bl 0x821313e0
	ctx.lr = 0x820CAED4;
	sub_821313E0(ctx, base);
loc_820CAED4:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_820CAED8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_820CAEE0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x822e9930
	__restgprlr_26(ctx, base);
	return;
loc_820CAEF0:
	// addi r9,r11,192
	ctx.r9.s64 = ctx.r11.s64 + 192;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// mulli r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 * 12;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mulli r11,r9,12
	ctx.r11.s64 = ctx.r9.s64 * 12;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// stw r11,5376(r29)
	PPC_STORE_U32(ctx.r29.u32 + 5376, ctx.r11.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r27,2308(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2308, ctx.r27.u32);
	// b 0x820caee0
	goto loc_820CAEE0;
}

__attribute__((alias("__imp__sub_820CAF20"))) PPC_WEAK_FUNC(sub_820CAF20);
PPC_FUNC_IMPL(__imp__sub_820CAF20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98dc
	ctx.lr = 0x820CAF28;
	__savegprlr_25(ctx, base);
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// blt cr6,0x820caf64
	if (ctx.cr6.lt) goto loc_820CAF64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-26164
	ctx.r3.s64 = ctx.r11.s64 + -26164;
	// bl 0x821313e0
	ctx.lr = 0x820CAF50;
	sub_821313E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// b 0x820cb104
	goto loc_820CB104;
loc_820CAF64:
	// rlwinm r25,r11,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r25,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r26.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820caf80
	if (ctx.cr6.eq) goto loc_820CAF80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820cab80
	ctx.lr = 0x820CAF80;
	sub_820CAB80(ctx, base);
loc_820CAF80:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r28,r31,4
	ctx.r28.s64 = ctx.r31.s64 + 4;
	// addi r4,r11,-26180
	ctx.r4.s64 = ctx.r11.s64 + -26180;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x822ea970
	ctx.lr = 0x820CAF98;
	sub_822EA970(ctx, base);
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820cafd0
	if (ctx.cr0.eq) goto loc_820CAFD0;
loc_820CAFAC:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,46
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 46, ctx.xer);
	// bne cr6,0x820cafc0
	if (!ctx.cr6.eq) goto loc_820CAFC0;
	// stb r29,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r29.u8);
	// b 0x820cafc4
	goto loc_820CAFC4;
loc_820CAFC0:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_820CAFC4:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820cafac
	if (!ctx.cr6.eq) goto loc_820CAFAC;
loc_820CAFD0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r27,r11,-26940
	ctx.r27.s64 = ctx.r11.s64 + -26940;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x822ea970
	ctx.lr = 0x820CAFE0;
	sub_822EA970(ctx, base);
	// li r3,164
	ctx.r3.s64 = 164;
	// bl 0x820d4cd8
	ctx.lr = 0x820CAFE8;
	sub_820D4CD8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820caffc
	if (ctx.cr0.eq) goto loc_820CAFFC;
	// bl 0x820c9df8
	ctx.lr = 0x820CAFF4;
	sub_820C9DF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x820cb000
	goto loc_820CB000;
loc_820CAFFC:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_820CB000:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x820cb020
	if (!ctx.cr6.eq) goto loc_820CB020;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-26248
	ctx.r3.s64 = ctx.r11.s64 + -26248;
	// bl 0x821313e0
	ctx.lr = 0x820CB014;
	sub_821313E0(ctx, base);
loc_820CB014:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x820cb100
	goto loc_820CB100;
loc_820CB020:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ca630
	ctx.lr = 0x820CB030;
	sub_820CA630(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x820cb0c4
	if (!ctx.cr0.lt) goto loc_820CB0C4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,-26268
	ctx.r4.s64 = ctx.r11.s64 + -26268;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822ea970
	ctx.lr = 0x820CB04C;
	sub_822EA970(ctx, base);
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820cb080
	if (ctx.cr0.eq) goto loc_820CB080;
loc_820CB05C:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,46
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 46, ctx.xer);
	// bne cr6,0x820cb070
	if (!ctx.cr6.eq) goto loc_820CB070;
	// stb r29,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r29.u8);
	// b 0x820cb074
	goto loc_820CB074;
loc_820CB070:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_820CB074:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820cb05c
	if (!ctx.cr6.eq) goto loc_820CB05C;
loc_820CB080:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x822ea970
	ctx.lr = 0x820CB088;
	sub_822EA970(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ca630
	ctx.lr = 0x820CB098;
	sub_820CA630(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x820cb0c4
	if (!ctx.cr0.lt) goto loc_820CB0C4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,-26308
	ctx.r3.s64 = ctx.r11.s64 + -26308;
loc_820CB0AC:
	// bl 0x821313e0
	ctx.lr = 0x820CB0B0;
	sub_821313E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ca598
	ctx.lr = 0x820CB0B8;
	sub_820CA598(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d4d38
	ctx.lr = 0x820CB0C0;
	sub_820D4D38(ctx, base);
	// b 0x820cb014
	goto loc_820CB014;
loc_820CB0C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c9f10
	ctx.lr = 0x820CB0CC;
	sub_820C9F10(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge 0x820cb0e0
	if (!ctx.cr0.lt) goto loc_820CB0E0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-26336
	ctx.r3.s64 = ctx.r11.s64 + -26336;
	// b 0x820cb0ac
	goto loc_820CB0AC;
loc_820CB0E0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820cb0f8
	if (ctx.cr6.eq) goto loc_820CB0F8;
	// bl 0x822f8ae0
	ctx.lr = 0x820CB0F0;
	sub_822F8AE0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_820CB0F8:
	// stwx r31,r25,r26
	PPC_STORE_U32(ctx.r25.u32 + ctx.r26.u32, ctx.r31.u32);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_820CB100:
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
loc_820CB104:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x822e992c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CB110"))) PPC_WEAK_FUNC(sub_820CB110);
PPC_FUNC_IMPL(__imp__sub_820CB110) {
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
	// bl 0x822f8d48
	ctx.lr = 0x820CB128;
	sub_822F8D48(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x820cb19c
	if (ctx.cr6.gt) goto loc_820CB19C;
	// lis r12,-32254
	ctx.r12.s64 = -2113798144;
	// addi r12,r12,-26112
	ctx.r12.s64 = ctx.r12.s64 + -26112;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32243
	ctx.r12.s64 = -2113077248;
	// addi r12,r12,-20132
	ctx.r12.s64 = ctx.r12.s64 + -20132;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_820CB19C;
	case 1:
		goto loc_820CB17C;
	case 2:
		goto loc_820CB15C;
	case 3:
		goto loc_820CB164;
	case 4:
		goto loc_820CB16C;
	case 5:
		goto loc_820CB174;
	case 6:
		goto loc_820CB184;
	case 7:
		goto loc_820CB18C;
	case 8:
		goto loc_820CB194;
	default:
		__builtin_unreachable();
	}
loc_820CB15C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x820cb1a0
	goto loc_820CB1A0;
loc_820CB164:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x820cb1a0
	goto loc_820CB1A0;
loc_820CB16C:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x820cb1a0
	goto loc_820CB1A0;
loc_820CB174:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x820cb1a0
	goto loc_820CB1A0;
loc_820CB17C:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x820cb1a0
	goto loc_820CB1A0;
loc_820CB184:
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x820cb1a0
	goto loc_820CB1A0;
loc_820CB18C:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x820cb1a0
	goto loc_820CB1A0;
loc_820CB194:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x820cb1a0
	goto loc_820CB1A0;
loc_820CB19C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820CB1A0:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_820CB1B8"))) PPC_WEAK_FUNC(sub_820CB1B8);
PPC_FUNC_IMPL(__imp__sub_820CB1B8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// b 0x8208ce40
	sub_8208CE40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CB1C8"))) PPC_WEAK_FUNC(sub_820CB1C8);
PPC_FUNC_IMPL(__imp__sub_820CB1C8) {
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
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,7
	ctx.r5.s64 = 7;
	// lwz r4,9764(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9764);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820c9bc0
	ctx.lr = 0x820CB1F8;
	sub_820C9BC0(ctx, base);
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

__attribute__((alias("__imp__sub_820CB210"))) PPC_WEAK_FUNC(sub_820CB210);
PPC_FUNC_IMPL(__imp__sub_820CB210) {
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
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// lis r4,-32205
	ctx.r4.s64 = -2110586880;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r5,24
	ctx.r5.s64 = 24;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// lwz r4,9764(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 9764);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820c9bc0
	ctx.lr = 0x820CB260;
	sub_820C9BC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_820CB27C"))) PPC_WEAK_FUNC(sub_820CB27C);
PPC_FUNC_IMPL(__imp__sub_820CB27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CB280"))) PPC_WEAK_FUNC(sub_820CB280);
PPC_FUNC_IMPL(__imp__sub_820CB280) {
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
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,25
	ctx.r5.s64 = 25;
	// lwz r4,9764(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9764);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820c9bc0
	ctx.lr = 0x820CB2B0;
	sub_820C9BC0(ctx, base);
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

__attribute__((alias("__imp__sub_820CB2C8"))) PPC_WEAK_FUNC(sub_820CB2C8);
PPC_FUNC_IMPL(__imp__sub_820CB2C8) {
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
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,26
	ctx.r5.s64 = 26;
	// lwz r4,9764(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9764);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820c9bc0
	ctx.lr = 0x820CB2F8;
	sub_820C9BC0(ctx, base);
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

__attribute__((alias("__imp__sub_820CB310"))) PPC_WEAK_FUNC(sub_820CB310);
PPC_FUNC_IMPL(__imp__sub_820CB310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x820CB318;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// lis r4,-32205
	ctx.r4.s64 = -2110586880;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,10
	ctx.r5.s64 = 10;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// lwz r4,9764(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 9764);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x820c9bc0
	ctx.lr = 0x820CB364;
	sub_820C9BC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CB370"))) PPC_WEAK_FUNC(sub_820CB370);
PPC_FUNC_IMPL(__imp__sub_820CB370) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// lis r4,-32205
	ctx.r4.s64 = -2110586880;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r5,11
	ctx.r5.s64 = 11;
	// lwz r4,9764(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 9764);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// bl 0x820c9bc0
	ctx.lr = 0x820CB3C8;
	sub_820C9BC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_820CB3E4"))) PPC_WEAK_FUNC(sub_820CB3E4);
PPC_FUNC_IMPL(__imp__sub_820CB3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CB3E8"))) PPC_WEAK_FUNC(sub_820CB3E8);
PPC_FUNC_IMPL(__imp__sub_820CB3E8) {
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
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,12
	ctx.r5.s64 = 12;
	// lwz r4,9764(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9764);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820c9bc0
	ctx.lr = 0x820CB418;
	sub_820C9BC0(ctx, base);
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

__attribute__((alias("__imp__sub_820CB430"))) PPC_WEAK_FUNC(sub_820CB430);
PPC_FUNC_IMPL(__imp__sub_820CB430) {
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
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,13
	ctx.r5.s64 = 13;
	// lwz r4,9764(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9764);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820c9bc0
	ctx.lr = 0x820CB460;
	sub_820C9BC0(ctx, base);
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

__attribute__((alias("__imp__sub_820CB478"))) PPC_WEAK_FUNC(sub_820CB478);
PPC_FUNC_IMPL(__imp__sub_820CB478) {
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
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// lis r9,-32205
	ctx.r9.s64 = -2110586880;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// li r5,27
	ctx.r5.s64 = 27;
	// lwz r4,9764(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 9764);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820c9bc0
	ctx.lr = 0x820CB4C0;
	sub_820C9BC0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_820CB4E4"))) PPC_WEAK_FUNC(sub_820CB4E4);
PPC_FUNC_IMPL(__imp__sub_820CB4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CB4E8"))) PPC_WEAK_FUNC(sub_820CB4E8);
PPC_FUNC_IMPL(__imp__sub_820CB4E8) {
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
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// addi r8,r1,132
	ctx.r8.s64 = ctx.r1.s64 + 132;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,14
	ctx.r5.s64 = 14;
	// lwz r4,9764(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9764);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820c9bc0
	ctx.lr = 0x820CB51C;
	sub_820C9BC0(ctx, base);
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

__attribute__((alias("__imp__sub_820CB534"))) PPC_WEAK_FUNC(sub_820CB534);
PPC_FUNC_IMPL(__imp__sub_820CB534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CB538"))) PPC_WEAK_FUNC(sub_820CB538);
PPC_FUNC_IMPL(__imp__sub_820CB538) {
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
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,15
	ctx.r5.s64 = 15;
	// lwz r4,9764(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9764);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820c9bc0
	ctx.lr = 0x820CB568;
	sub_820C9BC0(ctx, base);
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

__attribute__((alias("__imp__sub_820CB580"))) PPC_WEAK_FUNC(sub_820CB580);
PPC_FUNC_IMPL(__imp__sub_820CB580) {
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
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// stw r6,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r6.u32);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r8,r1,156
	ctx.r8.s64 = ctx.r1.s64 + 156;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r4,9764(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9764);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820c9bc0
	ctx.lr = 0x820CB5BC;
	sub_820C9BC0(ctx, base);
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

__attribute__((alias("__imp__sub_820CB5D4"))) PPC_WEAK_FUNC(sub_820CB5D4);
PPC_FUNC_IMPL(__imp__sub_820CB5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CB5D8"))) PPC_WEAK_FUNC(sub_820CB5D8);
PPC_FUNC_IMPL(__imp__sub_820CB5D8) {
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
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// stw r6,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r6.u32);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r8,r1,140
	ctx.r8.s64 = ctx.r1.s64 + 140;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,17
	ctx.r5.s64 = 17;
	// lwz r4,9764(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9764);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820c9bc0
	ctx.lr = 0x820CB60C;
	sub_820C9BC0(ctx, base);
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

__attribute__((alias("__imp__sub_820CB624"))) PPC_WEAK_FUNC(sub_820CB624);
PPC_FUNC_IMPL(__imp__sub_820CB624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CB628"))) PPC_WEAK_FUNC(sub_820CB628);
PPC_FUNC_IMPL(__imp__sub_820CB628) {
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
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,18
	ctx.r5.s64 = 18;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,9764(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9764);
	// bl 0x820c9bc0
	ctx.lr = 0x820CB654;
	sub_820C9BC0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x820cb66c
	if (!ctx.cr0.eq) goto loc_820CB66C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_820CB66C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CB67C"))) PPC_WEAK_FUNC(sub_820CB67C);
PPC_FUNC_IMPL(__imp__sub_820CB67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CB680"))) PPC_WEAK_FUNC(sub_820CB680);
PPC_FUNC_IMPL(__imp__sub_820CB680) {
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
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,19
	ctx.r5.s64 = 19;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,9764(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9764);
	// bl 0x820c9bc0
	ctx.lr = 0x820CB6AC;
	sub_820C9BC0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x820cb6c4
	if (!ctx.cr0.eq) goto loc_820CB6C4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_820CB6C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CB6D4"))) PPC_WEAK_FUNC(sub_820CB6D4);
PPC_FUNC_IMPL(__imp__sub_820CB6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CB6D8"))) PPC_WEAK_FUNC(sub_820CB6D8);
PPC_FUNC_IMPL(__imp__sub_820CB6D8) {
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
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,20
	ctx.r5.s64 = 20;
	// lwz r4,9764(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9764);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x820c9bc0
	ctx.lr = 0x820CB70C;
	sub_820C9BC0(ctx, base);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CB720"))) PPC_WEAK_FUNC(sub_820CB720);
PPC_FUNC_IMPL(__imp__sub_820CB720) {
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
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,21
	ctx.r5.s64 = 21;
	// lwz r4,9764(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9764);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x820c9bc0
	ctx.lr = 0x820CB754;
	sub_820C9BC0(ctx, base);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CB768"))) PPC_WEAK_FUNC(sub_820CB768);
PPC_FUNC_IMPL(__imp__sub_820CB768) {
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
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,22
	ctx.r5.s64 = 22;
	// lwz r4,9764(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9764);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x820c9bc0
	ctx.lr = 0x820CB79C;
	sub_820C9BC0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CB7B0"))) PPC_WEAK_FUNC(sub_820CB7B0);
PPC_FUNC_IMPL(__imp__sub_820CB7B0) {
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
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,40
	ctx.r5.s64 = 40;
	// lwz r4,9764(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9764);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820c9bc0
	ctx.lr = 0x820CB7E0;
	sub_820C9BC0(ctx, base);
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

__attribute__((alias("__imp__sub_820CB7F8"))) PPC_WEAK_FUNC(sub_820CB7F8);
PPC_FUNC_IMPL(__imp__sub_820CB7F8) {
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
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,23
	ctx.r5.s64 = 23;
	// lwz r4,9764(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9764);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820c9bc0
	ctx.lr = 0x820CB828;
	sub_820C9BC0(ctx, base);
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

__attribute__((alias("__imp__sub_820CB840"))) PPC_WEAK_FUNC(sub_820CB840);
PPC_FUNC_IMPL(__imp__sub_820CB840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x820CB848;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-12272
	ctx.r31.s64 = ctx.r11.s64 + -12272;
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// sth r6,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r6.u16);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// bl 0x822e9960
	ctx.lr = 0x820CB87C;
	sub_822E9960(ctx, base);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,29
	ctx.r5.s64 = 29;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,9764(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9764);
	// bl 0x820c9bc0
	ctx.lr = 0x820CB89C;
	sub_820C9BC0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CB8A8"))) PPC_WEAK_FUNC(sub_820CB8A8);
PPC_FUNC_IMPL(__imp__sub_820CB8A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x820CB8B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r4,9764(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9764);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,28
	ctx.r5.s64 = 28;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820c9bc0
	ctx.lr = 0x820CB8E4;
	sub_820C9BC0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820cb930
	if (ctx.cr0.eq) goto loc_820CB930;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x820cb918
	if (!ctx.cr6.lt) goto loc_820CB918;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// b 0x820cb938
	goto loc_820CB938;
loc_820CB918:
	// lhz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// bl 0x822e9960
	ctx.lr = 0x820CB930;
	sub_822E9960(ctx, base);
loc_820CB930:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r11.u64);
loc_820CB938:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CB944"))) PPC_WEAK_FUNC(sub_820CB944);
PPC_FUNC_IMPL(__imp__sub_820CB944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CB948"))) PPC_WEAK_FUNC(sub_820CB948);
PPC_FUNC_IMPL(__imp__sub_820CB948) {
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
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// bl 0x820da918
	ctx.lr = 0x820CB974;
	sub_820DA918(ctx, base);
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

__attribute__((alias("__imp__sub_820CB98C"))) PPC_WEAK_FUNC(sub_820CB98C);
PPC_FUNC_IMPL(__imp__sub_820CB98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CB990"))) PPC_WEAK_FUNC(sub_820CB990);
PPC_FUNC_IMPL(__imp__sub_820CB990) {
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
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// bl 0x820da9c8
	ctx.lr = 0x820CB9BC;
	sub_820DA9C8(ctx, base);
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

__attribute__((alias("__imp__sub_820CB9D4"))) PPC_WEAK_FUNC(sub_820CB9D4);
PPC_FUNC_IMPL(__imp__sub_820CB9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CB9D8"))) PPC_WEAK_FUNC(sub_820CB9D8);
PPC_FUNC_IMPL(__imp__sub_820CB9D8) {
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
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// bl 0x820da898
	ctx.lr = 0x820CBA04;
	sub_820DA898(ctx, base);
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

__attribute__((alias("__imp__sub_820CBA1C"))) PPC_WEAK_FUNC(sub_820CBA1C);
PPC_FUNC_IMPL(__imp__sub_820CBA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CBA20"))) PPC_WEAK_FUNC(sub_820CBA20);
PPC_FUNC_IMPL(__imp__sub_820CBA20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x820CBA28;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,4100
	ctx.r11.s64 = 268697600;
	// li r28,0
	ctx.r28.s64 = 0;
	// ori r11,r11,21
	ctx.r11.u64 = ctx.r11.u64 | 21;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822d8090
	ctx.lr = 0x820CBA6C;
	sub_822D8090(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,122
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 122, ctx.xer);
	// beq cr6,0x820cba90
	if (ctx.cr6.eq) goto loc_820CBA90;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-26100
	ctx.r3.s64 = ctx.r11.s64 + -26100;
	// bl 0x821313e0
	ctx.lr = 0x820CBA84;
	sub_821313E0(ctx, base);
loc_820CBA84:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x820cbb2c
	goto loc_820CBB2C;
loc_820CBA90:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x820d4cd8
	ctx.lr = 0x820CBA98;
	sub_820D4CD8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822e9ff0
	ctx.lr = 0x820CBAA8;
	sub_822E9FF0(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822d8090
	ctx.lr = 0x820CBAC8;
	sub_822D8090(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x820cbae8
	if (ctx.cr0.eq) goto loc_820CBAE8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-26100
	ctx.r3.s64 = ctx.r11.s64 + -26100;
	// bl 0x821313e0
	ctx.lr = 0x820CBADC;
	sub_821313E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820d4d38
	ctx.lr = 0x820CBAE4;
	sub_820D4D38(ctx, base);
	// b 0x820cba84
	goto loc_820CBA84;
loc_820CBAE8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820cbb14
	if (ctx.cr6.lt) goto loc_820CBB14;
	// beq cr6,0x820cbb0c
	if (ctx.cr6.eq) goto loc_820CBB0C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x820cbb28
	if (!ctx.cr6.lt) goto loc_820CBB28;
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x820cbb18
	goto loc_820CBB18;
loc_820CBB0C:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x820cbb18
	goto loc_820CBB18;
loc_820CBB14:
	// li r4,2
	ctx.r4.s64 = 2;
loc_820CBB18:
	// addi r11,r29,2
	ctx.r11.s64 = ctx.r29.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// bl 0x82080250
	ctx.lr = 0x820CBB28;
	sub_82080250(ctx, base);
loc_820CBB28:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_820CBB2C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CBB3C"))) PPC_WEAK_FUNC(sub_820CBB3C);
PPC_FUNC_IMPL(__imp__sub_820CBB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CBB40"))) PPC_WEAK_FUNC(sub_820CBB40);
PPC_FUNC_IMPL(__imp__sub_820CBB40) {
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x822f8de8
	ctx.lr = 0x820CBB5C;
	sub_822F8DE8(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x820cbb80
	if (ctx.cr0.eq) goto loc_820CBB80;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-26064
	ctx.r3.s64 = ctx.r11.s64 + -26064;
	// bl 0x821313e0
	ctx.lr = 0x820CBB70;
	sub_821313E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x820cbb88
	goto loc_820CBB88;
loc_820CBB80:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_820CBB88:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_820CBBA4"))) PPC_WEAK_FUNC(sub_820CBBA4);
PPC_FUNC_IMPL(__imp__sub_820CBBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CBBA8"))) PPC_WEAK_FUNC(sub_820CBBA8);
PPC_FUNC_IMPL(__imp__sub_820CBBA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x820CBBB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,9764(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9764);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,35
	ctx.r5.s64 = 35;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x820c9bc0
	ctx.lr = 0x820CBBE0;
	sub_820C9BC0(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820cbbfc
	if (!ctx.cr0.eq) goto loc_820CBBFC;
loc_820CBBEC:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x820cbc2c
	goto loc_820CBC2C;
loc_820CBBFC:
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// blt cr6,0x820cbc3c
	if (ctx.cr6.lt) goto loc_820CBC3C;
	// bne cr6,0x820cbc24
	if (!ctx.cr6.eq) goto loc_820CBC24;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
loc_820CBC14:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f8df8
	ctx.lr = 0x820CBC1C;
	sub_822F8DF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x820cbbec
	if (!ctx.cr0.eq) goto loc_820CBBEC;
loc_820CBC24:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_820CBC2C:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
loc_820CBC3C:
	// bl 0x82080ae0
	ctx.lr = 0x820CBC40;
	sub_82080AE0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x820cbc14
	goto loc_820CBC14;
}

__attribute__((alias("__imp__sub_820CBC50"))) PPC_WEAK_FUNC(sub_820CBC50);
PPC_FUNC_IMPL(__imp__sub_820CBC50) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822f8f10
	ctx.lr = 0x820CBC68;
	sub_822F8F10(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820cbc78
	if (ctx.cr0.eq) goto loc_820CBC78;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820cbc80
	goto loc_820CBC80;
loc_820CBC78:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
loc_820CBC80:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CBC90"))) PPC_WEAK_FUNC(sub_820CBC90);
PPC_FUNC_IMPL(__imp__sub_820CBC90) {
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
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// lis r4,-32205
	ctx.r4.s64 = -2110586880;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// lwz r4,9764(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 9764);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820c9bc0
	ctx.lr = 0x820CBCE0;
	sub_820C9BC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_820CBCFC"))) PPC_WEAK_FUNC(sub_820CBCFC);
PPC_FUNC_IMPL(__imp__sub_820CBCFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CBD00"))) PPC_WEAK_FUNC(sub_820CBD00);
PPC_FUNC_IMPL(__imp__sub_820CBD00) {
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
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r4,9764(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9764);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820c9bc0
	ctx.lr = 0x820CBD30;
	sub_820C9BC0(ctx, base);
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

__attribute__((alias("__imp__sub_820CBD48"))) PPC_WEAK_FUNC(sub_820CBD48);
PPC_FUNC_IMPL(__imp__sub_820CBD48) {
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
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,9764(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9764);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820c9bc0
	ctx.lr = 0x820CBD78;
	sub_820C9BC0(ctx, base);
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

__attribute__((alias("__imp__sub_820CBD90"))) PPC_WEAK_FUNC(sub_820CBD90);
PPC_FUNC_IMPL(__imp__sub_820CBD90) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x822f8f10
	ctx.lr = 0x820CBDB8;
	sub_822F8F10(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820cbdc8
	if (ctx.cr0.eq) goto loc_820CBDC8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820cbdd0
	goto loc_820CBDD0;
loc_820CBDC8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
loc_820CBDD0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x820cbdf0
	if (!ctx.cr0.eq) goto loc_820CBDF0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x820cbe10
	goto loc_820CBE10;
loc_820CBDF0:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r4,9764(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9764);
	// bl 0x820c9bc0
	ctx.lr = 0x820CBE0C;
	sub_820C9BC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820CBE10:
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

__attribute__((alias("__imp__sub_820CBE28"))) PPC_WEAK_FUNC(sub_820CBE28);
PPC_FUNC_IMPL(__imp__sub_820CBE28) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822f8f10
	ctx.lr = 0x820CBE48;
	sub_822F8F10(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820cbe58
	if (ctx.cr0.eq) goto loc_820CBE58;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820cbe60
	goto loc_820CBE60;
loc_820CBE58:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
loc_820CBE60:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x820cbe80
	if (!ctx.cr0.eq) goto loc_820CBE80;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x820cbea0
	goto loc_820CBEA0;
loc_820CBE80:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,6
	ctx.r5.s64 = 6;
	// lwz r4,9764(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9764);
	// bl 0x820c9bc0
	ctx.lr = 0x820CBE9C;
	sub_820C9BC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820CBEA0:
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

__attribute__((alias("__imp__sub_820CBEB4"))) PPC_WEAK_FUNC(sub_820CBEB4);
PPC_FUNC_IMPL(__imp__sub_820CBEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CBEB8"))) PPC_WEAK_FUNC(sub_820CBEB8);
PPC_FUNC_IMPL(__imp__sub_820CBEB8) {
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
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,34
	ctx.r5.s64 = 34;
	// lwz r4,9764(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9764);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x820c9bc0
	ctx.lr = 0x820CBEEC;
	sub_820C9BC0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820cbf10
	if (ctx.cr0.eq) goto loc_820CBF10;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-26032
	ctx.r3.s64 = ctx.r11.s64 + -26032;
	// bl 0x821313e0
	ctx.lr = 0x820CBF10;
	sub_821313E0(ctx, base);
loc_820CBF10:
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CBF24"))) PPC_WEAK_FUNC(sub_820CBF24);
PPC_FUNC_IMPL(__imp__sub_820CBF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CBF28"))) PPC_WEAK_FUNC(sub_820CBF28);
PPC_FUNC_IMPL(__imp__sub_820CBF28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-25980
	ctx.r3.s64 = ctx.r11.s64 + -25980;
	// b 0x822f8f60
	sub_822F8F60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CBF38"))) PPC_WEAK_FUNC(sub_820CBF38);
PPC_FUNC_IMPL(__imp__sub_820CBF38) {
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
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,39
	ctx.r5.s64 = 39;
	// lwz r4,9764(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9764);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x820c9bc0
	ctx.lr = 0x820CBF6C;
	sub_820C9BC0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820cbf90
	if (ctx.cr0.eq) goto loc_820CBF90;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-25960
	ctx.r3.s64 = ctx.r11.s64 + -25960;
	// bl 0x821313e0
	ctx.lr = 0x820CBF90;
	sub_821313E0(ctx, base);
loc_820CBF90:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CBFA4"))) PPC_WEAK_FUNC(sub_820CBFA4);
PPC_FUNC_IMPL(__imp__sub_820CBFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CBFA8"))) PPC_WEAK_FUNC(sub_820CBFA8);
PPC_FUNC_IMPL(__imp__sub_820CBFA8) {
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
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,35
	ctx.r5.s64 = 35;
	// lwz r4,9764(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9764);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x820c9bc0
	ctx.lr = 0x820CBFDC;
	sub_820C9BC0(ctx, base);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CBFF0"))) PPC_WEAK_FUNC(sub_820CBFF0);
PPC_FUNC_IMPL(__imp__sub_820CBFF0) {
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
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,36
	ctx.r5.s64 = 36;
	// lwz r4,9764(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9764);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x820c9bc0
	ctx.lr = 0x820CC024;
	sub_820C9BC0(ctx, base);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CC038"))) PPC_WEAK_FUNC(sub_820CC038);
PPC_FUNC_IMPL(__imp__sub_820CC038) {
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
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,37
	ctx.r5.s64 = 37;
	// lwz r4,9764(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9764);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x820c9bc0
	ctx.lr = 0x820CC06C;
	sub_820C9BC0(ctx, base);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CC080"))) PPC_WEAK_FUNC(sub_820CC080);
PPC_FUNC_IMPL(__imp__sub_820CC080) {
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
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,38
	ctx.r5.s64 = 38;
	// lwz r4,9764(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9764);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x820c9bc0
	ctx.lr = 0x820CC0B4;
	sub_820C9BC0(ctx, base);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CC0C8"))) PPC_WEAK_FUNC(sub_820CC0C8);
PPC_FUNC_IMPL(__imp__sub_820CC0C8) {
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
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,30
	ctx.r5.s64 = 30;
	// lwz r4,9764(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9764);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x820c9bc0
	ctx.lr = 0x820CC0FC;
	sub_820C9BC0(ctx, base);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CC110"))) PPC_WEAK_FUNC(sub_820CC110);
PPC_FUNC_IMPL(__imp__sub_820CC110) {
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
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,31
	ctx.r5.s64 = 31;
	// lwz r4,9764(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9764);
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x820c9bc0
	ctx.lr = 0x820CC144;
	sub_820C9BC0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CC158"))) PPC_WEAK_FUNC(sub_820CC158);
PPC_FUNC_IMPL(__imp__sub_820CC158) {
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
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,41
	ctx.r5.s64 = 41;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,9764(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9764);
	// bl 0x820c9bc0
	ctx.lr = 0x820CC184;
	sub_820C9BC0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CC194"))) PPC_WEAK_FUNC(sub_820CC194);
PPC_FUNC_IMPL(__imp__sub_820CC194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CC198"))) PPC_WEAK_FUNC(sub_820CC198);
PPC_FUNC_IMPL(__imp__sub_820CC198) {
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
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,42
	ctx.r5.s64 = 42;
	// lwz r4,9764(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9764);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x820c9bc0
	ctx.lr = 0x820CC1CC;
	sub_820C9BC0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CC1E0"))) PPC_WEAK_FUNC(sub_820CC1E0);
PPC_FUNC_IMPL(__imp__sub_820CC1E0) {
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
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,43
	ctx.r5.s64 = 43;
	// lwz r4,9764(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9764);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x820c9bc0
	ctx.lr = 0x820CC214;
	sub_820C9BC0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CC228"))) PPC_WEAK_FUNC(sub_820CC228);
PPC_FUNC_IMPL(__imp__sub_820CC228) {
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
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,44
	ctx.r5.s64 = 44;
	// lwz r4,9764(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9764);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x820c9bc0
	ctx.lr = 0x820CC25C;
	sub_820C9BC0(ctx, base);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CC270"))) PPC_WEAK_FUNC(sub_820CC270);
PPC_FUNC_IMPL(__imp__sub_820CC270) {
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
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// std r4,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// addi r8,r1,136
	ctx.r8.s64 = ctx.r1.s64 + 136;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,45
	ctx.r5.s64 = 45;
	// lwz r4,9764(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9764);
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x820c9bc0
	ctx.lr = 0x820CC2A8;
	sub_820C9BC0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CC2BC"))) PPC_WEAK_FUNC(sub_820CC2BC);
PPC_FUNC_IMPL(__imp__sub_820CC2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CC2C0"))) PPC_WEAK_FUNC(sub_820CC2C0);
PPC_FUNC_IMPL(__imp__sub_820CC2C0) {
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
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,46
	ctx.r5.s64 = 46;
	// lwz r4,9764(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9764);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x820c9bc0
	ctx.lr = 0x820CC2F4;
	sub_820C9BC0(ctx, base);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CC308"))) PPC_WEAK_FUNC(sub_820CC308);
PPC_FUNC_IMPL(__imp__sub_820CC308) {
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
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,48
	ctx.r5.s64 = 48;
	// lwz r4,9764(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9764);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820c9bc0
	ctx.lr = 0x820CC338;
	sub_820C9BC0(ctx, base);
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

__attribute__((alias("__imp__sub_820CC350"))) PPC_WEAK_FUNC(sub_820CC350);
PPC_FUNC_IMPL(__imp__sub_820CC350) {
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
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,49
	ctx.r5.s64 = 49;
	// lwz r4,9764(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9764);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820c9bc0
	ctx.lr = 0x820CC380;
	sub_820C9BC0(ctx, base);
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

__attribute__((alias("__imp__sub_820CC398"))) PPC_WEAK_FUNC(sub_820CC398);
PPC_FUNC_IMPL(__imp__sub_820CC398) {
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
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,50
	ctx.r5.s64 = 50;
	// lwz r4,9764(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9764);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820c9bc0
	ctx.lr = 0x820CC3C8;
	sub_820C9BC0(ctx, base);
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

__attribute__((alias("__imp__sub_820CC3E0"))) PPC_WEAK_FUNC(sub_820CC3E0);
PPC_FUNC_IMPL(__imp__sub_820CC3E0) {
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
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,47
	ctx.r5.s64 = 47;
	// lwz r4,9764(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9764);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820c9bc0
	ctx.lr = 0x820CC410;
	sub_820C9BC0(ctx, base);
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

__attribute__((alias("__imp__sub_820CC428"))) PPC_WEAK_FUNC(sub_820CC428);
PPC_FUNC_IMPL(__imp__sub_820CC428) {
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
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,51
	ctx.r5.s64 = 51;
	// lwz r4,9764(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9764);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820c9bc0
	ctx.lr = 0x820CC458;
	sub_820C9BC0(ctx, base);
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

__attribute__((alias("__imp__sub_820CC470"))) PPC_WEAK_FUNC(sub_820CC470);
PPC_FUNC_IMPL(__imp__sub_820CC470) {
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
	// addis r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 131072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-6000
	ctx.r11.s64 = ctx.r11.s64 + -6000;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820cc4b4
	if (ctx.cr6.eq) goto loc_820CC4B4;
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820CC4AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x820cc4c4
	goto loc_820CC4C4;
loc_820CC4B4:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_820CC4C4:
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

__attribute__((alias("__imp__sub_820CC4D8"))) PPC_WEAK_FUNC(sub_820CC4D8);
PPC_FUNC_IMPL(__imp__sub_820CC4D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x820CC4E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-25912
	ctx.r4.s64 = ctx.r11.s64 + -25912;
	// li r5,20
	ctx.r5.s64 = 20;
	// bl 0x822e9960
	ctx.lr = 0x820CC4F8;
	sub_822E9960(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,24320
	ctx.r4.s64 = ctx.r11.s64 + 24320;
	// bl 0x820cd410
	ctx.lr = 0x820CC508;
	sub_820CD410(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x820cc51c
	if (!ctx.cr6.eq) goto loc_820CC51C;
loc_820CC514:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x820cc57c
	goto loc_820CC57C;
loc_820CC51C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820cd558
	ctx.lr = 0x820CC524;
	sub_820CD558(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r29,1
	ctx.r3.s64 = ctx.r29.s64 + 1;
	// bl 0x820d4cd8
	ctx.lr = 0x820CC530;
	sub_820D4CD8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x820cc514
	if (ctx.cr0.eq) goto loc_820CC514;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820cd460
	ctx.lr = 0x820CC54C;
	sub_820CD460(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x820cc514
	if (!ctx.cr6.eq) goto loc_820CC514;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stbx r11,r31,r29
	PPC_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// bl 0x822ea960
	ctx.lr = 0x820CC564;
	sub_822EA960(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d4d38
	ctx.lr = 0x820CC570;
	sub_820D4D38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820cd560
	ctx.lr = 0x820CC578;
	sub_820CD560(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_820CC57C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CC584"))) PPC_WEAK_FUNC(sub_820CC584);
PPC_FUNC_IMPL(__imp__sub_820CC584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CC588"))) PPC_WEAK_FUNC(sub_820CC588);
PPC_FUNC_IMPL(__imp__sub_820CC588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98dc
	ctx.lr = 0x820CC590;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// addis r25,r31,2
	ctx.r25.s64 = ctx.r31.s64 + 131072;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r25,r25,-6020
	ctx.r25.s64 = ctx.r25.s64 + -6020;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// li r7,100
	ctx.r7.s64 = 100;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// bl 0x822f8f18
	ctx.lr = 0x820CC5D0;
	sub_822F8F18(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x820cc6ac
	if (!ctx.cr0.eq) goto loc_820CC6AC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820cc6ac
	if (ctx.cr6.eq) goto loc_820CC6AC;
	// addis r30,r31,2
	ctx.r30.s64 = ctx.r31.s64 + 131072;
	// addi r30,r30,-6012
	ctx.r30.s64 = ctx.r30.s64 + -6012;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820cc60c
	if (ctx.cr6.eq) goto loc_820CC60C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-25804
	ctx.r3.s64 = ctx.r11.s64 + -25804;
	// bl 0x821313e0
	ctx.lr = 0x820CC604;
	sub_821313E0(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x820d4d38
	ctx.lr = 0x820CC60C;
	sub_820D4D38(ctx, base);
loc_820CC60C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x820d4cd8
	ctx.lr = 0x820CC614;
	sub_820D4CD8(ctx, base);
	// addi r11,r26,31241
	ctx.r11.s64 = ctx.r26.s64 + 31241;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// addis r27,r31,2
	ctx.r27.s64 = ctx.r31.s64 + 131072;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r27,-6052
	ctx.r27.s64 = ctx.r27.s64 + -6052;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stwx r28,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r28.u32);
	// bl 0x822e9ff0
	ctx.lr = 0x820CC63C;
	sub_822E9FF0(ctx, base);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x822f8ff0
	ctx.lr = 0x820CC654;
	sub_822F8FF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,997
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 997, ctx.xer);
	// beq cr6,0x820cc67c
	if (ctx.cr6.eq) goto loc_820CC67C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-25840
	ctx.r3.s64 = ctx.r11.s64 + -25840;
	// bl 0x821313e0
	ctx.lr = 0x820CC66C;
	sub_821313E0(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x820d4d38
	ctx.lr = 0x820CC674;
	sub_820D4D38(ctx, base);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// b 0x820cc6b8
	goto loc_820CC6B8;
loc_820CC67C:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// ori r11,r11,59512
	ctx.r11.u64 = ctx.r11.u64 | 59512;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r9,r9,59528
	ctx.r9.u64 = ctx.r9.u64 | 59528;
	// ori r8,r8,59520
	ctx.r8.u64 = ctx.r8.u64 | 59520;
	// stwx r10,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// stwx r26,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r26.u32);
	// stwx r28,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r28.u32);
	// b 0x820cc6c0
	goto loc_820CC6C0;
loc_820CC6AC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-25892
	ctx.r3.s64 = ctx.r11.s64 + -25892;
	// bl 0x821313e0
	ctx.lr = 0x820CC6B8;
	sub_821313E0(ctx, base);
loc_820CC6B8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_820CC6C0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r28.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822e992c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CC6D0"))) PPC_WEAK_FUNC(sub_820CC6D0);
PPC_FUNC_IMPL(__imp__sub_820CC6D0) {
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
	// addi r11,r5,31241
	ctx.r11.s64 = ctx.r5.s64 + 31241;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x820cc718
	if (!ctx.cr6.gt) goto loc_820CC718;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r11,-25752
	ctx.r3.s64 = ctx.r11.s64 + -25752;
	// bl 0x821313e0
	ctx.lr = 0x820CC708;
	sub_821313E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x820cc738
	goto loc_820CC738;
loc_820CC718:
	// mulli r11,r5,100
	ctx.r11.s64 = ctx.r5.s64 * 100;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mulli r11,r11,312
	ctx.r11.s64 = ctx.r11.s64 * 312;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r11,r11,172
	ctx.r11.s64 = ctx.r11.s64 + 172;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
loc_820CC738:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_820CC754"))) PPC_WEAK_FUNC(sub_820CC754);
PPC_FUNC_IMPL(__imp__sub_820CC754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CC758"))) PPC_WEAK_FUNC(sub_820CC758);
PPC_FUNC_IMPL(__imp__sub_820CC758) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r10,r5,31241
	ctx.r10.s64 = ctx.r5.s64 + 31241;
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// lwzx r9,r10,r4
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x820cc7a0
	if (ctx.cr0.eq) goto loc_820CC7A0;
	// mulli r10,r5,31200
	ctx.r10.s64 = ctx.r5.s64 * 31200;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r10,r10,472
	ctx.r10.s64 = ctx.r10.s64 + 472;
loc_820CC784:
	// lwz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r31,r6
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x820cc7b4
	if (ctx.cr6.eq) goto loc_820CC7B4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,312
	ctx.r10.s64 = ctx.r10.s64 + 312;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x820cc784
	if (ctx.cr6.lt) goto loc_820CC784;
loc_820CC7A0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_820CC7A8:
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_820CC7B4:
	// mulli r10,r5,100
	ctx.r10.s64 = ctx.r5.s64 * 100;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mulli r11,r11,312
	ctx.r11.s64 = ctx.r11.s64 * 312;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r11,r11,172
	ctx.r11.s64 = ctx.r11.s64 + 172;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// b 0x820cc7a8
	goto loc_820CC7A8;
}

__attribute__((alias("__imp__sub_820CC7D4"))) PPC_WEAK_FUNC(sub_820CC7D4);
PPC_FUNC_IMPL(__imp__sub_820CC7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CC7D8"))) PPC_WEAK_FUNC(sub_820CC7D8);
PPC_FUNC_IMPL(__imp__sub_820CC7D8) {
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
	// addi r11,r5,31241
	ctx.r11.s64 = ctx.r5.s64 + 31241;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x820cc820
	if (!ctx.cr6.gt) goto loc_820CC820;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r11,-25672
	ctx.r3.s64 = ctx.r11.s64 + -25672;
	// bl 0x821313e0
	ctx.lr = 0x820CC810;
	sub_821313E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x820cc840
	goto loc_820CC840;
loc_820CC820:
	// mulli r11,r5,100
	ctx.r11.s64 = ctx.r5.s64 * 100;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mulli r11,r11,312
	ctx.r11.s64 = ctx.r11.s64 * 312;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r11,472(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
loc_820CC840:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_820CC85C"))) PPC_WEAK_FUNC(sub_820CC85C);
PPC_FUNC_IMPL(__imp__sub_820CC85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CC860"))) PPC_WEAK_FUNC(sub_820CC860);
PPC_FUNC_IMPL(__imp__sub_820CC860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,59512
	ctx.r11.u64 = ctx.r11.u64 | 59512;
	// lwzx r11,r4,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x820cc8a4
	if (ctx.cr6.eq) goto loc_820CC8A4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x820cc884
	if (ctx.cr6.eq) goto loc_820CC884;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x820cc8a8
	goto loc_820CC8A8;
loc_820CC884:
	// addi r10,r5,31241
	ctx.r10.s64 = ctx.r5.s64 + 31241;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwzx r10,r10,r4
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_820CC8A4:
	// li r10,4
	ctx.r10.s64 = 4;
loc_820CC8A8:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CC8C0"))) PPC_WEAK_FUNC(sub_820CC8C0);
PPC_FUNC_IMPL(__imp__sub_820CC8C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e0
	ctx.lr = 0x820CC8C8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r11,r29,31241
	ctx.r11.s64 = ctx.r29.s64 + 31241;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x820cc914
	if (!ctx.cr6.gt) goto loc_820CC914;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,-25568
	ctx.r3.s64 = ctx.r11.s64 + -25568;
loc_820CC8FC:
	// bl 0x821313e0
	ctx.lr = 0x820CC900;
	sub_821313E0(ctx, base);
loc_820CC900:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x820cc9e8
	goto loc_820CC9E8;
loc_820CC914:
	// lis r26,-32204
	ctx.r26.s64 = -2110521344;
	// lwz r11,-11760(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11760);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820cc968
	if (ctx.cr6.lt) goto loc_820CC968;
	// bne cr6,0x820cc900
	if (!ctx.cr6.eq) goto loc_820CC900;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r11,r11,59484
	ctx.r11.u64 = ctx.r11.u64 | 59484;
	// lwzx r11,r28,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x820cc954
	if (ctx.cr6.eq) goto loc_820CC954;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-11760(r26)
	PPC_STORE_U32(ctx.r26.u32 + -11760, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x820cc9ec
	goto loc_820CC9EC;
loc_820CC954:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x820cc9ec
	goto loc_820CC9EC;
loc_820CC968:
	// addis r30,r28,2
	ctx.r30.s64 = ctx.r28.s64 + 131072;
	// li r5,28
	ctx.r5.s64 = 28;
	// addi r30,r30,-6052
	ctx.r30.s64 = ctx.r30.s64 + -6052;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e9ff0
	ctx.lr = 0x820CC980;
	sub_822E9FF0(ctx, base);
	// mulli r11,r29,100
	ctx.r11.s64 = ctx.r29.s64 * 100;
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r8,r11,-11764
	ctx.r8.s64 = ctx.r11.s64 + -11764;
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r4,r11,16440
	ctx.r4.s64 = ctx.r11.s64 + 16440;
	// mulli r11,r10,312
	ctx.r11.s64 = ctx.r10.s64 * 312;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r11,164
	ctx.r5.s64 = ctx.r11.s64 + 164;
	// bl 0x822f8f20
	ctx.lr = 0x820CC9B8;
	sub_822F8F20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,997
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 997, ctx.xer);
	// beq cr6,0x820cc9d0
	if (ctx.cr6.eq) goto loc_820CC9D0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-25600
	ctx.r3.s64 = ctx.r11.s64 + -25600;
	// b 0x820cc8fc
	goto loc_820CC8FC;
loc_820CC9D0:
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r11,-11760(r26)
	PPC_STORE_U32(ctx.r26.u32 + -11760, ctx.r11.u32);
loc_820CC9E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820CC9EC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e9930
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CC9F4"))) PPC_WEAK_FUNC(sub_820CC9F4);
PPC_FUNC_IMPL(__imp__sub_820CC9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CC9F8"))) PPC_WEAK_FUNC(sub_820CC9F8);
PPC_FUNC_IMPL(__imp__sub_820CC9F8) {
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
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,16440
	ctx.r3.s64 = ctx.r11.s64 + 16440;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822f8f08
	ctx.lr = 0x820CCA1C;
	sub_822F8F08(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x820cca34
	if (!ctx.cr0.eq) goto loc_820CCA34;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x820cca40
	goto loc_820CCA40;
loc_820CCA34:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_820CCA40:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_820CCA58"))) PPC_WEAK_FUNC(sub_820CCA58);
PPC_FUNC_IMPL(__imp__sub_820CCA58) {
	PPC_FUNC_PROLOGUE();
	// b 0x822f9008
	sub_822F9008(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CCA5C"))) PPC_WEAK_FUNC(sub_820CCA5C);
PPC_FUNC_IMPL(__imp__sub_820CCA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CCA60"))) PPC_WEAK_FUNC(sub_820CCA60);
PPC_FUNC_IMPL(__imp__sub_820CCA60) {
	PPC_FUNC_PROLOGUE();
	// b 0x8230472c
	__imp__XGetGameRegion(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CCA64"))) PPC_WEAK_FUNC(sub_820CCA64);
PPC_FUNC_IMPL(__imp__sub_820CCA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CCA68"))) PPC_WEAK_FUNC(sub_820CCA68);
PPC_FUNC_IMPL(__imp__sub_820CCA68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x820CCA70;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addis r27,r31,2
	ctx.r27.s64 = ctx.r31.s64 + 131072;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r11,r11,59480
	ctx.r11.u64 = ctx.r11.u64 | 59480;
	// ori r10,r10,59512
	ctx.r10.u64 = ctx.r10.u64 | 59512;
	// ori r9,r9,59524
	ctx.r9.u64 = ctx.r9.u64 | 59524;
	// addi r27,r27,-6000
	ctx.r27.s64 = ctx.r27.s64 + -6000;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// stwx r30,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r30.u32);
	// stwx r30,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r30.u32);
	// stwx r30,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r30.u32);
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
	// bl 0x820cb110
	ctx.lr = 0x820CCAC0;
	sub_820CB110(ctx, base);
	// addis r29,r31,2
	ctx.r29.s64 = ctx.r31.s64 + 131072;
	// li r28,4
	ctx.r28.s64 = 4;
	// addi r29,r29,-6108
	ctx.r29.s64 = ctx.r29.s64 + -6108;
loc_820CCACC:
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x820d4cd8
	ctx.lr = 0x820CCAD4;
	sub_820D4CD8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820ccae4
	if (ctx.cr0.eq) goto loc_820CCAE4;
	// bl 0x820da7e8
	ctx.lr = 0x820CCAE0;
	sub_820DA7E8(ctx, base);
	// b 0x820ccae8
	goto loc_820CCAE8;
loc_820CCAE4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_820CCAE8:
	// addis r11,r29,-2
	ctx.r11.s64 = ctx.r29.s64 + -131072;
	// addi r11,r11,6116
	ctx.r11.s64 = ctx.r11.s64 + 6116;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// bl 0x82080000
	ctx.lr = 0x820CCAF8;
	sub_82080000(ctx, base);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x820ccacc
	if (!ctx.cr0.eq) goto loc_820CCACC;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x820d4cd8
	ctx.lr = 0x820CCB10;
	sub_820D4CD8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820ccb20
	if (ctx.cr0.eq) goto loc_820CCB20;
	// bl 0x820809a8
	ctx.lr = 0x820CCB1C;
	sub_820809A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_820CCB20:
	// li r5,28
	ctx.r5.s64 = 28;
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x822e9ff0
	ctx.lr = 0x820CCB34;
	sub_822E9FF0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8230473c
	ctx.lr = 0x820CCB3C;
	__imp__XNotifyPositionUI(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CCB48"))) PPC_WEAK_FUNC(sub_820CCB48);
PPC_FUNC_IMPL(__imp__sub_820CCB48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98dc
	ctx.lr = 0x820CCB50;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r11,r11,59536
	ctx.r11.u64 = ctx.r11.u64 | 59536;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820ccb7c
	if (ctx.cr0.eq) goto loc_820CCB7C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820CCB7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820CCB7C:
	// addis r10,r31,2
	ctx.r10.s64 = ctx.r31.s64 + 131072;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r10,r10,-6024
	ctx.r10.s64 = ctx.r10.s64 + -6024;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820ccd6c
	if (!ctx.cr6.eq) goto loc_820CCD6C;
	// addis r28,r31,2
	ctx.r28.s64 = ctx.r31.s64 + 131072;
	// addi r28,r28,-6016
	ctx.r28.s64 = ctx.r28.s64 + -6016;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820ccc80
	if (ctx.cr6.lt) goto loc_820CCC80;
	// bne cr6,0x820ccd6c
	if (!ctx.cr6.eq) goto loc_820CCD6C;
	// addis r29,r31,2
	ctx.r29.s64 = ctx.r31.s64 + 131072;
	// addis r30,r31,2
	ctx.r30.s64 = ctx.r31.s64 + 131072;
	// addi r29,r29,-6008
	ctx.r29.s64 = ctx.r29.s64 + -6008;
	// addi r30,r30,-6004
	ctx.r30.s64 = ctx.r30.s64 + -6004;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r5,31241
	ctx.r11.s64 = ctx.r5.s64 + 31241;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x820ccc70
	if (!ctx.cr6.lt) goto loc_820CCC70;
	// lis r28,-32204
	ctx.r28.s64 = -2110521344;
	// lwz r11,-11756(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -11756);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820ccc48
	if (ctx.cr6.lt) goto loc_820CCC48;
	// beq cr6,0x820ccc18
	if (ctx.cr6.eq) goto loc_820CCC18;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x820ccd6c
	if (!ctx.cr6.lt) goto loc_820CCD6C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820cc9f8
	ctx.lr = 0x820CCC00;
	sub_820CC9F8(ctx, base);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,-11756(r28)
	PPC_STORE_U32(ctx.r28.u32 + -11756, ctx.r11.u32);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x820ccd6c
	goto loc_820CCD6C;
loc_820CCC18:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820cc4d8
	ctx.lr = 0x820CCC20;
	sub_820CC4D8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mulli r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 * 100;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,-11756(r28)
	PPC_STORE_U32(ctx.r28.u32 + -11756, ctx.r11.u32);
	// mulli r11,r10,312
	ctx.r11.s64 = ctx.r10.s64 * 312;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r3,472(r11)
	PPC_STORE_U32(ctx.r11.u32 + 472, ctx.r3.u32);
	// b 0x820ccd6c
	goto loc_820CCD6C;
loc_820CCC48:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x820cc8c0
	ctx.lr = 0x820CCC54;
	sub_820CC8C0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820ccd6c
	if (ctx.cr0.eq) goto loc_820CCD6C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-11756(r28)
	PPC_STORE_U32(ctx.r28.u32 + -11756, ctx.r11.u32);
	// b 0x820ccd6c
	goto loc_820CCD6C;
loc_820CCC70:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x820ccd6c
	goto loc_820CCD6C;
loc_820CCC80:
	// addis r30,r31,2
	ctx.r30.s64 = ctx.r31.s64 + 131072;
	// addi r30,r30,-6052
	ctx.r30.s64 = ctx.r30.s64 + -6052;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x820ccd6c
	if (ctx.cr6.eq) goto loc_820CCD6C;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,59516
	ctx.r11.u64 = ctx.r11.u64 | 59516;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x822f8ae0
	ctx.lr = 0x820CCCA4;
	sub_822F8AE0(ctx, base);
	// addis r29,r31,2
	ctx.r29.s64 = ctx.r31.s64 + 131072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r29,r29,-6008
	ctx.r29.s64 = ctx.r29.s64 + -6008;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,31241
	ctx.r11.s64 = ctx.r11.s64 + 31241;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x822f8e08
	ctx.lr = 0x820CCCC8;
	sub_822F8E08(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,31241
	ctx.r11.s64 = ctx.r11.s64 + 31241;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r26,r10,59524
	ctx.r26.u64 = ctx.r10.u64 | 59524;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x820ccd44
	if (!ctx.cr6.gt) goto loc_820CCD44;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// add r27,r31,r26
	ctx.r27.u64 = ctx.r31.u64 + ctx.r26.u64;
loc_820CCCFC:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,308
	ctx.r5.s64 = 308;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mulli r10,r10,100
	ctx.r10.s64 = ctx.r10.s64 * 100;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r4,r28,r11
	ctx.r4.u64 = ctx.r28.u64 + ctx.r11.u64;
	// mulli r11,r10,312
	ctx.r11.s64 = ctx.r10.s64 * 312;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,164
	ctx.r3.s64 = ctx.r11.s64 + 164;
	// bl 0x822e9960
	ctx.lr = 0x820CCD24;
	sub_822E9960(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r11,r11,31241
	ctx.r11.s64 = ctx.r11.s64 + 31241;
	// addi r28,r28,308
	ctx.r28.s64 = ctx.r28.s64 + 308;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820cccfc
	if (ctx.cr6.lt) goto loc_820CCCFC;
loc_820CCD44:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// add r30,r31,r26
	ctx.r30.u64 = ctx.r31.u64 + ctx.r26.u64;
	// ori r11,r11,59532
	ctx.r11.u64 = ctx.r11.u64 | 59532;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stwx r25,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r25.u32);
	// bl 0x820d4d38
	ctx.lr = 0x820CCD5C;
	sub_820D4D38(ctx, base);
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// stw r25,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r25.u32);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// stw r11,-11756(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11756, ctx.r11.u32);
loc_820CCD6C:
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820cce34
	if (ctx.cr6.eq) goto loc_820CCE34;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820cce34
	if (!ctx.cr6.eq) goto loc_820CCE34;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822f9200
	ctx.lr = 0x820CCD98;
	sub_822F9200(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r3.u32);
	// bne 0x820ccdb4
	if (!ctx.cr0.eq) goto loc_820CCDB4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-25440
	ctx.r3.s64 = ctx.r11.s64 + -25440;
	// bl 0x821313e0
	ctx.lr = 0x820CCDB0;
	sub_821313E0(ctx, base);
	// b 0x820ccdf0
	goto loc_820CCDF0;
loc_820CCDB4:
	// addi r30,r31,24
	ctx.r30.s64 = ctx.r31.s64 + 24;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e9ff0
	ctx.lr = 0x820CCDC8;
	sub_822E9FF0(ctx, base);
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r4,r31,156
	ctx.r4.s64 = ctx.r31.s64 + 156;
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r10,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r10.u32);
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// bl 0x822f7eb0
	ctx.lr = 0x820CCDF0;
	sub_822F7EB0(ctx, base);
loc_820CCDF0:
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x820cce28
	if (!ctx.cr6.gt) goto loc_820CCE28;
	// addi r11,r31,52
	ctx.r11.s64 = ctx.r31.s64 + 52;
loc_820CCE04:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,52(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r8,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,148(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x820cce04
	if (ctx.cr6.lt) goto loc_820CCE04;
loc_820CCE28:
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
loc_820CCE34:
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820cce84
	if (ctx.cr6.eq) goto loc_820CCE84;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x820cce84
	if (ctx.cr6.eq) goto loc_820CCE84;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822f8e08
	ctx.lr = 0x820CCE60;
	sub_822F8E08(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820cce78
	if (ctx.cr6.eq) goto loc_820CCE78;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-25492
	ctx.r3.s64 = ctx.r11.s64 + -25492;
	// bl 0x821313e0
	ctx.lr = 0x820CCE78;
	sub_821313E0(ctx, base);
loc_820CCE78:
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// bl 0x822f8ae0
	ctx.lr = 0x820CCE80;
	sub_822F8AE0(ctx, base);
	// stw r25,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r25.u32);
loc_820CCE84:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822e992c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CCE8C"))) PPC_WEAK_FUNC(sub_820CCE8C);
PPC_FUNC_IMPL(__imp__sub_820CCE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CCE90"))) PPC_WEAK_FUNC(sub_820CCE90);
PPC_FUNC_IMPL(__imp__sub_820CCE90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e0
	ctx.lr = 0x820CCE98;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,35
	ctx.r5.s64 = 35;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r4,9764(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9764);
	// bl 0x820c9bc0
	ctx.lr = 0x820CCEC8;
	sub_820C9BC0(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820ccee8
	if (!ctx.cr0.eq) goto loc_820CCEE8;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x820cd050
	goto loc_820CD050;
loc_820CCEE8:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822f8f10
	ctx.lr = 0x820CCEF4;
	sub_822F8F10(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820ccf08
	if (ctx.cr0.eq) goto loc_820CCF08;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x820ccf10
	goto loc_820CCF10;
loc_820CCF08:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
loc_820CCF10:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x820ccf24
	if (!ctx.cr0.eq) goto loc_820CCF24;
loc_820CCF18:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x820cd04c
	goto loc_820CD04C;
loc_820CCF24:
	// lis r11,25576
	ctx.r11.s64 = 1676148736;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,16383
	ctx.r11.u64 = ctx.r11.u64 | 16383;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822d8090
	ctx.lr = 0x820CCF54;
	sub_822D8090(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,122
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 122, ctx.xer);
	// beq cr6,0x820ccf70
	if (ctx.cr6.eq) goto loc_820CCF70;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-25396
	ctx.r3.s64 = ctx.r11.s64 + -25396;
	// bl 0x821313e0
	ctx.lr = 0x820CCF6C;
	sub_821313E0(ctx, base);
	// b 0x820ccf18
	goto loc_820CCF18;
loc_820CCF70:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x820d4cd8
	ctx.lr = 0x820CCF78;
	sub_820D4CD8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822e9ff0
	ctx.lr = 0x820CCF88;
	sub_822E9FF0(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822d8090
	ctx.lr = 0x820CCFA8;
	sub_822D8090(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x820ccfd8
	if (ctx.cr0.eq) goto loc_820CCFD8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-25396
	ctx.r3.s64 = ctx.r11.s64 + -25396;
	// bl 0x821313e0
	ctx.lr = 0x820CCFBC;
	sub_821313E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820d4d38
	ctx.lr = 0x820CCFC4;
	sub_820D4D38(ctx, base);
	// addi r11,r28,2
	ctx.r11.s64 = ctx.r28.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// bl 0x82080000
	ctx.lr = 0x820CCFD4;
	sub_82080000(ctx, base);
	// b 0x820ccf18
	goto loc_820CCF18;
loc_820CCFD8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820cd014
	if (!ctx.cr6.eq) goto loc_820CD014;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820d4d38
	ctx.lr = 0x820CCFF0;
	sub_820D4D38(ctx, base);
	// addi r11,r28,2
	ctx.r11.s64 = ctx.r28.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// bl 0x82080000
	ctx.lr = 0x820CD000;
	sub_82080000(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820cba20
	ctx.lr = 0x820CD010;
	sub_820CBA20(ctx, base);
	// b 0x820cd048
	goto loc_820CD048;
loc_820CD014:
	// addi r11,r28,2
	ctx.r11.s64 = ctx.r28.s64 + 2;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r28,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// bl 0x8210ad70
	ctx.lr = 0x820CD024;
	sub_8210AD70(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwzx r3,r28,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// bl 0x8208ccc0
	ctx.lr = 0x820CD030;
	sub_8208CCC0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r4,36(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x822e9960
	ctx.lr = 0x820CD040;
	sub_822E9960(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820d4d38
	ctx.lr = 0x820CD048;
	sub_820D4D38(ctx, base);
loc_820CD048:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_820CD04C:
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_820CD050:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822e9930
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CD05C"))) PPC_WEAK_FUNC(sub_820CD05C);
PPC_FUNC_IMPL(__imp__sub_820CD05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CD060"))) PPC_WEAK_FUNC(sub_820CD060);
PPC_FUNC_IMPL(__imp__sub_820CD060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e0
	ctx.lr = 0x820CD068;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,35
	ctx.r5.s64 = 35;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r4,9764(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9764);
	// bl 0x820c9bc0
	ctx.lr = 0x820CD098;
	sub_820C9BC0(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820cd0b8
	if (!ctx.cr0.eq) goto loc_820CD0B8;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x820cd16c
	goto loc_820CD16C;
loc_820CD0B8:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822f8f10
	ctx.lr = 0x820CD0C4;
	sub_822F8F10(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820cd0d8
	if (ctx.cr0.eq) goto loc_820CD0D8;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x820cd0e0
	goto loc_820CD0E0;
loc_820CD0D8:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
loc_820CD0E0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x820cd0f4
	if (!ctx.cr0.eq) goto loc_820CD0F4;
	// li r11,1
	ctx.r11.s64 = 1;
loc_820CD0EC:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x820cd168
	goto loc_820CD168;
loc_820CD0F4:
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r29,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r27.u32);
	// bl 0x8210ad70
	ctx.lr = 0x820CD104;
	sub_8210AD70(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwzx r3,r29,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r27.u32);
	// bl 0x8208ccc0
	ctx.lr = 0x820CD110;
	sub_8208CCC0(ctx, base);
	// lis r10,25576
	ctx.r10.s64 = 1676148736;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// ori r10,r10,16383
	ctx.r10.u64 = ctx.r10.u64 | 16383;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x822d80f8
	ctx.lr = 0x820CD148;
	sub_822D80F8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820cd164
	if (ctx.cr0.eq) goto loc_820CD164;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-25364
	ctx.r3.s64 = ctx.r11.s64 + -25364;
	// bl 0x821313e0
	ctx.lr = 0x820CD15C;
	sub_821313E0(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x820cd0ec
	goto loc_820CD0EC;
loc_820CD164:
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_820CD168:
	// stw r26,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
loc_820CD16C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822e9930
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CD178"))) PPC_WEAK_FUNC(sub_820CD178);
PPC_FUNC_IMPL(__imp__sub_820CD178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x820CD180;
	__savegprlr_28(ctx, base);
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x822f8f10
	ctx.lr = 0x820CD1A0;
	sub_822F8F10(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820cd1b4
	if (ctx.cr0.eq) goto loc_820CD1B4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x820cd1bc
	goto loc_820CD1BC;
loc_820CD1B4:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
loc_820CD1BC:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne 0x820cd1d8
	if (!ctx.cr0.eq) goto loc_820CD1D8;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// b 0x820cd208
	goto loc_820CD208;
loc_820CD1D8:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r11,r11,13
	ctx.r11.s64 = ctx.r11.s64 + 13;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r28.u32);
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r11,r11,25
	ctx.r11.s64 = ctx.r11.s64 + 25;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r29.u32);
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
loc_820CD208:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CD210"))) PPC_WEAK_FUNC(sub_820CD210);
PPC_FUNC_IMPL(__imp__sub_820CD210) {
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
	// addi r10,r5,31241
	ctx.r10.s64 = ctx.r5.s64 + 31241;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwzx r9,r10,r4
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x820cd264
	if (ctx.cr0.eq) goto loc_820CD264;
	// mulli r10,r5,31200
	ctx.r10.s64 = ctx.r5.s64 * 31200;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r10,r10,472
	ctx.r10.s64 = ctx.r10.s64 + 472;
loc_820CD248:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x820cd29c
	if (ctx.cr6.eq) goto loc_820CD29C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,312
	ctx.r10.s64 = ctx.r10.s64 + 312;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x820cd248
	if (ctx.cr6.lt) goto loc_820CD248;
loc_820CD264:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r11,-25336
	ctx.r3.s64 = ctx.r11.s64 + -25336;
	// bl 0x821313e0
	ctx.lr = 0x820CD274;
	sub_821313E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_820CD284:
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
loc_820CD29C:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820cc8c0
	ctx.lr = 0x820CD2A8;
	sub_820CC8C0(ctx, base);
	// b 0x820cd284
	goto loc_820CD284;
}

__attribute__((alias("__imp__sub_820CD2AC"))) PPC_WEAK_FUNC(sub_820CD2AC);
PPC_FUNC_IMPL(__imp__sub_820CD2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CD2B0"))) PPC_WEAK_FUNC(sub_820CD2B0);
PPC_FUNC_IMPL(__imp__sub_820CD2B0) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x820d4c58
	ctx.lr = 0x820CD2C8;
	sub_820D4C58(ctx, base);
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r3,r11,-18744
	ctx.r3.s64 = ctx.r11.s64 + -18744;
	// bl 0x823043cc
	ctx.lr = 0x820CD2D4;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r10,-32760
	ctx.r4.s64 = ctx.r10.s64 + -32760;
	// addi r3,r11,-32768
	ctx.r3.s64 = ctx.r11.s64 + -32768;
	// bl 0x820e1590
	ctx.lr = 0x820CD2E8;
	sub_820E1590(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820c8458
	ctx.lr = 0x820CD2F4;
	sub_820C8458(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820d4c98
	ctx.lr = 0x820CD2FC;
	sub_820D4C98(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CD310"))) PPC_WEAK_FUNC(sub_820CD310);
PPC_FUNC_IMPL(__imp__sub_820CD310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e0
	ctx.lr = 0x820CD318;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stbx r10,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x820cd394
	if (!ctx.cr6.gt) goto loc_820CD394;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// subfic r28,r29,-4
	ctx.xer.ca = ctx.r29.u32 <= 4294967292;
	ctx.r28.s64 = -4 - ctx.r29.s64;
	// lis r26,-32207
	ctx.r26.s64 = -2110717952;
	// lis r27,-32207
	ctx.r27.s64 = -2110717952;
loc_820CD34C:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r10,16453(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 16453);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820cd370
	if (!ctx.cr6.eq) goto loc_820CD370;
	// lbz r11,16452(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 16452);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// b 0x820cd37c
	goto loc_820CD37C;
loc_820CD370:
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x822eb058
	ctx.lr = 0x820CD378;
	sub_822EB058(ctx, base);
	// stb r3,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r3.u8);
loc_820CD37C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r10,r28,r31
	ctx.r10.u64 = ctx.r28.u64 + ctx.r31.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820cd34c
	if (ctx.cr6.lt) goto loc_820CD34C;
loc_820CD394:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e9930
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CD39C"))) PPC_WEAK_FUNC(sub_820CD39C);
PPC_FUNC_IMPL(__imp__sub_820CD39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CD3A0"))) PPC_WEAK_FUNC(sub_820CD3A0);
PPC_FUNC_IMPL(__imp__sub_820CD3A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820cd310
	ctx.lr = 0x820CD3BC;
	sub_820CD310(ctx, base);
	// lbz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,58
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 58, ctx.xer);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bne cr6,0x820cd3dc
	if (!ctx.cr6.eq) goto loc_820CD3DC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,27488
	ctx.r4.s64 = ctx.r11.s64 + 27488;
	// b 0x820cd3e4
	goto loc_820CD3E4;
loc_820CD3DC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-25264
	ctx.r4.s64 = ctx.r11.s64 + -25264;
loc_820CD3E4:
	// bl 0x822ea970
	ctx.lr = 0x820CD3E8;
	sub_822EA970(ctx, base);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8208cdc0
	ctx.lr = 0x820CD3F4;
	sub_8208CDC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CD40C"))) PPC_WEAK_FUNC(sub_820CD40C);
PPC_FUNC_IMPL(__imp__sub_820CD40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CD410"))) PPC_WEAK_FUNC(sub_820CD410);
PPC_FUNC_IMPL(__imp__sub_820CD410) {
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
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,128
	ctx.r8.s64 = 128;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// bl 0x822f8b38
	ctx.lr = 0x820CD438;
	sub_822F8B38(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x820cd450
	if (!ctx.cr6.eq) goto loc_820CD450;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r10,9800(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9800, ctx.r10.u8);
loc_820CD450:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CD460"))) PPC_WEAK_FUNC(sub_820CD460);
PPC_FUNC_IMPL(__imp__sub_820CD460) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mullw r31,r4,r30
	ctx.r31.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r30.s32);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x822f8878
	ctx.lr = 0x820CD498;
	sub_822F8878(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820cd4b4
	if (ctx.cr0.eq) goto loc_820CD4B4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x820cd4b4
	if (!ctx.cr6.eq) goto loc_820CD4B4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x820cd4c4
	goto loc_820CD4C4;
loc_820CD4B4:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stb r10,9800(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9800, ctx.r10.u8);
loc_820CD4C4:
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

__attribute__((alias("__imp__sub_820CD4DC"))) PPC_WEAK_FUNC(sub_820CD4DC);
PPC_FUNC_IMPL(__imp__sub_820CD4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CD4E0"))) PPC_WEAK_FUNC(sub_820CD4E0);
PPC_FUNC_IMPL(__imp__sub_820CD4E0) {
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
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// blt cr6,0x820cd510
	if (ctx.cr6.lt) goto loc_820CD510;
	// beq cr6,0x820cd508
	if (ctx.cr6.eq) goto loc_820CD508;
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// bge cr6,0x820cd518
	if (!ctx.cr6.lt) goto loc_820CD518;
	// li r6,2
	ctx.r6.s64 = 2;
	// b 0x820cd51c
	goto loc_820CD51C;
loc_820CD508:
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x820cd51c
	goto loc_820CD51C;
loc_820CD510:
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x820cd51c
	goto loc_820CD51C;
loc_820CD518:
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_820CD51C:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822f86d8
	ctx.lr = 0x820CD524;
	sub_822F86D8(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// neg r3,r11
	ctx.r3.s64 = -ctx.r11.s64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CD548"))) PPC_WEAK_FUNC(sub_820CD548);
PPC_FUNC_IMPL(__imp__sub_820CD548) {
	PPC_FUNC_PROLOGUE();
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x822f86d8
	sub_822F86D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CD558"))) PPC_WEAK_FUNC(sub_820CD558);
PPC_FUNC_IMPL(__imp__sub_820CD558) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x822f92a0
	sub_822F92A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CD560"))) PPC_WEAK_FUNC(sub_820CD560);
PPC_FUNC_IMPL(__imp__sub_820CD560) {
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
	// bl 0x822f8ae0
	ctx.lr = 0x820CD570;
	sub_822F8AE0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CD584"))) PPC_WEAK_FUNC(sub_820CD584);
PPC_FUNC_IMPL(__imp__sub_820CD584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CD588"))) PPC_WEAK_FUNC(sub_820CD588);
PPC_FUNC_IMPL(__imp__sub_820CD588) {
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
	// stwu r1,-1152(r1)
	ea = -1152 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-25240
	ctx.r4.s64 = ctx.r11.s64 + -25240;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822ea970
	ctx.lr = 0x820CD5B0;
	sub_822EA970(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,128
	ctx.r8.s64 = 128;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822f8b38
	ctx.lr = 0x820CD5D0;
	sub_822F8B38(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,-25252
	ctx.r3.s64 = ctx.r11.s64 + -25252;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821313e0
	ctx.lr = 0x820CD5E8;
	sub_821313E0(ctx, base);
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x820cd5f8
	if (!ctx.cr6.eq) goto loc_820CD5F8;
loc_820CD5F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820cd680
	goto loc_820CD680;
loc_820CD5F8:
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f8878
	ctx.lr = 0x820CD610;
	sub_822F8878(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x820cd624
	if (!ctx.cr6.eq) goto loc_820CD624;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_820CD624:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f8ae0
	ctx.lr = 0x820CD62C;
	sub_822F8AE0(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x820cd5f0
	if (ctx.cr6.eq) goto loc_820CD5F0;
	// lbz r11,83(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// xor r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r10.u64;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// xor r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// xor r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 ^ ctx.r10.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// xor r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// stb r10,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// xor r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_820CD680:
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
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

__attribute__((alias("__imp__sub_820CD698"))) PPC_WEAK_FUNC(sub_820CD698);
PPC_FUNC_IMPL(__imp__sub_820CD698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x820CD6A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-1168(r1)
	ea = -1168 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// b 0x820cd6c8
	goto loc_820CD6C8;
loc_820CD6B8:
	// cmpwi cr6,r10,46
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 46, ctx.xer);
	// beq cr6,0x820cd6d0
	if (ctx.cr6.eq) goto loc_820CD6D0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
loc_820CD6C8:
	// extsb. r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x820cd6b8
	if (!ctx.cr0.eq) goto loc_820CD6B8;
loc_820CD6D0:
	// subf r31,r29,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r29.s64;
	// addi r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 1;
	// bl 0x820d4cd8
	ctx.lr = 0x820CD6DC;
	sub_820D4CD8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820cd708
	if (ctx.cr6.eq) goto loc_820CD708;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// subf r9,r30,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r30.s64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_820CD6F4:
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x820cd6f4
	if (!ctx.cr0.eq) goto loc_820CD6F4;
loc_820CD708:
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-25240
	ctx.r4.s64 = ctx.r11.s64 + -25240;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stbx r28,r30,r31
	PPC_STORE_U8(ctx.r30.u32 + ctx.r31.u32, ctx.r28.u8);
	// bl 0x822ea970
	ctx.lr = 0x820CD724;
	sub_822EA970(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,128
	ctx.r8.s64 = 128;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822f8b38
	ctx.lr = 0x820CD744;
	sub_822F8B38(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,-25252
	ctx.r3.s64 = ctx.r11.s64 + -25252;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821313e0
	ctx.lr = 0x820CD75C;
	sub_821313E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820d4d38
	ctx.lr = 0x820CD764;
	sub_820D4D38(ctx, base);
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x820cd774
	if (!ctx.cr6.eq) goto loc_820CD774;
loc_820CD76C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820cd814
	goto loc_820CD814;
loc_820CD774:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f86d8
	ctx.lr = 0x820CD788;
	sub_822F86D8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f86d8
	ctx.lr = 0x820CD79C;
	sub_822F86D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
	// bl 0x822f86d8
	ctx.lr = 0x820CD7B8;
	sub_822F86D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820d4cd8
	ctx.lr = 0x820CD7C0;
	sub_820D4CD8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x820cd76c
	if (ctx.cr0.eq) goto loc_820CD76C;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f8878
	ctx.lr = 0x820CD7E0;
	sub_822F8878(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x820cd7f0
	if (!ctx.cr6.eq) goto loc_820CD7F0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_820CD7F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f8ae0
	ctx.lr = 0x820CD7F8;
	sub_822F8AE0(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x820cd80c
	if (!ctx.cr6.eq) goto loc_820CD80C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820d4d38
	ctx.lr = 0x820CD808;
	sub_820D4D38(ctx, base);
	// b 0x820cd76c
	goto loc_820CD76C;
loc_820CD80C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r29.u32);
loc_820CD814:
	// addi r1,r1,1168
	ctx.r1.s64 = ctx.r1.s64 + 1168;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CD81C"))) PPC_WEAK_FUNC(sub_820CD81C);
PPC_FUNC_IMPL(__imp__sub_820CD81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CD820"))) PPC_WEAK_FUNC(sub_820CD820);
PPC_FUNC_IMPL(__imp__sub_820CD820) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CD840"))) PPC_WEAK_FUNC(sub_820CD840);
PPC_FUNC_IMPL(__imp__sub_820CD840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x820CD848;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// ble cr6,0x820cd870
	if (!ctx.cr6.gt) goto loc_820CD870;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r11.u8);
	// b 0x820cd898
	goto loc_820CD898;
loc_820CD870:
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// bl 0x822f9348
	ctx.lr = 0x820CD878;
	sub_822F9348(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm. r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r11,12
	ctx.r11.s64 = 12;
	// bne 0x820cd88c
	if (!ctx.cr0.eq) goto loc_820CD88C;
	// li r11,9
	ctx.r11.s64 = 9;
loc_820CD88C:
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r10,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r10.u8);
loc_820CD898:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CD8AC"))) PPC_WEAK_FUNC(sub_820CD8AC);
PPC_FUNC_IMPL(__imp__sub_820CD8AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CD8B0"))) PPC_WEAK_FUNC(sub_820CD8B0);
PPC_FUNC_IMPL(__imp__sub_820CD8B0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CD8BC"))) PPC_WEAK_FUNC(sub_820CD8BC);
PPC_FUNC_IMPL(__imp__sub_820CD8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CD8C0"))) PPC_WEAK_FUNC(sub_820CD8C0);
PPC_FUNC_IMPL(__imp__sub_820CD8C0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-25216
	ctx.r3.s64 = ctx.r11.s64 + -25216;
	// b 0x821313e0
	sub_821313E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CD8F0"))) PPC_WEAK_FUNC(sub_820CD8F0);
PPC_FUNC_IMPL(__imp__sub_820CD8F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CD8F4"))) PPC_WEAK_FUNC(sub_820CD8F4);
PPC_FUNC_IMPL(__imp__sub_820CD8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CD8F8"))) PPC_WEAK_FUNC(sub_820CD8F8);
PPC_FUNC_IMPL(__imp__sub_820CD8F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f12,9580(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9580);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,9472(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9472);
	ctx.f13.f64 = double(temp.f32);
	// beq 0x820cd928
	if (ctx.cr0.eq) goto loc_820CD928;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x820cd92c
	goto loc_820CD92C;
loc_820CD928:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_820CD92C:
	// stfs f0,36(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 36, temp.u32);
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820cd944
	if (ctx.cr0.eq) goto loc_820CD944;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x820cd948
	goto loc_820CD948;
loc_820CD944:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_820CD948:
	// stfs f0,40(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// lbz r11,14(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 14);
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// ble cr6,0x820cd960
	if (!ctx.cr6.gt) goto loc_820CD960;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x820cd964
	goto loc_820CD964;
loc_820CD960:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_820CD964:
	// stfs f0,44(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 44, temp.u32);
	// lbz r11,15(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 15);
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// ble cr6,0x820cd97c
	if (!ctx.cr6.gt) goto loc_820CD97C;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x820cd980
	goto loc_820CD980;
loc_820CD97C:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_820CD980:
	// stfs f0,48(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 48, temp.u32);
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// rlwinm. r11,r11,0,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820cd998
	if (ctx.cr0.eq) goto loc_820CD998;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x820cd99c
	goto loc_820CD99C;
loc_820CD998:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_820CD99C:
	// stfs f0,52(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 52, temp.u32);
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820cd9b4
	if (ctx.cr0.eq) goto loc_820CD9B4;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x820cd9b8
	goto loc_820CD9B8;
loc_820CD9B4:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_820CD9B8:
	// stfs f0,56(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 56, temp.u32);
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820cd9d0
	if (ctx.cr0.eq) goto loc_820CD9D0;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x820cd9d4
	goto loc_820CD9D4;
loc_820CD9D0:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_820CD9D4:
	// stfs f0,60(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 60, temp.u32);
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// rlwinm. r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820cd9ec
	if (ctx.cr0.eq) goto loc_820CD9EC;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x820cd9f0
	goto loc_820CD9F0;
loc_820CD9EC:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_820CD9F0:
	// stfs f0,64(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 64, temp.u32);
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820cda08
	if (ctx.cr0.eq) goto loc_820CDA08;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x820cda0c
	goto loc_820CDA0C;
loc_820CDA08:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_820CDA0C:
	// stfs f0,68(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 68, temp.u32);
	// stfs f13,72(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 72, temp.u32);
	// stfs f13,76(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 76, temp.u32);
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820cda2c
	if (ctx.cr0.eq) goto loc_820CDA2C;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x820cda30
	goto loc_820CDA30;
loc_820CDA2C:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_820CDA30:
	// stfs f0,80(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 80, temp.u32);
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820cda48
	if (ctx.cr0.eq) goto loc_820CDA48;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x820cda4c
	goto loc_820CDA4C;
loc_820CDA48:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_820CDA4C:
	// stfs f0,84(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 84, temp.u32);
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820cda64
	if (ctx.cr0.eq) goto loc_820CDA64;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x820cda68
	goto loc_820CDA68;
loc_820CDA64:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_820CDA68:
	// stfs f0,88(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 88, temp.u32);
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820cda80
	if (ctx.cr0.eq) goto loc_820CDA80;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x820cda84
	goto loc_820CDA84;
loc_820CDA80:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_820CDA84:
	// stfs f0,92(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 92, temp.u32);
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820cda9c
	if (ctx.cr0.eq) goto loc_820CDA9C;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x820cdaa0
	goto loc_820CDAA0;
loc_820CDA9C:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_820CDAA0:
	// stfs f0,96(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 96, temp.u32);
	// addi r11,r4,100
	ctx.r11.s64 = ctx.r4.s64 + 100;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,16
	ctx.r10.s64 = 16;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820CDAB4:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x820cdab4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820CDAB4;
	// lha r11,16(r3)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 16));
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,-25156(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -25156);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,292(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 292, temp.u32);
	// lha r11,18(r3)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 18));
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,296(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 296, temp.u32);
	// lha r11,20(r3)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 20));
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,300(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 300, temp.u32);
	// lha r11,22(r3)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 22));
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,304(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 304, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CDB3C"))) PPC_WEAK_FUNC(sub_820CDB3C);
PPC_FUNC_IMPL(__imp__sub_820CDB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CDB40"))) PPC_WEAK_FUNC(sub_820CDB40);
PPC_FUNC_IMPL(__imp__sub_820CDB40) {
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
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x820cdb98
	if (ctx.cr6.lt) goto loc_820CDB98;
	// beq cr6,0x820cdb90
	if (ctx.cr6.eq) goto loc_820CDB90;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// blt cr6,0x820cdb84
	if (ctx.cr6.lt) goto loc_820CDB84;
	// beq cr6,0x820cdb78
	if (ctx.cr6.eq) goto loc_820CDB78;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-25152
	ctx.r3.s64 = ctx.r11.s64 + -25152;
	// bl 0x820ad500
	ctx.lr = 0x820CDB70;
	sub_820AD500(ctx, base);
	// bl 0x821313e0
	ctx.lr = 0x820CDB74;
	sub_821313E0(ctx, base);
	// b 0x820cdbb0
	goto loc_820CDBB0;
loc_820CDB78:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,61440
	ctx.r11.u64 = ctx.r11.u64 | 61440;
	// b 0x820cdb9c
	goto loc_820CDB9C;
loc_820CDB84:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// b 0x820cdb9c
	goto loc_820CDB9C;
loc_820CDB90:
	// li r11,16384
	ctx.r11.s64 = 16384;
	// b 0x820cdb9c
	goto loc_820CDB9C;
loc_820CDB98:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820CDB9C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bl 0x822f9358
	ctx.lr = 0x820CDBB0;
	sub_822F9358(ctx, base);
loc_820CDBB0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CDBC0"))) PPC_WEAK_FUNC(sub_820CDBC0);
PPC_FUNC_IMPL(__imp__sub_820CDBC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x820CDBC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x822d8150
	ctx.lr = 0x820CDBD8;
	sub_822D8150(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x820cdbec
	if (!ctx.cr0.lt) goto loc_820CDBEC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-25024
	ctx.r3.s64 = ctx.r11.s64 + -25024;
	// b 0x820cdc58
	goto loc_820CDC58;
loc_820CDBEC:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822f9370
	ctx.lr = 0x820CDBF4;
	sub_822F9370(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// beq 0x820cdc50
	if (ctx.cr0.eq) goto loc_820CDC50;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820cdc50
	if (ctx.cr6.eq) goto loc_820CDC50;
	// li r3,568
	ctx.r3.s64 = 568;
	// bl 0x820d4cd8
	ctx.lr = 0x820CDC10;
	sub_820D4CD8(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820cdc28
	if (ctx.cr0.eq) goto loc_820CDC28;
	// bl 0x820d8c10
	ctx.lr = 0x820CDC20;
	sub_820D8C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x820cdc2c
	goto loc_820CDC2C;
loc_820CDC28:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_820CDC2C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r4,1776(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1776, ctx.r4.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d8c78
	ctx.lr = 0x820CDC3C;
	sub_820D8C78(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// b 0x820cdc6c
	goto loc_820CDC6C;
loc_820CDC50:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-25096
	ctx.r3.s64 = ctx.r11.s64 + -25096;
loc_820CDC58:
	// bl 0x821313e0
	ctx.lr = 0x820CDC5C;
	sub_821313E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_820CDC6C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CDC78"))) PPC_WEAK_FUNC(sub_820CDC78);
PPC_FUNC_IMPL(__imp__sub_820CDC78) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,95
	ctx.r11.s64 = ctx.r4.s64 + 95;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CDC88"))) PPC_WEAK_FUNC(sub_820CDC88);
PPC_FUNC_IMPL(__imp__sub_820CDC88) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,1524
	ctx.r11.s64 = ctx.r3.s64 + 1524;
	// li r10,15
	ctx.r10.s64 = 15;
loc_820CDC90:
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r8,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r8.u32);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// bne 0x820cdc90
	if (!ctx.cr0.eq) goto loc_820CDC90;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1760(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1760, ctx.r11.u32);
	// stw r11,1764(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1764, ctx.r11.u32);
	// stw r11,1768(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1768, ctx.r11.u32);
	// stw r11,1772(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1772, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820CDCD8"))) PPC_WEAK_FUNC(sub_820CDCD8);
PPC_FUNC_IMPL(__imp__sub_820CDCD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x820CDCE0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi. r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r30,0
	ctx.r30.s64 = 0;
	// beq 0x820cddb4
	if (ctx.cr0.eq) goto loc_820CDDB4;
	// lwz r3,1520(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1520);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r29,1524(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1524);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r28,1528(r4)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1528);
	// addi r11,r4,1544
	ctx.r11.s64 = ctx.r4.s64 + 1544;
	// lwz r27,1532(r4)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1532);
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// stw r29,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r29.u32);
	// stw r28,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r28.u32);
	// stw r27,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r27.u32);
	// stw r5,1520(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1520, ctx.r5.u32);
	// stw r6,1524(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1524, ctx.r6.u32);
	// stw r7,1528(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1528, ctx.r7.u32);
	// stw r8,1532(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1532, ctx.r8.u32);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_820CDD40:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x820cdda8
	if (ctx.cr6.eq) goto loc_820CDDA8;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// lwz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r28,4(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// stw r29,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r29.u32);
	// stw r28,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r28.u32);
	// stw r7,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r7.u32);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// stw r4,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r4.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// blt cr6,0x820cdd40
	if (ctx.cr6.lt) goto loc_820CDD40;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x820cddd8
	if (!ctx.cr6.eq) goto loc_820CDDD8;
loc_820CDDA8:
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x820cddec
	goto loc_820CDDEC;
loc_820CDDB4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r10,r4,1520
	ctx.r10.s64 = ctx.r4.s64 + 1520;
loc_820CDDBC:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x820cddfc
	if (ctx.cr6.eq) goto loc_820CDDFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x820cddbc
	if (ctx.cr6.lt) goto loc_820CDDBC;
loc_820CDDD8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-24996
	ctx.r3.s64 = ctx.r11.s64 + -24996;
	// bl 0x821313e0
	ctx.lr = 0x820CDDE4;
	sub_821313E0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_820CDDEC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
loc_820CDDFC:
	// addi r11,r11,95
	ctx.r11.s64 = ctx.r11.s64 + 95;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// b 0x820cddec
	goto loc_820CDDEC;
}

__attribute__((alias("__imp__sub_820CDE20"))) PPC_WEAK_FUNC(sub_820CDE20);
PPC_FUNC_IMPL(__imp__sub_820CDE20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x820CDE28;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820cea18
	if (ctx.cr0.eq) goto loc_820CEA18;
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// cmplwi cr6,r11,50
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 50, ctx.xer);
	// bgt cr6,0x820cea08
	if (ctx.cr6.gt) goto loc_820CEA08;
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r12,-32254
	ctx.r12.s64 = -2113798144;
	// addi r12,r12,-24936
	ctx.r12.s64 = ctx.r12.s64 + -24936;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32243
	ctx.r12.s64 = -2113077248;
	// addi r12,r12,-8576
	ctx.r12.s64 = ctx.r12.s64 + -8576;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_820CDE80;
	case 1:
		goto loc_820CDE94;
	case 2:
		goto loc_820CDEE0;
	case 3:
		goto loc_820CDF3C;
	case 4:
		goto loc_820CDF80;
	case 5:
		goto loc_820CDF94;
	case 6:
		goto loc_820CDFA8;
	case 7:
		goto loc_820CDFC8;
	case 8:
		goto loc_820CDFDC;
	case 9:
		goto loc_820CDFF0;
	case 10:
		goto loc_820CE07C;
	case 11:
		goto loc_820CE0D4;
	case 12:
		goto loc_820CE124;
	case 13:
		goto loc_820CE140;
	case 14:
		goto loc_820CE1CC;
	case 15:
		goto loc_820CE1FC;
	case 16:
		goto loc_820CE378;
	case 17:
		goto loc_820CE410;
	case 18:
		goto loc_820CE434;
	case 19:
		goto loc_820CE450;
	case 20:
		goto loc_820CE500;
	case 21:
		goto loc_820CE52C;
	case 22:
		goto loc_820CE540;
	case 23:
		goto loc_820CE5BC;
	case 24:
		goto loc_820CE5E0;
	case 25:
		goto loc_820CE600;
	case 26:
		goto loc_820CE61C;
	case 27:
		goto loc_820CE5A8;
	case 28:
		goto loc_820CE590;
	case 29:
		goto loc_820CE588;
	case 30:
		goto loc_820CE6A8;
	case 31:
		goto loc_820CDEF8;
	case 32:
		goto loc_820CE720;
	case 33:
		goto loc_820CE728;
	case 34:
		goto loc_820CE730;
	case 35:
		goto loc_820CE750;
	case 36:
		goto loc_820CE758;
	case 37:
		goto loc_820CE760;
	case 38:
		goto loc_820CE778;
	case 39:
		goto loc_820CE9CC;
	case 40:
		goto loc_820CE788;
	case 41:
		goto loc_820CE79C;
	case 42:
		goto loc_820CE818;
	case 43:
		goto loc_820CE878;
	case 44:
		goto loc_820CE88C;
	case 45:
		goto loc_820CE918;
	case 46:
		goto loc_820CE9BC;
	case 47:
		goto loc_820CE950;
	case 48:
		goto loc_820CE97C;
	case 49:
		goto loc_820CE99C;
	case 50:
		goto loc_820CE9DC;
	default:
		__builtin_unreachable();
	}
loc_820CDE80:
	// li r8,50
	ctx.r8.s64 = 50;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,55
	ctx.r5.s64 = 55;
	// b 0x820ce1b8
	goto loc_820CE1B8;
loc_820CDE94:
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822e9960
	ctx.lr = 0x820CDEA4;
	sub_822E9960(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bne cr6,0x820cded8
	if (!ctx.cr6.eq) goto loc_820CDED8;
	// li r5,55
	ctx.r5.s64 = 55;
	// b 0x820ce1c4
	goto loc_820CE1C4;
loc_820CDED8:
	// li r5,49
	ctx.r5.s64 = 49;
	// b 0x820ce1c4
	goto loc_820CE1C4;
loc_820CDEE0:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x820cdf04
	if (!ctx.cr6.eq) goto loc_820CDF04;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_820CDEF4:
	// li r28,0
	ctx.r28.s64 = 0;
loc_820CDEF8:
	// stw r28,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r28.u32);
	// stw r28,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r28.u32);
	// b 0x820cea28
	goto loc_820CEA28;
loc_820CDF04:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820cdf14
	if (!ctx.cr6.eq) goto loc_820CDF14;
loc_820CDF0C:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x820cea1c
	goto loc_820CEA1C;
loc_820CDF14:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r10,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r10.u32);
	// bne cr6,0x820cdf34
	if (!ctx.cr6.eq) goto loc_820CDF34;
	// li r11,6
	ctx.r11.s64 = 6;
loc_820CDF2C:
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// b 0x820cea2c
	goto loc_820CEA2C;
loc_820CDF34:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x820cdf2c
	goto loc_820CDF2C;
loc_820CDF3C:
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820cdf50
	if (ctx.cr0.eq) goto loc_820CDF50;
	// bl 0x820d4d38
	ctx.lr = 0x820CDF4C;
	sub_820D4D38(ctx, base);
	// stw r28,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r28.u32);
loc_820CDF50:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820cdf64
	if (ctx.cr0.eq) goto loc_820CDF64;
	// bl 0x820d4d38
	ctx.lr = 0x820CDF60;
	sub_820D4D38(ctx, base);
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
loc_820CDF64:
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820cdf78
	if (ctx.cr0.eq) goto loc_820CDF78;
	// bl 0x820d4d38
	ctx.lr = 0x820CDF74;
	sub_820D4D38(ctx, base);
	// stw r28,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r28.u32);
loc_820CDF78:
	// stw r28,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r28.u32);
	// b 0x820cdef8
	goto loc_820CDEF8;
loc_820CDF80:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,51
	ctx.r5.s64 = 51;
	// b 0x820ce1b8
	goto loc_820CE1B8;
loc_820CDF94:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,53
	ctx.r5.s64 = 53;
	// b 0x820ce1b8
	goto loc_820CE1B8;
loc_820CDFA8:
	// addi r11,r29,275
	ctx.r11.s64 = ctx.r29.s64 + 275;
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// stwx r28,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r28.u32);
	// b 0x820ce1b8
	goto loc_820CE1B8;
loc_820CDFC8:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// b 0x820ce1b8
	goto loc_820CE1B8;
loc_820CDFDC:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// b 0x820ce1b8
	goto loc_820CE1B8;
loc_820CDFF0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,1512(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1512);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// beq 0x820ce020
	if (ctx.cr0.eq) goto loc_820CE020;
	// bl 0x820d4d38
	ctx.lr = 0x820CE020;
	sub_820D4D38(ctx, base);
loc_820CE020:
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x820d4cd8
	ctx.lr = 0x820CE028;
	sub_820D4CD8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,1512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1512, ctx.r3.u32);
	// beq 0x820ce048
	if (ctx.cr0.eq) goto loc_820CE048;
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r5,1516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1516, ctx.r5.u32);
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x822e9960
	ctx.lr = 0x820CE044;
	sub_822E9960(ctx, base);
	// b 0x820ce04c
	goto loc_820CE04C;
loc_820CE048:
	// stw r28,1516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1516, ctx.r28.u32);
loc_820CE04C:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
loc_820CE054:
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,13
	ctx.r5.s64 = 13;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x820cdcd8
	ctx.lr = 0x820CE06C;
	sub_820CDCD8(ctx, base);
	// addi r11,r29,275
	ctx.r11.s64 = ctx.r29.s64 + 275;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r28.u32);
	// b 0x820cdef8
	goto loc_820CDEF8;
loc_820CE07C:
	// lbz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 120);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820cea18
	if (ctx.cr0.eq) goto loc_820CEA18;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// li r5,60
	ctx.r5.s64 = 60;
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r11,r11,92
	ctx.r11.s64 = ctx.r11.s64 * 92;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822e9960
	ctx.lr = 0x820CE0C8;
	sub_822E9960(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
loc_820CE0CC:
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x820ce054
	goto loc_820CE054;
loc_820CE0D4:
	// lwz r11,1168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820ce114
	if (!ctx.cr6.eq) goto loc_820CE114;
	// mulli r11,r29,84
	ctx.r11.s64 = ctx.r29.s64 * 84;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,4
	ctx.r9.s64 = 4;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// addi r4,r11,1192
	ctx.r4.s64 = ctx.r11.s64 + 1192;
	// li r5,60
	ctx.r5.s64 = 60;
	// stw r10,1168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1168, ctx.r10.u32);
	// stw r10,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r10.u32);
	// stw r9,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r9.u32);
	// bl 0x822e9960
	ctx.lr = 0x820CE10C;
	sub_822E9960(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// b 0x820ce0cc
	goto loc_820CE0CC;
loc_820CE114:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-24736
	ctx.r3.s64 = ctx.r11.s64 + -24736;
	// bl 0x821313e0
	ctx.lr = 0x820CE120;
	sub_821313E0(ctx, base);
	// b 0x820cdef8
	goto loc_820CDEF8;
loc_820CE124:
	// li r11,7
	ctx.r11.s64 = 7;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,19
	ctx.r5.s64 = 19;
	// stw r11,1096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1096, ctx.r11.u32);
	// b 0x820ce1b8
	goto loc_820CE1B8;
loc_820CE140:
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r11,r31,312
	ctx.r11.s64 = ctx.r31.s64 + 312;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
loc_820CE150:
	// lwz r9,-12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x820ce188
	if (ctx.cr6.eq) goto loc_820CE188;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
loc_820CE160:
	// lbzx r9,r11,r7
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x820ce17c
	if (!ctx.cr6.eq) goto loc_820CE17C;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x820ce19c
	if (ctx.cr6.eq) goto loc_820CE19C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_820CE17C:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplwi cr6,r7,4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 4, ctx.xer);
	// blt cr6,0x820ce160
	if (ctx.cr6.lt) goto loc_820CE160;
loc_820CE188:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r11,r11,184
	ctx.r11.s64 = ctx.r11.s64 + 184;
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// blt cr6,0x820ce150
	if (ctx.cr6.lt) goto loc_820CE150;
	// b 0x820ce1a4
	goto loc_820CE1A4;
loc_820CE19C:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x820ce1b0
	if (!ctx.cr6.eq) goto loc_820CE1B0;
loc_820CE1A4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r28,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r28.u32);
	// b 0x820cea24
	goto loc_820CEA24;
loc_820CE1B0:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r5,47
	ctx.r5.s64 = 47;
loc_820CE1B8:
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_820CE1C4:
	// bl 0x820cdcd8
	ctx.lr = 0x820CE1C8;
	sub_820CDCD8(ctx, base);
	// b 0x820cdef8
	goto loc_820CDEF8;
loc_820CE1CC:
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// lbz r10,308(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 308);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x820ce1e4
	if (!ctx.cr6.eq) goto loc_820CE1E4;
	// stb r28,308(r11)
	PPC_STORE_U8(ctx.r11.u32 + 308, ctx.r28.u8);
	// b 0x820ce1f4
	goto loc_820CE1F4;
loc_820CE1E4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820ce1f4
	if (!ctx.cr6.eq) goto loc_820CE1F4;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,308(r11)
	PPC_STORE_U8(ctx.r11.u32 + 308, ctx.r10.u8);
loc_820CE1F4:
	// stw r28,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r28.u32);
	// b 0x820cdef8
	goto loc_820CDEF8;
loc_820CE1FC:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820ce28c
	if (ctx.cr6.lt) goto loc_820CE28C;
	// beq cr6,0x820ce268
	if (ctx.cr6.eq) goto loc_820CE268;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x820cea18
	if (!ctx.cr6.lt) goto loc_820CEA18;
	// lbz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 120);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820cea18
	if (ctx.cr0.eq) goto loc_820CEA18;
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820cea18
	if (ctx.cr0.eq) goto loc_820CEA18;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x820cea18
	if (!ctx.cr6.lt) goto loc_820CEA18;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82080e00
	ctx.lr = 0x820CE248;
	sub_82080E00(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820cdef4
	if (ctx.cr0.eq) goto loc_820CDEF4;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
loc_820CE254:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822f8de0
	ctx.lr = 0x820CE25C;
	sub_822F8DE0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820cdef8
	if (ctx.cr0.eq) goto loc_820CDEF8;
	// b 0x820cea18
	goto loc_820CEA18;
loc_820CE268:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820cdef8
	if (ctx.cr0.eq) goto loc_820CDEF8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mulli r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 * 48;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// ldx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// b 0x820ce254
	goto loc_820CE254;
loc_820CE28C:
	// lbz r11,992(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 992);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820ce2e0
	if (ctx.cr0.eq) goto loc_820CE2E0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,125
	ctx.r11.s64 = ctx.r11.s64 + 125;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x822f8de0
	ctx.lr = 0x820CE2B0;
	sub_822F8DE0(ctx, base);
loc_820CE2B0:
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bne 0x820ce2cc
	if (!ctx.cr0.eq) goto loc_820CE2CC;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r28,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r28.u32);
	// stw r28,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r28.u32);
	// b 0x820cea2c
	goto loc_820CEA2C;
loc_820CE2CC:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// stw r10,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r10.u32);
	// b 0x820cea2c
	goto loc_820CEA2C;
loc_820CE2E0:
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r8,r31,312
	ctx.r8.s64 = ctx.r31.s64 + 312;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
loc_820CE2F0:
	// lwz r11,-12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820ce330
	if (ctx.cr6.eq) goto loc_820CE330;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_820CE300:
	// lbzx r11,r8,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x820ce314
	if (ctx.cr6.eq) goto loc_820CE314;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x820ce324
	if (!ctx.cr6.eq) goto loc_820CE324;
loc_820CE314:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x820ce344
	if (ctx.cr6.eq) goto loc_820CE344;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_820CE324:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// blt cr6,0x820ce300
	if (ctx.cr6.lt) goto loc_820CE300;
loc_820CE330:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,184
	ctx.r8.s64 = ctx.r8.s64 + 184;
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// blt cr6,0x820ce2f0
	if (ctx.cr6.lt) goto loc_820CE2F0;
	// b 0x820ce1a4
	goto loc_820CE1A4;
loc_820CE344:
	// mulli r11,r9,23
	ctx.r11.s64 = ctx.r9.s64 * 23;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x822f8de0
	ctx.lr = 0x820CE360;
	sub_822F8DE0(ctx, base);
loc_820CE360:
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r28,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r28.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bne 0x820cdf34
	if (!ctx.cr0.eq) goto loc_820CDF34;
	// stw r28,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r28.u32);
	// b 0x820cea2c
	goto loc_820CEA2C;
loc_820CE378:
	// lbz r11,992(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 992);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820ce3a0
	if (ctx.cr0.eq) goto loc_820CE3A0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,125
	ctx.r11.s64 = ctx.r11.s64 + 125;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x822f8df0
	ctx.lr = 0x820CE39C;
	sub_822F8DF0(ctx, base);
	// b 0x820ce2b0
	goto loc_820CE2B0;
loc_820CE3A0:
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r9,r31,428
	ctx.r9.s64 = ctx.r31.s64 + 428;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_820CE3AC:
	// lwz r11,-128(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820ce3dc
	if (ctx.cr6.eq) goto loc_820CE3DC;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_820CE3C0:
	// lbzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x820ce3f0
	if (ctx.cr6.eq) goto loc_820CE3F0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x820ce3c0
	if (ctx.cr6.lt) goto loc_820CE3C0;
loc_820CE3DC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,184
	ctx.r9.s64 = ctx.r9.s64 + 184;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// blt cr6,0x820ce3ac
	if (ctx.cr6.lt) goto loc_820CE3AC;
	// b 0x820ce1a4
	goto loc_820CE1A4;
loc_820CE3F0:
	// mulli r10,r10,23
	ctx.r10.s64 = ctx.r10.s64 * 23;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x822f8df0
	ctx.lr = 0x820CE40C;
	sub_822F8DF0(ctx, base);
	// b 0x820ce360
	goto loc_820CE360;
loc_820CE410:
	// lwz r11,1096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1096);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x820ce428
	if (ctx.cr6.eq) goto loc_820CE428;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
loc_820CE420:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bne cr6,0x820ce42c
	if (!ctx.cr6.eq) goto loc_820CE42C;
loc_820CE428:
	// li r11,1
	ctx.r11.s64 = 1;
loc_820CE42C:
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// b 0x820cdef8
	goto loc_820CDEF8;
loc_820CE434:
	// lwz r11,1096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1096);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x820ce428
	if (ctx.cr6.eq) goto loc_820CE428;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x820ce428
	if (ctx.cr6.eq) goto loc_820CE428;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// b 0x820ce420
	goto loc_820CE420;
loc_820CE450:
	// stb r28,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// lwz r11,1096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1096);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820ce4a0
	if (!ctx.cr6.eq) goto loc_820CE4A0;
	// lwz r11,1116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1116);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x820cdef8
	if (!ctx.cr6.gt) goto loc_820CDEF8;
	// addi r11,r31,1120
	ctx.r11.s64 = ctx.r31.s64 + 1120;
	// li r10,1
	ctx.r10.s64 = 1;
loc_820CE478:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x820ce488
	if (!ctx.cr6.eq) goto loc_820CE488;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
loc_820CE488:
	// lwz r8,1116(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1116);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x820ce478
	if (ctx.cr6.lt) goto loc_820CE478;
	// b 0x820cdef8
	goto loc_820CDEF8;
loc_820CE4A0:
	// addi r10,r31,428
	ctx.r10.s64 = ctx.r31.s64 + 428;
	// li r7,4
	ctx.r7.s64 = 4;
loc_820CE4A8:
	// lwz r11,-128(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820ce4f0
	if (ctx.cr6.eq) goto loc_820CE4F0;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r8,r10,-428
	ctx.r8.s64 = ctx.r10.s64 + -428;
loc_820CE4BC:
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x820ce4e4
	if (!ctx.cr6.eq) goto loc_820CE4E4;
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lbz r9,312(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 312);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stb r9,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r9.u8);
loc_820CE4E4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x820ce4bc
	if (ctx.cr6.lt) goto loc_820CE4BC;
loc_820CE4F0:
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r10,r10,184
	ctx.r10.s64 = ctx.r10.s64 + 184;
	// bne 0x820ce4a8
	if (!ctx.cr0.eq) goto loc_820CE4A8;
	// b 0x820cdef8
	goto loc_820CDEF8;
loc_820CE500:
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820ce514
	if (!ctx.cr6.eq) goto loc_820CE514;
	// stb r28,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// b 0x820cdef8
	goto loc_820CDEF8;
loc_820CE514:
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// lbz r11,312(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 312);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
loc_820CE524:
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x820ce42c
	goto loc_820CE42C;
loc_820CE52C:
	// addi r11,r29,275
	ctx.r11.s64 = ctx.r29.s64 + 275;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
loc_820CE538:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x820cdef8
	goto loc_820CDEF8;
loc_820CE540:
	// lwz r11,1096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1096);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x820ce554
	if (!ctx.cr6.eq) goto loc_820CE554;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,1096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1096, ctx.r11.u32);
loc_820CE554:
	// lbz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 244);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,40
	ctx.r5.s64 = 40;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// beq 0x820ce580
	if (ctx.cr0.eq) goto loc_820CE580;
	// li r7,2
	ctx.r7.s64 = 2;
	// b 0x820ce1c4
	goto loc_820CE1C4;
loc_820CE580:
	// li r7,4
	ctx.r7.s64 = 4;
	// b 0x820ce1c4
	goto loc_820CE1C4;
loc_820CE588:
	// lbz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 244);
	// b 0x820ce42c
	goto loc_820CE42C;
loc_820CE590:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820d3520
	ctx.lr = 0x820CE5A4;
	sub_820D3520(ctx, base);
	// b 0x820cdef8
	goto loc_820CDEF8;
loc_820CE5A8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820d2cf8
	ctx.lr = 0x820CE5B8;
	sub_820D2CF8(ctx, base);
	// b 0x820cea28
	goto loc_820CEA28;
loc_820CE5BC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,41
	ctx.r5.s64 = 41;
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// b 0x820ce1b8
	goto loc_820CE1B8;
loc_820CE5E0:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x820cdf0c
	if (ctx.cr6.eq) goto loc_820CDF0C;
	// lbz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 120);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820cea18
	if (ctx.cr0.eq) goto loc_820CEA18;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// b 0x820ce538
	goto loc_820CE538;
loc_820CE600:
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820ce614
	if (ctx.cr0.eq) goto loc_820CE614;
	// bl 0x820d4d38
	ctx.lr = 0x820CE610;
	sub_820D4D38(ctx, base);
	// stw r28,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r28.u32);
loc_820CE614:
	// stb r28,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r28.u8);
	// b 0x820cdef8
	goto loc_820CDEF8;
loc_820CE61C:
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r9,r31,312
	ctx.r9.s64 = ctx.r31.s64 + 312;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_820CE62C:
	// lwz r10,-12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820ce664
	if (ctx.cr6.eq) goto loc_820CE664;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_820CE63C:
	// lbzx r7,r9,r10
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bne cr6,0x820ce658
	if (!ctx.cr6.eq) goto loc_820CE658;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x820ce678
	if (ctx.cr6.eq) goto loc_820CE678;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_820CE658:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// blt cr6,0x820ce63c
	if (ctx.cr6.lt) goto loc_820CE63C;
loc_820CE664:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,184
	ctx.r9.s64 = ctx.r9.s64 + 184;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x820ce62c
	if (ctx.cr6.lt) goto loc_820CE62C;
	// b 0x820ce1a4
	goto loc_820CE1A4;
loc_820CE678:
	// mulli r11,r11,184
	ctx.r11.s64 = ctx.r11.s64 * 184;
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r11,r9,r31
	ctx.r11.u64 = ctx.r9.u64 + ctx.r31.u64;
	// addi r11,r11,316
	ctx.r11.s64 = ctx.r11.s64 + 316;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lbz r11,308(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 308);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// b 0x820cdef8
	goto loc_820CDEF8;
loc_820CE6A8:
	// lwz r11,1096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1096);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820ce718
	if (ctx.cr6.lt) goto loc_820CE718;
	// beq cr6,0x820ce710
	if (ctx.cr6.eq) goto loc_820CE710;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x820ce708
	if (ctx.cr6.eq) goto loc_820CE708;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x820ce700
	if (ctx.cr6.eq) goto loc_820CE700;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x820ce708
	if (ctx.cr6.eq) goto loc_820CE708;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x820ce6f8
	if (ctx.cr6.eq) goto loc_820CE6F8;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x820ce6f0
	if (ctx.cr6.eq) goto loc_820CE6F0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-24780
	ctx.r3.s64 = ctx.r11.s64 + -24780;
	// bl 0x821313e0
	ctx.lr = 0x820CE6EC;
	sub_821313E0(ctx, base);
	// b 0x820cea18
	goto loc_820CEA18;
loc_820CE6F0:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x820ce538
	goto loc_820CE538;
loc_820CE6F8:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x820ce538
	goto loc_820CE538;
loc_820CE700:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x820ce538
	goto loc_820CE538;
loc_820CE708:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x820ce538
	goto loc_820CE538;
loc_820CE710:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x820ce538
	goto loc_820CE538;
loc_820CE718:
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// b 0x820cdef8
	goto loc_820CDEF8;
loc_820CE720:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// b 0x820ce538
	goto loc_820CE538;
loc_820CE728:
	// lbz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// b 0x820ce42c
	goto loc_820CE42C;
loc_820CE730:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
loc_820CE734:
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r11,r11,r29
	ctx.r11.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r29.u8 & 0x3F));
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// b 0x820ce42c
	goto loc_820CE42C;
loc_820CE750:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// b 0x820ce734
	goto loc_820CE734;
loc_820CE758:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// b 0x820ce734
	goto loc_820CE734;
loc_820CE760:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// bl 0x822f8dd8
	ctx.lr = 0x820CE770;
	sub_822F8DD8(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// b 0x820ce524
	goto loc_820CE524;
loc_820CE778:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// b 0x820cdef8
	goto loc_820CDEF8;
loc_820CE788:
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822f8078
	ctx.lr = 0x820CE798;
	sub_822F8078(ctx, base);
	// b 0x820cdef8
	goto loc_820CDEF8;
loc_820CE79C:
	// lbz r11,992(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 992);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820ce7b8
	if (ctx.cr0.eq) goto loc_820CE7B8;
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,1032
	ctx.r11.s64 = ctx.r11.s64 + 1032;
	// b 0x820ce538
	goto loc_820CE538;
loc_820CE7B8:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r11,r31,316
	ctx.r11.s64 = ctx.r31.s64 + 316;
	// li r7,4
	ctx.r7.s64 = 4;
loc_820CE7C4:
	// lwz r10,-16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820ce808
	if (ctx.cr6.eq) goto loc_820CE808;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
loc_820CE7DC:
	// lbzx r5,r8,r10
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// bne cr6,0x820ce7f8
	if (!ctx.cr6.eq) goto loc_820CE7F8;
	// cmplw cr6,r6,r29
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x820ce7f4
	if (!ctx.cr6.eq) goto loc_820CE7F4;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
loc_820CE7F4:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
loc_820CE7F8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// blt cr6,0x820ce7dc
	if (ctx.cr6.lt) goto loc_820CE7DC;
loc_820CE808:
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r11,r11,184
	ctx.r11.s64 = ctx.r11.s64 + 184;
	// bne 0x820ce7c4
	if (!ctx.cr0.eq) goto loc_820CE7C4;
	// b 0x820cdef8
	goto loc_820CDEF8;
loc_820CE818:
	// lbz r11,992(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 992);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820ce82c
	if (ctx.cr0.eq) goto loc_820CE82C;
	// lwz r11,988(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 988);
	// b 0x820ce538
	goto loc_820CE538;
loc_820CE82C:
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// addi r11,r31,312
	ctx.r11.s64 = ctx.r31.s64 + 312;
	// li r9,4
	ctx.r9.s64 = 4;
loc_820CE838:
	// lwz r10,-12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820ce864
	if (ctx.cr6.eq) goto loc_820CE864;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_820CE848:
	// lbzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi r7,0
	ctx.cr0.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq 0x820ce858
	if (ctx.cr0.eq) goto loc_820CE858;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_820CE858:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// blt cr6,0x820ce848
	if (ctx.cr6.lt) goto loc_820CE848;
loc_820CE864:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,184
	ctx.r11.s64 = ctx.r11.s64 + 184;
	// bne 0x820ce838
	if (!ctx.cr0.eq) goto loc_820CE838;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// b 0x820cdef8
	goto loc_820CDEF8;
loc_820CE878:
	// addi r11,r29,48
	ctx.r11.s64 = ctx.r29.s64 + 48;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r31.u32);
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
	// b 0x820cdef8
	goto loc_820CDEF8;
loc_820CE88C:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r9,48
	ctx.r9.s64 = 48;
	// addi r10,r31,312
	ctx.r10.s64 = ctx.r31.s64 + 312;
loc_820CE898:
	// lwz r11,-12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820ce904
	if (ctx.cr6.eq) goto loc_820CE904;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r8,r10,-312
	ctx.r8.s64 = ctx.r10.s64 + -312;
loc_820CE8AC:
	// lbzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// bne cr6,0x820ce8f8
	if (!ctx.cr6.eq) goto loc_820CE8F8;
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// rlwinm r5,r5,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r5,r5,r31
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r5.u32 + ctx.r31.u32);
	// cmpld cr6,r4,r5
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r5.u64, ctx.xer);
	// bne cr6,0x820ce8f4
	if (!ctx.cr6.eq) goto loc_820CE8F4;
	// lbz r5,992(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 992);
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq 0x820ce8f0
	if (ctx.cr0.eq) goto loc_820CE8F0;
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lbz r5,428(r5)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r5.u32 + 428);
	// extsb r5,r5
	ctx.r5.s64 = ctx.r5.s8;
	// stw r5,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r5.u32);
	// b 0x820ce8f4
	goto loc_820CE8F4;
loc_820CE8F0:
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
loc_820CE8F4:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
loc_820CE8F8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x820ce8ac
	if (ctx.cr6.lt) goto loc_820CE8AC;
loc_820CE904:
	// addi r9,r9,23
	ctx.r9.s64 = ctx.r9.s64 + 23;
	// addi r10,r10,184
	ctx.r10.s64 = ctx.r10.s64 + 184;
	// cmplwi cr6,r9,140
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 140, ctx.xer);
	// blt cr6,0x820ce898
	if (ctx.cr6.lt) goto loc_820CE898;
	// b 0x820cdef8
	goto loc_820CDEF8;
loc_820CE918:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stb r28,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// addi r10,r31,1508
	ctx.r10.s64 = ctx.r31.s64 + 1508;
loc_820CE924:
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x820ce940
	if (!ctx.cr0.eq) goto loc_820CE940;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x820ce924
	if (ctx.cr6.lt) goto loc_820CE924;
	// b 0x820cdef8
	goto loc_820CDEF8;
loc_820CE940:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// b 0x820cdef8
	goto loc_820CDEF8;
loc_820CE950:
	// lwz r11,1168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1168);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820cea18
	if (ctx.cr6.lt) goto loc_820CEA18;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x820cdf0c
	if (ctx.cr6.lt) goto loc_820CDF0C;
	// beq cr6,0x820ce974
	if (ctx.cr6.eq) goto loc_820CE974;
loc_820CE968:
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x820cea18
	if (ctx.cr6.lt) goto loc_820CEA18;
	// b 0x820cdef8
	goto loc_820CDEF8;
loc_820CE974:
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// b 0x820ce538
	goto loc_820CE538;
loc_820CE97C:
	// lwz r11,1168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1168);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820cea18
	if (ctx.cr6.lt) goto loc_820CEA18;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x820cdf0c
	if (ctx.cr6.lt) goto loc_820CDF0C;
	// bne cr6,0x820ce968
	if (!ctx.cr6.eq) goto loc_820CE968;
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// b 0x820ce538
	goto loc_820CE538;
loc_820CE99C:
	// lwz r11,1168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1168);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820cea18
	if (ctx.cr6.lt) goto loc_820CEA18;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x820cdf0c
	if (ctx.cr6.lt) goto loc_820CDF0C;
	// bne cr6,0x820ce968
	if (!ctx.cr6.eq) goto loc_820CE968;
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// b 0x820ce538
	goto loc_820CE538;
loc_820CE9BC:
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// stw r28,1168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1168, ctx.r28.u32);
	// stb r28,1508(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1508, ctx.r28.u8);
	// b 0x820cdef8
	goto loc_820CDEF8;
loc_820CE9CC:
	// lwz r11,1516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1516);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// lwz r11,1512(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1512);
	// b 0x820ce538
	goto loc_820CE538;
loc_820CE9DC:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1096, ctx.r11.u32);
	// bl 0x820d3cf0
	ctx.lr = 0x820CE9F8;
	sub_820D3CF0(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,1776(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1776);
	// bl 0x820d8d40
	ctx.lr = 0x820CEA04;
	sub_820D8D40(ctx, base);
	// b 0x820cdef8
	goto loc_820CDEF8;
loc_820CEA08:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r11,-24832
	ctx.r3.s64 = ctx.r11.s64 + -24832;
	// bl 0x821313e0
	ctx.lr = 0x820CEA18;
	sub_821313E0(ctx, base);
loc_820CEA18:
	// li r11,1
	ctx.r11.s64 = 1;
loc_820CEA1C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r10.u32);
loc_820CEA24:
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_820CEA28:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_820CEA2C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CEA34"))) PPC_WEAK_FUNC(sub_820CEA34);
PPC_FUNC_IMPL(__imp__sub_820CEA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CEA38"))) PPC_WEAK_FUNC(sub_820CEA38);
PPC_FUNC_IMPL(__imp__sub_820CEA38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x820CEA40;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r29,r31,248
	ctx.r29.s64 = ctx.r31.s64 + 248;
	// li r28,3
	ctx.r28.s64 = 3;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stb r30,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r30.u8);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stb r30,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r30.u8);
	// std r30,128(r31)
	PPC_STORE_U64(ctx.r31.u32 + 128, ctx.r30.u64);
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// stw r30,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r30.u32);
	// stw r30,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r30.u32);
	// stb r30,208(r31)
	PPC_STORE_U8(ctx.r31.u32 + 208, ctx.r30.u8);
	// stb r30,220(r31)
	PPC_STORE_U8(ctx.r31.u32 + 220, ctx.r30.u8);
	// stw r30,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r30.u32);
	// stw r30,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r30.u32);
	// stw r30,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r30.u32);
	// stw r30,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r30.u32);
	// stw r30,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r30.u32);
	// stb r30,244(r31)
	PPC_STORE_U8(ctx.r31.u32 + 244, ctx.r30.u8);
loc_820CEADC:
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e9ff0
	ctx.lr = 0x820CEAEC;
	sub_822E9FF0(ctx, base);
	// stw r30,52(r29)
	PPC_STORE_U32(ctx.r29.u32 + 52, ctx.r30.u32);
	// stw r30,176(r29)
	PPC_STORE_U32(ctx.r29.u32 + 176, ctx.r30.u32);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,184
	ctx.r29.s64 = ctx.r29.s64 + 184;
	// bge 0x820ceadc
	if (!ctx.cr0.lt) goto loc_820CEADC;
	// stw r30,984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 984, ctx.r30.u32);
	// li r5,60
	ctx.r5.s64 = 60;
	// stb r30,992(r31)
	PPC_STORE_U8(ctx.r31.u32 + 992, ctx.r30.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,1096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1096, ctx.r30.u32);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// stw r30,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r30.u32);
	// stw r30,1168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1168, ctx.r30.u32);
	// stw r30,1512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1512, ctx.r30.u32);
	// stw r30,1516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1516, ctx.r30.u32);
	// std r30,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r30.u64);
	// std r30,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r30.u64);
	// std r30,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.r30.u64);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// bl 0x822e9ff0
	ctx.lr = 0x820CEB3C;
	sub_822E9FF0(ctx, base);
	// std r30,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r30.u64);
	// addi r11,r31,1528
	ctx.r11.s64 = ctx.r31.s64 + 1528;
	// std r30,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r30.u64);
	// li r10,16
	ctx.r10.s64 = 16;
loc_820CEB4C:
	// stw r30,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r30.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r30,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r30.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne 0x820ceb4c
	if (!ctx.cr0.eq) goto loc_820CEB4C;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r11,r31,1136
	ctx.r11.s64 = ctx.r31.s64 + 1136;
	// addi r9,r31,1508
	ctx.r9.s64 = ctx.r31.s64 + 1508;
loc_820CEB74:
	// stw r10,-16(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16, ctx.r10.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r27,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r27.u32);
	// stbx r30,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r30.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r30,-36(r11)
	PPC_STORE_U32(ctx.r11.u32 + -36, ctx.r30.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// blt cr6,0x820ceb74
	if (ctx.cr6.lt) goto loc_820CEB74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CEBA4"))) PPC_WEAK_FUNC(sub_820CEBA4);
PPC_FUNC_IMPL(__imp__sub_820CEBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CEBA8"))) PPC_WEAK_FUNC(sub_820CEBA8);
PPC_FUNC_IMPL(__imp__sub_820CEBA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98d0
	ctx.lr = 0x820CEBB0;
	__savegprlr_22(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820cebdc
	if (!ctx.cr0.eq) goto loc_820CEBDC;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// stw r10,4(r22)
	PPC_STORE_U32(ctx.r22.u32 + 4, ctx.r10.u32);
	// b 0x820cf13c
	goto loc_820CF13C;
loc_820CEBDC:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,1776(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1776);
	// bl 0x820d8fa0
	ctx.lr = 0x820CEBE8;
	sub_820D8FA0(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8230474c
	ctx.lr = 0x820CEBFC;
	__imp__XNotifyGetNext(ctx, base);
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820cef74
	if (ctx.cr0.eq) goto loc_820CEF74;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x820cef60
	if (ctx.cr6.eq) goto loc_820CEF60;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x820cecd0
	if (ctx.cr6.eq) goto loc_820CECD0;
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// beq cr6,0x820cecc4
	if (ctx.cr6.eq) goto loc_820CECC4;
	// lis r10,512
	ctx.r10.s64 = 33554432;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x820cef74
	if (!ctx.cr6.eq) goto loc_820CEF74;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-24552
	ctx.r3.s64 = ctx.r11.s64 + -24552;
	// bl 0x821313e0
	ctx.lr = 0x820CEC40;
	sub_821313E0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mulli r30,r3,84
	ctx.r30.s64 = ctx.r3.s64 * 84;
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r11,1172
	ctx.r4.s64 = ctx.r11.s64 + 1172;
	// bl 0x822d8550
	ctx.lr = 0x820CEC58;
	sub_822D8550(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x820cef74
	if (!ctx.cr0.eq) goto loc_820CEF74;
	// add r10,r30,r31
	ctx.r10.u64 = ctx.r30.u64 + ctx.r31.u64;
	// addi r11,r31,136
	ctx.r11.s64 = ctx.r31.s64 + 136;
	// addi r10,r10,1192
	ctx.r10.s64 = ctx.r10.s64 + 1192;
	// li r24,1
	ctx.r24.s64 = 1;
	// li r9,8
	ctx.r9.s64 = 8;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_820CEC7C:
	// lbzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x820cec90
	if (ctx.cr6.eq) goto loc_820CEC90;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
loc_820CEC90:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x820cec7c
	if (!ctx.cr0.eq) goto loc_820CEC7C;
	// lwz r11,1096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1096);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820cecb8
	if (ctx.cr0.eq) goto loc_820CECB8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x820cecb8
	if (ctx.cr6.eq) goto loc_820CECB8;
	// clrlwi. r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x820cef74
	if (!ctx.cr0.eq) goto loc_820CEF74;
loc_820CECB8:
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// stb r24,1508(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1508, ctx.r24.u8);
	// b 0x820cef74
	goto loc_820CEF74;
loc_820CECC4:
	// lwz r3,1776(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1776);
	// bl 0x820d9570
	ctx.lr = 0x820CECCC;
	sub_820D9570(ctx, base);
	// b 0x820cef74
	goto loc_820CEF74;
loc_820CECD0:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r23,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r23.u32);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// stw r23,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r23.u32);
	// addi r29,r31,1100
	ctx.r29.s64 = ctx.r31.s64 + 1100;
	// stw r23,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r23.u32);
	// stw r23,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r23.u32);
	// li r24,1
	ctx.r24.s64 = 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r28,r11,-24584
	ctx.r28.s64 = ctx.r11.s64 + -24584;
loc_820CECFC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f8080
	ctx.lr = 0x820CED04;
	sub_822F8080(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820cedd4
	if (ctx.cr0.eq) goto loc_820CEDD4;
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// slw r9,r11,r30
	ctx.r9.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r30.u8 & 0x3F));
	// or r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bne 0x820ced34
	if (!ctx.cr0.eq) goto loc_820CED34;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x820ceda4
	goto loc_820CEDA4;
loc_820CED34:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f82c8
	ctx.lr = 0x820CED40;
	sub_822F82C8(ctx, base);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// rldicl r11,r11,16,48
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 16) & 0xFFFF;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r10,9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9, ctx.xer);
	// bne cr6,0x820ced6c
	if (!ctx.cr6.eq) goto loc_820CED6C;
	// rlwinm. r11,r11,0,24,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820ced6c
	if (ctx.cr0.eq) goto loc_820CED6C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821313e0
	ctx.lr = 0x820CED68;
	sub_821313E0(ctx, base);
	// b 0x820ceda8
	goto loc_820CEDA8;
loc_820CED6C:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,254
	ctx.r4.s64 = 254;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f8090
	ctx.lr = 0x820CED7C;
	sub_822F8090(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x820ceda8
	if (!ctx.cr0.eq) goto loc_820CEDA8;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// slw r9,r11,r30
	ctx.r9.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r30.u8 & 0x3F));
	// or r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bne cr6,0x820ceda8
	if (!ctx.cr6.eq) goto loc_820CEDA8;
	// li r11,7
	ctx.r11.s64 = 7;
loc_820CEDA4:
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_820CEDA8:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// slw r10,r24,r30
	ctx.r10.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r30.u8 & 0x3F));
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bne cr6,0x820cedc8
	if (!ctx.cr6.eq) goto loc_820CEDC8;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_820CEDC8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_820CEDD4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x820cecfc
	if (ctx.cr6.lt) goto loc_820CECFC;
	// addi r28,r31,316
	ctx.r28.s64 = ctx.r31.s64 + 316;
	// addi r30,r31,384
	ctx.r30.s64 = ctx.r31.s64 + 384;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// li r9,8
	ctx.r9.s64 = 8;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820CEDFC:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x820cedfc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820CEDFC;
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// ld r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// ld r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// ld r7,24(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 24);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// std r8,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r8.u64);
	// std r7,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r7.u64);
loc_820CEE40:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822f82c8
	ctx.lr = 0x820CEE4C;
	sub_822F82C8(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822f8078
	ctx.lr = 0x820CEE5C;
	sub_822F8078(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// addi r26,r26,16
	ctx.r26.s64 = ctx.r26.s64 + 16;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// blt cr6,0x820cee40
	if (ctx.cr6.lt) goto loc_820CEE40;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// addi r26,r1,160
	ctx.r26.s64 = ctx.r1.s64 + 160;
	// addi r27,r1,128
	ctx.r27.s64 = ctx.r1.s64 + 128;
	// lis r25,-32205
	ctx.r25.s64 = -2110586880;
loc_820CEE80:
	// ld r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// beq cr6,0x820cef40
	if (ctx.cr6.eq) goto loc_820CEF40;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x820ceea8
	if (!ctx.cr6.eq) goto loc_820CEEA8;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x820cef40
	if (ctx.cr6.eq) goto loc_820CEF40;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// b 0x820cef34
	goto loc_820CEF34;
loc_820CEEA8:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_820CEEB0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x820ceed4
	if (ctx.cr0.eq) goto loc_820CEED4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x820ceeb0
	if (ctx.cr6.eq) goto loc_820CEEB0;
loc_820CEED4:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x820cef40
	if (ctx.cr0.eq) goto loc_820CEF40;
	// lbz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 244);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,40
	ctx.r5.s64 = 40;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// beq 0x820cef08
	if (ctx.cr0.eq) goto loc_820CEF08;
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// b 0x820cef10
	goto loc_820CEF10;
loc_820CEF08:
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
loc_820CEF10:
	// bl 0x820cdcd8
	ctx.lr = 0x820CEF14;
	sub_820CDCD8(ctx, base);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// slw r11,r24,r29
	ctx.r11.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r29.u8 & 0x3F));
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x820cef40
	if (ctx.cr6.eq) goto loc_820CEF40;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
loc_820CEF34:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,9796(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 9796);
	// bl 0x820cce90
	ctx.lr = 0x820CEF40;
	sub_820CCE90(ctx, base);
loc_820CEF40:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// addi r26,r26,16
	ctx.r26.s64 = ctx.r26.s64 + 16;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// blt cr6,0x820cee80
	if (ctx.cr6.lt) goto loc_820CEE80;
	// b 0x820cef74
	goto loc_820CEF74;
loc_820CEF60:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stb r11,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r11.u8);
loc_820CEF74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d1ef0
	ctx.lr = 0x820CEF7C;
	sub_820D1EF0(ctx, base);
	// lwz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820cef90
	if (ctx.cr6.eq) goto loc_820CEF90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d4968
	ctx.lr = 0x820CEF90;
	sub_820D4968(ctx, base);
loc_820CEF90:
	// lwz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820cf134
	if (ctx.cr6.eq) goto loc_820CF134;
	// lbz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 244);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820cf04c
	if (ctx.cr0.eq) goto loc_820CF04C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// addi r27,r31,296
	ctx.r27.s64 = ctx.r31.s64 + 296;
	// addi r26,r11,-24636
	ctx.r26.s64 = ctx.r11.s64 + -24636;
loc_820CEFB8:
	// addi r29,r27,128
	ctx.r29.s64 = ctx.r27.s64 + 128;
	// lwz r11,-124(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -124);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x820cf038
	if (!ctx.cr6.eq) goto loc_820CF038;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,120
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 120, ctx.xer);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// bgt cr6,0x820cefe8
	if (ctx.cr6.gt) goto loc_820CEFE8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x820cf038
	if (!ctx.cr6.eq) goto loc_820CF038;
loc_820CEFE8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821313e0
	ctx.lr = 0x820CEFF4;
	sub_821313E0(ctx, base);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// addi r29,r29,-112
	ctx.r29.s64 = ctx.r29.s64 + -112;
loc_820CEFFC:
	// lbzx r11,r29,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x820cf028
	if (!ctx.cr6.eq) goto loc_820CF028;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,5
	ctx.r8.s64 = 5;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,47
	ctx.r5.s64 = 47;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x820cdcd8
	ctx.lr = 0x820CF028;
	sub_820CDCD8(ctx, base);
loc_820CF028:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x820ceffc
	if (ctx.cr6.lt) goto loc_820CEFFC;
	// stw r23,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r23.u32);
loc_820CF038:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,184
	ctx.r27.s64 = ctx.r27.s64 + 184;
	// cmplwi cr6,r28,4
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 4, ctx.xer);
	// blt cr6,0x820cefb8
	if (ctx.cr6.lt) goto loc_820CEFB8;
	// b 0x820cf104
	goto loc_820CF104;
loc_820CF04C:
	// lwz r11,1096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1096);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x820cf104
	if (ctx.cr6.lt) goto loc_820CF104;
	// lwz r11,984(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 984);
	// mulli r11,r11,184
	ctx.r11.s64 = ctx.r11.s64 * 184;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,296(r11)
	PPC_STORE_U32(ctx.r11.u32 + 296, ctx.r10.u32);
	// lwz r11,984(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 984);
	// mulli r11,r11,184
	ctx.r11.s64 = ctx.r11.s64 * 184;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// cmplwi cr6,r11,360
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 360, ctx.xer);
	// ble cr6,0x820cf104
	if (!ctx.cr6.gt) goto loc_820CF104;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-24664
	ctx.r3.s64 = ctx.r11.s64 + -24664;
	// bl 0x821313e0
	ctx.lr = 0x820CF094;
	sub_821313E0(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,1100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1100, ctx.r11.u32);
	// stw r11,1104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1104, ctx.r11.u32);
	// stw r11,1108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1108, ctx.r11.u32);
	// stw r11,1112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1112, ctx.r11.u32);
	// lwz r10,1096(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1096);
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// beq cr6,0x820cf0f0
	if (ctx.cr6.eq) goto loc_820CF0F0;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x820cf0f0
	if (ctx.cr6.eq) goto loc_820CF0F0;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x820cf0cc
	if (!ctx.cr6.eq) goto loc_820CF0CC;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,1096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1096, ctx.r11.u32);
loc_820CF0CC:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,40
	ctx.r5.s64 = 40;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x820cdcd8
	ctx.lr = 0x820CF0EC;
	sub_820CDCD8(ctx, base);
	// b 0x820cf0f4
	goto loc_820CF0F4;
loc_820CF0F0:
	// stw r11,1096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1096, ctx.r11.u32);
loc_820CF0F4:
	// lwz r11,984(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 984);
	// mulli r11,r11,184
	ctx.r11.s64 = ctx.r11.s64 * 184;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r23,296(r11)
	PPC_STORE_U32(ctx.r11.u32 + 296, ctx.r23.u32);
loc_820CF104:
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820cf12c
	if (!ctx.cr0.eq) goto loc_820CF12C;
	// lwz r11,1096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1096);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x820cf124
	if (ctx.cr6.eq) goto loc_820CF124;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d3f38
	ctx.lr = 0x820CF124;
	sub_820D3F38(ctx, base);
loc_820CF124:
	// li r11,20
	ctx.r11.s64 = 20;
	// b 0x820cf130
	goto loc_820CF130;
loc_820CF12C:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_820CF130:
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
loc_820CF134:
	// stw r23,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r23.u32);
	// stw r23,4(r22)
	PPC_STORE_U32(ctx.r22.u32 + 4, ctx.r23.u32);
loc_820CF13C:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x822e9920
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CF148"))) PPC_WEAK_FUNC(sub_820CF148);
PPC_FUNC_IMPL(__imp__sub_820CF148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x820CF150;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r29,r28,496
	ctx.r29.s64 = ctx.r28.s64 + 496;
loc_820CF164:
	// lwz r11,-12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -12);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x820cf1ac
	if (!ctx.cr6.eq) goto loc_820CF1AC;
	// li r31,0
	ctx.r31.s64 = 0;
loc_820CF174:
	// lbzx r11,r29,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x820cf1a0
	if (!ctx.cr6.eq) goto loc_820CF1A0;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// li r8,2
	ctx.r8.s64 = 2;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,47
	ctx.r5.s64 = 47;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820cdcd8
	ctx.lr = 0x820CF1A0;
	sub_820CDCD8(ctx, base);
loc_820CF1A0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// blt cr6,0x820cf174
	if (ctx.cr6.lt) goto loc_820CF174;
loc_820CF1AC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,184
	ctx.r29.s64 = ctx.r29.s64 + 184;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x820cf164
	if (ctx.cr6.lt) goto loc_820CF164;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CF1C4"))) PPC_WEAK_FUNC(sub_820CF1C4);
PPC_FUNC_IMPL(__imp__sub_820CF1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CF1C8"))) PPC_WEAK_FUNC(sub_820CF1C8);
PPC_FUNC_IMPL(__imp__sub_820CF1C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x820CF1D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820cf350
	if (!ctx.cr6.eq) goto loc_820CF350;
	// bl 0x820cdc88
	ctx.lr = 0x820CF1F0;
	sub_820CDC88(ctx, base);
	// lwz r11,1096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1096);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x820cf350
	if (ctx.cr6.gt) goto loc_820CF350;
	// lis r12,-32254
	ctx.r12.s64 = -2113798144;
	// addi r12,r12,-24464
	ctx.r12.s64 = ctx.r12.s64 + -24464;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32243
	ctx.r12.s64 = -2113077248;
	// addi r12,r12,-3544
	ctx.r12.s64 = ctx.r12.s64 + -3544;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_820CF228;
	case 1:
		goto loc_820CF330;
	case 2:
		goto loc_820CF330;
	case 3:
		goto loc_820CF234;
	case 4:
		goto loc_820CF284;
	case 5:
		goto loc_820CF2D0;
	case 6:
		goto loc_820CF2F8;
	case 7:
		goto loc_820CF2F8;
	default:
		__builtin_unreachable();
	}
loc_820CF228:
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x820cf338
	goto loc_820CF338;
loc_820CF234:
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x820cdcd8
	ctx.lr = 0x820CF254;
	sub_820CDCD8(ctx, base);
	// lbz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 244);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820cf270
	if (ctx.cr0.eq) goto loc_820CF270;
loc_820CF264:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x820cf148
	ctx.lr = 0x820CF26C;
	sub_820CF148(ctx, base);
	// b 0x820cf350
	goto loc_820CF350;
loc_820CF270:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
loc_820CF274:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820d3cf0
	ctx.lr = 0x820CF280;
	sub_820D3CF0(ctx, base);
	// b 0x820cf350
	goto loc_820CF350;
loc_820CF284:
	// lbz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 244);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820cf2b8
	if (ctx.cr0.eq) goto loc_820CF2B8;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820cdcd8
	ctx.lr = 0x820CF2B0;
	sub_820CDCD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x820cf264
	goto loc_820CF264;
loc_820CF2B8:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,1776(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1776);
	// bl 0x820d8d40
	ctx.lr = 0x820CF2C4;
	sub_820D8D40(ctx, base);
	// li r5,38
	ctx.r5.s64 = 38;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// b 0x820cf338
	goto loc_820CF338;
loc_820CF2D0:
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// bne cr6,0x820cf2ec
	if (!ctx.cr6.eq) goto loc_820CF2EC;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d3cf0
	ctx.lr = 0x820CF2EC;
	sub_820D3CF0(ctx, base);
loc_820CF2EC:
	// li r5,36
	ctx.r5.s64 = 36;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// b 0x820cf338
	goto loc_820CF338;
loc_820CF2F8:
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,34
	ctx.r5.s64 = 34;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x820cdcd8
	ctx.lr = 0x820CF318;
	sub_820CDCD8(ctx, base);
	// lbz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 244);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820cf264
	if (!ctx.cr0.eq) goto loc_820CF264;
	// li r6,4
	ctx.r6.s64 = 4;
	// b 0x820cf274
	goto loc_820CF274;
loc_820CF330:
	// li r5,34
	ctx.r5.s64 = 34;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
loc_820CF338:
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820cdcd8
	ctx.lr = 0x820CF350;
	sub_820CDCD8(ctx, base);
loc_820CF350:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CF358"))) PPC_WEAK_FUNC(sub_820CF358);
PPC_FUNC_IMPL(__imp__sub_820CF358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e0
	ctx.lr = 0x820CF360;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820cf464
	if (!ctx.cr6.eq) goto loc_820CF464;
	// bl 0x820cdc88
	ctx.lr = 0x820CF37C;
	sub_820CDC88(ctx, base);
	// addi r26,r31,196
	ctx.r26.s64 = ctx.r31.s64 + 196;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stb r30,992(r31)
	PPC_STORE_U8(ctx.r31.u32 + 992, ctx.r30.u8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820cf39c
	if (ctx.cr6.eq) goto loc_820CF39C;
	// li r5,3
	ctx.r5.s64 = 3;
	// b 0x820cf448
	goto loc_820CF448;
loc_820CF39C:
	// addi r29,r31,424
	ctx.r29.s64 = ctx.r31.s64 + 424;
	// li r28,4
	ctx.r28.s64 = 4;
loc_820CF3A4:
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,-176
	ctx.r3.s64 = ctx.r29.s64 + -176;
	// bl 0x822e9ff0
	ctx.lr = 0x820CF3B4;
	sub_822E9FF0(ctx, base);
	// stw r30,-124(r29)
	PPC_STORE_U32(ctx.r29.u32 + -124, ctx.r30.u32);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,184
	ctx.r29.s64 = ctx.r29.s64 + 184;
	// bne 0x820cf3a4
	if (!ctx.cr0.eq) goto loc_820CF3A4;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r30,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r30.u32);
	// lis r4,0
	ctx.r4.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r4,r4,32778
	ctx.r4.u64 = ctx.r4.u64 | 32778;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r29,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r29.u32);
	// bl 0x822f7fc8
	ctx.lr = 0x820CF3E8;
	sub_822F7FC8(ctx, base);
	// addi r9,r31,40
	ctx.r9.s64 = ctx.r31.s64 + 40;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// addi r8,r31,136
	ctx.r8.s64 = ctx.r31.s64 + 136;
	// addi r7,r31,128
	ctx.r7.s64 = ctx.r31.s64 + 128;
	// li r6,4
	ctx.r6.s64 = 4;
	// std r30,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r30.u64);
	// li r5,4
	ctx.r5.s64 = 4;
	// std r30,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r30.u64);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// std r30,16(r9)
	PPC_STORE_U64(ctx.r9.u32 + 16, ctx.r30.u64);
	// li r3,774
	ctx.r3.s64 = 774;
	// stw r30,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r30.u32);
	// bl 0x822d8680
	ctx.lr = 0x820CF41C;
	sub_822D8680(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,997
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 997, ctx.xer);
	// beq cr6,0x820cf440
	if (ctx.cr6.eq) goto loc_820CF440;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-24396
	ctx.r3.s64 = ctx.r11.s64 + -24396;
	// bl 0x821313e0
	ctx.lr = 0x820CF434;
	sub_821313E0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// b 0x820cf464
	goto loc_820CF464;
loc_820CF440:
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r29,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r29.u32);
loc_820CF448:
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820cdcd8
	ctx.lr = 0x820CF464;
	sub_820CDCD8(ctx, base);
loc_820CF464:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e9930
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CF46C"))) PPC_WEAK_FUNC(sub_820CF46C);
PPC_FUNC_IMPL(__imp__sub_820CF46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CF470"))) PPC_WEAK_FUNC(sub_820CF470);
PPC_FUNC_IMPL(__imp__sub_820CF470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x820CF478;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x820cf4fc
	if (ctx.cr6.eq) goto loc_820CF4FC;
	// bl 0x820cdc88
	ctx.lr = 0x820CF498;
	sub_820CDC88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x822f8e08
	ctx.lr = 0x820CF4B0;
	sub_822F8E08(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x820cf4e0
	if (!ctx.cr6.eq) goto loc_820CF4E0;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x820cdcd8
	ctx.lr = 0x820CF4DC;
	sub_820CDCD8(ctx, base);
	// b 0x820cf4f8
	goto loc_820CF4F8;
loc_820CF4E0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-24340
	ctx.r3.s64 = ctx.r11.s64 + -24340;
	// bl 0x821313e0
	ctx.lr = 0x820CF4EC;
	sub_821313E0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,1096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1096, ctx.r30.u32);
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
loc_820CF4F8:
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
loc_820CF4FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CF504"))) PPC_WEAK_FUNC(sub_820CF504);
PPC_FUNC_IMPL(__imp__sub_820CF504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CF508"))) PPC_WEAK_FUNC(sub_820CF508);
PPC_FUNC_IMPL(__imp__sub_820CF508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x820CF510;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820cf648
	if (!ctx.cr6.eq) goto loc_820CF648;
	// bl 0x820cdc88
	ctx.lr = 0x820CF52C;
	sub_820CDC88(ctx, base);
	// lwz r11,1116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1116);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820cf568
	if (ctx.cr0.eq) goto loc_820CF568;
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r10,r31,1120
	ctx.r10.s64 = ctx.r31.s64 + 1120;
loc_820CF54C:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r28
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x820cf55c
	if (!ctx.cr6.eq) goto loc_820CF55C;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
loc_820CF55C:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x820cf54c
	if (!ctx.cr0.eq) goto loc_820CF54C;
loc_820CF568:
	// clrlwi. r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x820cf648
	if (!ctx.cr0.eq) goto loc_820CF648;
	// addi r11,r11,280
	ctx.r11.s64 = ctx.r11.s64 + 280;
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stwx r28,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r28.u32);
	// std r29,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r29.u64);
	// std r29,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r29.u64);
	// std r29,16(r30)
	PPC_STORE_U64(ctx.r30.u32 + 16, ctx.r29.u64);
	// stw r29,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r29.u32);
	// bl 0x822f82c8
	ctx.lr = 0x820CF59C;
	sub_822F82C8(ctx, base);
	// lwz r11,1116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1116);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r6,r31,1136
	ctx.r6.s64 = ctx.r31.s64 + 1136;
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// addi r11,r11,280
	ctx.r11.s64 = ctx.r11.s64 + 280;
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x822d88c0
	ctx.lr = 0x820CF5C0;
	sub_822D88C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,997
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 997, ctx.xer);
	// beq cr6,0x820cf5e4
	if (ctx.cr6.eq) goto loc_820CF5E4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-24284
	ctx.r3.s64 = ctx.r11.s64 + -24284;
	// bl 0x821313e0
	ctx.lr = 0x820CF5D8;
	sub_821313E0(ctx, base);
	// li r5,11
	ctx.r5.s64 = 11;
	// stw r29,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r29.u32);
	// b 0x820cf5ec
	goto loc_820CF5EC;
loc_820CF5E4:
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r27,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r27.u32);
loc_820CF5EC:
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x820cdcd8
	ctx.lr = 0x820CF608;
	sub_820CDCD8(ctx, base);
	// lwz r11,1116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1116);
	// addi r10,r28,48
	ctx.r10.s64 = ctx.r28.s64 + 48;
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// add r9,r28,r31
	ctx.r9.u64 = ctx.r28.u64 + ctx.r31.u64;
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r8,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r8.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// stb r27,312(r9)
	PPC_STORE_U8(ctx.r9.u32 + 312, ctx.r27.u8);
	// addi r4,r11,316
	ctx.r4.s64 = ctx.r11.s64 + 316;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r27,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r27.u32);
	// stdx r7,r10,r31
	PPC_STORE_U64(ctx.r10.u32 + ctx.r31.u32, ctx.r7.u64);
	// bl 0x822f8078
	ctx.lr = 0x820CF648;
	sub_822F8078(ctx, base);
loc_820CF648:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CF650"))) PPC_WEAK_FUNC(sub_820CF650);
PPC_FUNC_IMPL(__imp__sub_820CF650) {
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
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x820cf708
	if (ctx.cr6.eq) goto loc_820CF708;
	// bl 0x820cdc88
	ctx.lr = 0x820CF67C;
	sub_820CDC88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x822f8e08
	ctx.lr = 0x820CF694;
	sub_822F8E08(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x820cf6d8
	if (!ctx.cr6.eq) goto loc_820CF6D8;
	// lbz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 208);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820cf704
	if (!ctx.cr0.eq) goto loc_820CF704;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x820cdcd8
	ctx.lr = 0x820CF6CC;
	sub_820CDCD8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,208(r31)
	PPC_STORE_U8(ctx.r31.u32 + 208, ctx.r11.u8);
	// b 0x820cf704
	goto loc_820CF704;
loc_820CF6D8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-24240
	ctx.r3.s64 = ctx.r11.s64 + -24240;
	// bl 0x821313e0
	ctx.lr = 0x820CF6E4;
	sub_821313E0(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,11
	ctx.r5.s64 = 11;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x820cdcd8
	ctx.lr = 0x820CF704;
	sub_820CDCD8(ctx, base);
loc_820CF704:
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
loc_820CF708:
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

__attribute__((alias("__imp__sub_820CF720"))) PPC_WEAK_FUNC(sub_820CF720);
PPC_FUNC_IMPL(__imp__sub_820CF720) {
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
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820cf7b8
	if (!ctx.cr6.eq) goto loc_820CF7B8;
	// bl 0x820cdc88
	ctx.lr = 0x820CF748;
	sub_820CDC88(ctx, base);
	// addi r5,r31,40
	ctx.r5.s64 = ctx.r31.s64 + 40;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// std r30,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r30.u64);
	// std r30,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r30.u64);
	// std r30,16(r5)
	PPC_STORE_U64(ctx.r5.u32 + 16, ctx.r30.u64);
	// stw r30,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, ctx.r30.u32);
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// bl 0x822d8c38
	ctx.lr = 0x820CF76C;
	sub_822D8C38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,997
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 997, ctx.xer);
	// beq cr6,0x820cf790
	if (ctx.cr6.eq) goto loc_820CF790;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-24188
	ctx.r3.s64 = ctx.r11.s64 + -24188;
	// bl 0x821313e0
	ctx.lr = 0x820CF784;
	sub_821313E0(ctx, base);
	// li r5,9
	ctx.r5.s64 = 9;
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// b 0x820cf79c
	goto loc_820CF79C;
loc_820CF790:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,6
	ctx.r5.s64 = 6;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
loc_820CF79C:
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820cdcd8
	ctx.lr = 0x820CF7B8;
	sub_820CDCD8(ctx, base);
loc_820CF7B8:
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

__attribute__((alias("__imp__sub_820CF7D0"))) PPC_WEAK_FUNC(sub_820CF7D0);
PPC_FUNC_IMPL(__imp__sub_820CF7D0) {
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
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x820cf85c
	if (ctx.cr6.eq) goto loc_820CF85C;
	// bl 0x820cdc88
	ctx.lr = 0x820CF7FC;
	sub_820CDC88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x822f8e08
	ctx.lr = 0x820CF814;
	sub_822F8E08(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x820cf82c
	if (!ctx.cr6.eq) goto loc_820CF82C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1096, ctx.r11.u32);
	// b 0x820cf858
	goto loc_820CF858;
loc_820CF82C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-24148
	ctx.r3.s64 = ctx.r11.s64 + -24148;
	// bl 0x821313e0
	ctx.lr = 0x820CF838;
	sub_821313E0(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x820cdcd8
	ctx.lr = 0x820CF858;
	sub_820CDCD8(ctx, base);
loc_820CF858:
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
loc_820CF85C:
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

__attribute__((alias("__imp__sub_820CF874"))) PPC_WEAK_FUNC(sub_820CF874);
PPC_FUNC_IMPL(__imp__sub_820CF874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CF878"))) PPC_WEAK_FUNC(sub_820CF878);
PPC_FUNC_IMPL(__imp__sub_820CF878) {
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
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820cf908
	if (!ctx.cr6.eq) goto loc_820CF908;
	// bl 0x820cdc88
	ctx.lr = 0x820CF89C;
	sub_820CDC88(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r31,40
	ctx.r4.s64 = ctx.r31.s64 + 40;
	// stw r11,1096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1096, ctx.r11.u32);
	// std r11,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r11.u64);
	// std r11,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r11.u64);
	// std r11,16(r4)
	PPC_STORE_U64(ctx.r4.u32 + 16, ctx.r11.u64);
	// stw r11,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r11.u32);
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// bl 0x822d8cd0
	ctx.lr = 0x820CF8C0;
	sub_822D8CD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,997
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 997, ctx.xer);
	// beq cr6,0x820cf8e0
	if (ctx.cr6.eq) goto loc_820CF8E0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-24096
	ctx.r3.s64 = ctx.r11.s64 + -24096;
	// bl 0x821313e0
	ctx.lr = 0x820CF8D8;
	sub_821313E0(ctx, base);
	// li r5,9
	ctx.r5.s64 = 9;
	// b 0x820cf8ec
	goto loc_820CF8EC;
loc_820CF8E0:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
loc_820CF8EC:
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820cdcd8
	ctx.lr = 0x820CF908;
	sub_820CDCD8(ctx, base);
loc_820CF908:
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

__attribute__((alias("__imp__sub_820CF91C"))) PPC_WEAK_FUNC(sub_820CF91C);
PPC_FUNC_IMPL(__imp__sub_820CF91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CF920"))) PPC_WEAK_FUNC(sub_820CF920);
PPC_FUNC_IMPL(__imp__sub_820CF920) {
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
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x820cf9a0
	if (ctx.cr6.eq) goto loc_820CF9A0;
	// bl 0x820cdc88
	ctx.lr = 0x820CF94C;
	sub_820CDC88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x822f8e08
	ctx.lr = 0x820CF964;
	sub_822F8E08(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820cf97c
	if (ctx.cr6.eq) goto loc_820CF97C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-24060
	ctx.r3.s64 = ctx.r11.s64 + -24060;
	// bl 0x821313e0
	ctx.lr = 0x820CF97C;
	sub_821313E0(ctx, base);
loc_820CF97C:
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x820cdcd8
	ctx.lr = 0x820CF99C;
	sub_820CDCD8(ctx, base);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
loc_820CF9A0:
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

__attribute__((alias("__imp__sub_820CF9B8"))) PPC_WEAK_FUNC(sub_820CF9B8);
PPC_FUNC_IMPL(__imp__sub_820CF9B8) {
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
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820cfa4c
	if (!ctx.cr6.eq) goto loc_820CFA4C;
	// bl 0x820cdc88
	ctx.lr = 0x820CF9DC;
	sub_820CDC88(ctx, base);
	// addi r6,r31,40
	ctx.r6.s64 = ctx.r31.s64 + 40;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r31,1120
	ctx.r5.s64 = ctx.r31.s64 + 1120;
	// std r11,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r11.u64);
	// std r11,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r11.u64);
	// std r11,16(r6)
	PPC_STORE_U64(ctx.r6.u32 + 16, ctx.r11.u64);
	// stw r11,24(r6)
	PPC_STORE_U32(ctx.r6.u32 + 24, ctx.r11.u32);
	// lwz r4,1116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1116);
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// bl 0x822d8a10
	ctx.lr = 0x820CFA04;
	sub_822D8A10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,997
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 997, ctx.xer);
	// beq cr6,0x820cfa24
	if (ctx.cr6.eq) goto loc_820CFA24;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-24008
	ctx.r3.s64 = ctx.r11.s64 + -24008;
	// bl 0x821313e0
	ctx.lr = 0x820CFA1C;
	sub_821313E0(ctx, base);
	// li r5,11
	ctx.r5.s64 = 11;
	// b 0x820cfa30
	goto loc_820CFA30;
loc_820CFA24:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,10
	ctx.r5.s64 = 10;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
loc_820CFA30:
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820cdcd8
	ctx.lr = 0x820CFA4C;
	sub_820CDCD8(ctx, base);
loc_820CFA4C:
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

__attribute__((alias("__imp__sub_820CFA60"))) PPC_WEAK_FUNC(sub_820CFA60);
PPC_FUNC_IMPL(__imp__sub_820CFA60) {
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
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x820cfae0
	if (ctx.cr6.eq) goto loc_820CFAE0;
	// bl 0x820cdc88
	ctx.lr = 0x820CFA8C;
	sub_820CDC88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x822f8e08
	ctx.lr = 0x820CFAA4;
	sub_822F8E08(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820cfabc
	if (ctx.cr6.eq) goto loc_820CFABC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-23964
	ctx.r3.s64 = ctx.r11.s64 + -23964;
	// bl 0x821313e0
	ctx.lr = 0x820CFABC;
	sub_821313E0(ctx, base);
loc_820CFABC:
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,11
	ctx.r5.s64 = 11;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x820cdcd8
	ctx.lr = 0x820CFADC;
	sub_820CDCD8(ctx, base);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
loc_820CFAE0:
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

__attribute__((alias("__imp__sub_820CFAF8"))) PPC_WEAK_FUNC(sub_820CFAF8);
PPC_FUNC_IMPL(__imp__sub_820CFAF8) {
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
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820cfb88
	if (!ctx.cr6.eq) goto loc_820CFB88;
	// bl 0x820cdc88
	ctx.lr = 0x820CFB20;
	sub_820CDC88(ctx, base);
	// addi r4,r31,40
	ctx.r4.s64 = ctx.r31.s64 + 40;
	// li r30,0
	ctx.r30.s64 = 0;
	// std r30,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r30.u64);
	// std r30,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r30.u64);
	// std r30,16(r4)
	PPC_STORE_U64(ctx.r4.u32 + 16, ctx.r30.u64);
	// stw r30,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r30.u32);
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// bl 0x822d8810
	ctx.lr = 0x820CFB40;
	sub_822D8810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,997
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 997, ctx.xer);
	// beq cr6,0x820cfb5c
	if (ctx.cr6.eq) goto loc_820CFB5C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-23912
	ctx.r3.s64 = ctx.r11.s64 + -23912;
	// bl 0x821313e0
	ctx.lr = 0x820CFB58;
	sub_821313E0(ctx, base);
	// b 0x820cfb88
	goto loc_820CFB88;
loc_820CFB5C:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820cdcd8
	ctx.lr = 0x820CFB84;
	sub_820CDCD8(ctx, base);
	// stb r30,208(r31)
	PPC_STORE_U8(ctx.r31.u32 + 208, ctx.r30.u8);
loc_820CFB88:
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

__attribute__((alias("__imp__sub_820CFBA0"))) PPC_WEAK_FUNC(sub_820CFBA0);
PPC_FUNC_IMPL(__imp__sub_820CFBA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x820CFBA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x820cfc34
	if (ctx.cr6.eq) goto loc_820CFC34;
	// bl 0x820cdc88
	ctx.lr = 0x820CFBC4;
	sub_820CDC88(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// bl 0x822f8e08
	ctx.lr = 0x820CFBDC;
	sub_822F8E08(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820cfbf4
	if (ctx.cr6.eq) goto loc_820CFBF4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-23964
	ctx.r3.s64 = ctx.r11.s64 + -23964;
	// bl 0x821313e0
	ctx.lr = 0x820CFBF4;
	sub_821313E0(ctx, base);
loc_820CFBF4:
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// stw r28,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r28.u32);
	// bl 0x822f8ae0
	ctx.lr = 0x820CFC00;
	sub_822F8AE0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r30,r31,424
	ctx.r30.s64 = ctx.r31.s64 + 424;
	// li r29,4
	ctx.r29.s64 = 4;
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
loc_820CFC10:
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,-176
	ctx.r3.s64 = ctx.r30.s64 + -176;
	// bl 0x822e9ff0
	ctx.lr = 0x820CFC20;
	sub_822E9FF0(ctx, base);
	// stw r28,-124(r30)
	PPC_STORE_U32(ctx.r30.u32 + -124, ctx.r28.u32);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,184
	ctx.r30.s64 = ctx.r30.s64 + 184;
	// bne 0x820cfc10
	if (!ctx.cr0.eq) goto loc_820CFC10;
loc_820CFC34:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CFC3C"))) PPC_WEAK_FUNC(sub_820CFC3C);
PPC_FUNC_IMPL(__imp__sub_820CFC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CFC40"))) PPC_WEAK_FUNC(sub_820CFC40);
PPC_FUNC_IMPL(__imp__sub_820CFC40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x820CFC48;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,32778
	ctx.r4.u64 = ctx.r4.u64 | 32778;
	// lwz r5,200(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// bl 0x822f7fc8
	ctx.lr = 0x820CFC68;
	sub_822F7FC8(ctx, base);
	// lis r4,0
	ctx.r4.s64 = 0;
	// lwz r5,204(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,32779
	ctx.r4.u64 = ctx.r4.u64 | 32779;
	// bl 0x822f7fc8
	ctx.lr = 0x820CFC7C;
	sub_822F7FC8(ctx, base);
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82081360
	ctx.lr = 0x820CFC8C;
	sub_82081360(ctx, base);
	// addi r9,r31,40
	ctx.r9.s64 = ctx.r31.s64 + 40;
	// li r30,0
	ctx.r30.s64 = 0;
	// std r30,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r30.u64);
	// std r30,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r30.u64);
	// std r30,16(r9)
	PPC_STORE_U64(ctx.r9.u32 + 16, ctx.r30.u64);
	// stw r30,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r30.u32);
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// lbz r10,244(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 244);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// addi r11,r11,62
	ctx.r11.s64 = ctx.r11.s64 + 62;
	// ori r3,r11,1024
	ctx.r3.u64 = ctx.r11.u64 | 1024;
	// beq 0x820cfccc
	if (ctx.cr0.eq) goto loc_820CFCCC;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
loc_820CFCCC:
	// lwz r6,240(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// addi r28,r31,196
	ctx.r28.s64 = ctx.r31.s64 + 196;
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// addi r8,r31,136
	ctx.r8.s64 = ctx.r31.s64 + 136;
	// addi r7,r31,128
	ctx.r7.s64 = ctx.r31.s64 + 128;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// subf r5,r6,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r6.s64;
	// bl 0x822d8680
	ctx.lr = 0x820CFCF0;
	sub_822D8680(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,997
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 997, ctx.xer);
	// beq cr6,0x820cfd50
	if (ctx.cr6.eq) goto loc_820CFD50;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-23912
	ctx.r3.s64 = ctx.r11.s64 + -23912;
	// bl 0x821313e0
	ctx.lr = 0x820CFD08;
	sub_821313E0(ctx, base);
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// bl 0x822b3230
	ctx.lr = 0x820CFD10;
	sub_822B3230(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r29,r31,248
	ctx.r29.s64 = ctx.r31.s64 + 248;
	// stw r30,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r30.u32);
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// bl 0x822e9ff0
	ctx.lr = 0x820CFD30;
	sub_822E9FF0(ctx, base);
	// stw r30,52(r29)
	PPC_STORE_U32(ctx.r29.u32 + 52, ctx.r30.u32);
	// stw r30,176(r29)
	PPC_STORE_U32(ctx.r29.u32 + 176, ctx.r30.u32);
	// lwz r11,1168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1168);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x820cfd78
	if (!ctx.cr6.eq) goto loc_820CFD78;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,1168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1168, ctx.r11.u32);
	// b 0x820cfd78
	goto loc_820CFD78;
loc_820CFD50:
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,15
	ctx.r5.s64 = 15;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820cdcd8
	ctx.lr = 0x820CFD70;
	sub_820CDCD8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
loc_820CFD78:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CFD80"))) PPC_WEAK_FUNC(sub_820CFD80);
PPC_FUNC_IMPL(__imp__sub_820CFD80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x820CFD88;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x820cfed4
	if (ctx.cr6.eq) goto loc_820CFED4;
	// bl 0x820cdc88
	ctx.lr = 0x820CFDA8;
	sub_820CDC88(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// bl 0x822f8e08
	ctx.lr = 0x820CFDC0;
	sub_822F8E08(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x820cfe5c
	if (!ctx.cr6.eq) goto loc_820CFE5C;
	// lbz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 244);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820cfdfc
	if (ctx.cr0.eq) goto loc_820CFDFC;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x820cdcd8
	ctx.lr = 0x820CFDF8;
	sub_820CDCD8(ctx, base);
	// b 0x820cfed0
	goto loc_820CFED0;
loc_820CFDFC:
	// lwz r11,984(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 984);
	// addi r4,r31,136
	ctx.r4.s64 = ctx.r31.s64 + 136;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// mulli r11,r11,184
	ctx.r11.s64 = ctx.r11.s64 * 184;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r5,r11,256
	ctx.r5.s64 = ctx.r11.s64 + 256;
	// bl 0x822b32c8
	ctx.lr = 0x820CFE18;
	sub_822B32C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820cfe30
	if (ctx.cr0.eq) goto loc_820CFE30;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-23816
	ctx.r3.s64 = ctx.r11.s64 + -23816;
	// bl 0x821313e0
	ctx.lr = 0x820CFE2C;
	sub_821313E0(ctx, base);
	// b 0x820cfed0
	goto loc_820CFED0;
loc_820CFE30:
	// lwz r11,984(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 984);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,4
	ctx.r9.s64 = 4;
	// mulli r11,r11,184
	ctx.r11.s64 = ctx.r11.s64 * 184;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,300(r11)
	PPC_STORE_U32(ctx.r11.u32 + 300, ctx.r10.u32);
	// stw r9,1096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1096, ctx.r9.u32);
	// bl 0x820d3670
	ctx.lr = 0x820CFE58;
	sub_820D3670(ctx, base);
	// b 0x820cfed0
	goto loc_820CFED0;
loc_820CFE5C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-23872
	ctx.r3.s64 = ctx.r11.s64 + -23872;
	// bl 0x821313e0
	ctx.lr = 0x820CFE68;
	sub_821313E0(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,38
	ctx.r5.s64 = 38;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x820cdcd8
	ctx.lr = 0x820CFE88;
	sub_820CDCD8(ctx, base);
	// lbz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 244);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820cfebc
	if (!ctx.cr0.eq) goto loc_820CFEBC;
	// lwz r11,984(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 984);
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,0
	ctx.r4.s64 = 0;
	// mulli r11,r11,184
	ctx.r11.s64 = ctx.r11.s64 * 184;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r30,r11,248
	ctx.r30.s64 = ctx.r11.s64 + 248;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e9ff0
	ctx.lr = 0x820CFEB4;
	sub_822E9FF0(ctx, base);
	// stw r28,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r28.u32);
	// stw r28,176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 176, ctx.r28.u32);
loc_820CFEBC:
	// lwz r11,1168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1168);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x820cfed0
	if (!ctx.cr6.eq) goto loc_820CFED0;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,1168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1168, ctx.r11.u32);
loc_820CFED0:
	// stw r28,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r28.u32);
loc_820CFED4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CFEDC"))) PPC_WEAK_FUNC(sub_820CFEDC);
PPC_FUNC_IMPL(__imp__sub_820CFEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820CFEE0"))) PPC_WEAK_FUNC(sub_820CFEE0);
PPC_FUNC_IMPL(__imp__sub_820CFEE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x820CFEE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,1168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1168);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x820cff3c
	if (!ctx.cr6.eq) goto loc_820CFF3C;
	// bl 0x820cdc88
	ctx.lr = 0x820CFF04;
	sub_820CDC88(ctx, base);
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,200(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// ori r4,r4,32778
	ctx.r4.u64 = ctx.r4.u64 | 32778;
	// bl 0x822f7fc8
	ctx.lr = 0x820CFF18;
	sub_822F7FC8(ctx, base);
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,204(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// ori r4,r4,32779
	ctx.r4.u64 = ctx.r4.u64 | 32779;
	// bl 0x822f7fc8
	ctx.lr = 0x820CFF2C;
	sub_822F7FC8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820cfc40
	ctx.lr = 0x820CFF38;
	sub_820CFC40(ctx, base);
	// b 0x820cffc8
	goto loc_820CFFC8;
loc_820CFF3C:
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,50
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 50, ctx.xer);
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// beq cr6,0x820cffbc
	if (ctx.cr6.eq) goto loc_820CFFBC;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// beq cr6,0x820cffbc
	if (ctx.cr6.eq) goto loc_820CFFBC;
	// cmplwi cr6,r11,150
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 150, ctx.xer);
	// beq cr6,0x820cffbc
	if (ctx.cr6.eq) goto loc_820CFFBC;
	// cmplwi cr6,r11,220
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 220, ctx.xer);
	// bne cr6,0x820cffc8
	if (!ctx.cr6.eq) goto loc_820CFFC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820cdc88
	ctx.lr = 0x820CFF70;
	sub_820CDC88(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-23776
	ctx.r3.s64 = ctx.r11.s64 + -23776;
	// stw r10,1168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1168, ctx.r10.u32);
	// bl 0x821313e0
	ctx.lr = 0x820CFF84;
	sub_821313E0(ctx, base);
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// bl 0x822b3230
	ctx.lr = 0x820CFF8C;
	sub_822B3230(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r31,248
	ctx.r30.s64 = ctx.r31.s64 + 248;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// stw r29,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r29.u32);
	// bl 0x822e9ff0
	ctx.lr = 0x820CFFB0;
	sub_822E9FF0(ctx, base);
	// stw r29,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r29.u32);
	// stw r29,176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 176, ctx.r29.u32);
	// b 0x820cffc8
	goto loc_820CFFC8;
loc_820CFFBC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d3a48
	ctx.lr = 0x820CFFC8;
	sub_820D3A48(ctx, base);
loc_820CFFC8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820CFFD0"))) PPC_WEAK_FUNC(sub_820CFFD0);
PPC_FUNC_IMPL(__imp__sub_820CFFD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x820CFFD8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820d0118
	if (!ctx.cr6.eq) goto loc_820D0118;
	// bl 0x820cdc88
	ctx.lr = 0x820CFFF4;
	sub_820CDC88(ctx, base);
	// lbz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 244);
	// li r28,1
	ctx.r28.s64 = 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820d0064
	if (ctx.cr0.eq) goto loc_820D0064;
	// lis r30,-32207
	ctx.r30.s64 = -2110717952;
	// lwz r3,16472(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16472);
	// bl 0x822eac18
	ctx.lr = 0x820D0010;
	sub_822EAC18(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,16472(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16472);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x822b3308
	ctx.lr = 0x820D0028;
	sub_822B3308(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x820d0060
	if (ctx.cr0.eq) goto loc_820D0060;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-23728
	ctx.r3.s64 = ctx.r11.s64 + -23728;
loc_820D0038:
	// bl 0x821313e0
	ctx.lr = 0x820D003C;
	sub_821313E0(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,38
	ctx.r5.s64 = 38;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820cdcd8
	ctx.lr = 0x820D005C;
	sub_820CDCD8(ctx, base);
	// b 0x820d0118
	goto loc_820D0118;
loc_820D0060:
	// stb r28,220(r31)
	PPC_STORE_U8(ctx.r31.u32 + 220, ctx.r28.u8);
loc_820D0064:
	// lwz r10,1116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1116);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r31,40
	ctx.r7.s64 = ctx.r31.s64 + 40;
	// addi r10,r10,280
	ctx.r10.s64 = ctx.r10.s64 + 280;
	// add r9,r29,r31
	ctx.r9.u64 = ctx.r29.u64 + ctx.r31.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r31,1152
	ctx.r6.s64 = ctx.r31.s64 + 1152;
	// stwx r29,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r29.u32);
	// std r11,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// std r11,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r11.u64);
	// std r11,16(r7)
	PPC_STORE_U64(ctx.r7.u32 + 16, ctx.r11.u64);
	// stw r11,24(r7)
	PPC_STORE_U32(ctx.r7.u32 + 24, ctx.r11.u32);
	// lbz r11,304(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 304);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820d00a4
	if (!ctx.cr0.eq) goto loc_820D00A4;
	// addi r6,r31,1136
	ctx.r6.s64 = ctx.r31.s64 + 1136;
loc_820D00A4:
	// lwz r11,1116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1116);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// addi r11,r11,280
	ctx.r11.s64 = ctx.r11.s64 + 280;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x822d88c0
	ctx.lr = 0x820D00C0;
	sub_822D88C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,997
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 997, ctx.xer);
	// beq cr6,0x820d00d8
	if (ctx.cr6.eq) goto loc_820D00D8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-24284
	ctx.r3.s64 = ctx.r11.s64 + -24284;
	// b 0x820d0038
	goto loc_820D0038;
loc_820D00D8:
	// lwz r11,1116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1116);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,1776(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1776);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r11.u32);
	// bl 0x820d9270
	ctx.lr = 0x820D00F4;
	sub_820D9270(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,17
	ctx.r5.s64 = 17;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820cdcd8
	ctx.lr = 0x820D0114;
	sub_820CDCD8(ctx, base);
	// stw r28,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r28.u32);
loc_820D0118:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D0120"))) PPC_WEAK_FUNC(sub_820D0120);
PPC_FUNC_IMPL(__imp__sub_820D0120) {
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
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x820d01bc
	if (ctx.cr6.eq) goto loc_820D01BC;
	// bl 0x820cdc88
	ctx.lr = 0x820D014C;
	sub_820CDC88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x822f8e08
	ctx.lr = 0x820D0164;
	sub_822F8E08(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820d01a0
	if (ctx.cr6.eq) goto loc_820D01A0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-23684
	ctx.r3.s64 = ctx.r11.s64 + -23684;
	// bl 0x821313e0
	ctx.lr = 0x820D017C;
	sub_821313E0(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,38
	ctx.r5.s64 = 38;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x820cdcd8
	ctx.lr = 0x820D019C;
	sub_820CDCD8(ctx, base);
	// b 0x820d01b8
	goto loc_820D01B8;
loc_820D01A0:
	// lbz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 244);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,4
	ctx.r11.s64 = 4;
	// bne 0x820d01b4
	if (!ctx.cr0.eq) goto loc_820D01B4;
	// li r11,6
	ctx.r11.s64 = 6;
loc_820D01B4:
	// stw r11,1096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1096, ctx.r11.u32);
loc_820D01B8:
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
loc_820D01BC:
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

__attribute__((alias("__imp__sub_820D01D4"))) PPC_WEAK_FUNC(sub_820D01D4);
PPC_FUNC_IMPL(__imp__sub_820D01D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D01D8"))) PPC_WEAK_FUNC(sub_820D01D8);
PPC_FUNC_IMPL(__imp__sub_820D01D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x820D01E0;
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
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820d02c8
	if (!ctx.cr6.eq) goto loc_820D02C8;
	// bl 0x820cdc88
	ctx.lr = 0x820D0200;
	sub_820CDC88(ctx, base);
	// mulli r11,r30,184
	ctx.r11.s64 = ctx.r30.s64 * 184;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r6,r31,1152
	ctx.r6.s64 = ctx.r31.s64 + 1152;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r11,304(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 304);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820d0220
	if (!ctx.cr0.eq) goto loc_820D0220;
	// addi r6,r31,1136
	ctx.r6.s64 = ctx.r31.s64 + 1136;
loc_820D0220:
	// mulli r11,r30,23
	ctx.r11.s64 = ctx.r30.s64 * 23;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r7,r31,40
	ctx.r7.s64 = ctx.r31.s64 + 40;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r28,r10,r31
	ctx.r28.u64 = ctx.r10.u64 + ctx.r31.u64;
	// std r11,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// std r11,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r11.u64);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// std r11,16(r7)
	PPC_STORE_U64(ctx.r7.u32 + 16, ctx.r11.u64);
	// stw r11,24(r7)
	PPC_STORE_U32(ctx.r7.u32 + 24, ctx.r11.u32);
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// bl 0x822d8968
	ctx.lr = 0x820D025C;
	sub_822D8968(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,997
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 997, ctx.xer);
	// beq cr6,0x820d0288
	if (ctx.cr6.eq) goto loc_820D0288;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-23632
	ctx.r3.s64 = ctx.r11.s64 + -23632;
	// bl 0x821313e0
	ctx.lr = 0x820D0274;
	sub_821313E0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d3990
	ctx.lr = 0x820D0284;
	sub_820D3990(ctx, base);
	// b 0x820d02c8
	goto loc_820D02C8;
loc_820D0288:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,44
	ctx.r5.s64 = 44;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820cdcd8
	ctx.lr = 0x820D02B0;
	sub_820CDCD8(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ld r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,1776(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1776);
	// bl 0x820d9420
	ctx.lr = 0x820D02C8;
	sub_820D9420(ctx, base);
loc_820D02C8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D02D0"))) PPC_WEAK_FUNC(sub_820D02D0);
PPC_FUNC_IMPL(__imp__sub_820D02D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x820D02D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x820d0354
	if (ctx.cr6.eq) goto loc_820D0354;
	// bl 0x820cdc88
	ctx.lr = 0x820D02FC;
	sub_820CDC88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x822f8e08
	ctx.lr = 0x820D0314;
	sub_822F8E08(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820d0340
	if (ctx.cr6.eq) goto loc_820D0340;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-23588
	ctx.r3.s64 = ctx.r11.s64 + -23588;
	// bl 0x821313e0
	ctx.lr = 0x820D032C;
	sub_821313E0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d3990
	ctx.lr = 0x820D033C;
	sub_820D3990(ctx, base);
	// b 0x820d0350
	goto loc_820D0350;
loc_820D0340:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d45d0
	ctx.lr = 0x820D0350;
	sub_820D45D0(ctx, base);
loc_820D0350:
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
loc_820D0354:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D035C"))) PPC_WEAK_FUNC(sub_820D035C);
PPC_FUNC_IMPL(__imp__sub_820D035C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D0360"))) PPC_WEAK_FUNC(sub_820D0360);
PPC_FUNC_IMPL(__imp__sub_820D0360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x820D0368;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820d0440
	if (!ctx.cr6.eq) goto loc_820D0440;
	// bl 0x820cdc88
	ctx.lr = 0x820D0388;
	sub_820CDC88(ctx, base);
	// mulli r11,r29,184
	ctx.r11.s64 = ctx.r29.s64 * 184;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r6,r31,1152
	ctx.r6.s64 = ctx.r31.s64 + 1152;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r11,304(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 304);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820d03a8
	if (!ctx.cr0.eq) goto loc_820D03A8;
	// addi r6,r31,1136
	ctx.r6.s64 = ctx.r31.s64 + 1136;
loc_820D03A8:
	// mulli r11,r29,23
	ctx.r11.s64 = ctx.r29.s64 * 23;
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r7,r31,40
	ctx.r7.s64 = ctx.r31.s64 + 40;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r10,r31
	ctx.r30.u64 = ctx.r10.u64 + ctx.r31.u64;
	// std r11,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// std r11,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r11.u64);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// std r11,16(r7)
	PPC_STORE_U64(ctx.r7.u32 + 16, ctx.r11.u64);
	// stw r11,24(r7)
	PPC_STORE_U32(ctx.r7.u32 + 24, ctx.r11.u32);
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// bl 0x822d8968
	ctx.lr = 0x820D03E4;
	sub_822D8968(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,997
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 997, ctx.xer);
	// beq cr6,0x820d0400
	if (ctx.cr6.eq) goto loc_820D0400;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-23632
	ctx.r3.s64 = ctx.r11.s64 + -23632;
	// bl 0x821313e0
	ctx.lr = 0x820D03FC;
	sub_821313E0(ctx, base);
	// b 0x820d0440
	goto loc_820D0440;
loc_820D0400:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,46
	ctx.r5.s64 = 46;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820cdcd8
	ctx.lr = 0x820D0428;
	sub_820CDCD8(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// ld r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,1776(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1776);
	// bl 0x820d9420
	ctx.lr = 0x820D0440;
	sub_820D9420(ctx, base);
loc_820D0440:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D0448"))) PPC_WEAK_FUNC(sub_820D0448);
PPC_FUNC_IMPL(__imp__sub_820D0448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x820D0450;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r30,40
	ctx.r31.s64 = ctx.r30.s64 + 40;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x820d0550
	if (ctx.cr6.eq) goto loc_820D0550;
	// bl 0x820cdc88
	ctx.lr = 0x820D0474;
	sub_820CDC88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bl 0x822f8e08
	ctx.lr = 0x820D048C;
	sub_822F8E08(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820d054c
	if (ctx.cr6.eq) goto loc_820D054C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-23588
	ctx.r3.s64 = ctx.r11.s64 + -23588;
	// bl 0x821313e0
	ctx.lr = 0x820D04A4;
	sub_821313E0(ctx, base);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_820D04AC:
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x820d04d0
	if (ctx.cr6.eq) goto loc_820D04D0;
	// mulli r10,r29,184
	ctx.r10.s64 = ctx.r29.s64 * 184;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lbz r10,312(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 312);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x820d04d0
	if (!ctx.cr6.eq) goto loc_820D04D0;
	// li r9,1
	ctx.r9.s64 = 1;
loc_820D04D0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x820d04ac
	if (ctx.cr6.lt) goto loc_820D04AC;
	// clrlwi. r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mulli r11,r29,184
	ctx.r11.s64 = ctx.r29.s64 * 184;
	// li r4,0
	ctx.r4.s64 = 0;
	// beq 0x820d0530
	if (ctx.cr0.eq) goto loc_820D0530;
	// mulli r10,r29,23
	ctx.r10.s64 = ctx.r29.s64 * 23;
	// add r9,r10,r28
	ctx.r9.u64 = ctx.r10.u64 + ctx.r28.u64;
	// rlwinm r10,r28,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r11,r9,r30
	ctx.r11.u64 = ctx.r9.u64 + ctx.r30.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r10,316
	ctx.r3.s64 = ctx.r10.s64 + 316;
	// stb r31,312(r11)
	PPC_STORE_U8(ctx.r11.u32 + 312, ctx.r31.u8);
	// stb r31,304(r11)
	PPC_STORE_U8(ctx.r11.u32 + 304, ctx.r31.u8);
	// stb r31,308(r11)
	PPC_STORE_U8(ctx.r11.u32 + 308, ctx.r31.u8);
	// stdx r31,r8,r30
	PPC_STORE_U64(ctx.r8.u32 + ctx.r30.u32, ctx.r31.u64);
	// bl 0x822e9ff0
	ctx.lr = 0x820D052C;
	sub_822E9FF0(ctx, base);
	// b 0x820d054c
	goto loc_820D054C;
loc_820D0530:
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r5,184
	ctx.r5.s64 = 184;
	// addi r29,r11,248
	ctx.r29.s64 = ctx.r11.s64 + 248;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e9ff0
	ctx.lr = 0x820D0544;
	sub_822E9FF0(ctx, base);
	// stw r31,52(r29)
	PPC_STORE_U32(ctx.r29.u32 + 52, ctx.r31.u32);
	// stw r31,176(r29)
	PPC_STORE_U32(ctx.r29.u32 + 176, ctx.r31.u32);
loc_820D054C:
	// stw r31,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r31.u32);
loc_820D0550:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D0558"))) PPC_WEAK_FUNC(sub_820D0558);
PPC_FUNC_IMPL(__imp__sub_820D0558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x820D0560;
	__savegprlr_27(ctx, base);
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
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820d06b8
	if (!ctx.cr6.eq) goto loc_820D06B8;
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820d05e0
	if (!ctx.cr6.eq) goto loc_820D05E0;
	// lwz r11,1096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1096);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x820d05a0
	if (ctx.cr6.eq) goto loc_820D05A0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x820d05e0
	if (!ctx.cr6.eq) goto loc_820D05E0;
loc_820D05A0:
	// mulli r11,r30,184
	ctx.r11.s64 = ctx.r30.s64 * 184;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r10,420(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 420);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x820d05e0
	if (!ctx.cr0.eq) goto loc_820D05E0;
	// lbz r11,428(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 428);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// extsb r6,r11
	ctx.r6.s64 = ctx.r11.s8;
	// li r5,51
	ctx.r5.s64 = 51;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820cdcd8
	ctx.lr = 0x820D05DC;
	sub_820CDCD8(ctx, base);
	// b 0x820d06b8
	goto loc_820D06B8;
loc_820D05E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820cdc88
	ctx.lr = 0x820D05E8;
	sub_820CDC88(ctx, base);
	// mulli r28,r30,184
	ctx.r28.s64 = ctx.r30.s64 * 184;
	// add r11,r28,r31
	ctx.r11.u64 = ctx.r28.u64 + ctx.r31.u64;
	// lwz r11,300(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820d06b8
	if (ctx.cr6.eq) goto loc_820D06B8;
	// lbz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 244);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820d061c
	if (ctx.cr0.eq) goto loc_820D061C;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d3cf0
	ctx.lr = 0x820D061C;
	sub_820D3CF0(ctx, base);
loc_820D061C:
	// mulli r10,r30,23
	ctx.r10.s64 = ctx.r30.s64 * 23;
	// addi r6,r31,40
	ctx.r6.s64 = ctx.r31.s64 + 40;
	// li r11,0
	ctx.r11.s64 = 0;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// std r11,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r11.u64);
	// std r11,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r11.u64);
	// add r5,r10,r31
	ctx.r5.u64 = ctx.r10.u64 + ctx.r31.u64;
	// std r11,16(r6)
	PPC_STORE_U64(ctx.r6.u32 + 16, ctx.r11.u64);
	// stw r11,24(r6)
	PPC_STORE_U32(ctx.r6.u32 + 24, ctx.r11.u32);
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// bl 0x822d8ab8
	ctx.lr = 0x820D0654;
	sub_822D8AB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,997
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 997, ctx.xer);
	// beq cr6,0x820d0670
	if (ctx.cr6.eq) goto loc_820D0670;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-23528
	ctx.r3.s64 = ctx.r11.s64 + -23528;
	// bl 0x821313e0
	ctx.lr = 0x820D066C;
	sub_821313E0(ctx, base);
	// b 0x820d06b8
	goto loc_820D06B8;
loc_820D0670:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,48
	ctx.r5.s64 = 48;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820cdcd8
	ctx.lr = 0x820D0698;
	sub_820CDCD8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,1776(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1776);
	// bl 0x820d9660
	ctx.lr = 0x820D06A8;
	sub_820D9660(ctx, base);
	// add r11,r28,r29
	ctx.r11.u64 = ctx.r28.u64 + ctx.r29.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r10,312(r11)
	PPC_STORE_U8(ctx.r11.u32 + 312, ctx.r10.u8);
loc_820D06B8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D06C0"))) PPC_WEAK_FUNC(sub_820D06C0);
PPC_FUNC_IMPL(__imp__sub_820D06C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x820D06C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x820d07c0
	if (ctx.cr6.eq) goto loc_820D07C0;
	// bl 0x820cdc88
	ctx.lr = 0x820D06EC;
	sub_820CDC88(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// bl 0x822f8e08
	ctx.lr = 0x820D0704;
	sub_822F8E08(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820d071c
	if (ctx.cr6.eq) goto loc_820D071C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-23484
	ctx.r3.s64 = ctx.r11.s64 + -23484;
	// bl 0x821313e0
	ctx.lr = 0x820D071C;
	sub_821313E0(ctx, base);
loc_820D071C:
	// lwz r11,1096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1096);
	// stw r29,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r29.u32);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x820d07c0
	if (ctx.cr6.eq) goto loc_820D07C0;
	// mulli r11,r27,23
	ctx.r11.s64 = ctx.r27.s64 * 23;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mulli r30,r27,184
	ctx.r30.s64 = ctx.r27.s64 * 184;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// rlwinm r10,r28,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r30,r28
	ctx.r11.u64 = ctx.r30.u64 + ctx.r28.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r10,316
	ctx.r3.s64 = ctx.r10.s64 + 316;
	// stb r29,304(r11)
	PPC_STORE_U8(ctx.r11.u32 + 304, ctx.r29.u8);
	// stb r29,308(r11)
	PPC_STORE_U8(ctx.r11.u32 + 308, ctx.r29.u8);
	// stdx r29,r9,r31
	PPC_STORE_U64(ctx.r9.u32 + ctx.r31.u32, ctx.r29.u64);
	// bl 0x822e9ff0
	ctx.lr = 0x820D0770;
	sub_822E9FF0(ctx, base);
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// addi r9,r11,312
	ctx.r9.s64 = ctx.r11.s64 + 312;
loc_820D0780:
	// lbzx r7,r9,r10
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bne cr6,0x820d0790
	if (!ctx.cr6.eq) goto loc_820D0790;
	// li r8,1
	ctx.r8.s64 = 1;
loc_820D0790:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// blt cr6,0x820d0780
	if (ctx.cr6.lt) goto loc_820D0780;
	// clrlwi. r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x820d07c0
	if (!ctx.cr0.eq) goto loc_820D07C0;
	// addi r31,r11,248
	ctx.r31.s64 = ctx.r11.s64 + 248;
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e9ff0
	ctx.lr = 0x820D07B8;
	sub_822E9FF0(ctx, base);
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// stw r29,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r29.u32);
loc_820D07C0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D07C8"))) PPC_WEAK_FUNC(sub_820D07C8);
PPC_FUNC_IMPL(__imp__sub_820D07C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x820D07D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r31,r30,608
	ctx.r31.s64 = ctx.r30.s64 + 608;
	// li r10,3
	ctx.r10.s64 = 3;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_820D07E8:
	// lwz r8,-124(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -124);
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// bne cr6,0x820d0804
	if (!ctx.cr6.eq) goto loc_820D0804;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x820d0804
	if (!ctx.cr6.eq) goto loc_820D0804;
	// li r9,0
	ctx.r9.s64 = 0;
loc_820D0804:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,184
	ctx.r11.s64 = ctx.r11.s64 + 184;
	// bne 0x820d07e8
	if (!ctx.cr0.eq) goto loc_820D07E8;
	// clrlwi. r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820d08b8
	if (ctx.cr0.eq) goto loc_820D08B8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820cdc88
	ctx.lr = 0x820D0820;
	sub_820CDC88(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
loc_820D0828:
	// lwz r11,-124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -124);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x820d0858
	if (!ctx.cr6.eq) goto loc_820D0858;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x820d0858
	if (!ctx.cr6.eq) goto loc_820D0858;
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x820d4378
	ctx.lr = 0x820D0854;
	sub_820D4378(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_820D0858:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,184
	ctx.r31.s64 = ctx.r31.s64 + 184;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// blt cr6,0x820d0828
	if (ctx.cr6.lt) goto loc_820D0828;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820d0880
	if (ctx.cr6.eq) goto loc_820D0880;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,23
	ctx.r5.s64 = 23;
	// b 0x820d0898
	goto loc_820D0898;
loc_820D0880:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-23432
	ctx.r3.s64 = ctx.r11.s64 + -23432;
	// bl 0x821313e0
	ctx.lr = 0x820D088C;
	sub_821313E0(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r5,40
	ctx.r5.s64 = 40;
loc_820D0898:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820cdcd8
	ctx.lr = 0x820D08AC;
	sub_820CDCD8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,232(r30)
	PPC_STORE_U32(ctx.r30.u32 + 232, ctx.r11.u32);
	// b 0x820d0954
	goto loc_820D0954;
loc_820D08B8:
	// lwz r11,232(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,50
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 50, ctx.xer);
	// stw r11,232(r30)
	PPC_STORE_U32(ctx.r30.u32 + 232, ctx.r11.u32);
	// beq cr6,0x820d0918
	if (ctx.cr6.eq) goto loc_820D0918;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// beq cr6,0x820d0918
	if (ctx.cr6.eq) goto loc_820D0918;
	// cmplwi cr6,r11,150
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 150, ctx.xer);
	// beq cr6,0x820d0918
	if (ctx.cr6.eq) goto loc_820D0918;
	// cmplwi cr6,r11,220
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 220, ctx.xer);
	// bne cr6,0x820d0954
	if (!ctx.cr6.eq) goto loc_820D0954;
	// li r11,3
	ctx.r11.s64 = 3;
loc_820D08E8:
	// lwz r10,-124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -124);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x820d0908
	if (!ctx.cr6.eq) goto loc_820D0908;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x820d0908
	if (!ctx.cr6.eq) goto loc_820D0908;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_820D0908:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r31,r31,184
	ctx.r31.s64 = ctx.r31.s64 + 184;
	// bne 0x820d08e8
	if (!ctx.cr0.eq) goto loc_820D08E8;
	// b 0x820d0954
	goto loc_820D0954;
loc_820D0918:
	// li r29,1
	ctx.r29.s64 = 1;
loc_820D091C:
	// lwz r11,-124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -124);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x820d0944
	if (!ctx.cr6.eq) goto loc_820D0944;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820d0944
	if (!ctx.cr6.eq) goto loc_820D0944;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820d41c0
	ctx.lr = 0x820D0944;
	sub_820D41C0(ctx, base);
loc_820D0944:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,184
	ctx.r31.s64 = ctx.r31.s64 + 184;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// blt cr6,0x820d091c
	if (ctx.cr6.lt) goto loc_820D091C;
loc_820D0954:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D095C"))) PPC_WEAK_FUNC(sub_820D095C);
PPC_FUNC_IMPL(__imp__sub_820D095C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D0960"))) PPC_WEAK_FUNC(sub_820D0960);
PPC_FUNC_IMPL(__imp__sub_820D0960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x820D0968;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r10,r31,608
	ctx.r10.s64 = ctx.r31.s64 + 608;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r9,3
	ctx.r9.s64 = 3;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_820D0984:
	// lwz r7,-124(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -124);
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// bne cr6,0x820d09b0
	if (!ctx.cr6.eq) goto loc_820D09B0;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// bne cr6,0x820d09a4
	if (!ctx.cr6.eq) goto loc_820D09A4;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x820d09b0
	goto loc_820D09B0;
loc_820D09A4:
	// cmpwi cr6,r7,5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 5, ctx.xer);
	// bne cr6,0x820d09b0
	if (!ctx.cr6.eq) goto loc_820D09B0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_820D09B0:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,184
	ctx.r11.s64 = ctx.r11.s64 + 184;
	// bne 0x820d0984
	if (!ctx.cr0.eq) goto loc_820D0984;
	// clrlwi. r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820d0a14
	if (ctx.cr0.eq) goto loc_820D0A14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820cdc88
	ctx.lr = 0x820D09CC;
	sub_820CDC88(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820d09e4
	if (ctx.cr6.eq) goto loc_820D09E4;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,26
	ctx.r5.s64 = 26;
	// b 0x820d09fc
	goto loc_820D09FC;
loc_820D09E4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-23360
	ctx.r3.s64 = ctx.r11.s64 + -23360;
	// bl 0x821313e0
	ctx.lr = 0x820D09F0;
	sub_821313E0(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r5,40
	ctx.r5.s64 = 40;
loc_820D09FC:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820cdcd8
	ctx.lr = 0x820D0A10;
	sub_820CDCD8(ctx, base);
	// b 0x820d0ab4
	goto loc_820D0AB4;
loc_820D0A14:
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,50
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 50, ctx.xer);
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// beq cr6,0x820d0a78
	if (ctx.cr6.eq) goto loc_820D0A78;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// beq cr6,0x820d0a78
	if (ctx.cr6.eq) goto loc_820D0A78;
	// cmplwi cr6,r11,150
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 150, ctx.xer);
	// beq cr6,0x820d0a78
	if (ctx.cr6.eq) goto loc_820D0A78;
	// cmplwi cr6,r11,220
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 220, ctx.xer);
	// bne cr6,0x820d0ab4
	if (!ctx.cr6.eq) goto loc_820D0AB4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r10,3
	ctx.r10.s64 = 3;
loc_820D0A48:
	// lwz r9,-124(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -124);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x820d0a68
	if (!ctx.cr6.eq) goto loc_820D0A68;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// bne cr6,0x820d0a68
	if (!ctx.cr6.eq) goto loc_820D0A68;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_820D0A68:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,184
	ctx.r11.s64 = ctx.r11.s64 + 184;
	// bne 0x820d0a48
	if (!ctx.cr0.eq) goto loc_820D0A48;
	// b 0x820d0ab4
	goto loc_820D0AB4;
loc_820D0A78:
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
loc_820D0A80:
	// lwz r11,-124(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -124);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x820d0aa4
	if (!ctx.cr6.eq) goto loc_820D0AA4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x820d0aa4
	if (!ctx.cr6.eq) goto loc_820D0AA4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d4378
	ctx.lr = 0x820D0AA4;
	sub_820D4378(ctx, base);
loc_820D0AA4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,184
	ctx.r29.s64 = ctx.r29.s64 + 184;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x820d0a80
	if (ctx.cr6.lt) goto loc_820D0A80;
loc_820D0AB4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D0ABC"))) PPC_WEAK_FUNC(sub_820D0ABC);
PPC_FUNC_IMPL(__imp__sub_820D0ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D0AC0"))) PPC_WEAK_FUNC(sub_820D0AC0);
PPC_FUNC_IMPL(__imp__sub_820D0AC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x820D0AC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820d0bb8
	if (!ctx.cr6.eq) goto loc_820D0BB8;
	// bl 0x820cdc88
	ctx.lr = 0x820D0AE0;
	sub_820CDC88(ctx, base);
	// addi r29,r31,212
	ctx.r29.s64 = ctx.r31.s64 + 212;
	// li r30,0
	ctx.r30.s64 = 0;
	// ld r5,128(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 128);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// stw r30,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r30.u32);
	// bl 0x822d8b60
	ctx.lr = 0x820D0B0C;
	sub_822D8B60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,122
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 122, ctx.xer);
	// bne cr6,0x820d0bac
	if (!ctx.cr6.eq) goto loc_820D0BAC;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820d0bac
	if (ctx.cr0.eq) goto loc_820D0BAC;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x820d4cd8
	ctx.lr = 0x820D0B2C;
	sub_820D4CD8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r3,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r3.u32);
	// bl 0x822e9ff0
	ctx.lr = 0x820D0B3C;
	sub_822E9FF0(ctx, base);
	// addi r8,r31,40
	ctx.r8.s64 = ctx.r31.s64 + 40;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// std r30,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r30.u64);
	// std r30,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r30.u64);
	// std r30,16(r8)
	PPC_STORE_U64(ctx.r8.u32 + 16, ctx.r30.u64);
	// stw r30,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r30.u32);
	// lwz r7,216(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// ld r5,128(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 128);
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// bl 0x822d8b60
	ctx.lr = 0x820D0B68;
	sub_822D8B60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,997
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 997, ctx.xer);
	// beq cr6,0x820d0b80
	if (ctx.cr6.eq) goto loc_820D0B80;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-23240
	ctx.r3.s64 = ctx.r11.s64 + -23240;
	// b 0x820d0bb4
	goto loc_820D0BB4;
loc_820D0B80:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,25
	ctx.r5.s64 = 25;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820cdcd8
	ctx.lr = 0x820D0BA8;
	sub_820CDCD8(ctx, base);
	// b 0x820d0bb8
	goto loc_820D0BB8;
loc_820D0BAC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-23284
	ctx.r3.s64 = ctx.r11.s64 + -23284;
loc_820D0BB4:
	// bl 0x821313e0
	ctx.lr = 0x820D0BB8;
	sub_821313E0(ctx, base);
loc_820D0BB8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D0BC0"))) PPC_WEAK_FUNC(sub_820D0BC0);
PPC_FUNC_IMPL(__imp__sub_820D0BC0) {
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
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x820d0c40
	if (ctx.cr6.eq) goto loc_820D0C40;
	// bl 0x820cdc88
	ctx.lr = 0x820D0BEC;
	sub_820CDC88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x822f8e08
	ctx.lr = 0x820D0C04;
	sub_822F8E08(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820d0c1c
	if (ctx.cr6.eq) goto loc_820D0C1C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-23168
	ctx.r3.s64 = ctx.r11.s64 + -23168;
	// bl 0x821313e0
	ctx.lr = 0x820D0C1C;
	sub_821313E0(ctx, base);
loc_820D0C1C:
	// lwz r3,216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// bl 0x820d4d38
	ctx.lr = 0x820D0C24;
	sub_820D4D38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,984(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 984);
	// stw r30,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r30.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// bl 0x820d43b0
	ctx.lr = 0x820D0C38;
	sub_820D43B0(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r11.u32);
loc_820D0C40:
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

__attribute__((alias("__imp__sub_820D0C58"))) PPC_WEAK_FUNC(sub_820D0C58);
PPC_FUNC_IMPL(__imp__sub_820D0C58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x820D0C60;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820d0d50
	if (!ctx.cr6.eq) goto loc_820D0D50;
	// bl 0x820cdc88
	ctx.lr = 0x820D0C78;
	sub_820CDC88(ctx, base);
	// addi r29,r31,212
	ctx.r29.s64 = ctx.r31.s64 + 212;
	// li r30,0
	ctx.r30.s64 = 0;
	// ld r5,128(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 128);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// stw r30,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r30.u32);
	// bl 0x822d8b60
	ctx.lr = 0x820D0CA4;
	sub_822D8B60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,122
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 122, ctx.xer);
	// bne cr6,0x820d0d44
	if (!ctx.cr6.eq) goto loc_820D0D44;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820d0d44
	if (ctx.cr0.eq) goto loc_820D0D44;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x820d4cd8
	ctx.lr = 0x820D0CC4;
	sub_820D4CD8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r3,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r3.u32);
	// bl 0x822e9ff0
	ctx.lr = 0x820D0CD4;
	sub_822E9FF0(ctx, base);
	// addi r8,r31,40
	ctx.r8.s64 = ctx.r31.s64 + 40;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// std r30,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r30.u64);
	// std r30,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r30.u64);
	// std r30,16(r8)
	PPC_STORE_U64(ctx.r8.u32 + 16, ctx.r30.u64);
	// stw r30,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r30.u32);
	// lwz r7,216(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// ld r5,128(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 128);
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// bl 0x822d8b60
	ctx.lr = 0x820D0D00;
	sub_822D8B60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,997
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 997, ctx.xer);
	// beq cr6,0x820d0d18
	if (ctx.cr6.eq) goto loc_820D0D18;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-23240
	ctx.r3.s64 = ctx.r11.s64 + -23240;
	// b 0x820d0d4c
	goto loc_820D0D4C;
loc_820D0D18:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,27
	ctx.r5.s64 = 27;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820cdcd8
	ctx.lr = 0x820D0D40;
	sub_820CDCD8(ctx, base);
	// b 0x820d0d50
	goto loc_820D0D50;
loc_820D0D44:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-23284
	ctx.r3.s64 = ctx.r11.s64 + -23284;
loc_820D0D4C:
	// bl 0x821313e0
	ctx.lr = 0x820D0D50;
	sub_821313E0(ctx, base);
loc_820D0D50:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D0D58"))) PPC_WEAK_FUNC(sub_820D0D58);
PPC_FUNC_IMPL(__imp__sub_820D0D58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x820D0D60;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x820d0e24
	if (ctx.cr6.eq) goto loc_820D0E24;
	// bl 0x820cdc88
	ctx.lr = 0x820D0D7C;
	sub_820CDC88(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// bl 0x822f8e08
	ctx.lr = 0x820D0D94;
	sub_822F8E08(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820d0dac
	if (ctx.cr6.eq) goto loc_820D0DAC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-23112
	ctx.r3.s64 = ctx.r11.s64 + -23112;
	// bl 0x821313e0
	ctx.lr = 0x820D0DAC;
	sub_821313E0(ctx, base);
loc_820D0DAC:
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r28,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r28.u32);
	// addi r30,r31,608
	ctx.r30.s64 = ctx.r31.s64 + 608;
loc_820D0DB8:
	// lwz r11,-124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -124);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x820d0de4
	if (!ctx.cr6.eq) goto loc_820D0DE4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x820d0de4
	if (!ctx.cr6.eq) goto loc_820D0DE4;
	// li r11,6
	ctx.r11.s64 = 6;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x820d43e8
	ctx.lr = 0x820D0DE4;
	sub_820D43E8(ctx, base);
loc_820D0DE4:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,184
	ctx.r30.s64 = ctx.r30.s64 + 184;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// blt cr6,0x820d0db8
	if (ctx.cr6.lt) goto loc_820D0DB8;
	// lwz r3,216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// bl 0x820d4d38
	ctx.lr = 0x820D0DFC;
	sub_820D4D38(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r28,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r28.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,28
	ctx.r5.s64 = 28;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x820cdcd8
	ctx.lr = 0x820D0E20;
	sub_820CDCD8(ctx, base);
	// stw r28,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r28.u32);
loc_820D0E24:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D0E2C"))) PPC_WEAK_FUNC(sub_820D0E2C);
PPC_FUNC_IMPL(__imp__sub_820D0E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D0E30"))) PPC_WEAK_FUNC(sub_820D0E30);
PPC_FUNC_IMPL(__imp__sub_820D0E30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x820D0E38;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r31,608
	ctx.r10.s64 = ctx.r31.s64 + 608;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// li r9,3
	ctx.r9.s64 = 3;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_820D0E58:
	// lwz r7,-124(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -124);
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// bne cr6,0x820d0e84
	if (!ctx.cr6.eq) goto loc_820D0E84;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r7,6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 6, ctx.xer);
	// bne cr6,0x820d0e78
	if (!ctx.cr6.eq) goto loc_820D0E78;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// b 0x820d0e84
	goto loc_820D0E84;
loc_820D0E78:
	// cmpwi cr6,r7,7
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 7, ctx.xer);
	// bne cr6,0x820d0e84
	if (!ctx.cr6.eq) goto loc_820D0E84;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_820D0E84:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,184
	ctx.r11.s64 = ctx.r11.s64 + 184;
	// bne 0x820d0e58
	if (!ctx.cr0.eq) goto loc_820D0E58;
	// clrlwi. r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820d0f2c
	if (ctx.cr0.eq) goto loc_820D0F2C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820cdc88
	ctx.lr = 0x820D0EA0;
	sub_820CDC88(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820d0efc
	if (ctx.cr6.eq) goto loc_820D0EFC;
	// addi r5,r31,40
	ctx.r5.s64 = ctx.r31.s64 + 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// std r30,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r30.u64);
	// std r30,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r30.u64);
	// std r30,16(r5)
	PPC_STORE_U64(ctx.r5.u32 + 16, ctx.r30.u64);
	// stw r30,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, ctx.r30.u32);
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// bl 0x822d8c38
	ctx.lr = 0x820D0EC8;
	sub_822D8C38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,997
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 997, ctx.xer);
	// beq cr6,0x820d0ee4
	if (ctx.cr6.eq) goto loc_820D0EE4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-22996
	ctx.r3.s64 = ctx.r11.s64 + -22996;
	// bl 0x821313e0
	ctx.lr = 0x820D0EE0;
	sub_821313E0(ctx, base);
	// b 0x820d0fcc
	goto loc_820D0FCC;
loc_820D0EE4:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,31
	ctx.r5.s64 = 31;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// b 0x820d0f14
	goto loc_820D0F14;
loc_820D0EFC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-23064
	ctx.r3.s64 = ctx.r11.s64 + -23064;
	// bl 0x821313e0
	ctx.lr = 0x820D0F08;
	sub_821313E0(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r5,40
	ctx.r5.s64 = 40;
loc_820D0F14:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820cdcd8
	ctx.lr = 0x820D0F28;
	sub_820CDCD8(ctx, base);
	// b 0x820d0fcc
	goto loc_820D0FCC;
loc_820D0F2C:
	// lwz r11,232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,50
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 50, ctx.xer);
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// beq cr6,0x820d0f90
	if (ctx.cr6.eq) goto loc_820D0F90;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// beq cr6,0x820d0f90
	if (ctx.cr6.eq) goto loc_820D0F90;
	// cmplwi cr6,r11,150
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 150, ctx.xer);
	// beq cr6,0x820d0f90
	if (ctx.cr6.eq) goto loc_820D0F90;
	// cmplwi cr6,r11,220
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 220, ctx.xer);
	// bne cr6,0x820d0fcc
	if (!ctx.cr6.eq) goto loc_820D0FCC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r10,3
	ctx.r10.s64 = 3;
loc_820D0F60:
	// lwz r9,-124(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -124);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x820d0f80
	if (!ctx.cr6.eq) goto loc_820D0F80;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// bne cr6,0x820d0f80
	if (!ctx.cr6.eq) goto loc_820D0F80;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_820D0F80:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,184
	ctx.r11.s64 = ctx.r11.s64 + 184;
	// bne 0x820d0f60
	if (!ctx.cr0.eq) goto loc_820D0F60;
	// b 0x820d0fcc
	goto loc_820D0FCC;
loc_820D0F90:
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
loc_820D0F98:
	// lwz r11,-124(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -124);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x820d0fbc
	if (!ctx.cr6.eq) goto loc_820D0FBC;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x820d0fbc
	if (!ctx.cr6.eq) goto loc_820D0FBC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d43e8
	ctx.lr = 0x820D0FBC;
	sub_820D43E8(ctx, base);
loc_820D0FBC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,184
	ctx.r29.s64 = ctx.r29.s64 + 184;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x820d0f98
	if (ctx.cr6.lt) goto loc_820D0F98;
loc_820D0FCC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D0FD4"))) PPC_WEAK_FUNC(sub_820D0FD4);
PPC_FUNC_IMPL(__imp__sub_820D0FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D0FD8"))) PPC_WEAK_FUNC(sub_820D0FD8);
PPC_FUNC_IMPL(__imp__sub_820D0FD8) {
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
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820d1064
	if (!ctx.cr6.eq) goto loc_820D1064;
	// bl 0x820cdc88
	ctx.lr = 0x820D0FFC;
	sub_820CDC88(ctx, base);
	// addi r5,r31,40
	ctx.r5.s64 = ctx.r31.s64 + 40;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// std r11,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r11.u64);
	// std r11,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r11.u64);
	// std r11,16(r5)
	PPC_STORE_U64(ctx.r5.u32 + 16, ctx.r11.u64);
	// stw r11,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, ctx.r11.u32);
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// bl 0x822d8c38
	ctx.lr = 0x820D1020;
	sub_822D8C38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,997
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 997, ctx.xer);
	// beq cr6,0x820d103c
	if (ctx.cr6.eq) goto loc_820D103C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-22996
	ctx.r3.s64 = ctx.r11.s64 + -22996;
	// bl 0x821313e0
	ctx.lr = 0x820D1038;
	sub_821313E0(ctx, base);
	// b 0x820d1064
	goto loc_820D1064;
loc_820D103C:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,30
	ctx.r5.s64 = 30;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820cdcd8
	ctx.lr = 0x820D1064;
	sub_820CDCD8(ctx, base);
loc_820D1064:
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

__attribute__((alias("__imp__sub_820D1078"))) PPC_WEAK_FUNC(sub_820D1078);
PPC_FUNC_IMPL(__imp__sub_820D1078) {
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
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x820d10f4
	if (ctx.cr6.eq) goto loc_820D10F4;
	// bl 0x820cdc88
	ctx.lr = 0x820D10A4;
	sub_820CDC88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x822f8e08
	ctx.lr = 0x820D10BC;
	sub_822F8E08(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820d10d4
	if (ctx.cr6.eq) goto loc_820D10D4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-22948
	ctx.r3.s64 = ctx.r11.s64 + -22948;
	// bl 0x821313e0
	ctx.lr = 0x820D10D4;
	sub_821313E0(ctx, base);
loc_820D10D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,984(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 984);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// bl 0x820d43e8
	ctx.lr = 0x820D10E4;
	sub_820D43E8(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r11.u32);
	// stw r10,1096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1096, ctx.r10.u32);
loc_820D10F4:
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

__attribute__((alias("__imp__sub_820D110C"))) PPC_WEAK_FUNC(sub_820D110C);
PPC_FUNC_IMPL(__imp__sub_820D110C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D1110"))) PPC_WEAK_FUNC(sub_820D1110);
PPC_FUNC_IMPL(__imp__sub_820D1110) {
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
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x820d1178
	if (ctx.cr6.eq) goto loc_820D1178;
	// bl 0x820cdc88
	ctx.lr = 0x820D113C;
	sub_820CDC88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x822f8e08
	ctx.lr = 0x820D1154;
	sub_822F8E08(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820d116c
	if (ctx.cr6.eq) goto loc_820D116C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-22948
	ctx.r3.s64 = ctx.r11.s64 + -22948;
	// bl 0x821313e0
	ctx.lr = 0x820D116C;
	sub_821313E0(ctx, base);
loc_820D116C:
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r11,1096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1096, ctx.r11.u32);
loc_820D1178:
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

__attribute__((alias("__imp__sub_820D1190"))) PPC_WEAK_FUNC(sub_820D1190);
PPC_FUNC_IMPL(__imp__sub_820D1190) {
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
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820d1290
	if (!ctx.cr6.eq) goto loc_820D1290;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
loc_820D11C0:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r7,r10,312
	ctx.r7.s64 = ctx.r10.s64 + 312;
loc_820D11C8:
	// lbzx r9,r7,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// beq cr6,0x820d11dc
	if (ctx.cr6.eq) goto loc_820D11DC;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// bne cr6,0x820d11ec
	if (!ctx.cr6.eq) goto loc_820D11EC;
loc_820D11DC:
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r9,420(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 420);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x820d124c
	if (ctx.cr0.eq) goto loc_820D124C;
loc_820D11EC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x820d11c8
	if (ctx.cr6.lt) goto loc_820D11C8;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,184
	ctx.r10.s64 = ctx.r10.s64 + 184;
	// cmplwi cr6,r8,4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 4, ctx.xer);
	// blt cr6,0x820d11c0
	if (ctx.cr6.lt) goto loc_820D11C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820cdc88
	ctx.lr = 0x820D1210;
	sub_820CDC88(ctx, base);
	// addi r4,r31,40
	ctx.r4.s64 = ctx.r31.s64 + 40;
	// std r30,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r30.u64);
	// std r30,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r30.u64);
	// std r30,16(r4)
	PPC_STORE_U64(ctx.r4.u32 + 16, ctx.r30.u64);
	// stw r30,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r30.u32);
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// bl 0x822d8cd0
	ctx.lr = 0x820D122C;
	sub_822D8CD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,997
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 997, ctx.xer);
	// beq cr6,0x820d1268
	if (ctx.cr6.eq) goto loc_820D1268;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-24096
	ctx.r3.s64 = ctx.r11.s64 + -24096;
	// bl 0x821313e0
	ctx.lr = 0x820D1244;
	sub_821313E0(ctx, base);
	// li r5,36
	ctx.r5.s64 = 36;
	// b 0x820d1274
	goto loc_820D1274;
loc_820D124C:
	// mulli r10,r8,184
	ctx.r10.s64 = ctx.r8.s64 * 184;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r5,51
	ctx.r5.s64 = 51;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r11,428(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 428);
	// extsb r6,r11
	ctx.r6.s64 = ctx.r11.s8;
	// b 0x820d1278
	goto loc_820D1278;
loc_820D1268:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,35
	ctx.r5.s64 = 35;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
loc_820D1274:
	// li r6,0
	ctx.r6.s64 = 0;
loc_820D1278:
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820cdcd8
	ctx.lr = 0x820D1290;
	sub_820CDCD8(ctx, base);
loc_820D1290:
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

__attribute__((alias("__imp__sub_820D12A8"))) PPC_WEAK_FUNC(sub_820D12A8);
PPC_FUNC_IMPL(__imp__sub_820D12A8) {
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
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x820d1328
	if (ctx.cr6.eq) goto loc_820D1328;
	// bl 0x820cdc88
	ctx.lr = 0x820D12D4;
	sub_820CDC88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x822f8e08
	ctx.lr = 0x820D12EC;
	sub_822F8E08(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820d1304
	if (ctx.cr6.eq) goto loc_820D1304;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-22900
	ctx.r3.s64 = ctx.r11.s64 + -22900;
	// bl 0x821313e0
	ctx.lr = 0x820D1304;
	sub_821313E0(ctx, base);
loc_820D1304:
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x820cdcd8
	ctx.lr = 0x820D1328;
	sub_820CDCD8(ctx, base);
loc_820D1328:
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

__attribute__((alias("__imp__sub_820D1340"))) PPC_WEAK_FUNC(sub_820D1340);
PPC_FUNC_IMPL(__imp__sub_820D1340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98d8
	ctx.lr = 0x820D1348;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820d155c
	if (!ctx.cr6.eq) goto loc_820D155C;
	// bl 0x820cdc88
	ctx.lr = 0x820D1360;
	sub_820CDC88(ctx, base);
	// lbz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 244);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820d1434
	if (ctx.cr0.eq) goto loc_820D1434;
	// addi r6,r31,40
	ctx.r6.s64 = ctx.r31.s64 + 40;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r31,1120
	ctx.r30.s64 = ctx.r31.s64 + 1120;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// std r29,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r29.u64);
	// std r29,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r29.u64);
	// std r29,16(r6)
	PPC_STORE_U64(ctx.r6.u32 + 16, ctx.r29.u64);
	// stw r29,24(r6)
	PPC_STORE_U32(ctx.r6.u32 + 24, ctx.r29.u32);
	// lwz r4,1116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1116);
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// bl 0x822d8a10
	ctx.lr = 0x820D1398;
	sub_822D8A10(ctx, base);
	// lwz r11,1116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1116);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x820d13cc
	if (!ctx.cr6.gt) goto loc_820D13CC;
loc_820D13A8:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,1776(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1776);
	// bl 0x820d9660
	ctx.lr = 0x820D13B8;
	sub_820D9660(ctx, base);
	// lwz r11,1116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1116);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820d13a8
	if (ctx.cr6.lt) goto loc_820D13A8;
loc_820D13CC:
	// cmplwi cr6,r28,997
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 997, ctx.xer);
	// beq cr6,0x820d1408
	if (ctx.cr6.eq) goto loc_820D1408;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r11,-22848
	ctx.r3.s64 = ctx.r11.s64 + -22848;
	// bl 0x821313e0
	ctx.lr = 0x820D13E4;
	sub_821313E0(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,38
	ctx.r5.s64 = 38;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820cdcd8
	ctx.lr = 0x820D1404;
	sub_820CDCD8(ctx, base);
	// b 0x820d155c
	goto loc_820D155C;
loc_820D1408:
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,37
	ctx.r5.s64 = 37;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820cdcd8
	ctx.lr = 0x820D1428;
	sub_820CDCD8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// b 0x820d1550
	goto loc_820D1550;
loc_820D1434:
	// addi r28,r31,1120
	ctx.r28.s64 = ctx.r31.s64 + 1120;
	// lwz r4,1116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1116);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x822d8a10
	ctx.lr = 0x820D144C;
	sub_822D8A10(ctx, base);
	// lwz r11,1116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1116);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x820d1488
	if (!ctx.cr6.gt) goto loc_820D1488;
loc_820D1464:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r3,1776(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1776);
	// bl 0x820d9660
	ctx.lr = 0x820D1474;
	sub_820D9660(ctx, base);
	// lwz r11,1116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1116);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820d1464
	if (ctx.cr6.lt) goto loc_820D1464;
loc_820D1488:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x820d14a0
	if (ctx.cr6.eq) goto loc_820D14A0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r11,-22848
	ctx.r3.s64 = ctx.r11.s64 + -22848;
	// bl 0x821313e0
	ctx.lr = 0x820D14A0;
	sub_821313E0(ctx, base);
loc_820D14A0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r25,1
	ctx.r25.s64 = 1;
	// addi r27,r31,484
	ctx.r27.s64 = ctx.r31.s64 + 484;
	// addi r24,r11,-23528
	ctx.r24.s64 = ctx.r11.s64 + -23528;
loc_820D14B0:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x820d14c4
	if (ctx.cr6.eq) goto loc_820D14C4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x820d1520
	if (!ctx.cr6.eq) goto loc_820D1520;
loc_820D14C4:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// addi r28,r27,84
	ctx.r28.s64 = ctx.r27.s64 + 84;
	// addi r26,r27,12
	ctx.r26.s64 = ctx.r27.s64 + 12;
loc_820D14D0:
	// lbzx r11,r26,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x820d1510
	if (!ctx.cr6.eq) goto loc_820D1510;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822d8ab8
	ctx.lr = 0x820D14F0;
	sub_822D8AB8(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x820d1500
	if (ctx.cr0.eq) goto loc_820D1500;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821313e0
	ctx.lr = 0x820D1500;
	sub_821313E0(ctx, base);
loc_820D1500:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,1776(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1776);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x820d9660
	ctx.lr = 0x820D1510;
	sub_820D9660(ctx, base);
loc_820D1510:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x820d14d0
	if (ctx.cr6.lt) goto loc_820D14D0;
loc_820D1520:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r27,r27,184
	ctx.r27.s64 = ctx.r27.s64 + 184;
	// cmplwi cr6,r25,4
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 4, ctx.xer);
	// blt cr6,0x820d14b0
	if (ctx.cr6.lt) goto loc_820D14B0;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,38
	ctx.r5.s64 = 38;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820cdcd8
	ctx.lr = 0x820D1550;
	sub_820CDCD8(ctx, base);
loc_820D1550:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,1776(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1776);
	// bl 0x820d8d40
	ctx.lr = 0x820D155C;
	sub_820D8D40(ctx, base);
loc_820D155C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822e9928
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D1564"))) PPC_WEAK_FUNC(sub_820D1564);
PPC_FUNC_IMPL(__imp__sub_820D1564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D1568"))) PPC_WEAK_FUNC(sub_820D1568);
PPC_FUNC_IMPL(__imp__sub_820D1568) {
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
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x820d15e8
	if (ctx.cr6.eq) goto loc_820D15E8;
	// bl 0x820cdc88
	ctx.lr = 0x820D1594;
	sub_820CDC88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x822f8e08
	ctx.lr = 0x820D15AC;
	sub_822F8E08(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820d15c4
	if (ctx.cr6.eq) goto loc_820D15C4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-22804
	ctx.r3.s64 = ctx.r11.s64 + -22804;
	// bl 0x821313e0
	ctx.lr = 0x820D15C4;
	sub_821313E0(ctx, base);
loc_820D15C4:
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,38
	ctx.r5.s64 = 38;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x820cdcd8
	ctx.lr = 0x820D15E8;
	sub_820CDCD8(ctx, base);
loc_820D15E8:
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

__attribute__((alias("__imp__sub_820D1600"))) PPC_WEAK_FUNC(sub_820D1600);
PPC_FUNC_IMPL(__imp__sub_820D1600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x820D1608;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820d16fc
	if (!ctx.cr6.eq) goto loc_820D16FC;
	// bl 0x820cdc88
	ctx.lr = 0x820D1620;
	sub_820CDC88(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r31,424
	ctx.r29.s64 = ctx.r31.s64 + 424;
	// li r28,4
	ctx.r28.s64 = 4;
	// stw r30,1096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1096, ctx.r30.u32);
loc_820D1630:
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,-176
	ctx.r3.s64 = ctx.r29.s64 + -176;
	// bl 0x822e9ff0
	ctx.lr = 0x820D1640;
	sub_822E9FF0(ctx, base);
	// stw r30,-124(r29)
	PPC_STORE_U32(ctx.r29.u32 + -124, ctx.r30.u32);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,184
	ctx.r29.s64 = ctx.r29.s64 + 184;
	// bne 0x820d1630
	if (!ctx.cr0.eq) goto loc_820D1630;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// bl 0x822b3230
	ctx.lr = 0x820D165C;
	sub_822B3230(ctx, base);
	// lbz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 220);
	// stw r30,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r30.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820d1694
	if (ctx.cr0.eq) goto loc_820D1694;
	// lis r29,-32207
	ctx.r29.s64 = -2110717952;
	// lwz r3,16472(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16472);
	// bl 0x822eac18
	ctx.lr = 0x820D1678;
	sub_822EAC18(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,16472(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16472);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,16
	ctx.r7.s64 = 16;
	// bl 0x822b3308
	ctx.lr = 0x820D1690;
	sub_822B3308(ctx, base);
	// stb r30,220(r31)
	PPC_STORE_U8(ctx.r31.u32 + 220, ctx.r30.u8);
loc_820D1694:
	// addi r4,r31,40
	ctx.r4.s64 = ctx.r31.s64 + 40;
	// std r30,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r30.u64);
	// std r30,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r30.u64);
	// std r30,16(r4)
	PPC_STORE_U64(ctx.r4.u32 + 16, ctx.r30.u64);
	// stw r30,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r30.u32);
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// bl 0x822d8810
	ctx.lr = 0x820D16B0;
	sub_822D8810(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,997
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 997, ctx.xer);
	// beq cr6,0x820d16d4
	if (ctx.cr6.eq) goto loc_820D16D4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-22752
	ctx.r3.s64 = ctx.r11.s64 + -22752;
	// bl 0x821313e0
	ctx.lr = 0x820D16C8;
	sub_821313E0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// b 0x820d16fc
	goto loc_820D16FC;
loc_820D16D4:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,39
	ctx.r5.s64 = 39;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820cdcd8
	ctx.lr = 0x820D16FC;
	sub_820CDCD8(ctx, base);
loc_820D16FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D1704"))) PPC_WEAK_FUNC(sub_820D1704);
PPC_FUNC_IMPL(__imp__sub_820D1704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D1708"))) PPC_WEAK_FUNC(sub_820D1708);
PPC_FUNC_IMPL(__imp__sub_820D1708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x820D1710;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x820d179c
	if (ctx.cr6.eq) goto loc_820D179C;
	// bl 0x820cdc88
	ctx.lr = 0x820D172C;
	sub_820CDC88(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// bl 0x822f8e08
	ctx.lr = 0x820D1744;
	sub_822F8E08(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820d175c
	if (ctx.cr6.eq) goto loc_820D175C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-22712
	ctx.r3.s64 = ctx.r11.s64 + -22712;
	// bl 0x821313e0
	ctx.lr = 0x820D175C;
	sub_821313E0(ctx, base);
loc_820D175C:
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// stw r28,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r28.u32);
	// bl 0x822f8ae0
	ctx.lr = 0x820D1768;
	sub_822F8AE0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r30,r31,424
	ctx.r30.s64 = ctx.r31.s64 + 424;
	// li r29,4
	ctx.r29.s64 = 4;
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
loc_820D1778:
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,-176
	ctx.r3.s64 = ctx.r30.s64 + -176;
	// bl 0x822e9ff0
	ctx.lr = 0x820D1788;
	sub_822E9FF0(ctx, base);
	// stw r28,-124(r30)
	PPC_STORE_U32(ctx.r30.u32 + -124, ctx.r28.u32);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,184
	ctx.r30.s64 = ctx.r30.s64 + 184;
	// bne 0x820d1778
	if (!ctx.cr0.eq) goto loc_820D1778;
loc_820D179C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D17A4"))) PPC_WEAK_FUNC(sub_820D17A4);
PPC_FUNC_IMPL(__imp__sub_820D17A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D17A8"))) PPC_WEAK_FUNC(sub_820D17A8);
PPC_FUNC_IMPL(__imp__sub_820D17A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e0
	ctx.lr = 0x820D17B0;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820d1958
	if (!ctx.cr6.eq) goto loc_820D1958;
	// bl 0x820cdc88
	ctx.lr = 0x820D17D4;
	sub_820CDC88(ctx, base);
	// addi r11,r29,275
	ctx.r11.s64 = ctx.r29.s64 + 275;
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r30.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d1808
	if (ctx.cr6.eq) goto loc_820D1808;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-22496
	ctx.r3.s64 = ctx.r11.s64 + -22496;
	// bl 0x821313e0
	ctx.lr = 0x820D17FC;
	sub_821313E0(ctx, base);
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x820d4d38
	ctx.lr = 0x820D1804;
	sub_820D4D38(ctx, base);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
loc_820D1808:
	// lis r4,0
	ctx.r4.s64 = 0;
	// lwz r5,200(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,32778
	ctx.r4.u64 = ctx.r4.u64 | 32778;
	// bl 0x822f7fc8
	ctx.lr = 0x820D181C;
	sub_822F7FC8(ctx, base);
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,204(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// ori r4,r4,32779
	ctx.r4.u64 = ctx.r4.u64 | 32779;
	// bl 0x822f7fc8
	ctx.lr = 0x820D1830;
	sub_822F7FC8(ctx, base);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82080c18
	ctx.lr = 0x820D1838;
	sub_82080C18(ctx, base);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// clrlwi r28,r11,16
	ctx.r28.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// bl 0x822d8d80
	ctx.lr = 0x820D1878;
	sub_822D8D80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,122
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 122, ctx.xer);
	// bne cr6,0x820d194c
	if (!ctx.cr6.eq) goto loc_820D194C;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d194c
	if (ctx.cr6.eq) goto loc_820D194C;
	// bl 0x820d4cd8
	ctx.lr = 0x820D1894;
	sub_820D4CD8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r3.u32);
	// bne 0x820d18b0
	if (!ctx.cr0.eq) goto loc_820D18B0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-22548
	ctx.r3.s64 = ctx.r11.s64 + -22548;
	// bl 0x821313e0
	ctx.lr = 0x820D18AC;
	sub_821313E0(ctx, base);
	// b 0x820d1958
	goto loc_820D1958;
loc_820D18B0:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x822e9ff0
	ctx.lr = 0x820D18BC;
	sub_822E9FF0(ctx, base);
	// addi r11,r31,40
	ctx.r11.s64 = ctx.r31.s64 + 40;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// std r30,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r30.u64);
	// li r6,1
	ctx.r6.s64 = 1;
	// std r30,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r30.u64);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// std r30,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r30.u64);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r30,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r30.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x822d8d80
	ctx.lr = 0x820D1908;
	sub_822D8D80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,997
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 997, ctx.xer);
	// beq cr6,0x820d1920
	if (ctx.cr6.eq) goto loc_820D1920;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-22604
	ctx.r3.s64 = ctx.r11.s64 + -22604;
	// b 0x820d1954
	goto loc_820D1954;
loc_820D1920:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,42
	ctx.r5.s64 = 42;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x820cdcd8
	ctx.lr = 0x820D1948;
	sub_820CDCD8(ctx, base);
	// b 0x820d1958
	goto loc_820D1958;
loc_820D194C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-22656
	ctx.r3.s64 = ctx.r11.s64 + -22656;
loc_820D1954:
	// bl 0x821313e0
	ctx.lr = 0x820D1958;
	sub_821313E0(ctx, base);
loc_820D1958:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822e9930
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D1960"))) PPC_WEAK_FUNC(sub_820D1960);
PPC_FUNC_IMPL(__imp__sub_820D1960) {
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
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x820d19cc
	if (ctx.cr6.eq) goto loc_820D19CC;
	// bl 0x820cdc88
	ctx.lr = 0x820D198C;
	sub_820CDC88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x822f8e08
	ctx.lr = 0x820D19A4;
	sub_822F8E08(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820d19c0
	if (ctx.cr6.eq) goto loc_820D19C0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-22404
	ctx.r3.s64 = ctx.r11.s64 + -22404;
	// bl 0x821313e0
	ctx.lr = 0x820D19BC;
	sub_821313E0(ctx, base);
	// b 0x820d19c8
	goto loc_820D19C8;
loc_820D19C0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r11.u8);
loc_820D19C8:
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
loc_820D19CC:
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

__attribute__((alias("__imp__sub_820D19E4"))) PPC_WEAK_FUNC(sub_820D19E4);
PPC_FUNC_IMPL(__imp__sub_820D19E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D19E8"))) PPC_WEAK_FUNC(sub_820D19E8);
PPC_FUNC_IMPL(__imp__sub_820D19E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98dc
	ctx.lr = 0x820D19F0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r27,48
	ctx.r27.s64 = 48;
	// addi r26,r31,316
	ctx.r26.s64 = ctx.r31.s64 + 316;
	// stw r25,988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 988, ctx.r25.u32);
loc_820D1A08:
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// addi r30,r26,-4
	ctx.r30.s64 = ctx.r26.s64 + -4;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_820D1A14:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x820d1a24
	if (!ctx.cr6.eq) goto loc_820D1A24;
	// stb r25,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r25.u8);
loc_820D1A24:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x820d1a80
	if (!ctx.cr6.eq) goto loc_820D1A80;
	// lwz r11,988(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 988);
	// add r10,r27,r29
	ctx.r10.u64 = ctx.r27.u64 + ctx.r29.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stb r11,116(r30)
	PPC_STORE_U8(ctx.r30.u32 + 116, ctx.r11.u8);
	// lwz r11,988(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 988);
	// ldx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r31.u32);
	// addi r11,r11,125
	ctx.r11.s64 = ctx.r11.s64 + 125;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stdx r10,r11,r31
	PPC_STORE_U64(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u64);
	// lwz r11,988(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 988);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,1032
	ctx.r3.s64 = ctx.r11.s64 + 1032;
	// bl 0x822e9960
	ctx.lr = 0x820D1A70;
	sub_822E9960(ctx, base);
	// lwz r11,988(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 988);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 988, ctx.r11.u32);
	// b 0x820d1a88
	goto loc_820D1A88;
loc_820D1A80:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stb r11,116(r30)
	PPC_STORE_U8(ctx.r30.u32 + 116, ctx.r11.u8);
loc_820D1A88:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// blt cr6,0x820d1a14
	if (ctx.cr6.lt) goto loc_820D1A14;
	// addi r27,r27,23
	ctx.r27.s64 = ctx.r27.s64 + 23;
	// addi r26,r26,184
	ctx.r26.s64 = ctx.r26.s64 + 184;
	// cmplwi cr6,r27,140
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 140, ctx.xer);
	// blt cr6,0x820d1a08
	if (ctx.cr6.lt) goto loc_820D1A08;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,992(r31)
	PPC_STORE_U8(ctx.r31.u32 + 992, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e992c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D1ABC"))) PPC_WEAK_FUNC(sub_820D1ABC);
PPC_FUNC_IMPL(__imp__sub_820D1ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D1AC0"))) PPC_WEAK_FUNC(sub_820D1AC0);
PPC_FUNC_IMPL(__imp__sub_820D1AC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98d8
	ctx.lr = 0x820D1AC8;
	__savegprlr_24(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820d1d18
	if (!ctx.cr6.eq) goto loc_820D1D18;
	// bl 0x820cdc88
	ctx.lr = 0x820D1AEC;
	sub_820CDC88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d2cd8
	ctx.lr = 0x820D1AF4;
	sub_820D2CD8(ctx, base);
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// li r5,254
	ctx.r5.s64 = 254;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r27,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r27.u32);
	// stb r27,992(r31)
	PPC_STORE_U8(ctx.r31.u32 + 992, ctx.r27.u8);
	// stb r11,244(r31)
	PPC_STORE_U8(ctx.r31.u32 + 244, ctx.r11.u8);
	// bl 0x822b3218
	ctx.lr = 0x820D1B20;
	sub_822B3218(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// stw r3,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r3.u32);
	// bne cr6,0x820d1b44
	if (!ctx.cr6.eq) goto loc_820D1B44;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-22208
	ctx.r3.s64 = ctx.r11.s64 + -22208;
	// bl 0x821313e0
	ctx.lr = 0x820D1B38;
	sub_821313E0(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,1168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1168, ctx.r11.u32);
	// b 0x820d1d18
	goto loc_820D1D18;
loc_820D1B44:
	// addi r26,r31,424
	ctx.r26.s64 = ctx.r31.s64 + 424;
	// li r29,4
	ctx.r29.s64 = 4;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_820D1B50:
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,-176
	ctx.r3.s64 = ctx.r30.s64 + -176;
	// bl 0x822e9ff0
	ctx.lr = 0x820D1B60;
	sub_822E9FF0(ctx, base);
	// stw r27,-124(r30)
	PPC_STORE_U32(ctx.r30.u32 + -124, ctx.r27.u32);
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,184
	ctx.r30.s64 = ctx.r30.s64 + 184;
	// bne 0x820d1b50
	if (!ctx.cr0.eq) goto loc_820D1B50;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// addi r29,r31,384
	ctx.r29.s64 = ctx.r31.s64 + 384;
loc_820D1B7C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f82c8
	ctx.lr = 0x820D1B88;
	sub_822F82C8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x820d1b7c
	if (ctx.cr6.lt) goto loc_820D1B7C;
	// li r11,1000
	ctx.r11.s64 = 1000;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// li r24,2
	ctx.r24.s64 = 2;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// sth r11,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r11.u16);
	// sth r24,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r24.u16);
	// bl 0x822b3258
	ctx.lr = 0x820D1BBC;
	sub_822B3258(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820d1bdc
	if (ctx.cr0.eq) goto loc_820D1BDC;
	// bl 0x822b32b0
	ctx.lr = 0x820D1BC8;
	sub_822B32B0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-22244
	ctx.r11.s64 = ctx.r11.s64 + -22244;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821313e0
	ctx.lr = 0x820D1BDC;
	sub_821313E0(ctx, base);
loc_820D1BDC:
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// lis r4,-32764
	ctx.r4.s64 = -2147221504;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,26238
	ctx.r4.u64 = ctx.r4.u64 | 26238;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x822b3240
	ctx.lr = 0x820D1BF8;
	sub_822B3240(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820d1c0c
	if (ctx.cr0.eq) goto loc_820D1C0C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-22288
	ctx.r3.s64 = ctx.r11.s64 + -22288;
	// bl 0x821313e0
	ctx.lr = 0x820D1C0C;
	sub_821313E0(ctx, base);
loc_820D1C0C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822b3328
	ctx.lr = 0x820D1C14;
	sub_822B3328(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820d1c0c
	if (ctx.cr0.eq) goto loc_820D1C0C;
	// addi r4,r31,248
	ctx.r4.s64 = ctx.r31.s64 + 248;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822b32f8
	ctx.lr = 0x820D1C28;
	sub_822B32F8(ctx, base);
	// lbz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 244);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820d1c3c
	if (ctx.cr0.eq) goto loc_820D1C3C;
	// stw r27,984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 984, ctx.r27.u32);
	// b 0x820d1c40
	goto loc_820D1C40;
loc_820D1C3C:
	// stw r30,984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 984, ctx.r30.u32);
loc_820D1C40:
	// add r11,r28,r31
	ctx.r11.u64 = ctx.r28.u64 + ctx.r31.u64;
	// stw r30,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r30.u32);
	// rlwinm r10,r28,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// li r5,16
	ctx.r5.s64 = 16;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r30,312(r11)
	PPC_STORE_U8(ctx.r11.u32 + 312, ctx.r30.u8);
	// addi r4,r10,316
	ctx.r4.s64 = ctx.r10.s64 + 316;
	// stw r27,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r27.u32);
	// stb r25,304(r11)
	PPC_STORE_U8(ctx.r11.u32 + 304, ctx.r25.u8);
	// bl 0x822f8078
	ctx.lr = 0x820D1C6C;
	sub_822F8078(ctx, base);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x820d1d0c
	if (ctx.cr6.eq) goto loc_820D1D0C;
	// mulli r11,r28,84
	ctx.r11.s64 = ctx.r28.s64 * 84;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r29,r30,1192
	ctx.r29.s64 = ctx.r30.s64 + 1192;
	// addi r4,r30,1236
	ctx.r4.s64 = ctx.r30.s64 + 1236;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822b32b8
	ctx.lr = 0x820D1C8C;
	sub_822B32B8(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x820d1cfc
	if (!ctx.cr0.eq) goto loc_820D1CFC;
	// lwz r11,984(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 984);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r30,1200
	ctx.r3.s64 = ctx.r30.s64 + 1200;
	// mulli r11,r11,184
	ctx.r11.s64 = ctx.r11.s64 * 184;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r5,r11,256
	ctx.r5.s64 = ctx.r11.s64 + 256;
	// bl 0x822b32c8
	ctx.lr = 0x820D1CB0;
	sub_822B32C8(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x820d1cf0
	if (!ctx.cr0.eq) goto loc_820D1CF0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r24,1168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1168, ctx.r24.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r27,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r27.u32);
	// bl 0x820d3a48
	ctx.lr = 0x820D1CCC;
	sub_820D3A48(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,18
	ctx.r5.s64 = 18;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x820cdcd8
	ctx.lr = 0x820D1CEC;
	sub_820CDCD8(ctx, base);
	// b 0x820d1d18
	goto loc_820D1D18;
loc_820D1CF0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-22320
	ctx.r3.s64 = ctx.r11.s64 + -22320;
	// b 0x820d1d04
	goto loc_820D1D04;
loc_820D1CFC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-22348
	ctx.r3.s64 = ctx.r11.s64 + -22348;
loc_820D1D04:
	// bl 0x821313e0
	ctx.lr = 0x820D1D08;
	sub_821313E0(ctx, base);
	// b 0x820d1d18
	goto loc_820D1D18;
loc_820D1D0C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820cfc40
	ctx.lr = 0x820D1D18;
	sub_820CFC40(ctx, base);
loc_820D1D18:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822e9928
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D1D20"))) PPC_WEAK_FUNC(sub_820D1D20);
PPC_FUNC_IMPL(__imp__sub_820D1D20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x820D1D28;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820d1e14
	if (!ctx.cr6.eq) goto loc_820D1E14;
	// bl 0x820cdc88
	ctx.lr = 0x820D1D40;
	sub_820CDC88(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r29,r31,608
	ctx.r29.s64 = ctx.r31.s64 + 608;
loc_820D1D48:
	// lwz r11,-124(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -124);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x820d1d6c
	if (!ctx.cr6.eq) goto loc_820D1D6C;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x820d41c0
	ctx.lr = 0x820D1D6C;
	sub_820D41C0(ctx, base);
loc_820D1D6C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,184
	ctx.r29.s64 = ctx.r29.s64 + 184;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x820d1d48
	if (ctx.cr6.lt) goto loc_820D1D48;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820cdcd8
	ctx.lr = 0x820D1D9C;
	sub_820CDCD8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r9,r31,312
	ctx.r9.s64 = ctx.r31.s64 + 312;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r7,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r7.u32);
	// stw r7,988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 988, ctx.r7.u32);
loc_820D1DB0:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// li r8,4
	ctx.r8.s64 = 4;
loc_820D1DB8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x820d1dc8
	if (!ctx.cr6.eq) goto loc_820D1DC8;
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
loc_820D1DC8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x820d1dec
	if (!ctx.cr6.eq) goto loc_820D1DEC;
	// lwz r10,988(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 988);
	// stb r10,116(r11)
	PPC_STORE_U8(ctx.r11.u32 + 116, ctx.r10.u8);
	// lwz r10,988(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 988);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 988, ctx.r10.u32);
	// b 0x820d1df4
	goto loc_820D1DF4;
loc_820D1DEC:
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r10,116(r11)
	PPC_STORE_U8(ctx.r11.u32 + 116, ctx.r10.u8);
loc_820D1DF4:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x820d1db8
	if (!ctx.cr0.eq) goto loc_820D1DB8;
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r9,r9,184
	ctx.r9.s64 = ctx.r9.s64 + 184;
	// bne 0x820d1db0
	if (!ctx.cr0.eq) goto loc_820D1DB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d19e8
	ctx.lr = 0x820D1E14;
	sub_820D19E8(ctx, base);
loc_820D1E14:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820D1E1C"))) PPC_WEAK_FUNC(sub_820D1E1C);
PPC_FUNC_IMPL(__imp__sub_820D1E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D1E20"))) PPC_WEAK_FUNC(sub_820D1E20);
PPC_FUNC_IMPL(__imp__sub_820D1E20) {
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
	// bl 0x820cdc88
	ctx.lr = 0x820D1E40;
	sub_820CDC88(ctx, base);
	// lwz r11,1096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1096);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x820d1ed4
	if (!ctx.cr6.eq) goto loc_820D1ED4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820d1e5c
	if (ctx.cr6.eq) goto loc_820D1E5C;
	// addi r6,r30,-1
	ctx.r6.s64 = ctx.r30.s64 + -1;
	// b 0x820d1eb8
	goto loc_820D1EB8;
loc_820D1E5C:
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-11748
	ctx.r11.s64 = ctx.r11.s64 + -11748;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// bl 0x820d4088
	ctx.lr = 0x820D1E74;
	sub_820D4088(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820d1ea8
	if (ctx.cr0.eq) goto loc_820D1EA8;
	// li r11,7
	ctx.r11.s64 = 7;
	// lwz r4,984(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 984);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1096, ctx.r11.u32);
	// bl 0x820d41c0
	ctx.lr = 0x820D1E94;
	sub_820D41C0(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r11.u32);
	// bl 0x820d19e8
	ctx.lr = 0x820D1EA4;
	sub_820D19E8(ctx, base);
	// b 0x820d1ed4
	goto loc_820D1ED4;
loc_820D1EA8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-22176
	ctx.r3.s64 = ctx.r11.s64 + -22176;
	// bl 0x821313e0
	ctx.lr = 0x820D1EB4;
	sub_821313E0(ctx, base);
	// li r6,5
	ctx.r6.s64 = 5;
loc_820D1EB8:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,21
	ctx.r5.s64 = 21;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820cdcd8
	ctx.lr = 0x820D1ED4;
	sub_820CDCD8(ctx, base);
loc_820D1ED4:
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

__attribute__((alias("__imp__sub_820D1EEC"))) PPC_WEAK_FUNC(sub_820D1EEC);
PPC_FUNC_IMPL(__imp__sub_820D1EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D1EF0"))) PPC_WEAK_FUNC(sub_820D1EF0);
PPC_FUNC_IMPL(__imp__sub_820D1EF0) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820cdc78
	ctx.lr = 0x820D1F0C;
	sub_820CDC78(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r4,56
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 56, ctx.xer);
	// bgt cr6,0x820d224c
	if (ctx.cr6.gt) goto loc_820D224C;
	// lis r12,-32254
	ctx.r12.s64 = -2113798144;
	// addi r12,r12,-24456
	ctx.r12.s64 = ctx.r12.s64 + -24456;
	// lbzx r0,r12,r4
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r4.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32243
	ctx.r12.s64 = -2113077248;
	// addi r12,r12,8004
	ctx.r12.s64 = ctx.r12.s64 + 8004;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		goto loc_820D2258;
	case 1:
		goto loc_820D1F44;
	case 2:
		goto loc_820D1F54;
	case 3:
		goto loc_820D1F64;
	case 4:
		goto loc_820D1F74;
	case 5:
		goto loc_820D1F80;
	case 6:
		goto loc_820D1F8C;
	case 7:
		goto loc_820D1F98;
	case 8:
		goto loc_820D1FA4;
	case 9:
		goto loc_820D1FB0;
	case 10:
		goto loc_820D1FBC;
	case 11:
		goto loc_820D1FC8;
	case 12:
		goto loc_820D1FD4;
	case 13:
		goto loc_820D1FE0;
	case 14:
		goto loc_820D1FF8;
	case 15:
		goto loc_820D2008;
	case 16:
		goto loc_820D2018;
	case 17:
		goto loc_820D2028;
	case 18:
		goto loc_820D2038;
	case 19:
		goto loc_820D2048;
	case 20:
		goto loc_820D2054;
	case 21:
		goto loc_820D2060;
	case 22:
		goto loc_820D224C;
	case 23:
		goto loc_820D2070;
	case 24:
		goto loc_820D207C;
	case 25:
		goto loc_820D2088;
	case 26:
		goto loc_820D2094;
	case 27:
		goto loc_820D20A0;
	case 28:
		goto loc_820D20C4;
	case 29:
		goto loc_820D20AC;
	case 30:
		goto loc_820D20B8;
	case 31:
		goto loc_820D20D0;
	case 32:
		goto loc_820D224C;
	case 33:
		goto loc_820D224C;
	case 34:
		goto loc_820D20DC;
	case 35:
		goto loc_820D20E8;
	case 36:
		goto loc_820D20F4;
	case 37:
		goto loc_820D2100;
	case 38:
		goto loc_820D210C;
	case 39:
		goto loc_820D2118;
	case 40:
		goto loc_820D2124;
	case 41:
		goto loc_820D2138;
	case 42:
		goto loc_820D2150;
	case 43:
		goto loc_820D215C;
	case 44:
		goto loc_820D2170;
	case 45:
		goto loc_820D2184;
	case 46:
		goto loc_820D2198;
	case 47:
		goto loc_820D21AC;
	case 48:
		goto loc_820D21C4;
	case 49:
		goto loc_820D21D8;
	case 50:
		goto loc_820D21E8;
	case 51:
		goto loc_820D21F8;
	case 52:
		goto loc_820D2208;
	case 53:
		goto loc_820D2214;
	case 54:
		goto loc_820D2220;
	case 55:
		goto loc_820D222C;
	case 56:
		goto loc_820D223C;
	default:
		__builtin_unreachable();
	}
loc_820D1F44:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x820cf358
	ctx.lr = 0x820D1F50;
	sub_820CF358(ctx, base);
	// b 0x820d2258
	goto loc_820D2258;
loc_820D1F54:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x820cf470
	ctx.lr = 0x820D1F60;
	sub_820CF470(ctx, base);
	// b 0x820d2258
	goto loc_820D2258;
loc_820D1F64:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x820cf508
	ctx.lr = 0x820D1F70;
	sub_820CF508(ctx, base);
	// b 0x820d2258
	goto loc_820D2258;
loc_820D1F74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820cf650
	ctx.lr = 0x820D1F7C;
	sub_820CF650(ctx, base);
	// b 0x820d2258
	goto loc_820D2258;
loc_820D1F80:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820cf720
	ctx.lr = 0x820D1F88;
	sub_820CF720(ctx, base);
	// b 0x820d2258
	goto loc_820D2258;
loc_820D1F8C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820cf7d0
	ctx.lr = 0x820D1F94;
	sub_820CF7D0(ctx, base);
	// b 0x820d2258
	goto loc_820D2258;
loc_820D1F98:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820cf878
	ctx.lr = 0x820D1FA0;
	sub_820CF878(ctx, base);
	// b 0x820d2258
	goto loc_820D2258;
loc_820D1FA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820cf920
	ctx.lr = 0x820D1FAC;
	sub_820CF920(ctx, base);
	// b 0x820d2258
	goto loc_820D2258;
loc_820D1FB0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820cf9b8
	ctx.lr = 0x820D1FB8;
	sub_820CF9B8(ctx, base);
	// b 0x820d2258
	goto loc_820D2258;
loc_820D1FBC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820cfa60
	ctx.lr = 0x820D1FC4;
	sub_820CFA60(ctx, base);
	// b 0x820d2258
	goto loc_820D2258;
loc_820D1FC8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820cfaf8
	ctx.lr = 0x820D1FD0;
	sub_820CFAF8(ctx, base);
	// b 0x820d2258
	goto loc_820D2258;
loc_820D1FD4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820cfba0
	ctx.lr = 0x820D1FDC;
	sub_820CFBA0(ctx, base);
	// b 0x820d2258
	goto loc_820D2258;
loc_820D1FE0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x820d1ac0
	ctx.lr = 0x820D1FF4;
	sub_820D1AC0(ctx, base);
	// b 0x820d2258
	goto loc_820D2258;
loc_820D1FF8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x820cfc40
	ctx.lr = 0x820D2004;
	sub_820CFC40(ctx, base);
	// b 0x820d2258
	goto loc_820D2258;
loc_820D2008:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x820cfd80
	ctx.lr = 0x820D2014;
	sub_820CFD80(ctx, base);
	// b 0x820d2258
	goto loc_820D2258;
loc_820D2018:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x820cffd0
	ctx.lr = 0x820D2024;
	sub_820CFFD0(ctx, base);
	// b 0x820d2258
	goto loc_820D2258;
loc_820D2028:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x820d0120
	ctx.lr = 0x820D2034;
	sub_820D0120(ctx, base);
	// b 0x820d2258
	goto loc_820D2258;
loc_820D2038:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x820cfee0
	ctx.lr = 0x820D2044;
	sub_820CFEE0(ctx, base);
	// b 0x820d2258
	goto loc_820D2258;
loc_820D2048:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d1d20
	ctx.lr = 0x820D2050;
	sub_820D1D20(ctx, base);
	// b 0x820d2258
	goto loc_820D2258;
loc_820D2054:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d07c8
	ctx.lr = 0x820D205C;
	sub_820D07C8(ctx, base);
	// b 0x820d2258
	goto loc_820D2258;
loc_820D2060:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x820d1e20
	ctx.lr = 0x820D206C;
	sub_820D1E20(ctx, base);
	// b 0x820d2258
	goto loc_820D2258;
loc_820D2070:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d0960
	ctx.lr = 0x820D2078;
	sub_820D0960(ctx, base);
	// b 0x820d2258
	goto loc_820D2258;
loc_820D207C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d0ac0
	ctx.lr = 0x820D2084;
	sub_820D0AC0(ctx, base);
	// b 0x820d2258
	goto loc_820D2258;
loc_820D2088:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d0bc0
	ctx.lr = 0x820D2090;
	sub_820D0BC0(ctx, base);
	// b 0x820d2258
	goto loc_820D2258;
loc_820D2094:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d0c58
	ctx.lr = 0x820D209C;
	sub_820D0C58(ctx, base);
	// b 0x820d2258
	goto loc_820D2258;
loc_820D20A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d0d58
	ctx.lr = 0x820D20A8;
	sub_820D0D58(ctx, base);
	// b 0x820d2258
	goto loc_820D2258;
loc_820D20AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d0fd8
	ctx.lr = 0x820D20B4;
	sub_820D0FD8(ctx, base);
	// b 0x820d2258
	goto loc_820D2258;
loc_820D20B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d1078
	ctx.lr = 0x820D20C0;
	sub_820D1078(ctx, base);
	// b 0x820d2258
	goto loc_820D2258;
loc_820D20C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d0e30
	ctx.lr = 0x820D20CC;
	sub_820D0E30(ctx, base);
	// b 0x820d2258
	goto loc_820D2258;
loc_820D20D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d1110
	ctx.lr = 0x820D20D8;
	sub_820D1110(ctx, base);
	// b 0x820d2258
	goto loc_820D2258;
loc_820D20DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d1190
	ctx.lr = 0x820D20E4;
	sub_820D1190(ctx, base);
	// b 0x820d2258
	goto loc_820D2258;
loc_820D20E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d12a8
	ctx.lr = 0x820D20F0;
	sub_820D12A8(ctx, base);
	// b 0x820d2258
	goto loc_820D2258;
loc_820D20F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d1340
	ctx.lr = 0x820D20FC;
	sub_820D1340(ctx, base);
	// b 0x820d2258
	goto loc_820D2258;
loc_820D2100:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d1568
	ctx.lr = 0x820D2108;
	sub_820D1568(ctx, base);
	// b 0x820d2258
	goto loc_820D2258;
loc_820D210C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d1600
	ctx.lr = 0x820D2114;
	sub_820D1600(ctx, base);
	// b 0x820d2258
	goto loc_820D2258;
loc_820D2118:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d1708
	ctx.lr = 0x820D2120;
	sub_820D1708(ctx, base);
	// b 0x820d2258
	goto loc_820D2258;
loc_820D2124:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x820cf1c8
	ctx.lr = 0x820D2134;
	sub_820CF1C8(ctx, base);
	// b 0x820d2258
	goto loc_820D2258;
loc_820D2138:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x820d17a8
	ctx.lr = 0x820D214C;
	sub_820D17A8(ctx, base);
	// b 0x820d2258
	goto loc_820D2258;
loc_820D2150:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d1960
	ctx.lr = 0x820D2158;
	sub_820D1960(ctx, base);
	// b 0x820d2258
	goto loc_820D2258;
loc_820D215C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x820d01d8
	ctx.lr = 0x820D216C;
	sub_820D01D8(ctx, base);
	// b 0x820d2258
	goto loc_820D2258;
loc_820D2170:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x820d02d0
	ctx.lr = 0x820D2180;
	sub_820D02D0(ctx, base);
	// b 0x820d2258
	goto loc_820D2258;
loc_820D2184:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x820d0360
	ctx.lr = 0x820D2194;
	sub_820D0360(ctx, base);
	// b 0x820d2258
	goto loc_820D2258;
loc_820D2198:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x820d0448
	ctx.lr = 0x820D21A8;
	sub_820D0448(ctx, base);
	// b 0x820d2258
	goto loc_820D2258;
loc_820D21AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x820d0558
	ctx.lr = 0x820D21C0;
	sub_820D0558(ctx, base);
	// b 0x820d2258
	goto loc_820D2258;
loc_820D21C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x820d06c0
	ctx.lr = 0x820D21D4;
	sub_820D06C0(ctx, base);
	// b 0x820d2258
	goto loc_820D2258;
loc_820D21D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x820d2828
	ctx.lr = 0x820D21E4;
	sub_820D2828(ctx, base);
	// b 0x820d2258
	goto loc_820D2258;
loc_820D21E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x820d2b38
	ctx.lr = 0x820D21F4;
	sub_820D2B38(ctx, base);
	// b 0x820d2258
	goto loc_820D2258;
loc_820D21F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x820d24f8
	ctx.lr = 0x820D2204;
	sub_820D24F8(ctx, base);
	// b 0x820d2258
	goto loc_820D2258;
loc_820D2208:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d2698
	ctx.lr = 0x820D2210;
	sub_820D2698(ctx, base);
	// b 0x820d2258
	goto loc_820D2258;
loc_820D2214:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d2710
	ctx.lr = 0x820D221C;
	sub_820D2710(ctx, base);
	// b 0x820d2258
	goto loc_820D2258;
loc_820D2220:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d27b0
	ctx.lr = 0x820D2228;
	sub_820D27B0(ctx, base);
	// b 0x820d2258
	goto loc_820D2258;
loc_820D222C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x820d2270
	ctx.lr = 0x820D2238;
	sub_820D2270(ctx, base);
	// b 0x820d2258
	goto loc_820D2258;
loc_820D223C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x820d23b0
	ctx.lr = 0x820D2248;
	sub_820D23B0(ctx, base);
	// b 0x820d2258
	goto loc_820D2258;
loc_820D224C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-22124
	ctx.r3.s64 = ctx.r11.s64 + -22124;
	// bl 0x821313e0
	ctx.lr = 0x820D2258;
	sub_821313E0(ctx, base);
loc_820D2258:
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

__attribute__((alias("__imp__sub_820D226C"))) PPC_WEAK_FUNC(sub_820D226C);
PPC_FUNC_IMPL(__imp__sub_820D226C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820D2270"))) PPC_WEAK_FUNC(sub_820D2270);
PPC_FUNC_IMPL(__imp__sub_820D2270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x820D2278;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820d23a8
	if (!ctx.cr6.eq) goto loc_820D23A8;
	// bl 0x820cdc88
	ctx.lr = 0x820D2294;
	sub_820CDC88(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822f82c8
	ctx.lr = 0x820D22A0;
	sub_822F82C8(ctx, base);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// rldicl r11,r11,16,48
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 16) & 0xFFFF;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r10,9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9, ctx.xer);
	// bne cr6,0x820d22cc
	if (!ctx.cr6.eq) goto loc_820D22CC;
	// rlwinm. r11,r11,0,24,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820d22cc
	if (ctx.cr0.eq) goto loc_820D22CC;
loc_820D22C0:
	// li r11,3
	ctx.r11.s64 = 3;
loc_820D22C4:
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// b 0x820d23a8
	goto loc_820D23A8;
loc_820D22CC:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r30,r31,72
	ctx.r30.s64 = ctx.r31.s64 + 72;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r5,104(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x822d83f0
	ctx.lr = 0x820D22EC;
	sub_822D83F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,18
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 18, ctx.xer);
	// beq cr6,0x820d22c0
	if (ctx.cr6.eq) goto loc_820D22C0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820d2314
	if (ctx.cr6.eq) goto loc_820D2314;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-21956
	ctx.r3.s64 = ctx.r11.s64 + -21956;
loc_820D2308:
	// bl 0x821313e0
	ctx.lr = 0x820D230C;
	sub_821313E0(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x820d22c4
	goto loc_820D22C4;
loc_820D2314:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x820d4cd8
	ctx.lr = 0x820D231C;
	sub_820D4CD8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// bne 0x820d2338
	if (!ctx.cr0.eq) goto loc_820D2338;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r11,-22032
	ctx.r3.s64 = ctx.r11.s64 + -22032;
	// b 0x820d2308
	goto loc_820D2308;
loc_820D2338:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r7,r31,40
	ctx.r7.s64 = ctx.r31.s64 + 40;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// std r11,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// std r11,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r11.u64);
	// std r11,16(r7)
	PPC_STORE_U64(ctx.r7.u32 + 16, ctx.r11.u64);
	// stw r11,24(r7)
	PPC_STORE_U32(ctx.r7.u32 + 24, ctx.r11.u32);
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822f8ff0
	ctx.lr = 0x820D2368;
	sub_822F8FF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,997
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 997, ctx.xer);
	// beq cr6,0x820d2380
	if (ctx.cr6.eq) goto loc_820D2380;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-22072
	ctx.r3.s64 = ctx.r11.s64 + -22072;
	// b 0x820d2308
	goto loc_820D2308;
loc_820D2380:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,56
	ctx.r5.s64 = 56;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820cdcd8
	ctx.lr = 0x820D23A8;
	sub_820CDCD8(ctx, base);
loc_820D23A8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

