#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_821B56E8"))) PPC_WEAK_FUNC(sub_821B56E8);
PPC_FUNC_IMPL(__imp__sub_821B56E8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,1088
	ctx.r3.s64 = ctx.r11.s64 + 1088;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// oris r10,r10,4096
	ctx.r10.u64 = ctx.r10.u64 | 268435456;
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// b 0x822ee4b0
	sub_822EE4B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B5704"))) PPC_WEAK_FUNC(sub_821B5704);
PPC_FUNC_IMPL(__imp__sub_821B5704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B5708"))) PPC_WEAK_FUNC(sub_821B5708);
PPC_FUNC_IMPL(__imp__sub_821B5708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e0
	ctx.lr = 0x821B5710;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B5738;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r27,0(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r27,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b5848
	if (ctx.cr0.eq) goto loc_821B5848;
	// rlwinm. r11,r26,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821b5848
	if (!ctx.cr0.eq) goto loc_821B5848;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821b5790
	if (ctx.cr6.eq) goto loc_821B5790;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// lwz r4,-29680(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29680);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_821B5768:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821b5768
	if (!ctx.cr6.eq) goto loc_821B5768;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x821B5790;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821B5790:
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r10,r27,0,27,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B57B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// bl 0x8229bd98
	ctx.lr = 0x821B57D4;
	sub_8229BD98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821b5850
	if (ctx.cr6.eq) goto loc_821B5850;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x821b580c
	if (ctx.cr6.lt) goto loc_821B580C;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// lwz r4,-29684(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29684);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_821B57F8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821b57f8
	if (!ctx.cr6.eq) goto loc_821B57F8;
	// b 0x821b582c
	goto loc_821B582C;
loc_821B580C:
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// lwz r4,-29688(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29688);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_821B581C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821b581c
	if (!ctx.cr6.eq) goto loc_821B581C;
loc_821B582C:
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x821B5844;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x821b5850
	goto loc_821B5850;
loc_821B5848:
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// ori r31,r31,16389
	ctx.r31.u64 = ctx.r31.u64 | 16389;
loc_821B5850:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e9930
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B585C"))) PPC_WEAK_FUNC(sub_821B585C);
PPC_FUNC_IMPL(__imp__sub_821B585C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B5860"))) PPC_WEAK_FUNC(sub_821B5860);
PPC_FUNC_IMPL(__imp__sub_821B5860) {
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821b5688
	ctx.lr = 0x821B5890;
	sub_821B5688(ctx, base);
	// lwz r11,1420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821b58c0
	if (ctx.cr0.eq) goto loc_821B58C0;
	// cmpwi cr6,r30,3537
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3537, ctx.xer);
	// beq cr6,0x821b58c0
	if (ctx.cr6.eq) goto loc_821B58C0;
	// lwz r3,1416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1416);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r30,-1100
	ctx.r6.s64 = ctx.r30.s64 + -1100;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B58C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821B58C0:
	// cmpwi cr6,r30,3517
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3517, ctx.xer);
	// beq cr6,0x821b58fc
	if (ctx.cr6.eq) goto loc_821B58FC;
	// cmpwi cr6,r30,3525
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3525, ctx.xer);
	// beq cr6,0x821b5908
	if (ctx.cr6.eq) goto loc_821B5908;
	// cmpwi cr6,r30,3527
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3527, ctx.xer);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// beq cr6,0x821b58f4
	if (ctx.cr6.eq) goto loc_821B58F4;
	// cmpwi cr6,r30,3537
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3537, ctx.xer);
	// beq cr6,0x821b58ec
	if (ctx.cr6.eq) goto loc_821B58EC;
	// ori r11,r11,16389
	ctx.r11.u64 = ctx.r11.u64 | 16389;
	// b 0x821b5904
	goto loc_821B5904;
loc_821B58EC:
	// ori r11,r11,16385
	ctx.r11.u64 = ctx.r11.u64 | 16385;
	// b 0x821b5904
	goto loc_821B5904;
loc_821B58F4:
	// ori r11,r11,16388
	ctx.r11.u64 = ctx.r11.u64 | 16388;
	// b 0x821b5904
	goto loc_821B5904;
loc_821B58FC:
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
loc_821B5904:
	// stw r11,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r11.u32);
loc_821B5908:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,1088
	ctx.r3.s64 = ctx.r31.s64 + 1088;
	// bl 0x822ee4b0
	ctx.lr = 0x821B5914;
	sub_822EE4B0(ctx, base);
}

__attribute__((alias("__imp__sub_821B5914"))) PPC_WEAK_FUNC(sub_821B5914);
PPC_FUNC_IMPL(__imp__sub_821B5914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B5918"))) PPC_WEAK_FUNC(sub_821B5918);
PPC_FUNC_IMPL(__imp__sub_821B5918) {
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
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,416
	ctx.r10.s64 = ctx.r1.s64 + 416;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821b5688
	ctx.lr = 0x821B596C;
	sub_821B5688(ctx, base);
	// lwz r11,1420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821b5994
	if (ctx.cr0.eq) goto loc_821B5994;
	// lwz r3,1416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1416);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r30,-1100
	ctx.r6.s64 = ctx.r30.s64 + -1100;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B5994;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821B5994:
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

__attribute__((alias("__imp__sub_821B59AC"))) PPC_WEAK_FUNC(sub_821B59AC);
PPC_FUNC_IMPL(__imp__sub_821B59AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B59B0"))) PPC_WEAK_FUNC(sub_821B59B0);
PPC_FUNC_IMPL(__imp__sub_821B59B0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFF000;
	// cmplwi cr6,r5,132
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 132, ctx.xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// ble cr6,0x821b59f0
	if (!ctx.cr6.gt) goto loc_821B59F0;
	// addi r3,r4,-12
	ctx.r3.s64 = ctx.r4.s64 + -12;
	// lis r4,24973
	ctx.r4.s64 = 1636630528;
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x822f99b8
	sub_822F99B8(ctx, base);
	return;
loc_821B59F0:
	// rlwinm r11,r5,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// stwx r4,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B5A0C"))) PPC_WEAK_FUNC(sub_821B5A0C);
PPC_FUNC_IMPL(__imp__sub_821B5A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B5A10"))) PPC_WEAK_FUNC(sub_821B5A10);
PPC_FUNC_IMPL(__imp__sub_821B5A10) {
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
	// bl 0x821b5860
	ctx.lr = 0x821B5A48;
	sub_821B5860(ctx, base);
}

__attribute__((alias("__imp__sub_821B5A48"))) PPC_WEAK_FUNC(sub_821B5A48);
PPC_FUNC_IMPL(__imp__sub_821B5A48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
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
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,432
	ctx.r10.s64 = ctx.r1.s64 + 432;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x822ecd78
	ctx.lr = 0x821B5A94;
	sub_822ECD78(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,3542
	ctx.r4.s64 = 3542;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b5a10
	ctx.lr = 0x821B5AA4;
	sub_821B5A10(ctx, base);
}

__attribute__((alias("__imp__sub_821B5AA4"))) PPC_WEAK_FUNC(sub_821B5AA4);
PPC_FUNC_IMPL(__imp__sub_821B5AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B5AA8"))) PPC_WEAK_FUNC(sub_821B5AA8);
PPC_FUNC_IMPL(__imp__sub_821B5AA8) {
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
	// bl 0x82133760
	ctx.lr = 0x821B5AC8;
	sub_82133760(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b5ae4
	if (ctx.cr0.eq) goto loc_821B5AE4;
	// rlwinm r11,r31,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFF000;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
loc_821B5AE4:
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

__attribute__((alias("__imp__sub_821B5B00"))) PPC_WEAK_FUNC(sub_821B5B00);
PPC_FUNC_IMPL(__imp__sub_821B5B00) {
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
	// addi r31,r3,152
	ctx.r31.s64 = ctx.r3.s64 + 152;
loc_821B5B14:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821b5b58
	if (!ctx.cr0.eq) goto loc_821B5B58;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b5b58
	if (ctx.cr0.eq) goto loc_821B5B58;
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r4,24973
	ctx.r4.s64 = 1636630528;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x822f99b8
	ctx.lr = 0x821B5B54;
	sub_822F99B8(ctx, base);
	// b 0x821b5b14
	goto loc_821B5B14;
loc_821B5B58:
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

__attribute__((alias("__imp__sub_821B5B6C"))) PPC_WEAK_FUNC(sub_821B5B6C);
PPC_FUNC_IMPL(__imp__sub_821B5B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B5B70"))) PPC_WEAK_FUNC(sub_821B5B70);
PPC_FUNC_IMPL(__imp__sub_821B5B70) {
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
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b5bac
	if (ctx.cr0.eq) goto loc_821B5BAC;
loc_821B5B94:
	// lis r4,-24435
	ctx.r4.s64 = -1601372160;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x822f99b8
	ctx.lr = 0x821B5BA0;
	sub_822F99B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821b5b94
	if (!ctx.cr6.eq) goto loc_821B5B94;
loc_821B5BAC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b5b00
	ctx.lr = 0x821B5BB4;
	sub_821B5B00(ctx, base);
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

__attribute__((alias("__imp__sub_821B5BCC"))) PPC_WEAK_FUNC(sub_821B5BCC);
PPC_FUNC_IMPL(__imp__sub_821B5BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B5BD0"))) PPC_WEAK_FUNC(sub_821B5BD0);
PPC_FUNC_IMPL(__imp__sub_821B5BD0) {
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
	// lwz r30,132(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// b 0x821b5c00
	goto loc_821B5C00;
loc_821B5BF0:
	// li r5,4088
	ctx.r5.s64 = 4088;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x822e9ff0
	ctx.lr = 0x821B5BFC;
	sub_822E9FF0(ctx, base);
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_821B5C00:
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// bne 0x821b5bf0
	if (!ctx.cr0.eq) goto loc_821B5BF0;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// li r5,132
	ctx.r5.s64 = 132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// stw r10,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r10.u32);
	// bl 0x822e9ff0
	ctx.lr = 0x821B5C28;
	sub_822E9FF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b5b00
	ctx.lr = 0x821B5C30;
	sub_821B5B00(ctx, base);
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

__attribute__((alias("__imp__sub_821B5C48"))) PPC_WEAK_FUNC(sub_821B5C48);
PPC_FUNC_IMPL(__imp__sub_821B5C48) {
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
	// lis r4,-8051
	ctx.r4.s64 = -527630336;
	// li r3,4096
	ctx.r3.s64 = 4096;
	// bl 0x822f9920
	ctx.lr = 0x821B5C68;
	sub_822F9920(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821b5c7c
	if (!ctx.cr0.eq) goto loc_821B5C7C;
	// li r4,3517
	ctx.r4.s64 = 3517;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x821b5a10
	ctx.lr = 0x821B5C7C;
	sub_821B5A10(ctx, base);
loc_821B5C7C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_821B5C9C"))) PPC_WEAK_FUNC(sub_821B5C9C);
PPC_FUNC_IMPL(__imp__sub_821B5C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B5CA0"))) PPC_WEAK_FUNC(sub_821B5CA0);
PPC_FUNC_IMPL(__imp__sub_821B5CA0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821b5e38
	if (ctx.cr6.eq) goto loc_821B5E38;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// addi r9,r10,-114
	ctx.r9.s64 = ctx.r10.s64 + -114;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm. r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x821b5e38
	if (!ctx.cr0.eq) goto loc_821B5E38;
	// cmplwi cr6,r10,124
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 124, ctx.xer);
	// beq cr6,0x821b5cfc
	if (ctx.cr6.eq) goto loc_821B5CFC;
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821b5e3c
	if (!ctx.cr0.eq) goto loc_821B5E3C;
loc_821B5CFC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_821B5D00:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x821b5d6c
	if (!ctx.cr0.eq) goto loc_821B5D6C;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-36
	ctx.xer.ca = ctx.r11.u32 > 35;
	ctx.r11.s64 = ctx.r11.s64 + -36;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b5d6c
	if (ctx.cr0.eq) goto loc_821B5D6C;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r10,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,15872
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 15872, ctx.xer);
	// beq cr6,0x821b5d00
	if (ctx.cr6.eq) goto loc_821B5D00;
	// rlwinm r10,r10,13,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
	// addi r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 + 10;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x821b5d00
	if (ctx.cr0.eq) goto loc_821B5D00;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r10,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,15872
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 15872, ctx.xer);
	// beq cr6,0x821b5d6c
	if (ctx.cr6.eq) goto loc_821B5D6C;
	// rlwinm r10,r10,13,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
	// addi r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 + 10;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821b5e3c
	if (!ctx.cr0.eq) goto loc_821B5E3C;
loc_821B5D6C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_821B5D70:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x821b5dd8
	if (!ctx.cr0.eq) goto loc_821B5DD8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b5dd8
	if (ctx.cr6.eq) goto loc_821B5DD8;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r10,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,15872
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 15872, ctx.xer);
	// beq cr6,0x821b5d70
	if (ctx.cr6.eq) goto loc_821B5D70;
	// rlwinm r10,r10,13,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
	// addi r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 + 10;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x821b5d70
	if (ctx.cr0.eq) goto loc_821B5D70;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r10,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,15872
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 15872, ctx.xer);
	// beq cr6,0x821b5dd8
	if (ctx.cr6.eq) goto loc_821B5DD8;
	// rlwinm r10,r10,13,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
	// addi r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 + 10;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821b5e3c
	if (!ctx.cr0.eq) goto loc_821B5E3C;
loc_821B5DD8:
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b5e38
	if (ctx.cr0.eq) goto loc_821B5E38;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821b5df4
	if (ctx.cr0.eq) goto loc_821B5DF4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821B5DF4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b5ca0
	ctx.lr = 0x821B5E04;
	sub_821B5CA0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821b5e3c
	if (!ctx.cr0.eq) goto loc_821B5E3C;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821b5e20
	if (ctx.cr0.eq) goto loc_821B5E20;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821B5E20:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b5ca0
	ctx.lr = 0x821B5E30;
	sub_821B5CA0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821b5e3c
	if (!ctx.cr0.eq) goto loc_821B5E3C;
loc_821B5E38:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B5E3C:
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

__attribute__((alias("__imp__sub_821B5E54"))) PPC_WEAK_FUNC(sub_821B5E54);
PPC_FUNC_IMPL(__imp__sub_821B5E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B5E58"))) PPC_WEAK_FUNC(sub_821B5E58);
PPC_FUNC_IMPL(__imp__sub_821B5E58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,18140(r16)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r16.u32 + 18140);
	// lwz r16,-16888(r6)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16888);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,736(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 736);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b5ea4
	if (ctx.cr0.eq) goto loc_821B5EA4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821b5aa8
	ctx.lr = 0x821B5E9C;
	sub_821B5AA8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,736(r30)
	PPC_STORE_U32(ctx.r30.u32 + 736, ctx.r11.u32);
loc_821B5EA4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x821b5eb8
	// ERROR 821B5EB8
	return;
}

__attribute__((alias("__imp__sub_821B5E60"))) PPC_WEAK_FUNC(sub_821B5E60);
PPC_FUNC_IMPL(__imp__sub_821B5E60) {
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
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,736(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 736);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b5ea4
	if (ctx.cr0.eq) goto loc_821B5EA4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821b5aa8
	ctx.lr = 0x821B5E9C;
	sub_821B5AA8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,736(r30)
	PPC_STORE_U32(ctx.r30.u32 + 736, ctx.r11.u32);
loc_821B5EA4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x821b5eb8
	goto loc_821B5EB8;
	// lwz r30,132(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
loc_821B5EB8:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,732(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 732);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b5edc
	if (ctx.cr0.eq) goto loc_821B5EDC;
	// bl 0x820edd20
	ctx.lr = 0x821B5ED4;
	sub_820EDD20(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,732(r30)
	PPC_STORE_U32(ctx.r30.u32 + 732, ctx.r11.u32);
loc_821B5EDC:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x821b5ef0
	goto loc_821B5EF0;
	// lwz r30,132(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
loc_821B5EF0:
	// addi r3,r30,764
	ctx.r3.s64 = ctx.r30.s64 + 764;
	// bl 0x821b5b70
	ctx.lr = 0x821B5EF8;
	sub_821B5B70(ctx, base);
	// addi r3,r30,924
	ctx.r3.s64 = ctx.r30.s64 + 924;
	// bl 0x821b5b70
	ctx.lr = 0x821B5F00;
	sub_821B5B70(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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

__attribute__((alias("__imp__sub_821B5EB4"))) PPC_WEAK_FUNC(sub_821B5EB4);
PPC_FUNC_IMPL(__imp__sub_821B5EB4) {
	PPC_FUNC_PROLOGUE();
	// lwz r30,132(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,732(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 732);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b5edc
	if (ctx.cr0.eq) goto loc_821B5EDC;
	// bl 0x820edd20
	ctx.lr = 0x821B5ED4;
	sub_820EDD20(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,732(r30)
	PPC_STORE_U32(ctx.r30.u32 + 732, ctx.r11.u32);
loc_821B5EDC:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x821b5ef0
	// ERROR 821B5EF0
	return;
}

__attribute__((alias("__imp__sub_821B5EEC"))) PPC_WEAK_FUNC(sub_821B5EEC);
PPC_FUNC_IMPL(__imp__sub_821B5EEC) {
	PPC_FUNC_PROLOGUE();
	// lwz r30,132(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r3,r30,764
	ctx.r3.s64 = ctx.r30.s64 + 764;
	// bl 0x821b5b70
	ctx.lr = 0x821B5EF8;
	sub_821B5B70(ctx, base);
	// addi r3,r30,924
	ctx.r3.s64 = ctx.r30.s64 + 924;
	// bl 0x821b5b70
	ctx.lr = 0x821B5F00;
	sub_821B5B70(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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

__attribute__((alias("__imp__sub_821B5F18"))) PPC_WEAK_FUNC(sub_821B5F18);
PPC_FUNC_IMPL(__imp__sub_821B5F18) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B5F24"))) PPC_WEAK_FUNC(sub_821B5F24);
PPC_FUNC_IMPL(__imp__sub_821B5F24) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B5F30"))) PPC_WEAK_FUNC(sub_821B5F30);
PPC_FUNC_IMPL(__imp__sub_821B5F30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98d8
	ctx.lr = 0x821B5F38;
	__savegprlr_24(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// andis. r11,r11,5
	ctx.r11.u64 = ctx.r11.u64 & 327680;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821b5f64
	if (ctx.cr0.eq) goto loc_821B5F64;
	// bl 0x8221a088
	ctx.lr = 0x821B5F64;
	sub_8221A088(ctx, base);
loc_821B5F64:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82237cf0
	ctx.lr = 0x821B5F6C;
	sub_82237CF0(ctx, base);
	// addi r30,r31,924
	ctx.r30.s64 = ctx.r31.s64 + 924;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b5bd0
	ctx.lr = 0x821B5F78;
	sub_821B5BD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82213b90
	ctx.lr = 0x821B5F80;
	sub_82213B90(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b5bd0
	ctx.lr = 0x821B5F88;
	sub_821B5BD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220c240
	ctx.lr = 0x821B5F90;
	sub_8220C240(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b5bd0
	ctx.lr = 0x821B5F98;
	sub_821B5BD0(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b5fc0
	if (ctx.cr6.eq) goto loc_821B5FC0;
	// stw r27,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r27.u32);
	// stw r27,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r27.u32);
	// stw r27,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r27.u32);
	// stw r27,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r27.u32);
	// stw r27,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r27.u32);
	// stw r27,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r27.u32);
loc_821B5FC0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f6f00
	ctx.lr = 0x821B5FC8;
	sub_821F6F00(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b5bd0
	ctx.lr = 0x821B5FD0;
	sub_821B5BD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f5248
	ctx.lr = 0x821B5FD8;
	sub_821F5248(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b5bd0
	ctx.lr = 0x821B5FE0;
	sub_821B5BD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ee210
	ctx.lr = 0x821B5FE8;
	sub_821EE210(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b5bd0
	ctx.lr = 0x821B5FF0;
	sub_821B5BD0(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b6004
	if (ctx.cr6.eq) goto loc_821B6004;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eb2b0
	ctx.lr = 0x821B6004;
	sub_821EB2B0(ctx, base);
loc_821B6004:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b6018
	if (ctx.cr0.eq) goto loc_821B6018;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821dd068
	ctx.lr = 0x821B6018;
	sub_821DD068(ctx, base);
loc_821B6018:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d83c0
	ctx.lr = 0x821B6020;
	sub_821D83C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b6030
	if (ctx.cr0.eq) goto loc_821B6030;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d7af8
	ctx.lr = 0x821B6030;
	sub_821D7AF8(ctx, base);
loc_821B6030:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821b6064
	if (ctx.cr0.eq) goto loc_821B6064;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b605c
	if (ctx.cr6.eq) goto loc_821B605C;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_821B605C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c8b68
	ctx.lr = 0x821B6064;
	sub_821C8B68(ctx, base);
loc_821B6064:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821b607c
	if (ctx.cr0.eq) goto loc_821B607C;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x821b6080
	if (ctx.cr0.eq) goto loc_821B6080;
loc_821B607C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_821B6080:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b6090
	if (ctx.cr0.eq) goto loc_821B6090;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d1f20
	ctx.lr = 0x821B6090;
	sub_821D1F20(ctx, base);
loc_821B6090:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d1008
	ctx.lr = 0x821B6098;
	sub_821D1008(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821cf730
	ctx.lr = 0x821B60A0;
	sub_821CF730(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b5bd0
	ctx.lr = 0x821B60A8;
	sub_821B5BD0(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b60cc
	if (ctx.cr6.eq) goto loc_821B60CC;
	// stw r27,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r27.u32);
	// stw r27,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r27.u32);
	// stw r27,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r27.u32);
	// stw r27,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r27.u32);
	// stw r27,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r27.u32);
	// stw r27,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r27.u32);
loc_821B60CC:
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821cb4c0
	ctx.lr = 0x821B60E4;
	sub_821CB4C0(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821b623c
	if (!ctx.cr0.eq) goto loc_821B623C;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b614c
	if (ctx.cr0.eq) goto loc_821B614C;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// beq 0x821b613c
	if (ctx.cr0.eq) goto loc_821B613C;
	// bctrl 
	ctx.lr = 0x821B6134;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x821cefb0
	ctx.lr = 0x821B6138;
	sub_821CEFB0(ctx, base);
	// b 0x821b6144
	goto loc_821B6144;
loc_821B613C:
	// bctrl 
	ctx.lr = 0x821B6140;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x821cefb8
	ctx.lr = 0x821B6144;
	sub_821CEFB8(ctx, base);
loc_821B6144:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821b623c
	if (!ctx.cr6.eq) goto loc_821B623C;
loc_821B614C:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,744(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 744);
	// rlwinm r29,r10,10,15,21
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1FC00;
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b6164
	if (ctx.cr0.eq) goto loc_821B6164;
	// oris r29,r29,4
	ctx.r29.u64 = ctx.r29.u64 | 262144;
loc_821B6164:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r26,r11,32488
	ctx.r26.s64 = ctx.r11.s64 + 32488;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B618C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B61A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// bl 0x8229bd98
	ctx.lr = 0x821B61BC;
	sub_8229BD98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x821b623c
	if (!ctx.cr0.lt) goto loc_821B623C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,32488
	ctx.r5.s64 = ctx.r11.s64 + 32488;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821b5708
	ctx.lr = 0x821B61DC;
	sub_821B5708(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x821b623c
	if (!ctx.cr0.lt) goto loc_821B623C;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B61F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// stw r27,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r27.u32);
	// beq cr6,0x821b6224
	if (ctx.cr6.eq) goto loc_821B6224;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b6224
	if (ctx.cr0.eq) goto loc_821B6224;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B6220;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r27,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r27.u32);
loc_821B6224:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r4,3551
	ctx.r4.s64 = 3551;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm. r11,r11,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b6244
	if (ctx.cr0.eq) goto loc_821B6244;
	// bl 0x821b5918
	ctx.lr = 0x821B623C;
	sub_821B5918(ctx, base);
loc_821B623C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822e9928
	__restgprlr_24(ctx, base);
	return;
loc_821B6244:
	// bl 0x821b5a10
	ctx.lr = 0x821B6248;
	sub_821B5A10(ctx, base);
}

__attribute__((alias("__imp__sub_821B6248"))) PPC_WEAK_FUNC(sub_821B6248);
PPC_FUNC_IMPL(__imp__sub_821B6248) {
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
	// li r5,132
	ctx.r5.s64 = 132;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822e9ff0
	ctx.lr = 0x821B6270;
	sub_822E9FF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b5c48
	ctx.lr = 0x821B6278;
	sub_821B5C48(ctx, base);
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// addi r11,r31,152
	ctx.r11.s64 = ctx.r31.s64 + 152;
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r3,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r3.u32);
	// ori r8,r11,1
	ctx.r8.u64 = ctx.r11.u64 | 1;
	// stw r3,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r3.u32);
	// stw r9,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r9.u32);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_821B62C0"))) PPC_WEAK_FUNC(sub_821B62C0);
PPC_FUNC_IMPL(__imp__sub_821B62C0) {
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
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// ori r10,r31,1
	ctx.r10.u64 = ctx.r31.u64 | 1;
	// ori r9,r11,1
	ctx.r9.u64 = ctx.r11.u64 | 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,764
	ctx.r3.s64 = ctx.r31.s64 + 764;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x821b6248
	ctx.lr = 0x821B62F4;
	sub_821B6248(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,924
	ctx.r3.s64 = ctx.r31.s64 + 924;
	// bl 0x821b6248
	ctx.lr = 0x821B6300;
	sub_821B6248(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r10,740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 740, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_821B6324"))) PPC_WEAK_FUNC(sub_821B6324);
PPC_FUNC_IMPL(__imp__sub_821B6324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B6328"))) PPC_WEAK_FUNC(sub_821B6328);
PPC_FUNC_IMPL(__imp__sub_821B6328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98d4
	ctx.lr = 0x821B6330;
	__savegprlr_23(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x821b6364
	if (ctx.cr6.eq) goto loc_821B6364;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_821B6364:
	// lwz r30,356(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lis r29,-1
	ctx.r29.s64 = -65536;
	// stw r23,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r23.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r28,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r28.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// beq cr6,0x821b642c
	if (ctx.cr6.eq) goto loc_821B642C;
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r6,64
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 64, ctx.xer);
	// stw r6,744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 744, ctx.r6.u32);
	// ble cr6,0x821b63a0
	if (!ctx.cr6.gt) goto loc_821B63A0;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,3589
	ctx.r4.s64 = 3589;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b5a10
	ctx.lr = 0x821B63A0;
	sub_821B5A10(ctx, base);
loc_821B63A0:
	// rlwinm r11,r28,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFF0000;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b63d8
	if (ctx.cr0.eq) goto loc_821B63D8;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r11,752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 752, ctx.r11.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r11,756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 756, ctx.r11.u32);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// b 0x821b63ec
	goto loc_821B63EC;
loc_821B63D8:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r11,752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 752, ctx.r11.u32);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stw r11,756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 756, ctx.r11.u32);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
loc_821B63EC:
	// stw r11,760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 760, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b6408
	if (ctx.cr0.eq) goto loc_821B6408;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_821B6408:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821b642c
	if (ctx.cr6.eq) goto loc_821B642C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b642c
	if (ctx.cr0.eq) goto loc_821B642C;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x821af938
	ctx.lr = 0x821B642C;
	sub_821AF938(ctx, base);
loc_821B642C:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x821b6470
	if (ctx.cr0.eq) goto loc_821B6470;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821b6464
	if (ctx.cr0.eq) goto loc_821B6464;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b6470
	if (ctx.cr0.eq) goto loc_821B6470;
loc_821B6464:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_821B6470:
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b64a0
	if (ctx.cr0.eq) goto loc_821B64A0;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821b64a0
	if (ctx.cr0.eq) goto loc_821B64A0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b64a0
	if (ctx.cr0.eq) goto loc_821B64A0;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_821B64A0:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82254bf0
	ctx.lr = 0x821B64B0;
	sub_82254BF0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x821b64c8
	if (!ctx.cr0.eq) goto loc_821B64C8;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,3501
	ctx.r4.s64 = 3501;
	// bl 0x821b5a10
	ctx.lr = 0x821B64C8;
	sub_821B5A10(ctx, base);
loc_821B64C8:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// bl 0x822521c8
	ctx.lr = 0x821B64D0;
	sub_822521C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223add8
	ctx.lr = 0x821B64D8;
	sub_8223ADD8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821b64e8
	if (ctx.cr0.eq) goto loc_821B64E8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821B64E8:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x821b6508
	if (!ctx.cr0.eq) goto loc_821B6508;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b6508
	if (ctx.cr6.eq) goto loc_821B6508;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82239370
	ctx.lr = 0x821B6508;
	sub_82239370(ctx, base);
loc_821B6508:
	// addi r3,r31,924
	ctx.r3.s64 = ctx.r31.s64 + 924;
	// bl 0x821b5bd0
	ctx.lr = 0x821B6510;
	sub_821B5BD0(ctx, base);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lwz r7,348(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r6,340(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b5f30
	ctx.lr = 0x821B652C;
	sub_821B5F30(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822e9924
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B6534"))) PPC_WEAK_FUNC(sub_821B6534);
PPC_FUNC_IMPL(__imp__sub_821B6534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B6538"))) PPC_WEAK_FUNC(sub_821B6538);
PPC_FUNC_IMPL(__imp__sub_821B6538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x821B6540;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// oris r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 65536;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x82255678
	ctx.lr = 0x821B6568;
	sub_82255678(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223add8
	ctx.lr = 0x821B6570;
	sub_8223ADD8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821b6580
	if (ctx.cr0.eq) goto loc_821B6580;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821B6580:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x821b65a0
	if (!ctx.cr0.eq) goto loc_821B65A0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b65a0
	if (ctx.cr6.eq) goto loc_821B65A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82239370
	ctx.lr = 0x821B65A0;
	sub_82239370(ctx, base);
loc_821B65A0:
	// addi r3,r31,924
	ctx.r3.s64 = ctx.r31.s64 + 924;
	// bl 0x821b5bd0
	ctx.lr = 0x821B65A8;
	sub_821B5BD0(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,7
	ctx.r10.s64 = 7;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821B65B8:
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x821b65b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B65B8;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lis r4,-1
	ctx.r4.s64 = -65536;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821b65f0
	if (!ctx.cr0.eq) goto loc_821B65F0;
	// lis r4,-2
	ctx.r4.s64 = -131072;
loc_821B65F0:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b5f30
	ctx.lr = 0x821B6608;
	sub_821B5F30(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821b6618
	if (ctx.cr6.eq) goto loc_821B6618;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
loc_821B6618:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B6620"))) PPC_WEAK_FUNC(sub_821B6620);
PPC_FUNC_IMPL(__imp__sub_821B6620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,18140(r16)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r16.u32 + 18140);
	// lwz r16,-16848(r6)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16848);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x821B6630;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-192
	ctx.r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r3.u32);
	// stw r5,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r5.u32);
	// stw r6,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r6.u32);
	// stw r7,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r7.u32);
	// stw r8,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r8.u32);
	// stw r9,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r9.u32);
	// stw r10,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r10.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r27,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r27.u32);
	// stw r27,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r27.u32);
	// stb r27,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r27.u8);
	// rlwinm r11,r4,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r28,129
	ctx.r28.s64 = 129;
	// li r29,1
	ctx.r29.s64 = 1;
loc_821B667C:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// rlwimi r11,r28,16,8,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r28.u32, 16) & 0xFF0000) | (ctx.r11.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// li r3,1424
	ctx.r3.s64 = 1424;
	// rlwimi r11,r29,26,4,7
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 26) & 0xF000000) | (ctx.r11.u64 & 0xFFFFFFFFF0FFFFFF);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// rlwimi r11,r29,29,2,3
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 29) & 0x30000000) | (ctx.r11.u64 & 0xFFFFFFFFCFFFFFFF);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// rlwinm r11,r11,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// rlwinm r11,r11,0,0,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFE000;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// rlwinm r11,r11,0,19,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// rlwinm r11,r11,0,18,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// rlwinm r4,r11,0,17,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// stw r4,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r4.u32);
	// bl 0x822f9920
	ctx.lr = 0x821B66D0;
	sub_822F9920(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// bne 0x821b66f0
	if (!ctx.cr0.eq) goto loc_821B66F0;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r3,r11,14
	ctx.r3.u64 = ctx.r11.u64 | 14;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x821b68c0
	// ERROR 821B68C0
	return;
loc_821B66F0:
	// li r5,1424
	ctx.r5.s64 = 1424;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e9ff0
	ctx.lr = 0x821B6700;
	sub_822E9FF0(ctx, base);
	// lwz r11,284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// stw r11,1416(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1416, ctx.r11.u32);
	// lwz r11,292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// stw r11,1420(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1420, ctx.r11.u32);
	// addi r3,r30,1088
	ctx.r3.s64 = ctx.r30.s64 + 1088;
	// bl 0x822ee5d0
	ctx.lr = 0x821B6718;
	sub_822EE5D0(ctx, base);
	// stw r3,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r30,124(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// bne 0x821b677c
	if (!ctx.cr0.eq) goto loc_821B677C;
	// lwz r5,292(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// lwz r4,284(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b62c0
	ctx.lr = 0x821B6738;
	sub_821B62C0(ctx, base);
	// stb r29,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r29.u8);
	// lwz r10,260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r9,252(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r8,244(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r7,236(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r6,228(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// lwz r5,220(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r4,212(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b6328
	ctx.lr = 0x821B6778;
	sub_821B6328(ctx, base);
	// b 0x821b6838
	goto loc_821B6838;
loc_821B677C:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b681c
	if (ctx.cr0.eq) goto loc_821B681C;
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r10,220(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821b6810
	if (ctx.cr6.eq) goto loc_821B6810;
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// ori r4,r4,16389
	ctx.r4.u64 = ctx.r4.u64 | 16389;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b5e60
	ctx.lr = 0x821B67AC;
	sub_821B5E60(ctx, base);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// rlwimi r11,r28,16,8,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r28.u32, 16) & 0xFF0000) | (ctx.r11.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// rlwimi r11,r29,26,4,7
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 26) & 0xF000000) | (ctx.r11.u64 & 0xFFFFFFFFF0FFFFFF);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// rlwimi r11,r29,29,2,3
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 29) & 0x30000000) | (ctx.r11.u64 & 0xFFFFFFFFCFFFFFFF);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// rlwinm r11,r11,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// rlwinm r11,r11,0,0,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFE000;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// rlwinm r11,r11,0,19,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// rlwinm r11,r11,0,18,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// rlwinm r4,r11,0,17,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// stw r4,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f99b8
	ctx.lr = 0x821B6800;
	sub_822F99B8(ctx, base);
	// stw r27,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r27.u32);
	// stb r27,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r27.u8);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x821b667c
	goto loc_821B667C;
loc_821B6810:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r11,1408(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1408, ctx.r11.u32);
loc_821B681C:
	// lwz r11,1408(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1408);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x821b6838
	if (ctx.cr0.lt) goto loc_821B6838;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
loc_821B6838:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x821b686c
	// ERROR 821B686C
	return;
}

__attribute__((alias("__imp__sub_821B6628"))) PPC_WEAK_FUNC(sub_821B6628);
PPC_FUNC_IMPL(__imp__sub_821B6628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x821B6630;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-192
	ctx.r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r3.u32);
	// stw r5,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r5.u32);
	// stw r6,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r6.u32);
	// stw r7,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r7.u32);
	// stw r8,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r8.u32);
	// stw r9,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r9.u32);
	// stw r10,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r10.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r27,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r27.u32);
	// stw r27,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r27.u32);
	// stb r27,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r27.u8);
	// rlwinm r11,r4,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r28,129
	ctx.r28.s64 = 129;
	// li r29,1
	ctx.r29.s64 = 1;
loc_821B667C:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// rlwimi r11,r28,16,8,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r28.u32, 16) & 0xFF0000) | (ctx.r11.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// li r3,1424
	ctx.r3.s64 = 1424;
	// rlwimi r11,r29,26,4,7
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 26) & 0xF000000) | (ctx.r11.u64 & 0xFFFFFFFFF0FFFFFF);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// rlwimi r11,r29,29,2,3
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 29) & 0x30000000) | (ctx.r11.u64 & 0xFFFFFFFFCFFFFFFF);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// rlwinm r11,r11,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// rlwinm r11,r11,0,0,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFE000;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// rlwinm r11,r11,0,19,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// rlwinm r11,r11,0,18,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// rlwinm r4,r11,0,17,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// stw r4,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r4.u32);
	// bl 0x822f9920
	ctx.lr = 0x821B66D0;
	sub_822F9920(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// bne 0x821b66f0
	if (!ctx.cr0.eq) goto loc_821B66F0;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r3,r11,14
	ctx.r3.u64 = ctx.r11.u64 | 14;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x821b68c0
	goto loc_821B68C0;
loc_821B66F0:
	// li r5,1424
	ctx.r5.s64 = 1424;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e9ff0
	ctx.lr = 0x821B6700;
	sub_822E9FF0(ctx, base);
	// lwz r11,284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// stw r11,1416(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1416, ctx.r11.u32);
	// lwz r11,292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// stw r11,1420(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1420, ctx.r11.u32);
	// addi r3,r30,1088
	ctx.r3.s64 = ctx.r30.s64 + 1088;
	// bl 0x822ee5d0
	ctx.lr = 0x821B6718;
	sub_822EE5D0(ctx, base);
	// stw r3,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r30,124(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// bne 0x821b677c
	if (!ctx.cr0.eq) goto loc_821B677C;
	// lwz r5,292(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// lwz r4,284(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b62c0
	ctx.lr = 0x821B6738;
	sub_821B62C0(ctx, base);
	// stb r29,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r29.u8);
	// lwz r10,260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r9,252(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r8,244(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r7,236(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r6,228(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// lwz r5,220(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r4,212(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b6328
	ctx.lr = 0x821B6778;
	sub_821B6328(ctx, base);
	// b 0x821b6838
	goto loc_821B6838;
loc_821B677C:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b681c
	if (ctx.cr0.eq) goto loc_821B681C;
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r10,220(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821b6810
	if (ctx.cr6.eq) goto loc_821B6810;
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// ori r4,r4,16389
	ctx.r4.u64 = ctx.r4.u64 | 16389;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b5e60
	ctx.lr = 0x821B67AC;
	sub_821B5E60(ctx, base);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// rlwimi r11,r28,16,8,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r28.u32, 16) & 0xFF0000) | (ctx.r11.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// rlwimi r11,r29,26,4,7
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 26) & 0xF000000) | (ctx.r11.u64 & 0xFFFFFFFFF0FFFFFF);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// rlwimi r11,r29,29,2,3
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 29) & 0x30000000) | (ctx.r11.u64 & 0xFFFFFFFFCFFFFFFF);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// rlwinm r11,r11,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// rlwinm r11,r11,0,0,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFE000;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// rlwinm r11,r11,0,19,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// rlwinm r11,r11,0,18,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// rlwinm r4,r11,0,17,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// stw r4,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f99b8
	ctx.lr = 0x821B6800;
	sub_822F99B8(ctx, base);
	// stw r27,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r27.u32);
	// stb r27,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r27.u8);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x821b667c
	goto loc_821B667C;
loc_821B6810:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r11,1408(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1408, ctx.r11.u32);
loc_821B681C:
	// lwz r11,1408(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1408);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x821b6838
	if (ctx.cr0.lt) goto loc_821B6838;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
loc_821B6838:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x821b686c
	goto loc_821B686C;
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16387
	ctx.r11.u64 = ctx.r11.u64 | 16387;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// lwz r30,124(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
loc_821B686C:
	// lbz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 112);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821b68a0
	if (ctx.cr0.eq) goto loc_821B68A0;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r4,128(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b5e60
	ctx.lr = 0x821B688C;
	sub_821B5E60(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x821b68a0
	goto loc_821B68A0;
	// lwz r30,124(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
loc_821B68A0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821b68bc
	if (ctx.cr6.eq) goto loc_821B68BC;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lis r11,9345
	ctx.r11.s64 = 612433920;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// bl 0x822f99b8
	ctx.lr = 0x821B68BC;
	sub_822F99B8(ctx, base);
loc_821B68BC:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
loc_821B68C0:
	// addi r1,r31,192
	ctx.r1.s64 = ctx.r31.s64 + 192;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B6848"))) PPC_WEAK_FUNC(sub_821B6848);
PPC_FUNC_IMPL(__imp__sub_821B6848) {
	PPC_FUNC_PROLOGUE();
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16387
	ctx.r11.u64 = ctx.r11.u64 | 16387;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// lwz r30,124(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lbz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 112);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821b68a0
	if (ctx.cr0.eq) {
		// ERROR 821B68A0
		return;
	}
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r4,128(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b5e60
	ctx.lr = 0x821B688C;
	sub_821B5E60(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x821b68a0
	// ERROR 821B68A0
	return;
}

__attribute__((alias("__imp__sub_821B689C"))) PPC_WEAK_FUNC(sub_821B689C);
PPC_FUNC_IMPL(__imp__sub_821B689C) {
	PPC_FUNC_PROLOGUE();
	// lwz r30,124(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821b68bc
	if (ctx.cr6.eq) goto loc_821B68BC;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lis r11,9345
	ctx.r11.s64 = 612433920;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// bl 0x822f99b8
	ctx.lr = 0x821B68BC;
	sub_822F99B8(ctx, base);
loc_821B68BC:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r1,r31,192
	ctx.r1.s64 = ctx.r31.s64 + 192;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B68C8"))) PPC_WEAK_FUNC(sub_821B68C8);
PPC_FUNC_IMPL(__imp__sub_821B68C8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B68D4"))) PPC_WEAK_FUNC(sub_821B68D4);
PPC_FUNC_IMPL(__imp__sub_821B68D4) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B68E0"))) PPC_WEAK_FUNC(sub_821B68E0);
PPC_FUNC_IMPL(__imp__sub_821B68E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,18140(r16)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r16.u32 + 18140);
	// lwz r16,-16808(r6)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16808);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x821B68F0;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r3.u32);
	// stw r4,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r4.u32);
	// stw r6,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r6.u32);
	// stw r9,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r9.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r7,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r7.u32);
	// stw r8,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r8.u32);
	// addi r11,r11,22048
	ctx.r11.s64 = ctx.r11.s64 + 22048;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// addi r11,r31,120
	ctx.r11.s64 = ctx.r31.s64 + 120;
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r27,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r27.u32);
	// stw r27,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r27.u32);
	// stb r27,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r27.u8);
	// rlwinm r11,r5,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r28,129
	ctx.r28.s64 = 129;
	// li r29,1
	ctx.r29.s64 = 1;
loc_821B694C:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwimi r11,r28,16,8,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r28.u32, 16) & 0xFF0000) | (ctx.r11.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// li r3,1424
	ctx.r3.s64 = 1424;
	// rlwimi r11,r29,26,4,7
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 26) & 0xF000000) | (ctx.r11.u64 & 0xFFFFFFFFF0FFFFFF);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// rlwimi r11,r29,29,2,3
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 29) & 0x30000000) | (ctx.r11.u64 & 0xFFFFFFFFCFFFFFFF);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// rlwinm r11,r11,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// rlwinm r11,r11,0,0,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFE000;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// rlwinm r11,r11,0,19,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// rlwinm r11,r11,0,18,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// rlwinm r4,r11,0,17,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// stw r4,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r4.u32);
	// bl 0x822f9920
	ctx.lr = 0x821B69A0;
	sub_822F9920(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// bne 0x821b69c0
	if (!ctx.cr0.eq) goto loc_821B69C0;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r3,r11,14
	ctx.r3.u64 = ctx.r11.u64 | 14;
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x821b6b68
	// ERROR 821B6B68
	return;
loc_821B69C0:
	// li r5,1424
	ctx.r5.s64 = 1424;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e9ff0
	ctx.lr = 0x821B69D0;
	sub_822E9FF0(ctx, base);
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// stw r11,1416(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1416, ctx.r11.u32);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stw r11,1420(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1420, ctx.r11.u32);
	// addi r3,r30,1088
	ctx.r3.s64 = ctx.r30.s64 + 1088;
	// bl 0x822ee5d0
	ctx.lr = 0x821B69E8;
	sub_822EE5D0(ctx, base);
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r30,92(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// bne 0x821b6a2c
	if (!ctx.cr0.eq) goto loc_821B6A2C;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r4,228(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b62c0
	ctx.lr = 0x821B6A08;
	sub_821B62C0(ctx, base);
	// stb r29,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r29.u8);
	// lwz r8,244(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// lwz r7,220(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r6,212(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// lwz r5,204(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r4,196(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b6538
	ctx.lr = 0x821B6A28;
	sub_821B6538(ctx, base);
	// b 0x821b6ae8
	goto loc_821B6AE8;
loc_821B6A2C:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b6acc
	if (ctx.cr0.eq) goto loc_821B6ACC;
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r10,212(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821b6ac0
	if (ctx.cr6.eq) goto loc_821B6AC0;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// ori r4,r4,16389
	ctx.r4.u64 = ctx.r4.u64 | 16389;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b5e60
	ctx.lr = 0x821B6A5C;
	sub_821B5E60(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// rlwimi r11,r28,16,8,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r28.u32, 16) & 0xFF0000) | (ctx.r11.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// rlwimi r11,r29,26,4,7
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 26) & 0xF000000) | (ctx.r11.u64 & 0xFFFFFFFFF0FFFFFF);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// rlwimi r11,r29,29,2,3
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 29) & 0x30000000) | (ctx.r11.u64 & 0xFFFFFFFFCFFFFFFF);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// rlwinm r11,r11,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// rlwinm r11,r11,0,0,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFE000;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// rlwinm r11,r11,0,19,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// rlwinm r11,r11,0,18,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// rlwinm r4,r11,0,17,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// stw r4,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f99b8
	ctx.lr = 0x821B6AB0;
	sub_822F99B8(ctx, base);
	// stw r27,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r27.u32);
	// stb r27,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r27.u8);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x821b694c
	goto loc_821B694C;
loc_821B6AC0:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r11,1408(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1408, ctx.r11.u32);
loc_821B6ACC:
	// lwz r11,1408(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1408);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x821b6ae8
	if (ctx.cr0.lt) goto loc_821B6AE8;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_821B6AE8:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x821b6b14
	// ERROR 821B6B14
	return;
}

__attribute__((alias("__imp__sub_821B68E8"))) PPC_WEAK_FUNC(sub_821B68E8);
PPC_FUNC_IMPL(__imp__sub_821B68E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x821B68F0;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r3.u32);
	// stw r4,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r4.u32);
	// stw r6,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r6.u32);
	// stw r9,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r9.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r7,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r7.u32);
	// stw r8,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r8.u32);
	// addi r11,r11,22048
	ctx.r11.s64 = ctx.r11.s64 + 22048;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// addi r11,r31,120
	ctx.r11.s64 = ctx.r31.s64 + 120;
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r27,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r27.u32);
	// stw r27,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r27.u32);
	// stb r27,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r27.u8);
	// rlwinm r11,r5,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r28,129
	ctx.r28.s64 = 129;
	// li r29,1
	ctx.r29.s64 = 1;
loc_821B694C:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwimi r11,r28,16,8,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r28.u32, 16) & 0xFF0000) | (ctx.r11.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// li r3,1424
	ctx.r3.s64 = 1424;
	// rlwimi r11,r29,26,4,7
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 26) & 0xF000000) | (ctx.r11.u64 & 0xFFFFFFFFF0FFFFFF);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// rlwimi r11,r29,29,2,3
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 29) & 0x30000000) | (ctx.r11.u64 & 0xFFFFFFFFCFFFFFFF);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// rlwinm r11,r11,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// rlwinm r11,r11,0,0,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFE000;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// rlwinm r11,r11,0,19,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// rlwinm r11,r11,0,18,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// rlwinm r4,r11,0,17,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// stw r4,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r4.u32);
	// bl 0x822f9920
	ctx.lr = 0x821B69A0;
	sub_822F9920(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// bne 0x821b69c0
	if (!ctx.cr0.eq) goto loc_821B69C0;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r3,r11,14
	ctx.r3.u64 = ctx.r11.u64 | 14;
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x821b6b68
	goto loc_821B6B68;
loc_821B69C0:
	// li r5,1424
	ctx.r5.s64 = 1424;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e9ff0
	ctx.lr = 0x821B69D0;
	sub_822E9FF0(ctx, base);
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// stw r11,1416(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1416, ctx.r11.u32);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stw r11,1420(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1420, ctx.r11.u32);
	// addi r3,r30,1088
	ctx.r3.s64 = ctx.r30.s64 + 1088;
	// bl 0x822ee5d0
	ctx.lr = 0x821B69E8;
	sub_822EE5D0(ctx, base);
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r30,92(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// bne 0x821b6a2c
	if (!ctx.cr0.eq) goto loc_821B6A2C;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r4,228(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b62c0
	ctx.lr = 0x821B6A08;
	sub_821B62C0(ctx, base);
	// stb r29,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r29.u8);
	// lwz r8,244(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// lwz r7,220(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r6,212(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// lwz r5,204(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r4,196(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b6538
	ctx.lr = 0x821B6A28;
	sub_821B6538(ctx, base);
	// b 0x821b6ae8
	goto loc_821B6AE8;
loc_821B6A2C:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b6acc
	if (ctx.cr0.eq) goto loc_821B6ACC;
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r10,212(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821b6ac0
	if (ctx.cr6.eq) goto loc_821B6AC0;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// ori r4,r4,16389
	ctx.r4.u64 = ctx.r4.u64 | 16389;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b5e60
	ctx.lr = 0x821B6A5C;
	sub_821B5E60(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// rlwimi r11,r28,16,8,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r28.u32, 16) & 0xFF0000) | (ctx.r11.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// rlwimi r11,r29,26,4,7
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 26) & 0xF000000) | (ctx.r11.u64 & 0xFFFFFFFFF0FFFFFF);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// rlwimi r11,r29,29,2,3
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 29) & 0x30000000) | (ctx.r11.u64 & 0xFFFFFFFFCFFFFFFF);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// rlwinm r11,r11,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// rlwinm r11,r11,0,0,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFE000;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// rlwinm r11,r11,0,19,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// rlwinm r11,r11,0,18,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// rlwinm r4,r11,0,17,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// stw r4,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f99b8
	ctx.lr = 0x821B6AB0;
	sub_822F99B8(ctx, base);
	// stw r27,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r27.u32);
	// stb r27,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r27.u8);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x821b694c
	goto loc_821B694C;
loc_821B6AC0:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r11,1408(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1408, ctx.r11.u32);
loc_821B6ACC:
	// lwz r11,1408(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1408);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x821b6ae8
	if (ctx.cr0.lt) goto loc_821B6AE8;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_821B6AE8:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x821b6b14
	goto loc_821B6B14;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// ori r10,r10,16387
	ctx.r10.u64 = ctx.r10.u64 | 16387;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// lwz r10,220(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r30,92(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
loc_821B6B14:
	// lbz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821b6b48
	if (ctx.cr0.eq) goto loc_821B6B48;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b5e60
	ctx.lr = 0x821B6B34;
	sub_821B5E60(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x821b6b48
	goto loc_821B6B48;
	// lwz r30,92(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
loc_821B6B48:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821b6b64
	if (ctx.cr6.eq) goto loc_821B6B64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lis r11,9345
	ctx.r11.s64 = 612433920;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// bl 0x822f99b8
	ctx.lr = 0x821B6B64;
	sub_822F99B8(ctx, base);
loc_821B6B64:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
loc_821B6B68:
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B6AF8"))) PPC_WEAK_FUNC(sub_821B6AF8);
PPC_FUNC_IMPL(__imp__sub_821B6AF8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// ori r10,r10,16387
	ctx.r10.u64 = ctx.r10.u64 | 16387;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// lwz r10,220(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r30,92(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lbz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821b6b48
	if (ctx.cr0.eq) {
		// ERROR 821B6B48
		return;
	}
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b5e60
	ctx.lr = 0x821B6B34;
	sub_821B5E60(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x821b6b48
	// ERROR 821B6B48
	return;
}

__attribute__((alias("__imp__sub_821B6B44"))) PPC_WEAK_FUNC(sub_821B6B44);
PPC_FUNC_IMPL(__imp__sub_821B6B44) {
	PPC_FUNC_PROLOGUE();
	// lwz r30,92(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821b6b64
	if (ctx.cr6.eq) goto loc_821B6B64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lis r11,9345
	ctx.r11.s64 = 612433920;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// bl 0x822f99b8
	ctx.lr = 0x821B6B64;
	sub_822F99B8(ctx, base);
loc_821B6B64:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B6B70"))) PPC_WEAK_FUNC(sub_821B6B70);
PPC_FUNC_IMPL(__imp__sub_821B6B70) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B6B7C"))) PPC_WEAK_FUNC(sub_821B6B7C);
PPC_FUNC_IMPL(__imp__sub_821B6B7C) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B6B88"))) PPC_WEAK_FUNC(sub_821B6B88);
PPC_FUNC_IMPL(__imp__sub_821B6B88) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lis r4,25735
	ctx.r4.s64 = 1686568960;
	// b 0x822f9920
	sub_822F9920(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B6B94"))) PPC_WEAK_FUNC(sub_821B6B94);
PPC_FUNC_IMPL(__imp__sub_821B6B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B6B98"))) PPC_WEAK_FUNC(sub_821B6B98);
PPC_FUNC_IMPL(__imp__sub_821B6B98) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// b 0x822f99b8
	sub_822F99B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B6BA4"))) PPC_WEAK_FUNC(sub_821B6BA4);
PPC_FUNC_IMPL(__imp__sub_821B6BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B6BA8"))) PPC_WEAK_FUNC(sub_821B6BA8);
PPC_FUNC_IMPL(__imp__sub_821B6BA8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821b6bdc
	if (ctx.cr0.eq) goto loc_821B6BDC;
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,-29660
	ctx.r11.s64 = ctx.r11.s64 + -29660;
	// rlwinm r10,r10,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x821b6bec
	goto loc_821B6BEC;
loc_821B6BDC:
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// rlwinm r11,r11,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// addi r10,r10,-29676
	ctx.r10.s64 = ctx.r10.s64 + -29676;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_821B6BEC:
	// rlwinm r3,r11,9,0,22
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFFFFFE00;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821B6BF4"))) PPC_WEAK_FUNC(sub_821B6BF4);
PPC_FUNC_IMPL(__imp__sub_821B6BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B6BF8"))) PPC_WEAK_FUNC(sub_821B6BF8);
PPC_FUNC_IMPL(__imp__sub_821B6BF8) {
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
	// lis r11,1536
	ctx.r11.s64 = 100663296;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x821b6c94
	if (ctx.cr6.gt) goto loc_821B6C94;
	// beq cr6,0x821b6c8c
	if (ctx.cr6.eq) goto loc_821B6C8C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b6d10
	if (ctx.cr6.eq) goto loc_821B6D10;
	// lis r11,256
	ctx.r11.s64 = 16777216;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821b6c80
	if (ctx.cr6.eq) goto loc_821B6C80;
	// lis r11,512
	ctx.r11.s64 = 33554432;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821b6c78
	if (ctx.cr6.eq) goto loc_821B6C78;
	// lis r11,768
	ctx.r11.s64 = 50331648;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821b6c70
	if (ctx.cr6.eq) goto loc_821B6C70;
	// lis r11,1024
	ctx.r11.s64 = 67108864;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821b6c68
	if (ctx.cr6.eq) goto loc_821B6C68;
	// lis r11,1280
	ctx.r11.s64 = 83886080;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821b6cdc
	if (!ctx.cr6.eq) goto loc_821B6CDC;
	// lis r31,6
	ctx.r31.s64 = 393216;
	// b 0x821b6c84
	goto loc_821B6C84;
loc_821B6C68:
	// lis r31,6
	ctx.r31.s64 = 393216;
	// b 0x821b6d10
	goto loc_821B6D10;
loc_821B6C70:
	// lis r31,2
	ctx.r31.s64 = 131072;
	// b 0x821b6c84
	goto loc_821B6C84;
loc_821B6C78:
	// lis r31,2
	ctx.r31.s64 = 131072;
	// b 0x821b6d10
	goto loc_821B6D10;
loc_821B6C80:
	// lis r31,0
	ctx.r31.s64 = 0;
loc_821B6C84:
	// ori r31,r31,34952
	ctx.r31.u64 = ctx.r31.u64 | 34952;
	// b 0x821b6d10
	goto loc_821B6D10;
loc_821B6C8C:
	// lis r31,1
	ctx.r31.s64 = 65536;
	// b 0x821b6d10
	goto loc_821B6D10;
loc_821B6C94:
	// lis r11,1792
	ctx.r11.s64 = 117440512;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821b6d0c
	if (ctx.cr6.eq) goto loc_821B6D0C;
	// lis r11,2048
	ctx.r11.s64 = 134217728;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821b6d04
	if (ctx.cr6.eq) goto loc_821B6D04;
	// lis r11,2304
	ctx.r11.s64 = 150994944;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821b6cfc
	if (ctx.cr6.eq) goto loc_821B6CFC;
	// lis r11,2560
	ctx.r11.s64 = 167772160;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821b6cf4
	if (ctx.cr6.eq) goto loc_821B6CF4;
	// lis r11,2816
	ctx.r11.s64 = 184549376;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821b6cec
	if (ctx.cr6.eq) goto loc_821B6CEC;
	// lis r11,3072
	ctx.r11.s64 = 201326592;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821b6ce4
	if (ctx.cr6.eq) goto loc_821B6CE4;
loc_821B6CDC:
	// bl 0x822fa658
	ctx.lr = 0x821B6CE0;
	sub_822FA658(ctx, base);
	// b 0x821b6d10
	goto loc_821B6D10;
loc_821B6CE4:
	// lis r31,16
	ctx.r31.s64 = 1048576;
	// b 0x821b6c84
	goto loc_821B6C84;
loc_821B6CEC:
	// lis r31,16
	ctx.r31.s64 = 1048576;
	// b 0x821b6d10
	goto loc_821B6D10;
loc_821B6CF4:
	// lis r31,96
	ctx.r31.s64 = 6291456;
	// b 0x821b6d10
	goto loc_821B6D10;
loc_821B6CFC:
	// lis r31,64
	ctx.r31.s64 = 4194304;
	// b 0x821b6d10
	goto loc_821B6D10;
loc_821B6D04:
	// lis r31,4
	ctx.r31.s64 = 262144;
	// b 0x821b6c84
	goto loc_821B6C84;
loc_821B6D0C:
	// lis r31,4
	ctx.r31.s64 = 262144;
loc_821B6D10:
	// rlwinm. r11,r31,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b6d2c
	if (ctx.cr0.eq) goto loc_821B6D2C;
	// lis r12,6
	ctx.r12.s64 = 393216;
	// ori r12,r12,34952
	ctx.r12.u64 = ctx.r12.u64 | 34952;
	// and. r11,r31,r12
	ctx.r11.u64 = ctx.r31.u64 & ctx.r12.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b6d2c
	if (ctx.cr0.eq) goto loc_821B6D2C;
	// bl 0x822fa658
	ctx.lr = 0x821B6D2C;
	sub_822FA658(ctx, base);
loc_821B6D2C:
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

__attribute__((alias("__imp__sub_821B6D44"))) PPC_WEAK_FUNC(sub_821B6D44);
PPC_FUNC_IMPL(__imp__sub_821B6D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B6D48"))) PPC_WEAK_FUNC(sub_821B6D48);
PPC_FUNC_IMPL(__imp__sub_821B6D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x821B6D50;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b6e30
	if (ctx.cr6.eq) goto loc_821B6E30;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// beq cr6,0x821b6df4
	if (ctx.cr6.eq) goto loc_821B6DF4;
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// beq cr6,0x821b6d98
	if (ctx.cr6.eq) goto loc_821B6D98;
	// cmplwi cr6,r3,9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 9, ctx.xer);
	// bne cr6,0x821b6e28
	if (!ctx.cr6.eq) goto loc_821B6E28;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r31,34
	ctx.r31.s64 = 34;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// stw r10,156(r30)
	PPC_STORE_U32(ctx.r30.u32 + 156, ctx.r10.u32);
	// b 0x821b6e38
	goto loc_821B6E38;
loc_821B6D98:
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ori r29,r10,512
	ctx.r29.u64 = ctx.r10.u64 | 512;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x821b6db0
	if (!ctx.cr6.lt) goto loc_821B6DB0;
	// bl 0x822fa658
	ctx.lr = 0x821B6DB0;
	sub_822FA658(ctx, base);
loc_821B6DB0:
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// blt cr6,0x821b6dbc
	if (ctx.cr6.lt) goto loc_821B6DBC;
	// bl 0x822fa658
	ctx.lr = 0x821B6DBC;
	sub_822FA658(ctx, base);
loc_821B6DBC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x821b6dec
	if (!ctx.cr6.eq) goto loc_821B6DEC;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r9,160(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// li r10,4
	ctx.r10.s64 = 4;
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// addi r31,r31,35
	ctx.r31.s64 = ctx.r31.s64 + 35;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r11,160(r30)
	PPC_STORE_U32(ctx.r30.u32 + 160, ctx.r11.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// b 0x821b6e38
	goto loc_821B6E38;
loc_821B6DEC:
	// li r11,23
	ctx.r11.s64 = 23;
	// b 0x821b6e34
	goto loc_821B6E34;
loc_821B6DF4:
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ori r10,r10,260
	ctx.r10.u64 = ctx.r10.u64 | 260;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x821b6e0c
	if (ctx.cr6.lt) goto loc_821B6E0C;
	// bl 0x822fa658
	ctx.lr = 0x821B6E0C;
	sub_822FA658(ctx, base);
loc_821B6E0C:
	// addi r11,r31,41
	ctx.r11.s64 = ctx.r31.s64 + 41;
	// li r10,4
	ctx.r10.s64 = 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r30
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x821b6e38
	if (!ctx.cr0.eq) goto loc_821B6E38;
loc_821B6E28:
	// bl 0x822fa658
	ctx.lr = 0x821B6E2C;
	sub_822FA658(ctx, base);
	// b 0x821b6e38
	goto loc_821B6E38;
loc_821B6E30:
	// li r11,4
	ctx.r11.s64 = 4;
loc_821B6E34:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_821B6E38:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B6E44"))) PPC_WEAK_FUNC(sub_821B6E44);
PPC_FUNC_IMPL(__imp__sub_821B6E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B6E48"))) PPC_WEAK_FUNC(sub_821B6E48);
PPC_FUNC_IMPL(__imp__sub_821B6E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x821B6E50;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,52
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 52, ctx.xer);
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// beq cr6,0x821b6e78
	if (ctx.cr6.eq) goto loc_821B6E78;
	// cmpwi cr6,r31,7
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 7, ctx.xer);
	// beq cr6,0x821b6e78
	if (ctx.cr6.eq) goto loc_821B6E78;
	// bl 0x822fa658
	ctx.lr = 0x821B6E78;
	sub_822FA658(ctx, base);
loc_821B6E78:
	// rlwinm r10,r30,0,4,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xF000000;
	// lis r9,3328
	ctx.r9.s64 = 218103808;
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x821b6e9c
	if (!ctx.cr6.eq) goto loc_821B6E9C;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,16,13,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x70000) | (ctx.r11.u64 & 0xFFFFFFFFFFF8FFFF);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x821b6ea0
	goto loc_821B6EA0;
loc_821B6E9C:
	// rlwinm r10,r11,0,16,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF8FFFF;
loc_821B6EA0:
	// rlwinm r11,r30,0,8,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFF0000;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// lis r8,228
	ctx.r8.s64 = 14942208;
	// addi r9,r29,4
	ctx.r9.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x821b6f20
	if (ctx.cr6.eq) goto loc_821B6F20;
	// lis r8,68
	ctx.r8.s64 = 4456448;
	// rlwinm r10,r11,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// ori r7,r8,32
	ctx.r7.u64 = ctx.r8.u64 | 32;
	// rlwinm r8,r10,2,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// rlwinm r6,r10,2,28,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// addi r11,r11,-29644
	ctx.r11.s64 = ctx.r11.s64 + -29644;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// lwzx r6,r6,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lwzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r6,r6,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// or r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 | ctx.r8.u64;
	// rlwinm r6,r10,2,28,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// rlwinm r10,r10,0,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC;
	// lwzx r6,r6,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r10,r6,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// rlwinm r7,r11,12,0,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFFFF000;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x821b6f30
	goto loc_821B6F30;
loc_821B6F20:
	// lis r11,4
	ctx.r11.s64 = 262144;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
loc_821B6F30:
	// lis r10,65
	ctx.r10.s64 = 4259840;
	// li r9,17476
	ctx.r9.s64 = 17476;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B6F54"))) PPC_WEAK_FUNC(sub_821B6F54);
PPC_FUNC_IMPL(__imp__sub_821B6F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B6F58"))) PPC_WEAK_FUNC(sub_821B6F58);
PPC_FUNC_IMPL(__imp__sub_821B6F58) {
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
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// bl 0x822fa658
	ctx.lr = 0x821B6F7C;
	sub_822FA658(ctx, base);
	// b 0x821b6f84
	goto loc_821B6F84;
loc_821B6F80:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_821B6F84:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821b6f80
	if (!ctx.cr0.eq) goto loc_821B6F80;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_821B6FAC"))) PPC_WEAK_FUNC(sub_821B6FAC);
PPC_FUNC_IMPL(__imp__sub_821B6FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B6FB0"))) PPC_WEAK_FUNC(sub_821B6FB0);
PPC_FUNC_IMPL(__imp__sub_821B6FB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e0
	ctx.lr = 0x821B6FB8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821b6fdc
	if (ctx.cr6.eq) goto loc_821B6FDC;
	// bl 0x822fa658
	ctx.lr = 0x821B6FDC;
	sub_822FA658(ctx, base);
loc_821B6FDC:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r9,71
	ctx.r9.s64 = 71;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// addi r27,r10,4
	ctx.r27.s64 = ctx.r10.s64 + 4;
	// lwz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r8,156(r26)
	PPC_STORE_U32(ctx.r26.u32 + 156, ctx.r8.u32);
	// rlwimi r11,r31,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm. r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b7018
	if (ctx.cr0.eq) goto loc_821B7018;
	// bl 0x822fa658
	ctx.lr = 0x821B7018;
	sub_822FA658(ctx, base);
loc_821B7018:
	// lis r11,88
	ctx.r11.s64 = 5767168;
	// li r10,257
	ctx.r10.s64 = 257;
	// li r9,17
	ctx.r9.s64 = 17;
	// lis r8,32
	ctx.r8.s64 = 2097152;
	// rlwimi r31,r9,18,0,20
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r9.u32, 18) & 0xFFFFF800) | (ctx.r31.u64 & 0xFFFFFFFF000007FF);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// ori r8,r8,12816
	ctx.r8.u64 = ctx.r8.u64 | 12816;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e9930
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B7060"))) PPC_WEAK_FUNC(sub_821B7060);
PPC_FUNC_IMPL(__imp__sub_821B7060) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821b7088
	if (!ctx.cr6.eq) goto loc_821B7088;
	// bl 0x822fa658
	ctx.lr = 0x821B7088;
	sub_822FA658(ctx, base);
loc_821B7088:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821b709c
	if (ctx.cr6.lt) goto loc_821B709C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821b70ac
	goto loc_821B70AC;
loc_821B709C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_821B70AC:
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

__attribute__((alias("__imp__sub_821B70C4"))) PPC_WEAK_FUNC(sub_821B70C4);
PPC_FUNC_IMPL(__imp__sub_821B70C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B70C8"))) PPC_WEAK_FUNC(sub_821B70C8);
PPC_FUNC_IMPL(__imp__sub_821B70C8) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821b70f0
	if (!ctx.cr6.eq) goto loc_821B70F0;
	// bl 0x822fa658
	ctx.lr = 0x821B70F0;
	sub_822FA658(ctx, base);
loc_821B70F0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subfc r11,r11,r30
	ctx.xer.ca = ctx.r30.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
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

__attribute__((alias("__imp__sub_821B7118"))) PPC_WEAK_FUNC(sub_821B7118);
PPC_FUNC_IMPL(__imp__sub_821B7118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x821B7120;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821b7138
	if (!ctx.cr6.eq) goto loc_821B7138;
	// bl 0x822fa658
	ctx.lr = 0x821B7138;
	sub_822FA658(ctx, base);
loc_821B7138:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b7148
	if (!ctx.cr6.eq) goto loc_821B7148;
	// bl 0x822fa658
	ctx.lr = 0x821B7148;
	sub_822FA658(ctx, base);
loc_821B7148:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821b71f0
	if (ctx.cr6.lt) goto loc_821B71F0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b7170
	if (ctx.cr6.eq) goto loc_821B7170;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// addi r11,r11,4095
	ctx.r11.s64 = ctx.r11.s64 + 4095;
	// rlwinm r11,r11,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// b 0x821b7174
	goto loc_821B7174;
loc_821B7170:
	// li r11,4096
	ctx.r11.s64 = 4096;
loc_821B7174:
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// b 0x821b7184
	goto loc_821B7184;
loc_821B717C:
	// rlwinm. r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b71fc
	if (ctx.cr0.eq) goto loc_821B71FC;
loc_821B7184:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r11,-32
	ctx.r8.s64 = ctx.r11.s64 + -32;
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x821b717c
	if (ctx.cr6.lt) goto loc_821B717C;
	// addi r29,r11,-32
	ctx.r29.s64 = ctx.r11.s64 + -32;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822f9920
	ctx.lr = 0x821B71A8;
	sub_822F9920(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x821b71fc
	if (ctx.cr0.eq) goto loc_821B71FC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821b71dc
	if (ctx.cr0.eq) goto loc_821B71DC;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mullw r5,r10,r11
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// bl 0x822e9960
	ctx.lr = 0x821B71D0;
	sub_822E9960(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// bl 0x822f99b8
	ctx.lr = 0x821B71DC;
	sub_822F99B8(ctx, base);
loc_821B71DC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// twllei r11,0
	// divwu r11,r29,r11
	ctx.r11.u32 = ctx.r29.u32 / ctx.r11.u32;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_821B71F0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_821B71F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
loc_821B71FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821b71f4
	goto loc_821B71F4;
}

__attribute__((alias("__imp__sub_821B7204"))) PPC_WEAK_FUNC(sub_821B7204);
PPC_FUNC_IMPL(__imp__sub_821B7204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B7208"))) PPC_WEAK_FUNC(sub_821B7208);
PPC_FUNC_IMPL(__imp__sub_821B7208) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821b7230
	if (!ctx.cr6.eq) goto loc_821B7230;
	// bl 0x822fa658
	ctx.lr = 0x821B7230;
	sub_822FA658(ctx, base);
loc_821B7230:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b70c8
	ctx.lr = 0x821B723C;
	sub_821B70C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x821b7270
	if (!ctx.cr0.eq) goto loc_821B7270;
	// bl 0x821b7118
	ctx.lr = 0x821B7250;
	sub_821B7118(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821b7268
	if (ctx.cr0.eq) goto loc_821B7268;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b7060
	ctx.lr = 0x821B7264;
	sub_821B7060(ctx, base);
	// b 0x821b7288
	goto loc_821B7288;
loc_821B7268:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821b7288
	goto loc_821B7288;
loc_821B7270:
	// bl 0x821b7060
	ctx.lr = 0x821B7274;
	sub_821B7060(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822e9ff0
	ctx.lr = 0x821B7284;
	sub_822E9FF0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821B7288:
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

__attribute__((alias("__imp__sub_821B72A0"))) PPC_WEAK_FUNC(sub_821B72A0);
PPC_FUNC_IMPL(__imp__sub_821B72A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x821B72A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// rlwimi r11,r3,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// rlwinm r11,r11,24,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1F;
	// clrlwi r10,r3,21
	ctx.r10.u64 = ctx.r3.u32 & 0x7FF;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// beq cr6,0x821b72f4
	if (ctx.cr6.eq) goto loc_821B72F4;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// beq cr6,0x821b72ec
	if (ctx.cr6.eq) goto loc_821B72EC;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x821b72e4
	if (ctx.cr6.eq) goto loc_821B72E4;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// b 0x821b72f8
	goto loc_821B72F8;
loc_821B72E4:
	// addi r31,r10,6144
	ctx.r31.s64 = ctx.r10.s64 + 6144;
	// b 0x821b72f8
	goto loc_821B72F8;
loc_821B72EC:
	// addi r31,r10,4096
	ctx.r31.s64 = ctx.r10.s64 + 4096;
	// b 0x821b72f8
	goto loc_821B72F8;
loc_821B72F4:
	// addi r31,r10,2048
	ctx.r31.s64 = ctx.r10.s64 + 2048;
loc_821B72F8:
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// blt cr6,0x821b730c
	if (ctx.cr6.lt) goto loc_821B730C;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bgt cr6,0x821b730c
	if (ctx.cr6.gt) goto loc_821B730C;
	// li r11,2
	ctx.r11.s64 = 2;
loc_821B730C:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821b7410
	if (ctx.cr6.lt) goto loc_821B7410;
	// beq cr6,0x821b73bc
	if (ctx.cr6.eq) goto loc_821B73BC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x821b73b4
	if (ctx.cr6.lt) goto loc_821B73B4;
	// beq cr6,0x821b7370
	if (ctx.cr6.eq) goto loc_821B7370;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x821b7368
	if (ctx.cr6.eq) goto loc_821B7368;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// beq cr6,0x821b7360
	if (ctx.cr6.eq) goto loc_821B7360;
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// bne cr6,0x821b7408
	if (!ctx.cr6.eq) goto loc_821B7408;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// blt cr6,0x821b7350
	if (ctx.cr6.lt) goto loc_821B7350;
	// bne cr6,0x821b7358
	if (!ctx.cr6.eq) goto loc_821B7358;
	// li r11,21
	ctx.r11.s64 = 21;
	// b 0x821b7354
	goto loc_821B7354;
loc_821B7350:
	// li r11,22
	ctx.r11.s64 = 22;
loc_821B7354:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_821B7358:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x821b7418
	goto loc_821B7418;
loc_821B7360:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x821b7414
	goto loc_821B7414;
loc_821B7368:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x821b7414
	goto loc_821B7414;
loc_821B7370:
	// addi r11,r31,41
	ctx.r11.s64 = ctx.r31.s64 + 41;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r30,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b73ac
	if (ctx.cr6.eq) goto loc_821B73AC;
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// ori r10,r10,260
	ctx.r10.u64 = ctx.r10.u64 | 260;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x821b739c
	if (ctx.cr6.lt) goto loc_821B739C;
	// bl 0x822fa658
	ctx.lr = 0x821B739C;
	sub_822FA658(ctx, base);
loc_821B739C:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwzx r31,r30,r29
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// b 0x821b7418
	goto loc_821B7418;
loc_821B73AC:
	// li r11,17
	ctx.r11.s64 = 17;
	// b 0x821b7414
	goto loc_821B7414;
loc_821B73B4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821b7414
	goto loc_821B7414;
loc_821B73BC:
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwzx r10,r10,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// lwz r31,28(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x821b73e4
	if (ctx.cr6.lt) goto loc_821B73E4;
	// bl 0x822fa658
	ctx.lr = 0x821B73E4;
	sub_822FA658(ctx, base);
loc_821B73E4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// beq cr6,0x821b7418
	if (ctx.cr6.eq) goto loc_821B7418;
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// beq cr6,0x821b7418
	if (ctx.cr6.eq) goto loc_821B7418;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x821b7418
	if (ctx.cr6.eq) goto loc_821B7418;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x821b7418
	if (ctx.cr6.eq) goto loc_821B7418;
loc_821B7408:
	// bl 0x822fa658
	ctx.lr = 0x821B740C;
	sub_822FA658(ctx, base);
	// b 0x821b7418
	goto loc_821B7418;
loc_821B7410:
	// li r11,4
	ctx.r11.s64 = 4;
loc_821B7414:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_821B7418:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B7424"))) PPC_WEAK_FUNC(sub_821B7424);
PPC_FUNC_IMPL(__imp__sub_821B7424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B7428"))) PPC_WEAK_FUNC(sub_821B7428);
PPC_FUNC_IMPL(__imp__sub_821B7428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98dc
	ctx.lr = 0x821B7430;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r3,r11,8,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xF;
	// lwz r27,0(r25)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r26,r11,0,12,15
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000;
	// rlwinm r29,r10,24,27,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1F;
	// clrlwi r28,r11,21
	ctx.r28.u64 = ctx.r11.u32 & 0x7FF;
	// li r31,0
	ctx.r31.s64 = 0;
	// rlwinm. r9,r11,0,11,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821b746c
	if (ctx.cr0.eq) goto loc_821B746C;
	// li r31,256
	ctx.r31.s64 = 256;
loc_821B746C:
	// bl 0x821b6ba8
	ctx.lr = 0x821B7470;
	sub_821B6BA8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// or r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 | ctx.r31.u64;
	// bl 0x821b6d48
	ctx.lr = 0x821B748C;
	sub_821B6D48(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821b74b8
	if (!ctx.cr6.eq) goto loc_821B74B8;
	// lis r11,15
	ctx.r11.s64 = 983040;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821b74b8
	if (!ctx.cr6.eq) goto loc_821B74B8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwimi r3,r11,16,10,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x3F0000) | (ctx.r3.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r11,r3,10
	ctx.r11.u64 = ctx.r3.u32 & 0x3FFFFF;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r11,r27,4
	ctx.r11.s64 = ctx.r27.s64 + 4;
	// b 0x821b7514
	goto loc_821B7514;
loc_821B74B8:
	// rlwinm. r10,r26,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x821b74c8
	if (ctx.cr0.eq) goto loc_821B74C8;
	// li r11,1
	ctx.r11.s64 = 1;
loc_821B74C8:
	// rlwinm. r10,r26,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821b74d4
	if (ctx.cr0.eq) goto loc_821B74D4;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
loc_821B74D4:
	// rlwinm. r10,r26,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821b74e0
	if (ctx.cr0.eq) goto loc_821B74E0;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
loc_821B74E0:
	// rlwinm. r10,r26,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821b74ec
	if (ctx.cr0.eq) goto loc_821B74EC;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
loc_821B74EC:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,64
	ctx.r9.s64 = 4194304;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwimi r9,r10,16,10,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x3F0000) | (ctx.r9.u64 & 0xFFFFFFFFFFC0FFFF);
	// or r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 | ctx.r31.u64;
	// or r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r11,r27,4
	ctx.r11.s64 = ctx.r27.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_821B7514:
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822e992c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B7520"))) PPC_WEAK_FUNC(sub_821B7520);
PPC_FUNC_IMPL(__imp__sub_821B7520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98d8
	ctx.lr = 0x821B7528;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// rlwinm r11,r31,0,8,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFF0000;
	// lis r10,228
	ctx.r10.s64 = 14942208;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r26,0(r24)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821b75a4
	if (ctx.cr6.eq) goto loc_821B75A4;
	// rlwinm r10,r11,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// rlwinm r9,r10,2,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,-29644
	ctx.r11.s64 = ctx.r11.s64 + -29644;
	// rlwinm r8,r10,2,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// rlwinm r8,r10,2,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// rlwinm r10,r10,0,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC;
	// lwzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r10,r8,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r8,r11,12,0,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFFFF000;
	// or r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 | ctx.r9.u64;
	// or r27,r8,r11
	ctx.r27.u64 = ctx.r8.u64 | ctx.r11.u64;
	// b 0x821b75a8
	goto loc_821B75A8;
loc_821B75A4:
	// li r27,12816
	ctx.r27.s64 = 12816;
loc_821B75A8:
	// rlwinm r3,r31,0,4,7
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xF000000;
	// bl 0x821b6bf8
	ctx.lr = 0x821B75B0;
	sub_821B6BF8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// or r28,r11,r30
	ctx.r28.u64 = ctx.r11.u64 | ctx.r30.u64;
	// bl 0x821b72a0
	ctx.lr = 0x821B75C8;
	sub_821B72A0(ctx, base);
	// rlwinm r11,r31,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2000;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x821b762c
	if (!ctx.cr6.eq) goto loc_821B762C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// rlwimi r11,r31,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bne cr6,0x821b762c
	if (!ctx.cr6.eq) goto loc_821B762C;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// rlwimi r11,r25,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r25.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,3840
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3840, ctx.xer);
	// beq cr6,0x821b760c
	if (ctx.cr6.eq) goto loc_821B760C;
	// bl 0x822fa658
	ctx.lr = 0x821B7608;
	sub_822FA658(ctx, base);
	// b 0x821b762c
	goto loc_821B762C;
loc_821B760C:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// andis. r11,r11,65521
	ctx.r11.u64 = ctx.r11.u64 & 4293984256;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// oris r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 65536;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// clrlwi. r10,r25,21
	ctx.r10.u64 = ctx.r25.u32 & 0x7FF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821b7628
	if (ctx.cr0.eq) goto loc_821B7628;
	// bl 0x822fa658
	ctx.lr = 0x821B7628;
	sub_822FA658(ctx, base);
loc_821B7628:
	// li r29,1
	ctx.r29.s64 = 1;
loc_821B762C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x821b7658
	if (!ctx.cr6.eq) goto loc_821B7658;
	// cmplwi cr6,r27,12816
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 12816, ctx.xer);
	// bne cr6,0x821b7658
	if (!ctx.cr6.eq) goto loc_821B7658;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwimi r11,r29,7,24,24
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 7) & 0x80) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF7F);
	// andi. r11,r11,191
	ctx.r11.u64 = ctx.r11.u64 & 191;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwimi r30,r11,16,0,15
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r30.u64 & 0xFFFFFFFF0000FFFF);
	// addi r11,r26,4
	ctx.r11.s64 = ctx.r26.s64 + 4;
	// stw r30,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r30.u32);
	// b 0x821b7688
	goto loc_821B7688;
loc_821B7658:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r30,16
	ctx.r10.u64 = ctx.r30.u32 & 0xFFFF;
	// or r9,r28,r27
	ctx.r9.u64 = ctx.r28.u64 | ctx.r27.u64;
	// rlwimi r11,r29,7,24,24
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 7) & 0x80) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF7F);
	// rlwinm r11,r11,16,8,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF0000;
	// rlwinm r11,r11,0,10,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
	// oris r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 4194304;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r11,r26,4
	ctx.r11.s64 = ctx.r26.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_821B7688:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821b769c
	if (ctx.cr6.eq) goto loc_821B769C;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_821B769C:
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822e9928
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B76A8"))) PPC_WEAK_FUNC(sub_821B76A8);
PPC_FUNC_IMPL(__imp__sub_821B76A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x821B76B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// rlwimi r11,r31,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// clrlwi r4,r31,21
	ctx.r4.u64 = ctx.r31.u32 & 0x7FF;
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r3,r11,24,27,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1F;
	// bl 0x821b6d48
	ctx.lr = 0x821B76DC;
	sub_821B6D48(ctx, base);
	// li r11,71
	ctx.r11.s64 = 71;
	// rlwinm r10,r31,0,12,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xF0000;
	// lis r9,15
	ctx.r9.s64 = 983040;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// beq cr6,0x821b7750
	if (ctx.cr6.eq) goto loc_821B7750;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r8,64
	ctx.r8.s64 = 4194304;
	// clrlwi r7,r3,16
	ctx.r7.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwimi r8,r9,16,10,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0x3F0000) | (ctx.r8.u64 & 0xFFFFFFFFFFC0FFFF);
	// rlwinm. r6,r10,0,15,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// beq 0x821b7724
	if (ctx.cr0.eq) goto loc_821B7724;
	// li r9,1
	ctx.r9.s64 = 1;
loc_821B7724:
	// rlwinm. r8,r10,0,14,14
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x821b7730
	if (ctx.cr0.eq) goto loc_821B7730;
	// ori r9,r9,4
	ctx.r9.u64 = ctx.r9.u64 | 4;
loc_821B7730:
	// rlwinm. r8,r10,0,13,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x821b773c
	if (ctx.cr0.eq) goto loc_821B773C;
	// ori r9,r9,16
	ctx.r9.u64 = ctx.r9.u64 | 16;
loc_821B773C:
	// rlwinm. r10,r10,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821b7748
	if (ctx.cr0.eq) goto loc_821B7748;
	// ori r9,r9,64
	ctx.r9.u64 = ctx.r9.u64 | 64;
loc_821B7748:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x821b7760
	goto loc_821B7760;
loc_821B7750:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwimi r3,r10,16,10,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x3F0000) | (ctx.r3.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r10,r3,10
	ctx.r10.u64 = ctx.r3.u32 & 0x3FFFFF;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_821B7760:
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwimi r28,r9,18,0,15
	ctx.r28.u64 = (__builtin_rotateleft32(ctx.r9.u32, 18) & 0xFFFF0000) | (ctx.r28.u64 & 0xFFFFFFFF0000FFFF);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B7780"))) PPC_WEAK_FUNC(sub_821B7780);
PPC_FUNC_IMPL(__imp__sub_821B7780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x821B7788;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r9,12
	ctx.r9.s64 = 12;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwimi r10,r31,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r31.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// clrlwi r4,r31,21
	ctx.r4.u64 = ctx.r31.u32 & 0x7FF;
	// rlwinm r3,r10,24,27,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1F;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// bl 0x821b6d48
	ctx.lr = 0x821B77C8;
	sub_821B6D48(ctx, base);
	// rlwinm r11,r31,0,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xF0000;
	// lis r10,15
	ctx.r10.s64 = 983040;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821b7834
	if (ctx.cr6.eq) goto loc_821B7834;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,64
	ctx.r9.s64 = 4194304;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwimi r9,r10,16,10,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x3F0000) | (ctx.r9.u64 & 0xFFFFFFFFFFC0FFFF);
	// rlwinm. r7,r11,0,15,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// addi r9,r30,4
	ctx.r9.s64 = ctx.r30.s64 + 4;
	// beq 0x821b7804
	if (ctx.cr0.eq) goto loc_821B7804;
	// li r10,1
	ctx.r10.s64 = 1;
loc_821B7804:
	// rlwinm. r8,r11,0,14,14
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x821b7810
	if (ctx.cr0.eq) goto loc_821B7810;
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
loc_821B7810:
	// rlwinm. r8,r11,0,13,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x821b781c
	if (ctx.cr0.eq) goto loc_821B781C;
	// ori r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 16;
loc_821B781C:
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b7828
	if (ctx.cr0.eq) goto loc_821B7828;
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
loc_821B7828:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
	// b 0x821b7848
	goto loc_821B7848;
loc_821B7834:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r8,r30,4
	ctx.r8.s64 = ctx.r30.s64 + 4;
	// rlwimi r3,r11,16,10,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x3F0000) | (ctx.r3.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r11,r3,10
	ctx.r11.u64 = ctx.r3.u32 & 0x3FFFFF;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_821B7848:
	// rlwinm r11,r29,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xF000000;
	// lis r9,3328
	ctx.r9.s64 = 218103808;
	// rlwinm r10,r29,0,8,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFF0000;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// beq cr6,0x821b7864
	if (ctx.cr6.eq) goto loc_821B7864;
	// li r7,0
	ctx.r7.s64 = 0;
loc_821B7864:
	// lis r6,228
	ctx.r6.s64 = 14942208;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// addi r11,r11,-29644
	ctx.r11.s64 = ctx.r11.s64 + -29644;
	// bne cr6,0x821b7894
	if (!ctx.cr6.eq) goto loc_821B7894;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x821b7894
	if (!ctx.cr6.eq) goto loc_821B7894;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// addi r10,r8,4
	ctx.r10.s64 = ctx.r8.s64 + 4;
	// b 0x821b78f4
	goto loc_821B78F4;
loc_821B7894:
	// lis r9,68
	ctx.r9.s64 = 4456448;
	// rlwinm r10,r10,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// ori r5,r9,32
	ctx.r5.u64 = ctx.r9.u64 | 32;
	// rlwinm r9,r10,2,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r4,r10,2,28,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r4,r4,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// rlwinm r4,r4,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// or r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 | ctx.r9.u64;
	// rlwinm r4,r10,2,28,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// rlwinm r10,r10,0,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC;
	// lwzx r4,r4,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r4,r4,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// stw r5,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r5.u32);
	// rlwinm r5,r10,12,0,19
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFFF000;
	// or r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 | ctx.r9.u64;
	// addi r10,r8,4
	ctx.r10.s64 = ctx.r8.s64 + 4;
	// or r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 | ctx.r9.u64;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_821B78F4:
	// cmplw cr6,r28,r6
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x821b7954
	if (ctx.cr6.eq) goto loc_821B7954;
	// lis r8,68
	ctx.r8.s64 = 4456448;
	// rlwinm r9,r28,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 16) & 0xFFFF;
	// ori r8,r8,33
	ctx.r8.u64 = ctx.r8.u64 | 33;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// rlwinm r8,r9,2,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r7,r9,2,28,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// lwzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwzx r7,r7,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// rlwinm r7,r7,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// rlwinm r7,r9,2,28,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC;
	// rlwinm r9,r9,0,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC;
	// lwzx r7,r7,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r9,r7,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r7,r11,12,0,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFFFF000;
	// or r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 | ctx.r11.u64;
	// b 0x821b795c
	goto loc_821B795C;
loc_821B7954:
	// lis r11,4
	ctx.r11.s64 = 262144;
	// ori r11,r11,33
	ctx.r11.u64 = ctx.r11.u64 | 33;
loc_821B795C:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B7970"))) PPC_WEAK_FUNC(sub_821B7970);
PPC_FUNC_IMPL(__imp__sub_821B7970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e0
	ctx.lr = 0x821B7978;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r8,71
	ctx.r8.s64 = 71;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwimi r9,r11,12,21,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF8FF);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// clrlwi r4,r11,21
	ctx.r4.u64 = ctx.r11.u32 & 0x7FF;
	// rlwinm r3,r9,24,27,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0x1F;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// rlwinm r28,r11,0,12,15
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000;
	// addi r30,r10,4
	ctx.r30.s64 = ctx.r10.s64 + 4;
	// bl 0x821b6d48
	ctx.lr = 0x821B79BC;
	sub_821B6D48(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwimi r11,r31,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// clrlwi r31,r31,21
	ctx.r31.u64 = ctx.r31.u32 & 0x7FF;
	// rlwinm. r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b79d8
	if (ctx.cr0.eq) goto loc_821B79D8;
	// bl 0x822fa658
	ctx.lr = 0x821B79D8;
	sub_822FA658(ctx, base);
loc_821B79D8:
	// lis r11,15
	ctx.r11.s64 = 983040;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// beq cr6,0x821b7a40
	if (ctx.cr6.eq) goto loc_821B7A40;
	// lis r10,64
	ctx.r10.s64 = 4194304;
	// clrlwi r9,r29,16
	ctx.r9.u64 = ctx.r29.u32 & 0xFFFF;
	// rlwimi r10,r11,16,10,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x3F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFC0FFFF);
	// rlwinm. r8,r28,0,15,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// beq 0x821b7a10
	if (ctx.cr0.eq) goto loc_821B7A10;
	// li r11,1
	ctx.r11.s64 = 1;
loc_821B7A10:
	// rlwinm. r9,r28,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821b7a1c
	if (ctx.cr0.eq) goto loc_821B7A1C;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
loc_821B7A1C:
	// rlwinm. r9,r28,0,13,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821b7a28
	if (ctx.cr0.eq) goto loc_821B7A28;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
loc_821B7A28:
	// rlwinm. r9,r28,0,12,12
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821b7a34
	if (ctx.cr0.eq) goto loc_821B7A34;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
loc_821B7A34:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// b 0x821b7a50
	goto loc_821B7A50;
loc_821B7A40:
	// rlwimi r29,r11,16,10,15
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x3F0000) | (ctx.r29.u64 & 0xFFFFFFFFFFC0FFFF);
	// addi r9,r30,4
	ctx.r9.s64 = ctx.r30.s64 + 4;
	// clrlwi r11,r29,10
	ctx.r11.u64 = ctx.r29.u32 & 0x3FFFFF;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_821B7A50:
	// li r8,17
	ctx.r8.s64 = 17;
	// rlwinm r10,r26,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 16) & 0xFFFF;
	// rlwimi r31,r8,18,0,15
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r8.u32, 18) & 0xFFFF0000) | (ctx.r31.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r8,r10,2,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// rlwinm r6,r10,2,28,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// addi r11,r11,-29644
	ctx.r11.s64 = ctx.r11.s64 + -29644;
	// stw r31,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r31.u32);
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r7,r9,4
	ctx.r7.s64 = ctx.r9.s64 + 4;
	// lwzx r6,r6,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lwzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r6,r6,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// or r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 | ctx.r8.u64;
	// rlwinm r6,r10,2,28,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// rlwinm r10,r10,0,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC;
	// lwzx r6,r6,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r10,r6,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r6,r11,12,0,19
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFFFF000;
	// or r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 | ctx.r8.u64;
	// or r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 | ctx.r11.u64;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r7,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r7.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e9930
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B7AC0"))) PPC_WEAK_FUNC(sub_821B7AC0);
PPC_FUNC_IMPL(__imp__sub_821B7AC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98b8
	ctx.lr = 0x821B7AC8;
	__savegprlr_16(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r18,r7
	ctx.r18.u64 = ctx.r7.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// lwz r29,0(r18)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// addi r31,r10,4
	ctx.r31.s64 = ctx.r10.s64 + 4;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r17,r11,0,3,3
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// rlwinm r16,r11,0,1,1
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// clrlwi r24,r11,16
	ctx.r24.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x821b7b0c
	if (!ctx.cr0.eq) goto loc_821B7B0C;
	// bl 0x822fa658
	ctx.lr = 0x821B7B0C;
	sub_822FA658(ctx, base);
loc_821B7B0C:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// lwz r27,0(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r28,r31,4
	ctx.r28.s64 = ctx.r31.s64 + 4;
	// ori r23,r11,512
	ctx.r23.u64 = ctx.r11.u64 | 512;
	// mr r19,r27
	ctx.r19.u64 = ctx.r27.u64;
	// cmplw cr6,r22,r23
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x821b7b7c
	if (!ctx.cr6.lt) goto loc_821B7B7C;
	// lwz r11,428(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 428);
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// addi r9,r11,25
	ctx.r9.s64 = ctx.r11.s64 + 25;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r9,r9,r26
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r26.u32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x821b7b7c
	if (!ctx.cr6.eq) goto loc_821B7B7C;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b7b5c
	if (!ctx.cr6.eq) goto loc_821B7B5C;
	// bl 0x822fa658
	ctx.lr = 0x821B7B5C;
	sub_822FA658(ctx, base);
loc_821B7B5C:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x821b7b68
	if (ctx.cr6.eq) goto loc_821B7B68;
	// bl 0x822fa658
	ctx.lr = 0x821B7B68;
	sub_822FA658(ctx, base);
loc_821B7B68:
	// lis r12,-28673
	ctx.r12.s64 = -1879113728;
	// ori r12,r12,57360
	ctx.r12.u64 = ctx.r12.u64 | 57360;
	// and r11,r27,r12
	ctx.r11.u64 = ctx.r27.u64 & ctx.r12.u64;
	// oris r27,r11,15
	ctx.r27.u64 = ctx.r11.u64 | 983040;
	// ori r27,r27,16
	ctx.r27.u64 = ctx.r27.u64 | 16;
loc_821B7B7C:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x821b7bb0
	if (ctx.cr6.eq) goto loc_821B7BB0;
	// lis r12,-28673
	ctx.r12.s64 = -1879113728;
	// lwz r21,0(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// ori r12,r12,57377
	ctx.r12.u64 = ctx.r12.u64 | 57377;
	// cmplw cr6,r22,r23
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r23.u32, ctx.xer);
	// and r11,r27,r12
	ctx.r11.u64 = ctx.r27.u64 & ctx.r12.u64;
	// oris r27,r11,15
	ctx.r27.u64 = ctx.r11.u64 | 983040;
	// ori r27,r27,33
	ctx.r27.u64 = ctx.r27.u64 | 33;
	// bge cr6,0x821b7bb4
	if (!ctx.cr6.lt) goto loc_821B7BB4;
	// bl 0x822fa658
	ctx.lr = 0x821B7BAC;
	sub_822FA658(ctx, base);
	// b 0x821b7bb4
	goto loc_821B7BB4;
loc_821B7BB0:
	// lwz r21,80(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_821B7BB4:
	// li r25,1
	ctx.r25.s64 = 1;
	// cmpwi cr6,r30,13
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 13, ctx.xer);
	// bne cr6,0x821b7bd8
	if (!ctx.cr6.eq) goto loc_821B7BD8;
	// cmplwi cr6,r24,80
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 80, ctx.xer);
	// lis r11,67
	ctx.r11.s64 = 4390912;
	// beq cr6,0x821b7bd0
	if (ctx.cr6.eq) goto loc_821B7BD0;
	// lis r11,2
	ctx.r11.s64 = 131072;
loc_821B7BD0:
	// ori r11,r11,13
	ctx.r11.u64 = ctx.r11.u64 | 13;
	// b 0x821b7cc0
	goto loc_821B7CC0;
loc_821B7BD8:
	// cmpwi cr6,r30,69
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 69, ctx.xer);
	// bne cr6,0x821b7c44
	if (!ctx.cr6.eq) goto loc_821B7C44;
	// li r31,69
	ctx.r31.s64 = 69;
	// cmplwi cr6,r24,20
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 20, ctx.xer);
	// beq cr6,0x821b7c38
	if (ctx.cr6.eq) goto loc_821B7C38;
	// cmplwi cr6,r24,21
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 21, ctx.xer);
	// beq cr6,0x821b7c2c
	if (ctx.cr6.eq) goto loc_821B7C2C;
	// cmplwi cr6,r24,22
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 22, ctx.xer);
	// beq cr6,0x821b7c24
	if (ctx.cr6.eq) goto loc_821B7C24;
	// cmplwi cr6,r24,23
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 23, ctx.xer);
	// beq cr6,0x821b7c1c
	if (ctx.cr6.eq) goto loc_821B7C1C;
	// cmplwi cr6,r24,24
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 24, ctx.xer);
	// beq cr6,0x821b7c14
	if (ctx.cr6.eq) goto loc_821B7C14;
	// bl 0x822fa658
	ctx.lr = 0x821B7C10;
	sub_822FA658(ctx, base);
	// b 0x821b7c3c
	goto loc_821B7C3C;
loc_821B7C14:
	// lis r31,4
	ctx.r31.s64 = 262144;
	// b 0x821b7c30
	goto loc_821B7C30;
loc_821B7C1C:
	// lis r31,3
	ctx.r31.s64 = 196608;
	// b 0x821b7c30
	goto loc_821B7C30;
loc_821B7C24:
	// lis r31,2
	ctx.r31.s64 = 131072;
	// b 0x821b7c30
	goto loc_821B7C30;
loc_821B7C2C:
	// lis r31,1
	ctx.r31.s64 = 65536;
loc_821B7C30:
	// ori r31,r31,69
	ctx.r31.u64 = ctx.r31.u64 | 69;
	// b 0x821b7c3c
	goto loc_821B7C3C;
loc_821B7C38:
	// li r31,69
	ctx.r31.s64 = 69;
loc_821B7C3C:
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// b 0x821b7cc4
	goto loc_821B7CC4;
loc_821B7C44:
	// cmpwi cr6,r30,61
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 61, ctx.xer);
	// beq cr6,0x821b7cbc
	if (ctx.cr6.eq) goto loc_821B7CBC;
	// cmpwi cr6,r30,60
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 60, ctx.xer);
	// beq cr6,0x821b7cbc
	if (ctx.cr6.eq) goto loc_821B7CBC;
	// cmpwi cr6,r30,76
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 76, ctx.xer);
	// beq cr6,0x821b7cbc
	if (ctx.cr6.eq) goto loc_821B7CBC;
	// cmpwi cr6,r30,81
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 81, ctx.xer);
	// beq cr6,0x821b7cb0
	if (ctx.cr6.eq) goto loc_821B7CB0;
	// cmpwi cr6,r30,85
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 85, ctx.xer);
	// beq cr6,0x821b7cb0
	if (ctx.cr6.eq) goto loc_821B7CB0;
	// cmpwi cr6,r30,37
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 37, ctx.xer);
	// beq cr6,0x821b7c7c
	if (ctx.cr6.eq) goto loc_821B7C7C;
	// cmpwi cr6,r30,38
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 38, ctx.xer);
	// bne cr6,0x821b7cbc
	if (!ctx.cr6.eq) goto loc_821B7CBC;
loc_821B7C7C:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// clrlwi r10,r30,16
	ctx.r10.u64 = ctx.r30.u32 & 0xFFFF;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821b7c94
	if (!ctx.cr6.eq) goto loc_821B7C94;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x821b7ca4
	goto loc_821B7CA4;
loc_821B7C94:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// beq cr6,0x821b7ca4
	if (ctx.cr6.eq) goto loc_821B7CA4;
	// rlwinm r11,r19,10,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 10) & 0x1;
loc_821B7CA4:
	// rlwimi r10,r11,24,7,7
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 24) & 0x1000000) | (ctx.r10.u64 & 0xFFFFFFFFFEFFFFFF);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// b 0x821b7cc4
	goto loc_821B7CC4;
loc_821B7CB0:
	// rlwimi r30,r25,17,0,15
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r25.u32, 17) & 0xFFFF0000) | (ctx.r30.u64 & 0xFFFFFFFF0000FFFF);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// b 0x821b7cc4
	goto loc_821B7CC4;
loc_821B7CBC:
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
loc_821B7CC0:
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_821B7CC4:
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x821b7428
	ctx.lr = 0x821B7CDC;
	sub_821B7428(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821b7cec
	if (!ctx.cr0.eq) goto loc_821B7CEC;
	// bl 0x822fa658
	ctx.lr = 0x821B7CEC;
	sub_822FA658(ctx, base);
loc_821B7CEC:
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r28,4
	ctx.r31.s64 = ctx.r28.s64 + 4;
	// rlwinm r11,r30,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x821b7d1c
	if (!ctx.cr6.eq) goto loc_821B7D1C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821b7d14
	if (!ctx.cr0.eq) goto loc_821B7D14;
	// bl 0x822fa658
	ctx.lr = 0x821B7D14;
	sub_822FA658(ctx, base);
loc_821B7D14:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_821B7D1C:
	// cmplwi cr6,r24,7
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 7, ctx.xer);
	// beq cr6,0x821b7d44
	if (ctx.cr6.eq) goto loc_821B7D44;
	// cmplwi cr6,r24,15
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 15, ctx.xer);
	// beq cr6,0x821b7d44
	if (ctx.cr6.eq) goto loc_821B7D44;
	// cmplwi cr6,r24,32
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 32, ctx.xer);
	// beq cr6,0x821b7d44
	if (ctx.cr6.eq) goto loc_821B7D44;
	// cmplwi cr6,r24,37
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 37, ctx.xer);
	// beq cr6,0x821b7ddc
	if (ctx.cr6.eq) goto loc_821B7DDC;
	// cmplwi cr6,r24,79
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 79, ctx.xer);
	// bne cr6,0x821b7db8
	if (!ctx.cr6.eq) goto loc_821B7DB8;
loc_821B7D44:
	// rlwinm r11,r30,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xF000000;
	// lis r10,256
	ctx.r10.s64 = 16777216;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821b7e28
	if (ctx.cr6.eq) goto loc_821B7E28;
	// lis r10,768
	ctx.r10.s64 = 50331648;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821b7e20
	if (ctx.cr6.eq) goto loc_821B7E20;
	// lis r10,1280
	ctx.r10.s64 = 83886080;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821b7e14
	if (ctx.cr6.eq) goto loc_821B7E14;
	// lis r10,2048
	ctx.r10.s64 = 134217728;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821b7e08
	if (ctx.cr6.eq) goto loc_821B7E08;
	// lis r10,3072
	ctx.r10.s64 = 201326592;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821b7e2c
	if (!ctx.cr6.eq) goto loc_821B7E2C;
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x821b7e0c
	goto loc_821B7E0C;
loc_821B7D8C:
	// rlwinm r11,r30,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2000;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x821b7db8
	if (!ctx.cr6.eq) goto loc_821B7DB8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821b7db0
	if (!ctx.cr0.eq) goto loc_821B7DB0;
	// bl 0x822fa658
	ctx.lr = 0x821B7DB0;
	sub_822FA658(ctx, base);
loc_821B7DB0:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_821B7DB8:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b7520
	ctx.lr = 0x821B7DCC;
	sub_821B7520(ctx, base);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r30,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821b7d8c
	if (!ctx.cr0.eq) goto loc_821B7D8C;
	// b 0x821b7eac
	goto loc_821B7EAC;
loc_821B7DDC:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b7520
	ctx.lr = 0x821B7DF0;
	sub_821B7520(ctx, base);
	// b 0x821b7df8
	goto loc_821B7DF8;
loc_821B7DF4:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_821B7DF8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821b7df4
	if (!ctx.cr0.eq) goto loc_821B7DF4;
	// b 0x821b7eac
	goto loc_821B7EAC;
loc_821B7E08:
	// li r11,7
	ctx.r11.s64 = 7;
loc_821B7E0C:
	// rlwimi r30,r11,24,4,7
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r11.u32, 24) & 0xF000000) | (ctx.r30.u64 & 0xFFFFFFFFF0FFFFFF);
	// b 0x821b7e2c
	goto loc_821B7E2C;
loc_821B7E14:
	// rlwinm r11,r30,0,8,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF;
	// oris r30,r11,1024
	ctx.r30.u64 = ctx.r11.u64 | 67108864;
	// b 0x821b7e2c
	goto loc_821B7E2C;
loc_821B7E20:
	// rlwimi r30,r25,25,6,7
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r25.u32, 25) & 0x3000000) | (ctx.r30.u64 & 0xFFFFFFFFFCFFFFFF);
	// b 0x821b7e2c
	goto loc_821B7E2C;
loc_821B7E28:
	// rlwinm r30,r30,0,8,6
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF;
loc_821B7E2C:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lis r5,16
	ctx.r5.s64 = 1048576;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b7520
	ctx.lr = 0x821B7E40;
	sub_821B7520(ctx, base);
	// cmplwi cr6,r24,32
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 32, ctx.xer);
	// bne cr6,0x821b7e9c
	if (!ctx.cr6.eq) goto loc_821B7E9C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821b7e58
	if (!ctx.cr0.eq) goto loc_821B7E58;
	// bl 0x822fa658
	ctx.lr = 0x821B7E58;
	sub_822FA658(ctx, base);
loc_821B7E58:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// rlwinm r11,r30,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x821b7e88
	if (!ctx.cr6.eq) goto loc_821B7E88;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821b7e80
	if (!ctx.cr0.eq) goto loc_821B7E80;
	// bl 0x822fa658
	ctx.lr = 0x821B7E80;
	sub_822FA658(ctx, base);
loc_821B7E80:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_821B7E88:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b7520
	ctx.lr = 0x821B7E9C;
	sub_821B7520(ctx, base);
loc_821B7E9C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b7eac
	if (ctx.cr0.eq) goto loc_821B7EAC;
	// bl 0x822fa658
	ctx.lr = 0x821B7EAC;
	sub_822FA658(ctx, base);
loc_821B7EAC:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x821b7ecc
	if (ctx.cr6.eq) goto loc_821B7ECC;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lis r5,228
	ctx.r5.s64 = 14942208;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x821b7780
	ctx.lr = 0x821B7ECC;
	sub_821B7780(ctx, base);
loc_821B7ECC:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x821b7f20
	if (ctx.cr6.eq) goto loc_821B7F20;
	// cmplw cr6,r22,r23
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x821b7ee0
	if (ctx.cr6.lt) goto loc_821B7EE0;
	// bl 0x822fa658
	ctx.lr = 0x821B7EE0;
	sub_822FA658(ctx, base);
loc_821B7EE0:
	// lwz r11,428(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 428);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r11,r11,25
	ctx.r11.s64 = ctx.r11.s64 + 25;
	// li r4,16
	ctx.r4.s64 = 16;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x821b76a8
	ctx.lr = 0x821B7F04;
	sub_821B76A8(ctx, base);
	// lwz r11,428(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 428);
	// lwz r10,424(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 424);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r11,428(r26)
	PPC_STORE_U32(ctx.r26.u32 + 428, ctx.r11.u32);
	// ble cr6,0x821b7f20
	if (!ctx.cr6.gt) goto loc_821B7F20;
	// bl 0x822fa658
	ctx.lr = 0x821B7F20;
	sub_822FA658(ctx, base);
loc_821B7F20:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r11.u32);
	// stw r31,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r31.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822e9908
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B7F34"))) PPC_WEAK_FUNC(sub_821B7F34);
PPC_FUNC_IMPL(__imp__sub_821B7F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B7F38"))) PPC_WEAK_FUNC(sub_821B7F38);
PPC_FUNC_IMPL(__imp__sub_821B7F38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98d4
	ctx.lr = 0x821B7F40;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x821b7f6c
	if (!ctx.cr6.lt) goto loc_821B7F6C;
	// bl 0x822fa658
	ctx.lr = 0x821B7F6C;
	sub_822FA658(ctx, base);
loc_821B7F6C:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r27,1
	ctx.r27.s64 = 1;
	// lwz r31,0(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r26,r11,4
	ctx.r26.s64 = ctx.r11.s64 + 4;
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmplwi cr6,r10,28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 28, ctx.xer);
	// bne cr6,0x821b7fa8
	if (!ctx.cr6.eq) goto loc_821B7FA8;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821b7fa4
	if (!ctx.cr6.eq) goto loc_821B7FA4;
	// li r28,43
	ctx.r28.s64 = 43;
	// stw r27,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r27.u32);
	// b 0x821b7fb4
	goto loc_821B7FB4;
loc_821B7FA4:
	// li r28,83
	ctx.r28.s64 = 83;
loc_821B7FA8:
	// cmplwi cr6,r10,96
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 96, ctx.xer);
	// bgt cr6,0x821b8400
	if (ctx.cr6.gt) goto loc_821B8400;
	// beq cr6,0x821b83c0
	if (ctx.cr6.eq) goto loc_821B83C0;
loc_821B7FB4:
	// addi r11,r10,-25
	ctx.r11.s64 = ctx.r10.s64 + -25;
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// bgt cr6,0x821b8400
	if (ctx.cr6.gt) goto loc_821B8400;
	// lis r12,-32251
	ctx.r12.s64 = -2113601536;
	// addi r12,r12,56
	ctx.r12.s64 = ctx.r12.s64 + 56;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32229
	ctx.r12.s64 = -2112159744;
	// addi r12,r12,32744
	ctx.r12.s64 = ctx.r12.s64 + 32744;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_821B7FE8;
	case 1:
		goto loc_821B8050;
	case 2:
		goto loc_821B8228;
	case 3:
		goto loc_821B8218;
	case 4:
		goto loc_821B8218;
	case 5:
		goto loc_821B82B4;
	case 6:
		goto loc_821B8400;
	case 7:
		goto loc_821B8400;
	case 8:
		goto loc_821B8400;
	case 9:
		goto loc_821B8400;
	case 10:
		goto loc_821B8400;
	case 11:
		goto loc_821B8400;
	case 12:
		goto loc_821B8400;
	case 13:
		goto loc_821B8254;
	case 14:
		goto loc_821B8218;
	case 15:
		goto loc_821B8318;
	case 16:
		goto loc_821B8400;
	case 17:
		goto loc_821B8180;
	case 18:
		goto loc_821B81D0;
	case 19:
		goto loc_821B8218;
	default:
		__builtin_unreachable();
	}
loc_821B7FE8:
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// clrlwi r31,r11,21
	ctx.r31.u64 = ctx.r11.u32 & 0x7FF;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,4608
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4608, ctx.xer);
	// beq cr6,0x821b8018
	if (ctx.cr6.eq) goto loc_821B8018;
	// bl 0x822fa658
	ctx.lr = 0x821B8018;
	sub_822FA658(ctx, base);
loc_821B8018:
	// cmplwi cr6,r31,2048
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2048, ctx.xer);
	// blt cr6,0x821b8024
	if (ctx.cr6.lt) goto loc_821B8024;
	// bl 0x822fa658
	ctx.lr = 0x821B8024;
	sub_822FA658(ctx, base);
loc_821B8024:
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x821b8040
	if (ctx.cr6.lt) goto loc_821B8040;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,768
	ctx.r11.u64 = ctx.r11.u64 | 768;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x821b8040
	if (!ctx.cr6.lt) goto loc_821B8040;
	// bl 0x822fa658
	ctx.lr = 0x821B8040;
	sub_822FA658(ctx, base);
loc_821B8040:
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// addi r31,r30,4
	ctx.r31.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x821b8404
	goto loc_821B8404;
loc_821B8050:
	// addi r11,r26,4
	ctx.r11.s64 = ctx.r26.s64 + 4;
	// lwz r28,0(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r11,4
	ctx.r26.s64 = ctx.r11.s64 + 4;
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// rlwimi r11,r29,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r27,r11,24,27,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1F;
	// cmplwi cr6,r27,14
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 14, ctx.xer);
	// beq cr6,0x821b8080
	if (ctx.cr6.eq) goto loc_821B8080;
	// cmplwi cr6,r27,19
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 19, ctx.xer);
	// beq cr6,0x821b8080
	if (ctx.cr6.eq) goto loc_821B8080;
	// bl 0x822fa658
	ctx.lr = 0x821B8080;
	sub_822FA658(ctx, base);
loc_821B8080:
	// rlwinm r11,r29,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x821b8090
	if (!ctx.cr6.eq) goto loc_821B8090;
	// bl 0x822fa658
	ctx.lr = 0x821B8090;
	sub_822FA658(ctx, base);
loc_821B8090:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// clrlwi r30,r28,21
	ctx.r30.u64 = ctx.r28.u32 & 0x7FF;
	// rlwimi r11,r28,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r28.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,4608
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4608, ctx.xer);
	// beq cr6,0x821b80ac
	if (ctx.cr6.eq) goto loc_821B80AC;
	// bl 0x822fa658
	ctx.lr = 0x821B80AC;
	sub_822FA658(ctx, base);
loc_821B80AC:
	// cmplwi cr6,r30,2048
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2048, ctx.xer);
	// blt cr6,0x821b80b8
	if (ctx.cr6.lt) goto loc_821B80B8;
	// bl 0x822fa658
	ctx.lr = 0x821B80B8;
	sub_822FA658(ctx, base);
loc_821B80B8:
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16, ctx.xer);
	// blt cr6,0x821b80d4
	if (ctx.cr6.lt) goto loc_821B80D4;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,768
	ctx.r11.u64 = ctx.r11.u64 | 768;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x821b80d4
	if (!ctx.cr6.lt) goto loc_821B80D4;
	// bl 0x822fa658
	ctx.lr = 0x821B80D4;
	sub_822FA658(ctx, base);
loc_821B80D4:
	// cmplwi cr6,r27,19
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 19, ctx.xer);
	// bne cr6,0x821b8108
	if (!ctx.cr6.eq) goto loc_821B8108;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,52
	ctx.r4.s64 = 52;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821b6e48
	ctx.lr = 0x821B80EC;
	sub_821B6E48(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,8
	ctx.r10.s64 = 8;
	// clrlwi r9,r30,16
	ctx.r9.u64 = ctx.r30.u32 & 0xFFFF;
	// li r8,41
	ctx.r8.s64 = 41;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x821b816c
	goto loc_821B816C;
loc_821B8108:
	// lis r9,3328
	ctx.r9.s64 = 218103808;
	// rlwinm r10,r29,0,4,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xF000000;
	// clrlwi r11,r29,21
	ctx.r11.u64 = ctx.r29.u32 & 0x7FF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// bne cr6,0x821b8160
	if (!ctx.cr6.eq) goto loc_821B8160;
	// li r10,53
	ctx.r10.s64 = 53;
	// li r8,39
	ctx.r8.s64 = 39;
	// li r7,8
	ctx.r7.s64 = 8;
	// clrlwi r6,r30,16
	ctx.r6.u64 = ctx.r30.u32 & 0xFFFF;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r10,41
	ctx.r10.s64 = 41;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x821b8310
	goto loc_821B8310;
loc_821B8160:
	// li r10,9
	ctx.r10.s64 = 9;
	// clrlwi r8,r30,16
	ctx.r8.u64 = ctx.r30.u32 & 0xFFFF;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_821B816C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
loc_821B8178:
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// b 0x821b8404
	goto loc_821B8404;
loc_821B8180:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b8190
	if (!ctx.cr6.eq) goto loc_821B8190;
	// bl 0x822fa658
	ctx.lr = 0x821B8190;
	sub_822FA658(ctx, base);
loc_821B8190:
	// addi r3,r29,12
	ctx.r3.s64 = ctx.r29.s64 + 12;
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x821b7060
	ctx.lr = 0x821B819C;
	sub_821B7060(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b8218
	if (ctx.cr0.eq) goto loc_821B8218;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b8218
	if (ctx.cr6.eq) goto loc_821B8218;
	// li r11,41
	ctx.r11.s64 = 41;
	// li r10,53
	ctx.r10.s64 = 53;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lhz r10,6(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// b 0x821b8310
	goto loc_821B8310;
loc_821B81D0:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b81e0
	if (!ctx.cr6.eq) goto loc_821B81E0;
	// bl 0x822fa658
	ctx.lr = 0x821B81E0;
	sub_822FA658(ctx, base);
loc_821B81E0:
	// addi r3,r29,12
	ctx.r3.s64 = ctx.r29.s64 + 12;
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x821b7060
	ctx.lr = 0x821B81EC;
	sub_821B7060(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b820c
	if (ctx.cr0.eq) goto loc_821B820C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b820c
	if (ctx.cr6.eq) goto loc_821B820C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_821B820C:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
loc_821B8218:
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x821b8404
	goto loc_821B8404;
loc_821B8228:
	// lwz r30,0(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// rlwimi r11,r30,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,3840
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3840, ctx.xer);
	// beq cr6,0x821b8248
	if (ctx.cr6.eq) goto loc_821B8248;
	// bl 0x822fa658
	ctx.lr = 0x821B8248;
	sub_822FA658(ctx, base);
loc_821B8248:
	// clrlwi. r11,r30,21
	ctx.r11.u64 = ctx.r30.u32 & 0x7FF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b8254
	if (ctx.cr0.eq) goto loc_821B8254;
	// bl 0x822fa658
	ctx.lr = 0x821B8254;
	sub_822FA658(ctx, base);
loc_821B8254:
	// lwz r30,0(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// rlwimi r11,r30,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,1792
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1792, ctx.xer);
	// beq cr6,0x821b8274
	if (ctx.cr6.eq) goto loc_821B8274;
	// bl 0x822fa658
	ctx.lr = 0x821B8274;
	sub_822FA658(ctx, base);
loc_821B8274:
	// clrlwi r11,r30,21
	ctx.r11.u64 = ctx.r30.u32 & 0x7FF;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821b8284
	if (ctx.cr6.lt) goto loc_821B8284;
	// bl 0x822fa658
	ctx.lr = 0x821B8284;
	sub_822FA658(ctx, base);
loc_821B8284:
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x821b7520
	ctx.lr = 0x821B82AC;
	sub_821B7520(ctx, base);
loc_821B82AC:
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x821b8404
	goto loc_821B8404;
loc_821B82B4:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// clrlwi r30,r11,21
	ctx.r30.u64 = ctx.r11.u32 & 0x7FF;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,4608
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4608, ctx.xer);
	// beq cr6,0x821b82d8
	if (ctx.cr6.eq) goto loc_821B82D8;
	// bl 0x822fa658
	ctx.lr = 0x821B82D8;
	sub_822FA658(ctx, base);
loc_821B82D8:
	// cmplwi cr6,r30,2048
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2048, ctx.xer);
	// blt cr6,0x821b82e4
	if (ctx.cr6.lt) goto loc_821B82E4;
	// bl 0x822fa658
	ctx.lr = 0x821B82E4;
	sub_822FA658(ctx, base);
loc_821B82E4:
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16, ctx.xer);
	// blt cr6,0x821b8300
	if (ctx.cr6.lt) goto loc_821B8300;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,768
	ctx.r11.u64 = ctx.r11.u64 | 768;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x821b8300
	if (!ctx.cr6.lt) goto loc_821B8300;
	// bl 0x822fa658
	ctx.lr = 0x821B8300;
	sub_822FA658(ctx, base);
loc_821B8300:
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// clrlwi r10,r30,16
	ctx.r10.u64 = ctx.r30.u32 & 0xFFFF;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
loc_821B8310:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x821b8178
	goto loc_821B8178;
loc_821B8318:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
	// lwz r30,0(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// rlwinm r11,r30,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x821b833c
	if (!ctx.cr6.eq) goto loc_821B833C;
	// bl 0x822fa658
	ctx.lr = 0x821B833C;
	sub_822FA658(ctx, base);
loc_821B833C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// rlwimi r11,r30,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r28,r11,24,27,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1F;
	// cmplwi cr6,r28,14
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 14, ctx.xer);
	// beq cr6,0x821b835c
	if (ctx.cr6.eq) goto loc_821B835C;
	// cmplwi cr6,r28,19
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 19, ctx.xer);
	// beq cr6,0x821b8364
	if (ctx.cr6.eq) goto loc_821B8364;
	// bl 0x822fa658
	ctx.lr = 0x821B835C;
	sub_822FA658(ctx, base);
loc_821B835C:
	// cmplwi cr6,r28,19
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 19, ctx.xer);
	// bne cr6,0x821b8370
	if (!ctx.cr6.eq) goto loc_821B8370;
loc_821B8364:
	// li r4,52
	ctx.r4.s64 = 52;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x821b83f4
	goto loc_821B83F4;
loc_821B8370:
	// li r11,53
	ctx.r11.s64 = 53;
	// rlwinm r10,r30,0,4,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xF000000;
	// lis r9,3328
	ctx.r9.s64 = 218103808;
	// clrlwi r28,r30,21
	ctx.r28.u64 = ctx.r30.u32 & 0x7FF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bne cr6,0x821b8404
	if (!ctx.cr6.eq) goto loc_821B8404;
	// li r11,39
	ctx.r11.s64 = 39;
	// addi r3,r29,12
	ctx.r3.s64 = ctx.r29.s64 + 12;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x821b7208
	ctx.lr = 0x821B83B4;
	sub_821B7208(ctx, base);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// b 0x821b8404
	goto loc_821B8404;
loc_821B83C0:
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// rlwimi r11,r31,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,4864
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4864, ctx.xer);
	// beq cr6,0x821b83e0
	if (ctx.cr6.eq) goto loc_821B83E0;
	// bl 0x822fa658
	ctx.lr = 0x821B83E0;
	sub_822FA658(ctx, base);
loc_821B83E0:
	// clrlwi. r11,r31,21
	ctx.r11.u64 = ctx.r31.u32 & 0x7FF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b83ec
	if (ctx.cr0.eq) goto loc_821B83EC;
	// bl 0x822fa658
	ctx.lr = 0x821B83EC;
	sub_822FA658(ctx, base);
loc_821B83EC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821B83F4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x821b6e48
	ctx.lr = 0x821B83FC;
	sub_821B6E48(ctx, base);
	// b 0x821b82ac
	goto loc_821B82AC;
loc_821B8400:
	// bl 0x822fa658
	ctx.lr = 0x821B8404;
	sub_822FA658(ctx, base);
loc_821B8404:
	// stw r26,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r26.u32);
	// stw r31,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r31.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822e9924
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B8414"))) PPC_WEAK_FUNC(sub_821B8414);
PPC_FUNC_IMPL(__imp__sub_821B8414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B8418"))) PPC_WEAK_FUNC(sub_821B8418);
PPC_FUNC_IMPL(__imp__sub_821B8418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98d8
	ctx.lr = 0x821B8420;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// clrlwi r31,r30,16
	ctx.r31.u64 = ctx.r30.u32 & 0xFFFF;
	// lwz r29,0(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r27,1
	ctx.r27.s64 = 1;
	// lwz r28,0(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821b84ac
	if (ctx.cr6.eq) goto loc_821B84AC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821b84a4
	if (ctx.cr6.eq) goto loc_821B84A4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821b849c
	if (ctx.cr6.eq) goto loc_821B849C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x821b8494
	if (ctx.cr6.eq) goto loc_821B8494;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x821b848c
	if (ctx.cr6.eq) goto loc_821B848C;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x821b8484
	if (ctx.cr6.eq) goto loc_821B8484;
	// bl 0x822fa658
	ctx.lr = 0x821B8480;
	sub_822FA658(ctx, base);
	// b 0x821b84b4
	goto loc_821B84B4;
loc_821B8484:
	// rlwimi r31,r27,18,13,15
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r27.u32, 18) & 0x70000) | (ctx.r31.u64 & 0xFFFFFFFFFFF8FFFF);
	// b 0x821b84b4
	goto loc_821B84B4;
loc_821B848C:
	// rlwinm r31,r31,0,16,12
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFF8FFFF;
	// b 0x821b84b4
	goto loc_821B84B4;
loc_821B8494:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x821b84b0
	goto loc_821B84B0;
loc_821B849C:
	// rlwimi r31,r27,17,13,15
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r27.u32, 17) & 0x70000) | (ctx.r31.u64 & 0xFFFFFFFFFFF8FFFF);
	// b 0x821b84b4
	goto loc_821B84B4;
loc_821B84A4:
	// rlwimi r31,r27,16,13,15
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r27.u32, 16) & 0x70000) | (ctx.r31.u64 & 0xFFFFFFFFFFF8FFFF);
	// b 0x821b84b4
	goto loc_821B84B4;
loc_821B84AC:
	// li r11,3
	ctx.r11.s64 = 3;
loc_821B84B0:
	// rlwimi r31,r11,16,13,15
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x70000) | (ctx.r31.u64 & 0xFFFFFFFFFFF8FFFF);
loc_821B84B4:
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// addi r31,r28,4
	ctx.r31.s64 = ctx.r28.s64 + 4;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpwi cr6,r30,86
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 86, ctx.xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bne cr6,0x821b8564
	if (!ctx.cr6.eq) goto loc_821B8564;
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// rlwimi r11,r30,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,4864
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4864, ctx.xer);
	// beq cr6,0x821b84ec
	if (ctx.cr6.eq) goto loc_821B84EC;
	// bl 0x822fa658
	ctx.lr = 0x821B84EC;
	sub_822FA658(ctx, base);
loc_821B84EC:
	// rlwinm r10,r30,0,12,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xF0000;
	// lis r11,15
	ctx.r11.s64 = 983040;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821b8510
	if (!ctx.cr6.eq) goto loc_821B8510;
	// lis r11,4
	ctx.r11.s64 = 262144;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x821b855c
	goto loc_821B855C;
loc_821B8510:
	// lis r11,68
	ctx.r11.s64 = 4456448;
	// rlwinm. r8,r10,0,15,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ori r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 | 32;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// beq 0x821b8530
	if (ctx.cr0.eq) goto loc_821B8530;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_821B8530:
	// rlwinm. r8,r10,0,14,14
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x821b853c
	if (ctx.cr0.eq) goto loc_821B853C;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
loc_821B853C:
	// rlwinm. r8,r10,0,13,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x821b8548
	if (ctx.cr0.eq) goto loc_821B8548;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
loc_821B8548:
	// rlwinm. r10,r10,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821b8554
	if (ctx.cr0.eq) goto loc_821B8554;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
loc_821B8554:
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// addi r31,r9,4
	ctx.r31.s64 = ctx.r9.s64 + 4;
loc_821B855C:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// b 0x821b8578
	goto loc_821B8578;
loc_821B8564:
	// cmpwi cr6,r30,52
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 52, ctx.xer);
	// bne cr6,0x821b8578
	if (!ctx.cr6.eq) goto loc_821B8578;
	// lwz r11,24(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r26)
	PPC_STORE_U32(ctx.r26.u32 + 24, ctx.r11.u32);
loc_821B8578:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r11,r30,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b85d4
	if (ctx.cr0.eq) goto loc_821B85D4;
loc_821B8584:
	// rlwinm r11,r30,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2000;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x821b85b0
	if (!ctx.cr6.eq) goto loc_821B85B0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821b85a8
	if (!ctx.cr0.eq) goto loc_821B85A8;
	// bl 0x822fa658
	ctx.lr = 0x821B85A8;
	sub_822FA658(ctx, base);
loc_821B85A8:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_821B85B0:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b7520
	ctx.lr = 0x821B85C4;
	sub_821B7520(ctx, base);
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r11,r30,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821b8584
	if (!ctx.cr0.eq) goto loc_821B8584;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_821B85D4:
	// stw r29,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r29.u32);
	// stw r31,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r31.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822e9928
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B85E4"))) PPC_WEAK_FUNC(sub_821B85E4);
PPC_FUNC_IMPL(__imp__sub_821B85E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B85E8"))) PPC_WEAK_FUNC(sub_821B85E8);
PPC_FUNC_IMPL(__imp__sub_821B85E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98d8
	ctx.lr = 0x821B85F0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821b8618
	if (ctx.cr6.lt) goto loc_821B8618;
	// bl 0x822fa658
	ctx.lr = 0x821B8618;
	sub_822FA658(ctx, base);
loc_821B8618:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// lwz r30,0(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// ori r10,r10,259
	ctx.r10.u64 = ctx.r10.u64 | 259;
	// addi r26,r11,4
	ctx.r26.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r28,r31,21
	ctx.r28.u64 = ctx.r31.u32 & 0x7FF;
	// bgt cr6,0x821b86cc
	if (ctx.cr6.gt) goto loc_821B86CC;
	// rlwinm r11,r31,0,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xF0000;
	// li r29,256
	ctx.r29.s64 = 256;
	// rlwinm. r10,r11,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821b8654
	if (ctx.cr0.eq) goto loc_821B8654;
	// li r29,257
	ctx.r29.s64 = 257;
loc_821B8654:
	// rlwinm. r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821b8660
	if (ctx.cr0.eq) goto loc_821B8660;
	// ori r29,r29,4
	ctx.r29.u64 = ctx.r29.u64 | 4;
loc_821B8660:
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b866c
	if (ctx.cr0.eq) goto loc_821B866C;
	// ori r29,r29,16
	ctx.r29.u64 = ctx.r29.u64 | 16;
loc_821B866C:
	// rlwinm r3,r31,8,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 8) & 0xF;
	// bl 0x821b6ba8
	ctx.lr = 0x821B8674;
	sub_821B6BA8(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// or r10,r3,r29
	ctx.r10.u64 = ctx.r3.u64 | ctx.r29.u64;
	// rlwimi r11,r31,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// ori r31,r10,192
	ctx.r31.u64 = ctx.r10.u64 | 192;
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 768, ctx.xer);
	// beq cr6,0x821b8694
	if (ctx.cr6.eq) goto loc_821B8694;
	// bl 0x822fa658
	ctx.lr = 0x821B8694;
	sub_822FA658(ctx, base);
loc_821B8694:
	// li r10,71
	ctx.r10.s64 = 71;
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// oris r9,r11,81
	ctx.r9.u64 = ctx.r11.u64 | 5308416;
	// oris r8,r11,17
	ctx.r8.u64 = ctx.r11.u64 | 1114112;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x821b8738
	goto loc_821B8738;
loc_821B86CC:
	// lwz r28,0(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// rlwimi r11,r28,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r28.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 768, ctx.xer);
	// beq cr6,0x821b86ec
	if (ctx.cr6.eq) goto loc_821B86EC;
	// bl 0x822fa658
	ctx.lr = 0x821B86EC;
	sub_822FA658(ctx, base);
loc_821B86EC:
	// li r11,71
	ctx.r11.s64 = 71;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x821b7428
	ctx.lr = 0x821B870C;
	sub_821B7428(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821b7520
	ctx.lr = 0x821B8724;
	sub_821B7520(ctx, base);
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821b8738
	if (ctx.cr6.eq) goto loc_821B8738;
	// bl 0x822fa658
	ctx.lr = 0x821B8738;
	sub_822FA658(ctx, base);
loc_821B8738:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// stw r26,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r26.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822e9928
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B874C"))) PPC_WEAK_FUNC(sub_821B874C);
PPC_FUNC_IMPL(__imp__sub_821B874C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B8750"))) PPC_WEAK_FUNC(sub_821B8750);
PPC_FUNC_IMPL(__imp__sub_821B8750) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98d0
	ctx.lr = 0x821B8758;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r31,0(r22)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r27,r10,0,3,3
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000000;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821b8790
	if (!ctx.cr0.eq) goto loc_821B8790;
	// bl 0x822fa658
	ctx.lr = 0x821B8790;
	sub_822FA658(ctx, base);
loc_821B8790:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r24,r30,4
	ctx.r24.s64 = ctx.r30.s64 + 4;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ori r30,r11,512
	ctx.r30.u64 = ctx.r11.u64 | 512;
	// beq cr6,0x821b87d0
	if (ctx.cr6.eq) goto loc_821B87D0;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821b87b8
	if (!ctx.cr0.eq) goto loc_821B87B8;
	// bl 0x822fa658
	ctx.lr = 0x821B87B8;
	sub_822FA658(ctx, base);
loc_821B87B8:
	// cmplw cr6,r26,r30
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x821b87c4
	if (!ctx.cr6.lt) goto loc_821B87C4;
	// bl 0x822fa658
	ctx.lr = 0x821B87C4;
	sub_822FA658(ctx, base);
loc_821B87C4:
	// lwz r25,0(r24)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// b 0x821b87d4
	goto loc_821B87D4;
loc_821B87D0:
	// lwz r25,80(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_821B87D4:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,259
	ctx.r11.u64 = ctx.r11.u64 | 259;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x821b87f0
	if (ctx.cr6.gt) goto loc_821B87F0;
	// clrlwi r3,r29,21
	ctx.r3.u64 = ctx.r29.u32 & 0x7FF;
	// li r7,17
	ctx.r7.s64 = 17;
	// b 0x821b8804
	goto loc_821B8804;
loc_821B87F0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821b72a0
	ctx.lr = 0x821B8800;
	sub_821B72A0(ctx, base);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_821B8804:
	// cmplw cr6,r26,r30
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x821b883c
	if (!ctx.cr6.lt) goto loc_821B883C;
	// li r11,55
	ctx.r11.s64 = 55;
	// lis r10,64
	ctx.r10.s64 = 4194304;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwimi r10,r7,16,10,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r7.u32, 16) & 0x3F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFC0FFFF);
	// li r8,21008
	ctx.r8.s64 = 21008;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// b 0x821b8958
	goto loc_821B8958;
loc_821B883C:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x821b8940
	if (ctx.cr6.eq) goto loc_821B8940;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r9,4
	ctx.r9.s64 = 262144;
	// ori r10,r11,13
	ctx.r10.u64 = ctx.r11.u64 | 13;
	// ori r9,r9,33
	ctx.r9.u64 = ctx.r9.u64 | 33;
	// rlwinm r11,r25,0,8,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xFF0000;
	// lis r8,228
	ctx.r8.s64 = 14942208;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// beq cr6,0x821b88d4
	if (ctx.cr6.eq) goto loc_821B88D4;
	// lis r8,68
	ctx.r8.s64 = 4456448;
	// rlwinm r10,r11,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// ori r8,r8,32
	ctx.r8.u64 = ctx.r8.u64 | 32;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// addi r11,r11,-29644
	ctx.r11.s64 = ctx.r11.s64 + -29644;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// rlwinm r8,r10,2,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// rlwinm r6,r10,2,28,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// lwzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwzx r6,r6,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// rlwinm r6,r6,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// or r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 | ctx.r8.u64;
	// rlwinm r6,r10,2,28,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// rlwinm r10,r10,0,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC;
	// lwzx r6,r6,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r10,r6,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r6,r11,12,0,19
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFFFF000;
	// or r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 | ctx.r8.u64;
	// or r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 | ctx.r11.u64;
	// b 0x821b88dc
	goto loc_821B88DC;
loc_821B88D4:
	// lis r11,4
	ctx.r11.s64 = 262144;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
loc_821B88DC:
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// rlwinm r10,r25,0,4,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xF000000;
	// lis r9,3328
	ctx.r9.s64 = 218103808;
	// rlwimi r3,r7,16,10,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r7.u32, 16) & 0x3F0000) | (ctx.r3.u64 & 0xFFFFFFFFFFC0FFFF);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// lis r10,65
	ctx.r10.s64 = 4259840;
	// li r9,21845
	ctx.r9.s64 = 21845;
	// bne cr6,0x821b891c
	if (!ctx.cr6.eq) goto loc_821B891C;
	// clrlwi r8,r3,10
	ctx.r8.u64 = ctx.r3.u32 & 0x3FFFFF;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x821b8934
	goto loc_821B8934;
loc_821B891C:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// clrlwi r10,r3,10
	ctx.r10.u64 = ctx.r3.u32 & 0x3FFFFF;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_821B8934:
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// li r3,33
	ctx.r3.s64 = 33;
	// li r7,4
	ctx.r7.s64 = 4;
loc_821B8940:
	// li r11,55
	ctx.r11.s64 = 55;
	// rlwimi r3,r7,16,10,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r7.u32, 16) & 0x3F0000) | (ctx.r3.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r10,r3,10
	ctx.r10.u64 = ctx.r3.u32 & 0x3FFFFF;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_821B8958:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// stw r24,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r24.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822e9920
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B896C"))) PPC_WEAK_FUNC(sub_821B896C);
PPC_FUNC_IMPL(__imp__sub_821B896C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B8970"))) PPC_WEAK_FUNC(sub_821B8970);
PPC_FUNC_IMPL(__imp__sub_821B8970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98b0
	ctx.lr = 0x821B8978;
	__savegprlr_14(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// lwz r20,0(r7)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// stw r7,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r7.u32);
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r15,r10,0,3,3
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000000;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821b89b0
	if (!ctx.cr0.eq) goto loc_821B89B0;
	// bl 0x822fa658
	ctx.lr = 0x821B89B0;
	sub_822FA658(ctx, base);
loc_821B89B0:
	// lwz r24,0(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r21,r31,4
	ctx.r21.s64 = ctx.r31.s64 + 4;
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// mr r16,r24
	ctx.r16.u64 = ctx.r24.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821b89d0
	if (!ctx.cr6.eq) goto loc_821B89D0;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x821b89e0
	goto loc_821B89E0;
loc_821B89D0:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// li r29,1
	ctx.r29.s64 = 1;
	// beq cr6,0x821b89e0
	if (ctx.cr6.eq) goto loc_821B89E0;
	// rlwinm r29,r24,10,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 10) & 0x1;
loc_821B89E0:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// ori r22,r11,512
	ctx.r22.u64 = ctx.r11.u64 | 512;
	// lis r11,15
	ctx.r11.s64 = 983040;
	// ori r19,r11,33
	ctx.r19.u64 = ctx.r11.u64 | 33;
	// beq cr6,0x821b8a30
	if (ctx.cr6.eq) goto loc_821B8A30;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821b8a08
	if (!ctx.cr0.eq) goto loc_821B8A08;
	// bl 0x822fa658
	ctx.lr = 0x821B8A08;
	sub_822FA658(ctx, base);
loc_821B8A08:
	// cmplw cr6,r18,r22
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r22.u32, ctx.xer);
	// bge cr6,0x821b8a14
	if (!ctx.cr6.lt) goto loc_821B8A14;
	// bl 0x822fa658
	ctx.lr = 0x821B8A14;
	sub_822FA658(ctx, base);
loc_821B8A14:
	// lis r12,-28673
	ctx.r12.s64 = -1879113728;
	// lwz r17,0(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// ori r12,r12,57377
	ctx.r12.u64 = ctx.r12.u64 | 57377;
	// and r11,r24,r12
	ctx.r11.u64 = ctx.r24.u64 & ctx.r12.u64;
	// or r24,r11,r19
	ctx.r24.u64 = ctx.r11.u64 | ctx.r19.u64;
	// b 0x821b8a34
	goto loc_821B8A34;
loc_821B8A30:
	// lwz r17,80(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_821B8A34:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b8ac8
	if (ctx.cr0.eq) goto loc_821B8AC8;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_821B8A54:
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// blt cr6,0x821b8a60
	if (ctx.cr6.lt) goto loc_821B8A60;
	// bl 0x822fa658
	ctx.lr = 0x821B8A60;
	sub_822FA658(ctx, base);
loc_821B8A60:
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// stwx r10,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stwx r26,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r26.u32);
	// rlwinm r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x821b8ab0
	if (!ctx.cr6.eq) goto loc_821B8AB0;
	// cmplw cr6,r18,r22
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r22.u32, ctx.xer);
	// bgt cr6,0x821b8a94
	if (ctx.cr6.gt) goto loc_821B8A94;
	// bl 0x822fa658
	ctx.lr = 0x821B8A94;
	sub_822FA658(ctx, base);
loc_821B8A94:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821b8aa4
	if (!ctx.cr0.eq) goto loc_821B8AA4;
	// bl 0x822fa658
	ctx.lr = 0x821B8AA4;
	sub_822FA658(ctx, base);
loc_821B8AA4:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// stwx r11,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
loc_821B8AB0:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821b8a54
	if (!ctx.cr0.eq) goto loc_821B8A54;
	// lwz r25,80(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_821B8AC8:
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// blt cr6,0x821b8af4
	if (ctx.cr6.lt) goto loc_821B8AF4;
	// cmplw cr6,r18,r22
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r22.u32, ctx.xer);
	// bge cr6,0x821b8ae0
	if (!ctx.cr6.lt) goto loc_821B8AE0;
	// bl 0x822fa658
	ctx.lr = 0x821B8AE0;
	sub_822FA658(ctx, base);
loc_821B8AE0:
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// clrlwi r31,r30,21
	ctx.r31.u64 = ctx.r30.u32 & 0x7FF;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r26,r11,0,8,15
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF0000;
	// b 0x821b8af8
	goto loc_821B8AF8;
loc_821B8AF4:
	// clrlwi r31,r16,21
	ctx.r31.u64 = ctx.r16.u32 & 0x7FF;
loc_821B8AF8:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// rlwinm. r27,r26,0,14,14
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lis r10,2048
	ctx.r10.s64 = 134217728;
	// rlwimi r11,r29,8,23,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 8) & 0x100) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFEFF);
	// beq 0x821b8b14
	if (ctx.cr0.eq) goto loc_821B8B14;
	// ori r10,r10,94
	ctx.r10.u64 = ctx.r10.u64 | 94;
	// b 0x821b8b18
	goto loc_821B8B18;
loc_821B8B14:
	// ori r10,r10,93
	ctx.r10.u64 = ctx.r10.u64 | 93;
loc_821B8B18:
	// rlwimi r10,r11,16,7,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x1FF0000) | (ctx.r10.u64 & 0xFFFFFFFFFE00FFFF);
	// addi r11,r20,4
	ctx.r11.s64 = ctx.r20.s64 + 4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r10,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne cr6,0x821b8b8c
	if (!ctx.cr6.eq) goto loc_821B8B8C;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x821b8b3c
	if (ctx.cr6.eq) goto loc_821B8B3C;
	// bl 0x822fa658
	ctx.lr = 0x821B8B3C;
	sub_822FA658(ctx, base);
loc_821B8B3C:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// cmplw cr6,r18,r11
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821b8b50
	if (ctx.cr6.lt) goto loc_821B8B50;
	// bl 0x822fa658
	ctx.lr = 0x821B8B50;
	sub_822FA658(ctx, base);
loc_821B8B50:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x821b7428
	ctx.lr = 0x821B8B60;
	sub_821B7428(ctx, base);
	// li r11,81
	ctx.r11.s64 = 81;
	// lis r10,128
	ctx.r10.s64 = 8388608;
	// rlwimi r31,r11,16,0,15
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r31.u64 & 0xFFFFFFFF0000FFFF);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ori r10,r10,12816
	ctx.r10.u64 = ctx.r10.u64 | 12816;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x821b8ce0
	goto loc_821B8CE0;
loc_821B8B8C:
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// bne cr6,0x821b8be0
	if (!ctx.cr6.eq) goto loc_821B8BE0;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// cmplw cr6,r18,r11
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821b8ba8
	if (ctx.cr6.eq) goto loc_821B8BA8;
	// bl 0x822fa658
	ctx.lr = 0x821B8BA8;
	sub_822FA658(ctx, base);
loc_821B8BA8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x821b8bb4
	if (ctx.cr6.eq) goto loc_821B8BB4;
	// bl 0x822fa658
	ctx.lr = 0x821B8BB4;
	sub_822FA658(ctx, base);
loc_821B8BB4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x821b7428
	ctx.lr = 0x821B8BC4;
	sub_821B7428(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x821b7520
	ctx.lr = 0x821B8BDC;
	sub_821B7520(ctx, base);
	// b 0x821b8ce0
	goto loc_821B8CE0;
loc_821B8BE0:
	// rlwinm r29,r30,0,8,15
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFF0000;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// beq cr6,0x821b8bf4
	if (ctx.cr6.eq) goto loc_821B8BF4;
	// bl 0x822fa658
	ctx.lr = 0x821B8BF4;
	sub_822FA658(ctx, base);
loc_821B8BF4:
	// cmplw cr6,r18,r22
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r22.u32, ctx.xer);
	// bge cr6,0x821b8c00
	if (!ctx.cr6.lt) goto loc_821B8C00;
	// bl 0x822fa658
	ctx.lr = 0x821B8C00;
	sub_822FA658(ctx, base);
loc_821B8C00:
	// lis r28,228
	ctx.r28.s64 = 14942208;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x821b8c28
	if (ctx.cr6.eq) goto loc_821B8C28;
	// oris r24,r24,15
	ctx.r24.u64 = ctx.r24.u64 | 983040;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// bne cr6,0x821b8c28
	if (!ctx.cr6.eq) goto loc_821B8C28;
	// lis r12,-28673
	ctx.r12.s64 = -1879113728;
	// ori r12,r12,57377
	ctx.r12.u64 = ctx.r12.u64 | 57377;
	// and r11,r24,r12
	ctx.r11.u64 = ctx.r24.u64 & ctx.r12.u64;
	// or r24,r11,r19
	ctx.r24.u64 = ctx.r11.u64 | ctx.r19.u64;
loc_821B8C28:
	// rlwinm. r11,r26,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b8c34
	if (ctx.cr0.eq) goto loc_821B8C34;
	// lis r30,96
	ctx.r30.s64 = 6291456;
loc_821B8C34:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821b7428
	ctx.lr = 0x821B8C44;
	sub_821B7428(ctx, base);
	// lwz r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b7520
	ctx.lr = 0x821B8C60;
	sub_821B7520(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x821b8c9c
	if (ctx.cr6.eq) goto loc_821B8C9C;
	// andis. r11,r31,2816
	ctx.r11.u64 = ctx.r31.u64 & 184549376;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821b8c78
	if (ctx.cr0.eq) goto loc_821B8C78;
	// bl 0x822fa658
	ctx.lr = 0x821B8C78;
	sub_822FA658(ctx, base);
loc_821B8C78:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821b8c84
	if (ctx.cr6.eq) goto loc_821B8C84;
	// bl 0x822fa658
	ctx.lr = 0x821B8C84;
	sub_822FA658(ctx, base);
loc_821B8C84:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b7520
	ctx.lr = 0x821B8C9C;
	sub_821B7520(ctx, base);
loc_821B8C9C:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// beq cr6,0x821b8cc0
	if (ctx.cr6.eq) goto loc_821B8CC0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x821b7780
	ctx.lr = 0x821B8CBC;
	sub_821B7780(ctx, base);
	// b 0x821b8ce0
	goto loc_821B8CE0;
loc_821B8CC0:
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x821b8ce0
	if (ctx.cr6.eq) goto loc_821B8CE0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x821b7970
	ctx.lr = 0x821B8CE0;
	sub_821B7970(ctx, base);
loc_821B8CE0:
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r21,0(r14)
	PPC_STORE_U32(ctx.r14.u32 + 0, ctx.r21.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822e9900
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B8CF8"))) PPC_WEAK_FUNC(sub_821B8CF8);
PPC_FUNC_IMPL(__imp__sub_821B8CF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98b8
	ctx.lr = 0x821B8D00;
	__savegprlr_16(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r16,r7
	ctx.r16.u64 = ctx.r7.u64;
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821b8d28
	if (!ctx.cr6.eq) goto loc_821B8D28;
	// li r20,0
	ctx.r20.s64 = 0;
	// b 0x821b8d34
	goto loc_821B8D34;
loc_821B8D28:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r20,r11,27,31,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_821B8D34:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r30,r11,512
	ctx.r30.u64 = ctx.r11.u64 | 512;
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x821b8d48
	if (!ctx.cr6.lt) goto loc_821B8D48;
	// bl 0x822fa658
	ctx.lr = 0x821B8D48;
	sub_822FA658(ctx, base);
loc_821B8D48:
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// lwz r26,0(r16)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r21,r10,0,3,3
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000000;
	// clrlwi r23,r10,16
	ctx.r23.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821b8d70
	if (!ctx.cr0.eq) goto loc_821B8D70;
	// bl 0x822fa658
	ctx.lr = 0x821B8D70;
	sub_822FA658(ctx, base);
loc_821B8D70:
	// lwz r27,0(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,15
	ctx.r11.s64 = 983040;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// mr r18,r27
	ctx.r18.u64 = ctx.r27.u64;
	// ori r24,r11,33
	ctx.r24.u64 = ctx.r11.u64 | 33;
	// beq cr6,0x821b8dc4
	if (ctx.cr6.eq) goto loc_821B8DC4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821b8d9c
	if (!ctx.cr0.eq) goto loc_821B8D9C;
	// bl 0x822fa658
	ctx.lr = 0x821B8D9C;
	sub_822FA658(ctx, base);
loc_821B8D9C:
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x821b8da8
	if (ctx.cr6.gt) goto loc_821B8DA8;
	// bl 0x822fa658
	ctx.lr = 0x821B8DA8;
	sub_822FA658(ctx, base);
loc_821B8DA8:
	// lis r12,-28673
	ctx.r12.s64 = -1879113728;
	// lwz r19,0(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// ori r12,r12,57377
	ctx.r12.u64 = ctx.r12.u64 | 57377;
	// and r11,r27,r12
	ctx.r11.u64 = ctx.r27.u64 & ctx.r12.u64;
	// or r27,r11,r24
	ctx.r27.u64 = ctx.r11.u64 | ctx.r24.u64;
	// b 0x821b8dc8
	goto loc_821B8DC8;
loc_821B8DC4:
	// lwz r19,80(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_821B8DC8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r25,0
	ctx.r25.s64 = 0;
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821b8e40
	if (ctx.cr0.eq) goto loc_821B8E40;
	// li r31,0
	ctx.r31.s64 = 0;
loc_821B8DDC:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r30,r1,112
	ctx.r30.s64 = ctx.r1.s64 + 112;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// stwx r11,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// stwx r10,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r10.u32);
	// bne cr6,0x821b8e20
	if (!ctx.cr6.eq) goto loc_821B8E20;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821b8e14
	if (!ctx.cr0.eq) goto loc_821B8E14;
	// bl 0x822fa658
	ctx.lr = 0x821B8E14;
	sub_822FA658(ctx, base);
loc_821B8E14:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// stwx r11,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
loc_821B8E20:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x821b8ddc
	if (!ctx.cr0.eq) goto loc_821B8DDC;
	// cmplwi cr6,r25,4
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 4, ctx.xer);
	// ble cr6,0x821b8e40
	if (!ctx.cr6.gt) goto loc_821B8E40;
	// bl 0x822fa658
	ctx.lr = 0x821B8E40;
	sub_822FA658(ctx, base);
loc_821B8E40:
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r23,95
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 95, ctx.xer);
	// clrlwi r11,r10,21
	ctx.r11.u64 = ctx.r10.u32 & 0x7FF;
	// rlwimi r11,r20,8,23,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r20.u32, 8) & 0x100) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFEFF);
	// bne cr6,0x821b8e60
	if (!ctx.cr6.eq) goto loc_821B8E60;
	// lis r9,2560
	ctx.r9.s64 = 167772160;
	// ori r9,r9,94
	ctx.r9.u64 = ctx.r9.u64 | 94;
	// b 0x821b8e68
	goto loc_821B8E68;
loc_821B8E60:
	// lis r9,2048
	ctx.r9.s64 = 134217728;
	// ori r9,r9,95
	ctx.r9.u64 = ctx.r9.u64 | 95;
loc_821B8E68:
	// rlwimi r9,r11,16,7,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x1FF0000) | (ctx.r9.u64 & 0xFFFFFFFFFE00FFFF);
	// addi r11,r26,4
	ctx.r11.s64 = ctx.r26.s64 + 4;
	// rlwinm r28,r10,0,8,15
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF0000;
	// stw r9,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r9.u32);
	// lis r26,228
	ctx.r26.s64 = 14942208;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x821b8ea4
	if (ctx.cr6.eq) goto loc_821B8EA4;
	// oris r27,r27,15
	ctx.r27.u64 = ctx.r27.u64 | 983040;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// bne cr6,0x821b8ea4
	if (!ctx.cr6.eq) goto loc_821B8EA4;
	// lis r12,-28673
	ctx.r12.s64 = -1879113728;
	// ori r12,r12,57377
	ctx.r12.u64 = ctx.r12.u64 | 57377;
	// and r11,r27,r12
	ctx.r11.u64 = ctx.r27.u64 & ctx.r12.u64;
	// or r27,r11,r24
	ctx.r27.u64 = ctx.r11.u64 | ctx.r24.u64;
loc_821B8EA4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821b7428
	ctx.lr = 0x821B8EB4;
	sub_821B7428(ctx, base);
	// lwz r30,112(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b7520
	ctx.lr = 0x821B8ED4;
	sub_821B7520(ctx, base);
	// cmplwi cr6,r23,95
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 95, ctx.xer);
	// bne cr6,0x821b8ef8
	if (!ctx.cr6.eq) goto loc_821B8EF8;
	// andis. r11,r31,2816
	ctx.r11.u64 = ctx.r31.u64 & 184549376;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821b8eec
	if (ctx.cr0.eq) goto loc_821B8EEC;
	// bl 0x822fa658
	ctx.lr = 0x821B8EEC;
	sub_822FA658(ctx, base);
loc_821B8EEC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x821b8f24
	goto loc_821B8F24;
loc_821B8EF8:
	// cmplwi cr6,r25,4
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 4, ctx.xer);
	// beq cr6,0x821b8f04
	if (ctx.cr6.eq) goto loc_821B8F04;
	// bl 0x822fa658
	ctx.lr = 0x821B8F04;
	sub_822FA658(ctx, base);
loc_821B8F04:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x821b7520
	ctx.lr = 0x821B8F1C;
	sub_821B7520(ctx, base);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_821B8F24:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x821b7520
	ctx.lr = 0x821B8F34;
	sub_821B7520(ctx, base);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x821b8f58
	if (ctx.cr6.eq) goto loc_821B8F58;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x821b7780
	ctx.lr = 0x821B8F54;
	sub_821B7780(ctx, base);
	// b 0x821b8f78
	goto loc_821B8F78;
loc_821B8F58:
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x821b8f78
	if (ctx.cr6.eq) goto loc_821B8F78;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x821b7970
	ctx.lr = 0x821B8F78;
	sub_821B7970(ctx, base);
loc_821B8F78:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r16)
	PPC_STORE_U32(ctx.r16.u32 + 0, ctx.r11.u32);
	// stw r29,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r29.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x822e9908
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B8F8C"))) PPC_WEAK_FUNC(sub_821B8F8C);
PPC_FUNC_IMPL(__imp__sub_821B8F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B8F90"))) PPC_WEAK_FUNC(sub_821B8F90);
PPC_FUNC_IMPL(__imp__sub_821B8F90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98b0
	ctx.lr = 0x821B8F98;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r6
	ctx.r19.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// li r18,0
	ctx.r18.s64 = 0;
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// stw r31,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r31.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821b8fc4
	if (!ctx.cr6.eq) goto loc_821B8FC4;
	// mr r17,r18
	ctx.r17.u64 = ctx.r18.u64;
	// b 0x821b8fd0
	goto loc_821B8FD0;
loc_821B8FC4:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r17,r11,27,31,31
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_821B8FD0:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821b8fe4
	if (ctx.cr6.lt) goto loc_821B8FE4;
	// bl 0x822fa658
	ctx.lr = 0x821B8FE4;
	sub_822FA658(ctx, base);
loc_821B8FE4:
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// lwz r16,0(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821b9004
	if (!ctx.cr0.eq) goto loc_821B9004;
	// bl 0x822fa658
	ctx.lr = 0x821B9004;
	sub_822FA658(ctx, base);
loc_821B9004:
	// lwz r20,0(r30)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// clrlwi r30,r20,21
	ctx.r30.u64 = ctx.r20.u32 & 0x7FF;
	// rlwimi r10,r20,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r20.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r15,r11,4
	ctx.r15.s64 = ctx.r11.s64 + 4;
	// rlwinm r29,r10,24,27,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1F;
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 3, ctx.xer);
	// beq cr6,0x821b9030
	if (ctx.cr6.eq) goto loc_821B9030;
	// bl 0x822fa658
	ctx.lr = 0x821B9030;
	sub_822FA658(ctx, base);
loc_821B9030:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821b6d48
	ctx.lr = 0x821B9044;
	sub_821B6D48(ctx, base);
	// li r10,80
	ctx.r10.s64 = 80;
	// lwz r21,80(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,128
	ctx.r9.s64 = 8388608;
	// rlwimi r10,r30,16,8,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r30.u32, 16) & 0xFF0000) | (ctx.r10.u64 & 0xFFFFFFFFFF00FFFF);
	// clrlwi r11,r21,26
	ctx.r11.u64 = ctx.r21.u32 & 0x3F;
	// ori r7,r9,12816
	ctx.r7.u64 = ctx.r9.u64 | 12816;
	// rlwinm r5,r11,16,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r11,r11,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// oris r5,r5,64
	ctx.r5.u64 = ctx.r5.u64 | 4194304;
	// or r25,r11,r9
	ctx.r25.u64 = ctx.r11.u64 | ctx.r9.u64;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// or r22,r5,r9
	ctx.r22.u64 = ctx.r5.u64 | ctx.r9.u64;
	// li r23,33
	ctx.r23.s64 = 33;
	// rlwinm r8,r28,0,8,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFF0000;
	// stw r25,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r25.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r6,228
	ctx.r6.s64 = 14942208;
	// stw r22,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r22.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r22,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r22.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// beq cr6,0x821b9114
	if (ctx.cr6.eq) goto loc_821B9114;
	// rlwinm r10,r8,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// rlwinm r9,r10,2,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,-29644
	ctx.r11.s64 = ctx.r11.s64 + -29644;
	// rlwinm r8,r10,2,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// rlwinm r8,r10,2,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// rlwinm r10,r10,0,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC;
	// lwzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r10,r8,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r8,r11,12,0,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFFFF000;
	// or r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 | ctx.r9.u64;
	// or r24,r8,r11
	ctx.r24.u64 = ctx.r8.u64 | ctx.r11.u64;
	// b 0x821b9118
	goto loc_821B9118;
loc_821B9114:
	// li r24,12816
	ctx.r24.s64 = 12816;
loc_821B9118:
	// rlwinm r3,r28,0,4,7
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xF000000;
	// bl 0x821b6bf8
	ctx.lr = 0x821B9120;
	sub_821B6BF8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821b72a0
	ctx.lr = 0x821B9134;
	sub_821B72A0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x821b9164
	if (!ctx.cr6.eq) goto loc_821B9164;
	// cmplwi cr6,r24,12816
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 12816, ctx.xer);
	// bne cr6,0x821b9164
	if (!ctx.cr6.eq) goto loc_821B9164;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r26,r3,16
	ctx.r26.u64 = ctx.r3.u32 & 0xFFFF;
	// clrlwi r27,r11,26
	ctx.r27.u64 = ctx.r11.u32 & 0x3F;
	// rlwinm r11,r27,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 16) & 0xFFFF0000;
	// or r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 | ctx.r26.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// b 0x821b9190
	goto loc_821B9190;
loc_821B9164:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r26,r3,16
	ctx.r26.u64 = ctx.r3.u32 & 0xFFFF;
	// or r10,r29,r24
	ctx.r10.u64 = ctx.r29.u64 | ctx.r24.u64;
	// clrlwi r27,r11,26
	ctx.r27.u64 = ctx.r11.u32 & 0x3F;
	// rlwinm r11,r27,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 16) & 0xFFFF0000;
	// oris r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 4194304;
	// or r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 | ctx.r26.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_821B9190:
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// clrlwi r9,r30,16
	ctx.r9.u64 = ctx.r30.u32 & 0xFFFF;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// oris r9,r9,81
	ctx.r9.u64 = ctx.r9.u64 | 5308416;
	// oris r7,r10,1
	ctx.r7.u64 = ctx.r10.u64 | 65536;
	// li r8,4
	ctx.r8.s64 = 4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r18,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r18.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r22,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r22.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x821b91f8
	if (!ctx.cr6.eq) goto loc_821B91F8;
	// cmplwi cr6,r24,12816
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 12816, ctx.xer);
	// bne cr6,0x821b91f8
	if (!ctx.cr6.eq) goto loc_821B91F8;
	// rlwinm r8,r27,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 16) & 0xFFFF0000;
	// or r8,r8,r26
	ctx.r8.u64 = ctx.r8.u64 | ctx.r26.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// b 0x821b9214
	goto loc_821B9214;
loc_821B91F8:
	// rlwinm r8,r27,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 16) & 0xFFFF0000;
	// or r7,r29,r24
	ctx.r7.u64 = ctx.r29.u64 | ctx.r24.u64;
	// oris r8,r8,64
	ctx.r8.u64 = ctx.r8.u64 | 4194304;
	// or r8,r8,r26
	ctx.r8.u64 = ctx.r8.u64 | ctx.r26.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
loc_821B9214:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// oris r10,r10,65
	ctx.r10.u64 = ctx.r10.u64 | 4259840;
	// li r7,50
	ctx.r7.s64 = 50;
	// li r28,4369
	ctx.r28.s64 = 4369;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r6,93
	ctx.r6.s64 = 93;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwimi r8,r17,8,23,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r17.u32, 8) & 0x100) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFEFF);
	// cmpwi cr6,r21,4
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 4, ctx.xer);
	// clrlwi r8,r8,23
	ctx.r8.u64 = ctx.r8.u32 & 0x1FF;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwimi r6,r8,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// beq cr6,0x821b9270
	if (ctx.cr6.eq) goto loc_821B9270;
	// bl 0x822fa658
	ctx.lr = 0x821B9270;
	sub_822FA658(ctx, base);
loc_821B9270:
	// cmplwi cr6,r16,67
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 67, ctx.xer);
	// bne cr6,0x821b9294
	if (!ctx.cr6.eq) goto loc_821B9294;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x821b7428
	ctx.lr = 0x821B9288;
	sub_821B7428(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// b 0x821b93cc
	goto loc_821B93CC;
loc_821B9294:
	// cmplwi cr6,r16,68
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 68, ctx.xer);
	// bne cr6,0x821b93d0
	if (!ctx.cr6.eq) goto loc_821B93D0;
	// lis r10,68
	ctx.r10.s64 = 4456448;
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// ori r30,r10,15
	ctx.r30.u64 = ctx.r10.u64 | 15;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// li r9,64
	ctx.r9.s64 = 64;
	// li r7,272
	ctx.r7.s64 = 272;
	// rlwinm r8,r27,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 16) & 0xFFFF0000;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r25,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r25.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// oris r8,r8,64
	ctx.r8.u64 = ctx.r8.u64 | 4194304;
	// oris r11,r11,65
	ctx.r11.u64 = ctx.r11.u64 | 4259840;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// or r9,r8,r26
	ctx.r9.u64 = ctx.r8.u64 | ctx.r26.u64;
	// or r8,r29,r24
	ctx.r8.u64 = ctx.r29.u64 | ctx.r24.u64;
	// mr r29,r18
	ctx.r29.u64 = ctx.r18.u64;
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// li r9,73
	ctx.r9.s64 = 73;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm. r8,r20,0,8,11
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0xF00000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r18,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r18.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// beq 0x821b933c
	if (ctx.cr0.eq) goto loc_821B933C;
	// li r29,256
	ctx.r29.s64 = 256;
loc_821B933C:
	// rlwinm r3,r20,8,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 8) & 0xF;
	// bl 0x821b6ba8
	ctx.lr = 0x821B9344;
	sub_821B6BA8(ctx, base);
	// or. r8,r3,r29
	ctx.r8.u64 = ctx.r3.u64 | ctx.r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x821b9368
	if (!ctx.cr0.eq) goto loc_821B9368;
	// rlwinm r11,r20,0,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0xF0000;
	// lis r10,15
	ctx.r10.s64 = 983040;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821b9368
	if (!ctx.cr6.eq) goto loc_821B9368;
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// b 0x821b93b4
	goto loc_821B93B4;
loc_821B9368:
	// rlwinm r10,r20,0,12,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0xF0000;
	// stw r22,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r22.u32);
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// rlwinm. r7,r10,0,15,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x821b9384
	if (ctx.cr0.eq) goto loc_821B9384;
	// li r11,1
	ctx.r11.s64 = 1;
loc_821B9384:
	// rlwinm. r7,r10,0,14,14
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x821b9390
	if (ctx.cr0.eq) goto loc_821B9390;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
loc_821B9390:
	// rlwinm. r7,r10,0,13,13
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x821b939c
	if (ctx.cr0.eq) goto loc_821B939C;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
loc_821B939C:
	// rlwinm. r10,r10,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821b93a8
	if (ctx.cr0.eq) goto loc_821B93A8;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
loc_821B93A8:
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
loc_821B93B4:
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r10,8738
	ctx.r10.s64 = 8738;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_821B93CC:
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
loc_821B93D0:
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r15,0(r14)
	PPC_STORE_U32(ctx.r14.u32 + 0, ctx.r15.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822e9900
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B93E4"))) PPC_WEAK_FUNC(sub_821B93E4);
PPC_FUNC_IMPL(__imp__sub_821B93E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B93E8"))) PPC_WEAK_FUNC(sub_821B93E8);
PPC_FUNC_IMPL(__imp__sub_821B93E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98b0
	ctx.lr = 0x821B93F0;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r14,r7
	ctx.r14.u64 = ctx.r7.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821b9414
	if (ctx.cr6.eq) goto loc_821B9414;
	// bl 0x822fa658
	ctx.lr = 0x821B9414;
	sub_822FA658(ctx, base);
loc_821B9414:
	// lwz r11,0(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// lwz r30,0(r14)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821b9430
	if (!ctx.cr0.eq) goto loc_821B9430;
	// bl 0x822fa658
	ctx.lr = 0x821B9430;
	sub_822FA658(ctx, base);
loc_821B9430:
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// clrlwi r27,r29,21
	ctx.r27.u64 = ctx.r29.u32 & 0x7FF;
	// rlwimi r10,r29,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r29.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r3,r10,24,27,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1F;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r16,r11,8
	ctx.r16.s64 = ctx.r11.s64 + 8;
	// bl 0x821b6d48
	ctx.lr = 0x821B9460;
	sub_821B6D48(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,64
	ctx.r10.s64 = 4194304;
	// li r20,33
	ctx.r20.s64 = 33;
	// rlwimi r10,r11,16,10,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x3F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFC0FFFF);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// stw r20,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r20.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm. r9,r29,0,8,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xF00000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// or r24,r10,r9
	ctx.r24.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r24,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r24.u32);
	// beq 0x821b9498
	if (ctx.cr0.eq) goto loc_821B9498;
	// li r30,256
	ctx.r30.s64 = 256;
loc_821B9498:
	// rlwinm r3,r29,8,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 8) & 0xF;
	// bl 0x821b6ba8
	ctx.lr = 0x821B94A0;
	sub_821B6BA8(ctx, base);
	// or r17,r3,r30
	ctx.r17.u64 = ctx.r3.u64 | ctx.r30.u64;
	// addi r26,r31,4
	ctx.r26.s64 = ctx.r31.s64 + 4;
	// rlwinm. r11,r29,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b94bc
	if (ctx.cr0.eq) goto loc_821B94BC;
	// ori r11,r17,1
	ctx.r11.u64 = ctx.r17.u64 | 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x821b94c0
	goto loc_821B94C0;
loc_821B94BC:
	// stw r17,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r17.u32);
loc_821B94C0:
	// lis r10,228
	ctx.r10.s64 = 14942208;
	// rlwinm r11,r28,0,8,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFF0000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// addi r31,r10,-29644
	ctx.r31.s64 = ctx.r10.s64 + -29644;
	// beq cr6,0x821b9520
	if (ctx.cr6.eq) goto loc_821B9520;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// rlwinm r10,r11,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r9,r11,2,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lwzx r9,r9,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r9,r11,2,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// rlwinm r11,r11,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// lwzx r9,r9,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r8,r11,12,0,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFFFF000;
	// or r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 | ctx.r10.u64;
	// or r18,r8,r11
	ctx.r18.u64 = ctx.r8.u64 | ctx.r11.u64;
	// b 0x821b9524
	goto loc_821B9524;
loc_821B9520:
	// li r18,12816
	ctx.r18.s64 = 12816;
loc_821B9524:
	// rlwinm r30,r28,0,4,7
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xF000000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b6bf8
	ctx.lr = 0x821B9530;
	sub_821B6BF8(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821b72a0
	ctx.lr = 0x821B9544;
	sub_821B72A0(ctx, base);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// bne cr6,0x821b9574
	if (!ctx.cr6.eq) goto loc_821B9574;
	// cmplwi cr6,r18,12816
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 12816, ctx.xer);
	// bne cr6,0x821b9574
	if (!ctx.cr6.eq) goto loc_821B9574;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r21,r3,16
	ctx.r21.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r10,r26,4
	ctx.r10.s64 = ctx.r26.s64 + 4;
	// clrlwi r22,r11,26
	ctx.r22.u64 = ctx.r11.u32 & 0x3F;
	// rlwinm r11,r22,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 16) & 0xFFFF0000;
	// or r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 | ctx.r21.u64;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// b 0x821b95a0
	goto loc_821B95A0;
loc_821B9574:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r21,r3,16
	ctx.r21.u64 = ctx.r3.u32 & 0xFFFF;
	// or r10,r19,r18
	ctx.r10.u64 = ctx.r19.u64 | ctx.r18.u64;
	// clrlwi r22,r11,26
	ctx.r22.u64 = ctx.r11.u32 & 0x3F;
	// rlwinm r11,r22,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 16) & 0xFFFF0000;
	// oris r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 4194304;
	// or r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 | ctx.r21.u64;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r11,r26,4
	ctx.r11.s64 = ctx.r26.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_821B95A0:
	// addi r9,r27,8
	ctx.r9.s64 = ctx.r27.s64 + 8;
	// rlwinm r11,r28,16,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 16) & 0xFF;
	// clrlwi r27,r9,16
	ctx.r27.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwinm r9,r11,2,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// oris r8,r27,1
	ctx.r8.u64 = ctx.r27.u64 | 65536;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r30,r10,4
	ctx.r30.s64 = ctx.r10.s64 + 4;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwzx r10,r9,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// rlwinm r9,r11,2,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// lwzx r9,r9,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r9,r11,2,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// rlwinm r11,r11,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// lwzx r9,r9,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r8,r11,12,0,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFFFF000;
	// or r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 | ctx.r10.u64;
	// or r26,r8,r11
	ctx.r26.u64 = ctx.r8.u64 | ctx.r11.u64;
	// clrlwi r31,r26,29
	ctx.r31.u64 = ctx.r26.u32 & 0x7;
	// bl 0x821b6bf8
	ctx.lr = 0x821B9604;
	sub_821B6BF8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821b72a0
	ctx.lr = 0x821B9618;
	sub_821B72A0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,64
	ctx.r10.s64 = 4194304;
	// rlwinm r9,r31,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwimi r10,r11,16,10,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x3F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFC0FFFF);
	// or r11,r9,r31
	ctx.r11.u64 = ctx.r9.u64 | ctx.r31.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// or r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 | ctx.r31.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// or r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 | ctx.r25.u64;
	// rlwinm. r9,r29,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// or r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 | ctx.r31.u64;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r20,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r20.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r24,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r24.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// beq 0x821b967c
	if (ctx.cr0.eq) goto loc_821B967C;
	// ori r9,r17,4
	ctx.r9.u64 = ctx.r17.u64 | 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x821b9680
	goto loc_821B9680;
loc_821B967C:
	// stw r17,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r17.u32);
loc_821B9680:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// bne cr6,0x821b96a4
	if (!ctx.cr6.eq) goto loc_821B96A4;
	// cmplwi cr6,r18,12816
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 12816, ctx.xer);
	// bne cr6,0x821b96a4
	if (!ctx.cr6.eq) goto loc_821B96A4;
	// rlwinm r9,r22,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 16) & 0xFFFF0000;
	// or r9,r9,r21
	ctx.r9.u64 = ctx.r9.u64 | ctx.r21.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x821b96c0
	goto loc_821B96C0;
loc_821B96A4:
	// rlwinm r9,r22,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 16) & 0xFFFF0000;
	// or r8,r19,r18
	ctx.r8.u64 = ctx.r19.u64 | ctx.r18.u64;
	// oris r9,r9,64
	ctx.r9.u64 = ctx.r9.u64 | 4194304;
	// or r9,r9,r21
	ctx.r9.u64 = ctx.r9.u64 | ctx.r21.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
loc_821B96C0:
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// oris r8,r27,65
	ctx.r8.u64 = ctx.r27.u64 | 4259840;
	// rlwinm r11,r26,28,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 28) & 0x7;
	// li r7,50
	ctx.r7.s64 = 50;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// or r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 | ctx.r11.u64;
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// or r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 | ctx.r11.u64;
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// or r8,r11,r25
	ctx.r8.u64 = ctx.r11.u64 | ctx.r25.u64;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r10,0(r14)
	PPC_STORE_U32(ctx.r14.u32 + 0, ctx.r10.u32);
	// stw r16,0(r15)
	PPC_STORE_U32(ctx.r15.u32 + 0, ctx.r16.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822e9900
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B971C"))) PPC_WEAK_FUNC(sub_821B971C);
PPC_FUNC_IMPL(__imp__sub_821B971C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B9720"))) PPC_WEAK_FUNC(sub_821B9720);
PPC_FUNC_IMPL(__imp__sub_821B9720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98d0
	ctx.lr = 0x821B9728;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821b974c
	if (!ctx.cr6.eq) goto loc_821B974C;
	// li r26,0
	ctx.r26.s64 = 0;
	// b 0x821b9758
	goto loc_821B9758;
loc_821B974C:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r26,r11,27,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_821B9758:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821b976c
	if (ctx.cr6.lt) goto loc_821B976C;
	// bl 0x822fa658
	ctx.lr = 0x821B976C;
	sub_822FA658(ctx, base);
loc_821B976C:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r28,0(r23)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r25,0(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r22,r11,4
	ctx.r22.s64 = ctx.r11.s64 + 4;
	// rlwimi r10,r31,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r31.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r29,r31,21
	ctx.r29.u64 = ctx.r31.u32 & 0x7FF;
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 768, ctx.xer);
	// beq cr6,0x821b97a8
	if (ctx.cr6.eq) goto loc_821B97A8;
	// bl 0x822fa658
	ctx.lr = 0x821B97A8;
	sub_822FA658(ctx, base);
loc_821B97A8:
	// rlwimi r29,r26,8,23,23
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r26.u32, 8) & 0x100) | (ctx.r29.u64 & 0xFFFFFFFFFFFFFEFF);
	// li r11,93
	ctx.r11.s64 = 93;
	// clrlwi r10,r29,23
	ctx.r10.u64 = ctx.r29.u32 & 0x1FF;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwimi r11,r10,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x821b7428
	ctx.lr = 0x821B97D4;
	sub_821B7428(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// rlwimi r11,r30,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 768, ctx.xer);
	// beq cr6,0x821b97ec
	if (ctx.cr6.eq) goto loc_821B97EC;
	// bl 0x822fa658
	ctx.lr = 0x821B97EC;
	sub_822FA658(ctx, base);
loc_821B97EC:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b72a0
	ctx.lr = 0x821B97FC;
	sub_821B72A0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r3,r30,0,4,7
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xF000000;
	// bl 0x821b6bf8
	ctx.lr = 0x821B9808;
	sub_821B6BF8(ctx, base);
	// rlwinm r31,r30,0,8,15
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFF0000;
	// lis r11,228
	ctx.r11.s64 = 14942208;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821b9870
	if (ctx.cr6.eq) goto loc_821B9870;
	// bl 0x822fa658
	ctx.lr = 0x821B9820;
	sub_822FA658(ctx, base);
	// rlwinm r10,r31,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 16) & 0xFFFF;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// rlwinm r9,r10,2,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,-29644
	ctx.r11.s64 = ctx.r11.s64 + -29644;
	// rlwinm r8,r10,2,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// rlwinm r8,r10,2,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// rlwinm r10,r10,0,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC;
	// lwzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r10,r8,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r8,r11,12,0,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFFFF000;
	// or r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 | ctx.r9.u64;
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// b 0x821b9874
	goto loc_821B9874;
loc_821B9870:
	// li r11,12816
	ctx.r11.s64 = 12816;
loc_821B9874:
	// cmplwi cr6,r25,82
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 82, ctx.xer);
	// bne cr6,0x821b98a8
	if (!ctx.cr6.eq) goto loc_821B98A8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x821b98a8
	if (!ctx.cr6.eq) goto loc_821B98A8;
	// cmplwi cr6,r11,12816
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12816, ctx.xer);
	// bne cr6,0x821b98a8
	if (!ctx.cr6.eq) goto loc_821B98A8;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwimi r29,r11,16,10,15
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x3F0000) | (ctx.r29.u64 & 0xFFFFFFFFFFC0FFFF);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r29,10
	ctx.r10.u64 = ctx.r29.u32 & 0x3FFFFF;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x821b9904
	goto loc_821B9904;
loc_821B98A8:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r9,64
	ctx.r9.s64 = 4194304;
	// clrlwi r8,r29,16
	ctx.r8.u64 = ctx.r29.u32 & 0xFFFF;
	// rlwimi r9,r10,16,10,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x3F0000) | (ctx.r9.u64 & 0xFFFFFFFFFFC0FFFF);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r25,69
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 69, ctx.xer);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne cr6,0x821b98e4
	if (!ctx.cr6.eq) goto loc_821B98E4;
	// li r9,13312
	ctx.r9.s64 = 13312;
	// rlwinm r8,r11,20,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x7;
	// rlwimi r9,r11,4,25,27
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 4) & 0x70) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF8F);
	// or r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 | ctx.r8.u64;
	// b 0x821b98f8
	goto loc_821B98F8;
loc_821B98E4:
	// cmplwi cr6,r25,70
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 70, ctx.xer);
	// bne cr6,0x821b98f8
	if (!ctx.cr6.eq) goto loc_821B98F8;
	// rlwinm r11,r11,28,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7F;
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// ori r11,r11,13312
	ctx.r11.u64 = ctx.r11.u64 | 13312;
loc_821B98F8:
	// or r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 | ctx.r30.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
loc_821B9904:
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// stw r22,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r22.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822e9920
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B9914"))) PPC_WEAK_FUNC(sub_821B9914);
PPC_FUNC_IMPL(__imp__sub_821B9914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B9918"))) PPC_WEAK_FUNC(sub_821B9918);
PPC_FUNC_IMPL(__imp__sub_821B9918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98d8
	ctx.lr = 0x821B9920;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821b9944
	if (ctx.cr6.lt) goto loc_821B9944;
	// bl 0x822fa658
	ctx.lr = 0x821B9944;
	sub_822FA658(ctx, base);
loc_821B9944:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addi r25,r10,4
	ctx.r25.s64 = ctx.r10.s64 + 4;
	// rlwimi r9,r11,12,21,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF8FF);
	// lwz r26,0(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r31,r11,21
	ctx.r31.u64 = ctx.r11.u32 & 0x7FF;
	// rlwinm r29,r9,24,27,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0x1F;
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 3, ctx.xer);
	// beq cr6,0x821b997c
	if (ctx.cr6.eq) goto loc_821B997C;
	// bl 0x822fa658
	ctx.lr = 0x821B997C;
	sub_822FA658(ctx, base);
loc_821B997C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821b6d48
	ctx.lr = 0x821B9990;
	sub_821B6D48(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,64
	ctx.r9.s64 = 4194304;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// rlwimi r9,r11,16,10,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x3F0000) | (ctx.r9.u64 & 0xFFFFFFFFFFC0FFFF);
	// li r11,17
	ctx.r11.s64 = 17;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwimi r31,r11,16,0,15
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r31.u64 & 0xFFFFFFFF0000FFFF);
	// li r8,34
	ctx.r8.s64 = 34;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x821b7520
	ctx.lr = 0x821B99F4;
	sub_821B7520(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// stw r25,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822e9928
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B9A08"))) PPC_WEAK_FUNC(sub_821B9A08);
PPC_FUNC_IMPL(__imp__sub_821B9A08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98d0
	ctx.lr = 0x821B9A10;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821b9a34
	if (ctx.cr6.lt) goto loc_821B9A34;
	// bl 0x822fa658
	ctx.lr = 0x821B9A34;
	sub_822FA658(ctx, base);
loc_821B9A34:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r29,0(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r24,r10,4
	ctx.r24.s64 = ctx.r10.s64 + 4;
	// clrlwi r30,r11,21
	ctx.r30.u64 = ctx.r11.u32 & 0x7FF;
	// lwz r27,0(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// lhz r11,2(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 2);
	// rlwinm r28,r10,24,27,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1F;
	// addi r10,r11,-73
	ctx.r10.s64 = ctx.r11.s64 + -73;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r31,r10,1
	ctx.r31.u64 = ctx.r10.u64 ^ 1;
	// cmpwi r31,0
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x821b9a80
	if (!ctx.cr0.eq) goto loc_821B9A80;
	// lhz r11,14(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 14);
loc_821B9A80:
	// addi r11,r11,-77
	ctx.r11.s64 = ctx.r11.s64 + -77;
	// cmplwi cr6,r28,3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 3, ctx.xer);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r26,r11,27,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// beq cr6,0x821b9a98
	if (ctx.cr6.eq) goto loc_821B9A98;
	// bl 0x822fa658
	ctx.lr = 0x821B9A98;
	sub_822FA658(ctx, base);
loc_821B9A98:
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x821b6d48
	ctx.lr = 0x821B9AB8;
	sub_821B6D48(ctx, base);
	// subfic r11,r31,0
	ctx.xer.ca = ctx.r31.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r31.s64;
	// clrlwi r31,r30,16
	ctx.r31.u64 = ctx.r30.u32 & 0xFFFF;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// lis r11,64
	ctx.r11.s64 = 4194304;
	// li r8,34
	ctx.r8.s64 = 34;
	// rlwimi r11,r9,16,10,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0x3F0000) | (ctx.r11.u64 & 0xFFFFFFFFFFC0FFFF);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// oris r9,r31,17
	ctx.r9.u64 = ctx.r31.u64 | 1114112;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x821b7520
	ctx.lr = 0x821B9B2C;
	sub_821B7520(ctx, base);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x821b9b78
	if (ctx.cr6.eq) goto loc_821B9B78;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r8,68
	ctx.r8.s64 = 4456448;
	// li r9,71
	ctx.r9.s64 = 71;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// ori r8,r8,14
	ctx.r8.u64 = ctx.r8.u64 | 14;
	// oris r7,r31,81
	ctx.r7.u64 = ctx.r31.u64 | 5308416;
	// li r6,13107
	ctx.r6.s64 = 13107;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x821b9b7c
	goto loc_821B9B7C;
loc_821B9B78:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_821B9B7C:
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// stw r24,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r24.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822e9920
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B9B8C"))) PPC_WEAK_FUNC(sub_821B9B8C);
PPC_FUNC_IMPL(__imp__sub_821B9B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B9B90"))) PPC_WEAK_FUNC(sub_821B9B90);
PPC_FUNC_IMPL(__imp__sub_821B9B90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98b8
	ctx.lr = 0x821B9B98;
	__savegprlr_16(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// mr r16,r7
	ctx.r16.u64 = ctx.r7.u64;
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821b9bbc
	if (!ctx.cr6.eq) goto loc_821B9BBC;
	// li r19,0
	ctx.r19.s64 = 0;
	// b 0x821b9bc8
	goto loc_821B9BC8;
loc_821B9BBC:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r19,r11,27,31,31
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_821B9BC8:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821b9bdc
	if (ctx.cr6.lt) goto loc_821B9BDC;
	// bl 0x822fa658
	ctx.lr = 0x821B9BDC;
	sub_822FA658(ctx, base);
loc_821B9BDC:
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// lwz r10,0(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// lhz r25,2(r11)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r25,72
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 72, ctx.xer);
	// beq cr6,0x821b9c00
	if (ctx.cr6.eq) goto loc_821B9C00;
	// cmplwi cr6,r25,84
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 84, ctx.xer);
	// li r28,1
	ctx.r28.s64 = 1;
	// bne cr6,0x821b9c04
	if (!ctx.cr6.eq) goto loc_821B9C04;
loc_821B9C00:
	// li r28,0
	ctx.r28.s64 = 0;
loc_821B9C04:
	// lwz r23,0(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r9,34
	ctx.r9.s64 = 34;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// addi r18,r11,4
	ctx.r18.s64 = ctx.r11.s64 + 4;
	// rlwimi r8,r23,12,21,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r23.u32, 12) & 0x700) | (ctx.r8.u64 & 0xFFFFFFFFFFFFF8FF);
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r26,r23,21
	ctx.r26.u64 = ctx.r23.u32 & 0x7FF;
	// rlwinm r24,r8,24,27,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0x1F;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r31,r10,4
	ctx.r31.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r24,3
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 3, ctx.xer);
	// beq cr6,0x821b9c3c
	if (ctx.cr6.eq) goto loc_821B9C3C;
	// bl 0x822fa658
	ctx.lr = 0x821B9C3C;
	sub_822FA658(ctx, base);
loc_821B9C3C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821b6d48
	ctx.lr = 0x821B9C50;
	sub_821B6D48(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// beq cr6,0x821b9c64
	if (ctx.cr6.eq) goto loc_821B9C64;
	// bl 0x822fa658
	ctx.lr = 0x821B9C64;
	sub_822FA658(ctx, base);
loc_821B9C64:
	// clrlwi r22,r29,26
	ctx.r22.u64 = ctx.r29.u32 & 0x3F;
	// clrlwi r21,r30,16
	ctx.r21.u64 = ctx.r30.u32 & 0xFFFF;
	// rlwinm r11,r22,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 16) & 0xFFFF0000;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// oris r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 4194304;
	// or r29,r11,r21
	ctx.r29.u64 = ctx.r11.u64 | ctx.r21.u64;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// beq cr6,0x821b9ca8
	if (ctx.cr6.eq) goto loc_821B9CA8;
	// cmplwi cr6,r25,76
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 76, ctx.xer);
	// beq cr6,0x821b9ca0
	if (ctx.cr6.eq) goto loc_821B9CA0;
	// cmplwi cr6,r25,77
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 77, ctx.xer);
	// beq cr6,0x821b9ca0
	if (ctx.cr6.eq) goto loc_821B9CA0;
	// li r10,208
	ctx.r10.s64 = 208;
	// b 0x821b9cac
	goto loc_821B9CAC;
loc_821B9CA0:
	// li r10,144
	ctx.r10.s64 = 144;
	// b 0x821b9cac
	goto loc_821B9CAC;
loc_821B9CA8:
	// li r10,228
	ctx.r10.s64 = 228;
loc_821B9CAC:
	// clrlwi r31,r26,16
	ctx.r31.u64 = ctx.r26.u32 & 0xFFFF;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// oris r10,r31,17
	ctx.r10.u64 = ctx.r31.u64 | 1114112;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x821b7520
	ctx.lr = 0x821B9CE0;
	sub_821B7520(ctx, base);
	// lis r11,68
	ctx.r11.s64 = 4456448;
	// li r27,93
	ctx.r27.s64 = 93;
	// ori r30,r11,14
	ctx.r30.u64 = ctx.r11.u64 | 14;
	// cmplwi cr6,r25,72
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 72, ctx.xer);
	// beq cr6,0x821b9d94
	if (ctx.cr6.eq) goto loc_821B9D94;
	// cmplwi cr6,r25,74
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 74, ctx.xer);
	// beq cr6,0x821b9d94
	if (ctx.cr6.eq) goto loc_821B9D94;
	// cmplwi cr6,r25,77
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 77, ctx.xer);
	// beq cr6,0x821b9d54
	if (ctx.cr6.eq) goto loc_821B9D54;
	// cmplwi cr6,r25,84
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 84, ctx.xer);
	// bne cr6,0x821b9de0
	if (!ctx.cr6.eq) goto loc_821B9DE0;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,71
	ctx.r10.s64 = 71;
	// lis r9,88
	ctx.r9.s64 = 5767168;
	// li r8,257
	ctx.r8.s64 = 257;
	// stw r11,156(r20)
	PPC_STORE_U32(ctx.r20.u32 + 156, ctx.r11.u32);
	// lis r11,32
	ctx.r11.s64 = 2097152;
	// ori r7,r11,12816
	ctx.r7.u64 = ctx.r11.u64 | 12816;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// b 0x821b9f78
	goto loc_821B9F78;
loc_821B9D54:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,71
	ctx.r9.s64 = 71;
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// oris r7,r31,81
	ctx.r7.u64 = ctx.r31.u64 | 5308416;
	// li r6,13107
	ctx.r6.s64 = 13107;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x821b9df4
	goto loc_821B9DF4;
loc_821B9D94:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// rlwimi r11,r19,8,23,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r19.u32, 8) & 0x100) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFEFF);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// clrlwi r11,r11,23
	ctx.r11.u64 = ctx.r11.u32 & 0x1FF;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// rlwimi r10,r11,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x821b7428
	ctx.lr = 0x821B9DC8;
	sub_821B7428(ctx, base);
	// rlwinm r11,r22,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 16) & 0xFFFF0000;
	// or r10,r11,r21
	ctx.r10.u64 = ctx.r11.u64 | ctx.r21.u64;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x821b9de4
	goto loc_821B9DE4;
loc_821B9DE0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_821B9DE4:
	// cmplwi cr6,r25,77
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 77, ctx.xer);
	// beq cr6,0x821b9df4
	if (ctx.cr6.eq) goto loc_821B9DF4;
	// cmplwi cr6,r25,76
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 76, ctx.xer);
	// bne cr6,0x821b9f7c
	if (!ctx.cr6.eq) goto loc_821B9F7C;
loc_821B9DF4:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// cmplwi cr6,r24,3
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 3, ctx.xer);
	// ori r10,r10,82
	ctx.r10.u64 = ctx.r10.u64 | 82;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// beq cr6,0x821b9e10
	if (ctx.cr6.eq) goto loc_821B9E10;
	// bl 0x822fa658
	ctx.lr = 0x821B9E10;
	sub_822FA658(ctx, base);
loc_821B9E10:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// li r10,21
	ctx.r10.s64 = 21;
	// cmplwi cr6,r25,77
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 77, ctx.xer);
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bne cr6,0x821b9e44
	if (!ctx.cr6.eq) goto loc_821B9E44;
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// ori r10,r11,47768
	ctx.r10.u64 = ctx.r11.u64 | 47768;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x821b9f34
	goto loc_821B9F34;
loc_821B9E44:
	// lwz r28,0(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// lis r10,228
	ctx.r10.s64 = 14942208;
	// addi r18,r18,4
	ctx.r18.s64 = ctx.r18.s64 + 4;
	// rlwinm r11,r28,0,8,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFF0000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821b9eac
	if (ctx.cr6.eq) goto loc_821B9EAC;
	// rlwinm r10,r11,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// rlwinm r9,r10,2,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,-29644
	ctx.r11.s64 = ctx.r11.s64 + -29644;
	// rlwinm r8,r10,2,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// rlwinm r8,r10,2,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// rlwinm r10,r10,0,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC;
	// lwzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r10,r8,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r8,r11,12,0,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFFFF000;
	// or r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 | ctx.r9.u64;
	// or r30,r8,r11
	ctx.r30.u64 = ctx.r8.u64 | ctx.r11.u64;
	// b 0x821b9eb0
	goto loc_821B9EB0;
loc_821B9EAC:
	// li r30,12816
	ctx.r30.s64 = 12816;
loc_821B9EB0:
	// rlwinm r3,r28,0,4,7
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xF000000;
	// bl 0x821b6bf8
	ctx.lr = 0x821B9EB8;
	sub_821B6BF8(ctx, base);
	// andi. r11,r3,34952
	ctx.r11.u64 = ctx.r3.u64 & 34952;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi cr6,r11,34952
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 34952, ctx.xer);
	// bne cr6,0x821b9ed4
	if (!ctx.cr6.eq) goto loc_821B9ED4;
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// ori r12,r12,30583
	ctx.r12.u64 = ctx.r12.u64 | 30583;
	// and r31,r3,r12
	ctx.r31.u64 = ctx.r3.u64 & ctx.r12.u64;
	// b 0x821b9ed8
	goto loc_821B9ED8;
loc_821B9ED4:
	// ori r31,r3,34952
	ctx.r31.u64 = ctx.r3.u64 | 34952;
loc_821B9ED8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821b72a0
	ctx.lr = 0x821B9EE8;
	sub_821B72A0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821b9f10
	if (!ctx.cr6.eq) goto loc_821B9F10;
	// cmplwi cr6,r30,12816
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 12816, ctx.xer);
	// bne cr6,0x821b9f10
	if (!ctx.cr6.eq) goto loc_821B9F10;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwimi r3,r11,16,10,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x3F0000) | (ctx.r3.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r11,r3,10
	ctx.r11.u64 = ctx.r3.u32 & 0x3FFFFF;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// b 0x821b9f38
	goto loc_821B9F38;
loc_821B9F10:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,64
	ctx.r10.s64 = 4194304;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwimi r10,r11,16,10,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x3F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFC0FFFF);
	// or r8,r31,r30
	ctx.r8.u64 = ctx.r31.u64 | ctx.r30.u64;
	// or r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
loc_821B9F34:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_821B9F38:
	// rlwinm r10,r22,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 16) & 0xFFFF0000;
	// rlwimi r26,r19,8,23,23
	ctx.r26.u64 = (__builtin_rotateleft32(ctx.r19.u32, 8) & 0x100) | (ctx.r26.u64 & 0xFFFFFFFFFFFFFEFF);
	// or r31,r10,r21
	ctx.r31.u64 = ctx.r10.u64 | ctx.r21.u64;
	// clrlwi r10,r26,23
	ctx.r10.u64 = ctx.r26.u32 & 0x1FF;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwimi r27,r10,16,0,15
	ctx.r27.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r27.u64 & 0xFFFFFFFF0000FFFF);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x821b7428
	ctx.lr = 0x821B9F70;
	sub_821B7428(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_821B9F78:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_821B9F7C:
	// stw r11,0(r16)
	PPC_STORE_U32(ctx.r16.u32 + 0, ctx.r11.u32);
	// stw r18,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r18.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822e9908
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821B9F8C"))) PPC_WEAK_FUNC(sub_821B9F8C);
PPC_FUNC_IMPL(__imp__sub_821B9F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821B9F90"))) PPC_WEAK_FUNC(sub_821B9F90);
PPC_FUNC_IMPL(__imp__sub_821B9F90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98c8
	ctx.lr = 0x821B9F98;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821b9fbc
	if (!ctx.cr6.eq) goto loc_821B9FBC;
	// li r20,0
	ctx.r20.s64 = 0;
	// b 0x821b9fc8
	goto loc_821B9FC8;
loc_821B9FBC:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r20,r11,27,31,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_821B9FC8:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,258
	ctx.r11.u64 = ctx.r11.u64 | 258;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821b9fec
	if (ctx.cr6.eq) goto loc_821B9FEC;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,259
	ctx.r11.u64 = ctx.r11.u64 | 259;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821b9fec
	if (ctx.cr6.eq) goto loc_821B9FEC;
	// bl 0x822fa658
	ctx.lr = 0x821B9FEC;
	sub_822FA658(ctx, base);
loc_821B9FEC:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r28,0(r21)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lhz r26,2(r11)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// clrlwi r30,r31,21
	ctx.r30.u64 = ctx.r31.u32 & 0x7FF;
	// rlwimi r10,r31,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r31.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// lwz r24,0(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r23,r11,4
	ctx.r23.s64 = ctx.r11.s64 + 4;
	// rlwinm r29,r10,24,27,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1F;
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 3, ctx.xer);
	// beq cr6,0x821ba028
	if (ctx.cr6.eq) goto loc_821BA028;
	// bl 0x822fa658
	ctx.lr = 0x821BA028;
	sub_822FA658(ctx, base);
loc_821BA028:
	// li r11,34
	ctx.r11.s64 = 34;
	// addi r25,r28,4
	ctx.r25.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r26,85
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 85, ctx.xer);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// bne cr6,0x821ba05c
	if (!ctx.cr6.eq) goto loc_821BA05C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b7428
	ctx.lr = 0x821BA050;
	sub_821B7428(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x821ba0ac
	goto loc_821BA0AC;
loc_821BA05C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821b6d48
	ctx.lr = 0x821BA070;
	sub_821B6D48(ctx, base);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// beq cr6,0x821ba084
	if (ctx.cr6.eq) goto loc_821BA084;
	// bl 0x822fa658
	ctx.lr = 0x821BA084;
	sub_822FA658(ctx, base);
loc_821BA084:
	// lis r11,64
	ctx.r11.s64 = 4194304;
	// clrlwi r10,r29,16
	ctx.r10.u64 = ctx.r29.u32 & 0xFFFF;
	// rlwimi r11,r28,16,10,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r28.u32, 16) & 0x3F0000) | (ctx.r11.u64 & 0xFFFFFFFFFFC0FFFF);
	// li r9,41
	ctx.r9.s64 = 41;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// addi r11,r25,4
	ctx.r11.s64 = ctx.r25.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_821BA0AC:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// rlwimi r11,r24,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r24.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 768, ctx.xer);
	// beq cr6,0x821ba0c4
	if (ctx.cr6.eq) goto loc_821BA0C4;
	// bl 0x822fa658
	ctx.lr = 0x821BA0C4;
	sub_822FA658(ctx, base);
loc_821BA0C4:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821b7520
	ctx.lr = 0x821BA0DC;
	sub_821B7520(ctx, base);
	// li r10,17
	ctx.r10.s64 = 17;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r26,83
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 83, ctx.xer);
	// rlwimi r11,r10,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x821ba140
	if (!ctx.cr6.eq) goto loc_821BA140;
	// rlwimi r30,r20,8,23,23
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r20.u32, 8) & 0x100) | (ctx.r30.u64 & 0xFFFFFFFFFFFFFEFF);
	// li r10,93
	ctx.r10.s64 = 93;
	// clrlwi r9,r30,23
	ctx.r9.u64 = ctx.r30.u32 & 0x1FF;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwimi r10,r9,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x821b7428
	ctx.lr = 0x821BA12C;
	sub_821B7428(ctx, base);
	// rlwimi r29,r28,16,10,15
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r28.u32, 16) & 0x3F0000) | (ctx.r29.u64 & 0xFFFFFFFFFFC0FFFF);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r29,10
	ctx.r10.u64 = ctx.r29.u32 & 0x3FFFFF;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_821BA140:
	// stw r11,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
	// stw r23,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r23.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822e9918
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BA150"))) PPC_WEAK_FUNC(sub_821BA150);
PPC_FUNC_IMPL(__imp__sub_821BA150) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98b0
	ctx.lr = 0x821BA158;
	__savegprlr_14(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r10,75
	ctx.r10.s64 = 75;
	// lis r14,-32229
	ctx.r14.s64 = -2112159744;
	// lis r15,-32229
	ctx.r15.s64 = -2112159744;
	// lis r16,-32229
	ctx.r16.s64 = -2112159744;
	// stw r11,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r11.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r17,-32229
	ctx.r17.s64 = -2112159744;
	// lis r18,-32229
	ctx.r18.s64 = -2112159744;
	// lis r19,-32229
	ctx.r19.s64 = -2112159744;
	// lis r20,-32229
	ctx.r20.s64 = -2112159744;
	// stw r11,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r11.u32);
	// lis r11,-32201
	ctx.r11.s64 = -2110324736;
	// lis r21,-32229
	ctx.r21.s64 = -2112159744;
	// addi r11,r11,-31408
	ctx.r11.s64 = ctx.r11.s64 + -31408;
	// lis r22,-32229
	ctx.r22.s64 = -2112159744;
	// lis r23,-32229
	ctx.r23.s64 = -2112159744;
	// lis r24,-32229
	ctx.r24.s64 = -2112159744;
	// lis r25,-32229
	ctx.r25.s64 = -2112159744;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r26,-32229
	ctx.r26.s64 = -2112159744;
	// lis r27,-32229
	ctx.r27.s64 = -2112159744;
	// lis r28,-32229
	ctx.r28.s64 = -2112159744;
	// lis r29,-32229
	ctx.r29.s64 = -2112159744;
	// lis r30,-32229
	ctx.r30.s64 = -2112159744;
	// lis r31,-32229
	ctx.r31.s64 = -2112159744;
	// lis r3,-32229
	ctx.r3.s64 = -2112159744;
	// lis r4,-32229
	ctx.r4.s64 = -2112159744;
	// lis r5,-32229
	ctx.r5.s64 = -2112159744;
	// lis r6,-32229
	ctx.r6.s64 = -2112159744;
	// lis r7,-32229
	ctx.r7.s64 = -2112159744;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lwz r10,-160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// addi r10,r10,28504
	ctx.r10.s64 = ctx.r10.s64 + 28504;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// li r10,71
	ctx.r10.s64 = 71;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,-156(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -156);
	// addi r10,r10,31424
	ctx.r10.s64 = ctx.r10.s64 + 31424;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r10,r14,31424
	ctx.r10.s64 = ctx.r14.s64 + 31424;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// li r10,91
	ctx.r10.s64 = 91;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// addi r10,r15,31424
	ctx.r10.s64 = ctx.r15.s64 + 31424;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// li r10,64
	ctx.r10.s64 = 64;
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// addi r10,r16,31424
	ctx.r10.s64 = ctx.r16.s64 + 31424;
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// li r10,73
	ctx.r10.s64 = 73;
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// addi r10,r17,31424
	ctx.r10.s64 = ctx.r17.s64 + 31424;
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// li r10,81
	ctx.r10.s64 = 81;
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// addi r10,r18,31424
	ctx.r10.s64 = ctx.r18.s64 + 31424;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// li r10,85
	ctx.r10.s64 = 85;
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// addi r10,r19,31424
	ctx.r10.s64 = ctx.r19.s64 + 31424;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// li r10,34
	ctx.r10.s64 = 34;
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// addi r10,r20,31424
	ctx.r10.s64 = ctx.r20.s64 + 31424;
	// stw r10,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// li r10,35
	ctx.r10.s64 = 35;
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// addi r10,r21,31424
	ctx.r10.s64 = ctx.r21.s64 + 31424;
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// li r10,68
	ctx.r10.s64 = 68;
	// stw r10,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// addi r10,r22,31424
	ctx.r10.s64 = ctx.r22.s64 + 31424;
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// li r10,65
	ctx.r10.s64 = 65;
	// stw r10,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r10.u32);
	// addi r10,r23,31424
	ctx.r10.s64 = ctx.r23.s64 + 31424;
	// stw r10,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r10.u32);
	// li r10,86
	ctx.r10.s64 = 86;
	// lis r14,-32229
	ctx.r14.s64 = -2112159744;
	// lis r15,-32229
	ctx.r15.s64 = -2112159744;
	// lis r16,-32229
	ctx.r16.s64 = -2112159744;
	// lis r17,-32229
	ctx.r17.s64 = -2112159744;
	// stw r10,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// addi r10,r24,28504
	ctx.r10.s64 = ctx.r24.s64 + 28504;
	// lis r18,-32229
	ctx.r18.s64 = -2112159744;
	// lis r19,-32229
	ctx.r19.s64 = -2112159744;
	// lis r20,-32229
	ctx.r20.s64 = -2112159744;
	// lis r21,-32229
	ctx.r21.s64 = -2112159744;
	// stw r10,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r10.u32);
	// li r10,86
	ctx.r10.s64 = 86;
	// lis r22,-32229
	ctx.r22.s64 = -2112159744;
	// lis r23,-32229
	ctx.r23.s64 = -2112159744;
	// lis r24,-32229
	ctx.r24.s64 = -2112159744;
	// stw r10,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r10.u32);
	// addi r10,r25,28504
	ctx.r10.s64 = ctx.r25.s64 + 28504;
	// lis r25,-32229
	ctx.r25.s64 = -2112159744;
	// stw r10,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r10.u32);
	// li r10,45
	ctx.r10.s64 = 45;
	// stw r10,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r10.u32);
	// addi r10,r26,31424
	ctx.r10.s64 = ctx.r26.s64 + 31424;
	// lis r26,-32228
	ctx.r26.s64 = -2112094208;
	// stw r10,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r10.u32);
	// li r10,60
	ctx.r10.s64 = 60;
	// stw r10,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r10.u32);
	// addi r10,r27,31424
	ctx.r10.s64 = ctx.r27.s64 + 31424;
	// lis r27,-32229
	ctx.r27.s64 = -2112159744;
	// stw r10,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r10.u32);
	// li r10,57
	ctx.r10.s64 = 57;
	// stw r10,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r10.u32);
	// addi r10,r28,28504
	ctx.r10.s64 = ctx.r28.s64 + 28504;
	// lis r28,-32229
	ctx.r28.s64 = -2112159744;
	// stw r10,132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 132, ctx.r10.u32);
	// li r10,36
	ctx.r10.s64 = 36;
	// stw r10,136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 136, ctx.r10.u32);
	// addi r10,r29,28504
	ctx.r10.s64 = ctx.r29.s64 + 28504;
	// lis r29,-32229
	ctx.r29.s64 = -2112159744;
	// stw r10,140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 140, ctx.r10.u32);
	// li r10,63
	ctx.r10.s64 = 63;
	// stw r10,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r10.u32);
	// addi r10,r30,31424
	ctx.r10.s64 = ctx.r30.s64 + 31424;
	// lis r30,-32228
	ctx.r30.s64 = -2112094208;
	// stw r10,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r10.u32);
	// li r10,49
	ctx.r10.s64 = 49;
	// stw r10,152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 152, ctx.r10.u32);
	// addi r10,r31,31424
	ctx.r10.s64 = ctx.r31.s64 + 31424;
	// stw r10,156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 156, ctx.r10.u32);
	// li r10,69
	ctx.r10.s64 = 69;
	// stw r10,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r10.u32);
	// addi r10,r3,31424
	ctx.r10.s64 = ctx.r3.s64 + 31424;
	// stw r10,164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 164, ctx.r10.u32);
	// li r10,69
	ctx.r10.s64 = 69;
	// stw r10,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r10.u32);
	// addi r10,r4,31424
	ctx.r10.s64 = ctx.r4.s64 + 31424;
	// stw r10,172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 172, ctx.r10.u32);
	// li r10,69
	ctx.r10.s64 = 69;
	// stw r10,176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 176, ctx.r10.u32);
	// addi r10,r5,31424
	ctx.r10.s64 = ctx.r5.s64 + 31424;
	// stw r10,180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 180, ctx.r10.u32);
	// li r10,69
	ctx.r10.s64 = 69;
	// stw r10,184(r11)
	PPC_STORE_U32(ctx.r11.u32 + 184, ctx.r10.u32);
	// addi r10,r6,31424
	ctx.r10.s64 = ctx.r6.s64 + 31424;
	// stw r10,188(r11)
	PPC_STORE_U32(ctx.r11.u32 + 188, ctx.r10.u32);
	// li r10,69
	ctx.r10.s64 = 69;
	// stw r10,192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 192, ctx.r10.u32);
	// addi r10,r7,31424
	ctx.r10.s64 = ctx.r7.s64 + 31424;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r10,200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 200, ctx.r10.u32);
	// addi r10,r8,32568
	ctx.r10.s64 = ctx.r8.s64 + 32568;
	// stw r10,204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 204, ctx.r10.u32);
	// li r10,9
	ctx.r10.s64 = 9;
	// stw r10,208(r11)
	PPC_STORE_U32(ctx.r11.u32 + 208, ctx.r10.u32);
	// addi r10,r9,32568
	ctx.r10.s64 = ctx.r9.s64 + 32568;
	// stw r10,212(r11)
	PPC_STORE_U32(ctx.r11.u32 + 212, ctx.r10.u32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// stw r10,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r10.u32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// stw r10,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r10.u32);
	// li r10,62
	ctx.r10.s64 = 62;
	// lis r31,-32229
	ctx.r31.s64 = -2112159744;
	// lis r3,-32229
	ctx.r3.s64 = -2112159744;
	// lis r4,-32229
	ctx.r4.s64 = -2112159744;
	// lis r5,-32228
	ctx.r5.s64 = -2112094208;
	// stw r10,216(r11)
	PPC_STORE_U32(ctx.r11.u32 + 216, ctx.r10.u32);
	// lis r6,-32228
	ctx.r6.s64 = -2112094208;
	// lwz r10,-156(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -156);
	// lis r7,-32228
	ctx.r7.s64 = -2112094208;
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// addi r10,r10,32568
	ctx.r10.s64 = ctx.r10.s64 + 32568;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// stw r10,220(r11)
	PPC_STORE_U32(ctx.r11.u32 + 220, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,224(r11)
	PPC_STORE_U32(ctx.r11.u32 + 224, ctx.r10.u32);
	// lwz r10,-160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// addi r10,r10,32568
	ctx.r10.s64 = ctx.r10.s64 + 32568;
	// stw r10,228(r11)
	PPC_STORE_U32(ctx.r11.u32 + 228, ctx.r10.u32);
	// li r10,42
	ctx.r10.s64 = 42;
	// stw r10,232(r11)
	PPC_STORE_U32(ctx.r11.u32 + 232, ctx.r10.u32);
	// addi r10,r14,32568
	ctx.r10.s64 = ctx.r14.s64 + 32568;
	// stw r10,236(r11)
	PPC_STORE_U32(ctx.r11.u32 + 236, ctx.r10.u32);
	// li r10,50
	ctx.r10.s64 = 50;
	// stw r10,240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 240, ctx.r10.u32);
	// addi r10,r15,32568
	ctx.r10.s64 = ctx.r15.s64 + 32568;
	// stw r10,244(r11)
	PPC_STORE_U32(ctx.r11.u32 + 244, ctx.r10.u32);
	// li r10,22
	ctx.r10.s64 = 22;
	// stw r10,248(r11)
	PPC_STORE_U32(ctx.r11.u32 + 248, ctx.r10.u32);
	// addi r10,r16,28504
	ctx.r10.s64 = ctx.r16.s64 + 28504;
	// stw r10,252(r11)
	PPC_STORE_U32(ctx.r11.u32 + 252, ctx.r10.u32);
	// li r10,78
	ctx.r10.s64 = 78;
	// stw r10,256(r11)
	PPC_STORE_U32(ctx.r11.u32 + 256, ctx.r10.u32);
	// addi r10,r17,31424
	ctx.r10.s64 = ctx.r17.s64 + 31424;
	// stw r10,260(r11)
	PPC_STORE_U32(ctx.r11.u32 + 260, ctx.r10.u32);
	// li r10,19
	ctx.r10.s64 = 19;
	// stw r10,264(r11)
	PPC_STORE_U32(ctx.r11.u32 + 264, ctx.r10.u32);
	// addi r10,r18,31424
	ctx.r10.s64 = ctx.r18.s64 + 31424;
	// stw r10,268(r11)
	PPC_STORE_U32(ctx.r11.u32 + 268, ctx.r10.u32);
	// li r10,87
	ctx.r10.s64 = 87;
	// stw r10,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r10.u32);
	// addi r10,r19,28504
	ctx.r10.s64 = ctx.r19.s64 + 28504;
	// stw r10,276(r11)
	PPC_STORE_U32(ctx.r11.u32 + 276, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,280(r11)
	PPC_STORE_U32(ctx.r11.u32 + 280, ctx.r10.u32);
	// addi r10,r20,31424
	ctx.r10.s64 = ctx.r20.s64 + 31424;
	// stw r10,284(r11)
	PPC_STORE_U32(ctx.r11.u32 + 284, ctx.r10.u32);
	// li r10,76
	ctx.r10.s64 = 76;
	// stw r10,288(r11)
	PPC_STORE_U32(ctx.r11.u32 + 288, ctx.r10.u32);
	// addi r10,r21,31424
	ctx.r10.s64 = ctx.r21.s64 + 31424;
	// stw r10,292(r11)
	PPC_STORE_U32(ctx.r11.u32 + 292, ctx.r10.u32);
	// li r10,89
	ctx.r10.s64 = 89;
	// stw r10,296(r11)
	PPC_STORE_U32(ctx.r11.u32 + 296, ctx.r10.u32);
	// addi r10,r22,31424
	ctx.r10.s64 = ctx.r22.s64 + 31424;
	// stw r10,300(r11)
	PPC_STORE_U32(ctx.r11.u32 + 300, ctx.r10.u32);
	// li r10,62
	ctx.r10.s64 = 62;
	// stw r10,304(r11)
	PPC_STORE_U32(ctx.r11.u32 + 304, ctx.r10.u32);
	// addi r10,r23,32568
	ctx.r10.s64 = ctx.r23.s64 + 32568;
	// stw r10,308(r11)
	PPC_STORE_U32(ctx.r11.u32 + 308, ctx.r10.u32);
	// li r10,42
	ctx.r10.s64 = 42;
	// stw r10,312(r11)
	PPC_STORE_U32(ctx.r11.u32 + 312, ctx.r10.u32);
	// addi r10,r24,32568
	ctx.r10.s64 = ctx.r24.s64 + 32568;
	// stw r10,316(r11)
	PPC_STORE_U32(ctx.r11.u32 + 316, ctx.r10.u32);
	// li r10,53
	ctx.r10.s64 = 53;
	// stw r10,320(r11)
	PPC_STORE_U32(ctx.r11.u32 + 320, ctx.r10.u32);
	// addi r10,r25,32568
	ctx.r10.s64 = ctx.r25.s64 + 32568;
	// stw r10,324(r11)
	PPC_STORE_U32(ctx.r11.u32 + 324, ctx.r10.u32);
	// li r10,52
	ctx.r10.s64 = 52;
	// stw r10,328(r11)
	PPC_STORE_U32(ctx.r11.u32 + 328, ctx.r10.u32);
	// addi r10,r26,-31720
	ctx.r10.s64 = ctx.r26.s64 + -31720;
	// stw r10,332(r11)
	PPC_STORE_U32(ctx.r11.u32 + 332, ctx.r10.u32);
	// li r10,39
	ctx.r10.s64 = 39;
	// stw r10,336(r11)
	PPC_STORE_U32(ctx.r11.u32 + 336, ctx.r10.u32);
	// addi r10,r27,32568
	ctx.r10.s64 = ctx.r27.s64 + 32568;
	// stw r10,340(r11)
	PPC_STORE_U32(ctx.r11.u32 + 340, ctx.r10.u32);
	// li r10,41
	ctx.r10.s64 = 41;
	// stw r10,344(r11)
	PPC_STORE_U32(ctx.r11.u32 + 344, ctx.r10.u32);
	// addi r10,r28,32568
	ctx.r10.s64 = ctx.r28.s64 + 32568;
	// stw r10,348(r11)
	PPC_STORE_U32(ctx.r11.u32 + 348, ctx.r10.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r10,352(r11)
	PPC_STORE_U32(ctx.r11.u32 + 352, ctx.r10.u32);
	// addi r10,r29,32568
	ctx.r10.s64 = ctx.r29.s64 + 32568;
	// stw r10,356(r11)
	PPC_STORE_U32(ctx.r11.u32 + 356, ctx.r10.u32);
	// li r10,7
	ctx.r10.s64 = 7;
	// lis r14,-32228
	ctx.r14.s64 = -2112094208;
	// lis r15,-32228
	ctx.r15.s64 = -2112094208;
	// lis r16,-32228
	ctx.r16.s64 = -2112094208;
	// lis r17,-32228
	ctx.r17.s64 = -2112094208;
	// stw r10,360(r11)
	PPC_STORE_U32(ctx.r11.u32 + 360, ctx.r10.u32);
	// addi r10,r30,-31720
	ctx.r10.s64 = ctx.r30.s64 + -31720;
	// lis r18,-32229
	ctx.r18.s64 = -2112159744;
	// lis r19,-32228
	ctx.r19.s64 = -2112094208;
	// lis r20,-32228
	ctx.r20.s64 = -2112094208;
	// lis r21,-32229
	ctx.r21.s64 = -2112159744;
	// stw r10,364(r11)
	PPC_STORE_U32(ctx.r11.u32 + 364, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r22,-32229
	ctx.r22.s64 = -2112159744;
	// lis r23,-32229
	ctx.r23.s64 = -2112159744;
	// lis r24,-32229
	ctx.r24.s64 = -2112159744;
	// lis r25,-32228
	ctx.r25.s64 = -2112094208;
	// stw r10,368(r11)
	PPC_STORE_U32(ctx.r11.u32 + 368, ctx.r10.u32);
	// addi r10,r31,28504
	ctx.r10.s64 = ctx.r31.s64 + 28504;
	// lis r26,-32228
	ctx.r26.s64 = -2112094208;
	// lis r27,-32228
	ctx.r27.s64 = -2112094208;
	// lis r28,-32228
	ctx.r28.s64 = -2112094208;
	// lis r29,-32228
	ctx.r29.s64 = -2112094208;
	// stw r10,372(r11)
	PPC_STORE_U32(ctx.r11.u32 + 372, ctx.r10.u32);
	// li r10,28
	ctx.r10.s64 = 28;
	// lis r30,-32229
	ctx.r30.s64 = -2112159744;
	// lis r31,-32229
	ctx.r31.s64 = -2112159744;
	// stw r10,376(r11)
	PPC_STORE_U32(ctx.r11.u32 + 376, ctx.r10.u32);
	// addi r10,r3,28504
	ctx.r10.s64 = ctx.r3.s64 + 28504;
	// lis r3,-32228
	ctx.r3.s64 = -2112094208;
	// stw r10,380(r11)
	PPC_STORE_U32(ctx.r11.u32 + 380, ctx.r10.u32);
	// li r10,28
	ctx.r10.s64 = 28;
	// stw r10,384(r11)
	PPC_STORE_U32(ctx.r11.u32 + 384, ctx.r10.u32);
	// addi r10,r4,28504
	ctx.r10.s64 = ctx.r4.s64 + 28504;
	// lis r4,-32229
	ctx.r4.s64 = -2112159744;
	// stw r10,388(r11)
	PPC_STORE_U32(ctx.r11.u32 + 388, ctx.r10.u32);
	// li r10,71
	ctx.r10.s64 = 71;
	// stw r10,512(r11)
	PPC_STORE_U32(ctx.r11.u32 + 512, ctx.r10.u32);
	// addi r10,r5,-31256
	ctx.r10.s64 = ctx.r5.s64 + -31256;
	// lis r5,-32229
	ctx.r5.s64 = -2112159744;
	// stw r10,516(r11)
	PPC_STORE_U32(ctx.r11.u32 + 516, ctx.r10.u32);
	// li r10,55
	ctx.r10.s64 = 55;
	// stw r10,520(r11)
	PPC_STORE_U32(ctx.r11.u32 + 520, ctx.r10.u32);
	// addi r10,r6,-30896
	ctx.r10.s64 = ctx.r6.s64 + -30896;
	// lis r6,-32229
	ctx.r6.s64 = -2112159744;
	// stw r10,524(r11)
	PPC_STORE_U32(ctx.r11.u32 + 524, ctx.r10.u32);
	// li r10,93
	ctx.r10.s64 = 93;
	// stw r10,528(r11)
	PPC_STORE_U32(ctx.r11.u32 + 528, ctx.r10.u32);
	// addi r10,r7,-30352
	ctx.r10.s64 = ctx.r7.s64 + -30352;
	// lis r7,-32228
	ctx.r7.s64 = -2112094208;
	// stw r10,532(r11)
	PPC_STORE_U32(ctx.r11.u32 + 532, ctx.r10.u32);
	// li r10,33
	ctx.r10.s64 = 33;
	// stw r10,536(r11)
	PPC_STORE_U32(ctx.r11.u32 + 536, ctx.r10.u32);
	// addi r10,r8,-28784
	ctx.r10.s64 = ctx.r8.s64 + -28784;
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// stw r10,540(r11)
	PPC_STORE_U32(ctx.r11.u32 + 540, ctx.r10.u32);
	// li r10,33
	ctx.r10.s64 = 33;
	// stw r10,544(r11)
	PPC_STORE_U32(ctx.r11.u32 + 544, ctx.r10.u32);
	// addi r10,r9,-28784
	ctx.r10.s64 = ctx.r9.s64 + -28784;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// stw r10,548(r11)
	PPC_STORE_U32(ctx.r11.u32 + 548, ctx.r10.u32);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r10,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r10.u32);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r10,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r10.u32);
	// li r10,93
	ctx.r10.s64 = 93;
	// stw r10,552(r11)
	PPC_STORE_U32(ctx.r11.u32 + 552, ctx.r10.u32);
	// lwz r10,-156(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -156);
	// addi r10,r10,-26848
	ctx.r10.s64 = ctx.r10.s64 + -26848;
	// stw r10,556(r11)
	PPC_STORE_U32(ctx.r11.u32 + 556, ctx.r10.u32);
	// li r10,93
	ctx.r10.s64 = 93;
	// stw r10,560(r11)
	PPC_STORE_U32(ctx.r11.u32 + 560, ctx.r10.u32);
	// lwz r10,-160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// addi r10,r10,-26848
	ctx.r10.s64 = ctx.r10.s64 + -26848;
	// stw r10,564(r11)
	PPC_STORE_U32(ctx.r11.u32 + 564, ctx.r10.u32);
	// li r10,34
	ctx.r10.s64 = 34;
	// stw r10,568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 568, ctx.r10.u32);
	// addi r10,r14,-26344
	ctx.r10.s64 = ctx.r14.s64 + -26344;
	// stw r10,572(r11)
	PPC_STORE_U32(ctx.r11.u32 + 572, ctx.r10.u32);
	// li r10,34
	ctx.r10.s64 = 34;
	// stw r10,576(r11)
	PPC_STORE_U32(ctx.r11.u32 + 576, ctx.r10.u32);
	// addi r10,r15,-25712
	ctx.r10.s64 = ctx.r15.s64 + -25712;
	// stw r10,580(r11)
	PPC_STORE_U32(ctx.r11.u32 + 580, ctx.r10.u32);
	// li r10,34
	ctx.r10.s64 = 34;
	// stw r10,584(r11)
	PPC_STORE_U32(ctx.r11.u32 + 584, ctx.r10.u32);
	// addi r10,r16,-26104
	ctx.r10.s64 = ctx.r16.s64 + -26104;
	// stw r10,588(r11)
	PPC_STORE_U32(ctx.r11.u32 + 588, ctx.r10.u32);
	// li r10,34
	ctx.r10.s64 = 34;
	// stw r10,592(r11)
	PPC_STORE_U32(ctx.r11.u32 + 592, ctx.r10.u32);
	// addi r10,r17,-25712
	ctx.r10.s64 = ctx.r17.s64 + -25712;
	// stw r10,596(r11)
	PPC_STORE_U32(ctx.r11.u32 + 596, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,600(r11)
	PPC_STORE_U32(ctx.r11.u32 + 600, ctx.r10.u32);
	// addi r10,r18,28504
	ctx.r10.s64 = ctx.r18.s64 + 28504;
	// stw r10,604(r11)
	PPC_STORE_U32(ctx.r11.u32 + 604, ctx.r10.u32);
	// li r10,34
	ctx.r10.s64 = 34;
	// stw r10,608(r11)
	PPC_STORE_U32(ctx.r11.u32 + 608, ctx.r10.u32);
	// addi r10,r19,-25712
	ctx.r10.s64 = ctx.r19.s64 + -25712;
	// stw r10,612(r11)
	PPC_STORE_U32(ctx.r11.u32 + 612, ctx.r10.u32);
	// li r10,34
	ctx.r10.s64 = 34;
	// stw r10,616(r11)
	PPC_STORE_U32(ctx.r11.u32 + 616, ctx.r10.u32);
	// addi r10,r20,-25712
	ctx.r10.s64 = ctx.r20.s64 + -25712;
	// stw r10,620(r11)
	PPC_STORE_U32(ctx.r11.u32 + 620, ctx.r10.u32);
	// li r10,46
	ctx.r10.s64 = 46;
	// stw r10,624(r11)
	PPC_STORE_U32(ctx.r11.u32 + 624, ctx.r10.u32);
	// addi r10,r21,31424
	ctx.r10.s64 = ctx.r21.s64 + 31424;
	// stw r10,628(r11)
	PPC_STORE_U32(ctx.r11.u32 + 628, ctx.r10.u32);
	// li r10,61
	ctx.r10.s64 = 61;
	// stw r10,632(r11)
	PPC_STORE_U32(ctx.r11.u32 + 632, ctx.r10.u32);
	// addi r10,r22,31424
	ctx.r10.s64 = ctx.r22.s64 + 31424;
	// stw r10,636(r11)
	PPC_STORE_U32(ctx.r11.u32 + 636, ctx.r10.u32);
	// li r10,13
	ctx.r10.s64 = 13;
	// stw r10,640(r11)
	PPC_STORE_U32(ctx.r11.u32 + 640, ctx.r10.u32);
	// addi r10,r23,31424
	ctx.r10.s64 = ctx.r23.s64 + 31424;
	// stw r10,644(r11)
	PPC_STORE_U32(ctx.r11.u32 + 644, ctx.r10.u32);
	// li r10,28
	ctx.r10.s64 = 28;
	// stw r10,648(r11)
	PPC_STORE_U32(ctx.r11.u32 + 648, ctx.r10.u32);
	// addi r10,r24,28504
	ctx.r10.s64 = ctx.r24.s64 + 28504;
	// stw r10,652(r11)
	PPC_STORE_U32(ctx.r11.u32 + 652, ctx.r10.u32);
	// li r10,93
	ctx.r10.s64 = 93;
	// stw r10,656(r11)
	PPC_STORE_U32(ctx.r11.u32 + 656, ctx.r10.u32);
	// addi r10,r25,-26848
	ctx.r10.s64 = ctx.r25.s64 + -26848;
	// stw r10,660(r11)
	PPC_STORE_U32(ctx.r11.u32 + 660, ctx.r10.u32);
	// li r10,34
	ctx.r10.s64 = 34;
	// stw r10,664(r11)
	PPC_STORE_U32(ctx.r11.u32 + 664, ctx.r10.u32);
	// addi r10,r26,-24688
	ctx.r10.s64 = ctx.r26.s64 + -24688;
	// stw r10,668(r11)
	PPC_STORE_U32(ctx.r11.u32 + 668, ctx.r10.u32);
	// li r10,34
	ctx.r10.s64 = 34;
	// stw r10,672(r11)
	PPC_STORE_U32(ctx.r11.u32 + 672, ctx.r10.u32);
	// addi r10,r27,-25712
	ctx.r10.s64 = ctx.r27.s64 + -25712;
	// stw r10,676(r11)
	PPC_STORE_U32(ctx.r11.u32 + 676, ctx.r10.u32);
	// li r10,34
	ctx.r10.s64 = 34;
	// stw r10,680(r11)
	PPC_STORE_U32(ctx.r11.u32 + 680, ctx.r10.u32);
	// addi r10,r28,-24688
	ctx.r10.s64 = ctx.r28.s64 + -24688;
	// stw r10,684(r11)
	PPC_STORE_U32(ctx.r11.u32 + 684, ctx.r10.u32);
	// li r10,34
	ctx.r10.s64 = 34;
	// stw r10,688(r11)
	PPC_STORE_U32(ctx.r11.u32 + 688, ctx.r10.u32);
	// addi r10,r29,-25712
	ctx.r10.s64 = ctx.r29.s64 + -25712;
	// stw r10,692(r11)
	PPC_STORE_U32(ctx.r11.u32 + 692, ctx.r10.u32);
	// li r10,71
	ctx.r10.s64 = 71;
	// stw r10,696(r11)
	PPC_STORE_U32(ctx.r11.u32 + 696, ctx.r10.u32);
	// addi r10,r30,28592
	ctx.r10.s64 = ctx.r30.s64 + 28592;
	// stw r10,700(r11)
	PPC_STORE_U32(ctx.r11.u32 + 700, ctx.r10.u32);
	// li r10,13
	ctx.r10.s64 = 13;
	// stw r10,704(r11)
	PPC_STORE_U32(ctx.r11.u32 + 704, ctx.r10.u32);
	// addi r10,r31,31424
	ctx.r10.s64 = ctx.r31.s64 + 31424;
	// stw r10,708(r11)
	PPC_STORE_U32(ctx.r11.u32 + 708, ctx.r10.u32);
	// li r10,33
	ctx.r10.s64 = 33;
	// stw r10,712(r11)
	PPC_STORE_U32(ctx.r11.u32 + 712, ctx.r10.u32);
	// addi r10,r3,-27672
	ctx.r10.s64 = ctx.r3.s64 + -27672;
	// stw r10,716(r11)
	PPC_STORE_U32(ctx.r11.u32 + 716, ctx.r10.u32);
	// li r10,33
	ctx.r10.s64 = 33;
	// stw r10,720(r11)
	PPC_STORE_U32(ctx.r11.u32 + 720, ctx.r10.u32);
	// addi r10,r4,31424
	ctx.r10.s64 = ctx.r4.s64 + 31424;
	// stw r10,724(r11)
	PPC_STORE_U32(ctx.r11.u32 + 724, ctx.r10.u32);
	// li r10,37
	ctx.r10.s64 = 37;
	// stw r10,728(r11)
	PPC_STORE_U32(ctx.r11.u32 + 728, ctx.r10.u32);
	// addi r10,r5,31424
	ctx.r10.s64 = ctx.r5.s64 + 31424;
	// stw r10,732(r11)
	PPC_STORE_U32(ctx.r11.u32 + 732, ctx.r10.u32);
	// li r10,38
	ctx.r10.s64 = 38;
	// stw r10,736(r11)
	PPC_STORE_U32(ctx.r11.u32 + 736, ctx.r10.u32);
	// addi r10,r6,31424
	ctx.r10.s64 = ctx.r6.s64 + 31424;
	// stw r10,740(r11)
	PPC_STORE_U32(ctx.r11.u32 + 740, ctx.r10.u32);
	// li r10,95
	ctx.r10.s64 = 95;
	// stw r10,744(r11)
	PPC_STORE_U32(ctx.r11.u32 + 744, ctx.r10.u32);
	// addi r10,r7,-29448
	ctx.r10.s64 = ctx.r7.s64 + -29448;
	// stw r10,748(r11)
	PPC_STORE_U32(ctx.r11.u32 + 748, ctx.r10.u32);
	// li r10,86
	ctx.r10.s64 = 86;
	// stw r10,752(r11)
	PPC_STORE_U32(ctx.r11.u32 + 752, ctx.r10.u32);
	// addi r10,r8,-31720
	ctx.r10.s64 = ctx.r8.s64 + -31720;
	// stw r10,756(r11)
	PPC_STORE_U32(ctx.r11.u32 + 756, ctx.r10.u32);
	// li r10,94
	ctx.r10.s64 = 94;
	// stw r10,760(r11)
	PPC_STORE_U32(ctx.r11.u32 + 760, ctx.r10.u32);
	// addi r10,r9,-29448
	ctx.r10.s64 = ctx.r9.s64 + -29448;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stw r10,764(r11)
	PPC_STORE_U32(ctx.r11.u32 + 764, ctx.r10.u32);
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r10,768(r11)
	PPC_STORE_U32(ctx.r11.u32 + 768, ctx.r10.u32);
	// addi r10,r9,32568
	ctx.r10.s64 = ctx.r9.s64 + 32568;
	// stw r10,772(r11)
	PPC_STORE_U32(ctx.r11.u32 + 772, ctx.r10.u32);
	// b 0x822e9900
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BA7FC"))) PPC_WEAK_FUNC(sub_821BA7FC);
PPC_FUNC_IMPL(__imp__sub_821BA7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BA800"))) PPC_WEAK_FUNC(sub_821BA800);
PPC_FUNC_IMPL(__imp__sub_821BA800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e0
	ctx.lr = 0x821BA808;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x821ba828
	if (!ctx.cr6.lt) goto loc_821BA828;
	// bl 0x822fa658
	ctx.lr = 0x821BA828;
	sub_822FA658(ctx, base);
loc_821BA828:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// lwz r26,0(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r31,r26,21
	ctx.r31.u64 = ctx.r26.u32 & 0x7FF;
	// cmplwi cr6,r31,256
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 256, ctx.xer);
	// blt cr6,0x821ba850
	if (ctx.cr6.lt) goto loc_821BA850;
	// bl 0x822fa658
	ctx.lr = 0x821BA84C;
	sub_822FA658(ctx, base);
	// li r31,255
	ctx.r31.s64 = 255;
loc_821BA850:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// rlwimi r11,r26,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r26.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// beq cr6,0x821ba868
	if (ctx.cr6.eq) goto loc_821BA868;
	// bl 0x822fa658
	ctx.lr = 0x821BA868;
	sub_822FA658(ctx, base);
loc_821BA868:
	// li r11,28
	ctx.r11.s64 = 28;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r31,r10,16,0,15
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r31.u64 & 0xFFFFFFFF0000FFFF);
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// stw r8,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e9930
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BA8D4"))) PPC_WEAK_FUNC(sub_821BA8D4);
PPC_FUNC_IMPL(__imp__sub_821BA8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BA8D8"))) PPC_WEAK_FUNC(sub_821BA8D8);
PPC_FUNC_IMPL(__imp__sub_821BA8D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e0
	ctx.lr = 0x821BA8E0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x821ba900
	if (!ctx.cr6.lt) goto loc_821BA900;
	// bl 0x822fa658
	ctx.lr = 0x821BA900;
	sub_822FA658(ctx, base);
loc_821BA900:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// lwz r26,0(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r31,r26,21
	ctx.r31.u64 = ctx.r26.u32 & 0x7FF;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x821ba928
	if (ctx.cr6.lt) goto loc_821BA928;
	// bl 0x822fa658
	ctx.lr = 0x821BA924;
	sub_822FA658(ctx, base);
	// li r31,15
	ctx.r31.s64 = 15;
loc_821BA928:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// rlwimi r11,r26,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r26.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,1792
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1792, ctx.xer);
	// beq cr6,0x821ba940
	if (ctx.cr6.eq) goto loc_821BA940;
	// bl 0x822fa658
	ctx.lr = 0x821BA940;
	sub_822FA658(ctx, base);
loc_821BA940:
	// li r11,28
	ctx.r11.s64 = 28;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r31,r10,17,0,15
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r10.u32, 17) & 0xFFFF0000) | (ctx.r31.u64 & 0xFFFFFFFF0000FFFF);
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// stw r8,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e9930
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BA9AC"))) PPC_WEAK_FUNC(sub_821BA9AC);
PPC_FUNC_IMPL(__imp__sub_821BA9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BA9B0"))) PPC_WEAK_FUNC(sub_821BA9B0);
PPC_FUNC_IMPL(__imp__sub_821BA9B0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm. r10,r3,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x821ba9c8
	if (ctx.cr0.eq) goto loc_821BA9C8;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// b 0x821ba9cc
	goto loc_821BA9CC;
loc_821BA9C8:
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_821BA9CC:
	// rlwinm. r10,r3,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821ba9e0
	if (ctx.cr0.eq) goto loc_821BA9E0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// b 0x821ba9e4
	goto loc_821BA9E4;
loc_821BA9E0:
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_821BA9E4:
	// rlwinm. r10,r3,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821ba9f8
	if (ctx.cr0.eq) goto loc_821BA9F8;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// b 0x821ba9fc
	goto loc_821BA9FC;
loc_821BA9F8:
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
loc_821BA9FC:
	// rlwinm. r10,r3,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821baa08
	if (ctx.cr0.eq) goto loc_821BAA08;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
loc_821BAA08:
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821BAA10"))) PPC_WEAK_FUNC(sub_821BAA10);
PPC_FUNC_IMPL(__imp__sub_821BAA10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x821BAA18;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,16
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 16, ctx.xer);
	// lwz r27,0(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// blt cr6,0x821baa38
	if (ctx.cr6.lt) goto loc_821BAA38;
	// bl 0x822fa658
	ctx.lr = 0x821BAA38;
	sub_822FA658(ctx, base);
loc_821BAA38:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x821baa88
	if (ctx.cr6.eq) goto loc_821BAA88;
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x821baa80
	if (ctx.cr6.eq) goto loc_821BAA80;
	// lis r11,6144
	ctx.r11.s64 = 402653184;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x821baa78
	if (ctx.cr6.eq) goto loc_821BAA78;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x821baa70
	if (ctx.cr6.eq) goto loc_821BAA70;
	// bl 0x822fa658
	ctx.lr = 0x821BAA6C;
	sub_822FA658(ctx, base);
	// b 0x821baa8c
	goto loc_821BAA8C;
loc_821BAA70:
	// lis r31,768
	ctx.r31.s64 = 50331648;
	// b 0x821baa8c
	goto loc_821BAA8C;
loc_821BAA78:
	// lis r31,1024
	ctx.r31.s64 = 67108864;
	// b 0x821baa8c
	goto loc_821BAA8C;
loc_821BAA80:
	// lis r31,512
	ctx.r31.s64 = 33554432;
	// b 0x821baa8c
	goto loc_821BAA8C;
loc_821BAA88:
	// li r31,0
	ctx.r31.s64 = 0;
loc_821BAA8C:
	// rlwimi r31,r29,16,8,15
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r29.u32, 16) & 0xFF0000) | (ctx.r31.u64 & 0xFFFFFFFFFF00FFFF);
	// li r11,801
	ctx.r11.s64 = 801;
	// addi r10,r27,4
	ctx.r10.s64 = ctx.r27.s64 + 4;
	// rlwimi r31,r11,27,16,31
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r11.u32, 27) & 0xFFFF) | (ctx.r31.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r31,r11,27,3,4
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r11.u32, 27) & 0x18000000) | (ctx.r31.u64 & 0xFFFFFFFFE7FFFFFF);
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BAAB0"))) PPC_WEAK_FUNC(sub_821BAAB0);
PPC_FUNC_IMPL(__imp__sub_821BAAB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98d0
	ctx.lr = 0x821BAAB8;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r11,r28,21,3,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 21) & 0x1FE00000;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r23,0(r22)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// cmpwi cr6,r31,13
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 13, ctx.xer);
	// ori r29,r11,23
	ctx.r29.u64 = ctx.r11.u64 | 23;
	// ble cr6,0x821baaf4
	if (!ctx.cr6.gt) goto loc_821BAAF4;
	// bl 0x822fa658
	ctx.lr = 0x821BAAF4;
	sub_822FA658(ctx, base);
loc_821BAAF4:
	// cmplwi cr6,r27,16
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 16, ctx.xer);
	// blt cr6,0x821bab00
	if (ctx.cr6.lt) goto loc_821BAB00;
	// bl 0x822fa658
	ctx.lr = 0x821BAB00;
	sub_822FA658(ctx, base);
loc_821BAB00:
	// cmpwi cr6,r31,5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 5, ctx.xer);
	// bne cr6,0x821bab5c
	if (!ctx.cr6.eq) goto loc_821BAB5C;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x821bab1c
	if (!ctx.cr6.lt) goto loc_821BAB1C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_821BAB1C:
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821bab38
	if (!ctx.cr6.eq) goto loc_821BAB38;
	// li r26,0
	ctx.r26.s64 = 0;
	// b 0x821bab44
	goto loc_821BAB44;
loc_821BAB38:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821bab44
	if (!ctx.cr6.eq) goto loc_821BAB44;
	// li r26,1
	ctx.r26.s64 = 1;
loc_821BAB44:
	// li r11,5
	ctx.r11.s64 = 5;
	// cmplwi cr6,r28,8
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 8, ctx.xer);
	// rlwimi r29,r11,16,11,15
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x1F0000) | (ctx.r29.u64 & 0xFFFFFFFFFFE0FFFF);
	// blt cr6,0x821bab8c
	if (ctx.cr6.lt) goto loc_821BAB8C;
	// bl 0x822fa658
	ctx.lr = 0x821BAB58;
	sub_822FA658(ctx, base);
	// b 0x821bab8c
	goto loc_821BAB8C;
loc_821BAB5C:
	// cmpwi cr6,r31,10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 10, ctx.xer);
	// bne cr6,0x821bab70
	if (!ctx.cr6.eq) goto loc_821BAB70;
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwimi r29,r11,17,11,15
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r11.u32, 17) & 0x1F0000) | (ctx.r29.u64 & 0xFFFFFFFFFFE0FFFF);
	// b 0x821bab8c
	goto loc_821BAB8C;
loc_821BAB70:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// rlwinm r10,r28,21,0,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 21) & 0xFFE00000;
	// rlwinm r11,r11,25,0,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0xFE000000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// li r10,5
	ctx.r10.s64 = 5;
	// rlwimi r29,r11,0,3,10
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x1FE00000) | (ctx.r29.u64 & 0xFFFFFFFFE01FFFFF);
	// rlwimi r29,r10,16,11,15
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x1F0000) | (ctx.r29.u64 & 0xFFFFFFFFFFE0FFFF);
loc_821BAB8C:
	// cmplwi cr6,r27,16
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 16, ctx.xer);
	// blt cr6,0x821bab98
	if (ctx.cr6.lt) goto loc_821BAB98;
	// bl 0x822fa658
	ctx.lr = 0x821BAB98;
	sub_822FA658(ctx, base);
loc_821BAB98:
	// addi r11,r27,4
	ctx.r11.s64 = ctx.r27.s64 + 4;
	// lwz r31,16(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r10,12
	ctx.r10.s64 = 12;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r27,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// stwx r10,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r10.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r27,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r27.u32);
	// bl 0x821ba9b0
	ctx.lr = 0x821BABD8;
	sub_821BA9B0(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bne cr6,0x821bac20
	if (!ctx.cr6.eq) goto loc_821BAC20;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// bne cr6,0x821bac20
	if (!ctx.cr6.eq) goto loc_821BAC20;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// bne cr6,0x821bac20
	if (!ctx.cr6.eq) goto loc_821BAC20;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x821bac20
	if (!ctx.cr6.eq) goto loc_821BAC20;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x821bac20
	if (!ctx.cr6.eq) goto loc_821BAC20;
	// clrlwi r11,r29,1
	ctx.r11.u64 = ctx.r29.u32 & 0x7FFFFFFF;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// addi r11,r23,4
	ctx.r11.s64 = ctx.r23.s64 + 4;
	// b 0x821bac48
	goto loc_821BAC48;
loc_821BAC20:
	// rlwimi r10,r26,2,29,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r26.u32, 2) & 0x4) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFB);
	// oris r11,r29,32768
	ctx.r11.u64 = ctx.r29.u64 | 2147483648;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// rlwimi r9,r10,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// rlwimi r8,r9,2,0,29
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0xFFFFFFFC) | (ctx.r8.u64 & 0xFFFFFFFF00000003);
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// addi r11,r23,4
	ctx.r11.s64 = ctx.r23.s64 + 4;
	// rlwimi r7,r8,2,0,29
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 2) & 0xFFFFFFFC) | (ctx.r7.u64 & 0xFFFFFFFF00000003);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_821BAC48:
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// rlwimi r27,r10,18,0,15
	ctx.r27.u64 = (__builtin_rotateleft32(ctx.r10.u32, 18) & 0xFFFF0000) | (ctx.r27.u64 & 0xFFFFFFFF0000FFFF);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// stw r9,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r9.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822e9920
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BAC64"))) PPC_WEAK_FUNC(sub_821BAC64);
PPC_FUNC_IMPL(__imp__sub_821BAC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BAC68"))) PPC_WEAK_FUNC(sub_821BAC68);
PPC_FUNC_IMPL(__imp__sub_821BAC68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98d4
	ctx.lr = 0x821BAC70;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// lwz r27,0(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// cmpwi cr6,r4,10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 10, ctx.xer);
	// beq cr6,0x821bacb0
	if (ctx.cr6.eq) goto loc_821BACB0;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// beq cr6,0x821bacc8
	if (ctx.cr6.eq) goto loc_821BACC8;
	// bl 0x822fa658
	ctx.lr = 0x821BACA8;
	sub_822FA658(ctx, base);
	// lwz r29,92(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x821bad08
	goto loc_821BAD08;
loc_821BACB0:
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r29,r11,18
	ctx.r29.s64 = ctx.r11.s64 + 18;
	// b 0x821bad08
	goto loc_821BAD08;
loc_821BACC8:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// li r29,17
	ctx.r29.s64 = 17;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x821bace0
	if (!ctx.cr6.lt) goto loc_821BACE0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_821BACE0:
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821bacfc
	if (!ctx.cr6.eq) goto loc_821BACFC;
	// li r25,0
	ctx.r25.s64 = 0;
	// b 0x821bad08
	goto loc_821BAD08;
loc_821BACFC:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821bad08
	if (!ctx.cr6.eq) goto loc_821BAD08;
	// li r25,1
	ctx.r25.s64 = 1;
loc_821BAD08:
	// cmplwi cr6,r28,16
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 16, ctx.xer);
	// blt cr6,0x821bad14
	if (ctx.cr6.lt) goto loc_821BAD14;
	// bl 0x822fa658
	ctx.lr = 0x821BAD14;
	sub_822FA658(ctx, base);
loc_821BAD14:
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r28,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// stwx r29,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r29.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r31,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r31.u32);
	// bl 0x821ba9b0
	ctx.lr = 0x821BAD50;
	sub_821BA9B0(ctx, base);
	// cntlzw r11,r25
	ctx.r11.u64 = ctx.r25.u32 == 0 ? 32 : __builtin_clz(ctx.r25.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwimi r31,r29,16,10,15
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r29.u32, 16) & 0x3F0000) | (ctx.r31.u64 & 0xFFFFFFFFFFC0FFFF);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwimi r10,r11,2,29,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 2) & 0x4) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFB);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// rlwimi r9,r10,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// li r10,22
	ctx.r10.s64 = 22;
	// rlwimi r11,r9,2,0,29
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0xFFFFFFFC) | (ctx.r11.u64 & 0xFFFFFFFF00000003);
	// clrlwi r9,r31,10
	ctx.r9.u64 = ctx.r31.u32 & 0x3FFFFF;
	// rlwimi r8,r11,2,0,29
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 2) & 0xFFFFFFFC) | (ctx.r8.u64 & 0xFFFFFFFF00000003);
	// addi r11,r27,4
	ctx.r11.s64 = ctx.r27.s64 + 4;
	// rlwimi r10,r8,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822e9924
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BADA8"))) PPC_WEAK_FUNC(sub_821BADA8);
PPC_FUNC_IMPL(__imp__sub_821BADA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98cc
	ctx.lr = 0x821BADB0;
	__savegprlr_21(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// lwz r31,0(r21)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x821bade4
	if (ctx.cr6.eq) goto loc_821BADE4;
	// bl 0x822fa658
	ctx.lr = 0x821BADE4;
	sub_822FA658(ctx, base);
loc_821BADE4:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x821badf8
	if (!ctx.cr6.lt) goto loc_821BADF8;
	// bl 0x822fa658
	ctx.lr = 0x821BADF8;
	sub_822FA658(ctx, base);
loc_821BADF8:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r22,r11,4
	ctx.r22.s64 = ctx.r11.s64 + 4;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// clrlwi r31,r30,21
	ctx.r31.u64 = ctx.r30.u32 & 0x7FF;
	// rlwimi r11,r30,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,24,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1F;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x821bae90
	if (!ctx.cr6.eq) goto loc_821BAE90;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x821bae50
	if (ctx.cr6.lt) goto loc_821BAE50;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,5105
	ctx.r5.s64 = 5105;
	// addi r6,r11,212
	ctx.r6.s64 = ctx.r11.s64 + 212;
loc_821BAE38:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mtctr r23
	ctx.ctr.u64 = ctx.r23.u64;
	// bctrl 
	ctx.lr = 0x821BAE48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x821bafe0
	goto loc_821BAFE0;
loc_821BAE50:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// rlwinm r4,r29,0,1,4
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x78000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821baa10
	ctx.lr = 0x821BAE60;
	sub_821BAA10(ctx, base);
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x821bae74
	if (!ctx.cr6.lt) goto loc_821BAE74;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_821BAE74:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// slw r11,r10,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r31.u8 & 0x3F));
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r11.u32);
	// b 0x821bafd8
	goto loc_821BAFD8;
loc_821BAE90:
	// rlwinm r27,r30,0,12,15
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xF0000;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821baf00
	if (ctx.cr6.eq) goto loc_821BAF00;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821baec8
	if (ctx.cr6.eq) goto loc_821BAEC8;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x821baeb4
	if (ctx.cr6.eq) goto loc_821BAEB4;
loc_821BAEAC:
	// bl 0x822fa658
	ctx.lr = 0x821BAEB0;
	sub_822FA658(ctx, base);
	// b 0x821bafd8
	goto loc_821BAFD8;
loc_821BAEB4:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,768
	ctx.r11.u64 = ctx.r11.u64 | 768;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x821bafd8
	if (!ctx.cr6.lt) goto loc_821BAFD8;
	// b 0x821baeac
	goto loc_821BAEAC;
loc_821BAEC8:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,768
	ctx.r11.u64 = ctx.r11.u64 | 768;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821baedc
	if (ctx.cr6.lt) goto loc_821BAEDC;
	// bl 0x822fa658
	ctx.lr = 0x821BAEDC;
	sub_822FA658(ctx, base);
loc_821BAEDC:
	// cmplwi cr6,r31,8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 8, ctx.xer);
	// blt cr6,0x821baee8
	if (ctx.cr6.lt) goto loc_821BAEE8;
	// bl 0x822fa658
	ctx.lr = 0x821BAEE8;
	sub_822FA658(ctx, base);
loc_821BAEE8:
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r7,r11,-29588
	ctx.r7.s64 = ctx.r11.s64 + -29588;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 2;
	// b 0x821bafc4
	goto loc_821BAFC4;
loc_821BAF00:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,768
	ctx.r11.u64 = ctx.r11.u64 | 768;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821baf8c
	if (ctx.cr6.lt) goto loc_821BAF8C;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x821baf1c
	if (ctx.cr6.lt) goto loc_821BAF1C;
	// bl 0x822fa658
	ctx.lr = 0x821BAF1C;
	sub_822FA658(ctx, base);
loc_821BAF1C:
	// clrlwi r4,r29,28
	ctx.r4.u64 = ctx.r29.u32 & 0xF;
	// rlwinm r6,r30,10,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 10) & 0x1;
	// rlwinm r11,r29,16,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xF;
	// cmpwi cr6,r4,10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 10, ctx.xer);
	// bne cr6,0x821baf34
	if (!ctx.cr6.eq) goto loc_821BAF34;
	// li r6,1
	ctx.r6.s64 = 1;
loc_821BAF34:
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bne cr6,0x821baf68
	if (!ctx.cr6.eq) goto loc_821BAF68;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x821baf68
	if (ctx.cr6.lt) goto loc_821BAF68;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// addi r5,r10,96
	ctx.r5.s64 = ctx.r10.s64 + 96;
	// li r4,200
	ctx.r4.s64 = 200;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822ee250
	ctx.lr = 0x821BAF5C;
	sub_822EE250(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,5106
	ctx.r5.s64 = 5106;
	// b 0x821bae38
	goto loc_821BAE38;
loc_821BAF68:
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// addi r7,r10,-29572
	ctx.r7.s64 = ctx.r10.s64 + -29572;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821baab0
	ctx.lr = 0x821BAF88;
	sub_821BAAB0(ctx, base);
	// b 0x821bafd8
	goto loc_821BAFD8;
loc_821BAF8C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821bafa0
	if (!ctx.cr6.eq) goto loc_821BAFA0;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// addi r30,r11,-29620
	ctx.r30.s64 = ctx.r11.s64 + -29620;
	// b 0x821bafb4
	goto loc_821BAFB4;
loc_821BAFA0:
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// addi r30,r11,-29604
	ctx.r30.s64 = ctx.r11.s64 + -29604;
	// blt cr6,0x821bafb4
	if (ctx.cr6.lt) goto loc_821BAFB4;
	// bl 0x822fa658
	ctx.lr = 0x821BAFB4;
	sub_822FA658(ctx, base);
loc_821BAFB4:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821BAFC4:
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x821bac68
	ctx.lr = 0x821BAFD8;
	sub_821BAC68(ctx, base);
loc_821BAFD8:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r22,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r22.u32);
loc_821BAFE0:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x822e991c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BAFE8"))) PPC_WEAK_FUNC(sub_821BAFE8);
PPC_FUNC_IMPL(__imp__sub_821BAFE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e0
	ctx.lr = 0x821BAFF0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// lwz r26,16(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821bb014
	if (ctx.cr6.lt) goto loc_821BB014;
	// bl 0x822fa658
	ctx.lr = 0x821BB014;
	sub_822FA658(ctx, base);
loc_821BB014:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821bb06c
	if (!ctx.cr6.gt) goto loc_821BB06C;
loc_821BB024:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// srw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r31.u8 & 0x3F));
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bb05c
	if (ctx.cr0.eq) goto loc_821BB05C;
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x821bb044
	if (ctx.cr6.lt) goto loc_821BB044;
	// bl 0x822fa658
	ctx.lr = 0x821BB044;
	sub_822FA658(ctx, base);
loc_821BB044:
	// lis r11,2048
	ctx.r11.s64 = 134217728;
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// ori r11,r11,25
	ctx.r11.u64 = ctx.r11.u64 | 25;
	// rlwimi r11,r31,16,8,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 16) & 0xFF0000) | (ctx.r11.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
loc_821BB05C:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821bb024
	if (ctx.cr6.lt) goto loc_821BB024;
loc_821BB06C:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821bb0c8
	if (!ctx.cr6.gt) goto loc_821BB0C8;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// addi r30,r11,-29588
	ctx.r30.s64 = ctx.r11.s64 + -29588;
loc_821BB084:
	// lwz r11,196(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 196);
	// srw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r31.u8 & 0x3F));
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bb0b8
	if (ctx.cr0.eq) goto loc_821BB0B8;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lis r8,15
	ctx.r8.s64 = 983040;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 2;
	// bl 0x821bac68
	ctx.lr = 0x821BB0B8;
	sub_821BAC68(ctx, base);
loc_821BB0B8:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821bb084
	if (ctx.cr6.lt) goto loc_821BB084;
loc_821BB0C8:
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r11,-29604
	ctx.r30.s64 = ctx.r11.s64 + -29604;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// addi r28,r11,-29620
	ctx.r28.s64 = ctx.r11.s64 + -29620;
loc_821BB0DC:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bb120
	if (ctx.cr6.eq) goto loc_821BB120;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// beq cr6,0x821bb100
	if (ctx.cr6.eq) goto loc_821BB100;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
loc_821BB100:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lis r8,15
	ctx.r8.s64 = 983040;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bac68
	ctx.lr = 0x821BB120;
	sub_821BAC68(ctx, base);
loc_821BB120:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// blt cr6,0x821bb0dc
	if (ctx.cr6.lt) goto loc_821BB0DC;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e9930
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BB134"))) PPC_WEAK_FUNC(sub_821BB134);
PPC_FUNC_IMPL(__imp__sub_821BB134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BB138"))) PPC_WEAK_FUNC(sub_821BB138);
PPC_FUNC_IMPL(__imp__sub_821BB138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98c8
	ctx.lr = 0x821BB140;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// lwz r24,16(r23)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821bb168
	if (ctx.cr6.lt) goto loc_821BB168;
	// bl 0x822fa658
	ctx.lr = 0x821BB168;
	sub_822FA658(ctx, base);
loc_821BB168:
	// lwz r11,432(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 432);
	// lwz r31,0(r20)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bb1c4
	if (ctx.cr6.eq) goto loc_821BB1C4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bb1c4
	if (ctx.cr0.eq) goto loc_821BB1C4;
	// lwz r11,424(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 424);
	// cmplwi cr6,r11,28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 28, ctx.xer);
	// blt cr6,0x821bb194
	if (ctx.cr6.lt) goto loc_821BB194;
	// bl 0x822fa658
	ctx.lr = 0x821BB194;
	sub_822FA658(ctx, base);
loc_821BB194:
	// lwz r11,424(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 424);
	// lwz r10,432(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 432);
	// addi r11,r11,25
	ctx.r11.s64 = ctx.r11.s64 + 25;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r10,r11,r24
	PPC_STORE_U32(ctx.r11.u32 + ctx.r24.u32, ctx.r10.u32);
	// lwz r11,424(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 424);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// stw r31,204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 204, ctx.r31.u32);
	// lwz r11,424(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 424);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,424(r24)
	PPC_STORE_U32(ctx.r24.u32 + 424, ctx.r11.u32);
loc_821BB1C4:
	// addi r21,r31,4
	ctx.r21.s64 = ctx.r31.s64 + 4;
	// stw r31,432(r24)
	PPC_STORE_U32(ctx.r24.u32 + 432, ctx.r31.u32);
	// lhz r27,2(r31)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821bb410
	if (ctx.cr0.eq) goto loc_821BB410;
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// ori r10,r10,260
	ctx.r10.u64 = ctx.r10.u64 | 260;
	// rlwimi r9,r11,12,21,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF8FF);
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// clrlwi r31,r11,21
	ctx.r31.u64 = ctx.r11.u32 & 0x7FF;
	// rlwinm r26,r9,24,27,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0x1F;
	// li r22,1
	ctx.r22.s64 = 1;
	// bge cr6,0x821bb308
	if (!ctx.cr6.lt) goto loc_821BB308;
	// addi r11,r27,-64
	ctx.r11.s64 = ctx.r27.s64 + -64;
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// bgt cr6,0x821bb260
	if (ctx.cr6.gt) goto loc_821BB260;
	// lis r12,-32251
	ctx.r12.s64 = -2113601536;
	// addi r12,r12,256
	ctx.r12.s64 = ctx.r12.s64 + 256;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32228
	ctx.r12.s64 = -2112094208;
	// addi r12,r12,-19900
	ctx.r12.s64 = ctx.r12.s64 + -19900;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_821BB258;
	case 1:
		goto loc_821BB258;
	case 2:
		goto loc_821BB244;
	case 3:
		goto loc_821BB244;
	case 4:
		goto loc_821BB244;
	case 5:
		goto loc_821BB250;
	case 6:
		goto loc_821BB250;
	case 7:
		goto loc_821BB258;
	case 8:
		goto loc_821BB244;
	case 9:
		goto loc_821BB258;
	case 10:
		goto loc_821BB244;
	case 11:
		goto loc_821BB260;
	case 12:
		goto loc_821BB244;
	case 13:
		goto loc_821BB244;
	case 14:
		goto loc_821BB260;
	case 15:
		goto loc_821BB260;
	case 16:
		goto loc_821BB260;
	case 17:
		goto loc_821BB260;
	case 18:
		goto loc_821BB250;
	case 19:
		goto loc_821BB244;
	case 20:
		goto loc_821BB248;
	case 21:
		goto loc_821BB248;
	case 22:
		goto loc_821BB248;
	default:
		__builtin_unreachable();
	}
loc_821BB244:
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
loc_821BB248:
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// b 0x821bb268
	goto loc_821BB268;
loc_821BB250:
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// b 0x821bb268
	goto loc_821BB268;
loc_821BB258:
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// b 0x821bb26c
	goto loc_821BB26C;
loc_821BB260:
	// cmplwi cr6,r26,3
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 3, ctx.xer);
	// bne cr6,0x821bb26c
	if (!ctx.cr6.eq) goto loc_821BB26C;
loc_821BB268:
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
loc_821BB26C:
	// cmplwi cr6,r31,8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 8, ctx.xer);
	// blt cr6,0x821bb278
	if (ctx.cr6.lt) goto loc_821BB278;
	// bl 0x822fa658
	ctx.lr = 0x821BB278;
	sub_822FA658(ctx, base);
loc_821BB278:
	// cmplwi cr6,r26,3
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 3, ctx.xer);
	// bne cr6,0x821bb404
	if (!ctx.cr6.eq) goto loc_821BB404;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x821bb2bc
	if (ctx.cr6.eq) goto loc_821BB2BC;
	// lwz r10,12(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// slw r11,r22,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r31.u8 & 0x3F));
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,12(r23)
	PPC_STORE_U32(ctx.r23.u32 + 12, ctx.r11.u32);
	// blt cr6,0x821bb2a4
	if (ctx.cr6.lt) goto loc_821BB2A4;
	// bl 0x822fa658
	ctx.lr = 0x821BB2A4;
	sub_822FA658(ctx, base);
loc_821BB2A4:
	// lwz r10,8(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x821bb2b8
	if (!ctx.cr6.lt) goto loc_821BB2B8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_821BB2B8:
	// stw r11,8(r23)
	PPC_STORE_U32(ctx.r23.u32 + 8, ctx.r11.u32);
loc_821BB2BC:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x821bb2ec
	if (ctx.cr6.eq) goto loc_821BB2EC;
	// lwz r9,196(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 196);
	// slw r10,r22,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r31.u8 & 0x3F));
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,196(r24)
	PPC_STORE_U32(ctx.r24.u32 + 196, ctx.r10.u32);
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x821bb2e8
	if (!ctx.cr6.lt) goto loc_821BB2E8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_821BB2E8:
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
loc_821BB2EC:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x821bb404
	if (ctx.cr6.eq) goto loc_821BB404;
	// addi r11,r31,41
	ctx.r11.s64 = ctx.r31.s64 + 41;
	// addi r10,r31,6
	ctx.r10.s64 = ctx.r31.s64 + 6;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r24
	PPC_STORE_U32(ctx.r11.u32 + ctx.r24.u32, ctx.r10.u32);
	// b 0x821bb404
	goto loc_821BB404;
loc_821BB308:
	// beq cr6,0x821bb310
	if (ctx.cr6.eq) goto loc_821BB310;
	// bl 0x822fa658
	ctx.lr = 0x821BB310;
	sub_822FA658(ctx, base);
loc_821BB310:
	// cmplwi cr6,r27,65
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 65, ctx.xer);
	// beq cr6,0x821bb358
	if (ctx.cr6.eq) goto loc_821BB358;
	// cmplwi cr6,r27,66
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 66, ctx.xer);
	// bne cr6,0x821bb404
	if (!ctx.cr6.eq) goto loc_821BB404;
	// lwz r10,12(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// slw r11,r22,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r31.u8 & 0x3F));
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,12(r23)
	PPC_STORE_U32(ctx.r23.u32 + 12, ctx.r11.u32);
	// blt cr6,0x821bb33c
	if (ctx.cr6.lt) goto loc_821BB33C;
	// bl 0x822fa658
	ctx.lr = 0x821BB33C;
	sub_822FA658(ctx, base);
loc_821BB33C:
	// lwz r10,8(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x821bb350
	if (!ctx.cr6.lt) goto loc_821BB350;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_821BB350:
	// stw r11,8(r23)
	PPC_STORE_U32(ctx.r23.u32 + 8, ctx.r11.u32);
	// b 0x821bb404
	goto loc_821BB404;
loc_821BB358:
	// cmplwi cr6,r26,3
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 3, ctx.xer);
	// bne cr6,0x821bb404
	if (!ctx.cr6.eq) goto loc_821BB404;
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x821bb374
	if (!ctx.cr6.lt) goto loc_821BB374;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_821BB374:
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// b 0x821bb404
	goto loc_821BB404;
loc_821BB37C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// clrlwi r31,r11,21
	ctx.r31.u64 = ctx.r11.u32 & 0x7FF;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,24,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1F;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x821bb3e0
	if (!ctx.cr6.eq) goto loc_821BB3E0;
	// addi r11,r31,41
	ctx.r11.s64 = ctx.r31.s64 + 41;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bb400
	if (!ctx.cr6.eq) goto loc_821BB400;
	// cmplwi cr6,r31,8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 8, ctx.xer);
	// blt cr6,0x821bb3b4
	if (ctx.cr6.lt) goto loc_821BB3B4;
	// bl 0x822fa658
	ctx.lr = 0x821BB3B4;
	sub_822FA658(ctx, base);
loc_821BB3B4:
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x821bb3c8
	if (!ctx.cr6.lt) goto loc_821BB3C8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_821BB3C8:
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// slw r11,r22,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r31.u8 & 0x3F));
	// lwz r10,196(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 196);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,196(r24)
	PPC_STORE_U32(ctx.r24.u32 + 196, ctx.r11.u32);
	// b 0x821bb400
	goto loc_821BB400;
loc_821BB3E0:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x821bb400
	if (!ctx.cr6.eq) goto loc_821BB400;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x821bb3f4
	if (ctx.cr6.lt) goto loc_821BB3F4;
	// bl 0x822fa658
	ctx.lr = 0x821BB3F4;
	sub_822FA658(ctx, base);
loc_821BB3F4:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r22,r11,r24
	PPC_STORE_U32(ctx.r11.u32 + ctx.r24.u32, ctx.r22.u32);
loc_821BB400:
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
loc_821BB404:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x821bb37c
	if (!ctx.cr0.eq) goto loc_821BB37C;
loc_821BB410:
	// stw r21,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r21.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822e9918
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BB41C"))) PPC_WEAK_FUNC(sub_821BB41C);
PPC_FUNC_IMPL(__imp__sub_821BB41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BB420"))) PPC_WEAK_FUNC(sub_821BB420);
PPC_FUNC_IMPL(__imp__sub_821BB420) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x821BB428;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// addi r31,r30,4
	ctx.r31.s64 = ctx.r30.s64 + 4;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821bb4d4
	if (ctx.cr6.lt) goto loc_821BB4D4;
	// bl 0x822fa658
	ctx.lr = 0x821BB458;
	sub_822FA658(ctx, base);
	// b 0x821bb4d4
	goto loc_821BB4D4;
loc_821BB45C:
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// bne 0x821bb500
	if (!ctx.cr0.eq) goto loc_821BB500;
	// cmplwi cr6,r10,65534
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65534, ctx.xer);
	// bne cr6,0x821bb484
	if (!ctx.cr6.eq) goto loc_821BB484;
	// rlwinm r11,r11,16,17,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x7FFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// b 0x821bb4c0
	goto loc_821BB4C0;
loc_821BB484:
	// cmplwi cr6,r10,65533
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65533, ctx.xer);
	// beq cr6,0x821bb4bc
	if (ctx.cr6.eq) goto loc_821BB4BC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821bb4bc
	if (ctx.cr6.eq) goto loc_821BB4BC;
	// cmplwi cr6,r10,81
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 81, ctx.xer);
	// bne cr6,0x821bb4a4
	if (!ctx.cr6.eq) goto loc_821BB4A4;
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// b 0x821bb4c0
	goto loc_821BB4C0;
loc_821BB4A4:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821bb138
	ctx.lr = 0x821BB4B4;
	sub_821BB138(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x821bb4c4
	goto loc_821BB4C4;
loc_821BB4BC:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_821BB4C0:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
loc_821BB4C4:
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bgt cr6,0x821bb500
	if (ctx.cr6.gt) goto loc_821BB500;
loc_821BB4D4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x821bb45c
	if (!ctx.cr6.eq) goto loc_821BB45C;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x821bb500
	if (!ctx.cr6.eq) goto loc_821BB500;
	// li r3,0
	ctx.r3.s64 = 0;
loc_821BB4F8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
loc_821BB500:
	// bl 0x822fa658
	ctx.lr = 0x821BB504;
	sub_822FA658(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x821bb4f8
	goto loc_821BB4F8;
}

__attribute__((alias("__imp__sub_821BB50C"))) PPC_WEAK_FUNC(sub_821BB50C);
PPC_FUNC_IMPL(__imp__sub_821BB50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BB510"))) PPC_WEAK_FUNC(sub_821BB510);
PPC_FUNC_IMPL(__imp__sub_821BB510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x821BB518;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// addi r11,r11,16379
	ctx.r11.s64 = ctx.r11.s64 + 16379;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822f9920
	ctx.lr = 0x821BB544;
	sub_822F9920(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x821bb55c
	if (!ctx.cr0.eq) goto loc_821BB55C;
	// bl 0x822fa658
	ctx.lr = 0x821BB550;
	sub_822FA658(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x821bb59c
	goto loc_821BB59C;
loc_821BB55C:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x821bb58c
	if (ctx.cr0.eq) goto loc_821BB58C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821bb580
	if (ctx.cr0.eq) goto loc_821BB580;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e9960
	ctx.lr = 0x821BB580;
	sub_822E9960(ctx, base);
loc_821BB580:
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822f99b8
	ctx.lr = 0x821BB58C;
	sub_822F99B8(ctx, base);
loc_821BB58C:
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_821BB59C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BB5A4"))) PPC_WEAK_FUNC(sub_821BB5A4);
PPC_FUNC_IMPL(__imp__sub_821BB5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BB5A8"))) PPC_WEAK_FUNC(sub_821BB5A8);
PPC_FUNC_IMPL(__imp__sub_821BB5A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x821BB5B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x821bb5dc
	if (ctx.cr6.lt) goto loc_821BB5DC;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x821bb5e0
	if (!ctx.cr6.gt) goto loc_821BB5E0;
loc_821BB5DC:
	// bl 0x822fa658
	ctx.lr = 0x821BB5E0;
	sub_822FA658(ctx, base);
loc_821BB5E0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplwi cr6,r10,256
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 256, ctx.xer);
	// bge cr6,0x821bb628
	if (!ctx.cr6.lt) goto loc_821BB628;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x821bb510
	ctx.lr = 0x821BB610;
	sub_821BB510(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_821BB628:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BB634"))) PPC_WEAK_FUNC(sub_821BB634);
PPC_FUNC_IMPL(__imp__sub_821BB634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BB638"))) PPC_WEAK_FUNC(sub_821BB638);
PPC_FUNC_IMPL(__imp__sub_821BB638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x821BB640;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x821bb5a8
	ctx.lr = 0x821BB65C;
	sub_821BB5A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821bb66c
	if (ctx.cr0.eq) goto loc_821BB66C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821bb74c
	goto loc_821BB74C;
loc_821BB66C:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x821bb688
	if (!ctx.cr6.lt) goto loc_821BB688;
	// lis r9,87
	ctx.r9.s64 = 5701632;
	// lis r7,4
	ctx.r7.s64 = 262144;
	// b 0x821bb718
	goto loc_821BB718;
loc_821BB688:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,768
	ctx.r11.u64 = ctx.r11.u64 | 768;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x821bb6fc
	if (!ctx.cr6.lt) goto loc_821BB6FC;
	// lwz r9,16(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_821BB6A4:
	// lwz r8,160(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 160);
	// srw r8,r8,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi. r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x821bb6ec
	if (ctx.cr0.eq) goto loc_821BB6EC;
	// li r8,14
	ctx.r8.s64 = 14;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// li r6,23
	ctx.r6.s64 = 23;
	// addi r5,r10,35
	ctx.r5.s64 = ctx.r10.s64 + 35;
	// rlwimi r7,r6,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwimi r5,r8,18,0,15
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r8.u32, 18) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_821BB6EC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// blt cr6,0x821bb6a4
	if (ctx.cr6.lt) goto loc_821BB6A4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_821BB6FC:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bb748
	if (ctx.cr6.eq) goto loc_821BB748;
	// lis r7,4
	ctx.r7.s64 = 262144;
	// lis r9,88
	ctx.r9.s64 = 5767168;
	// ori r7,r7,34
	ctx.r7.u64 = ctx.r7.u64 | 34;
loc_821BB718:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,71
	ctx.r10.s64 = 71;
	// li r8,341
	ctx.r8.s64 = 341;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_821BB748:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821BB74C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BB754"))) PPC_WEAK_FUNC(sub_821BB754);
PPC_FUNC_IMPL(__imp__sub_821BB754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BB758"))) PPC_WEAK_FUNC(sub_821BB758);
PPC_FUNC_IMPL(__imp__sub_821BB758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98c0
	ctx.lr = 0x821BB760;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r11,r24,12
	ctx.r11.s64 = ctx.r24.s64 + 12;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r18,r9
	ctx.r18.u64 = ctx.r9.u64;
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r11.u32);
	// mr r19,r8
	ctx.r19.u64 = ctx.r8.u64;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r9,r27,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// beq cr6,0x821bb7b8
	if (ctx.cr6.eq) goto loc_821BB7B8;
	// bl 0x822fa658
	ctx.lr = 0x821BB7B8;
	sub_822FA658(ctx, base);
loc_821BB7B8:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm r20,r31,30,2,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne 0x821bb7d4
	if (!ctx.cr0.eq) goto loc_821BB7D4;
	// bl 0x822fa658
	ctx.lr = 0x821BB7D0;
	sub_822FA658(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_821BB7D4:
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// ori r23,r10,512
	ctx.r23.u64 = ctx.r10.u64 | 512;
	// li r10,2
	ctx.r10.s64 = 2;
	// cmplw cr6,r27,r23
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x821bb7ec
	if (ctx.cr6.lt) goto loc_821BB7EC;
	// li r10,0
	ctx.r10.s64 = 0;
loc_821BB7EC:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r27,r23
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r23.u32, ctx.xer);
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bge cr6,0x821bb858
	if (!ctx.cr6.lt) goto loc_821BB858;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x821bb420
	ctx.lr = 0x821BB82C;
	sub_821BB420(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821bb5a8
	ctx.lr = 0x821BB838;
	sub_821BB5A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821bb848
	if (ctx.cr0.eq) goto loc_821BB848;
loc_821BB840:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821bbb4c
	goto loc_821BBB4C;
loc_821BB848:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821bafe8
	ctx.lr = 0x821BB858;
	sub_821BAFE8(ctx, base);
loc_821BB858:
	// addi r11,r21,4
	ctx.r11.s64 = ctx.r21.s64 + 4;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x821bbab8
	if (ctx.cr6.eq) goto loc_821BBAB8;
	// lis r11,-32201
	ctx.r11.s64 = -2110324736;
	// addi r25,r11,-31408
	ctx.r25.s64 = ctx.r11.s64 + -31408;
loc_821BB874:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821bb5a8
	ctx.lr = 0x821BB880;
	sub_821BB5A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821bb840
	if (!ctx.cr0.eq) goto loc_821BB840;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r22,80(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwinm. r8,r10,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x821bb8a8
	if (ctx.cr0.eq) goto loc_821BB8A8;
loc_821BB8A0:
	// bl 0x822fa658
	ctx.lr = 0x821BB8A4;
	sub_822FA658(ctx, base);
	// b 0x821bba7c
	goto loc_821BBA7C;
loc_821BB8A8:
	// cmplwi cr6,r11,65534
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65534, ctx.xer);
	// bne cr6,0x821bb8c4
	if (!ctx.cr6.eq) goto loc_821BB8C4;
	// rlwinm r11,r10,16,17,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x7FFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x821bba78
	goto loc_821BBA78;
loc_821BB8C4:
	// cmplwi cr6,r11,65533
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65533, ctx.xer);
	// beq cr6,0x821bba74
	if (ctx.cr6.eq) goto loc_821BBA74;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bba74
	if (ctx.cr6.eq) goto loc_821BBA74;
	// cmplwi cr6,r11,81
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 81, ctx.xer);
	// bne cr6,0x821bb904
	if (!ctx.cr6.eq) goto loc_821BB904;
	// cmplw cr6,r27,r23
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x821bb8fc
	if (ctx.cr6.lt) goto loc_821BB8FC;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x821ba800
	ctx.lr = 0x821BB8F8;
	sub_821BA800(ctx, base);
	// b 0x821bba7c
	goto loc_821BBA7C;
loc_821BB8FC:
	// addi r11,r9,24
	ctx.r11.s64 = ctx.r9.s64 + 24;
	// b 0x821bba78
	goto loc_821BBA78;
loc_821BB904:
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bne cr6,0x821bb924
	if (!ctx.cr6.eq) goto loc_821BB924;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x821ba8d8
	ctx.lr = 0x821BB920;
	sub_821BA8D8(ctx, base);
	// b 0x821bba7c
	goto loc_821BBA7C;
loc_821BB924:
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// bne cr6,0x821bb9b8
	if (!ctx.cr6.eq) goto loc_821BB9B8;
	// cmplw cr6,r27,r23
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x821bb93c
	if (!ctx.cr6.lt) goto loc_821BB93C;
	// bl 0x822fa658
	ctx.lr = 0x821BB938;
	sub_822FA658(ctx, base);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_821BB93C:
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r31,r28,21
	ctx.r31.u64 = ctx.r28.u32 & 0x7FF;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x821bb960
	if (ctx.cr6.lt) goto loc_821BB960;
	// bl 0x822fa658
	ctx.lr = 0x821BB95C;
	sub_822FA658(ctx, base);
	// li r31,15
	ctx.r31.s64 = 15;
loc_821BB960:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// rlwimi r11,r28,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r28.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,3584
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3584, ctx.xer);
	// beq cr6,0x821bb978
	if (ctx.cr6.eq) goto loc_821BB978;
	// bl 0x822fa658
	ctx.lr = 0x821BB978;
	sub_822FA658(ctx, base);
loc_821BB978:
	// li r11,29
	ctx.r11.s64 = 29;
	// clrlwi r10,r31,16
	ctx.r10.u64 = ctx.r31.u32 & 0xFFFF;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x821bba7c
	goto loc_821BBA7C;
loc_821BB9B8:
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// bne cr6,0x821bb9f4
	if (!ctx.cr6.eq) goto loc_821BB9F4;
	// cmplw cr6,r27,r23
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x821bb9cc
	if (!ctx.cr6.lt) goto loc_821BB9CC;
	// bl 0x822fa658
	ctx.lr = 0x821BB9CC;
	sub_822FA658(ctx, base);
loc_821BB9CC:
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x821bada8
	ctx.lr = 0x821BB9E8;
	sub_821BADA8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821bbb4c
	if (!ctx.cr0.eq) goto loc_821BBB4C;
	// b 0x821bba7c
	goto loc_821BBA7C;
loc_821BB9F4:
	// cmplwi cr6,r11,28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 28, ctx.xer);
	// bne cr6,0x821bba40
	if (!ctx.cr6.eq) goto loc_821BBA40;
	// lwz r10,16(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821bba48
	if (!ctx.cr6.eq) goto loc_821BBA48;
	// cmplw cr6,r27,r23
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x821bba18
	if (!ctx.cr6.lt) goto loc_821BBA18;
	// bl 0x822fa658
	ctx.lr = 0x821BBA18;
	sub_822FA658(ctx, base);
loc_821BBA18:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821bb638
	ctx.lr = 0x821BBA2C;
	sub_821BB638(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821bbb4c
	if (!ctx.cr0.eq) goto loc_821BBB4C;
	// lwz r5,224(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 224);
	// lwz r11,228(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 228);
	// b 0x821bba58
	goto loc_821BBA58;
loc_821BBA40:
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// bge cr6,0x821bb8a0
	if (!ctx.cr6.lt) goto loc_821BB8A0;
loc_821BBA48:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r25,4
	ctx.r10.s64 = ctx.r25.s64 + 4;
	// lwzx r5,r11,r25
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_821BBA58:
	// lwz r6,16(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BBA70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x821bba7c
	goto loc_821BBA7C;
loc_821BBA74:
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
loc_821BBA78:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_821BBA7C:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r11,r21,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r21.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r11,r20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r20.s32, ctx.xer);
	// bgt cr6,0x821bbb54
	if (ctx.cr6.gt) goto loc_821BBB54;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r11,r22,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r22.s64;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r11,1024
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1024, ctx.xer);
	// blt cr6,0x821bbaa8
	if (ctx.cr6.lt) goto loc_821BBAA8;
	// bl 0x822fa658
	ctx.lr = 0x821BBAA8;
	sub_822FA658(ctx, base);
loc_821BBAA8:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// bne cr6,0x821bb874
	if (!ctx.cr6.eq) goto loc_821BB874;
loc_821BBAB8:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// subf r11,r21,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r21.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r11,r20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r20.s32, ctx.xer);
	// bne cr6,0x821bbb58
	if (!ctx.cr6.eq) goto loc_821BBB58;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821bb5a8
	ctx.lr = 0x821BBADC;
	sub_821BB5A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821bb840
	if (!ctx.cr0.eq) goto loc_821BB840;
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821bbb10
	if (!ctx.cr6.eq) goto loc_821BBB10;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821bb638
	ctx.lr = 0x821BBB08;
	sub_821BB638(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821bbb4c
	if (!ctx.cr0.eq) goto loc_821BBB4C;
loc_821BBB10:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,40
	ctx.r11.s64 = 40;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,4(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// srawi r11,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 2;
	// stw r11,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r11.u32);
	// ble cr6,0x821bbb48
	if (!ctx.cr6.gt) goto loc_821BBB48;
	// bl 0x822fa658
	ctx.lr = 0x821BBB48;
	sub_822FA658(ctx, base);
loc_821BBB48:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821BBB4C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822e9910
	__restgprlr_18(ctx, base);
	return;
loc_821BBB54:
	// bl 0x822fa658
	ctx.lr = 0x821BBB58;
	sub_822FA658(ctx, base);
loc_821BBB58:
	// bl 0x822fa658
	ctx.lr = 0x821BBB5C;
	sub_822FA658(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x821bbb4c
	goto loc_821BBB4C;
}

__attribute__((alias("__imp__sub_821BBB64"))) PPC_WEAK_FUNC(sub_821BBB64);
PPC_FUNC_IMPL(__imp__sub_821BBB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BBB68"))) PPC_WEAK_FUNC(sub_821BBB68);
PPC_FUNC_IMPL(__imp__sub_821BBB68) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// subfic r9,r5,32
	ctx.xer.ca = ctx.r5.u32 <= 32;
	ctx.r9.s64 = 32 - ctx.r5.s64;
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r10,r4,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r4.s64;
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// subf r10,r5,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r5.s64;
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r10,33
	ctx.r10.s64 = ctx.r10.s64 + 33;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// srw r3,r11,r9
	ctx.r3.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821BBBBC"))) PPC_WEAK_FUNC(sub_821BBBBC);
PPC_FUNC_IMPL(__imp__sub_821BBBBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BBBC0"))) PPC_WEAK_FUNC(sub_821BBBC0);
PPC_FUNC_IMPL(__imp__sub_821BBBC0) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// li r7,-1
	ctx.r7.s64 = -1;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// subf r10,r10,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r10.s64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfic r4,r10,32
	ctx.xer.ca = ctx.r10.u32 <= 32;
	ctx.r4.s64 = 32 - ctx.r10.s64;
	// lbz r3,1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// subf r5,r5,r4
	ctx.r5.s64 = ctx.r4.s64 - ctx.r5.s64;
	// lbz r4,2(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// slw r6,r6,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r10.u8 & 0x3F));
	// srw r7,r7,r5
	ctx.r7.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r5.u8 & 0x3F));
	// lbz r5,3(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// rotlwi r5,r5,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// or r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 | ctx.r4.u64;
	// srw r7,r7,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r10.u8 & 0x3F));
	// slw r11,r7,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r10,r5,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// and r7,r6,r11
	ctx.r7.u64 = ctx.r6.u64 & ctx.r11.u64;
	// or r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 | ctx.r3.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 | ctx.r31.u64;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
loc_821BBC34:
	// srw r10,r11,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// stb r10,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r10.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// blt cr6,0x821bbc34
	if (ctx.cr6.lt) goto loc_821BBC34;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821BBC54"))) PPC_WEAK_FUNC(sub_821BBC54);
PPC_FUNC_IMPL(__imp__sub_821BBC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BBC58"))) PPC_WEAK_FUNC(sub_821BBC58);
PPC_FUNC_IMPL(__imp__sub_821BBC58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x821BBC60;
	__savegprlr_27(ctx, base);
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32201
	ctx.r11.s64 = -2110324736;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-30632
	ctx.r31.s64 = ctx.r11.s64 + -30632;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,1040(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1040);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bbe48
	if (ctx.cr6.eq) goto loc_821BBE48;
	// cmpwi cr6,r30,15
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 15, ctx.xer);
	// blt cr6,0x821bbcb0
	if (ctx.cr6.lt) goto loc_821BBCB0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,532
	ctx.r5.s64 = ctx.r11.s64 + 532;
	// b 0x821bbd70
	goto loc_821BBD70;
loc_821BBCB0:
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// mulli r28,r30,12
	ctx.r28.s64 = ctx.r30.s64 * 12;
	// addi r11,r11,-29552
	ctx.r11.s64 = ctx.r11.s64 + -29552;
	// addi r27,r11,8
	ctx.r27.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r28,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821bbcd4
	if (!ctx.cr0.eq) goto loc_821BBCD4;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x821bbe5c
	if (!ctx.cr6.eq) goto loc_821BBE5C;
loc_821BBCD4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bbe5c
	if (ctx.cr6.eq) goto loc_821BBE5C;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// li r4,1022
	ctx.r4.s64 = 1022;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x822ecd78
	ctx.lr = 0x821BBCFC;
	sub_822ECD78(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,-6756
	ctx.r5.s64 = ctx.r11.s64 + -6756;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,1023
	ctx.r4.s64 = 1023;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,1022(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1022, ctx.r11.u8);
	// bl 0x822ee250
	ctx.lr = 0x821BBD1C;
	sub_822EE250(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stb r11,1023(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1023, ctx.r11.u8);
	// beq cr6,0x821bbd34
	if (ctx.cr6.eq) goto loc_821BBD34;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// bne cr6,0x821bbd5c
	if (!ctx.cr6.eq) goto loc_821BBD5C;
loc_821BBD34:
	// addi r11,r31,1052
	ctx.r11.s64 = ctx.r31.s64 + 1052;
	// lwz r3,1036(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1036);
	// addi r10,r30,-3
	ctx.r10.s64 = ctx.r30.s64 + -3;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r4,r10,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BBD5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821BBD5C:
	// lwzx r11,r28,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821bbd90
	if (!ctx.cr6.eq) goto loc_821BBD90;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
loc_821BBD70:
	// addi r10,r31,1040
	ctx.r10.s64 = ctx.r31.s64 + 1040;
	// lwz r3,1036(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1036);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,524
	ctx.r4.s64 = ctx.r11.s64 + 524;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BBD8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x821bbe5c
	goto loc_821BBE5C;
loc_821BBD90:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821bbe48
	if (!ctx.cr6.eq) goto loc_821BBE48;
	// lis r10,-32201
	ctx.r10.s64 = -2110324736;
	// lwz r11,-29608(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29608);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bbe48
	if (ctx.cr6.eq) goto loc_821BBE48;
	// lis r28,-32201
	ctx.r28.s64 = -2110324736;
	// lwz r11,-29600(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -29600);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bbe48
	if (ctx.cr6.eq) goto loc_821BBE48;
	// lis r29,-32201
	ctx.r29.s64 = -2110324736;
	// lwz r11,-29604(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -29604);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bbe48
	if (ctx.cr6.eq) goto loc_821BBE48;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r3,1036(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1036);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,512
	ctx.r4.s64 = ctx.r11.s64 + 512;
	// lwz r11,-29608(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29608);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BBDE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x821bbe5c
	if (ctx.cr0.eq) goto loc_821BBE5C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_821BBDF4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821bbdf4
	if (!ctx.cr6.eq) goto loc_821BBDF4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r3,1036(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1036);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,-29600(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -29600);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BBE30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,1036(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1036);
	// lwz r11,-29604(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -29604);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BBE44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x821bbe5c
	goto loc_821BBE5C;
loc_821BBE48:
	// addi r11,r31,1048
	ctx.r11.s64 = ctx.r31.s64 + 1048;
	// lwz r3,1036(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1036);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BBE5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821BBE5C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BBE64"))) PPC_WEAK_FUNC(sub_821BBE64);
PPC_FUNC_IMPL(__imp__sub_821BBE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BBE68"))) PPC_WEAK_FUNC(sub_821BBE68);
PPC_FUNC_IMPL(__imp__sub_821BBE68) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32201
	ctx.r10.s64 = -2110324736;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-29608(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29608);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32201
	ctx.r11.s64 = -2110324736;
	// lwz r11,-29600(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29600);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32201
	ctx.r11.s64 = -2110324736;
	// lwz r11,-29604(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29604);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32201
	ctx.r11.s64 = -2110324736;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,-29596(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29596);
	// lwz r11,-29608(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29608);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_821BBEB8"))) PPC_WEAK_FUNC(sub_821BBEB8);
PPC_FUNC_IMPL(__imp__sub_821BBEB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821BBEBC"))) PPC_WEAK_FUNC(sub_821BBEBC);
PPC_FUNC_IMPL(__imp__sub_821BBEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BBEC0"))) PPC_WEAK_FUNC(sub_821BBEC0);
PPC_FUNC_IMPL(__imp__sub_821BBEC0) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-32201
	ctx.r10.s64 = -2110324736;
	// lwz r11,-29604(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29604);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32201
	ctx.r11.s64 = -2110324736;
	// lwz r3,-29596(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29596);
	// lwz r11,-29604(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29604);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_821BBEF0"))) PPC_WEAK_FUNC(sub_821BBEF0);
PPC_FUNC_IMPL(__imp__sub_821BBEF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821BBEF4"))) PPC_WEAK_FUNC(sub_821BBEF4);
PPC_FUNC_IMPL(__imp__sub_821BBEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BBEF8"))) PPC_WEAK_FUNC(sub_821BBEF8);
PPC_FUNC_IMPL(__imp__sub_821BBEF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32201
	ctx.r11.s64 = -2110324736;
	// addi r11,r11,-29580
	ctx.r11.s64 = ctx.r11.s64 + -29580;
	// stw r4,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r4.u32);
	// lis r4,-32201
	ctx.r4.s64 = -2110324736;
	// stw r3,-16(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16, ctx.r3.u32);
	// stw r8,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r8.u32);
	// stw r9,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r9.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r5,-29608(r4)
	PPC_STORE_U32(ctx.r4.u32 + -29608, ctx.r5.u32);
	// lis r5,-32201
	ctx.r5.s64 = -2110324736;
	// stw r6,-29604(r5)
	PPC_STORE_U32(ctx.r5.u32 + -29604, ctx.r6.u32);
	// lis r6,-32201
	ctx.r6.s64 = -2110324736;
	// stw r7,-29600(r6)
	PPC_STORE_U32(ctx.r6.u32 + -29600, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821BBF30"))) PPC_WEAK_FUNC(sub_821BBF30);
PPC_FUNC_IMPL(__imp__sub_821BBF30) {
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
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stb r8,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r8.u8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821BBF7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821BBF8C"))) PPC_WEAK_FUNC(sub_821BBF8C);
PPC_FUNC_IMPL(__imp__sub_821BBF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BBF90"))) PPC_WEAK_FUNC(sub_821BBF90);
PPC_FUNC_IMPL(__imp__sub_821BBF90) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98b0
	ctx.lr = 0x821BBF98;
	__savegprlr_14(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r10,r11,20816
	ctx.r10.s64 = ctx.r11.s64 + 20816;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,20804
	ctx.r5.s64 = ctx.r11.s64 + 20804;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-31676
	ctx.r4.s64 = ctx.r11.s64 + -31676;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-31672
	ctx.r3.s64 = ctx.r11.s64 + -31672;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r31,r11,1908
	ctx.r31.s64 = ctx.r11.s64 + 1908;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r30,r11,1900
	ctx.r30.s64 = ctx.r11.s64 + 1900;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r29,r11,1892
	ctx.r29.s64 = ctx.r11.s64 + 1892;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r28,r11,1884
	ctx.r28.s64 = ctx.r11.s64 + 1884;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r27,r11,1876
	ctx.r27.s64 = ctx.r11.s64 + 1876;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r26,r11,-22924
	ctx.r26.s64 = ctx.r11.s64 + -22924;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r25,r11,9584
	ctx.r25.s64 = ctx.r11.s64 + 9584;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r24,r11,20808
	ctx.r24.s64 = ctx.r11.s64 + 20808;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r23,r11,2060
	ctx.r23.s64 = ctx.r11.s64 + 2060;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r22,r11,-22940
	ctx.r22.s64 = ctx.r11.s64 + -22940;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r21,r11,-22948
	ctx.r21.s64 = ctx.r11.s64 + -22948;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r20,r11,20788
	ctx.r20.s64 = ctx.r11.s64 + 20788;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r19,r11,20792
	ctx.r19.s64 = ctx.r11.s64 + 20792;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r18,r11,20320
	ctx.r18.s64 = ctx.r11.s64 + 20320;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r17,r11,-31588
	ctx.r17.s64 = ctx.r11.s64 + -31588;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r16,r11,-22956
	ctx.r16.s64 = ctx.r11.s64 + -22956;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r15,r11,2044
	ctx.r15.s64 = ctx.r11.s64 + 2044;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r14,r11,2192
	ctx.r14.s64 = ctx.r11.s64 + 2192;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,2176
	ctx.r11.s64 = ctx.r11.s64 + 2176;
	// stw r11,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r11.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,2160
	ctx.r11.s64 = ctx.r11.s64 + 2160;
	// stw r11,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r11.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r9,r11,1976
	ctx.r9.s64 = ctx.r11.s64 + 1976;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r8,r11,1968
	ctx.r8.s64 = ctx.r11.s64 + 1968;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r7,r11,1960
	ctx.r7.s64 = ctx.r11.s64 + 1960;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r6,r11,1952
	ctx.r6.s64 = ctx.r11.s64 + 1952;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,20764
	ctx.r11.s64 = ctx.r11.s64 + 20764;
	// stw r11,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r11.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,20612
	ctx.r11.s64 = ctx.r11.s64 + 20612;
	// stw r11,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r11.u32);
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// addi r11,r11,-28592
	ctx.r11.s64 = ctx.r11.s64 + -28592;
	// stw r10,-760(r11)
	PPC_STORE_U32(ctx.r11.u32 + -760, ctx.r10.u32);
	// stw r5,-756(r11)
	PPC_STORE_U32(ctx.r11.u32 + -756, ctx.r5.u32);
	// stw r4,-752(r11)
	PPC_STORE_U32(ctx.r11.u32 + -752, ctx.r4.u32);
	// stw r3,-748(r11)
	PPC_STORE_U32(ctx.r11.u32 + -748, ctx.r3.u32);
	// stw r31,-744(r11)
	PPC_STORE_U32(ctx.r11.u32 + -744, ctx.r31.u32);
	// stw r30,-740(r11)
	PPC_STORE_U32(ctx.r11.u32 + -740, ctx.r30.u32);
	// stw r29,-736(r11)
	PPC_STORE_U32(ctx.r11.u32 + -736, ctx.r29.u32);
	// stw r28,-732(r11)
	PPC_STORE_U32(ctx.r11.u32 + -732, ctx.r28.u32);
	// stw r27,-728(r11)
	PPC_STORE_U32(ctx.r11.u32 + -728, ctx.r27.u32);
	// stw r26,-724(r11)
	PPC_STORE_U32(ctx.r11.u32 + -724, ctx.r26.u32);
	// stw r25,-720(r11)
	PPC_STORE_U32(ctx.r11.u32 + -720, ctx.r25.u32);
	// stw r24,-716(r11)
	PPC_STORE_U32(ctx.r11.u32 + -716, ctx.r24.u32);
	// stw r23,-712(r11)
	PPC_STORE_U32(ctx.r11.u32 + -712, ctx.r23.u32);
	// stw r22,-708(r11)
	PPC_STORE_U32(ctx.r11.u32 + -708, ctx.r22.u32);
	// stw r21,-704(r11)
	PPC_STORE_U32(ctx.r11.u32 + -704, ctx.r21.u32);
	// stw r20,-700(r11)
	PPC_STORE_U32(ctx.r11.u32 + -700, ctx.r20.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r19,-696(r11)
	PPC_STORE_U32(ctx.r11.u32 + -696, ctx.r19.u32);
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// lwz r10,-176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// stw r18,-692(r11)
	PPC_STORE_U32(ctx.r11.u32 + -692, ctx.r18.u32);
	// lis r31,-32251
	ctx.r31.s64 = -2113601536;
	// stw r17,-688(r11)
	PPC_STORE_U32(ctx.r11.u32 + -688, ctx.r17.u32);
	// lis r30,-32251
	ctx.r30.s64 = -2113601536;
	// stw r16,-684(r11)
	PPC_STORE_U32(ctx.r11.u32 + -684, ctx.r16.u32);
	// lis r29,-32253
	ctx.r29.s64 = -2113732608;
	// stw r15,-680(r11)
	PPC_STORE_U32(ctx.r11.u32 + -680, ctx.r15.u32);
	// lis r28,-32253
	ctx.r28.s64 = -2113732608;
	// stw r14,-676(r11)
	PPC_STORE_U32(ctx.r11.u32 + -676, ctx.r14.u32);
	// lis r27,-32251
	ctx.r27.s64 = -2113601536;
	// stw r10,-672(r11)
	PPC_STORE_U32(ctx.r11.u32 + -672, ctx.r10.u32);
	// lis r26,-32251
	ctx.r26.s64 = -2113601536;
	// lwz r10,-172(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -172);
	// lis r25,-32251
	ctx.r25.s64 = -2113601536;
	// lis r24,-32251
	ctx.r24.s64 = -2113601536;
	// lis r23,-32251
	ctx.r23.s64 = -2113601536;
	// lis r22,-32253
	ctx.r22.s64 = -2113732608;
	// lis r21,-32253
	ctx.r21.s64 = -2113732608;
	// stw r10,-668(r11)
	PPC_STORE_U32(ctx.r11.u32 + -668, ctx.r10.u32);
	// lis r20,-32254
	ctx.r20.s64 = -2113798144;
	// lwz r10,-168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// addi r4,r4,1940
	ctx.r4.s64 = ctx.r4.s64 + 1940;
	// stw r9,-664(r11)
	PPC_STORE_U32(ctx.r11.u32 + -664, ctx.r9.u32);
	// addi r3,r3,-23112
	ctx.r3.s64 = ctx.r3.s64 + -23112;
	// stw r8,-660(r11)
	PPC_STORE_U32(ctx.r11.u32 + -660, ctx.r8.u32);
	// addi r31,r31,1928
	ctx.r31.s64 = ctx.r31.s64 + 1928;
	// stw r7,-656(r11)
	PPC_STORE_U32(ctx.r11.u32 + -656, ctx.r7.u32);
	// addi r30,r30,1916
	ctx.r30.s64 = ctx.r30.s64 + 1916;
	// stw r6,-652(r11)
	PPC_STORE_U32(ctx.r11.u32 + -652, ctx.r6.u32);
	// addi r29,r29,-23120
	ctx.r29.s64 = ctx.r29.s64 + -23120;
	// stw r10,-648(r11)
	PPC_STORE_U32(ctx.r11.u32 + -648, ctx.r10.u32);
	// addi r28,r28,-23128
	ctx.r28.s64 = ctx.r28.s64 + -23128;
	// lwz r10,-164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -164);
	// addi r27,r27,2152
	ctx.r27.s64 = ctx.r27.s64 + 2152;
	// addi r26,r26,2144
	ctx.r26.s64 = ctx.r26.s64 + 2144;
	// addi r25,r25,2136
	ctx.r25.s64 = ctx.r25.s64 + 2136;
	// addi r24,r24,2128
	ctx.r24.s64 = ctx.r24.s64 + 2128;
	// addi r23,r23,2120
	ctx.r23.s64 = ctx.r23.s64 + 2120;
	// stw r10,-644(r11)
	PPC_STORE_U32(ctx.r11.u32 + -644, ctx.r10.u32);
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// addi r22,r22,-23176
	ctx.r22.s64 = ctx.r22.s64 + -23176;
	// addi r10,r10,-29232
	ctx.r10.s64 = ctx.r10.s64 + -29232;
	// addi r21,r21,-23184
	ctx.r21.s64 = ctx.r21.s64 + -23184;
	// addi r20,r20,20776
	ctx.r20.s64 = ctx.r20.s64 + 20776;
	// lis r19,-32254
	ctx.r19.s64 = -2113798144;
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// stw r5,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r5.u32);
	// stw r5,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r5.u32);
	// stw r5,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r5.u32);
	// stw r5,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r5.u32);
	// stw r5,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r5.u32);
	// stw r5,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r5.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r5,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r5.u32);
	// stw r5,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r5.u32);
	// stw r5,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r5.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r5,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r5.u32);
	// stw r5,48(r10)
	PPC_STORE_U32(ctx.r10.u32 + 48, ctx.r5.u32);
	// stw r5,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r5.u32);
	// stw r5,56(r10)
	PPC_STORE_U32(ctx.r10.u32 + 56, ctx.r5.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r5,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r5.u32);
	// stw r5,64(r10)
	PPC_STORE_U32(ctx.r10.u32 + 64, ctx.r5.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r5,68(r10)
	PPC_STORE_U32(ctx.r10.u32 + 68, ctx.r5.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r5,72(r10)
	PPC_STORE_U32(ctx.r10.u32 + 72, ctx.r5.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r5,76(r10)
	PPC_STORE_U32(ctx.r10.u32 + 76, ctx.r5.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r5,80(r10)
	PPC_STORE_U32(ctx.r10.u32 + 80, ctx.r5.u32);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// addi r5,r5,-23080
	ctx.r5.s64 = ctx.r5.s64 + -23080;
	// lis r14,-32254
	ctx.r14.s64 = -2113798144;
	// stw r5,-400(r11)
	PPC_STORE_U32(ctx.r11.u32 + -400, ctx.r5.u32);
	// stw r4,-396(r11)
	PPC_STORE_U32(ctx.r11.u32 + -396, ctx.r4.u32);
	// lis r18,-32251
	ctx.r18.s64 = -2113601536;
	// addi r14,r14,20796
	ctx.r14.s64 = ctx.r14.s64 + 20796;
	// stw r3,-392(r11)
	PPC_STORE_U32(ctx.r11.u32 + -392, ctx.r3.u32);
	// stw r31,-388(r11)
	PPC_STORE_U32(ctx.r11.u32 + -388, ctx.r31.u32);
	// lis r17,-32254
	ctx.r17.s64 = -2113798144;
	// stw r30,-384(r11)
	PPC_STORE_U32(ctx.r11.u32 + -384, ctx.r30.u32);
	// addi r19,r19,20772
	ctx.r19.s64 = ctx.r19.s64 + 20772;
	// stw r29,-380(r11)
	PPC_STORE_U32(ctx.r11.u32 + -380, ctx.r29.u32);
	// lis r16,-32251
	ctx.r16.s64 = -2113601536;
	// stw r28,-376(r11)
	PPC_STORE_U32(ctx.r11.u32 + -376, ctx.r28.u32);
	// addi r18,r18,1852
	ctx.r18.s64 = ctx.r18.s64 + 1852;
	// stw r14,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r14.u32);
	// li r14,2
	ctx.r14.s64 = 2;
	// stw r27,-372(r11)
	PPC_STORE_U32(ctx.r11.u32 + -372, ctx.r27.u32);
	// lis r15,-32251
	ctx.r15.s64 = -2113601536;
	// stw r26,-368(r11)
	PPC_STORE_U32(ctx.r11.u32 + -368, ctx.r26.u32);
	// addi r17,r17,20800
	ctx.r17.s64 = ctx.r17.s64 + 20800;
	// stw r25,-364(r11)
	PPC_STORE_U32(ctx.r11.u32 + -364, ctx.r25.u32);
	// addi r16,r16,2108
	ctx.r16.s64 = ctx.r16.s64 + 2108;
	// stw r24,-360(r11)
	PPC_STORE_U32(ctx.r11.u32 + -360, ctx.r24.u32);
	// addi r15,r15,2100
	ctx.r15.s64 = ctx.r15.s64 + 2100;
	// stw r14,84(r10)
	PPC_STORE_U32(ctx.r10.u32 + 84, ctx.r14.u32);
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// stw r14,88(r10)
	PPC_STORE_U32(ctx.r10.u32 + 88, ctx.r14.u32);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// stw r14,92(r10)
	PPC_STORE_U32(ctx.r10.u32 + 92, ctx.r14.u32);
	// addi r5,r5,2092
	ctx.r5.s64 = ctx.r5.s64 + 2092;
	// stw r14,96(r10)
	PPC_STORE_U32(ctx.r10.u32 + 96, ctx.r14.u32);
	// stw r14,100(r10)
	PPC_STORE_U32(ctx.r10.u32 + 100, ctx.r14.u32);
	// stw r14,104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 104, ctx.r14.u32);
	// stw r14,108(r10)
	PPC_STORE_U32(ctx.r10.u32 + 108, ctx.r14.u32);
	// stw r14,112(r10)
	PPC_STORE_U32(ctx.r10.u32 + 112, ctx.r14.u32);
	// li r14,1
	ctx.r14.s64 = 1;
	// stw r23,-356(r11)
	PPC_STORE_U32(ctx.r11.u32 + -356, ctx.r23.u32);
	// stw r22,-352(r11)
	PPC_STORE_U32(ctx.r11.u32 + -352, ctx.r22.u32);
	// stw r21,-348(r11)
	PPC_STORE_U32(ctx.r11.u32 + -348, ctx.r21.u32);
	// stw r20,-344(r11)
	PPC_STORE_U32(ctx.r11.u32 + -344, ctx.r20.u32);
	// stw r14,116(r10)
	PPC_STORE_U32(ctx.r10.u32 + 116, ctx.r14.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r19,-336(r11)
	PPC_STORE_U32(ctx.r11.u32 + -336, ctx.r19.u32);
	// stw r18,-340(r11)
	PPC_STORE_U32(ctx.r11.u32 + -340, ctx.r18.u32);
	// stw r17,-324(r11)
	PPC_STORE_U32(ctx.r11.u32 + -324, ctx.r17.u32);
	// stw r16,-332(r11)
	PPC_STORE_U32(ctx.r11.u32 + -332, ctx.r16.u32);
	// stw r10,-520(r11)
	PPC_STORE_U32(ctx.r11.u32 + -520, ctx.r10.u32);
	// stw r10,-516(r11)
	PPC_STORE_U32(ctx.r11.u32 + -516, ctx.r10.u32);
	// stw r10,-512(r11)
	PPC_STORE_U32(ctx.r11.u32 + -512, ctx.r10.u32);
	// stw r10,-508(r11)
	PPC_STORE_U32(ctx.r11.u32 + -508, ctx.r10.u32);
	// stw r10,-504(r11)
	PPC_STORE_U32(ctx.r11.u32 + -504, ctx.r10.u32);
	// stw r10,-500(r11)
	PPC_STORE_U32(ctx.r11.u32 + -500, ctx.r10.u32);
	// stw r10,-496(r11)
	PPC_STORE_U32(ctx.r11.u32 + -496, ctx.r10.u32);
	// stw r10,-492(r11)
	PPC_STORE_U32(ctx.r11.u32 + -492, ctx.r10.u32);
	// stw r10,-488(r11)
	PPC_STORE_U32(ctx.r11.u32 + -488, ctx.r10.u32);
	// stw r10,-484(r11)
	PPC_STORE_U32(ctx.r11.u32 + -484, ctx.r10.u32);
	// stw r10,-480(r11)
	PPC_STORE_U32(ctx.r11.u32 + -480, ctx.r10.u32);
	// stw r10,-476(r11)
	PPC_STORE_U32(ctx.r11.u32 + -476, ctx.r10.u32);
	// stw r10,-472(r11)
	PPC_STORE_U32(ctx.r11.u32 + -472, ctx.r10.u32);
	// stw r10,-468(r11)
	PPC_STORE_U32(ctx.r11.u32 + -468, ctx.r10.u32);
	// stw r10,-464(r11)
	PPC_STORE_U32(ctx.r11.u32 + -464, ctx.r10.u32);
	// stw r10,-460(r11)
	PPC_STORE_U32(ctx.r11.u32 + -460, ctx.r10.u32);
	// stw r10,-456(r11)
	PPC_STORE_U32(ctx.r11.u32 + -456, ctx.r10.u32);
	// stw r10,-452(r11)
	PPC_STORE_U32(ctx.r11.u32 + -452, ctx.r10.u32);
	// stw r10,-448(r11)
	PPC_STORE_U32(ctx.r11.u32 + -448, ctx.r10.u32);
	// stw r10,-444(r11)
	PPC_STORE_U32(ctx.r11.u32 + -444, ctx.r10.u32);
	// stw r10,-440(r11)
	PPC_STORE_U32(ctx.r11.u32 + -440, ctx.r10.u32);
	// stw r10,-436(r11)
	PPC_STORE_U32(ctx.r11.u32 + -436, ctx.r10.u32);
	// stw r10,-432(r11)
	PPC_STORE_U32(ctx.r11.u32 + -432, ctx.r10.u32);
	// stw r10,-428(r11)
	PPC_STORE_U32(ctx.r11.u32 + -428, ctx.r10.u32);
	// stw r10,-424(r11)
	PPC_STORE_U32(ctx.r11.u32 + -424, ctx.r10.u32);
	// stw r10,-420(r11)
	PPC_STORE_U32(ctx.r11.u32 + -420, ctx.r10.u32);
	// stw r10,-416(r11)
	PPC_STORE_U32(ctx.r11.u32 + -416, ctx.r10.u32);
	// stw r10,-412(r11)
	PPC_STORE_U32(ctx.r11.u32 + -412, ctx.r10.u32);
	// stw r10,-408(r11)
	PPC_STORE_U32(ctx.r11.u32 + -408, ctx.r10.u32);
	// stw r10,-404(r11)
	PPC_STORE_U32(ctx.r11.u32 + -404, ctx.r10.u32);
	// lwz r10,-164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -164);
	// stw r15,-328(r11)
	PPC_STORE_U32(ctx.r11.u32 + -328, ctx.r15.u32);
	// stw r10,-312(r11)
	PPC_STORE_U32(ctx.r11.u32 + -312, ctx.r10.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r10,r10,2080
	ctx.r10.s64 = ctx.r10.s64 + 2080;
	// lis r14,-32251
	ctx.r14.s64 = -2113601536;
	// stw r10,-320(r11)
	PPC_STORE_U32(ctx.r11.u32 + -320, ctx.r10.u32);
	// lis r3,-32251
	ctx.r3.s64 = -2113601536;
	// stw r5,-316(r11)
	PPC_STORE_U32(ctx.r11.u32 + -316, ctx.r5.u32);
	// addi r14,r14,1536
	ctx.r14.s64 = ctx.r14.s64 + 1536;
	// lis r31,-32253
	ctx.r31.s64 = -2113732608;
	// addi r4,r4,-23460
	ctx.r4.s64 = ctx.r4.s64 + -23460;
	// lis r30,-32251
	ctx.r30.s64 = -2113601536;
	// addi r3,r3,2068
	ctx.r3.s64 = ctx.r3.s64 + 2068;
	// stw r14,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r14.u32);
	// lis r14,-32254
	ctx.r14.s64 = -2113798144;
	// lis r29,-32251
	ctx.r29.s64 = -2113601536;
	// addi r14,r14,-31704
	ctx.r14.s64 = ctx.r14.s64 + -31704;
	// stw r4,-308(r11)
	PPC_STORE_U32(ctx.r11.u32 + -308, ctx.r4.u32);
	// addi r31,r31,-23260
	ctx.r31.s64 = ctx.r31.s64 + -23260;
	// lis r28,-32251
	ctx.r28.s64 = -2113601536;
	// stw r3,-304(r11)
	PPC_STORE_U32(ctx.r11.u32 + -304, ctx.r3.u32);
	// addi r30,r30,1744
	ctx.r30.s64 = ctx.r30.s64 + 1744;
	// lis r27,-32251
	ctx.r27.s64 = -2113601536;
	// stw r14,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r14.u32);
	// addi r29,r29,1732
	ctx.r29.s64 = ctx.r29.s64 + 1732;
	// lis r26,-32251
	ctx.r26.s64 = -2113601536;
	// stw r31,-300(r11)
	PPC_STORE_U32(ctx.r11.u32 + -300, ctx.r31.u32);
	// addi r28,r28,1720
	ctx.r28.s64 = ctx.r28.s64 + 1720;
	// lis r25,-32251
	ctx.r25.s64 = -2113601536;
	// stw r30,-296(r11)
	PPC_STORE_U32(ctx.r11.u32 + -296, ctx.r30.u32);
	// addi r27,r27,1708
	ctx.r27.s64 = ctx.r27.s64 + 1708;
	// lis r24,-32251
	ctx.r24.s64 = -2113601536;
	// stw r29,-292(r11)
	PPC_STORE_U32(ctx.r11.u32 + -292, ctx.r29.u32);
	// addi r26,r26,1696
	ctx.r26.s64 = ctx.r26.s64 + 1696;
	// lis r23,-32251
	ctx.r23.s64 = -2113601536;
	// stw r28,-288(r11)
	PPC_STORE_U32(ctx.r11.u32 + -288, ctx.r28.u32);
	// addi r25,r25,1680
	ctx.r25.s64 = ctx.r25.s64 + 1680;
	// lis r22,-32251
	ctx.r22.s64 = -2113601536;
	// stw r27,-284(r11)
	PPC_STORE_U32(ctx.r11.u32 + -284, ctx.r27.u32);
	// addi r24,r24,1664
	ctx.r24.s64 = ctx.r24.s64 + 1664;
	// addi r23,r23,1648
	ctx.r23.s64 = ctx.r23.s64 + 1648;
	// stw r26,-280(r11)
	PPC_STORE_U32(ctx.r11.u32 + -280, ctx.r26.u32);
	// addi r22,r22,1628
	ctx.r22.s64 = ctx.r22.s64 + 1628;
	// lis r21,-32251
	ctx.r21.s64 = -2113601536;
	// stw r25,-276(r11)
	PPC_STORE_U32(ctx.r11.u32 + -276, ctx.r25.u32);
	// lis r20,-32254
	ctx.r20.s64 = -2113798144;
	// stw r24,-272(r11)
	PPC_STORE_U32(ctx.r11.u32 + -272, ctx.r24.u32);
	// lis r19,-32251
	ctx.r19.s64 = -2113601536;
	// stw r23,-268(r11)
	PPC_STORE_U32(ctx.r11.u32 + -268, ctx.r23.u32);
	// addi r21,r21,1620
	ctx.r21.s64 = ctx.r21.s64 + 1620;
	// lis r18,-32251
	ctx.r18.s64 = -2113601536;
	// stw r22,-264(r11)
	PPC_STORE_U32(ctx.r11.u32 + -264, ctx.r22.u32);
	// addi r20,r20,-31712
	ctx.r20.s64 = ctx.r20.s64 + -31712;
	// stw r9,-260(r11)
	PPC_STORE_U32(ctx.r11.u32 + -260, ctx.r9.u32);
	// lis r17,-32251
	ctx.r17.s64 = -2113601536;
	// stw r8,-256(r11)
	PPC_STORE_U32(ctx.r11.u32 + -256, ctx.r8.u32);
	// addi r19,r19,1596
	ctx.r19.s64 = ctx.r19.s64 + 1596;
	// stw r7,-252(r11)
	PPC_STORE_U32(ctx.r11.u32 + -252, ctx.r7.u32);
	// lis r16,-32251
	ctx.r16.s64 = -2113601536;
	// stw r6,-248(r11)
	PPC_STORE_U32(ctx.r11.u32 + -248, ctx.r6.u32);
	// addi r18,r18,1584
	ctx.r18.s64 = ctx.r18.s64 + 1584;
	// stw r21,-244(r11)
	PPC_STORE_U32(ctx.r11.u32 + -244, ctx.r21.u32);
	// lis r15,-32251
	ctx.r15.s64 = -2113601536;
	// stw r20,-240(r11)
	PPC_STORE_U32(ctx.r11.u32 + -240, ctx.r20.u32);
	// addi r17,r17,1572
	ctx.r17.s64 = ctx.r17.s64 + 1572;
	// addi r16,r16,1560
	ctx.r16.s64 = ctx.r16.s64 + 1560;
	// stw r19,-224(r11)
	PPC_STORE_U32(ctx.r11.u32 + -224, ctx.r19.u32);
	// addi r15,r15,1548
	ctx.r15.s64 = ctx.r15.s64 + 1548;
	// stw r18,-216(r11)
	PPC_STORE_U32(ctx.r11.u32 + -216, ctx.r18.u32);
	// lis r14,-32254
	ctx.r14.s64 = -2113798144;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r17,-232(r11)
	PPC_STORE_U32(ctx.r11.u32 + -232, ctx.r17.u32);
	// addi r14,r14,-31668
	ctx.r14.s64 = ctx.r14.s64 + -31668;
	// stw r16,-220(r11)
	PPC_STORE_U32(ctx.r11.u32 + -220, ctx.r16.u32);
	// stw r15,-212(r11)
	PPC_STORE_U32(ctx.r11.u32 + -212, ctx.r15.u32);
	// lwz r10,-164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -164);
	// stw r10,-228(r11)
	PPC_STORE_U32(ctx.r11.u32 + -228, ctx.r10.u32);
	// lwz r10,-168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// stw r10,-208(r11)
	PPC_STORE_U32(ctx.r11.u32 + -208, ctx.r10.u32);
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// stw r14,-204(r11)
	PPC_STORE_U32(ctx.r11.u32 + -204, ctx.r14.u32);
	// addi r10,r10,-28792
	ctx.r10.s64 = ctx.r10.s64 + -28792;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// stw r9,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// stw r9,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r9.u32);
	// stw r9,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
	// stw r9,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r9.u32);
	// stw r9,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r9.u32);
	// stw r9,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r9.u32);
	// stw r9,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r9.u32);
	// stw r9,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r9.u32);
	// stw r9,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r9.u32);
	// stw r9,48(r10)
	PPC_STORE_U32(ctx.r10.u32 + 48, ctx.r9.u32);
	// stw r9,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r9.u32);
	// stw r9,56(r10)
	PPC_STORE_U32(ctx.r10.u32 + 56, ctx.r9.u32);
	// stw r9,64(r10)
	PPC_STORE_U32(ctx.r10.u32 + 64, ctx.r9.u32);
	// stw r9,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r9.u32);
	// stw r9,76(r10)
	PPC_STORE_U32(ctx.r10.u32 + 76, ctx.r9.u32);
	// stw r9,68(r10)
	PPC_STORE_U32(ctx.r10.u32 + 68, ctx.r9.u32);
	// stw r9,72(r10)
	PPC_STORE_U32(ctx.r10.u32 + 72, ctx.r9.u32);
	// stw r9,88(r10)
	PPC_STORE_U32(ctx.r10.u32 + 88, ctx.r9.u32);
	// stw r9,80(r10)
	PPC_STORE_U32(ctx.r10.u32 + 80, ctx.r9.u32);
	// stw r9,84(r10)
	PPC_STORE_U32(ctx.r10.u32 + 84, ctx.r9.u32);
	// stw r9,92(r10)
	PPC_STORE_U32(ctx.r10.u32 + 92, ctx.r9.u32);
	// stw r9,96(r10)
	PPC_STORE_U32(ctx.r10.u32 + 96, ctx.r9.u32);
	// stw r9,100(r10)
	PPC_STORE_U32(ctx.r10.u32 + 100, ctx.r9.u32);
	// stw r9,104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 104, ctx.r9.u32);
	// stw r9,108(r10)
	PPC_STORE_U32(ctx.r10.u32 + 108, ctx.r9.u32);
	// stw r9,112(r10)
	PPC_STORE_U32(ctx.r10.u32 + 112, ctx.r9.u32);
	// stw r9,116(r10)
	PPC_STORE_U32(ctx.r10.u32 + 116, ctx.r9.u32);
	// stw r9,120(r10)
	PPC_STORE_U32(ctx.r10.u32 + 120, ctx.r9.u32);
	// stw r9,124(r10)
	PPC_STORE_U32(ctx.r10.u32 + 124, ctx.r9.u32);
	// stw r9,128(r10)
	PPC_STORE_U32(ctx.r10.u32 + 128, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,132(r10)
	PPC_STORE_U32(ctx.r10.u32 + 132, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,136(r10)
	PPC_STORE_U32(ctx.r10.u32 + 136, ctx.r9.u32);
	// stw r9,140(r10)
	PPC_STORE_U32(ctx.r10.u32 + 140, ctx.r9.u32);
	// stw r9,144(r10)
	PPC_STORE_U32(ctx.r10.u32 + 144, ctx.r9.u32);
	// stw r9,148(r10)
	PPC_STORE_U32(ctx.r10.u32 + 148, ctx.r9.u32);
	// stw r9,152(r10)
	PPC_STORE_U32(ctx.r10.u32 + 152, ctx.r9.u32);
	// stw r9,156(r10)
	PPC_STORE_U32(ctx.r10.u32 + 156, ctx.r9.u32);
	// stw r9,160(r10)
	PPC_STORE_U32(ctx.r10.u32 + 160, ctx.r9.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r9,176(r10)
	PPC_STORE_U32(ctx.r10.u32 + 176, ctx.r9.u32);
	// stw r9,184(r10)
	PPC_STORE_U32(ctx.r10.u32 + 184, ctx.r9.u32);
	// stw r9,168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 168, ctx.r9.u32);
	// stw r9,180(r10)
	PPC_STORE_U32(ctx.r10.u32 + 180, ctx.r9.u32);
	// stw r9,188(r10)
	PPC_STORE_U32(ctx.r10.u32 + 188, ctx.r9.u32);
	// stw r9,172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 172, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,192(r10)
	PPC_STORE_U32(ctx.r10.u32 + 192, ctx.r9.u32);
	// stw r9,196(r10)
	PPC_STORE_U32(ctx.r10.u32 + 196, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// stw r10,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// stw r10,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r10.u32);
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// stw r10,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// stw r10,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r10.u32);
	// stw r10,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// stw r10,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r10.u32);
	// stw r10,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r10.u32);
	// stw r10,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r10.u32);
	// stw r10,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r10.u32);
	// stw r10,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r10.u32);
	// stw r10,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r10.u32);
	// stw r10,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r10.u32);
	// stw r10,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r10.u32);
	// stw r10,132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 132, ctx.r10.u32);
	// stw r10,136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 136, ctx.r10.u32);
	// stw r10,140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 140, ctx.r10.u32);
	// stw r10,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r10.u32);
	// stw r10,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r10.u32);
	// stw r10,152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 152, ctx.r10.u32);
	// stw r10,156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 156, ctx.r10.u32);
	// stw r10,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r10.u32);
	// stw r10,176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 176, ctx.r10.u32);
	// stw r10,184(r11)
	PPC_STORE_U32(ctx.r11.u32 + 184, ctx.r10.u32);
	// stw r10,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r10.u32);
	// stw r10,180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 180, ctx.r10.u32);
	// stw r10,188(r11)
	PPC_STORE_U32(ctx.r11.u32 + 188, ctx.r10.u32);
	// stw r10,172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 172, ctx.r10.u32);
	// stw r10,192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 192, ctx.r10.u32);
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// b 0x822e9900
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BC63C"))) PPC_WEAK_FUNC(sub_821BC63C);
PPC_FUNC_IMPL(__imp__sub_821BC63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BC640"))) PPC_WEAK_FUNC(sub_821BC640);
PPC_FUNC_IMPL(__imp__sub_821BC640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x821BC648;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r11,27488
	ctx.r30.s64 = ctx.r11.s64 + 27488;
	// beq 0x821bc678
	if (ctx.cr0.eq) goto loc_821BC678;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,2216
	ctx.r5.s64 = ctx.r11.s64 + 2216;
	// bl 0x821bbf30
	ctx.lr = 0x821BC678;
	sub_821BBF30(ctx, base);
loc_821BC678:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bbf30
	ctx.lr = 0x821BC688;
	sub_821BBF30(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bc6a8
	if (ctx.cr0.eq) goto loc_821BC6A8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,2208
	ctx.r5.s64 = ctx.r11.s64 + 2208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bbf30
	ctx.lr = 0x821BC6A8;
	sub_821BBF30(ctx, base);
loc_821BC6A8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BC6B0"))) PPC_WEAK_FUNC(sub_821BC6B0);
PPC_FUNC_IMPL(__imp__sub_821BC6B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x821BC6B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r11,27488
	ctx.r30.s64 = ctx.r11.s64 + 27488;
	// beq 0x821bc6e8
	if (ctx.cr0.eq) goto loc_821BC6E8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,2224
	ctx.r5.s64 = ctx.r11.s64 + 2224;
	// bl 0x821bbf30
	ctx.lr = 0x821BC6E8;
	sub_821BBF30(ctx, base);
loc_821BC6E8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bbf30
	ctx.lr = 0x821BC6F8;
	sub_821BBF30(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bc718
	if (ctx.cr0.eq) goto loc_821BC718;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,2208
	ctx.r5.s64 = ctx.r11.s64 + 2208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bbf30
	ctx.lr = 0x821BC718;
	sub_821BBF30(ctx, base);
loc_821BC718:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BC720"))) PPC_WEAK_FUNC(sub_821BC720);
PPC_FUNC_IMPL(__imp__sub_821BC720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98c4
	ctx.lr = 0x821BC728;
	__savegprlr_19(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r4,r10,27508
	ctx.r4.s64 = ctx.r10.s64 + 27508;
	// srawi r10,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 7;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r19,r7
	ctx.r19.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// clrlwi r21,r10,31
	ctx.r21.u64 = ctx.r10.u32 & 0x1;
	// clrlwi r27,r11,26
	ctx.r27.u64 = ctx.r11.u32 & 0x3F;
	// bl 0x821bbf30
	ctx.lr = 0x821BC764;
	sub_821BBF30(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// addi r20,r11,2264
	ctx.r20.s64 = ctx.r11.s64 + 2264;
	// beq cr6,0x821bc780
	if (ctx.cr6.eq) goto loc_821BC780;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x821bbf30
	ctx.lr = 0x821BC780;
	sub_821BBF30(ctx, base);
loc_821BC780:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x821bc794
	if (!ctx.cr6.eq) goto loc_821BC794;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x821bc798
	if (!ctx.cr6.eq) goto loc_821BC798;
loc_821BC794:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821BC798:
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x821bc7b0
	if (!ctx.cr6.eq) goto loc_821BC7B0;
	// cmpwi cr6,r27,16
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 16, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x821bc7b4
	if (!ctx.cr6.eq) goto loc_821BC7B4;
loc_821BC7B0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821BC7B4:
	// clrlwi. r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r29,r11,27488
	ctx.r29.s64 = ctx.r11.s64 + 27488;
	// beq 0x821bc7d8
	if (ctx.cr0.eq) goto loc_821BC7D8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,18468
	ctx.r4.s64 = ctx.r11.s64 + 18468;
	// bl 0x821bbf30
	ctx.lr = 0x821BC7D4;
	sub_821BBF30(ctx, base);
	// b 0x821bc800
	goto loc_821BC800;
loc_821BC7D8:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x821bc7ec
	if (ctx.cr6.eq) goto loc_821BC7EC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,20156
	ctx.r5.s64 = ctx.r11.s64 + 20156;
	// b 0x821bc7f4
	goto loc_821BC7F4;
loc_821BC7EC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,20256
	ctx.r5.s64 = ctx.r11.s64 + 20256;
loc_821BC7F4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bbf30
	ctx.lr = 0x821BC800;
	sub_821BBF30(ctx, base);
loc_821BC800:
	// clrlwi. r28,r28,24
	ctx.r28.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x821bc818
	if (ctx.cr0.eq) goto loc_821BC818;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,2260
	ctx.r4.s64 = ctx.r11.s64 + 2260;
	// bl 0x821bbf30
	ctx.lr = 0x821BC818;
	sub_821BBF30(ctx, base);
loc_821BC818:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x821bc868
	if (!ctx.cr6.eq) goto loc_821BC868;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x821bc854
	if (ctx.cr6.eq) goto loc_821BC854;
	// cmpwi cr6,r27,62
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 62, ctx.xer);
	// beq cr6,0x821bc848
	if (ctx.cr6.eq) goto loc_821BC848;
	// cmpwi cr6,r27,63
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 63, ctx.xer);
	// bne cr6,0x821bc854
	if (!ctx.cr6.eq) goto loc_821BC854;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,-14376
	ctx.r5.s64 = ctx.r11.s64 + -14376;
loc_821BC840:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x821bc860
	goto loc_821BC860;
loc_821BC848:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,-14380
	ctx.r5.s64 = ctx.r11.s64 + -14380;
	// b 0x821bc840
	goto loc_821BC840;
loc_821BC854:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,26484
	ctx.r4.s64 = ctx.r11.s64 + 26484;
loc_821BC860:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bbf30
	ctx.lr = 0x821BC868;
	sub_821BBF30(ctx, base);
loc_821BC868:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x821bc888
	if (!ctx.cr6.eq) goto loc_821BC888;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x821bc888
	if (ctx.cr6.eq) goto loc_821BC888;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,2256
	ctx.r4.s64 = ctx.r11.s64 + 2256;
	// bl 0x821bbf30
	ctx.lr = 0x821BC888;
	sub_821BBF30(ctx, base);
loc_821BC888:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x821bc8a0
	if (ctx.cr6.eq) goto loc_821BC8A0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,2252
	ctx.r4.s64 = ctx.r11.s64 + 2252;
	// bl 0x821bbf30
	ctx.lr = 0x821BC8A0;
	sub_821BBF30(ctx, base);
loc_821BC8A0:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x821bc91c
	if (!ctx.cr6.eq) goto loc_821BC91C;
	// cmpwi cr6,r24,15
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 15, ctx.xer);
	// beq cr6,0x821bca74
	if (ctx.cr6.eq) goto loc_821BCA74;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,29148
	ctx.r4.s64 = ctx.r11.s64 + 29148;
	// bl 0x821bbf30
	ctx.lr = 0x821BC8C0;
	sub_821BBF30(ctx, base);
	// clrlwi. r11,r24,31
	ctx.r11.u64 = ctx.r24.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bc8d8
	if (ctx.cr0.eq) goto loc_821BC8D8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,32332
	ctx.r4.s64 = ctx.r11.s64 + 32332;
	// bl 0x821bbf30
	ctx.lr = 0x821BC8D8;
	sub_821BBF30(ctx, base);
loc_821BC8D8:
	// rlwinm. r11,r24,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bc8f0
	if (ctx.cr0.eq) goto loc_821BC8F0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,32312
	ctx.r4.s64 = ctx.r11.s64 + 32312;
	// bl 0x821bbf30
	ctx.lr = 0x821BC8F0;
	sub_821BBF30(ctx, base);
loc_821BC8F0:
	// rlwinm. r11,r24,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bc908
	if (ctx.cr0.eq) goto loc_821BC908;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-24184
	ctx.r4.s64 = ctx.r11.s64 + -24184;
	// bl 0x821bbf30
	ctx.lr = 0x821BC908;
	sub_821BBF30(ctx, base);
loc_821BC908:
	// rlwinm. r11,r24,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bca74
	if (ctx.cr0.eq) goto loc_821BCA74;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-24200
	ctx.r4.s64 = ctx.r11.s64 + -24200;
	// b 0x821bca6c
	goto loc_821BCA6C;
loc_821BC91C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,29148
	ctx.r4.s64 = ctx.r11.s64 + 29148;
	// bl 0x821bbf30
	ctx.lr = 0x821BC92C;
	sub_821BBF30(ctx, base);
	// clrlwi. r11,r24,31
	ctx.r11.u64 = ctx.r24.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r28,r11,572
	ctx.r28.s64 = ctx.r11.s64 + 572;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r11,-14372
	ctx.r30.s64 = ctx.r11.s64 + -14372;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r29,r11,2248
	ctx.r29.s64 = ctx.r11.s64 + 2248;
	// beq 0x821bc96c
	if (ctx.cr0.eq) goto loc_821BC96C;
	// clrlwi. r11,r23,31
	ctx.r11.u64 = ctx.r23.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x821bc960
	if (ctx.cr0.eq) goto loc_821BC960;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x821bc98c
	goto loc_821BC98C;
loc_821BC960:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,32332
	ctx.r4.s64 = ctx.r11.s64 + 32332;
	// b 0x821bc98c
	goto loc_821BC98C;
loc_821BC96C:
	// clrlwi r11,r23,31
	ctx.r11.u64 = ctx.r23.u32 & 0x1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821bc984
	if (ctx.cr6.eq) goto loc_821BC984;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bne cr6,0x821bc988
	if (!ctx.cr6.eq) goto loc_821BC988;
loc_821BC984:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_821BC988:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821BC98C:
	// bl 0x821bbf30
	ctx.lr = 0x821BC990;
	sub_821BBF30(ctx, base);
	// rlwinm. r11,r24,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bc9b8
	if (ctx.cr0.eq) goto loc_821BC9B8;
	// rlwinm. r11,r23,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x821bc9ac
	if (ctx.cr0.eq) goto loc_821BC9AC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x821bc9d8
	goto loc_821BC9D8;
loc_821BC9AC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,32312
	ctx.r4.s64 = ctx.r11.s64 + 32312;
	// b 0x821bc9d8
	goto loc_821BC9D8;
loc_821BC9B8:
	// rlwinm r11,r23,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821bc9d0
	if (ctx.cr6.eq) goto loc_821BC9D0;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bne cr6,0x821bc9d4
	if (!ctx.cr6.eq) goto loc_821BC9D4;
loc_821BC9D0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_821BC9D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821BC9D8:
	// bl 0x821bbf30
	ctx.lr = 0x821BC9DC;
	sub_821BBF30(ctx, base);
	// rlwinm. r11,r24,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bca04
	if (ctx.cr0.eq) goto loc_821BCA04;
	// rlwinm. r11,r23,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x821bc9f8
	if (ctx.cr0.eq) goto loc_821BC9F8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x821bca24
	goto loc_821BCA24;
loc_821BC9F8:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-24184
	ctx.r4.s64 = ctx.r11.s64 + -24184;
	// b 0x821bca24
	goto loc_821BCA24;
loc_821BCA04:
	// rlwinm r11,r23,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x821bca1c
	if (ctx.cr6.eq) goto loc_821BCA1C;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bne cr6,0x821bca20
	if (!ctx.cr6.eq) goto loc_821BCA20;
loc_821BCA1C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_821BCA20:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821BCA24:
	// bl 0x821bbf30
	ctx.lr = 0x821BCA28;
	sub_821BBF30(ctx, base);
	// rlwinm. r11,r24,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bca50
	if (ctx.cr0.eq) goto loc_821BCA50;
	// rlwinm. r11,r23,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x821bca44
	if (ctx.cr0.eq) goto loc_821BCA44;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x821bca70
	goto loc_821BCA70;
loc_821BCA44:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-24200
	ctx.r4.s64 = ctx.r11.s64 + -24200;
	// b 0x821bca70
	goto loc_821BCA70;
loc_821BCA50:
	// rlwinm r11,r23,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x821bca68
	if (ctx.cr6.eq) goto loc_821BCA68;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bne cr6,0x821bca6c
	if (!ctx.cr6.eq) goto loc_821BCA6C;
loc_821BCA68:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_821BCA6C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821BCA70:
	// bl 0x821bbf30
	ctx.lr = 0x821BCA74;
	sub_821BBF30(ctx, base);
loc_821BCA74:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x821bca84
	if (ctx.cr6.eq) goto loc_821BCA84;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// b 0x821bca8c
	goto loc_821BCA8C;
loc_821BCA84:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,27525
	ctx.r4.s64 = ctx.r11.s64 + 27525;
loc_821BCA8C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bbf30
	ctx.lr = 0x821BCA94;
	sub_821BBF30(ctx, base);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// beq cr6,0x821bcaac
	if (ctx.cr6.eq) goto loc_821BCAAC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,2240
	ctx.r4.s64 = ctx.r11.s64 + 2240;
	// bl 0x821bbf30
	ctx.lr = 0x821BCAAC;
	sub_821BBF30(ctx, base);
loc_821BCAAC:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822e9914
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BCAB4"))) PPC_WEAK_FUNC(sub_821BCAB4);
PPC_FUNC_IMPL(__imp__sub_821BCAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BCAB8"))) PPC_WEAK_FUNC(sub_821BCAB8);
PPC_FUNC_IMPL(__imp__sub_821BCAB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98cc
	ctx.lr = 0x821BCAC0;
	__savegprlr_21(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x821bcae4
	if (!ctx.cr6.eq) goto loc_821BCAE4;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x821bcaf4
	if (!ctx.cr6.eq) goto loc_821BCAF4;
loc_821BCAE4:
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// bne cr6,0x821bcafc
	if (!ctx.cr6.eq) goto loc_821BCAFC;
	// rlwinm. r11,r5,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bcafc
	if (ctx.cr0.eq) goto loc_821BCAFC;
loc_821BCAF4:
	// li r21,1
	ctx.r21.s64 = 1;
	// b 0x821bcb00
	goto loc_821BCB00;
loc_821BCAFC:
	// li r21,0
	ctx.r21.s64 = 0;
loc_821BCB00:
	// srawi r10,r5,6
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 6;
	// subfic r8,r31,0
	ctx.xer.ca = ctx.r31.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r31.s64;
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r7,r11,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// rlwinm r11,r8,0,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFC0;
	// and r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 & ctx.r31.u64;
	// rlwinm r11,r11,0,25,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// clrlwi r27,r10,31
	ctx.r27.u64 = ctx.r10.u32 & 0x1;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// and r25,r7,r6
	ctx.r25.u64 = ctx.r7.u64 & ctx.r6.u64;
	// and r26,r11,r5
	ctx.r26.u64 = ctx.r11.u64 & ctx.r5.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821bcb48
	if (ctx.cr6.eq) goto loc_821BCB48;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,18468
	ctx.r4.s64 = ctx.r11.s64 + 18468;
	// bl 0x821bbf30
	ctx.lr = 0x821BCB48;
	sub_821BBF30(ctx, base);
loc_821BCB48:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// addi r22,r11,2264
	ctx.r22.s64 = ctx.r11.s64 + 2264;
	// beq cr6,0x821bcb64
	if (ctx.cr6.eq) goto loc_821BCB64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x821bbf30
	ctx.lr = 0x821BCB64;
	sub_821BBF30(ctx, base);
loc_821BCB64:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x821bcb78
	if (!ctx.cr6.eq) goto loc_821BCB78;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x821bcb7c
	if (ctx.cr6.eq) goto loc_821BCB7C;
loc_821BCB78:
	// li r10,1
	ctx.r10.s64 = 1;
loc_821BCB7C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// subfic r9,r31,0
	ctx.xer.ca = ctx.r31.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r31.s64;
	// addi r24,r11,-11680
	ctx.r24.s64 = ctx.r11.s64 + -11680;
	// subfe r11,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r11,99
	ctx.r5.s64 = ctx.r11.s64 + 99;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// bl 0x821bbf30
	ctx.lr = 0x821BCBA4;
	sub_821BBF30(ctx, base);
	// clrlwi. r30,r31,24
	ctx.r30.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x821bcbbc
	if (ctx.cr0.eq) goto loc_821BCBBC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,2260
	ctx.r4.s64 = ctx.r11.s64 + 2260;
	// bl 0x821bbf30
	ctx.lr = 0x821BCBBC;
	sub_821BBF30(ctx, base);
loc_821BCBBC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r11,26484
	ctx.r4.s64 = ctx.r11.s64 + 26484;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821bbf30
	ctx.lr = 0x821BCBD0;
	sub_821BBF30(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r31,r11,2256
	ctx.r31.s64 = ctx.r11.s64 + 2256;
	// beq cr6,0x821bcbec
	if (ctx.cr6.eq) goto loc_821BCBEC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821bbf30
	ctx.lr = 0x821BCBEC;
	sub_821BBF30(ctx, base);
loc_821BCBEC:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x821bcc14
	if (ctx.cr6.eq) goto loc_821BCC14;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x821bcc04
	if (ctx.cr6.eq) goto loc_821BCC04;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// b 0x821bcc0c
	goto loc_821BCC0C;
loc_821BCC04:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,2268
	ctx.r4.s64 = ctx.r11.s64 + 2268;
loc_821BCC0C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821bbf30
	ctx.lr = 0x821BCC14;
	sub_821BBF30(ctx, base);
loc_821BCC14:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bcc2c
	if (ctx.cr6.eq) goto loc_821BCC2C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,2252
	ctx.r4.s64 = ctx.r11.s64 + 2252;
	// bl 0x821bbf30
	ctx.lr = 0x821BCC2C;
	sub_821BBF30(ctx, base);
loc_821BCC2C:
	// lwz r25,340(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r25,4
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 4, ctx.xer);
	// blt cr6,0x821bcc40
	if (ctx.cr6.lt) goto loc_821BCC40;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821BCC40:
	// clrlwi r23,r11,24
	ctx.r23.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x821bcc54
	if (!ctx.cr6.eq) goto loc_821BCC54;
	// clrlwi. r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bcd44
	if (ctx.cr0.eq) goto loc_821BCD44;
loc_821BCC54:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,29148
	ctx.r4.s64 = ctx.r11.s64 + 29148;
	// bl 0x821bbf30
	ctx.lr = 0x821BCC64;
	sub_821BBF30(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// srawi r9,r28,2
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r28.s32 >> 2;
	// addi r30,r11,-24232
	ctx.r30.s64 = ctx.r11.s64 + -24232;
	// srawi r10,r28,4
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r28.s32 >> 4;
	// srawi r11,r28,6
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 6;
	// clrlwi r31,r28,30
	ctx.r31.u64 = ctx.r28.u32 & 0x3;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi r26,r11,30
	ctx.r26.u64 = ctx.r11.u32 & 0x3;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// lbzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// clrlwi r28,r9,30
	ctx.r28.u64 = ctx.r9.u32 & 0x3;
	// clrlwi r27,r10,30
	ctx.r27.u64 = ctx.r10.u32 & 0x3;
	// bl 0x821bbf30
	ctx.lr = 0x821BCCA8;
	sub_821BBF30(ctx, base);
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// ble cr6,0x821bcd44
	if (!ctx.cr6.gt) goto loc_821BCD44;
	// clrlwi. r23,r23,24
	ctx.r23.u64 = ctx.r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne 0x821bccd0
	if (!ctx.cr0.eq) goto loc_821BCCD0;
	// cmpw cr6,r28,r31
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x821bccd0
	if (!ctx.cr6.eq) goto loc_821BCCD0;
	// cmpw cr6,r27,r31
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x821bccd0
	if (!ctx.cr6.eq) goto loc_821BCCD0;
	// cmpw cr6,r26,r31
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x821bcd44
	if (ctx.cr6.eq) goto loc_821BCD44;
loc_821BCCD0:
	// lbzx r11,r28,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r30.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x821bbf30
	ctx.lr = 0x821BCCE4;
	sub_821BBF30(ctx, base);
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 2, ctx.xer);
	// ble cr6,0x821bcd44
	if (!ctx.cr6.gt) goto loc_821BCD44;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x821bcd04
	if (!ctx.cr6.eq) goto loc_821BCD04;
	// cmpw cr6,r27,r28
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x821bcd04
	if (!ctx.cr6.eq) goto loc_821BCD04;
	// cmpw cr6,r26,r28
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x821bcd44
	if (ctx.cr6.eq) goto loc_821BCD44;
loc_821BCD04:
	// lbzx r11,r27,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r30.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x821bbf30
	ctx.lr = 0x821BCD18;
	sub_821BBF30(ctx, base);
	// cmpwi cr6,r25,3
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 3, ctx.xer);
	// ble cr6,0x821bcd44
	if (!ctx.cr6.gt) goto loc_821BCD44;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x821bcd30
	if (!ctx.cr6.eq) goto loc_821BCD30;
	// cmpw cr6,r26,r27
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x821bcd44
	if (ctx.cr6.eq) goto loc_821BCD44;
loc_821BCD30:
	// lbzx r11,r26,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r30.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x821bbf30
	ctx.lr = 0x821BCD44;
	sub_821BBF30(ctx, base);
loc_821BCD44:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x821bcd54
	if (ctx.cr6.eq) goto loc_821BCD54;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// b 0x821bcd5c
	goto loc_821BCD5C;
loc_821BCD54:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,27525
	ctx.r4.s64 = ctx.r11.s64 + 27525;
loc_821BCD5C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821bbf30
	ctx.lr = 0x821BCD64;
	sub_821BBF30(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822e991c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BCD6C"))) PPC_WEAK_FUNC(sub_821BCD6C);
PPC_FUNC_IMPL(__imp__sub_821BCD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BCD70"))) PPC_WEAK_FUNC(sub_821BCD70);
PPC_FUNC_IMPL(__imp__sub_821BCD70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x821BCD78;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// srawi r11,r4,7
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7F) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 7;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// clrlwi r30,r4,26
	ctx.r30.u64 = ctx.r4.u32 & 0x3F;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// clrlwi r27,r11,31
	ctx.r27.u64 = ctx.r11.u32 & 0x1;
	// beq cr6,0x821bcda4
	if (ctx.cr6.eq) goto loc_821BCDA4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,18468
	ctx.r4.s64 = ctx.r11.s64 + 18468;
	// bl 0x821bbf30
	ctx.lr = 0x821BCDA4;
	sub_821BBF30(ctx, base);
loc_821BCDA4:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r28,r11,2264
	ctx.r28.s64 = ctx.r11.s64 + 2264;
	// beq cr6,0x821bcdc0
	if (ctx.cr6.eq) goto loc_821BCDC0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x821bbf30
	ctx.lr = 0x821BCDC0;
	sub_821BBF30(ctx, base);
loc_821BCDC0:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,2296
	ctx.r4.s64 = ctx.r11.s64 + 2296;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bbf30
	ctx.lr = 0x821BCDD4;
	sub_821BBF30(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,2252
	ctx.r4.s64 = ctx.r11.s64 + 2252;
	// bl 0x821bbf30
	ctx.lr = 0x821BCDE4;
	sub_821BBF30(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x821bce90
	if (ctx.cr6.eq) goto loc_821BCE90;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,29148
	ctx.r4.s64 = ctx.r11.s64 + 29148;
	// bl 0x821bbf30
	ctx.lr = 0x821BCDFC;
	sub_821BBF30(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// clrlwi r9,r29,30
	ctx.r9.u64 = ctx.r29.u32 & 0x3;
	// addi r11,r11,-24232
	ctx.r11.s64 = ctx.r11.s64 + -24232;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r10,-11680
	ctx.r30.s64 = ctx.r10.s64 + -11680;
	// lbzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x821bbf30
	ctx.lr = 0x821BCE24;
	sub_821BBF30(ctx, base);
	// srawi r10,r29,2
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r29.s32 >> 2;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// addi r11,r11,2288
	ctx.r11.s64 = ctx.r11.s64 + 2288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lbzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x821bbf30
	ctx.lr = 0x821BCE48;
	sub_821BBF30(ctx, base);
	// srawi r10,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r29.s32 >> 4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// addi r11,r11,2280
	ctx.r11.s64 = ctx.r11.s64 + 2280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lbzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x821bbf30
	ctx.lr = 0x821BCE6C;
	sub_821BBF30(ctx, base);
	// srawi r10,r29,6
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r29.s32 >> 6;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// addi r11,r11,2272
	ctx.r11.s64 = ctx.r11.s64 + 2272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lbzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x821bbf30
	ctx.lr = 0x821BCE90;
	sub_821BBF30(ctx, base);
loc_821BCE90:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x821bcea0
	if (ctx.cr6.eq) goto loc_821BCEA0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x821bcea8
	goto loc_821BCEA8;
loc_821BCEA0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,27525
	ctx.r4.s64 = ctx.r11.s64 + 27525;
loc_821BCEA8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bbf30
	ctx.lr = 0x821BCEB0;
	sub_821BBF30(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BCEB8"))) PPC_WEAK_FUNC(sub_821BCEB8);
PPC_FUNC_IMPL(__imp__sub_821BCEB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98d8
	ctx.lr = 0x821BCEC0;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// clrlwi. r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821bcef8
	if (!ctx.cr0.eq) goto loc_821BCEF8;
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x821bcefc
	if (ctx.cr6.eq) goto loc_821BCEFC;
loc_821BCEF8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821BCEFC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821bd188
	if (!ctx.cr0.eq) goto loc_821BD188;
	// lbz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-29352
	ctx.r11.s64 = ctx.r11.s64 + -29352;
	// rlwinm r10,r10,2,25,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x7C;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x821bc640
	ctx.lr = 0x821BCF20;
	sub_821BC640(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r10,r11,12,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xF;
	// rlwinm r9,r11,18,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
	// rlwinm r8,r11,26,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	// rlwinm r7,r11,8,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x1;
	// rlwinm r6,r11,17,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1;
	// rlwinm r5,r11,16,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF;
	// clrlwi r4,r11,26
	ctx.r4.u64 = ctx.r11.u32 & 0x3F;
	// bl 0x821bc720
	ctx.lr = 0x821BCF48;
	sub_821BC720(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r29,r11,-6708
	ctx.r29.s64 = ctx.r11.s64 + -6708;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x821bbf30
	ctx.lr = 0x821BCF5C;
	sub_821BBF30(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x821bcf7c
	if (!ctx.cr0.eq) goto loc_821BCF7C;
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x821bcf7c
	if (!ctx.cr0.eq) goto loc_821BCF7C;
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bcf7c
	if (ctx.cr0.eq) goto loc_821BCF7C;
	// li r24,1
	ctx.r24.s64 = 1;
loc_821BCF7C:
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r26,4
	ctx.r26.s64 = 4;
	// addi r28,r10,-29232
	ctx.r28.s64 = ctx.r10.s64 + -29232;
	// rlwinm r10,r11,10,25,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x7C;
	// lwzx r10,r10,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// blt cr6,0x821bd008
	if (ctx.cr6.lt) goto loc_821BD008;
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// clrlwi r25,r10,31
	ctx.r25.u64 = ctx.r10.u32 & 0x1;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// bne 0x821bcfd4
	if (!ctx.cr0.eq) goto loc_821BCFD4;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x821bcfd4
	if (ctx.cr6.eq) goto loc_821BCFD4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r6,5(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// rlwinm r5,r11,6,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	// lbz r4,9(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// bl 0x821bcd70
	ctx.lr = 0x821BCFD0;
	sub_821BCD70(ctx, base);
	// b 0x821bd008
	goto loc_821BD008;
loc_821BCFD4:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r4,r9,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// rlwinm r9,r11,6,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	// lbz r5,9(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// rlwinm r8,r10,25,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	// lbz r10,5(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// rlwinm r7,r11,3,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// bl 0x821bcab8
	ctx.lr = 0x821BD008;
	sub_821BCAB8(ctx, base);
loc_821BD008:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,10,25,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x7C;
	// lwzx r10,r10,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x821bd0c0
	if (ctx.cr6.lt) goto loc_821BD0C0;
	// rlwinm r11,r11,2,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x821bd034
	if (!ctx.cr0.eq) goto loc_821BD034;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x821bd034
	if (!ctx.cr6.eq) goto loc_821BD034;
	// li r25,2
	ctx.r25.s64 = 2;
loc_821BD034:
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x821bbf30
	ctx.lr = 0x821BD04C;
	sub_821BBF30(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821bd07c
	if (!ctx.cr0.eq) goto loc_821BD07C;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x821bd07c
	if (ctx.cr6.eq) goto loc_821BD07C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r6,6(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// rlwinm r5,r11,7,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	// lbz r4,10(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// bl 0x821bcd70
	ctx.lr = 0x821BD078;
	sub_821BCD70(ctx, base);
	// b 0x821bd0c0
	goto loc_821BD0C0;
loc_821BD07C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 2, ctx.xer);
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// beq cr6,0x821bd090
	if (ctx.cr6.eq) goto loc_821BD090;
	// rlwinm r6,r11,2,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
loc_821BD090:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r4,r9,2,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x1;
	// rlwinm r9,r11,7,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	// lbz r5,10(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// rlwinm r8,r10,25,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	// lbz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// rlwinm r7,r11,3,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// bl 0x821bcab8
	ctx.lr = 0x821BD0C0;
	sub_821BCAB8(ctx, base);
loc_821BD0C0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,10,25,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x7C;
	// lwzx r10,r10,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// blt cr6,0x821bd188
	if (ctx.cr6.lt) goto loc_821BD188;
	// rlwinm r11,r11,3,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x821bd0ec
	if (!ctx.cr0.eq) goto loc_821BD0EC;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x821bd0ec
	if (!ctx.cr6.eq) goto loc_821BD0EC;
	// li r25,3
	ctx.r25.s64 = 3;
loc_821BD0EC:
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r29,r11,r27
	ctx.r29.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x821bbf30
	ctx.lr = 0x821BD104;
	sub_821BBF30(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x821bd134
	if (!ctx.cr0.eq) goto loc_821BD134;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x821bd134
	if (ctx.cr6.eq) goto loc_821BD134;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r5,r10,8,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0x1;
	// bl 0x821bcd70
	ctx.lr = 0x821BD130;
	sub_821BCD70(ctx, base);
	// b 0x821bd188
	goto loc_821BD188;
loc_821BD134:
	// cmpwi cr6,r25,3
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 3, ctx.xer);
	// beq cr6,0x821bd150
	if (ctx.cr6.eq) goto loc_821BD150;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// bne cr6,0x821bd150
	if (!ctx.cr6.eq) goto loc_821BD150;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r6,r11,2,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// b 0x821bd158
	goto loc_821BD158;
loc_821BD150:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
loc_821BD158:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r5,r4,24
	ctx.r5.u64 = ctx.r4.u32 & 0xFF;
	// rlwinm r8,r10,25,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r9,r11,8,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x1;
	// rlwinm r7,r11,3,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// rlwinm r4,r4,3,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0x1;
	// bl 0x821bcab8
	ctx.lr = 0x821BD188;
	sub_821BCAB8(ctx, base);
loc_821BD188:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822e9928
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BD190"))) PPC_WEAK_FUNC(sub_821BD190);
PPC_FUNC_IMPL(__imp__sub_821BD190) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x821BD198;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x821bd1c8
	if (!ctx.cr0.eq) goto loc_821BD1C8;
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x821bd1c8
	if (!ctx.cr0.eq) goto loc_821BD1C8;
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bd1c8
	if (ctx.cr0.eq) goto loc_821BD1C8;
	// li r28,1
	ctx.r28.s64 = 1;
loc_821BD1C8:
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r29,r11,-28392
	ctx.r29.s64 = ctx.r11.s64 + -28392;
	// rlwinm r10,r10,8,24,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFC;
	// addi r11,r29,-600
	ctx.r11.s64 = ctx.r29.s64 + -600;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x821bc640
	ctx.lr = 0x821BD1E8;
	sub_821BC640(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r8,r11,26,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	// rlwinm. r6,r11,17,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x821bd1fc
	if (!ctx.cr0.eq) goto loc_821BD1FC;
	// rlwinm r8,r11,18,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
loc_821BD1FC:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// clrlwi r4,r11,26
	ctx.r4.u64 = ctx.r11.u32 & 0x3F;
	// bne cr6,0x821bd20c
	if (!ctx.cr6.eq) goto loc_821BD20C;
	// rlwinm r4,r11,24,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x3F;
loc_821BD20C:
	// rlwinm r10,r11,16,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF;
	// rlwinm r9,r11,18,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
	// rlwinm r7,r11,7,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	// rlwinm r5,r11,12,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821bc720
	ctx.lr = 0x821BD224;
	sub_821BC720(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-6708
	ctx.r4.s64 = ctx.r11.s64 + -6708;
	// bl 0x821bbf30
	ctx.lr = 0x821BD234;
	sub_821BBF30(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// rlwinm r7,r8,8,24,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFC;
	// addi r11,r11,-28792
	ctx.r11.s64 = ctx.r11.s64 + -28792;
	// lwzx r11,r7,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x821bd320
	if (ctx.cr6.lt) goto loc_821BD320;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r11,2,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// rlwinm. r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r11,r11,3,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// beq 0x821bd278
	if (ctx.cr0.eq) goto loc_821BD278;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821bd29c
	goto loc_821BD29C;
loc_821BD278:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821bd28c
	if (ctx.cr0.eq) goto loc_821BD28C;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x821bd29c
	goto loc_821BD29C;
loc_821BD28C:
	// rlwinm r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
loc_821BD29C:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r6,r10,0,2,2
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x821bd2cc
	if (!ctx.cr0.eq) goto loc_821BD2CC;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x821bd2cc
	if (ctx.cr6.eq) goto loc_821BD2CC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r5,r11,8,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x1;
	// bl 0x821bcd70
	ctx.lr = 0x821BD2C8;
	sub_821BCD70(ctx, base);
	// b 0x821bd320
	goto loc_821BD320;
loc_821BD2CC:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821bd2e8
	if (ctx.cr6.eq) goto loc_821BD2E8;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x821bd2e8
	if (!ctx.cr6.eq) goto loc_821BD2E8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r6,r11,2,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// b 0x821bd2f0
	goto loc_821BD2F0;
loc_821BD2E8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
loc_821BD2F0:
	// lwzx r10,r7,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r29.u32);
	// rlwinm r8,r8,25,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 25) & 0x1;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r5,r4,24
	ctx.r5.u64 = ctx.r4.u32 & 0xFF;
	// rlwinm r9,r11,8,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x1;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// rlwinm r7,r11,3,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r4,r4,3,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0x1;
	// bl 0x821bcab8
	ctx.lr = 0x821BD320;
	sub_821BCAB8(ctx, base);
loc_821BD320:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BD328"))) PPC_WEAK_FUNC(sub_821BD328);
PPC_FUNC_IMPL(__imp__sub_821BD328) {
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
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821bd374
	if (!ctx.cr0.eq) goto loc_821BD374;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bd360
	if (ctx.cr0.eq) goto loc_821BD360;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-9692
	ctx.r4.s64 = ctx.r11.s64 + -9692;
	// b 0x821bd368
	goto loc_821BD368;
loc_821BD360:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6780
	ctx.r4.s64 = ctx.r11.s64 + -6780;
loc_821BD368:
	// bl 0x821ab320
	ctx.lr = 0x821BD36C;
	sub_821AB320(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
loc_821BD374:
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

__attribute__((alias("__imp__sub_821BD388"))) PPC_WEAK_FUNC(sub_821BD388);
PPC_FUNC_IMPL(__imp__sub_821BD388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e0
	ctx.lr = 0x821BD390;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// bl 0x821bbf90
	ctx.lr = 0x821BD3A8;
	sub_821BBF90(ctx, base);
	// li r27,-1
	ctx.r27.s64 = -1;
	// li r26,-1
	ctx.r26.s64 = -1;
loc_821BD3B0:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// srawi r11,r26,1
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x821bd468
	if (ctx.cr6.eq) goto loc_821BD468;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bbb68
	ctx.lr = 0x821BD3D4;
	sub_821BBB68(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x821bd45c
	if (ctx.cr6.gt) goto loc_821BD45C;
	// lis r12,-32251
	ctx.r12.s64 = -2113601536;
	// addi r12,r12,2320
	ctx.r12.s64 = ctx.r12.s64 + 2320;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32228
	ctx.r12.s64 = -2112094208;
	// addi r12,r12,-11256
	ctx.r12.s64 = ctx.r12.s64 + -11256;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_821BD408;
	case 1:
		goto loc_821BD408;
	case 2:
		goto loc_821BD428;
	case 3:
		goto loc_821BD428;
	case 4:
		goto loc_821BD428;
	case 5:
		goto loc_821BD428;
	case 6:
		goto loc_821BD430;
	case 7:
		goto loc_821BD430;
	case 8:
		goto loc_821BD430;
	case 9:
		goto loc_821BD45C;
	case 10:
		goto loc_821BD430;
	default:
		__builtin_unreachable();
	}
loc_821BD408:
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bbb68
	ctx.lr = 0x821BD418;
	sub_821BBB68(ctx, base);
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// bne cr6,0x821bd45c
	if (!ctx.cr6.eq) goto loc_821BD45C;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x821bd45c
	goto loc_821BD45C;
loc_821BD428:
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x821bd45c
	goto loc_821BD45C;
loc_821BD430:
	// li r5,13
	ctx.r5.s64 = 13;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bbb68
	ctx.lr = 0x821BD440;
	sub_821BBB68(ctx, base);
	// clrlwi r9,r3,27
	ctx.r9.u64 = ctx.r3.u32 & 0x1F;
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// rlwinm r10,r3,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFC;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// slw r9,r29,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r9.u8 & 0x3F));
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
loc_821BD45C:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r31,r31,6
	ctx.r31.s64 = ctx.r31.s64 + 6;
	// bne 0x821bd3b0
	if (!ctx.cr0.eq) goto loc_821BD3B0;
loc_821BD468:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e9930
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BD470"))) PPC_WEAK_FUNC(sub_821BD470);
PPC_FUNC_IMPL(__imp__sub_821BD470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98d8
	ctx.lr = 0x821BD478;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821bd4cc
	if (!ctx.cr6.eq) goto loc_821BD4CC;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bd4b4
	if (ctx.cr0.eq) goto loc_821BD4B4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,3120
	ctx.r5.s64 = ctx.r11.s64 + 3120;
	// b 0x821bd4bc
	goto loc_821BD4BC;
loc_821BD4B4:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,3116
	ctx.r5.s64 = ctx.r11.s64 + 3116;
loc_821BD4BC:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-7084
	ctx.r4.s64 = ctx.r11.s64 + -7084;
	// bl 0x821bbf30
	ctx.lr = 0x821BD4CC;
	sub_821BBF30(ctx, base);
loc_821BD4CC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// clrlwi. r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bd9bc
	if (ctx.cr0.eq) goto loc_821BD9BC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821bd9a8
	if (!ctx.cr6.gt) goto loc_821BD9A8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// ble cr6,0x821bd504
	if (!ctx.cr6.gt) goto loc_821BD504;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// ble cr6,0x821bd9a8
	if (!ctx.cr6.gt) goto loc_821BD9A8;
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// ble cr6,0x821bd504
	if (!ctx.cr6.gt) goto loc_821BD504;
	// addi r10,r11,-24
	ctx.r10.s64 = ctx.r11.s64 + -24;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x821bd9a8
	if (ctx.cr6.gt) goto loc_821BD9A8;
loc_821BD504:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// cmplwi cr6,r11,26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 26, ctx.xer);
	// addi r4,r10,3100
	ctx.r4.s64 = ctx.r10.s64 + 3100;
	// bgt cr6,0x821bd5cc
	if (ctx.cr6.gt) goto loc_821BD5CC;
	// lis r12,-32251
	ctx.r12.s64 = -2113601536;
	// addi r12,r12,2336
	ctx.r12.s64 = ctx.r12.s64 + 2336;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32228
	ctx.r12.s64 = -2112094208;
	// addi r12,r12,-10944
	ctx.r12.s64 = ctx.r12.s64 + -10944;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_821BD540;
	case 1:
		goto loc_821BD54C;
	case 2:
		goto loc_821BD558;
	case 3:
		goto loc_821BD564;
	case 4:
		goto loc_821BD5CC;
	case 5:
		goto loc_821BD5CC;
	case 6:
		goto loc_821BD5CC;
	case 7:
		goto loc_821BD5CC;
	case 8:
		goto loc_821BD5CC;
	case 9:
		goto loc_821BD5CC;
	case 10:
		goto loc_821BD5CC;
	case 11:
		goto loc_821BD5CC;
	case 12:
		goto loc_821BD5CC;
	case 13:
		goto loc_821BD5CC;
	case 14:
		goto loc_821BD5CC;
	case 15:
		goto loc_821BD570;
	case 16:
		goto loc_821BD57C;
	case 17:
		goto loc_821BD588;
	case 18:
		goto loc_821BD594;
	case 19:
		goto loc_821BD5CC;
	case 20:
		goto loc_821BD5CC;
	case 21:
		goto loc_821BD5CC;
	case 22:
		goto loc_821BD5CC;
	case 23:
		goto loc_821BD5A0;
	case 24:
		goto loc_821BD5AC;
	case 25:
		goto loc_821BD5B8;
	case 26:
		goto loc_821BD5C4;
	default:
		__builtin_unreachable();
	}
loc_821BD540:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,3092
	ctx.r4.s64 = ctx.r11.s64 + 3092;
	// b 0x821bd5cc
	goto loc_821BD5CC;
loc_821BD54C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,3076
	ctx.r4.s64 = ctx.r11.s64 + 3076;
	// b 0x821bd5cc
	goto loc_821BD5CC;
loc_821BD558:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,3060
	ctx.r4.s64 = ctx.r11.s64 + 3060;
	// b 0x821bd5cc
	goto loc_821BD5CC;
loc_821BD564:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,3040
	ctx.r4.s64 = ctx.r11.s64 + 3040;
	// b 0x821bd5cc
	goto loc_821BD5CC;
loc_821BD570:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,3016
	ctx.r4.s64 = ctx.r11.s64 + 3016;
	// b 0x821bd5cc
	goto loc_821BD5CC;
loc_821BD57C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,3000
	ctx.r4.s64 = ctx.r11.s64 + 3000;
	// b 0x821bd5cc
	goto loc_821BD5CC;
loc_821BD588:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,2988
	ctx.r4.s64 = ctx.r11.s64 + 2988;
	// b 0x821bd5cc
	goto loc_821BD5CC;
loc_821BD594:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,2976
	ctx.r4.s64 = ctx.r11.s64 + 2976;
	// b 0x821bd5cc
	goto loc_821BD5CC;
loc_821BD5A0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-23756
	ctx.r4.s64 = ctx.r11.s64 + -23756;
	// b 0x821bd5cc
	goto loc_821BD5CC;
loc_821BD5AC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-23772
	ctx.r4.s64 = ctx.r11.s64 + -23772;
	// b 0x821bd5cc
	goto loc_821BD5CC;
loc_821BD5B8:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-23788
	ctx.r4.s64 = ctx.r11.s64 + -23788;
	// b 0x821bd5cc
	goto loc_821BD5CC;
loc_821BD5C4:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,2956
	ctx.r4.s64 = ctx.r11.s64 + 2956;
loc_821BD5CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bc640
	ctx.lr = 0x821BD5D4;
	sub_821BC640(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,27508
	ctx.r4.s64 = ctx.r11.s64 + 27508;
	// bl 0x821bbf30
	ctx.lr = 0x821BD5E4;
	sub_821BBF30(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r5,r11,20,26,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x3F;
	// rlwinm. r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821bd604
	if (ctx.cr0.eq) goto loc_821BD604;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,2308
	ctx.r4.s64 = ctx.r11.s64 + 2308;
	// b 0x821bd60c
	goto loc_821BD60C;
loc_821BD604:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,2304
	ctx.r4.s64 = ctx.r11.s64 + 2304;
loc_821BD60C:
	// bl 0x821bbf30
	ctx.lr = 0x821BD610;
	sub_821BBF30(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r27,r11,29148
	ctx.r27.s64 = ctx.r11.s64 + 29148;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x821bbf30
	ctx.lr = 0x821BD624;
	sub_821BBF30(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// addi r29,r11,-29368
	ctx.r29.s64 = ctx.r11.s64 + -29368;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r11,-11680
	ctx.r28.s64 = ctx.r11.s64 + -11680;
	// lbzx r11,r10,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r29.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x821bbf30
	ctx.lr = 0x821BD650;
	sub_821BBF30(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,29,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x7;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x821bbf30
	ctx.lr = 0x821BD66C;
	sub_821BBF30(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,26,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x7;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x821bbf30
	ctx.lr = 0x821BD688;
	sub_821BBF30(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,23,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x821bbf30
	ctx.lr = 0x821BD6A4;
	sub_821BBF30(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-6708
	ctx.r4.s64 = ctx.r11.s64 + -6708;
	// bl 0x821bbf30
	ctx.lr = 0x821BD6B4;
	sub_821BBF30(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// rlwinm r5,r11,28,24,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x80;
	// rlwinm r11,r11,27,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3F;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// or r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 | ctx.r11.u64;
	// bl 0x821bcab8
	ctx.lr = 0x821BD6EC;
	sub_821BCAB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x821bbf30
	ctx.lr = 0x821BD6F8;
	sub_821BBF30(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,6,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x821bbf30
	ctx.lr = 0x821BD714;
	sub_821BBF30(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwinm r11,r11,4,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x821bbf30
	ctx.lr = 0x821BD730;
	sub_821BBF30(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r10,18
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 18, ctx.xer);
	// beq cr6,0x821bd758
	if (ctx.cr6.eq) goto loc_821BD758;
	// rlwinm r11,r11,2,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x821bbf30
	ctx.lr = 0x821BD758;
	sub_821BBF30(ctx, base);
loc_821BD758:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,2948
	ctx.r4.s64 = ctx.r11.s64 + 2948;
	// rlwinm r5,r10,12,27,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x1F;
	// bl 0x821bbf30
	ctx.lr = 0x821BD770;
	sub_821BBF30(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bd78c
	if (ctx.cr0.eq) goto loc_821BD78C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,2912
	ctx.r4.s64 = ctx.r11.s64 + 2912;
	// bl 0x821bbf30
	ctx.lr = 0x821BD78C;
	sub_821BBF30(ctx, base);
loc_821BD78C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r11,r11,20,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x821bd7b8
	if (ctx.cr6.eq) goto loc_821BD7B8;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,1176
	ctx.r10.s64 = ctx.r29.s64 + 1176;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,2896
	ctx.r4.s64 = ctx.r11.s64 + 2896;
	// lwzx r5,r9,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x821bbf30
	ctx.lr = 0x821BD7B8;
	sub_821BBF30(ctx, base);
loc_821BD7B8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r11,r11,18,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x821bd7e4
	if (ctx.cr6.eq) goto loc_821BD7E4;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,1192
	ctx.r10.s64 = ctx.r29.s64 + 1192;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,2880
	ctx.r4.s64 = ctx.r11.s64 + 2880;
	// lwzx r5,r9,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x821bbf30
	ctx.lr = 0x821BD7E4;
	sub_821BBF30(ctx, base);
loc_821BD7E4:
	// lhz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x821bd810
	if (ctx.cr6.eq) goto loc_821BD810;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,1208
	ctx.r10.s64 = ctx.r29.s64 + 1208;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,2864
	ctx.r4.s64 = ctx.r11.s64 + 2864;
	// lwzx r5,r9,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x821bbf30
	ctx.lr = 0x821BD810;
	sub_821BBF30(ctx, base);
loc_821BD810:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r11,r11,14,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x7;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x821bd83c
	if (ctx.cr6.eq) goto loc_821BD83C;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,1224
	ctx.r10.s64 = ctx.r29.s64 + 1224;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,2844
	ctx.r4.s64 = ctx.r11.s64 + 2844;
	// lwzx r5,r9,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x821bbf30
	ctx.lr = 0x821BD83C;
	sub_821BBF30(ctx, base);
loc_821BD83C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r11,r11,11,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x7;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x821bd868
	if (ctx.cr6.eq) goto loc_821BD868;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,1256
	ctx.r10.s64 = ctx.r29.s64 + 1256;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-2084
	ctx.r4.s64 = ctx.r11.s64 + -2084;
	// lwzx r5,r9,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x821bbf30
	ctx.lr = 0x821BD868;
	sub_821BBF30(ctx, base);
loc_821BD868:
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x821bd894
	if (ctx.cr6.eq) goto loc_821BD894;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,1288
	ctx.r10.s64 = ctx.r29.s64 + 1288;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,2824
	ctx.r4.s64 = ctx.r11.s64 + 2824;
	// lwzx r5,r9,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x821bbf30
	ctx.lr = 0x821BD894;
	sub_821BBF30(ctx, base);
loc_821BD894:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r11,r11,6,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x821bd8c0
	if (ctx.cr6.eq) goto loc_821BD8C0;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,1304
	ctx.r10.s64 = ctx.r29.s64 + 1304;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,2804
	ctx.r4.s64 = ctx.r11.s64 + 2804;
	// lwzx r5,r9,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x821bbf30
	ctx.lr = 0x821BD8C0;
	sub_821BBF30(ctx, base);
loc_821BD8C0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm. r5,r11,4,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x821bd8dc
	if (ctx.cr0.eq) goto loc_821BD8DC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,2784
	ctx.r4.s64 = ctx.r11.s64 + 2784;
	// bl 0x821bbf30
	ctx.lr = 0x821BD8DC;
	sub_821BBF30(ctx, base);
loc_821BD8DC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm. r11,r11,3,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bd904
	if (ctx.cr0.eq) goto loc_821BD904;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,1320
	ctx.r10.s64 = ctx.r29.s64 + 1320;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,2764
	ctx.r4.s64 = ctx.r11.s64 + 2764;
	// lwzx r5,r9,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x821bbf30
	ctx.lr = 0x821BD904;
	sub_821BBF30(ctx, base);
loc_821BD904:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// clrlwi. r5,r11,31
	ctx.r5.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x821bd920
	if (ctx.cr0.eq) goto loc_821BD920;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,2736
	ctx.r4.s64 = ctx.r11.s64 + 2736;
	// bl 0x821bbf30
	ctx.lr = 0x821BD920;
	sub_821BBF30(ctx, base);
loc_821BD920:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bd93c
	if (ctx.cr0.eq) goto loc_821BD93C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,2708
	ctx.r4.s64 = ctx.r11.s64 + 2708;
	// bl 0x821bbf30
	ctx.lr = 0x821BD93C;
	sub_821BBF30(ctx, base);
loc_821BD93C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm. r5,r11,30,25,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x7F;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x821bd958
	if (ctx.cr0.eq) goto loc_821BD958;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,2692
	ctx.r4.s64 = ctx.r11.s64 + 2692;
	// bl 0x821bbf30
	ctx.lr = 0x821BD958;
	sub_821BBF30(ctx, base);
loc_821BD958:
	// lhz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// clrlwi. r5,r11,27
	ctx.r5.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x821bd974
	if (ctx.cr0.eq) goto loc_821BD974;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,2676
	ctx.r4.s64 = ctx.r11.s64 + 2676;
	// bl 0x821bbf30
	ctx.lr = 0x821BD974;
	sub_821BBF30(ctx, base);
loc_821BD974:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm. r5,r11,11,27,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x821bd990
	if (ctx.cr0.eq) goto loc_821BD990;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,2660
	ctx.r4.s64 = ctx.r11.s64 + 2660;
	// bl 0x821bbf30
	ctx.lr = 0x821BD990;
	sub_821BBF30(ctx, base);
loc_821BD990:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm. r5,r11,6,27,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x821bdd48
	if (ctx.cr0.eq) goto loc_821BDD48;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,2644
	ctx.r4.s64 = ctx.r11.s64 + 2644;
	// b 0x821bdd40
	goto loc_821BDD40;
loc_821BD9A8:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,2620
	ctx.r4.s64 = ctx.r11.s64 + 2620;
	// bl 0x821bbf30
	ctx.lr = 0x821BD9B8;
	sub_821BBF30(ctx, base);
	// b 0x821bdd48
	goto loc_821BDD48;
loc_821BD9BC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-23500
	ctx.r4.s64 = ctx.r11.s64 + -23500;
	// bl 0x821bc640
	ctx.lr = 0x821BD9CC;
	sub_821BC640(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,27508
	ctx.r4.s64 = ctx.r11.s64 + 27508;
	// bl 0x821bbf30
	ctx.lr = 0x821BD9DC;
	sub_821BBF30(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r5,r11,20,26,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x3F;
	// rlwinm. r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821bd9fc
	if (ctx.cr0.eq) goto loc_821BD9FC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,2308
	ctx.r4.s64 = ctx.r11.s64 + 2308;
	// b 0x821bda04
	goto loc_821BDA04;
loc_821BD9FC:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,2304
	ctx.r4.s64 = ctx.r11.s64 + 2304;
loc_821BDA04:
	// bl 0x821bbf30
	ctx.lr = 0x821BDA08;
	sub_821BBF30(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,29148
	ctx.r4.s64 = ctx.r11.s64 + 29148;
	// bl 0x821bbf30
	ctx.lr = 0x821BDA18;
	sub_821BBF30(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// addi r29,r11,-29368
	ctx.r29.s64 = ctx.r11.s64 + -29368;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r11,-11680
	ctx.r28.s64 = ctx.r11.s64 + -11680;
	// lbzx r11,r10,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r29.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x821bbf30
	ctx.lr = 0x821BDA44;
	sub_821BBF30(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,29,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x7;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x821bbf30
	ctx.lr = 0x821BDA60;
	sub_821BBF30(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,26,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x7;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x821bbf30
	ctx.lr = 0x821BDA7C;
	sub_821BBF30(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,23,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x821bbf30
	ctx.lr = 0x821BDA98;
	sub_821BBF30(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r27,r11,-6708
	ctx.r27.s64 = ctx.r11.s64 + -6708;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x821bbf30
	ctx.lr = 0x821BDAAC;
	sub_821BBF30(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// rlwinm r5,r11,28,24,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x80;
	// rlwinm r11,r11,27,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3F;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// or r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 | ctx.r11.u64;
	// bl 0x821bcab8
	ctx.lr = 0x821BDAE4;
	sub_821BCAB8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r11,2,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,2616
	ctx.r4.s64 = ctx.r11.s64 + 2616;
	// lbzx r11,r10,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x821bbf30
	ctx.lr = 0x821BDB04;
	sub_821BBF30(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821bdb38
	if (!ctx.cr0.eq) goto loc_821BDB38;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// addi r4,r9,2604
	ctx.r4.s64 = ctx.r9.s64 + 2604;
	// addi r10,r10,-27788
	ctx.r10.s64 = ctx.r10.s64 + -27788;
	// rlwinm r9,r11,9,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r5,r11,12,27,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1F;
	// lwzx r6,r9,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x821bbf30
	ctx.lr = 0x821BDB38;
	sub_821BBF30(ctx, base);
loc_821BDB38:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r26,r11,18472
	ctx.r26.s64 = ctx.r11.s64 + 18472;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x821bbf30
	ctx.lr = 0x821BDB4C;
	sub_821BBF30(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r25,r11,27488
	ctx.r25.s64 = ctx.r11.s64 + 27488;
	// beq 0x821bdb74
	if (ctx.cr0.eq) goto loc_821BDB74;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r11,-9668
	ctx.r5.s64 = ctx.r11.s64 + -9668;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bbf30
	ctx.lr = 0x821BDB74;
	sub_821BBF30(ctx, base);
loc_821BDB74:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r28,r11,2592
	ctx.r28.s64 = ctx.r11.s64 + 2592;
	// bne 0x821bdbd8
	if (!ctx.cr0.eq) goto loc_821BDBD8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bd328
	ctx.lr = 0x821BDB90;
	sub_821BD328(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x821bbf30
	ctx.lr = 0x821BDB9C;
	sub_821BBF30(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,2564
	ctx.r4.s64 = ctx.r10.s64 + 2564;
	// rlwinm r6,r11,24,9,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x7FFFFF;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x821bbf30
	ctx.lr = 0x821BDBB8;
	sub_821BBF30(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r10,r29,1336
	ctx.r10.s64 = ctx.r29.s64 + 1336;
	// addi r4,r11,2548
	ctx.r4.s64 = ctx.r11.s64 + 2548;
	// lhz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,2,24,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFC;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x821bbf30
	ctx.lr = 0x821BDBD8;
	sub_821BBF30(ctx, base);
loc_821BDBD8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bd328
	ctx.lr = 0x821BDBE0;
	sub_821BD328(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x821bbf30
	ctx.lr = 0x821BDBEC;
	sub_821BBF30(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r29,r11,32280
	ctx.r29.s64 = ctx.r11.s64 + 32280;
	// beq 0x821bdc14
	if (ctx.cr0.eq) goto loc_821BDC14;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,2536
	ctx.r4.s64 = ctx.r11.s64 + 2536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bbf30
	ctx.lr = 0x821BDC14;
	sub_821BBF30(ctx, base);
loc_821BDC14:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,2524
	ctx.r4.s64 = ctx.r11.s64 + 2524;
	// bl 0x821bbf30
	ctx.lr = 0x821BDC24;
	sub_821BBF30(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bdc40
	if (ctx.cr0.eq) goto loc_821BDC40;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,2500
	ctx.r4.s64 = ctx.r11.s64 + 2500;
	// b 0x821bdc48
	goto loc_821BDC48;
loc_821BDC40:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,2476
	ctx.r4.s64 = ctx.r11.s64 + 2476;
loc_821BDC48:
	// bl 0x821bbf30
	ctx.lr = 0x821BDC4C;
	sub_821BBF30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x821bbf30
	ctx.lr = 0x821BDC58;
	sub_821BBF30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bd328
	ctx.lr = 0x821BDC60;
	sub_821BD328(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x821bbf30
	ctx.lr = 0x821BDC6C;
	sub_821BBF30(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,2464
	ctx.r4.s64 = ctx.r11.s64 + 2464;
	// bl 0x821bbf30
	ctx.lr = 0x821BDC7C;
	sub_821BBF30(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bdc94
	if (ctx.cr0.eq) goto loc_821BDC94;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x821bdc9c
	goto loc_821BDC9C;
loc_821BDC94:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,32272
	ctx.r4.s64 = ctx.r11.s64 + 32272;
loc_821BDC9C:
	// bl 0x821bbf30
	ctx.lr = 0x821BDCA0;
	sub_821BBF30(ctx, base);
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// clrlwi. r5,r11,26
	ctx.r5.u64 = ctx.r11.u32 & 0x3F;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x821bdcbc
	if (ctx.cr0.eq) goto loc_821BDCBC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,2448
	ctx.r4.s64 = ctx.r11.s64 + 2448;
	// bl 0x821bbf30
	ctx.lr = 0x821BDCBC;
	sub_821BBF30(ctx, base);
loc_821BDCBC:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x821bdd28
	if (ctx.cr6.eq) goto loc_821BDD28;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821bdd28
	if (!ctx.cr0.eq) goto loc_821BDD28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x821bbf30
	ctx.lr = 0x821BDCDC;
	sub_821BBF30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bd328
	ctx.lr = 0x821BDCE4;
	sub_821BD328(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x821bbf30
	ctx.lr = 0x821BDCF0;
	sub_821BBF30(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821bdd1c
	if (!ctx.cr0.eq) goto loc_821BDD1C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r11,2412
	ctx.r4.s64 = ctx.r11.s64 + 2412;
	// rlwinm r11,r10,5,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x7;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x821bbf30
	ctx.lr = 0x821BDD18;
	sub_821BBF30(ctx, base);
	// b 0x821bdd28
	goto loc_821BDD28;
loc_821BDD1C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,2396
	ctx.r4.s64 = ctx.r11.s64 + 2396;
	// bl 0x821bbf30
	ctx.lr = 0x821BDD28;
	sub_821BBF30(ctx, base);
loc_821BDD28:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bdd48
	if (ctx.cr0.eq) goto loc_821BDD48;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r11,-9676
	ctx.r5.s64 = ctx.r11.s64 + -9676;
loc_821BDD40:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bbf30
	ctx.lr = 0x821BDD48;
	sub_821BBF30(ctx, base);
loc_821BDD48:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822e9928
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BDD50"))) PPC_WEAK_FUNC(sub_821BDD50);
PPC_FUNC_IMPL(__imp__sub_821BDD50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98bc
	ctx.lr = 0x821BDD58;
	__savegprlr_17(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r17,r6
	ctx.r17.u64 = ctx.r6.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r18,r7
	ctx.r18.u64 = ctx.r7.u64;
	// mr r19,r8
	ctx.r19.u64 = ctx.r8.u64;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x821bdf4c
	if (ctx.cr6.eq) goto loc_821BDF4C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r23,r11,3212
	ctx.r23.s64 = ctx.r11.s64 + 3212;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r27,r11,-10544
	ctx.r27.s64 = ctx.r11.s64 + -10544;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r26,r11,29152
	ctx.r26.s64 = ctx.r11.s64 + 29152;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r25,r11,3128
	ctx.r25.s64 = ctx.r11.s64 + 3128;
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// addi r22,r11,-29232
	ctx.r22.s64 = ctx.r11.s64 + -29232;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r24,r11,-9192
	ctx.r24.s64 = ctx.r11.s64 + -9192;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r21,r11,3116
	ctx.r21.s64 = ctx.r11.s64 + 3116;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r20,r11,3120
	ctx.r20.s64 = ctx.r11.s64 + 3120;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r11,-2104
	ctx.r30.s64 = ctx.r11.s64 + -2104;
loc_821BDDC0:
	// clrlwi r11,r18,31
	ctx.r11.u64 = ctx.r18.u32 & 0x1;
	// clrlwi r31,r19,31
	ctx.r31.u64 = ctx.r19.u32 & 0x1;
	// srawi r19,r19,1
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x1) != 0);
	ctx.r19.s64 = ctx.r19.s32 >> 1;
	// srawi r18,r18,2
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x3) != 0);
	ctx.r18.s64 = ctx.r18.s32 >> 2;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821bde00
	if (!ctx.cr6.eq) goto loc_821BDE00;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821bd328
	ctx.lr = 0x821BDDE0;
	sub_821BD328(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821bbf30
	ctx.lr = 0x821BDDEC;
	sub_821BBF30(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821bd470
	ctx.lr = 0x821BDDFC;
	sub_821BD470(ctx, base);
	// b 0x821bdf40
	goto loc_821BDF40;
loc_821BDE00:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r11,r11,5,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1F;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x821bde34
	if (ctx.cr6.lt) goto loc_821BDE34;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x821bde28
	if (ctx.cr6.eq) goto loc_821BDE28;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
loc_821BDE28:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821bbf30
	ctx.lr = 0x821BDE34;
	sub_821BBF30(ctx, base);
loc_821BDE34:
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// clrlwi. r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821bde54
	if (!ctx.cr0.eq) goto loc_821BDE54;
	// lbz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 8);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x821bde58
	if (ctx.cr6.eq) goto loc_821BDE58;
loc_821BDE54:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821BDE58:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821bde80
	if (!ctx.cr0.eq) goto loc_821BDE80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821bd328
	ctx.lr = 0x821BDE68;
	sub_821BD328(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821bbf30
	ctx.lr = 0x821BDE74;
	sub_821BBF30(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821bceb8
	ctx.lr = 0x821BDE80;
	sub_821BCEB8(ctx, base);
loc_821BDE80:
	// lbz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 8);
	// rlwinm r11,r11,2,25,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x7C;
	// lwzx r11,r11,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r22.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// blt cr6,0x821bdebc
	if (ctx.cr6.lt) goto loc_821BDEBC;
	// rlwinm. r11,r11,0,8,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bdf40
	if (ctx.cr0.eq) goto loc_821BDF40;
	// li r7,1151
	ctx.r7.s64 = 1151;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821BDEB8;
	sub_821BBC58(ctx, base);
	// b 0x821bdf40
	goto loc_821BDF40;
loc_821BDEBC:
	// rlwinm. r10,r11,0,8,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF00000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x821bdee4
	if (!ctx.cr0.eq) goto loc_821BDEE4;
	// rlwinm r10,r11,0,0,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFC000000;
	// lis r9,5120
	ctx.r9.s64 = 335544320;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x821bdee4
	if (!ctx.cr6.eq) goto loc_821BDEE4;
	// rlwinm r11,r11,0,18,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F00;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x821bdee8
	if (!ctx.cr6.eq) goto loc_821BDEE8;
loc_821BDEE4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821BDEE8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821bdf40
	if (!ctx.cr0.eq) goto loc_821BDF40;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821bd328
	ctx.lr = 0x821BDEF8;
	sub_821BD328(ctx, base);
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// clrlwi. r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821bdf18
	if (!ctx.cr0.eq) goto loc_821BDF18;
	// lbz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 8);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x821bdf1c
	if (ctx.cr6.eq) goto loc_821BDF1C;
loc_821BDF18:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821BDF1C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// beq 0x821bdf30
	if (ctx.cr0.eq) goto loc_821BDF30;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_821BDF30:
	// bl 0x821bbf30
	ctx.lr = 0x821BDF34;
	sub_821BBF30(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821bd190
	ctx.lr = 0x821BDF40;
	sub_821BD190(ctx, base);
loc_821BDF40:
	// addic. r17,r17,-1
	ctx.xer.ca = ctx.r17.u32 > 0;
	ctx.r17.s64 = ctx.r17.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// bne 0x821bddc0
	if (!ctx.cr0.eq) goto loc_821BDDC0;
loc_821BDF4C:
	// stw r28,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r28.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822e990c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BDF58"))) PPC_WEAK_FUNC(sub_821BDF58);
PPC_FUNC_IMPL(__imp__sub_821BDF58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98b0
	ctx.lr = 0x821BDF60;
	__savegprlr_14(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// not r30,r6
	ctx.r30.u64 = ~ctx.r6.u64;
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// stb r11,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r11.u8);
	// stw r26,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r26.u32);
	// stw r29,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r29.u32);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// bl 0x821bbf90
	ctx.lr = 0x821BDF9C;
	sub_821BBF90(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// bl 0x821bd388
	ctx.lr = 0x821BDFB8;
	sub_821BD388(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// addi r20,r11,-27776
	ctx.r20.s64 = ctx.r11.s64 + -27776;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r22,r11,2232
	ctx.r22.s64 = ctx.r11.s64 + 2232;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,3708
	ctx.r11.s64 = ctx.r11.s64 + 3708;
	// stw r11,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r11.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,3688
	ctx.r11.s64 = ctx.r11.s64 + 3688;
	// stw r11,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r11.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,3668
	ctx.r11.s64 = ctx.r11.s64 + 3668;
	// stw r11,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r11.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,3652
	ctx.r11.s64 = ctx.r11.s64 + 3652;
	// stw r11,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,3640
	ctx.r11.s64 = ctx.r11.s64 + 3640;
	// stw r11,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r19,r11,27488
	ctx.r19.s64 = ctx.r11.s64 + 27488;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r18,r11,-23856
	ctx.r18.s64 = ctx.r11.s64 + -23856;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,3620
	ctx.r11.s64 = ctx.r11.s64 + 3620;
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,3604
	ctx.r11.s64 = ctx.r11.s64 + 3604;
	// stw r11,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r11.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,3584
	ctx.r11.s64 = ctx.r11.s64 + 3584;
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,-6708
	ctx.r11.s64 = ctx.r11.s64 + -6708;
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,3576
	ctx.r11.s64 = ctx.r11.s64 + 3576;
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,29152
	ctx.r11.s64 = ctx.r11.s64 + 29152;
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,29160
	ctx.r11.s64 = ctx.r11.s64 + 29160;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r14,r11,3572
	ctx.r14.s64 = ctx.r11.s64 + 3572;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,3564
	ctx.r11.s64 = ctx.r11.s64 + 3564;
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-23848
	ctx.r11.s64 = ctx.r11.s64 + -23848;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,20688
	ctx.r11.s64 = ctx.r11.s64 + 20688;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,3544
	ctx.r11.s64 = ctx.r11.s64 + 3544;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-23836
	ctx.r11.s64 = ctx.r11.s64 + -23836;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,3532
	ctx.r11.s64 = ctx.r11.s64 + 3532;
	// stw r11,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r11.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,3508
	ctx.r11.s64 = ctx.r11.s64 + 3508;
	// stw r11,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,3488
	ctx.r11.s64 = ctx.r11.s64 + 3488;
	// stw r11,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,3468
	ctx.r11.s64 = ctx.r11.s64 + 3468;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r15,r11,3448
	ctx.r15.s64 = ctx.r11.s64 + 3448;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,3424
	ctx.r11.s64 = ctx.r11.s64 + 3424;
	// stw r11,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r11.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r17,r11,3412
	ctx.r17.s64 = ctx.r11.s64 + 3412;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,3392
	ctx.r11.s64 = ctx.r11.s64 + 3392;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,3368
	ctx.r11.s64 = ctx.r11.s64 + 3368;
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r21,r11,3352
	ctx.r21.s64 = ctx.r11.s64 + 3352;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,3328
	ctx.r11.s64 = ctx.r11.s64 + 3328;
	// stw r11,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r23,r11,27508
	ctx.r23.s64 = ctx.r11.s64 + 27508;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r16,r11,20692
	ctx.r16.s64 = ctx.r11.s64 + 20692;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,3316
	ctx.r11.s64 = ctx.r11.s64 + 3316;
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,3308
	ctx.r11.s64 = ctx.r11.s64 + 3308;
	// stw r11,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r11.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,3296
	ctx.r11.s64 = ctx.r11.s64 + 3296;
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-23820
	ctx.r11.s64 = ctx.r11.s64 + -23820;
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r11.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,3240
	ctx.r11.s64 = ctx.r11.s64 + 3240;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,3228
	ctx.r11.s64 = ctx.r11.s64 + 3228;
	// stw r11,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r11.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,20824
	ctx.r11.s64 = ctx.r11.s64 + 20824;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r24,r11,-2104
	ctx.r24.s64 = ctx.r11.s64 + -2104;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,3220
	ctx.r11.s64 = ctx.r11.s64 + 3220;
	// stw r11,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r11.u32);
	// b 0x821be1ac
	goto loc_821BE1AC;
loc_821BE1A8:
	// lwz r26,460(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
loc_821BE1AC:
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// b 0x821be1bc
	goto loc_821BE1BC;
loc_821BE1B8:
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
loc_821BE1BC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r26,128(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// beq cr6,0x821be408
	if (ctx.cr6.eq) goto loc_821BE408;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821bbb68
	ctx.lr = 0x821BE1E8;
	sub_821BBB68(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lbz r25,113(r1)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi r25,0
	ctx.cr0.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
	// beq 0x821be268
	if (ctx.cr0.eq) goto loc_821BE268;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bd328
	ctx.lr = 0x821BE208;
	sub_821BD328(ctx, base);
	// clrlwi r10,r28,27
	ctx.r10.u64 = ctx.r28.u32 & 0x1F;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r11,r28,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 27) & 0x7FFFFFF;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821be268
	if (ctx.cr0.eq) goto loc_821BE268;
	// srawi r11,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 1;
	// lwz r4,204(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r28.s32 >> 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r5,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r5.s64 = temp.s64;
	// subf r6,r11,r28
	ctx.r6.s64 = ctx.r28.s64 - ctx.r11.s64;
	// bl 0x821bbf30
	ctx.lr = 0x821BE260;
	sub_821BBF30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bd328
	ctx.lr = 0x821BE268;
	sub_821BD328(ctx, base);
loc_821BE268:
	// cmplwi cr6,r29,12
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 12, ctx.xer);
	// bgt cr6,0x821be984
	if (ctx.cr6.gt) goto loc_821BE984;
	// lis r12,-32251
	ctx.r12.s64 = -2113601536;
	// addi r12,r12,2368
	ctx.r12.s64 = ctx.r12.s64 + 2368;
	// rlwinm r0,r29,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32228
	ctx.r12.s64 = -2112094208;
	// addi r12,r12,-7528
	ctx.r12.s64 = ctx.r12.s64 + -7528;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r29.u64) {
	case 0:
		goto loc_821BE298;
	case 1:
		goto loc_821BE2F4;
	case 2:
		goto loc_821BE2C8;
	case 3:
		goto loc_821BE440;
	case 4:
		goto loc_821BE468;
	case 5:
		goto loc_821BE484;
	case 6:
		goto loc_821BE4A0;
	case 7:
		goto loc_821BE4BC;
	case 8:
		goto loc_821BE5A4;
	case 9:
		goto loc_821BE6E4;
	case 10:
		goto loc_821BE740;
	case 11:
		goto loc_821BE75C;
	case 12:
		goto loc_821BE8B4;
	default:
		__builtin_unreachable();
	}
loc_821BE298:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x821be3ec
	if (ctx.cr6.eq) goto loc_821BE3EC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821be3ec
	if (ctx.cr0.eq) goto loc_821BE3EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x821bbf30
	ctx.lr = 0x821BE2B8;
	sub_821BBF30(ctx, base);
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
loc_821BE2BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bc6b0
	ctx.lr = 0x821BE2C4;
	sub_821BC6B0(ctx, base);
	// b 0x821be3ec
	goto loc_821BE3EC;
loc_821BE2C8:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x821be2f4
	if (ctx.cr6.eq) goto loc_821BE2F4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821be2f4
	if (ctx.cr0.eq) goto loc_821BE2F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x821bbf30
	ctx.lr = 0x821BE2E8;
	sub_821BBF30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,236(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// bl 0x821bbf30
	ctx.lr = 0x821BE2F4;
	sub_821BBF30(ctx, base);
loc_821BE2F4:
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821bbb68
	ctx.lr = 0x821BE304;
	sub_821BBB68(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, -1, ctx.xer);
	// bne cr6,0x821be314
	if (!ctx.cr6.eq) goto loc_821BE314;
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
loc_821BE314:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821bbb68
	ctx.lr = 0x821BE324;
	sub_821BBB68(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821bbb68
	ctx.lr = 0x821BE338;
	sub_821BBB68(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821bbb68
	ctx.lr = 0x821BE34C;
	sub_821BBB68(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r5,9
	ctx.r5.s64 = 9;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821bbb68
	ctx.lr = 0x821BE360;
	sub_821BBB68(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821bbb68
	ctx.lr = 0x821BE370;
	sub_821BBB68(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821be3b8
	if (ctx.cr6.eq) goto loc_821BE3B8;
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x821be3b8
	if (!ctx.cr6.gt) goto loc_821BE3B8;
	// lwz r10,460(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// mulli r11,r29,12
	ctx.r11.s64 = ctx.r29.s64 * 12;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bdd50
	ctx.lr = 0x821BE3AC;
	sub_821BDD50(ctx, base);
	// add r11,r28,r29
	ctx.r11.u64 = ctx.r28.u64 + ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
loc_821BE3B8:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x821be3e4
	if (ctx.cr6.eq) goto loc_821BE3E4;
	// add r11,r28,r29
	ctx.r11.u64 = ctx.r28.u64 + ctx.r29.u64;
	// mulli r6,r11,3
	ctx.r6.s64 = ctx.r11.s64 * 3;
	// lwz r11,468(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x821be3e4
	if (!ctx.cr6.gt) goto loc_821BE3E4;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bbf30
	ctx.lr = 0x821BE3E4;
	sub_821BBF30(ctx, base);
loc_821BE3E4:
	// lwz r28,116(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r27,0
	ctx.r27.s64 = 0;
loc_821BE3EC:
	// addi r10,r28,1
	ctx.r10.s64 = ctx.r28.s64 + 1;
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// addi r30,r30,6
	ctx.r30.s64 = ctx.r30.s64 + 6;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rotlwi r28,r10,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// bne 0x821be1b8
	if (!ctx.cr0.eq) goto loc_821BE1B8;
loc_821BE408:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lbz r10,113(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stb r10,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r10.u8);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// bne 0x821be1a8
	if (!ctx.cr0.eq) goto loc_821BE1A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bd328
	ctx.lr = 0x821BE434;
	sub_821BD328(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x822e9900
	__restgprlr_14(ctx, base);
	return;
loc_821BE440:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x821be460
	if (ctx.cr6.eq) goto loc_821BE460;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x821bbf30
	ctx.lr = 0x821BE454;
	sub_821BBF30(ctx, base);
	// lwz r4,212(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
loc_821BE458:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bc6b0
	ctx.lr = 0x821BE460;
	sub_821BC6B0(ctx, base);
loc_821BE460:
	// stb r27,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r27.u8);
	// b 0x821be3ec
	goto loc_821BE3EC;
loc_821BE468:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x821be460
	if (ctx.cr6.eq) goto loc_821BE460;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x821bbf30
	ctx.lr = 0x821BE47C;
	sub_821BBF30(ctx, base);
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// b 0x821be458
	goto loc_821BE458;
loc_821BE484:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x821be460
	if (ctx.cr6.eq) goto loc_821BE460;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x821bbf30
	ctx.lr = 0x821BE498;
	sub_821BBF30(ctx, base);
	// lwz r4,252(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// b 0x821be458
	goto loc_821BE458;
loc_821BE4A0:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x821be460
	if (ctx.cr6.eq) goto loc_821BE460;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x821bbf30
	ctx.lr = 0x821BE4B4;
	sub_821BBF30(ctx, base);
	// lwz r4,172(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// b 0x821be458
	goto loc_821BE458;
loc_821BE4BC:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x821be3ec
	if (ctx.cr6.eq) goto loc_821BE3EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x821bbf30
	ctx.lr = 0x821BE4D0;
	sub_821BBF30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// bl 0x821bc6b0
	ctx.lr = 0x821BE4DC;
	sub_821BC6B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x821bbf30
	ctx.lr = 0x821BE4E8;
	sub_821BBF30(ctx, base);
	// li r5,13
	ctx.r5.s64 = 13;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821bbb68
	ctx.lr = 0x821BE4F8;
	sub_821BBB68(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// clrlwi r6,r11,31
	ctx.r6.u64 = ctx.r11.u32 & 0x1;
	// addze r5,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r5.s64 = temp.s64;
	// bl 0x821bbf30
	ctx.lr = 0x821BE514;
	sub_821BBF30(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821bbb68
	ctx.lr = 0x821BE524;
	sub_821BBB68(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x821be538
	if (ctx.cr0.eq) goto loc_821BE538;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,220(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// bl 0x821bbf30
	ctx.lr = 0x821BE538;
	sub_821BBF30(ctx, base);
loc_821BE538:
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821bbb68
	ctx.lr = 0x821BE548;
	sub_821BBB68(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x821bbf30
	ctx.lr = 0x821BE558;
	sub_821BBF30(ctx, base);
	// li r5,22
	ctx.r5.s64 = 22;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821bbb68
	ctx.lr = 0x821BE568;
	sub_821BBB68(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x821be57c
	if (ctx.cr0.eq) goto loc_821BE57C;
	// lwz r4,180(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
loc_821BE574:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bbf30
	ctx.lr = 0x821BE57C;
	sub_821BBF30(ctx, base);
loc_821BE57C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821bbb68
	ctx.lr = 0x821BE58C;
	sub_821BBB68(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x821be3ec
	if (ctx.cr0.eq) goto loc_821BE3EC;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_821BE598:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bbf30
	ctx.lr = 0x821BE5A0;
	sub_821BBF30(ctx, base);
	// b 0x821be3ec
	goto loc_821BE3EC;
loc_821BE5A4:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x821be3ec
	if (ctx.cr6.eq) goto loc_821BE3EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x821bbf30
	ctx.lr = 0x821BE5B8;
	sub_821BBF30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// bl 0x821bc6b0
	ctx.lr = 0x821BE5C4;
	sub_821BC6B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x821bbf30
	ctx.lr = 0x821BE5D0;
	sub_821BBF30(ctx, base);
	// li r5,13
	ctx.r5.s64 = 13;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821bbb68
	ctx.lr = 0x821BE5E0;
	sub_821BBB68(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// clrlwi r6,r11,31
	ctx.r6.u64 = ctx.r11.u32 & 0x1;
	// addze r5,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r5.s64 = temp.s64;
	// bl 0x821bbf30
	ctx.lr = 0x821BE5FC;
	sub_821BBF30(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821bbb68
	ctx.lr = 0x821BE60C;
	sub_821BBB68(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x821be620
	if (ctx.cr0.eq) goto loc_821BE620;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,244(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// bl 0x821bbf30
	ctx.lr = 0x821BE620;
	sub_821BBF30(ctx, base);
loc_821BE620:
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821bbb68
	ctx.lr = 0x821BE630;
	sub_821BBB68(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x821bbf30
	ctx.lr = 0x821BE640;
	sub_821BBF30(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821bbb68
	ctx.lr = 0x821BE650;
	sub_821BBB68(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// bl 0x821bbf30
	ctx.lr = 0x821BE660;
	sub_821BBF30(ctx, base);
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821bbb68
	ctx.lr = 0x821BE670;
	sub_821BBB68(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x821be684
	if (ctx.cr0.eq) goto loc_821BE684;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x821bbf30
	ctx.lr = 0x821BE684;
	sub_821BBF30(ctx, base);
loc_821BE684:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821bbb68
	ctx.lr = 0x821BE694;
	sub_821BBB68(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,228(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// bl 0x821bbf30
	ctx.lr = 0x821BE6A4;
	sub_821BBF30(ctx, base);
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821bbb68
	ctx.lr = 0x821BE6B4;
	sub_821BBB68(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x821be6c8
	if (ctx.cr0.eq) goto loc_821BE6C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,196(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x821bbf30
	ctx.lr = 0x821BE6C8;
	sub_821BBF30(ctx, base);
loc_821BE6C8:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821bbb68
	ctx.lr = 0x821BE6D8;
	sub_821BBB68(ctx, base);
	// lwz r4,260(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821be574
	goto loc_821BE574;
loc_821BE6E4:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x821be3ec
	if (ctx.cr6.eq) goto loc_821BE3EC;
	// li r5,13
	ctx.r5.s64 = 13;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821bbb68
	ctx.lr = 0x821BE6FC;
	sub_821BBB68(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bbf30
	ctx.lr = 0x821BE70C;
	sub_821BBF30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x821bc6b0
	ctx.lr = 0x821BE718;
	sub_821BC6B0(ctx, base);
	// srawi r11,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r29.s32 >> 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r5,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r5.s64 = temp.s64;
	// subf r6,r11,r29
	ctx.r6.s64 = ctx.r29.s64 - ctx.r11.s64;
	// bl 0x821bbf30
	ctx.lr = 0x821BE73C;
	sub_821BBF30(ctx, base);
	// b 0x821be3ec
	goto loc_821BE3EC;
loc_821BE740:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x821be3ec
	if (ctx.cr6.eq) goto loc_821BE3EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x821bbf30
	ctx.lr = 0x821BE754;
	sub_821BBF30(ctx, base);
	// lwz r4,152(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// b 0x821be2bc
	goto loc_821BE2BC;
loc_821BE75C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x821be3ec
	if (ctx.cr6.eq) goto loc_821BE3EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x821bbf30
	ctx.lr = 0x821BE770;
	sub_821BBF30(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// bl 0x821bbb68
	ctx.lr = 0x821BE784;
	sub_821BBB68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821be790
	if (ctx.cr0.eq) goto loc_821BE790;
	// li r29,1
	ctx.r29.s64 = 1;
loc_821BE790:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x821be7ac
	if (ctx.cr0.eq) goto loc_821BE7AC;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x821bc6b0
	ctx.lr = 0x821BE7A4;
	sub_821BC6B0(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// b 0x821be810
	goto loc_821BE810;
loc_821BE7AC:
	// lwz r4,168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x821bc6b0
	ctx.lr = 0x821BE7B4;
	sub_821BC6B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x821bbf30
	ctx.lr = 0x821BE7C0;
	sub_821BBF30(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821bbb68
	ctx.lr = 0x821BE7D0;
	sub_821BBB68(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// bl 0x821bbf30
	ctx.lr = 0x821BE7E0;
	sub_821BBF30(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821bbb68
	ctx.lr = 0x821BE7F0;
	sub_821BBB68(ctx, base);
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821be800
	if (!ctx.cr0.eq) goto loc_821BE800;
	// lwz r5,184(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
loc_821BE800:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x821bbf30
	ctx.lr = 0x821BE80C;
	sub_821BBF30(ctx, base);
	// lwz r4,200(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
loc_821BE810:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bbf30
	ctx.lr = 0x821BE818;
	sub_821BBF30(ctx, base);
	// li r5,13
	ctx.r5.s64 = 13;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821bbb68
	ctx.lr = 0x821BE828;
	sub_821BBB68(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// clrlwi r6,r11,31
	ctx.r6.u64 = ctx.r11.u32 & 0x1;
	// addze r5,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r5.s64 = temp.s64;
	// bl 0x821bbf30
	ctx.lr = 0x821BE844;
	sub_821BBF30(ctx, base);
	// li r5,19
	ctx.r5.s64 = 19;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821bbb68
	ctx.lr = 0x821BE854;
	sub_821BBB68(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x821be868
	if (ctx.cr0.eq) goto loc_821BE868;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x821bbf30
	ctx.lr = 0x821BE868;
	sub_821BBF30(ctx, base);
loc_821BE868:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821be894
	if (ctx.cr0.eq) goto loc_821BE894;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821bbb68
	ctx.lr = 0x821BE884;
	sub_821BBB68(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,216(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// bl 0x821bbf30
	ctx.lr = 0x821BE894;
	sub_821BBF30(ctx, base);
loc_821BE894:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821bbb68
	ctx.lr = 0x821BE8A4;
	sub_821BBB68(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x821be3ec
	if (ctx.cr0.eq) goto loc_821BE3EC;
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// b 0x821be598
	goto loc_821BE598;
loc_821BE8B4:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x821be3ec
	if (ctx.cr6.eq) goto loc_821BE3EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x821bbf30
	ctx.lr = 0x821BE8C8;
	sub_821BBF30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// bl 0x821bc6b0
	ctx.lr = 0x821BE8D4;
	sub_821BC6B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x821bbf30
	ctx.lr = 0x821BE8E0;
	sub_821BBF30(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,42
	ctx.r4.s64 = 42;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821bbb68
	ctx.lr = 0x821BE8F0;
	sub_821BBB68(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r11,r11,29,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r20
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r20.u32);
	// bl 0x821bbf30
	ctx.lr = 0x821BE918;
	sub_821BBF30(ctx, base);
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// bne cr6,0x821be940
	if (!ctx.cr6.eq) goto loc_821BE940;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821bbb68
	ctx.lr = 0x821BE930;
	sub_821BBB68(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,232(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// bl 0x821bbf30
	ctx.lr = 0x821BE940;
	sub_821BBF30(ctx, base);
loc_821BE940:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821bbb68
	ctx.lr = 0x821BE950;
	sub_821BBB68(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x821be964
	if (ctx.cr0.eq) goto loc_821BE964;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x821bbf30
	ctx.lr = 0x821BE964;
	sub_821BBF30(ctx, base);
loc_821BE964:
	// li r5,38
	ctx.r5.s64 = 38;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821bbb68
	ctx.lr = 0x821BE974;
	sub_821BBB68(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x821be3ec
	if (ctx.cr0.eq) goto loc_821BE3EC;
	// lwz r4,248(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// b 0x821be598
	goto loc_821BE598;
loc_821BE984:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x821be3ec
	if (ctx.cr6.eq) goto loc_821BE3EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x821bbf30
	ctx.lr = 0x821BE998;
	sub_821BBF30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,256(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x821bc6b0
	ctx.lr = 0x821BE9A4;
	sub_821BC6B0(ctx, base);
	// lwz r4,264(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// b 0x821be598
	goto loc_821BE598;
}

__attribute__((alias("__imp__sub_821BE9B0"))) PPC_WEAK_FUNC(sub_821BE9B0);
PPC_FUNC_IMPL(__imp__sub_821BE9B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x821BE9B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r31,r11,-10544
	ctx.r31.s64 = ctx.r11.s64 + -10544;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r30,r11,3768
	ctx.r30.s64 = ctx.r11.s64 + 3768;
	// bne cr6,0x821bea04
	if (!ctx.cr6.eq) goto loc_821BEA04;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,265
	ctx.r7.s64 = 265;
	// addi r5,r11,3756
	ctx.r5.s64 = ctx.r11.s64 + 3756;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821BEA04;
	sub_821BBC58(ctx, base);
loc_821BEA04:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x821bea28
	if (!ctx.cr6.eq) goto loc_821BEA28;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,266
	ctx.r7.s64 = 266;
	// addi r5,r11,3740
	ctx.r5.s64 = ctx.r11.s64 + 3740;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821BEA28;
	sub_821BBC58(ctx, base);
loc_821BEA28:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x821bea58
	if (!ctx.cr6.eq) goto loc_821BEA58;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,267
	ctx.r7.s64 = 267;
	// addi r5,r11,3720
	ctx.r5.s64 = ctx.r11.s64 + 3720;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821BEA4C;
	sub_821BBC58(ctx, base);
loc_821BEA4C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821BEA50:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
loc_821BEA58:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x821bea4c
	if (ctx.cr6.eq) goto loc_821BEA4C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821bea4c
	if (ctx.cr6.eq) goto loc_821BEA4C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c2a30
	ctx.lr = 0x821BEA70;
	sub_821C2A30(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x821c40f0
	ctx.lr = 0x821BEA80;
	sub_821C40F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne 0x821bea50
	if (!ctx.cr0.eq) goto loc_821BEA50;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x821bea50
	goto loc_821BEA50;
}

__attribute__((alias("__imp__sub_821BEA94"))) PPC_WEAK_FUNC(sub_821BEA94);
PPC_FUNC_IMPL(__imp__sub_821BEA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BEA98"))) PPC_WEAK_FUNC(sub_821BEA98);
PPC_FUNC_IMPL(__imp__sub_821BEA98) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821beadc
	if (!ctx.cr6.eq) goto loc_821BEADC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,391
	ctx.r7.s64 = 391;
	// addi r6,r11,3768
	ctx.r6.s64 = ctx.r11.s64 + 3768;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,3756
	ctx.r5.s64 = ctx.r11.s64 + 3756;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x821BEAD4;
	sub_821BBC58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821beaec
	goto loc_821BEAEC;
loc_821BEADC:
	// bl 0x821c2a30
	ctx.lr = 0x821BEAE0;
	sub_821C2A30(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821c3ae8
	ctx.lr = 0x821BEAEC;
	sub_821C3AE8(ctx, base);
loc_821BEAEC:
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

__attribute__((alias("__imp__sub_821BEB00"))) PPC_WEAK_FUNC(sub_821BEB00);
PPC_FUNC_IMPL(__imp__sub_821BEB00) {
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
	// bne cr6,0x821beb3c
	if (!ctx.cr6.eq) goto loc_821BEB3C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,241
	ctx.r7.s64 = 241;
	// addi r6,r11,-10200
	ctx.r6.s64 = ctx.r11.s64 + -10200;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,-10216
	ctx.r5.s64 = ctx.r11.s64 + -10216;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x821BEB3C;
	sub_821BBC58(ctx, base);
loc_821BEB3C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
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

__attribute__((alias("__imp__sub_821BEB54"))) PPC_WEAK_FUNC(sub_821BEB54);
PPC_FUNC_IMPL(__imp__sub_821BEB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BEB58"))) PPC_WEAK_FUNC(sub_821BEB58);
PPC_FUNC_IMPL(__imp__sub_821BEB58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98c0
	ctx.lr = 0x821BEB60;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821beb00
	ctx.lr = 0x821BEB74;
	sub_821BEB00(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x821beb84
	if (!ctx.cr0.eq) goto loc_821BEB84;
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x821bed78
	goto loc_821BED78;
loc_821BEB84:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c3450
	ctx.lr = 0x821BEB8C;
	sub_821C3450(ctx, base);
	// bl 0x821c2a30
	ctx.lr = 0x821BEB90;
	sub_821C2A30(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c3450
	ctx.lr = 0x821BEB9C;
	sub_821C3450(ctx, base);
	// bl 0x821c2a40
	ctx.lr = 0x821BEBA0;
	sub_821C2A40(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c3450
	ctx.lr = 0x821BEBAC;
	sub_821C3450(ctx, base);
	// bl 0x820bc6d8
	ctx.lr = 0x821BEBB0;
	sub_820BC6D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c3450
	ctx.lr = 0x821BEBBC;
	sub_821C3450(ctx, base);
	// bl 0x821c2a50
	ctx.lr = 0x821BEBC0;
	sub_821C2A50(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c3450
	ctx.lr = 0x821BEBCC;
	sub_821C3450(ctx, base);
	// bl 0x821c2a58
	ctx.lr = 0x821BEBD0;
	sub_821C2A58(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c3450
	ctx.lr = 0x821BEBDC;
	sub_821C3450(ctx, base);
	// bl 0x821c2a60
	ctx.lr = 0x821BEBE0;
	sub_821C2A60(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c3450
	ctx.lr = 0x821BEBEC;
	sub_821C3450(ctx, base);
	// bl 0x821c2a48
	ctx.lr = 0x821BEBF0;
	sub_821C2A48(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c3450
	ctx.lr = 0x821BEBFC;
	sub_821C3450(ctx, base);
	// bl 0x821313e0
	ctx.lr = 0x821BEC00;
	sub_821313E0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82256700
	ctx.lr = 0x821BEC10;
	sub_82256700(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821bec20
	if (!ctx.cr0.eq) goto loc_821BEC20;
loc_821BEC18:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821bed78
	goto loc_821BED78;
loc_821BEC20:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82256700
	ctx.lr = 0x821BEC2C;
	sub_82256700(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821bec18
	if (!ctx.cr0.eq) goto loc_821BEC18;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x821c3d88
	ctx.lr = 0x821BEC40;
	sub_821C3D88(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821c08c0
	ctx.lr = 0x821BEC48;
	sub_821C08C0(ctx, base);
	// b 0x821bec70
	goto loc_821BEC70;
loc_821BEC4C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c0c68
	ctx.lr = 0x821BEC54;
	sub_821C0C68(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x821c1bf0
	ctx.lr = 0x821BEC5C;
	sub_821C1BF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821bec18
	if (!ctx.cr0.eq) goto loc_821BEC18;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c0bc0
	ctx.lr = 0x821BEC70;
	sub_821C0BC0(ctx, base);
loc_821BEC70:
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x821bec4c
	if (!ctx.cr0.eq) goto loc_821BEC4C;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822564c0
	ctx.lr = 0x821BEC84;
	sub_822564C0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r29,r11,-10544
	ctx.r29.s64 = ctx.r11.s64 + -10544;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r25,r11,3860
	ctx.r25.s64 = ctx.r11.s64 + 3860;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r26,r11,3768
	ctx.r26.s64 = ctx.r11.s64 + 3768;
	// beq 0x821becbc
	if (ctx.cr0.eq) goto loc_821BECBC;
	// li r7,520
	ctx.r7.s64 = 520;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821BECBC;
	sub_821BBC58(ctx, base);
loc_821BECBC:
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r5,24(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// lwz r4,20(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// bl 0x821c0eb8
	ctx.lr = 0x821BECE0;
	sub_821C0EB8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x821bed0c
	if (!ctx.cr0.eq) goto loc_821BED0C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,531
	ctx.r7.s64 = 531;
	// addi r5,r11,3856
	ctx.r5.s64 = ctx.r11.s64 + 3856;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821BED04;
	sub_821BBC58(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x821bed78
	goto loc_821BED78;
loc_821BED0C:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c1430
	ctx.lr = 0x821BED18;
	sub_821C1430(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x821c4820
	ctx.lr = 0x821BED2C;
	sub_821C4820(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x821bed44
	if (ctx.cr0.eq) goto loc_821BED44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c10a8
	ctx.lr = 0x821BED3C;
	sub_821C10A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x821bed78
	goto loc_821BED78;
loc_821BED44:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x821c3ca8
	ctx.lr = 0x821BED54;
	sub_821C3CA8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x821bed74
	if (ctx.cr0.eq) goto loc_821BED74;
	// li r7,580
	ctx.r7.s64 = 580;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821BED74;
	sub_821BBC58(ctx, base);
loc_821BED74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821BED78:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822e9910
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BED80"))) PPC_WEAK_FUNC(sub_821BED80);
PPC_FUNC_IMPL(__imp__sub_821BED80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x821BED88;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-10544
	ctx.r31.s64 = ctx.r11.s64 + -10544;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r30,r11,3768
	ctx.r30.s64 = ctx.r11.s64 + 3768;
	// bne cr6,0x821bedc8
	if (!ctx.cr6.eq) goto loc_821BEDC8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,619
	ctx.r7.s64 = 619;
	// addi r5,r11,3884
	ctx.r5.s64 = ctx.r11.s64 + 3884;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821BEDC8;
	sub_821BBC58(ctx, base);
loc_821BEDC8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82256bc0
	ctx.lr = 0x821BEDD4;
	sub_82256BC0(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x821bedf8
	if (!ctx.cr0.eq) goto loc_821BEDF8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,623
	ctx.r7.s64 = 623;
	// addi r5,r11,3880
	ctx.r5.s64 = ctx.r11.s64 + 3880;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821BEDF8;
	sub_821BBC58(ctx, base);
loc_821BEDF8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822567f8
	ctx.lr = 0x821BEE00;
	sub_822567F8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c35f8
	ctx.lr = 0x821BEE0C;
	sub_821C35F8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BEE18"))) PPC_WEAK_FUNC(sub_821BEE18);
PPC_FUNC_IMPL(__imp__sub_821BEE18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x821BEE20;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-10544
	ctx.r31.s64 = ctx.r11.s64 + -10544;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r30,r11,3768
	ctx.r30.s64 = ctx.r11.s64 + 3768;
	// bne cr6,0x821bee5c
	if (!ctx.cr6.eq) goto loc_821BEE5C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,659
	ctx.r7.s64 = 659;
	// addi r5,r11,3944
	ctx.r5.s64 = ctx.r11.s64 + 3944;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821BEE5C;
	sub_821BBC58(ctx, base);
loc_821BEE5C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821beb00
	ctx.lr = 0x821BEE64;
	sub_821BEB00(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x821bee88
	if (!ctx.cr0.eq) goto loc_821BEE88;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,663
	ctx.r7.s64 = 663;
	// addi r5,r11,3932
	ctx.r5.s64 = ctx.r11.s64 + 3932;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821BEE88;
	sub_821BBC58(ctx, base);
loc_821BEE88:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821c3450
	ctx.lr = 0x821BEE90;
	sub_821C3450(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821beeb0
	if (!ctx.cr0.eq) goto loc_821BEEB0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,664
	ctx.r7.s64 = 664;
	// addi r5,r11,3892
	ctx.r5.s64 = ctx.r11.s64 + 3892;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821bbc58
	ctx.lr = 0x821BEEB0;
	sub_821BBC58(ctx, base);
loc_821BEEB0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821c3618
	ctx.lr = 0x821BEEBC;
	sub_821C3618(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82256a70
	ctx.lr = 0x821BEEC4;
	sub_82256A70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BEED0"))) PPC_WEAK_FUNC(sub_821BEED0);
PPC_FUNC_IMPL(__imp__sub_821BEED0) {
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
	// bl 0x82257ee8
	ctx.lr = 0x821BEEEC;
	sub_82257EE8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x821bef18
	if (!ctx.cr0.eq) goto loc_821BEF18;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,73
	ctx.r7.s64 = 73;
	// addi r6,r11,3976
	ctx.r6.s64 = ctx.r11.s64 + 3976;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,3960
	ctx.r5.s64 = ctx.r11.s64 + 3960;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x821BEF18;
	sub_821BBC58(ctx, base);
loc_821BEF18:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_821BEF44"))) PPC_WEAK_FUNC(sub_821BEF44);
PPC_FUNC_IMPL(__imp__sub_821BEF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BEF48"))) PPC_WEAK_FUNC(sub_821BEF48);
PPC_FUNC_IMPL(__imp__sub_821BEF48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x821BEF50;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x821bf028
	if (ctx.cr6.eq) goto loc_821BF028;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r31,r11,-10544
	ctx.r31.s64 = ctx.r11.s64 + -10544;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r30,r11,3976
	ctx.r30.s64 = ctx.r11.s64 + 3976;
	// bne cr6,0x821bef98
	if (!ctx.cr6.eq) goto loc_821BEF98;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,115
	ctx.r7.s64 = 115;
	// addi r5,r11,4136
	ctx.r5.s64 = ctx.r11.s64 + 4136;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821BEF98;
	sub_821BBC58(ctx, base);
loc_821BEF98:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821befc0
	if (!ctx.cr6.eq) goto loc_821BEFC0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,116
	ctx.r7.s64 = 116;
	// addi r5,r11,4116
	ctx.r5.s64 = ctx.r11.s64 + 4116;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821BEFC0;
	sub_821BBC58(ctx, base);
loc_821BEFC0:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821befe8
	if (ctx.cr6.eq) goto loc_821BEFE8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,119
	ctx.r7.s64 = 119;
	// addi r5,r11,4088
	ctx.r5.s64 = ctx.r11.s64 + 4088;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821BEFE8;
	sub_821BBC58(ctx, base);
loc_821BEFE8:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bf010
	if (ctx.cr6.eq) goto loc_821BF010;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,120
	ctx.r7.s64 = 120;
	// addi r5,r11,4060
	ctx.r5.s64 = ctx.r11.s64 + 4060;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821BF010;
	sub_821BBC58(ctx, base);
loc_821BF010:
	// stw r29,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r29.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stw r28,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r28.u32);
loc_821BF028:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BF030"))) PPC_WEAK_FUNC(sub_821BF030);
PPC_FUNC_IMPL(__imp__sub_821BF030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x821BF038;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x821bf10c
	if (ctx.cr6.eq) goto loc_821BF10C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r31,r11,-10544
	ctx.r31.s64 = ctx.r11.s64 + -10544;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r30,r11,3976
	ctx.r30.s64 = ctx.r11.s64 + 3976;
	// bne cr6,0x821bf080
	if (!ctx.cr6.eq) goto loc_821BF080;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,163
	ctx.r7.s64 = 163;
	// addi r5,r11,4168
	ctx.r5.s64 = ctx.r11.s64 + 4168;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821BF080;
	sub_821BBC58(ctx, base);
loc_821BF080:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bf0a8
	if (!ctx.cr6.eq) goto loc_821BF0A8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,164
	ctx.r7.s64 = 164;
	// addi r5,r11,4148
	ctx.r5.s64 = ctx.r11.s64 + 4148;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821BF0A8;
	sub_821BBC58(ctx, base);
loc_821BF0A8:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bf0d0
	if (ctx.cr6.eq) goto loc_821BF0D0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,167
	ctx.r7.s64 = 167;
	// addi r5,r11,4088
	ctx.r5.s64 = ctx.r11.s64 + 4088;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821BF0D0;
	sub_821BBC58(ctx, base);
loc_821BF0D0:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bf0f8
	if (ctx.cr6.eq) goto loc_821BF0F8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,168
	ctx.r7.s64 = 168;
	// addi r5,r11,4060
	ctx.r5.s64 = ctx.r11.s64 + 4060;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821BF0F8;
	sub_821BBC58(ctx, base);
loc_821BF0F8:
	// stw r29,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r29.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// stw r28,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
	// stw r28,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r28.u32);
loc_821BF10C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BF114"))) PPC_WEAK_FUNC(sub_821BF114);
PPC_FUNC_IMPL(__imp__sub_821BF114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BF118"))) PPC_WEAK_FUNC(sub_821BF118);
PPC_FUNC_IMPL(__imp__sub_821BF118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x821BF120;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821bf1b8
	if (ctx.cr6.eq) goto loc_821BF1B8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r30,r11,-10544
	ctx.r30.s64 = ctx.r11.s64 + -10544;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r29,r11,3976
	ctx.r29.s64 = ctx.r11.s64 + 3976;
	// bne cr6,0x821bf168
	if (!ctx.cr6.eq) goto loc_821BF168;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,264
	ctx.r7.s64 = 264;
	// addi r5,r11,4180
	ctx.r5.s64 = ctx.r11.s64 + 4180;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821BF168;
	sub_821BBC58(ctx, base);
loc_821BF168:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bf190
	if (!ctx.cr6.eq) goto loc_821BF190;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,265
	ctx.r7.s64 = 265;
	// addi r5,r11,4196
	ctx.r5.s64 = ctx.r11.s64 + 4196;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821BF190;
	sub_821BBC58(ctx, base);
loc_821BF190:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_821BF1B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BF1C0"))) PPC_WEAK_FUNC(sub_821BF1C0);
PPC_FUNC_IMPL(__imp__sub_821BF1C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98dc
	ctx.lr = 0x821BF1C8;
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
	// addi r28,r11,3976
	ctx.r28.s64 = ctx.r11.s64 + 3976;
	// bne cr6,0x821bf210
	if (!ctx.cr6.eq) goto loc_821BF210;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,449
	ctx.r7.s64 = 449;
	// addi r5,r11,4264
	ctx.r5.s64 = ctx.r11.s64 + 4264;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821BF210;
	sub_821BBC58(ctx, base);
loc_821BF210:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x821bf234
	if (!ctx.cr6.eq) goto loc_821BF234;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,450
	ctx.r7.s64 = 450;
	// addi r5,r11,4252
	ctx.r5.s64 = ctx.r11.s64 + 4252;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821BF234;
	sub_821BBC58(ctx, base);
loc_821BF234:
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x821BF244;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x821bf268
	if (!ctx.cr0.eq) goto loc_821BF268;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,456
	ctx.r7.s64 = 456;
	// addi r5,r11,4240
	ctx.r5.s64 = ctx.r11.s64 + 4240;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821BF268;
	sub_821BBC58(ctx, base);
loc_821BF268:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r26,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82257db8
	ctx.lr = 0x821BF28C;
	sub_82257DB8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// bl 0x821beed0
	ctx.lr = 0x821BF294;
	sub_821BEED0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// bne 0x821bf2bc
	if (!ctx.cr0.eq) goto loc_821BF2BC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,471
	ctx.r7.s64 = 471;
	// addi r5,r11,4220
	ctx.r5.s64 = ctx.r11.s64 + 4220;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821BF2BC;
	sub_821BBC58(ctx, base);
loc_821BF2BC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e992c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BF2F8"))) PPC_WEAK_FUNC(sub_821BF2F8);
PPC_FUNC_IMPL(__imp__sub_821BF2F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e0
	ctx.lr = 0x821BF300;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r28,r10,-10544
	ctx.r28.s64 = ctx.r10.s64 + -10544;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r27,r10,4280
	ctx.r27.s64 = ctx.r10.s64 + 4280;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r26,r10,3976
	ctx.r26.s64 = ctx.r10.s64 + 3976;
	// bne 0x821bf334
	if (!ctx.cr0.eq) goto loc_821BF334;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x821bf340
	goto loc_821BF340;
loc_821BF334:
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne 0x821bf3b8
	if (!ctx.cr0.eq) goto loc_821BF3B8;
loc_821BF340:
	// li r7,515
	ctx.r7.s64 = 515;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821BF358;
	sub_821BBC58(ctx, base);
	// b 0x821bf3b8
	goto loc_821BF3B8;
loc_821BF35C:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821bf374
	if (ctx.cr6.eq) goto loc_821BF374;
	// lwz r29,8(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne 0x821bf38c
	if (!ctx.cr0.eq) goto loc_821BF38C;
loc_821BF374:
	// li r7,524
	ctx.r7.s64 = 524;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821BF38C;
	sub_821BBC58(ctx, base);
loc_821BF38C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821bf118
	ctx.lr = 0x821BF394;
	sub_821BF118(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BF3AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82257fe8
	ctx.lr = 0x821BF3B8;
	sub_82257FE8(ctx, base);
loc_821BF3B8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821bf35c
	if (!ctx.cr6.eq) goto loc_821BF35C;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x821bf3d8
	if (ctx.cr0.eq) goto loc_821BF3D8;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x82257fe8
	ctx.lr = 0x821BF3D8;
	sub_82257FE8(ctx, base);
loc_821BF3D8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82257e78
	ctx.lr = 0x821BF3E0;
	sub_82257E78(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BF3F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e9930
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BF3FC"))) PPC_WEAK_FUNC(sub_821BF3FC);
PPC_FUNC_IMPL(__imp__sub_821BF3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BF400"))) PPC_WEAK_FUNC(sub_821BF400);
PPC_FUNC_IMPL(__imp__sub_821BF400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e0
	ctx.lr = 0x821BF408;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r28,r11,3976
	ctx.r28.s64 = ctx.r11.s64 + 3976;
	// bne cr6,0x821bf44c
	if (!ctx.cr6.eq) goto loc_821BF44C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,570
	ctx.r7.s64 = 570;
	// addi r5,r11,4292
	ctx.r5.s64 = ctx.r11.s64 + 4292;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821BF44C;
	sub_821BBC58(ctx, base);
loc_821BF44C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x821beed0
	ctx.lr = 0x821BF454;
	sub_821BEED0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x821bf478
	if (!ctx.cr0.eq) goto loc_821BF478;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,575
	ctx.r7.s64 = 575;
	// addi r5,r11,3960
	ctx.r5.s64 = ctx.r11.s64 + 3960;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821BF478;
	sub_821BBC58(ctx, base);
loc_821BF478:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r27,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r27.u32);
	// stw r26,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r26.u32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x821bf030
	ctx.lr = 0x821BF48C;
	sub_821BF030(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bf4a0
	if (!ctx.cr6.eq) goto loc_821BF4A0;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
loc_821BF4A0:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e9930
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BF4B4"))) PPC_WEAK_FUNC(sub_821BF4B4);
PPC_FUNC_IMPL(__imp__sub_821BF4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BF4B8"))) PPC_WEAK_FUNC(sub_821BF4B8);
PPC_FUNC_IMPL(__imp__sub_821BF4B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e0
	ctx.lr = 0x821BF4C0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,3976
	ctx.r29.s64 = ctx.r11.s64 + 3976;
	// bne cr6,0x821bf504
	if (!ctx.cr6.eq) goto loc_821BF504;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,621
	ctx.r7.s64 = 621;
	// addi r5,r11,4324
	ctx.r5.s64 = ctx.r11.s64 + 4324;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821BF504;
	sub_821BBC58(ctx, base);
loc_821BF504:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x821bf528
	if (!ctx.cr6.eq) goto loc_821BF528;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,622
	ctx.r7.s64 = 622;
	// addi r5,r11,4312
	ctx.r5.s64 = ctx.r11.s64 + 4312;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821BF528;
	sub_821BBC58(ctx, base);
loc_821BF528:
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x821bf570
	if (ctx.cr6.eq) goto loc_821BF570;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r28,r11,4300
	ctx.r28.s64 = ctx.r11.s64 + 4300;
loc_821BF538:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x821bf574
	if (ctx.cr6.eq) goto loc_821BF574;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x821bf568
	if (!ctx.cr0.eq) goto loc_821BF568;
	// li r7,636
	ctx.r7.s64 = 636;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821BF568;
	sub_821BBC58(ctx, base);
loc_821BF568:
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x821bf538
	if (!ctx.cr6.eq) goto loc_821BF538;
loc_821BF570:
	// li r31,0
	ctx.r31.s64 = 0;
loc_821BF574:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e9930
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BF580"))) PPC_WEAK_FUNC(sub_821BF580);
PPC_FUNC_IMPL(__imp__sub_821BF580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x821BF588;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,3976
	ctx.r29.s64 = ctx.r11.s64 + 3976;
	// bne cr6,0x821bf5c8
	if (!ctx.cr6.eq) goto loc_821BF5C8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,672
	ctx.r7.s64 = 672;
	// addi r5,r11,4292
	ctx.r5.s64 = ctx.r11.s64 + 4292;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821BF5C8;
	sub_821BBC58(ctx, base);
loc_821BF5C8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821bf5dc
	if (!ctx.cr0.eq) goto loc_821BF5DC;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x821bf5e8
	goto loc_821BF5E8;
loc_821BF5DC:
	// lwz r28,8(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi r28,0
	ctx.cr0.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne 0x821bf604
	if (!ctx.cr0.eq) goto loc_821BF604;
loc_821BF5E8:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,677
	ctx.r7.s64 = 677;
	// addi r5,r11,4336
	ctx.r5.s64 = ctx.r11.s64 + 4336;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821BF604;
	sub_821BBC58(ctx, base);
loc_821BF604:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821bf4b8
	ctx.lr = 0x821BF614;
	sub_821BF4B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821bf620
	if (!ctx.cr0.eq) goto loc_821BF620;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_821BF620:
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BF630"))) PPC_WEAK_FUNC(sub_821BF630);
PPC_FUNC_IMPL(__imp__sub_821BF630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x821BF638;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,3976
	ctx.r29.s64 = ctx.r11.s64 + 3976;
	// bne cr6,0x821bf678
	if (!ctx.cr6.eq) goto loc_821BF678;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,759
	ctx.r7.s64 = 759;
	// addi r5,r11,4292
	ctx.r5.s64 = ctx.r11.s64 + 4292;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821BF678;
	sub_821BBC58(ctx, base);
loc_821BF678:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821bf68c
	if (!ctx.cr0.eq) goto loc_821BF68C;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x821bf698
	goto loc_821BF698;
loc_821BF68C:
	// lwz r28,8(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi r28,0
	ctx.cr0.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne 0x821bf6b4
	if (!ctx.cr0.eq) goto loc_821BF6B4;
loc_821BF698:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,765
	ctx.r7.s64 = 765;
	// addi r5,r11,4336
	ctx.r5.s64 = ctx.r11.s64 + 4336;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821BF6B4;
	sub_821BBC58(ctx, base);
loc_821BF6B4:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821bf4b8
	ctx.lr = 0x821BF6C4;
	sub_821BF4B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821bf6d0
	if (!ctx.cr0.eq) goto loc_821BF6D0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_821BF6D0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r30,16(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821bf718
	if (ctx.cr6.eq) goto loc_821BF718;
	// bl 0x821bf118
	ctx.lr = 0x821BF6E4;
	sub_821BF118(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821bf6fc
	if (!ctx.cr6.eq) goto loc_821BF6FC;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_821BF6FC:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821bf70c
	if (ctx.cr6.eq) goto loc_821BF70C;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x82257fe8
	ctx.lr = 0x821BF70C;
	sub_82257FE8(ctx, base);
loc_821BF70C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_821BF718:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BF724"))) PPC_WEAK_FUNC(sub_821BF724);
PPC_FUNC_IMPL(__imp__sub_821BF724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BF728"))) PPC_WEAK_FUNC(sub_821BF728);
PPC_FUNC_IMPL(__imp__sub_821BF728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98dc
	ctx.lr = 0x821BF730;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,3976
	ctx.r29.s64 = ctx.r11.s64 + 3976;
	// bne cr6,0x821bf77c
	if (!ctx.cr6.eq) goto loc_821BF77C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,1010
	ctx.r7.s64 = 1010;
	// addi r5,r11,4412
	ctx.r5.s64 = ctx.r11.s64 + 4412;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821BF77C;
	sub_821BBC58(ctx, base);
loc_821BF77C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x821bf7a0
	if (!ctx.cr6.eq) goto loc_821BF7A0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,1011
	ctx.r7.s64 = 1011;
	// addi r5,r11,4404
	ctx.r5.s64 = ctx.r11.s64 + 4404;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821BF7A0;
	sub_821BBC58(ctx, base);
loc_821BF7A0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bf7c8
	if (ctx.cr6.eq) goto loc_821BF7C8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,1014
	ctx.r7.s64 = 1014;
	// addi r5,r11,4384
	ctx.r5.s64 = ctx.r11.s64 + 4384;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821BF7C8;
	sub_821BBC58(ctx, base);
loc_821BF7C8:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bf7f0
	if (ctx.cr6.eq) goto loc_821BF7F0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,1015
	ctx.r7.s64 = 1015;
	// addi r5,r11,4364
	ctx.r5.s64 = ctx.r11.s64 + 4364;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821BF7F0;
	sub_821BBC58(ctx, base);
loc_821BF7F0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// stw r25,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r25.u32);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// bl 0x821beed0
	ctx.lr = 0x821BF808;
	sub_821BEED0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// bne 0x821bf830
	if (!ctx.cr0.eq) goto loc_821BF830;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,1031
	ctx.r7.s64 = 1031;
	// addi r5,r11,4344
	ctx.r5.s64 = ctx.r11.s64 + 4344;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821BF830;
	sub_821BBC58(ctx, base);
loc_821BF830:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e992c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BF870"))) PPC_WEAK_FUNC(sub_821BF870);
PPC_FUNC_IMPL(__imp__sub_821BF870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e0
	ctx.lr = 0x821BF878;
	__savegprlr_26(ctx, base);
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
	// addi r26,r11,3976
	ctx.r26.s64 = ctx.r11.s64 + 3976;
	// bne cr6,0x821bf8b4
	if (!ctx.cr6.eq) goto loc_821BF8B4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,1076
	ctx.r7.s64 = 1076;
	// addi r5,r11,4412
	ctx.r5.s64 = ctx.r11.s64 + 4412;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821BF8B4;
	sub_821BBC58(ctx, base);
loc_821BF8B4:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821bf8c8
	if (ctx.cr0.eq) goto loc_821BF8C8;
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_821BF8C8:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821bf940
	if (ctx.cr6.eq) goto loc_821BF940;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r28,r11,4280
	ctx.r28.s64 = ctx.r11.s64 + 4280;
loc_821BF8D8:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bf8f0
	if (ctx.cr6.eq) goto loc_821BF8F0;
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne 0x821bf908
	if (!ctx.cr0.eq) goto loc_821BF908;
loc_821BF8F0:
	// li r7,1088
	ctx.r7.s64 = 1088;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821BF908;
	sub_821BBC58(ctx, base);
loc_821BF908:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bf118
	ctx.lr = 0x821BF910;
	sub_821BF118(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BF928;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82257fe8
	ctx.lr = 0x821BF934;
	sub_82257FE8(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821bf8d8
	if (!ctx.cr6.eq) goto loc_821BF8D8;
loc_821BF940:
	// lwz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x821bf954
	if (ctx.cr0.eq) goto loc_821BF954;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x82257fe8
	ctx.lr = 0x821BF954;
	sub_82257FE8(ctx, base);
loc_821BF954:
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bf97c
	if (!ctx.cr6.eq) goto loc_821BF97C;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82257e78
	ctx.lr = 0x821BF968;
	sub_82257E78(ctx, base);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BF97C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821BF97C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e9930
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BF984"))) PPC_WEAK_FUNC(sub_821BF984);
PPC_FUNC_IMPL(__imp__sub_821BF984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BF988"))) PPC_WEAK_FUNC(sub_821BF988);
PPC_FUNC_IMPL(__imp__sub_821BF988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98dc
	ctx.lr = 0x821BF990;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r26,r11,3976
	ctx.r26.s64 = ctx.r11.s64 + 3976;
	// bne cr6,0x821bf9d4
	if (!ctx.cr6.eq) goto loc_821BF9D4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,1143
	ctx.r7.s64 = 1143;
	// addi r5,r11,4412
	ctx.r5.s64 = ctx.r11.s64 + 4412;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821BF9D4;
	sub_821BBC58(ctx, base);
loc_821BF9D4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x821beed0
	ctx.lr = 0x821BF9DC;
	sub_821BEED0(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x821bfa00
	if (!ctx.cr0.eq) goto loc_821BFA00;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,1147
	ctx.r7.s64 = 1147;
	// addi r5,r11,3960
	ctx.r5.s64 = ctx.r11.s64 + 3960;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821BFA00;
	sub_821BBC58(ctx, base);
loc_821BFA00:
	// stw r25,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r25.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r30,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r30.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r29,r10,4300
	ctx.r29.s64 = ctx.r10.s64 + 4300;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821bfa24
	if (!ctx.cr0.eq) goto loc_821BFA24;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x821bfa30
	goto loc_821BFA30;
loc_821BFA24:
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne 0x821bfa68
	if (!ctx.cr0.eq) goto loc_821BFA68;
loc_821BFA30:
	// li r7,1158
	ctx.r7.s64 = 1158;
	// b 0x821bfa54
	goto loc_821BFA54;
loc_821BFA38:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bgt cr6,0x821bfa74
	if (ctx.cr6.gt) goto loc_821BFA74;
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne 0x821bfa68
	if (!ctx.cr0.eq) goto loc_821BFA68;
	// li r7,1168
	ctx.r7.s64 = 1168;
loc_821BFA54:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821BFA68;
	sub_821BBC58(ctx, base);
loc_821BFA68:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821bfa38
	if (!ctx.cr6.eq) goto loc_821BFA38;
loc_821BFA74:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821bf030
	ctx.lr = 0x821BFA80;
	sub_821BF030(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821bfa94
	if (!ctx.cr6.eq) goto loc_821BFA94;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r28,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
loc_821BFA94:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e992c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BFAA8"))) PPC_WEAK_FUNC(sub_821BFAA8);
PPC_FUNC_IMPL(__imp__sub_821BFAA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e0
	ctx.lr = 0x821BFAB0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,3976
	ctx.r29.s64 = ctx.r11.s64 + 3976;
	// bne cr6,0x821bfaf4
	if (!ctx.cr6.eq) goto loc_821BFAF4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,1212
	ctx.r7.s64 = 1212;
	// addi r5,r11,4324
	ctx.r5.s64 = ctx.r11.s64 + 4324;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821BFAF4;
	sub_821BBC58(ctx, base);
loc_821BFAF4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x821bfb18
	if (!ctx.cr6.eq) goto loc_821BFB18;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,1213
	ctx.r7.s64 = 1213;
	// addi r5,r11,4312
	ctx.r5.s64 = ctx.r11.s64 + 4312;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821BFB18;
	sub_821BBC58(ctx, base);
loc_821BFB18:
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x821bfb60
	if (ctx.cr6.eq) goto loc_821BFB60;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r28,r11,4300
	ctx.r28.s64 = ctx.r11.s64 + 4300;
loc_821BFB28:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x821bfb64
	if (ctx.cr6.eq) goto loc_821BFB64;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x821bfb58
	if (!ctx.cr0.eq) goto loc_821BFB58;
	// li r7,1227
	ctx.r7.s64 = 1227;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821BFB58;
	sub_821BBC58(ctx, base);
loc_821BFB58:
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x821bfb28
	if (!ctx.cr6.eq) goto loc_821BFB28;
loc_821BFB60:
	// li r31,0
	ctx.r31.s64 = 0;
loc_821BFB64:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e9930
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BFB70"))) PPC_WEAK_FUNC(sub_821BFB70);
PPC_FUNC_IMPL(__imp__sub_821BFB70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x821BFB78;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,3976
	ctx.r29.s64 = ctx.r11.s64 + 3976;
	// bne cr6,0x821bfbb8
	if (!ctx.cr6.eq) goto loc_821BFBB8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,1262
	ctx.r7.s64 = 1262;
	// addi r5,r11,4412
	ctx.r5.s64 = ctx.r11.s64 + 4412;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821BFBB8;
	sub_821BBC58(ctx, base);
loc_821BFBB8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821bfbcc
	if (!ctx.cr0.eq) goto loc_821BFBCC;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x821bfbd8
	goto loc_821BFBD8;
loc_821BFBCC:
	// lwz r28,8(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi r28,0
	ctx.cr0.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne 0x821bfbf4
	if (!ctx.cr0.eq) goto loc_821BFBF4;
loc_821BFBD8:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,1267
	ctx.r7.s64 = 1267;
	// addi r5,r11,4336
	ctx.r5.s64 = ctx.r11.s64 + 4336;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821BFBF4;
	sub_821BBC58(ctx, base);
loc_821BFBF4:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821bfaa8
	ctx.lr = 0x821BFC04;
	sub_821BFAA8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821bfc10
	if (!ctx.cr0.eq) goto loc_821BFC10;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_821BFC10:
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BFC20"))) PPC_WEAK_FUNC(sub_821BFC20);
PPC_FUNC_IMPL(__imp__sub_821BFC20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x821BFC28;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,3976
	ctx.r29.s64 = ctx.r11.s64 + 3976;
	// bne cr6,0x821bfc64
	if (!ctx.cr6.eq) goto loc_821BFC64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,1304
	ctx.r7.s64 = 1304;
	// addi r5,r11,4412
	ctx.r5.s64 = ctx.r11.s64 + 4412;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821BFC64;
	sub_821BBC58(ctx, base);
loc_821BFC64:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821bfc78
	if (!ctx.cr0.eq) goto loc_821BFC78;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x821bfc84
	goto loc_821BFC84;
loc_821BFC78:
	// lwz r28,8(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi r28,0
	ctx.cr0.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne 0x821bfca0
	if (!ctx.cr0.eq) goto loc_821BFCA0;
loc_821BFC84:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,1310
	ctx.r7.s64 = 1310;
	// addi r5,r11,4324
	ctx.r5.s64 = ctx.r11.s64 + 4324;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821BFCA0;
	sub_821BBC58(ctx, base);
loc_821BFCA0:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x821bfaa8
	ctx.lr = 0x821BFCB4;
	sub_821BFAA8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821bfcc0
	if (!ctx.cr0.eq) goto loc_821BFCC0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_821BFCC0:
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BFCD0"))) PPC_WEAK_FUNC(sub_821BFCD0);
PPC_FUNC_IMPL(__imp__sub_821BFCD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x821BFCD8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,3976
	ctx.r29.s64 = ctx.r11.s64 + 3976;
	// bne cr6,0x821bfd18
	if (!ctx.cr6.eq) goto loc_821BFD18;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,1421
	ctx.r7.s64 = 1421;
	// addi r5,r11,4412
	ctx.r5.s64 = ctx.r11.s64 + 4412;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821BFD18;
	sub_821BBC58(ctx, base);
loc_821BFD18:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821bfd2c
	if (!ctx.cr0.eq) goto loc_821BFD2C;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x821bfd38
	goto loc_821BFD38;
loc_821BFD2C:
	// lwz r28,8(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi r28,0
	ctx.cr0.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne 0x821bfd54
	if (!ctx.cr0.eq) goto loc_821BFD54;
loc_821BFD38:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,1427
	ctx.r7.s64 = 1427;
	// addi r5,r11,4336
	ctx.r5.s64 = ctx.r11.s64 + 4336;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821BFD54;
	sub_821BBC58(ctx, base);
loc_821BFD54:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821bf4b8
	ctx.lr = 0x821BFD64;
	sub_821BF4B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821bfd70
	if (!ctx.cr0.eq) goto loc_821BFD70;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_821BFD70:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r30,16(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821bfdb8
	if (ctx.cr6.eq) goto loc_821BFDB8;
	// bl 0x821bf118
	ctx.lr = 0x821BFD84;
	sub_821BF118(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821bfd9c
	if (!ctx.cr6.eq) goto loc_821BFD9C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_821BFD9C:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821bfdac
	if (ctx.cr6.eq) goto loc_821BFDAC;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x82257fe8
	ctx.lr = 0x821BFDAC;
	sub_82257FE8(ctx, base);
loc_821BFDAC:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_821BFDB8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BFDC4"))) PPC_WEAK_FUNC(sub_821BFDC4);
PPC_FUNC_IMPL(__imp__sub_821BFDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BFDC8"))) PPC_WEAK_FUNC(sub_821BFDC8);
PPC_FUNC_IMPL(__imp__sub_821BFDC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x821BFDD0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r28,r11,3976
	ctx.r28.s64 = ctx.r11.s64 + 3976;
	// bne cr6,0x821bfe0c
	if (!ctx.cr6.eq) goto loc_821BFE0C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,1485
	ctx.r7.s64 = 1485;
	// addi r5,r11,4412
	ctx.r5.s64 = ctx.r11.s64 + 4412;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821BFE0C;
	sub_821BBC58(ctx, base);
loc_821BFE0C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821bfe20
	if (!ctx.cr0.eq) goto loc_821BFE20;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x821bfe2c
	goto loc_821BFE2C;
loc_821BFE20:
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne 0x821bfe48
	if (!ctx.cr0.eq) goto loc_821BFE48;
loc_821BFE2C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,1491
	ctx.r7.s64 = 1491;
	// addi r5,r11,4336
	ctx.r5.s64 = ctx.r11.s64 + 4336;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821BFE48;
	sub_821BBC58(ctx, base);
loc_821BFE48:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r29,16(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821bfe94
	if (ctx.cr6.eq) goto loc_821BFE94;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821bf118
	ctx.lr = 0x821BFE60;
	sub_821BF118(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821bfe78
	if (!ctx.cr6.eq) goto loc_821BFE78;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_821BFE78:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821bfe88
	if (ctx.cr6.eq) goto loc_821BFE88;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x82257fe8
	ctx.lr = 0x821BFE88;
	sub_82257FE8(ctx, base);
loc_821BFE88:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_821BFE94:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821BFEA0"))) PPC_WEAK_FUNC(sub_821BFEA0);
PPC_FUNC_IMPL(__imp__sub_821BFEA0) {
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
	// bne cr6,0x821bfedc
	if (!ctx.cr6.eq) goto loc_821BFEDC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,1533
	ctx.r7.s64 = 1533;
	// addi r6,r11,3976
	ctx.r6.s64 = ctx.r11.s64 + 3976;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,4412
	ctx.r5.s64 = ctx.r11.s64 + 4412;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x821BFEDC;
	sub_821BBC58(ctx, base);
loc_821BFEDC:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
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

__attribute__((alias("__imp__sub_821BFEF4"))) PPC_WEAK_FUNC(sub_821BFEF4);
PPC_FUNC_IMPL(__imp__sub_821BFEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BFEF8"))) PPC_WEAK_FUNC(sub_821BFEF8);
PPC_FUNC_IMPL(__imp__sub_821BFEF8) {
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
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82257db8
	ctx.lr = 0x821BFF20;
	sub_82257DB8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x821bff4c
	if (!ctx.cr0.eq) goto loc_821BFF4C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,1609
	ctx.r7.s64 = 1609;
	// addi r6,r11,3976
	ctx.r6.s64 = ctx.r11.s64 + 3976;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,4404
	ctx.r5.s64 = ctx.r11.s64 + 4404;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x821BFF4C;
	sub_821BBC58(ctx, base);
loc_821BFF4C:
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

__attribute__((alias("__imp__sub_821BFF64"))) PPC_WEAK_FUNC(sub_821BFF64);
PPC_FUNC_IMPL(__imp__sub_821BFF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BFF68"))) PPC_WEAK_FUNC(sub_821BFF68);
PPC_FUNC_IMPL(__imp__sub_821BFF68) {
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
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x82257db8
	ctx.lr = 0x821BFF90;
	sub_82257DB8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x821bffbc
	if (!ctx.cr0.eq) goto loc_821BFFBC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,1650
	ctx.r7.s64 = 1650;
	// addi r6,r11,3976
	ctx.r6.s64 = ctx.r11.s64 + 3976;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,4404
	ctx.r5.s64 = ctx.r11.s64 + 4404;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x821BFFBC;
	sub_821BBC58(ctx, base);
loc_821BFFBC:
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

__attribute__((alias("__imp__sub_821BFFD4"))) PPC_WEAK_FUNC(sub_821BFFD4);
PPC_FUNC_IMPL(__imp__sub_821BFFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821BFFD8"))) PPC_WEAK_FUNC(sub_821BFFD8);
PPC_FUNC_IMPL(__imp__sub_821BFFD8) {
	PPC_FUNC_PROLOGUE();
	// li r3,32
	ctx.r3.s64 = 32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821BFFE0"))) PPC_WEAK_FUNC(sub_821BFFE0);
PPC_FUNC_IMPL(__imp__sub_821BFFE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x821BFFE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-10544
	ctx.r31.s64 = ctx.r11.s64 + -10544;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r30,r11,3976
	ctx.r30.s64 = ctx.r11.s64 + 3976;
	// bne cr6,0x821c0028
	if (!ctx.cr6.eq) goto loc_821C0028;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,2228
	ctx.r7.s64 = 2228;
	// addi r5,r11,4484
	ctx.r5.s64 = ctx.r11.s64 + 4484;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821C0028;
	sub_821BBC58(ctx, base);
loc_821C0028:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x821c004c
	if (!ctx.cr6.eq) goto loc_821C004C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,2229
	ctx.r7.s64 = 2229;
	// addi r5,r11,4404
	ctx.r5.s64 = ctx.r11.s64 + 4404;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821C004C;
	sub_821BBC58(ctx, base);
loc_821C004C:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0074
	if (ctx.cr6.eq) goto loc_821C0074;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,2232
	ctx.r7.s64 = 2232;
	// addi r5,r11,4460
	ctx.r5.s64 = ctx.r11.s64 + 4460;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821C0074;
	sub_821BBC58(ctx, base);
loc_821C0074:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c009c
	if (ctx.cr6.eq) goto loc_821C009C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,2233
	ctx.r7.s64 = 2233;
	// addi r5,r11,4440
	ctx.r5.s64 = ctx.r11.s64 + 4440;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821C009C;
	sub_821BBC58(ctx, base);
loc_821C009C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// bl 0x821beed0
	ctx.lr = 0x821C00A8;
	sub_821BEED0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r3.u32);
	// bne 0x821c00d0
	if (!ctx.cr0.eq) goto loc_821C00D0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,2242
	ctx.r7.s64 = 2242;
	// addi r5,r11,4420
	ctx.r5.s64 = ctx.r11.s64 + 4420;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821C00D0;
	sub_821BBC58(ctx, base);
loc_821C00D0:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r10,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r10.u32);
	// stw r9,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C0100"))) PPC_WEAK_FUNC(sub_821C0100);
PPC_FUNC_IMPL(__imp__sub_821C0100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98dc
	ctx.lr = 0x821C0108;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r28,r11,-10544
	ctx.r28.s64 = ctx.r11.s64 + -10544;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r27,r11,3976
	ctx.r27.s64 = ctx.r11.s64 + 3976;
	// bne cr6,0x821c0144
	if (!ctx.cr6.eq) goto loc_821C0144;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,2279
	ctx.r7.s64 = 2279;
	// addi r5,r11,4484
	ctx.r5.s64 = ctx.r11.s64 + 4484;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821C0144;
	sub_821BBC58(ctx, base);
loc_821C0144:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r25,r10,4280
	ctx.r25.s64 = ctx.r10.s64 + 4280;
	// bne 0x821c0160
	if (!ctx.cr0.eq) goto loc_821C0160;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x821c016c
	goto loc_821C016C;
loc_821C0160:
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x821c0184
	if (!ctx.cr0.eq) goto loc_821C0184;
loc_821C016C:
	// li r7,2284
	ctx.r7.s64 = 2284;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821C0184;
	sub_821BBC58(ctx, base);
loc_821C0184:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821c0208
	if (ctx.cr6.eq) goto loc_821C0208;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r26,r11,4496
	ctx.r26.s64 = ctx.r11.s64 + 4496;
loc_821C0198:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821c01b0
	if (ctx.cr6.eq) goto loc_821C01B0;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x821c01c8
	if (!ctx.cr0.eq) goto loc_821C01C8;
loc_821C01B0:
	// li r7,2293
	ctx.r7.s64 = 2293;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821C01C8;
	sub_821BBC58(ctx, base);
loc_821C01C8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821bf118
	ctx.lr = 0x821C01D0;
	sub_821BF118(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x821c01f4
	if (!ctx.cr0.eq) goto loc_821C01F4;
	// li r7,2297
	ctx.r7.s64 = 2297;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821C01F0;
	sub_821BBC58(ctx, base);
	// b 0x821c01fc
	goto loc_821C01FC;
loc_821C01F4:
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x82257fe8
	ctx.lr = 0x821C01FC;
	sub_82257FE8(ctx, base);
loc_821C01FC:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821c0198
	if (!ctx.cr6.eq) goto loc_821C0198;
loc_821C0208:
	// lwz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x821c021c
	if (ctx.cr0.eq) goto loc_821C021C;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x82257fe8
	ctx.lr = 0x821C021C;
	sub_82257FE8(ctx, base);
loc_821C021C:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821c0244
	if (!ctx.cr6.eq) goto loc_821C0244;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82257e78
	ctx.lr = 0x821C0230;
	sub_82257E78(ctx, base);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C0244;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821C0244:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e992c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C024C"))) PPC_WEAK_FUNC(sub_821C024C);
PPC_FUNC_IMPL(__imp__sub_821C024C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C0250"))) PPC_WEAK_FUNC(sub_821C0250);
PPC_FUNC_IMPL(__imp__sub_821C0250) {
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
	// bne cr6,0x821c028c
	if (!ctx.cr6.eq) goto loc_821C028C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,2334
	ctx.r7.s64 = 2334;
	// addi r6,r11,3976
	ctx.r6.s64 = ctx.r11.s64 + 3976;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,4484
	ctx.r5.s64 = ctx.r11.s64 + 4484;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x821C028C;
	sub_821BBC58(ctx, base);
loc_821C028C:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
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

__attribute__((alias("__imp__sub_821C02A4"))) PPC_WEAK_FUNC(sub_821C02A4);
PPC_FUNC_IMPL(__imp__sub_821C02A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C02A8"))) PPC_WEAK_FUNC(sub_821C02A8);
PPC_FUNC_IMPL(__imp__sub_821C02A8) {
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
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,28
	ctx.r4.s64 = 28;
	// bl 0x82257db8
	ctx.lr = 0x821C02D0;
	sub_82257DB8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x821c02fc
	if (!ctx.cr0.eq) goto loc_821C02FC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,2712
	ctx.r7.s64 = 2712;
	// addi r6,r11,3976
	ctx.r6.s64 = ctx.r11.s64 + 3976;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,4404
	ctx.r5.s64 = ctx.r11.s64 + 4404;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x821C02FC;
	sub_821BBC58(ctx, base);
loc_821C02FC:
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

__attribute__((alias("__imp__sub_821C0314"))) PPC_WEAK_FUNC(sub_821C0314);
PPC_FUNC_IMPL(__imp__sub_821C0314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C0318"))) PPC_WEAK_FUNC(sub_821C0318);
PPC_FUNC_IMPL(__imp__sub_821C0318) {
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
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82257db8
	ctx.lr = 0x821C0340;
	sub_82257DB8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x821c036c
	if (!ctx.cr0.eq) goto loc_821C036C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,2753
	ctx.r7.s64 = 2753;
	// addi r6,r11,3976
	ctx.r6.s64 = ctx.r11.s64 + 3976;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,4404
	ctx.r5.s64 = ctx.r11.s64 + 4404;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x821C036C;
	sub_821BBC58(ctx, base);
loc_821C036C:
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

__attribute__((alias("__imp__sub_821C0384"))) PPC_WEAK_FUNC(sub_821C0384);
PPC_FUNC_IMPL(__imp__sub_821C0384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C0388"))) PPC_WEAK_FUNC(sub_821C0388);
PPC_FUNC_IMPL(__imp__sub_821C0388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x821C0390;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-10544
	ctx.r31.s64 = ctx.r11.s64 + -10544;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r30,r11,3976
	ctx.r30.s64 = ctx.r11.s64 + 3976;
	// bne cr6,0x821c03d0
	if (!ctx.cr6.eq) goto loc_821C03D0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,2913
	ctx.r7.s64 = 2913;
	// addi r5,r11,4572
	ctx.r5.s64 = ctx.r11.s64 + 4572;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821C03D0;
	sub_821BBC58(ctx, base);
loc_821C03D0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x821c03f4
	if (!ctx.cr6.eq) goto loc_821C03F4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,2914
	ctx.r7.s64 = 2914;
	// addi r5,r11,4404
	ctx.r5.s64 = ctx.r11.s64 + 4404;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821C03F4;
	sub_821BBC58(ctx, base);
loc_821C03F4:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c041c
	if (ctx.cr6.eq) goto loc_821C041C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,2917
	ctx.r7.s64 = 2917;
	// addi r5,r11,4548
	ctx.r5.s64 = ctx.r11.s64 + 4548;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821C041C;
	sub_821BBC58(ctx, base);
loc_821C041C:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0444
	if (ctx.cr6.eq) goto loc_821C0444;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,2918
	ctx.r7.s64 = 2918;
	// addi r5,r11,4528
	ctx.r5.s64 = ctx.r11.s64 + 4528;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821C0444;
	sub_821BBC58(ctx, base);
loc_821C0444:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// bl 0x821beed0
	ctx.lr = 0x821C0450;
	sub_821BEED0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r3.u32);
	// bne 0x821c0478
	if (!ctx.cr0.eq) goto loc_821C0478;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,2927
	ctx.r7.s64 = 2927;
	// addi r5,r11,4508
	ctx.r5.s64 = ctx.r11.s64 + 4508;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821C0478;
	sub_821BBC58(ctx, base);
loc_821C0478:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r10,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r10.u32);
	// stw r9,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C04A8"))) PPC_WEAK_FUNC(sub_821C04A8);
PPC_FUNC_IMPL(__imp__sub_821C04A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e0
	ctx.lr = 0x821C04B0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r28,r10,-10544
	ctx.r28.s64 = ctx.r10.s64 + -10544;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r27,r10,4280
	ctx.r27.s64 = ctx.r10.s64 + 4280;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r26,r10,3976
	ctx.r26.s64 = ctx.r10.s64 + 3976;
	// bne 0x821c04e4
	if (!ctx.cr0.eq) goto loc_821C04E4;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x821c04f0
	goto loc_821C04F0;
loc_821C04E4:
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne 0x821c0568
	if (!ctx.cr0.eq) goto loc_821C0568;
loc_821C04F0:
	// li r7,2964
	ctx.r7.s64 = 2964;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821C0508;
	sub_821BBC58(ctx, base);
	// b 0x821c0568
	goto loc_821C0568;
loc_821C050C:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821c0524
	if (ctx.cr6.eq) goto loc_821C0524;
	// lwz r29,8(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne 0x821c053c
	if (!ctx.cr0.eq) goto loc_821C053C;
loc_821C0524:
	// li r7,2973
	ctx.r7.s64 = 2973;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821C053C;
	sub_821BBC58(ctx, base);
loc_821C053C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821bf118
	ctx.lr = 0x821C0544;
	sub_821BF118(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C055C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82257fe8
	ctx.lr = 0x821C0568;
	sub_82257FE8(ctx, base);
loc_821C0568:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821c050c
	if (!ctx.cr6.eq) goto loc_821C050C;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x821c0588
	if (ctx.cr0.eq) goto loc_821C0588;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x82257fe8
	ctx.lr = 0x821C0588;
	sub_82257FE8(ctx, base);
loc_821C0588:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821c05b0
	if (!ctx.cr6.eq) goto loc_821C05B0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82257e78
	ctx.lr = 0x821C059C;
	sub_82257E78(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C05B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821C05B0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e9930
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C05B8"))) PPC_WEAK_FUNC(sub_821C05B8);
PPC_FUNC_IMPL(__imp__sub_821C05B8) {
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
	// bne cr6,0x821c05f4
	if (!ctx.cr6.eq) goto loc_821C05F4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,3010
	ctx.r7.s64 = 3010;
	// addi r6,r11,3976
	ctx.r6.s64 = ctx.r11.s64 + 3976;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,4572
	ctx.r5.s64 = ctx.r11.s64 + 4572;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x821C05F4;
	sub_821BBC58(ctx, base);
loc_821C05F4:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
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

__attribute__((alias("__imp__sub_821C060C"))) PPC_WEAK_FUNC(sub_821C060C);
PPC_FUNC_IMPL(__imp__sub_821C060C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C0610"))) PPC_WEAK_FUNC(sub_821C0610);
PPC_FUNC_IMPL(__imp__sub_821C0610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x821C0618;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-10544
	ctx.r31.s64 = ctx.r11.s64 + -10544;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r30,r11,3976
	ctx.r30.s64 = ctx.r11.s64 + 3976;
	// bne cr6,0x821c0658
	if (!ctx.cr6.eq) goto loc_821C0658;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,3031
	ctx.r7.s64 = 3031;
	// addi r5,r11,4572
	ctx.r5.s64 = ctx.r11.s64 + 4572;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821C0658;
	sub_821BBC58(ctx, base);
loc_821C0658:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x821c067c
	if (!ctx.cr6.eq) goto loc_821C067C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,3032
	ctx.r7.s64 = 3032;
	// addi r5,r11,4212
	ctx.r5.s64 = ctx.r11.s64 + 4212;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821C067C;
	sub_821BBC58(ctx, base);
loc_821C067C:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821c06a4
	if (!ctx.cr6.eq) goto loc_821C06A4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,3033
	ctx.r7.s64 = 3033;
	// addi r5,r11,4584
	ctx.r5.s64 = ctx.r11.s64 + 4584;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821C06A4;
	sub_821BBC58(ctx, base);
loc_821C06A4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x821bef48
	ctx.lr = 0x821C06B0;
	sub_821BEF48(ctx, base);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821c06c4
	if (!ctx.cr6.eq) goto loc_821C06C4;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r28,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
loc_821C06C4:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C06D8"))) PPC_WEAK_FUNC(sub_821C06D8);
PPC_FUNC_IMPL(__imp__sub_821C06D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x821C06E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addi r30,r11,3976
	ctx.r30.s64 = ctx.r11.s64 + 3976;
	// bne cr6,0x821c0720
	if (!ctx.cr6.eq) goto loc_821C0720;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,3070
	ctx.r7.s64 = 3070;
	// addi r5,r11,4572
	ctx.r5.s64 = ctx.r11.s64 + 4572;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821C0720;
	sub_821BBC58(ctx, base);
loc_821C0720:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x821beed0
	ctx.lr = 0x821C0728;
	sub_821BEED0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x821c074c
	if (!ctx.cr0.eq) goto loc_821C074C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,3075
	ctx.r7.s64 = 3075;
	// addi r5,r11,3960
	ctx.r5.s64 = ctx.r11.s64 + 3960;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821C074C;
	sub_821BBC58(ctx, base);
loc_821C074C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r27,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r27.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821c0610
	ctx.lr = 0x821C075C;
	sub_821C0610(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C0768"))) PPC_WEAK_FUNC(sub_821C0768);
PPC_FUNC_IMPL(__imp__sub_821C0768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x821C0770;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-10544
	ctx.r31.s64 = ctx.r11.s64 + -10544;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r30,r11,3976
	ctx.r30.s64 = ctx.r11.s64 + 3976;
	// bne cr6,0x821c07b0
	if (!ctx.cr6.eq) goto loc_821C07B0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,3105
	ctx.r7.s64 = 3105;
	// addi r5,r11,4572
	ctx.r5.s64 = ctx.r11.s64 + 4572;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821C07B0;
	sub_821BBC58(ctx, base);
loc_821C07B0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x821c07d4
	if (!ctx.cr6.eq) goto loc_821C07D4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,3106
	ctx.r7.s64 = 3106;
	// addi r5,r11,4212
	ctx.r5.s64 = ctx.r11.s64 + 4212;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821C07D4;
	sub_821BBC58(ctx, base);
loc_821C07D4:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821c07fc
	if (!ctx.cr6.eq) goto loc_821C07FC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,3107
	ctx.r7.s64 = 3107;
	// addi r5,r11,4584
	ctx.r5.s64 = ctx.r11.s64 + 4584;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821C07FC;
	sub_821BBC58(ctx, base);
loc_821C07FC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x821bf030
	ctx.lr = 0x821C0808;
	sub_821BF030(ctx, base);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821c081c
	if (!ctx.cr6.eq) goto loc_821C081C;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r28,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
loc_821C081C:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C0830"))) PPC_WEAK_FUNC(sub_821C0830);
PPC_FUNC_IMPL(__imp__sub_821C0830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x821C0838;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addi r30,r11,3976
	ctx.r30.s64 = ctx.r11.s64 + 3976;
	// bne cr6,0x821c0878
	if (!ctx.cr6.eq) goto loc_821C0878;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,3144
	ctx.r7.s64 = 3144;
	// addi r5,r11,4572
	ctx.r5.s64 = ctx.r11.s64 + 4572;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821C0878;
	sub_821BBC58(ctx, base);
loc_821C0878:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x821beed0
	ctx.lr = 0x821C0880;
	sub_821BEED0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x821c08a4
	if (!ctx.cr0.eq) goto loc_821C08A4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,3149
	ctx.r7.s64 = 3149;
	// addi r5,r11,3960
	ctx.r5.s64 = ctx.r11.s64 + 3960;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821C08A4;
	sub_821BBC58(ctx, base);
loc_821C08A4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r27,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r27.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821c0768
	ctx.lr = 0x821C08B4;
	sub_821C0768(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C08C0"))) PPC_WEAK_FUNC(sub_821C08C0);
PPC_FUNC_IMPL(__imp__sub_821C08C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x821C08C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,3976
	ctx.r29.s64 = ctx.r11.s64 + 3976;
	// bne cr6,0x821c0904
	if (!ctx.cr6.eq) goto loc_821C0904;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,3202
	ctx.r7.s64 = 3202;
	// addi r5,r11,4572
	ctx.r5.s64 = ctx.r11.s64 + 4572;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821C0904;
	sub_821BBC58(ctx, base);
loc_821C0904:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821c0918
	if (!ctx.cr6.eq) goto loc_821C0918;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821c0958
	goto loc_821C0958;
loc_821C0918:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821c092c
	if (!ctx.cr0.eq) goto loc_821C092C;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x821c0938
	goto loc_821C0938;
loc_821C092C:
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x821c0954
	if (!ctx.cr0.eq) goto loc_821C0954;
loc_821C0938:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,3214
	ctx.r7.s64 = 3214;
	// addi r5,r11,4336
	ctx.r5.s64 = ctx.r11.s64 + 4336;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821C0954;
	sub_821BBC58(ctx, base);
loc_821C0954:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821C0958:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C0960"))) PPC_WEAK_FUNC(sub_821C0960);
PPC_FUNC_IMPL(__imp__sub_821C0960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x821C0968;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-10544
	ctx.r31.s64 = ctx.r11.s64 + -10544;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r30,r11,3976
	ctx.r30.s64 = ctx.r11.s64 + 3976;
	// bne cr6,0x821c09a4
	if (!ctx.cr6.eq) goto loc_821C09A4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,3388
	ctx.r7.s64 = 3388;
	// addi r5,r11,4572
	ctx.r5.s64 = ctx.r11.s64 + 4572;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821C09A4;
	sub_821BBC58(ctx, base);
loc_821C09A4:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821c09b8
	if (!ctx.cr6.eq) goto loc_821C09B8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821c0a30
	goto loc_821C0A30;
loc_821C09B8:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821c09cc
	if (!ctx.cr0.eq) goto loc_821C09CC;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x821c09d8
	goto loc_821C09D8;
loc_821C09CC:
	// lwz r28,8(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi r28,0
	ctx.cr0.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne 0x821c09f4
	if (!ctx.cr0.eq) goto loc_821C09F4;
loc_821C09D8:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,3399
	ctx.r7.s64 = 3399;
	// addi r5,r11,4336
	ctx.r5.s64 = ctx.r11.s64 + 4336;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821C09F4;
	sub_821BBC58(ctx, base);
loc_821C09F4:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821c0a1c
	if (!ctx.cr6.eq) goto loc_821C0A1C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,3402
	ctx.r7.s64 = 3402;
	// addi r5,r11,4624
	ctx.r5.s64 = ctx.r11.s64 + 4624;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821C0A1C;
	sub_821BBC58(ctx, base);
loc_821C0A1C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821bf118
	ctx.lr = 0x821C0A24;
	sub_821BF118(ctx, base);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
loc_821C0A30:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C0A38"))) PPC_WEAK_FUNC(sub_821C0A38);
PPC_FUNC_IMPL(__imp__sub_821C0A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x821C0A40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-10544
	ctx.r31.s64 = ctx.r11.s64 + -10544;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r30,r11,3976
	ctx.r30.s64 = ctx.r11.s64 + 3976;
	// bne cr6,0x821c0a7c
	if (!ctx.cr6.eq) goto loc_821C0A7C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,3430
	ctx.r7.s64 = 3430;
	// addi r5,r11,4572
	ctx.r5.s64 = ctx.r11.s64 + 4572;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821C0A7C;
	sub_821BBC58(ctx, base);
loc_821C0A7C:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821c0a90
	if (!ctx.cr6.eq) goto loc_821C0A90;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821c0b08
	goto loc_821C0B08;
loc_821C0A90:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821c0aa4
	if (!ctx.cr0.eq) goto loc_821C0AA4;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x821c0ab0
	goto loc_821C0AB0;
loc_821C0AA4:
	// lwz r28,4(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi r28,0
	ctx.cr0.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne 0x821c0acc
	if (!ctx.cr0.eq) goto loc_821C0ACC;
loc_821C0AB0:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,3441
	ctx.r7.s64 = 3441;
	// addi r5,r11,4616
	ctx.r5.s64 = ctx.r11.s64 + 4616;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821C0ACC;
	sub_821BBC58(ctx, base);
loc_821C0ACC:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821c0af4
	if (!ctx.cr6.eq) goto loc_821C0AF4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,3444
	ctx.r7.s64 = 3444;
	// addi r5,r11,4656
	ctx.r5.s64 = ctx.r11.s64 + 4656;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821C0AF4;
	sub_821BBC58(ctx, base);
loc_821C0AF4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821bf118
	ctx.lr = 0x821C0AFC;
	sub_821BF118(ctx, base);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
loc_821C0B08:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C0B10"))) PPC_WEAK_FUNC(sub_821C0B10);
PPC_FUNC_IMPL(__imp__sub_821C0B10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x821C0B18;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-10544
	ctx.r31.s64 = ctx.r11.s64 + -10544;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r30,r11,3976
	ctx.r30.s64 = ctx.r11.s64 + 3976;
	// bne cr6,0x821c0b58
	if (!ctx.cr6.eq) goto loc_821C0B58;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,3473
	ctx.r7.s64 = 3473;
	// addi r5,r11,4572
	ctx.r5.s64 = ctx.r11.s64 + 4572;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821C0B58;
	sub_821BBC58(ctx, base);
loc_821C0B58:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x821c0b7c
	if (!ctx.cr6.eq) goto loc_821C0B7C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,3474
	ctx.r7.s64 = 3474;
	// addi r5,r11,4212
	ctx.r5.s64 = ctx.r11.s64 + 4212;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821C0B7C;
	sub_821BBC58(ctx, base);
loc_821C0B7C:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821c0ba4
	if (!ctx.cr6.eq) goto loc_821C0BA4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,3477
	ctx.r7.s64 = 3477;
	// addi r5,r11,4584
	ctx.r5.s64 = ctx.r11.s64 + 4584;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821C0BA4;
	sub_821BBC58(ctx, base);
loc_821C0BA4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821bf118
	ctx.lr = 0x821C0BAC;
	sub_821BF118(ctx, base);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C0BC0"))) PPC_WEAK_FUNC(sub_821C0BC0);
PPC_FUNC_IMPL(__imp__sub_821C0BC0) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x821c0c08
	if (!ctx.cr6.eq) goto loc_821C0C08;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,3540
	ctx.r7.s64 = 3540;
	// addi r6,r11,3976
	ctx.r6.s64 = ctx.r11.s64 + 3976;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,4212
	ctx.r5.s64 = ctx.r11.s64 + 4212;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x821C0C00;
	sub_821BBC58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821c0c0c
	goto loc_821C0C0C;
loc_821C0C08:
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
loc_821C0C0C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821c0c1c
	if (!ctx.cr6.eq) goto loc_821C0C1C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_821C0C1C:
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

__attribute__((alias("__imp__sub_821C0C30"))) PPC_WEAK_FUNC(sub_821C0C30);
PPC_FUNC_IMPL(__imp__sub_821C0C30) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x821c0c5c
	if (!ctx.cr6.eq) goto loc_821C0C5C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,3575
	ctx.r7.s64 = 3575;
	// addi r6,r11,3976
	ctx.r6.s64 = ctx.r11.s64 + 3976;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,4212
	ctx.r5.s64 = ctx.r11.s64 + 4212;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// b 0x821bbc58
	sub_821BBC58(ctx, base);
	return;
loc_821C0C5C:
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x82257fe8
	sub_82257FE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C0C64"))) PPC_WEAK_FUNC(sub_821C0C64);
PPC_FUNC_IMPL(__imp__sub_821C0C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C0C68"))) PPC_WEAK_FUNC(sub_821C0C68);
PPC_FUNC_IMPL(__imp__sub_821C0C68) {
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
	// bne cr6,0x821c0ca4
	if (!ctx.cr6.eq) goto loc_821C0CA4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,3596
	ctx.r7.s64 = 3596;
	// addi r6,r11,3976
	ctx.r6.s64 = ctx.r11.s64 + 3976;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,4212
	ctx.r5.s64 = ctx.r11.s64 + 4212;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x821C0CA4;
	sub_821BBC58(ctx, base);
loc_821C0CA4:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
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

__attribute__((alias("__imp__sub_821C0CBC"))) PPC_WEAK_FUNC(sub_821C0CBC);
PPC_FUNC_IMPL(__imp__sub_821C0CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C0CC0"))) PPC_WEAK_FUNC(sub_821C0CC0);
PPC_FUNC_IMPL(__imp__sub_821C0CC0) {
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
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,28
	ctx.r4.s64 = 28;
	// bl 0x82257db8
	ctx.lr = 0x821C0CE8;
	sub_82257DB8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x821c0d14
	if (!ctx.cr0.eq) goto loc_821C0D14;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,3636
	ctx.r7.s64 = 3636;
	// addi r6,r11,3976
	ctx.r6.s64 = ctx.r11.s64 + 3976;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,4404
	ctx.r5.s64 = ctx.r11.s64 + 4404;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x821C0D14;
	sub_821BBC58(ctx, base);
loc_821C0D14:
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

__attribute__((alias("__imp__sub_821C0D2C"))) PPC_WEAK_FUNC(sub_821C0D2C);
PPC_FUNC_IMPL(__imp__sub_821C0D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C0D30"))) PPC_WEAK_FUNC(sub_821C0D30);
PPC_FUNC_IMPL(__imp__sub_821C0D30) {
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
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82257db8
	ctx.lr = 0x821C0D58;
	sub_82257DB8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x821c0d84
	if (!ctx.cr0.eq) goto loc_821C0D84;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,3676
	ctx.r7.s64 = 3676;
	// addi r6,r11,3976
	ctx.r6.s64 = ctx.r11.s64 + 3976;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,4404
	ctx.r5.s64 = ctx.r11.s64 + 4404;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x821C0D84;
	sub_821BBC58(ctx, base);
loc_821C0D84:
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

__attribute__((alias("__imp__sub_821C0D9C"))) PPC_WEAK_FUNC(sub_821C0D9C);
PPC_FUNC_IMPL(__imp__sub_821C0D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C0DA0"))) PPC_WEAK_FUNC(sub_821C0DA0);
PPC_FUNC_IMPL(__imp__sub_821C0DA0) {
	PPC_FUNC_PROLOGUE();
	// li r3,28
	ctx.r3.s64 = 28;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821C0DA8"))) PPC_WEAK_FUNC(sub_821C0DA8);
PPC_FUNC_IMPL(__imp__sub_821C0DA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98dc
	ctx.lr = 0x821C0DB0;
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
	// addi r28,r11,3976
	ctx.r28.s64 = ctx.r11.s64 + 3976;
	// bne cr6,0x821c0df8
	if (!ctx.cr6.eq) goto loc_821C0DF8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,2860
	ctx.r7.s64 = 2860;
	// addi r5,r11,4264
	ctx.r5.s64 = ctx.r11.s64 + 4264;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821C0DF8;
	sub_821BBC58(ctx, base);
loc_821C0DF8:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x821c0e1c
	if (!ctx.cr6.eq) goto loc_821C0E1C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,2861
	ctx.r7.s64 = 2861;
	// addi r5,r11,4252
	ctx.r5.s64 = ctx.r11.s64 + 4252;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821C0E1C;
	sub_821BBC58(ctx, base);
loc_821C0E1C:
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x821C0E2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x821c0e50
	if (!ctx.cr0.eq) goto loc_821C0E50;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,2867
	ctx.r7.s64 = 2867;
	// addi r5,r11,4240
	ctx.r5.s64 = ctx.r11.s64 + 4240;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821C0E50;
	sub_821BBC58(ctx, base);
loc_821C0E50:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r26,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82257db8
	ctx.lr = 0x821C0E74;
	sub_82257DB8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x821c0e98
	if (!ctx.cr0.eq) goto loc_821C0E98;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,2878
	ctx.r7.s64 = 2878;
	// addi r5,r11,4404
	ctx.r5.s64 = ctx.r11.s64 + 4404;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821C0E98;
	sub_821BBC58(ctx, base);
loc_821C0E98:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c0388
	ctx.lr = 0x821C0EA4;
	sub_821C0388(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e992c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C0EB8"))) PPC_WEAK_FUNC(sub_821C0EB8);
PPC_FUNC_IMPL(__imp__sub_821C0EB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98cc
	ctx.lr = 0x821C0EC0;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r30,r11,-10544
	ctx.r30.s64 = ctx.r11.s64 + -10544;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// mr r21,r10
	ctx.r21.u64 = ctx.r10.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// addi r29,r11,4792
	ctx.r29.s64 = ctx.r11.s64 + 4792;
	// bne cr6,0x821c0f18
	if (!ctx.cr6.eq) goto loc_821C0F18;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,155
	ctx.r7.s64 = 155;
	// addi r5,r11,4264
	ctx.r5.s64 = ctx.r11.s64 + 4264;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821C0F18;
	sub_821BBC58(ctx, base);
loc_821C0F18:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x821c0f3c
	if (!ctx.cr6.eq) goto loc_821C0F3C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,156
	ctx.r7.s64 = 156;
	// addi r5,r11,4252
	ctx.r5.s64 = ctx.r11.s64 + 4252;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821C0F3C;
	sub_821BBC58(ctx, base);
loc_821C0F3C:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x821c0f60
	if (!ctx.cr6.eq) goto loc_821C0F60;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,157
	ctx.r7.s64 = 157;
	// addi r5,r11,4780
	ctx.r5.s64 = ctx.r11.s64 + 4780;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821C0F60;
	sub_821BBC58(ctx, base);
loc_821C0F60:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x821c0f84
	if (!ctx.cr6.eq) goto loc_821C0F84;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,158
	ctx.r7.s64 = 158;
	// addi r5,r11,4764
	ctx.r5.s64 = ctx.r11.s64 + 4764;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821C0F84;
	sub_821BBC58(ctx, base);
loc_821C0F84:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x821c0fa8
	if (!ctx.cr6.eq) goto loc_821C0FA8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,159
	ctx.r7.s64 = 159;
	// addi r5,r11,4748
	ctx.r5.s64 = ctx.r11.s64 + 4748;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821C0FA8;
	sub_821BBC58(ctx, base);
loc_821C0FA8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x821c0fcc
	if (!ctx.cr6.eq) goto loc_821C0FCC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,160
	ctx.r7.s64 = 160;
	// addi r5,r11,4732
	ctx.r5.s64 = ctx.r11.s64 + 4732;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821C0FCC;
	sub_821BBC58(ctx, base);
loc_821C0FCC:
	// li r4,2452
	ctx.r4.s64 = 2452;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x821C0FDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x821c1008
	if (!ctx.cr0.eq) goto loc_821C1008;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,166
	ctx.r7.s64 = 166;
	// addi r5,r11,4688
	ctx.r5.s64 = ctx.r11.s64 + 4688;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821C1000;
	sub_821BBC58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821c109c
	goto loc_821C109C;
loc_821C1008:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r23,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r23.u32);
	// stw r22,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r22.u32);
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// stw r25,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r25.u32);
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// stw r10,2448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2448, ctx.r10.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r21,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r21.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x82258588
	ctx.lr = 0x821C1050;
	sub_82258588(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,2428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2428, ctx.r11.u32);
	// bl 0x82258588
	ctx.lr = 0x821C1060;
	sub_82258588(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,2436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2436, ctx.r11.u32);
	// bl 0x82258588
	ctx.lr = 0x821C1070;
	sub_82258588(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,2440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2440, ctx.r11.u32);
	// bl 0x822580f8
	ctx.lr = 0x821C1080;
	sub_822580F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r11,2432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2432, ctx.r11.u32);
	// bl 0x82258348
	ctx.lr = 0x821C1090;
	sub_82258348(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,2444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2444, ctx.r11.u32);
loc_821C109C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822e991c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C10A4"))) PPC_WEAK_FUNC(sub_821C10A4);
PPC_FUNC_IMPL(__imp__sub_821C10A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C10A8"))) PPC_WEAK_FUNC(sub_821C10A8);
PPC_FUNC_IMPL(__imp__sub_821C10A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x821C10B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,4792
	ctx.r29.s64 = ctx.r11.s64 + 4792;
	// bne cr6,0x821c10ec
	if (!ctx.cr6.eq) goto loc_821C10EC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,230
	ctx.r7.s64 = 230;
	// addi r5,r11,3856
	ctx.r5.s64 = ctx.r11.s64 + 3856;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821C10EC;
	sub_821BBC58(ctx, base);
loc_821C10EC:
	// lwz r11,2448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2448);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,2448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2448, ctx.r11.u32);
	// bne 0x821c1270
	if (!ctx.cr0.eq) goto loc_821C1270;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c1120
	if (ctx.cr6.eq) goto loc_821C1120;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,241
	ctx.r7.s64 = 241;
	// addi r5,r11,4888
	ctx.r5.s64 = ctx.r11.s64 + 4888;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821C1120;
	sub_821BBC58(ctx, base);
loc_821C1120:
	// lwz r4,2444(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2444);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x822583e0
	ctx.lr = 0x821C112C;
	sub_822583E0(ctx, base);
	// b 0x821c1154
	goto loc_821C1154;
loc_821C1130:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c0c68
	ctx.lr = 0x821C1138;
	sub_821C0C68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C114C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c0c30
	ctx.lr = 0x821C1154;
	sub_821C0C30(ctx, base);
loc_821C1154:
	// lwz r3,2440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2440);
	// bl 0x821c0960
	ctx.lr = 0x821C115C;
	sub_821C0960(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x821c1130
	if (!ctx.cr0.eq) goto loc_821C1130;
	// lwz r4,2440(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2440);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82258620
	ctx.lr = 0x821C1170;
	sub_82258620(ctx, base);
	// b 0x821c1198
	goto loc_821C1198;
loc_821C1174:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c0c68
	ctx.lr = 0x821C117C;
	sub_821C0C68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C1190;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c0c30
	ctx.lr = 0x821C1198;
	sub_821C0C30(ctx, base);
loc_821C1198:
	// lwz r3,2436(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2436);
	// bl 0x821c0960
	ctx.lr = 0x821C11A0;
	sub_821C0960(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x821c1174
	if (!ctx.cr0.eq) goto loc_821C1174;
	// lwz r4,2436(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2436);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82258620
	ctx.lr = 0x821C11B4;
	sub_82258620(ctx, base);
	// b 0x821c11dc
	goto loc_821C11DC;
loc_821C11B8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c0c68
	ctx.lr = 0x821C11C0;
	sub_821C0C68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C11D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c0c30
	ctx.lr = 0x821C11DC;
	sub_821C0C30(ctx, base);
loc_821C11DC:
	// lwz r3,2428(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2428);
	// bl 0x821c0960
	ctx.lr = 0x821C11E4;
	sub_821C0960(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x821c11b8
	if (!ctx.cr0.eq) goto loc_821C11B8;
	// lwz r4,2428(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2428);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82258620
	ctx.lr = 0x821C11F8;
	sub_82258620(ctx, base);
	// b 0x821c120c
	goto loc_821C120C;
loc_821C11FC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C120C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821C120C:
	// lwz r3,2432(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2432);
	// bl 0x821bfdc8
	ctx.lr = 0x821C1214;
	sub_821BFDC8(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x821c11fc
	if (!ctx.cr0.eq) goto loc_821C11FC;
	// lwz r4,2432(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2432);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x822581a0
	ctx.lr = 0x821C1228;
	sub_822581A0(ctx, base);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x821c29e0
	ctx.lr = 0x821C1230;
	sub_821C29E0(ctx, base);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821c1240
	if (ctx.cr0.eq) goto loc_821C1240;
	// bl 0x82258d50
	ctx.lr = 0x821C1240;
	sub_82258D50(ctx, base);
loc_821C1240:
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x821c125c
	if (ctx.cr0.eq) goto loc_821C125C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C125C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821C125C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C1270;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821C1270:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C1278"))) PPC_WEAK_FUNC(sub_821C1278);
PPC_FUNC_IMPL(__imp__sub_821C1278) {
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
	// bne cr6,0x821c12b4
	if (!ctx.cr6.eq) goto loc_821C12B4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,314
	ctx.r7.s64 = 314;
	// addi r6,r11,4792
	ctx.r6.s64 = ctx.r11.s64 + 4792;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,3856
	ctx.r5.s64 = ctx.r11.s64 + 3856;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x821C12B4;
	sub_821BBC58(ctx, base);
loc_821C12B4:
	// lwz r11,2448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2448);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2448, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_821C12D4"))) PPC_WEAK_FUNC(sub_821C12D4);
PPC_FUNC_IMPL(__imp__sub_821C12D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C12D8"))) PPC_WEAK_FUNC(sub_821C12D8);
PPC_FUNC_IMPL(__imp__sub_821C12D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x821C12E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,4792
	ctx.r29.s64 = ctx.r11.s64 + 4792;
	// bne cr6,0x821c1320
	if (!ctx.cr6.eq) goto loc_821C1320;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,376
	ctx.r7.s64 = 376;
	// addi r5,r11,3856
	ctx.r5.s64 = ctx.r11.s64 + 3856;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821C1320;
	sub_821BBC58(ctx, base);
loc_821C1320:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r27,r11,27,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// bne cr6,0x821c1348
	if (!ctx.cr6.eq) goto loc_821C1348;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x821c1370
	goto loc_821C1370;
loc_821C1348:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// beq cr6,0x821c136c
	if (ctx.cr6.eq) goto loc_821C136C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,395
	ctx.r7.s64 = 395;
	// addi r5,r11,4908
	ctx.r5.s64 = ctx.r11.s64 + 4908;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821C136C;
	sub_821BBC58(ctx, base);
loc_821C136C:
	// li r7,1
	ctx.r7.s64 = 1;
loc_821C1370:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82258c00
	ctx.lr = 0x821C1388;
	sub_82258C00(ctx, base);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C1394"))) PPC_WEAK_FUNC(sub_821C1394);
PPC_FUNC_IMPL(__imp__sub_821C1394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C1398"))) PPC_WEAK_FUNC(sub_821C1398);
PPC_FUNC_IMPL(__imp__sub_821C1398) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c13b4
	if (ctx.cr6.eq) goto loc_821C13B4;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_821C13B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821C13BC"))) PPC_WEAK_FUNC(sub_821C13BC);
PPC_FUNC_IMPL(__imp__sub_821C13BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C13C0"))) PPC_WEAK_FUNC(sub_821C13C0);
PPC_FUNC_IMPL(__imp__sub_821C13C0) {
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
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821c140c
	if (ctx.cr6.lt) goto loc_821C140C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,309
	ctx.r7.s64 = 309;
	// addi r6,r11,-10200
	ctx.r6.s64 = ctx.r11.s64 + -10200;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-10272
	ctx.r5.s64 = ctx.r11.s64 + -10272;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x821C140C;
	sub_821BBC58(ctx, base);
loc_821C140C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
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

__attribute__((alias("__imp__sub_821C1430"))) PPC_WEAK_FUNC(sub_821C1430);
PPC_FUNC_IMPL(__imp__sub_821C1430) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821c1474
	if (!ctx.cr6.eq) goto loc_821C1474;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,452
	ctx.r7.s64 = 452;
	// addi r6,r11,4792
	ctx.r6.s64 = ctx.r11.s64 + 4792;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,3856
	ctx.r5.s64 = ctx.r11.s64 + 3856;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x821C1474;
	sub_821BBC58(ctx, base);
loc_821C1474:
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_821C1490"))) PPC_WEAK_FUNC(sub_821C1490);
PPC_FUNC_IMPL(__imp__sub_821C1490) {
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
	// bne cr6,0x821c14cc
	if (!ctx.cr6.eq) goto loc_821C14CC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,472
	ctx.r7.s64 = 472;
	// addi r6,r11,4792
	ctx.r6.s64 = ctx.r11.s64 + 4792;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,3856
	ctx.r5.s64 = ctx.r11.s64 + 3856;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x821C14CC;
	sub_821BBC58(ctx, base);
loc_821C14CC:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
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

__attribute__((alias("__imp__sub_821C14E4"))) PPC_WEAK_FUNC(sub_821C14E4);
PPC_FUNC_IMPL(__imp__sub_821C14E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C14E8"))) PPC_WEAK_FUNC(sub_821C14E8);
PPC_FUNC_IMPL(__imp__sub_821C14E8) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821c152c
	if (!ctx.cr6.eq) goto loc_821C152C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,498
	ctx.r7.s64 = 498;
	// addi r6,r11,4792
	ctx.r6.s64 = ctx.r11.s64 + 4792;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,3856
	ctx.r5.s64 = ctx.r11.s64 + 3856;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x821C152C;
	sub_821BBC58(ctx, base);
loc_821C152C:
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_821C1548"))) PPC_WEAK_FUNC(sub_821C1548);
PPC_FUNC_IMPL(__imp__sub_821C1548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e0
	ctx.lr = 0x821C1550;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-10544
	ctx.r30.s64 = ctx.r11.s64 + -10544;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// rlwinm r27,r28,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,4792
	ctx.r29.s64 = ctx.r11.s64 + 4792;
	// bne cr6,0x821c1598
	if (!ctx.cr6.eq) goto loc_821C1598;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,550
	ctx.r7.s64 = 550;
	// addi r5,r11,3856
	ctx.r5.s64 = ctx.r11.s64 + 3856;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821C1598;
	sub_821BBC58(ctx, base);
loc_821C1598:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r27,8
	ctx.r4.s64 = ctx.r27.s64 + 8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C15AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// bne 0x821c15dc
	if (!ctx.cr0.eq) goto loc_821C15DC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,557
	ctx.r7.s64 = 557;
	// addi r5,r11,5024
	ctx.r5.s64 = ctx.r11.s64 + 5024;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821C15D4;
	sub_821BBC58(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x821c1668
	goto loc_821C1668;
loc_821C15DC:
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// divwu r10,r11,r10
	ctx.r10.u32 = ctx.r11.u32 / ctx.r10.u32;
	// mulli r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 * 3;
	// subf. r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821c1624
	if (ctx.cr0.eq) goto loc_821C1624;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,563
	ctx.r7.s64 = 563;
	// addi r5,r11,4980
	ctx.r5.s64 = ctx.r11.s64 + 4980;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821C1624;
	sub_821BBC58(ctx, base);
loc_821C1624:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,16384
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16384, ctx.xer);
	// blt cr6,0x821c1650
	if (ctx.cr6.lt) goto loc_821C1650;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,564
	ctx.r7.s64 = 564;
	// addi r5,r11,4940
	ctx.r5.s64 = ctx.r11.s64 + 4940;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821C1650;
	sub_821BBC58(ctx, base);
loc_821C1650:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x822e9960
	ctx.lr = 0x821C1664;
	sub_822E9960(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_821C1668:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e9930
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C1670"))) PPC_WEAK_FUNC(sub_821C1670);
PPC_FUNC_IMPL(__imp__sub_821C1670) {
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
	// bne cr6,0x821c16ac
	if (!ctx.cr6.eq) goto loc_821C16AC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,591
	ctx.r7.s64 = 591;
	// addi r6,r11,4792
	ctx.r6.s64 = ctx.r11.s64 + 4792;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,3856
	ctx.r5.s64 = ctx.r11.s64 + 3856;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x821C16AC;
	sub_821BBC58(ctx, base);
loc_821C16AC:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
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

__attribute__((alias("__imp__sub_821C16C4"))) PPC_WEAK_FUNC(sub_821C16C4);
PPC_FUNC_IMPL(__imp__sub_821C16C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C16C8"))) PPC_WEAK_FUNC(sub_821C16C8);
PPC_FUNC_IMPL(__imp__sub_821C16C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x821C16D0;
	__savegprlr_27(ctx, base);
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
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r28,r11,-10544
	ctx.r28.s64 = ctx.r11.s64 + -10544;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r27,r11,-10200
	ctx.r27.s64 = ctx.r11.s64 + -10200;
	// blt cr6,0x821c1718
	if (ctx.cr6.lt) goto loc_821C1718;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,634
	ctx.r7.s64 = 634;
	// addi r5,r11,-10048
	ctx.r5.s64 = ctx.r11.s64 + -10048;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821C1718;
	sub_821BBC58(ctx, base);
loc_821C1718:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mulli r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 * 12;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821c174c
	if (ctx.cr6.lt) goto loc_821C174C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,634
	ctx.r7.s64 = 634;
	// addi r5,r11,-10120
	ctx.r5.s64 = ctx.r11.s64 + -10120;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821C174C;
	sub_821BBC58(ctx, base);
loc_821C174C:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r10,r10,r29
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821c13c0
	ctx.lr = 0x821C176C;
	sub_821C13C0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C1774"))) PPC_WEAK_FUNC(sub_821C1774);
PPC_FUNC_IMPL(__imp__sub_821C1774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C1778"))) PPC_WEAK_FUNC(sub_821C1778);
PPC_FUNC_IMPL(__imp__sub_821C1778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x821C1780;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-10544
	ctx.r31.s64 = ctx.r11.s64 + -10544;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r30,r11,4792
	ctx.r30.s64 = ctx.r11.s64 + 4792;
	// bne cr6,0x821c17c4
	if (!ctx.cr6.eq) goto loc_821C17C4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,919
	ctx.r7.s64 = 919;
	// addi r5,r11,3856
	ctx.r5.s64 = ctx.r11.s64 + 3856;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821C17C4;
	sub_821BBC58(ctx, base);
loc_821C17C4:
	// cmplwi cr6,r28,16
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 16, ctx.xer);
	// blt cr6,0x821c17e8
	if (ctx.cr6.lt) goto loc_821C17E8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,920
	ctx.r7.s64 = 920;
	// addi r5,r11,5220
	ctx.r5.s64 = ctx.r11.s64 + 5220;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821C17E8;
	sub_821BBC58(ctx, base);
loc_821C17E8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x821c180c
	if (!ctx.cr6.eq) goto loc_821C180C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,921
	ctx.r7.s64 = 921;
	// addi r5,r11,5252
	ctx.r5.s64 = ctx.r11.s64 + 5252;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821C180C;
	sub_821BBC58(ctx, base);
loc_821C180C:
	// mulli r11,r28,148
	ctx.r11.s64 = ctx.r28.s64 * 148;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r5,148
	ctx.r5.s64 = 148;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r11,60
	ctx.r4.s64 = ctx.r11.s64 + 60;
	// bl 0x822e9960
	ctx.lr = 0x821C1824;
	sub_822E9960(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C1830"))) PPC_WEAK_FUNC(sub_821C1830);
PPC_FUNC_IMPL(__imp__sub_821C1830) {
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
	// bne cr6,0x821c186c
	if (!ctx.cr6.eq) goto loc_821C186C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,997
	ctx.r7.s64 = 997;
	// addi r6,r11,4792
	ctx.r6.s64 = ctx.r11.s64 + 4792;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,3856
	ctx.r5.s64 = ctx.r11.s64 + 3856;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x821C186C;
	sub_821BBC58(ctx, base);
loc_821C186C:
	// lwz r3,2428(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2428);
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

__attribute__((alias("__imp__sub_821C1884"))) PPC_WEAK_FUNC(sub_821C1884);
PPC_FUNC_IMPL(__imp__sub_821C1884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C1888"))) PPC_WEAK_FUNC(sub_821C1888);
PPC_FUNC_IMPL(__imp__sub_821C1888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x821C1890;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-10544
	ctx.r31.s64 = ctx.r11.s64 + -10544;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r30,r11,4792
	ctx.r30.s64 = ctx.r11.s64 + 4792;
	// bne cr6,0x821c18d4
	if (!ctx.cr6.eq) goto loc_821C18D4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,1100
	ctx.r7.s64 = 1100;
	// addi r5,r11,3856
	ctx.r5.s64 = ctx.r11.s64 + 3856;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821C18D4;
	sub_821BBC58(ctx, base);
loc_821C18D4:
	// cmpwi cr6,r28,1966
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1966, ctx.xer);
	// bge cr6,0x821c18f8
	if (!ctx.cr6.lt) goto loc_821C18F8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,1101
	ctx.r7.s64 = 1101;
	// addi r5,r11,5440
	ctx.r5.s64 = ctx.r11.s64 + 5440;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821C18F8;
	sub_821BBC58(ctx, base);
loc_821C18F8:
	// cmpwi cr6,r28,2086
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2086, ctx.xer);
	// blt cr6,0x821c191c
	if (ctx.cr6.lt) goto loc_821C191C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,1102
	ctx.r7.s64 = 1102;
	// addi r5,r11,5412
	ctx.r5.s64 = ctx.r11.s64 + 5412;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821C191C;
	sub_821BBC58(ctx, base);
loc_821C191C:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C1930;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x821c195c
	if (!ctx.cr0.eq) goto loc_821C195C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,1110
	ctx.r7.s64 = 1110;
	// addi r5,r11,5352
	ctx.r5.s64 = ctx.r11.s64 + 5352;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821C1954;
	sub_821BBC58(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x821c1970
	goto loc_821C1970;
loc_821C195C:
	// stw r28,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r28.u32);
	// stw r27,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r27.u32);
	// lwz r3,2440(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2440);
	// bl 0x821c0830
	ctx.lr = 0x821C196C;
	sub_821C0830(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_821C1970:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821C1978"))) PPC_WEAK_FUNC(sub_821C1978);
PPC_FUNC_IMPL(__imp__sub_821C1978) {
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
	// bne cr6,0x821c19b4
	if (!ctx.cr6.eq) goto loc_821C19B4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,1138
	ctx.r7.s64 = 1138;
	// addi r6,r11,4792
	ctx.r6.s64 = ctx.r11.s64 + 4792;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,3856
	ctx.r5.s64 = ctx.r11.s64 + 3856;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,-10544
	ctx.r4.s64 = ctx.r11.s64 + -10544;
	// bl 0x821bbc58
	ctx.lr = 0x821C19B4;
	sub_821BBC58(ctx, base);
loc_821C19B4:
	// lwz r3,2440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2440);
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

__attribute__((alias("__imp__sub_821C19CC"))) PPC_WEAK_FUNC(sub_821C19CC);
PPC_FUNC_IMPL(__imp__sub_821C19CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821C19D0"))) PPC_WEAK_FUNC(sub_821C19D0);
PPC_FUNC_IMPL(__imp__sub_821C19D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e0
	ctx.lr = 0x821C19D8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,4792
	ctx.r29.s64 = ctx.r11.s64 + 4792;
	// bne cr6,0x821c1a20
	if (!ctx.cr6.eq) goto loc_821C1A20;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,1177
	ctx.r7.s64 = 1177;
	// addi r5,r11,3856
	ctx.r5.s64 = ctx.r11.s64 + 3856;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821C1A20;
	sub_821BBC58(ctx, base);
loc_821C1A20:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C1A34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x821c1a60
	if (!ctx.cr0.eq) goto loc_821C1A60;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,1186
	ctx.r7.s64 = 1186;
	// addi r5,r11,5464
	ctx.r5.s64 = ctx.r11.s64 + 5464;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821bbc58
	ctx.lr = 0x821C1A58;
	sub_821BBC58(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x821c1a80
	goto loc_821C1A80;
loc_821C1A60:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r28.u32);
	// stw r27,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r27.u32);
	// stw r26,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r26.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r3,2436(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2436);
	// bl 0x821c0830
	ctx.lr = 0x821C1A7C;
	sub_821C0830(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_821C1A80:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e9930
	__restgprlr_26(ctx, base);
	return;
}

