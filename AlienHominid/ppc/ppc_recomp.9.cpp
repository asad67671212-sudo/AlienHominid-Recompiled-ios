#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_820F0A8C"))) PPC_WEAK_FUNC(sub_820F0A8C);
PPC_FUNC_IMPL(__imp__sub_820F0A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F0A90"))) PPC_WEAK_FUNC(sub_820F0A90);
PPC_FUNC_IMPL(__imp__sub_820F0A90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11716(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11716);
	// lwz r10,11712(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11712);
	// rlwimi r10,r4,5,24,26
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 5) & 0xE0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF1F);
	// stw r10,11712(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11712, ctx.r10.u32);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,11712(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11712);
	// bne 0x820f0ad4
	if (!ctx.cr0.eq) goto loc_820F0AD4;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// andi. r10,r11,4112
	ctx.r10.u64 = ctx.r11.u64 & 4112;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,12,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFF0000;
	// rlwinm r10,r10,0,12,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// rlwinm r10,r10,0,4,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_820F0AD4:
	// stw r11,10424(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10424, ctx.r11.u32);
	// stw r11,10456(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10456, ctx.r11.u32);
	// stw r11,10460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10460, ctx.r11.u32);
	// stw r11,10464(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10464, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F0B0C"))) PPC_WEAK_FUNC(sub_820F0B0C);
PPC_FUNC_IMPL(__imp__sub_820F0B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F0B10"))) PPC_WEAK_FUNC(sub_820F0B10);
PPC_FUNC_IMPL(__imp__sub_820F0B10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11712(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11712);
	// rlwinm r3,r11,27,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F0B1C"))) PPC_WEAK_FUNC(sub_820F0B1C);
PPC_FUNC_IMPL(__imp__sub_820F0B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F0B20"))) PPC_WEAK_FUNC(sub_820F0B20);
PPC_FUNC_IMPL(__imp__sub_820F0B20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11716(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11716);
	// lwz r10,11712(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11712);
	// rlwimi r10,r4,0,27,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x1F) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFE0);
	// stw r10,11712(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11712, ctx.r10.u32);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,11712(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11712);
	// bne 0x820f0b64
	if (!ctx.cr0.eq) goto loc_820F0B64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// andi. r10,r11,4112
	ctx.r10.u64 = ctx.r11.u64 & 4112;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,12,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFF0000;
	// rlwinm r10,r10,0,12,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// rlwinm r10,r10,0,4,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_820F0B64:
	// stw r11,10424(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10424, ctx.r11.u32);
	// stw r11,10456(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10456, ctx.r11.u32);
	// stw r11,10460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10460, ctx.r11.u32);
	// stw r11,10464(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10464, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F0B9C"))) PPC_WEAK_FUNC(sub_820F0B9C);
PPC_FUNC_IMPL(__imp__sub_820F0B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F0BA0"))) PPC_WEAK_FUNC(sub_820F0BA0);
PPC_FUNC_IMPL(__imp__sub_820F0BA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11712(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11712);
	// clrlwi r3,r11,27
	ctx.r3.u64 = ctx.r11.u32 & 0x1F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F0BAC"))) PPC_WEAK_FUNC(sub_820F0BAC);
PPC_FUNC_IMPL(__imp__sub_820F0BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F0BB0"))) PPC_WEAK_FUNC(sub_820F0BB0);
PPC_FUNC_IMPL(__imp__sub_820F0BB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11716(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11716);
	// lwz r10,11712(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11712);
	// rlwimi r10,r4,8,19,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 8) & 0x1F00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFE0FF);
	// stw r10,11712(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11712, ctx.r10.u32);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,11712(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11712);
	// bne 0x820f0bf4
	if (!ctx.cr0.eq) goto loc_820F0BF4;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// andi. r10,r11,4112
	ctx.r10.u64 = ctx.r11.u64 & 4112;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,12,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFF0000;
	// rlwinm r10,r10,0,12,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// rlwinm r10,r10,0,4,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_820F0BF4:
	// stw r11,10424(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10424, ctx.r11.u32);
	// stw r11,10456(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10456, ctx.r11.u32);
	// stw r11,10460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10460, ctx.r11.u32);
	// stw r11,10464(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10464, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F0C2C"))) PPC_WEAK_FUNC(sub_820F0C2C);
PPC_FUNC_IMPL(__imp__sub_820F0C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F0C30"))) PPC_WEAK_FUNC(sub_820F0C30);
PPC_FUNC_IMPL(__imp__sub_820F0C30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11712(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11712);
	// rlwinm r3,r11,24,27,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F0C3C"))) PPC_WEAK_FUNC(sub_820F0C3C);
PPC_FUNC_IMPL(__imp__sub_820F0C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F0C40"))) PPC_WEAK_FUNC(sub_820F0C40);
PPC_FUNC_IMPL(__imp__sub_820F0C40) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11716(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11716);
	// lwz r10,11712(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11712);
	// rlwimi r10,r4,21,8,10
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 21) & 0xE00000) | (ctx.r10.u64 & 0xFFFFFFFFFF1FFFFF);
	// stw r10,11712(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11712, ctx.r10.u32);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r11,10424(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10424, ctx.r11.u32);
	// stw r11,10456(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10456, ctx.r11.u32);
	// stw r11,10460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10460, ctx.r11.u32);
	// stw r11,10464(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10464, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F0C9C"))) PPC_WEAK_FUNC(sub_820F0C9C);
PPC_FUNC_IMPL(__imp__sub_820F0C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F0CA0"))) PPC_WEAK_FUNC(sub_820F0CA0);
PPC_FUNC_IMPL(__imp__sub_820F0CA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11712(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11712);
	// rlwinm r3,r11,11,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F0CAC"))) PPC_WEAK_FUNC(sub_820F0CAC);
PPC_FUNC_IMPL(__imp__sub_820F0CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F0CB0"))) PPC_WEAK_FUNC(sub_820F0CB0);
PPC_FUNC_IMPL(__imp__sub_820F0CB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11716(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11716);
	// lwz r10,11712(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11712);
	// rlwimi r10,r4,16,11,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 16) & 0x1F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFE0FFFF);
	// stw r10,11712(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11712, ctx.r10.u32);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r11,10424(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10424, ctx.r11.u32);
	// stw r11,10456(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10456, ctx.r11.u32);
	// stw r11,10460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10460, ctx.r11.u32);
	// stw r11,10464(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10464, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F0D0C"))) PPC_WEAK_FUNC(sub_820F0D0C);
PPC_FUNC_IMPL(__imp__sub_820F0D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F0D10"))) PPC_WEAK_FUNC(sub_820F0D10);
PPC_FUNC_IMPL(__imp__sub_820F0D10) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,11712(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 11712);
	// clrlwi r3,r11,27
	ctx.r3.u64 = ctx.r11.u32 & 0x1F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F0D1C"))) PPC_WEAK_FUNC(sub_820F0D1C);
PPC_FUNC_IMPL(__imp__sub_820F0D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F0D20"))) PPC_WEAK_FUNC(sub_820F0D20);
PPC_FUNC_IMPL(__imp__sub_820F0D20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11716(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11716);
	// lwz r10,11712(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11712);
	// rlwimi r10,r4,24,3,7
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 24) & 0x1F000000) | (ctx.r10.u64 & 0xFFFFFFFFE0FFFFFF);
	// stw r10,11712(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11712, ctx.r10.u32);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r11,10424(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10424, ctx.r11.u32);
	// stw r11,10456(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10456, ctx.r11.u32);
	// stw r11,10460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10460, ctx.r11.u32);
	// stw r11,10464(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10464, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F0D7C"))) PPC_WEAK_FUNC(sub_820F0D7C);
PPC_FUNC_IMPL(__imp__sub_820F0D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F0D80"))) PPC_WEAK_FUNC(sub_820F0D80);
PPC_FUNC_IMPL(__imp__sub_820F0D80) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,11712(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11712);
	// clrlwi r3,r11,27
	ctx.r3.u64 = ctx.r11.u32 & 0x1F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F0D8C"))) PPC_WEAK_FUNC(sub_820F0D8C);
PPC_FUNC_IMPL(__imp__sub_820F0D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F0D90"))) PPC_WEAK_FUNC(sub_820F0D90);
PPC_FUNC_IMPL(__imp__sub_820F0D90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11716(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11716);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// rlwimi r11,r4,30,1,1
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 30) & 0x40000000) | (ctx.r11.u64 & 0xFFFFFFFFBFFFFFFF);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stw r11,11716(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11716, ctx.r11.u32);
	// lwz r11,11712(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11712);
	// bne cr6,0x820f0dcc
	if (!ctx.cr6.eq) goto loc_820F0DCC;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// andi. r9,r11,4112
	ctx.r9.u64 = ctx.r11.u64 & 4112;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r9,r9,12,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFFF0000;
	// rlwinm r9,r9,0,12,10
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// rlwinm r9,r9,0,4,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
loc_820F0DCC:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820f0ddc
	if (!ctx.cr6.eq) goto loc_820F0DDC;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
loc_820F0DDC:
	// stw r11,10424(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10424, ctx.r11.u32);
	// stw r11,10456(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10456, ctx.r11.u32);
	// stw r11,10460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10460, ctx.r11.u32);
	// stw r11,10464(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10464, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F0E14"))) PPC_WEAK_FUNC(sub_820F0E14);
PPC_FUNC_IMPL(__imp__sub_820F0E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F0E18"))) PPC_WEAK_FUNC(sub_820F0E18);
PPC_FUNC_IMPL(__imp__sub_820F0E18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11716(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11716);
	// rlwinm r3,r11,2,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F0E24"))) PPC_WEAK_FUNC(sub_820F0E24);
PPC_FUNC_IMPL(__imp__sub_820F0E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F0E28"))) PPC_WEAK_FUNC(sub_820F0E28);
PPC_FUNC_IMPL(__imp__sub_820F0E28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrldi r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,29248(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29248);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,10372(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10372, temp.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 134217728;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F0E5C"))) PPC_WEAK_FUNC(sub_820F0E5C);
PPC_FUNC_IMPL(__imp__sub_820F0E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F0E60"))) PPC_WEAK_FUNC(sub_820F0E60);
PPC_FUNC_IMPL(__imp__sub_820F0E60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f12,10372(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10372);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lfs f0,29244(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29244);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,9488(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9488);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F0E8C"))) PPC_WEAK_FUNC(sub_820F0E8C);
PPC_FUNC_IMPL(__imp__sub_820F0E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F0E90"))) PPC_WEAK_FUNC(sub_820F0E90);
PPC_FUNC_IMPL(__imp__sub_820F0E90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10428(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10428);
	// rlwimi r4,r11,0,0,28
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFFF8) | (ctx.r4.u64 & 0xFFFFFFFF00000007);
	// stw r4,10428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10428, ctx.r4.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F0EAC"))) PPC_WEAK_FUNC(sub_820F0EAC);
PPC_FUNC_IMPL(__imp__sub_820F0EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F0EB0"))) PPC_WEAK_FUNC(sub_820F0EB0);
PPC_FUNC_IMPL(__imp__sub_820F0EB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10428(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10428);
	// clrlwi r3,r11,29
	ctx.r3.u64 = ctx.r11.u32 & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F0EBC"))) PPC_WEAK_FUNC(sub_820F0EBC);
PPC_FUNC_IMPL(__imp__sub_820F0EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F0EC0"))) PPC_WEAK_FUNC(sub_820F0EC0);
PPC_FUNC_IMPL(__imp__sub_820F0EC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r10,r4,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFF;
	// rlwinm r11,r4,16,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFF;
	// rlwinm r8,r4,8,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFF;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r9,r4,56
	ctx.r9.u64 = ctx.r4.u64 & 0xFF;
	// clrldi r8,r8,32
	ctx.r8.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// li r12,15
	ctx.r12.s64 = 15;
	// std r10,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r10.u64);
	// std r11,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r11.u64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// rldicr r12,r12,33,30
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 33) & 0xFFFFFFFE00000000;
	// std r8,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r8.u64);
	// lfd f13,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f0,-32(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfd f11,-8(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f10,f0
	ctx.f10.f64 = double(float(ctx.f0.f64));
	// lfs f0,29248(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29248);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,10340(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10340, temp.u32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f10,10336(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10336, temp.u32);
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f13,10344(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10344, temp.u32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f0,10348(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10348, temp.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F0F5C"))) PPC_WEAK_FUNC(sub_820F0F5C);
PPC_FUNC_IMPL(__imp__sub_820F0F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F0F60"))) PPC_WEAK_FUNC(sub_820F0F60);
PPC_FUNC_IMPL(__imp__sub_820F0F60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f12,10336(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10336);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lfs f11,10348(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10348);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,10340(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10340);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,10344(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10344);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,29244(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29244);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,9488(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9488);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f10,f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f11,f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f0,f9,f0,f13
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fctidz f13,f12
	ctx.f13.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// stfiwx f13,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f13.u32);
	// fctidz f12,f10
	ctx.f12.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// fctidz f13,f11
	ctx.f13.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// stfiwx f13,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f13.u32);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// rlwimi r11,r10,8,0,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFFFFFF00) | (ctx.r11.u64 & 0xFFFFFFFF000000FF);
	// stfiwx f12,0,r9
	PPC_STORE_U32(ctx.r9.u32, ctx.f12.u32);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// rlwimi r10,r11,8,0,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFFFFFF00) | (ctx.r10.u64 & 0xFFFFFFFF000000FF);
	// stfiwx f0,0,r9
	PPC_STORE_U32(ctx.r9.u32, ctx.f0.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// rlwimi r3,r10,8,0,23
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFFFFFF00) | (ctx.r3.u64 & 0xFFFFFFFF000000FF);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F0FE0"))) PPC_WEAK_FUNC(sub_820F0FE0);
PPC_FUNC_IMPL(__imp__sub_820F0FE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10552(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10552);
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwimi r11,r4,10,21,21
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 10) & 0x400) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFBFF);
	// rldicr r12,r12,37,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10552, ctx.r11.u32);
	// ld r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1004"))) PPC_WEAK_FUNC(sub_820F1004);
PPC_FUNC_IMPL(__imp__sub_820F1004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1008"))) PPC_WEAK_FUNC(sub_820F1008);
PPC_FUNC_IMPL(__imp__sub_820F1008) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10552(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10552);
	// rlwinm r3,r11,22,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1014"))) PPC_WEAK_FUNC(sub_820F1014);
PPC_FUNC_IMPL(__imp__sub_820F1014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1018"))) PPC_WEAK_FUNC(sub_820F1018);
PPC_FUNC_IMPL(__imp__sub_820F1018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,52,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 52) & 0xFFFFFFFFFFFFFFFF;
	// lfs f0,10620(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10620);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lfs f13,28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// sth r11,10478(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10478, ctx.r11.u16);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1058"))) PPC_WEAK_FUNC(sub_820F1058);
PPC_FUNC_IMPL(__imp__sub_820F1058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r11,10478(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10478);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
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
	// lfs f0,-7584(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -7584);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1088"))) PPC_WEAK_FUNC(sub_820F1088);
PPC_FUNC_IMPL(__imp__sub_820F1088) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12320(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12320);
	// stw r4,11740(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11740, ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f109c
	if (!ctx.cr6.eq) goto loc_820F109C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_820F109C:
	// lwz r11,10420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// rlwimi r11,r4,1,30,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 1) & 0x2) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFD);
	// stw r11,10420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10420, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F10C0"))) PPC_WEAK_FUNC(sub_820F10C0);
PPC_FUNC_IMPL(__imp__sub_820F10C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11740(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11740);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F10C8"))) PPC_WEAK_FUNC(sub_820F10C8);
PPC_FUNC_IMPL(__imp__sub_820F10C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// rlwimi r11,r4,2,29,29
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 2) & 0x4) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFB);
	// stw r11,10420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10420, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F10E4"))) PPC_WEAK_FUNC(sub_820F10E4);
PPC_FUNC_IMPL(__imp__sub_820F10E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F10E8"))) PPC_WEAK_FUNC(sub_820F10E8);
PPC_FUNC_IMPL(__imp__sub_820F10E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// rlwinm r3,r11,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F10F4"))) PPC_WEAK_FUNC(sub_820F10F4);
PPC_FUNC_IMPL(__imp__sub_820F10F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F10F8"))) PPC_WEAK_FUNC(sub_820F10F8);
PPC_FUNC_IMPL(__imp__sub_820F10F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// rlwimi r11,r4,4,25,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 4) & 0x70) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF8F);
	// stw r11,10420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10420, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F111C"))) PPC_WEAK_FUNC(sub_820F111C);
PPC_FUNC_IMPL(__imp__sub_820F111C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1120"))) PPC_WEAK_FUNC(sub_820F1120);
PPC_FUNC_IMPL(__imp__sub_820F1120) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// rlwinm r3,r11,28,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F112C"))) PPC_WEAK_FUNC(sub_820F112C);
PPC_FUNC_IMPL(__imp__sub_820F112C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1130"))) PPC_WEAK_FUNC(sub_820F1130);
PPC_FUNC_IMPL(__imp__sub_820F1130) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12320(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12320);
	// stw r4,11744(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11744, ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f1144
	if (!ctx.cr6.eq) goto loc_820F1144;
	// li r4,0
	ctx.r4.s64 = 0;
loc_820F1144:
	// lwz r11,10420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// rlwimi r11,r4,0,31,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x1) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFE);
	// stw r11,10420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10420, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1168"))) PPC_WEAK_FUNC(sub_820F1168);
PPC_FUNC_IMPL(__imp__sub_820F1168) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11744(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11744);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1170"))) PPC_WEAK_FUNC(sub_820F1170);
PPC_FUNC_IMPL(__imp__sub_820F1170) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// rlwimi r11,r4,7,24,24
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 7) & 0x80) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF7F);
	// stw r11,10420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10420, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1194"))) PPC_WEAK_FUNC(sub_820F1194);
PPC_FUNC_IMPL(__imp__sub_820F1194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1198"))) PPC_WEAK_FUNC(sub_820F1198);
PPC_FUNC_IMPL(__imp__sub_820F1198) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// rlwinm r3,r11,25,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F11A4"))) PPC_WEAK_FUNC(sub_820F11A4);
PPC_FUNC_IMPL(__imp__sub_820F11A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F11A8"))) PPC_WEAK_FUNC(sub_820F11A8);
PPC_FUNC_IMPL(__imp__sub_820F11A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// rlwimi r11,r4,8,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 8) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// stw r11,10420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10420, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F11C4"))) PPC_WEAK_FUNC(sub_820F11C4);
PPC_FUNC_IMPL(__imp__sub_820F11C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F11C8"))) PPC_WEAK_FUNC(sub_820F11C8);
PPC_FUNC_IMPL(__imp__sub_820F11C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// rlwinm r3,r11,24,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F11D4"))) PPC_WEAK_FUNC(sub_820F11D4);
PPC_FUNC_IMPL(__imp__sub_820F11D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F11D8"))) PPC_WEAK_FUNC(sub_820F11D8);
PPC_FUNC_IMPL(__imp__sub_820F11D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// rlwimi r11,r4,11,18,20
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 11) & 0x3800) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC7FF);
	// stw r11,10420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10420, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F11FC"))) PPC_WEAK_FUNC(sub_820F11FC);
PPC_FUNC_IMPL(__imp__sub_820F11FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1200"))) PPC_WEAK_FUNC(sub_820F1200);
PPC_FUNC_IMPL(__imp__sub_820F1200) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// rlwinm r3,r11,21,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F120C"))) PPC_WEAK_FUNC(sub_820F120C);
PPC_FUNC_IMPL(__imp__sub_820F120C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1210"))) PPC_WEAK_FUNC(sub_820F1210);
PPC_FUNC_IMPL(__imp__sub_820F1210) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// rlwimi r11,r4,17,12,14
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 17) & 0xE0000) | (ctx.r11.u64 & 0xFFFFFFFFFFF1FFFF);
	// stw r11,10420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10420, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1234"))) PPC_WEAK_FUNC(sub_820F1234);
PPC_FUNC_IMPL(__imp__sub_820F1234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1238"))) PPC_WEAK_FUNC(sub_820F1238);
PPC_FUNC_IMPL(__imp__sub_820F1238) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// rlwinm r3,r11,15,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1244"))) PPC_WEAK_FUNC(sub_820F1244);
PPC_FUNC_IMPL(__imp__sub_820F1244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1248"))) PPC_WEAK_FUNC(sub_820F1248);
PPC_FUNC_IMPL(__imp__sub_820F1248) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// rlwimi r11,r4,14,15,17
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 14) & 0x1C000) | (ctx.r11.u64 & 0xFFFFFFFFFFFE3FFF);
	// stw r11,10420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10420, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1264"))) PPC_WEAK_FUNC(sub_820F1264);
PPC_FUNC_IMPL(__imp__sub_820F1264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1268"))) PPC_WEAK_FUNC(sub_820F1268);
PPC_FUNC_IMPL(__imp__sub_820F1268) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// rlwinm r3,r11,18,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1274"))) PPC_WEAK_FUNC(sub_820F1274);
PPC_FUNC_IMPL(__imp__sub_820F1274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1278"))) PPC_WEAK_FUNC(sub_820F1278);
PPC_FUNC_IMPL(__imp__sub_820F1278) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// rlwimi r11,r4,20,9,11
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 20) & 0x700000) | (ctx.r11.u64 & 0xFFFFFFFFFF8FFFFF);
	// stw r11,10420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10420, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1294"))) PPC_WEAK_FUNC(sub_820F1294);
PPC_FUNC_IMPL(__imp__sub_820F1294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1298"))) PPC_WEAK_FUNC(sub_820F1298);
PPC_FUNC_IMPL(__imp__sub_820F1298) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// rlwinm r3,r11,12,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F12A4"))) PPC_WEAK_FUNC(sub_820F12A4);
PPC_FUNC_IMPL(__imp__sub_820F12A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F12A8"))) PPC_WEAK_FUNC(sub_820F12A8);
PPC_FUNC_IMPL(__imp__sub_820F12A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// rlwimi r11,r4,23,6,8
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 23) & 0x3800000) | (ctx.r11.u64 & 0xFFFFFFFFFC7FFFFF);
	// stw r11,10420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10420, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F12CC"))) PPC_WEAK_FUNC(sub_820F12CC);
PPC_FUNC_IMPL(__imp__sub_820F12CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F12D0"))) PPC_WEAK_FUNC(sub_820F12D0);
PPC_FUNC_IMPL(__imp__sub_820F12D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// rlwinm r3,r11,9,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F12DC"))) PPC_WEAK_FUNC(sub_820F12DC);
PPC_FUNC_IMPL(__imp__sub_820F12DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F12E0"))) PPC_WEAK_FUNC(sub_820F12E0);
PPC_FUNC_IMPL(__imp__sub_820F12E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// rlwimi r11,r4,29,0,2
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 29) & 0xE0000000) | (ctx.r11.u64 & 0xFFFFFFFF1FFFFFFF);
	// stw r11,10420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10420, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1304"))) PPC_WEAK_FUNC(sub_820F1304);
PPC_FUNC_IMPL(__imp__sub_820F1304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1308"))) PPC_WEAK_FUNC(sub_820F1308);
PPC_FUNC_IMPL(__imp__sub_820F1308) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// rlwinm r3,r11,3,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1314"))) PPC_WEAK_FUNC(sub_820F1314);
PPC_FUNC_IMPL(__imp__sub_820F1314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1318"))) PPC_WEAK_FUNC(sub_820F1318);
PPC_FUNC_IMPL(__imp__sub_820F1318) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// rlwimi r11,r4,26,3,5
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 26) & 0x1C000000) | (ctx.r11.u64 & 0xFFFFFFFFE3FFFFFF);
	// stw r11,10420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10420, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1334"))) PPC_WEAK_FUNC(sub_820F1334);
PPC_FUNC_IMPL(__imp__sub_820F1334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1338"))) PPC_WEAK_FUNC(sub_820F1338);
PPC_FUNC_IMPL(__imp__sub_820F1338) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// rlwinm r3,r11,6,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1344"))) PPC_WEAK_FUNC(sub_820F1344);
PPC_FUNC_IMPL(__imp__sub_820F1344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1348"))) PPC_WEAK_FUNC(sub_820F1348);
PPC_FUNC_IMPL(__imp__sub_820F1348) {
	PPC_FUNC_PROLOGUE();
	// stb r4,10371(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10371, ctx.r4.u8);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F135C"))) PPC_WEAK_FUNC(sub_820F135C);
PPC_FUNC_IMPL(__imp__sub_820F135C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1360"))) PPC_WEAK_FUNC(sub_820F1360);
PPC_FUNC_IMPL(__imp__sub_820F1360) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10371(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10371);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1368"))) PPC_WEAK_FUNC(sub_820F1368);
PPC_FUNC_IMPL(__imp__sub_820F1368) {
	PPC_FUNC_PROLOGUE();
	// stb r4,10370(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10370, ctx.r4.u8);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F137C"))) PPC_WEAK_FUNC(sub_820F137C);
PPC_FUNC_IMPL(__imp__sub_820F137C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1380"))) PPC_WEAK_FUNC(sub_820F1380);
PPC_FUNC_IMPL(__imp__sub_820F1380) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10370(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10370);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1388"))) PPC_WEAK_FUNC(sub_820F1388);
PPC_FUNC_IMPL(__imp__sub_820F1388) {
	PPC_FUNC_PROLOGUE();
	// stb r4,10369(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10369, ctx.r4.u8);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F139C"))) PPC_WEAK_FUNC(sub_820F139C);
PPC_FUNC_IMPL(__imp__sub_820F139C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F13A0"))) PPC_WEAK_FUNC(sub_820F13A0);
PPC_FUNC_IMPL(__imp__sub_820F13A0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10369(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10369);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F13A8"))) PPC_WEAK_FUNC(sub_820F13A8);
PPC_FUNC_IMPL(__imp__sub_820F13A8) {
	PPC_FUNC_PROLOGUE();
	// stb r4,10367(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10367, ctx.r4.u8);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F13BC"))) PPC_WEAK_FUNC(sub_820F13BC);
PPC_FUNC_IMPL(__imp__sub_820F13BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F13C0"))) PPC_WEAK_FUNC(sub_820F13C0);
PPC_FUNC_IMPL(__imp__sub_820F13C0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10367(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10367);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F13C8"))) PPC_WEAK_FUNC(sub_820F13C8);
PPC_FUNC_IMPL(__imp__sub_820F13C8) {
	PPC_FUNC_PROLOGUE();
	// stb r4,10366(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10366, ctx.r4.u8);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F13DC"))) PPC_WEAK_FUNC(sub_820F13DC);
PPC_FUNC_IMPL(__imp__sub_820F13DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F13E0"))) PPC_WEAK_FUNC(sub_820F13E0);
PPC_FUNC_IMPL(__imp__sub_820F13E0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10366(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10366);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F13E8"))) PPC_WEAK_FUNC(sub_820F13E8);
PPC_FUNC_IMPL(__imp__sub_820F13E8) {
	PPC_FUNC_PROLOGUE();
	// stb r4,10365(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10365, ctx.r4.u8);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F13FC"))) PPC_WEAK_FUNC(sub_820F13FC);
PPC_FUNC_IMPL(__imp__sub_820F13FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1400"))) PPC_WEAK_FUNC(sub_820F1400);
PPC_FUNC_IMPL(__imp__sub_820F1400) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10365(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10365);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1408"))) PPC_WEAK_FUNC(sub_820F1408);
PPC_FUNC_IMPL(__imp__sub_820F1408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// subfic r11,r4,0
	ctx.xer.ca = ctx.r4.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r4.s64;
	// li r12,1
	ctx.r12.s64 = 1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rldicr r12,r12,44,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 44) & 0xFFFFFFFFFFFFFFFF;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// stw r11,10292(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10292, ctx.r11.u32);
	// lwz r11,10436(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10436);
	// rlwinm r11,r11,0,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFC0;
	// or r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 | ctx.r4.u64;
	// stw r11,10436(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10436, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1448"))) PPC_WEAK_FUNC(sub_820F1448);
PPC_FUNC_IMPL(__imp__sub_820F1448) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10436(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10436);
	// clrlwi r3,r11,26
	ctx.r3.u64 = ctx.r11.u32 & 0x3F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1454"))) PPC_WEAK_FUNC(sub_820F1454);
PPC_FUNC_IMPL(__imp__sub_820F1454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1458"))) PPC_WEAK_FUNC(sub_820F1458);
PPC_FUNC_IMPL(__imp__sub_820F1458) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11720(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11720);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1460"))) PPC_WEAK_FUNC(sub_820F1460);
PPC_FUNC_IMPL(__imp__sub_820F1460) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,10608(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10608);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,9472(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9472);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,10704(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10704, temp.u32);
	// stfs f0,10712(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10712, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x820f149c
	if (!ctx.cr6.eq) goto loc_820F149C;
	// lfs f12,10708(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10708);
	ctx.f12.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// beq cr6,0x820f14a0
	if (ctx.cr6.eq) goto loc_820F14A0;
loc_820F149C:
	// li r10,1
	ctx.r10.s64 = 1;
loc_820F14A0:
	// lwz r11,10440(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10440);
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// rlwimi r11,r10,11,20,20
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 11) & 0x800) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r11,10440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10440, ctx.r11.u32);
	// bne cr6,0x820f14c4
	if (!ctx.cr6.eq) goto loc_820F14C4;
	// lfs f0,10716(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10716);
	ctx.f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x820f14c8
	if (ctx.cr6.eq) goto loc_820F14C8;
loc_820F14C4:
	// li r10,1
	ctx.r10.s64 = 1;
loc_820F14C8:
	// rlwimi r11,r10,12,19,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0x1000) | (ctx.r11.u64 & 0xFFFFFFFFFFFFEFFF);
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,45,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 45) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10440, ctx.r11.u32);
	// ld r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,43,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 43) & 0xFFFFFFFFFFFFFFFF;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1504"))) PPC_WEAK_FUNC(sub_820F1504);
PPC_FUNC_IMPL(__imp__sub_820F1504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1508"))) PPC_WEAK_FUNC(sub_820F1508);
PPC_FUNC_IMPL(__imp__sub_820F1508) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,10704(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10704);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-7580(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -7580);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1524"))) PPC_WEAK_FUNC(sub_820F1524);
PPC_FUNC_IMPL(__imp__sub_820F1524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1528"))) PPC_WEAK_FUNC(sub_820F1528);
PPC_FUNC_IMPL(__imp__sub_820F1528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f12,10704(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10704);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,9472(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9472);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// lfs f13,28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,10708(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10708, temp.u32);
	// stfs f13,10716(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10716, temp.u32);
	// bne cr6,0x820f1558
	if (!ctx.cr6.eq) goto loc_820F1558;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x820f155c
	if (ctx.cr6.eq) goto loc_820F155C;
loc_820F1558:
	// li r10,1
	ctx.r10.s64 = 1;
loc_820F155C:
	// lwz r11,10440(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10440);
	// lfs f12,10712(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10712);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// rlwimi r11,r10,11,20,20
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 11) & 0x800) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r11,10440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10440, ctx.r11.u32);
	// bne cr6,0x820f1580
	if (!ctx.cr6.eq) goto loc_820F1580;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x820f1584
	if (ctx.cr6.eq) goto loc_820F1584;
loc_820F1580:
	// li r10,1
	ctx.r10.s64 = 1;
loc_820F1584:
	// rlwimi r11,r10,12,19,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0x1000) | (ctx.r11.u64 & 0xFFFFFFFFFFFFEFFF);
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,44,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 44) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10440, ctx.r11.u32);
	// ld r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,42,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 42) & 0xFFFFFFFFFFFFFFFF;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F15C0"))) PPC_WEAK_FUNC(sub_820F15C0);
PPC_FUNC_IMPL(__imp__sub_820F15C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,10708(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10708);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F15D0"))) PPC_WEAK_FUNC(sub_820F15D0);
PPC_FUNC_IMPL(__imp__sub_820F15D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10440(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10440);
	// rlwimi r11,r4,15,16,16
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 15) & 0x8000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF7FFF);
	// stw r11,10440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10440, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F15EC"))) PPC_WEAK_FUNC(sub_820F15EC);
PPC_FUNC_IMPL(__imp__sub_820F15EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F15F0"))) PPC_WEAK_FUNC(sub_820F15F0);
PPC_FUNC_IMPL(__imp__sub_820F15F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10440(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10440);
	// rlwinm r3,r11,17,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F15FC"))) PPC_WEAK_FUNC(sub_820F15FC);
PPC_FUNC_IMPL(__imp__sub_820F15FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1600"))) PPC_WEAK_FUNC(sub_820F1600);
PPC_FUNC_IMPL(__imp__sub_820F1600) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// stw r11,10624(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10624, ctx.r11.u32);
	// ld r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1618"))) PPC_WEAK_FUNC(sub_820F1618);
PPC_FUNC_IMPL(__imp__sub_820F1618) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,10624(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10624);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1620"))) PPC_WEAK_FUNC(sub_820F1620);
PPC_FUNC_IMPL(__imp__sub_820F1620) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12304(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12304);
	// stw r4,11724(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11724, ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f1634
	if (!ctx.cr6.eq) goto loc_820F1634;
	// li r4,0
	ctx.r4.s64 = 0;
loc_820F1634:
	// lwz r11,10332(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10332);
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwimi r4,r11,0,0,27
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFFF0) | (ctx.r4.u64 & 0xFFFFFFFF0000000F);
	// rldicr r12,r12,37,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// stw r4,10332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10332, ctx.r4.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1658"))) PPC_WEAK_FUNC(sub_820F1658);
PPC_FUNC_IMPL(__imp__sub_820F1658) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11724(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11724);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1660"))) PPC_WEAK_FUNC(sub_820F1660);
PPC_FUNC_IMPL(__imp__sub_820F1660) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12308(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12308);
	// stw r4,11728(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11728, ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f1674
	if (!ctx.cr6.eq) goto loc_820F1674;
	// li r4,0
	ctx.r4.s64 = 0;
loc_820F1674:
	// lwz r11,10332(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10332);
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwimi r11,r4,4,24,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 4) & 0xF0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF0F);
	// rldicr r12,r12,37,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10332, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1698"))) PPC_WEAK_FUNC(sub_820F1698);
PPC_FUNC_IMPL(__imp__sub_820F1698) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11728(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11728);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F16A0"))) PPC_WEAK_FUNC(sub_820F16A0);
PPC_FUNC_IMPL(__imp__sub_820F16A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12312);
	// stw r4,11732(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11732, ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f16b4
	if (!ctx.cr6.eq) goto loc_820F16B4;
	// li r4,0
	ctx.r4.s64 = 0;
loc_820F16B4:
	// lwz r11,10332(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10332);
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwimi r11,r4,8,20,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 8) & 0xF00) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF0FF);
	// rldicr r12,r12,37,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10332, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F16D8"))) PPC_WEAK_FUNC(sub_820F16D8);
PPC_FUNC_IMPL(__imp__sub_820F16D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11732(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11732);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F16E0"))) PPC_WEAK_FUNC(sub_820F16E0);
PPC_FUNC_IMPL(__imp__sub_820F16E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12316(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12316);
	// stw r4,11736(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11736, ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f16f4
	if (!ctx.cr6.eq) goto loc_820F16F4;
	// li r4,0
	ctx.r4.s64 = 0;
loc_820F16F4:
	// lwz r11,10332(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10332);
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwimi r11,r4,12,16,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 12) & 0xF000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0FFF);
	// rldicr r12,r12,37,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10332, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1718"))) PPC_WEAK_FUNC(sub_820F1718);
PPC_FUNC_IMPL(__imp__sub_820F1718) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11736(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11736);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1720"))) PPC_WEAK_FUNC(sub_820F1720);
PPC_FUNC_IMPL(__imp__sub_820F1720) {
	PPC_FUNC_PROLOGUE();
	// stw r4,11748(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11748, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1728"))) PPC_WEAK_FUNC(sub_820F1728);
PPC_FUNC_IMPL(__imp__sub_820F1728) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11748(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11748);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1730"))) PPC_WEAK_FUNC(sub_820F1730);
PPC_FUNC_IMPL(__imp__sub_820F1730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,54,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 54) & 0xFFFFFFFFFFFFFFFF;
	// lfs f13,10620(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10620);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lfs f0,28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,11756(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 11756, temp.u32);
	// fctiwz f0,f13
	ctx.f0.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,10470(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10470, ctx.r11.u16);
	// sth r11,10468(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10468, ctx.r11.u16);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F177C"))) PPC_WEAK_FUNC(sub_820F177C);
PPC_FUNC_IMPL(__imp__sub_820F177C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1780"))) PPC_WEAK_FUNC(sub_820F1780);
PPC_FUNC_IMPL(__imp__sub_820F1780) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,11756(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 11756);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1790"))) PPC_WEAK_FUNC(sub_820F1790);
PPC_FUNC_IMPL(__imp__sub_820F1790) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,53,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 53) & 0xFFFFFFFFFFFFFFFF;
	// lfs f13,10608(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10608);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lfs f0,28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,11760(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 11760, temp.u32);
	// fctiwz f0,f13
	ctx.f0.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// sth r11,10474(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10474, ctx.r11.u16);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F17D4"))) PPC_WEAK_FUNC(sub_820F17D4);
PPC_FUNC_IMPL(__imp__sub_820F17D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F17D8"))) PPC_WEAK_FUNC(sub_820F17D8);
PPC_FUNC_IMPL(__imp__sub_820F17D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,11760(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 11760);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F17E8"))) PPC_WEAK_FUNC(sub_820F17E8);
PPC_FUNC_IMPL(__imp__sub_820F17E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,53,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 53) & 0xFFFFFFFFFFFFFFFF;
	// lfs f13,10608(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10608);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lfs f0,28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,11764(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 11764, temp.u32);
	// fctiwz f0,f13
	ctx.f0.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// sth r11,10472(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10472, ctx.r11.u16);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F182C"))) PPC_WEAK_FUNC(sub_820F182C);
PPC_FUNC_IMPL(__imp__sub_820F182C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1830"))) PPC_WEAK_FUNC(sub_820F1830);
PPC_FUNC_IMPL(__imp__sub_820F1830) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,11764(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 11764);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1840"))) PPC_WEAK_FUNC(sub_820F1840);
PPC_FUNC_IMPL(__imp__sub_820F1840) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10412(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10412);
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// or r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 | ctx.r4.u64;
	// stw r11,10412(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10412, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1860"))) PPC_WEAK_FUNC(sub_820F1860);
PPC_FUNC_IMPL(__imp__sub_820F1860) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,10412(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10412);
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r10,0,28,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF0F;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,10412(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10412, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1884"))) PPC_WEAK_FUNC(sub_820F1884);
PPC_FUNC_IMPL(__imp__sub_820F1884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1888"))) PPC_WEAK_FUNC(sub_820F1888);
PPC_FUNC_IMPL(__imp__sub_820F1888) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,10412(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10412);
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r10,r10,0,24,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF0FF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,10412(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10412, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F18AC"))) PPC_WEAK_FUNC(sub_820F18AC);
PPC_FUNC_IMPL(__imp__sub_820F18AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F18B0"))) PPC_WEAK_FUNC(sub_820F18B0);
PPC_FUNC_IMPL(__imp__sub_820F18B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,10412(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10412);
	// rlwinm r11,r4,12,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0xFFFFF000;
	// rlwinm r10,r10,0,20,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF0FFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,10412(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10412, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F18D4"))) PPC_WEAK_FUNC(sub_820F18D4);
PPC_FUNC_IMPL(__imp__sub_820F18D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F18D8"))) PPC_WEAK_FUNC(sub_820F18D8);
PPC_FUNC_IMPL(__imp__sub_820F18D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,10412(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10412);
	// rlwinm r11,r4,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r10,r10,0,16,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,10412(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10412, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F18FC"))) PPC_WEAK_FUNC(sub_820F18FC);
PPC_FUNC_IMPL(__imp__sub_820F18FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1900"))) PPC_WEAK_FUNC(sub_820F1900);
PPC_FUNC_IMPL(__imp__sub_820F1900) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,10412(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10412);
	// rlwinm r11,r4,20,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 20) & 0xFFF00000;
	// rlwinm r10,r10,0,12,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF0FFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,10412(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10412, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1924"))) PPC_WEAK_FUNC(sub_820F1924);
PPC_FUNC_IMPL(__imp__sub_820F1924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1928"))) PPC_WEAK_FUNC(sub_820F1928);
PPC_FUNC_IMPL(__imp__sub_820F1928) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,10412(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10412);
	// rlwinm r11,r4,24,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFF000000;
	// rlwinm r10,r10,0,8,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFF0FFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,10412(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10412, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F194C"))) PPC_WEAK_FUNC(sub_820F194C);
PPC_FUNC_IMPL(__imp__sub_820F194C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1950"))) PPC_WEAK_FUNC(sub_820F1950);
PPC_FUNC_IMPL(__imp__sub_820F1950) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10412(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10412);
	// rlwimi r11,r4,28,0,3
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 28) & 0xF0000000) | (ctx.r11.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r11,10412(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10412, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F196C"))) PPC_WEAK_FUNC(sub_820F196C);
PPC_FUNC_IMPL(__imp__sub_820F196C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1970"))) PPC_WEAK_FUNC(sub_820F1970);
PPC_FUNC_IMPL(__imp__sub_820F1970) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10416);
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// or r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 | ctx.r4.u64;
	// stw r11,10416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10416, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1990"))) PPC_WEAK_FUNC(sub_820F1990);
PPC_FUNC_IMPL(__imp__sub_820F1990) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,10416(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10416);
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r10,0,28,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF0F;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,10416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10416, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F19B4"))) PPC_WEAK_FUNC(sub_820F19B4);
PPC_FUNC_IMPL(__imp__sub_820F19B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F19B8"))) PPC_WEAK_FUNC(sub_820F19B8);
PPC_FUNC_IMPL(__imp__sub_820F19B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,10416(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10416);
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r10,r10,0,24,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF0FF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,10416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10416, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F19DC"))) PPC_WEAK_FUNC(sub_820F19DC);
PPC_FUNC_IMPL(__imp__sub_820F19DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F19E0"))) PPC_WEAK_FUNC(sub_820F19E0);
PPC_FUNC_IMPL(__imp__sub_820F19E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,10416(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10416);
	// rlwinm r11,r4,12,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0xFFFFF000;
	// rlwinm r10,r10,0,20,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF0FFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,10416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10416, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1A04"))) PPC_WEAK_FUNC(sub_820F1A04);
PPC_FUNC_IMPL(__imp__sub_820F1A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1A08"))) PPC_WEAK_FUNC(sub_820F1A08);
PPC_FUNC_IMPL(__imp__sub_820F1A08) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,10416(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10416);
	// rlwinm r11,r4,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r10,r10,0,16,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,10416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10416, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1A2C"))) PPC_WEAK_FUNC(sub_820F1A2C);
PPC_FUNC_IMPL(__imp__sub_820F1A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1A30"))) PPC_WEAK_FUNC(sub_820F1A30);
PPC_FUNC_IMPL(__imp__sub_820F1A30) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,10416(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10416);
	// rlwinm r11,r4,20,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 20) & 0xFFF00000;
	// rlwinm r10,r10,0,12,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF0FFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,10416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10416, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1A54"))) PPC_WEAK_FUNC(sub_820F1A54);
PPC_FUNC_IMPL(__imp__sub_820F1A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1A58"))) PPC_WEAK_FUNC(sub_820F1A58);
PPC_FUNC_IMPL(__imp__sub_820F1A58) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,10416(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10416);
	// rlwinm r11,r4,24,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFF000000;
	// rlwinm r10,r10,0,8,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFF0FFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,10416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10416, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1A7C"))) PPC_WEAK_FUNC(sub_820F1A7C);
PPC_FUNC_IMPL(__imp__sub_820F1A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1A80"))) PPC_WEAK_FUNC(sub_820F1A80);
PPC_FUNC_IMPL(__imp__sub_820F1A80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10416);
	// rlwimi r11,r4,28,0,3
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 28) & 0xF0000000) | (ctx.r11.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r11,10416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10416, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1A9C"))) PPC_WEAK_FUNC(sub_820F1A9C);
PPC_FUNC_IMPL(__imp__sub_820F1A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1AA0"))) PPC_WEAK_FUNC(sub_820F1AA0);
PPC_FUNC_IMPL(__imp__sub_820F1AA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10412(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10412);
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1AAC"))) PPC_WEAK_FUNC(sub_820F1AAC);
PPC_FUNC_IMPL(__imp__sub_820F1AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1AB0"))) PPC_WEAK_FUNC(sub_820F1AB0);
PPC_FUNC_IMPL(__imp__sub_820F1AB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10412(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10412);
	// rlwinm r3,r11,28,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1ABC"))) PPC_WEAK_FUNC(sub_820F1ABC);
PPC_FUNC_IMPL(__imp__sub_820F1ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1AC0"))) PPC_WEAK_FUNC(sub_820F1AC0);
PPC_FUNC_IMPL(__imp__sub_820F1AC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10412(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10412);
	// rlwinm r3,r11,24,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1ACC"))) PPC_WEAK_FUNC(sub_820F1ACC);
PPC_FUNC_IMPL(__imp__sub_820F1ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1AD0"))) PPC_WEAK_FUNC(sub_820F1AD0);
PPC_FUNC_IMPL(__imp__sub_820F1AD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10412(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10412);
	// rlwinm r3,r11,20,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1ADC"))) PPC_WEAK_FUNC(sub_820F1ADC);
PPC_FUNC_IMPL(__imp__sub_820F1ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1AE0"))) PPC_WEAK_FUNC(sub_820F1AE0);
PPC_FUNC_IMPL(__imp__sub_820F1AE0) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,10412(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10412);
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1AEC"))) PPC_WEAK_FUNC(sub_820F1AEC);
PPC_FUNC_IMPL(__imp__sub_820F1AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1AF0"))) PPC_WEAK_FUNC(sub_820F1AF0);
PPC_FUNC_IMPL(__imp__sub_820F1AF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10412(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10412);
	// rlwinm r3,r11,12,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1AFC"))) PPC_WEAK_FUNC(sub_820F1AFC);
PPC_FUNC_IMPL(__imp__sub_820F1AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1B00"))) PPC_WEAK_FUNC(sub_820F1B00);
PPC_FUNC_IMPL(__imp__sub_820F1B00) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,10412(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10412);
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1B0C"))) PPC_WEAK_FUNC(sub_820F1B0C);
PPC_FUNC_IMPL(__imp__sub_820F1B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1B10"))) PPC_WEAK_FUNC(sub_820F1B10);
PPC_FUNC_IMPL(__imp__sub_820F1B10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10412(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10412);
	// rlwinm r3,r11,4,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1B1C"))) PPC_WEAK_FUNC(sub_820F1B1C);
PPC_FUNC_IMPL(__imp__sub_820F1B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1B20"))) PPC_WEAK_FUNC(sub_820F1B20);
PPC_FUNC_IMPL(__imp__sub_820F1B20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10416);
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1B2C"))) PPC_WEAK_FUNC(sub_820F1B2C);
PPC_FUNC_IMPL(__imp__sub_820F1B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1B30"))) PPC_WEAK_FUNC(sub_820F1B30);
PPC_FUNC_IMPL(__imp__sub_820F1B30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10416);
	// rlwinm r3,r11,28,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1B3C"))) PPC_WEAK_FUNC(sub_820F1B3C);
PPC_FUNC_IMPL(__imp__sub_820F1B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1B40"))) PPC_WEAK_FUNC(sub_820F1B40);
PPC_FUNC_IMPL(__imp__sub_820F1B40) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10416);
	// rlwinm r3,r11,24,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1B4C"))) PPC_WEAK_FUNC(sub_820F1B4C);
PPC_FUNC_IMPL(__imp__sub_820F1B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1B50"))) PPC_WEAK_FUNC(sub_820F1B50);
PPC_FUNC_IMPL(__imp__sub_820F1B50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10416);
	// rlwinm r3,r11,20,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1B5C"))) PPC_WEAK_FUNC(sub_820F1B5C);
PPC_FUNC_IMPL(__imp__sub_820F1B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1B60"))) PPC_WEAK_FUNC(sub_820F1B60);
PPC_FUNC_IMPL(__imp__sub_820F1B60) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,10416(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10416);
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1B6C"))) PPC_WEAK_FUNC(sub_820F1B6C);
PPC_FUNC_IMPL(__imp__sub_820F1B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1B70"))) PPC_WEAK_FUNC(sub_820F1B70);
PPC_FUNC_IMPL(__imp__sub_820F1B70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10416);
	// rlwinm r3,r11,12,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1B7C"))) PPC_WEAK_FUNC(sub_820F1B7C);
PPC_FUNC_IMPL(__imp__sub_820F1B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1B80"))) PPC_WEAK_FUNC(sub_820F1B80);
PPC_FUNC_IMPL(__imp__sub_820F1B80) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,10416(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10416);
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1B8C"))) PPC_WEAK_FUNC(sub_820F1B8C);
PPC_FUNC_IMPL(__imp__sub_820F1B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1B90"))) PPC_WEAK_FUNC(sub_820F1B90);
PPC_FUNC_IMPL(__imp__sub_820F1B90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10416);
	// rlwinm r3,r11,4,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1B9C"))) PPC_WEAK_FUNC(sub_820F1B9C);
PPC_FUNC_IMPL(__imp__sub_820F1B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1BA0"))) PPC_WEAK_FUNC(sub_820F1BA0);
PPC_FUNC_IMPL(__imp__sub_820F1BA0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// li r11,1087
	ctx.r11.s64 = 1087;
	// bne cr6,0x820f1bb0
	if (!ctx.cr6.eq) goto loc_820F1BB0;
	// li r11,1024
	ctx.r11.s64 = 1024;
loc_820F1BB0:
	// stw r11,10444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10444, ctx.r11.u32);
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// lwz r10,10436(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10436);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// rlwimi r10,r11,16,15,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x10000) | (ctx.r10.u64 & 0xFFFFFFFFFFFEFFFF);
	// stw r10,10436(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10436, ctx.r10.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1BE0"))) PPC_WEAK_FUNC(sub_820F1BE0);
PPC_FUNC_IMPL(__imp__sub_820F1BE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10444(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10444);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1BEC"))) PPC_WEAK_FUNC(sub_820F1BEC);
PPC_FUNC_IMPL(__imp__sub_820F1BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1BF0"))) PPC_WEAK_FUNC(sub_820F1BF0);
PPC_FUNC_IMPL(__imp__sub_820F1BF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,12304(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12304);
	// stw r4,11892(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11892, ctx.r4.u32);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r10,28(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// rlwinm r11,r10,16,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xF;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x820f1c28
	if (ctx.cr6.eq) goto loc_820F1C28;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x820f1c28
	if (ctx.cr6.eq) goto loc_820F1C28;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x820f1c28
	if (ctx.cr6.eq) goto loc_820F1C28;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_820F1C28:
	// rlwinm r11,r10,13,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x1;
	// xor. r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r11,28(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwinm r9,r11,16,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF;
	// rlwinm r7,r11,0,16,11
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// rlwinm r11,r9,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r6,r9,3
	ctx.r6.s64 = ctx.r9.s64 + 3;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// andc r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// rldicr r12,r12,56,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// rlwinm r11,r11,16,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF0000;
	// or r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 | ctx.r11.u64;
	// stw r10,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r10.u32);
	// lwz r10,10244(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10244);
	// rlwinm r10,r10,0,16,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,10244(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10244, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1C94"))) PPC_WEAK_FUNC(sub_820F1C94);
PPC_FUNC_IMPL(__imp__sub_820F1C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1C98"))) PPC_WEAK_FUNC(sub_820F1C98);
PPC_FUNC_IMPL(__imp__sub_820F1C98) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11892(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11892);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1CA0"))) PPC_WEAK_FUNC(sub_820F1CA0);
PPC_FUNC_IMPL(__imp__sub_820F1CA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,12308(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12308);
	// stw r4,11896(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11896, ctx.r4.u32);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r10,28(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// rlwinm r11,r10,16,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xF;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x820f1cd8
	if (ctx.cr6.eq) goto loc_820F1CD8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x820f1cd8
	if (ctx.cr6.eq) goto loc_820F1CD8;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x820f1cd8
	if (ctx.cr6.eq) goto loc_820F1CD8;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_820F1CD8:
	// rlwinm r11,r10,13,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x1;
	// xor. r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r11,28(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwinm r9,r11,16,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF;
	// rlwinm r7,r11,0,16,11
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// rlwinm r11,r9,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r6,r9,3
	ctx.r6.s64 = ctx.r9.s64 + 3;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// andc r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// rldicr r12,r12,54,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 54) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// rlwinm r11,r11,16,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF0000;
	// or r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 | ctx.r11.u64;
	// stw r10,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r10.u32);
	// lwz r10,10252(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10252);
	// rlwinm r10,r10,0,16,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,10252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10252, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1D44"))) PPC_WEAK_FUNC(sub_820F1D44);
PPC_FUNC_IMPL(__imp__sub_820F1D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1D48"))) PPC_WEAK_FUNC(sub_820F1D48);
PPC_FUNC_IMPL(__imp__sub_820F1D48) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11896(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11896);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1D50"))) PPC_WEAK_FUNC(sub_820F1D50);
PPC_FUNC_IMPL(__imp__sub_820F1D50) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,12312(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12312);
	// stw r4,11900(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11900, ctx.r4.u32);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r10,28(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// rlwinm r11,r10,16,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xF;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x820f1d88
	if (ctx.cr6.eq) goto loc_820F1D88;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x820f1d88
	if (ctx.cr6.eq) goto loc_820F1D88;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x820f1d88
	if (ctx.cr6.eq) goto loc_820F1D88;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_820F1D88:
	// rlwinm r11,r10,13,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x1;
	// xor. r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r11,28(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwinm r9,r11,16,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF;
	// rlwinm r7,r11,0,16,11
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// rlwinm r11,r9,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r6,r9,3
	ctx.r6.s64 = ctx.r9.s64 + 3;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// andc r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// rldicr r12,r12,53,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 53) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// rlwinm r11,r11,16,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF0000;
	// or r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 | ctx.r11.u64;
	// stw r10,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r10.u32);
	// lwz r10,10256(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10256);
	// rlwinm r10,r10,0,16,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,10256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10256, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1DF4"))) PPC_WEAK_FUNC(sub_820F1DF4);
PPC_FUNC_IMPL(__imp__sub_820F1DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1DF8"))) PPC_WEAK_FUNC(sub_820F1DF8);
PPC_FUNC_IMPL(__imp__sub_820F1DF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11900(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11900);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1E00"))) PPC_WEAK_FUNC(sub_820F1E00);
PPC_FUNC_IMPL(__imp__sub_820F1E00) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,12316(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12316);
	// stw r4,11904(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11904, ctx.r4.u32);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r10,28(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// rlwinm r11,r10,16,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xF;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x820f1e38
	if (ctx.cr6.eq) goto loc_820F1E38;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x820f1e38
	if (ctx.cr6.eq) goto loc_820F1E38;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x820f1e38
	if (ctx.cr6.eq) goto loc_820F1E38;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_820F1E38:
	// rlwinm r11,r10,13,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x1;
	// xor. r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r11,28(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwinm r9,r11,16,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF;
	// rlwinm r7,r11,0,16,11
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// rlwinm r11,r9,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r6,r9,3
	ctx.r6.s64 = ctx.r9.s64 + 3;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// andc r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// rldicr r12,r12,52,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 52) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// rlwinm r11,r11,16,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF0000;
	// or r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 | ctx.r11.u64;
	// stw r10,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r10.u32);
	// lwz r10,10260(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10260);
	// rlwinm r10,r10,0,16,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,10260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10260, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1EA4"))) PPC_WEAK_FUNC(sub_820F1EA4);
PPC_FUNC_IMPL(__imp__sub_820F1EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1EA8"))) PPC_WEAK_FUNC(sub_820F1EA8);
PPC_FUNC_IMPL(__imp__sub_820F1EA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11904(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11904);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1EB0"))) PPC_WEAK_FUNC(sub_820F1EB0);
PPC_FUNC_IMPL(__imp__sub_820F1EB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,47,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 47) & 0xFFFFFFFFFFFFFFFF;
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10496(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10496, temp.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1ED4"))) PPC_WEAK_FUNC(sub_820F1ED4);
PPC_FUNC_IMPL(__imp__sub_820F1ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1ED8"))) PPC_WEAK_FUNC(sub_820F1ED8);
PPC_FUNC_IMPL(__imp__sub_820F1ED8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,10496(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10496);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1EE8"))) PPC_WEAK_FUNC(sub_820F1EE8);
PPC_FUNC_IMPL(__imp__sub_820F1EE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,48,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 48) & 0xFFFFFFFFFFFFFFFF;
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10492(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10492, temp.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1F0C"))) PPC_WEAK_FUNC(sub_820F1F0C);
PPC_FUNC_IMPL(__imp__sub_820F1F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1F10"))) PPC_WEAK_FUNC(sub_820F1F10);
PPC_FUNC_IMPL(__imp__sub_820F1F10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,10492(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10492);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1F20"))) PPC_WEAK_FUNC(sub_820F1F20);
PPC_FUNC_IMPL(__imp__sub_820F1F20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10488(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10488);
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwimi r4,r11,0,0,29
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFFFC) | (ctx.r4.u64 & 0xFFFFFFFF00000003);
	// rldicr r12,r12,49,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 49) & 0xFFFFFFFFFFFFFFFF;
	// stw r4,10488(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10488, ctx.r4.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1F44"))) PPC_WEAK_FUNC(sub_820F1F44);
PPC_FUNC_IMPL(__imp__sub_820F1F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1F48"))) PPC_WEAK_FUNC(sub_820F1F48);
PPC_FUNC_IMPL(__imp__sub_820F1F48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10488(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10488);
	// clrlwi r3,r11,30
	ctx.r3.u64 = ctx.r11.u32 & 0x3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1F54"))) PPC_WEAK_FUNC(sub_820F1F54);
PPC_FUNC_IMPL(__imp__sub_820F1F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1F58"))) PPC_WEAK_FUNC(sub_820F1F58);
PPC_FUNC_IMPL(__imp__sub_820F1F58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10560(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10560);
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwimi r4,r11,0,0,30
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFFFE) | (ctx.r4.u64 & 0xFFFFFFFF00000001);
	// rldicr r12,r12,35,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 35) & 0xFFFFFFFFFFFFFFFF;
	// stw r4,10560(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10560, ctx.r4.u32);
	// ld r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1F7C"))) PPC_WEAK_FUNC(sub_820F1F7C);
PPC_FUNC_IMPL(__imp__sub_820F1F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1F80"))) PPC_WEAK_FUNC(sub_820F1F80);
PPC_FUNC_IMPL(__imp__sub_820F1F80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10560(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10560);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1F8C"))) PPC_WEAK_FUNC(sub_820F1F8C);
PPC_FUNC_IMPL(__imp__sub_820F1F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1F90"))) PPC_WEAK_FUNC(sub_820F1F90);
PPC_FUNC_IMPL(__imp__sub_820F1F90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10440(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10440);
	// rlwimi r11,r4,21,10,10
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 21) & 0x200000) | (ctx.r11.u64 & 0xFFFFFFFFFFDFFFFF);
	// stw r11,10440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10440, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1FAC"))) PPC_WEAK_FUNC(sub_820F1FAC);
PPC_FUNC_IMPL(__imp__sub_820F1FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1FB0"))) PPC_WEAK_FUNC(sub_820F1FB0);
PPC_FUNC_IMPL(__imp__sub_820F1FB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10440(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10440);
	// rlwinm r3,r11,11,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1FBC"))) PPC_WEAK_FUNC(sub_820F1FBC);
PPC_FUNC_IMPL(__imp__sub_820F1FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1FC0"))) PPC_WEAK_FUNC(sub_820F1FC0);
PPC_FUNC_IMPL(__imp__sub_820F1FC0) {
	PPC_FUNC_PROLOGUE();
	// li r12,1
	ctx.r12.s64 = 1;
	// stw r4,10328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10328, ctx.r4.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// rldicr r12,r12,38,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 38) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1FDC"))) PPC_WEAK_FUNC(sub_820F1FDC);
PPC_FUNC_IMPL(__imp__sub_820F1FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F1FE0"))) PPC_WEAK_FUNC(sub_820F1FE0);
PPC_FUNC_IMPL(__imp__sub_820F1FE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,10328(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10328);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F1FE8"))) PPC_WEAK_FUNC(sub_820F1FE8);
PPC_FUNC_IMPL(__imp__sub_820F1FE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10428(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10428);
	// rlwimi r11,r4,4,27,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 4) & 0x10) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFEF);
	// stw r11,10428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10428, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F2004"))) PPC_WEAK_FUNC(sub_820F2004);
PPC_FUNC_IMPL(__imp__sub_820F2004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F2008"))) PPC_WEAK_FUNC(sub_820F2008);
PPC_FUNC_IMPL(__imp__sub_820F2008) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10428(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10428);
	// rlwinm r3,r11,28,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F2014"))) PPC_WEAK_FUNC(sub_820F2014);
PPC_FUNC_IMPL(__imp__sub_820F2014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F2018"))) PPC_WEAK_FUNC(sub_820F2018);
PPC_FUNC_IMPL(__imp__sub_820F2018) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10428(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10428);
	// rlwimi r11,r4,24,0,7
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 24) & 0xFF000000) | (ctx.r11.u64 & 0xFFFFFFFF00FFFFFF);
	// stw r11,10428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10428, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F2034"))) PPC_WEAK_FUNC(sub_820F2034);
PPC_FUNC_IMPL(__imp__sub_820F2034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F2038"))) PPC_WEAK_FUNC(sub_820F2038);
PPC_FUNC_IMPL(__imp__sub_820F2038) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,10428(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,0,24,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFC) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF03);
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F204C"))) PPC_WEAK_FUNC(sub_820F204C);
PPC_FUNC_IMPL(__imp__sub_820F204C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F2050"))) PPC_WEAK_FUNC(sub_820F2050);
PPC_FUNC_IMPL(__imp__sub_820F2050) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,32,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10572(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10572, temp.u32);
	// ld r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F2074"))) PPC_WEAK_FUNC(sub_820F2074);
PPC_FUNC_IMPL(__imp__sub_820F2074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F2078"))) PPC_WEAK_FUNC(sub_820F2078);
PPC_FUNC_IMPL(__imp__sub_820F2078) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,10572(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10572);
	// blr 
	return;
}

