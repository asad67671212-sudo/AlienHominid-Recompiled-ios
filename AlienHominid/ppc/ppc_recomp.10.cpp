#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_820F2080"))) PPC_WEAK_FUNC(sub_820F2080);
PPC_FUNC_IMPL(__imp__sub_820F2080) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,34,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 34) & 0xFFFFFFFFFFFFFFFF;
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10564(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10564, temp.u32);
	// ld r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F20A4"))) PPC_WEAK_FUNC(sub_820F20A4);
PPC_FUNC_IMPL(__imp__sub_820F20A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F20A8"))) PPC_WEAK_FUNC(sub_820F20A8);
PPC_FUNC_IMPL(__imp__sub_820F20A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,10564(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10564);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F20B0"))) PPC_WEAK_FUNC(sub_820F20B0);
PPC_FUNC_IMPL(__imp__sub_820F20B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10576(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10576, temp.u32);
	// ld r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F20CC"))) PPC_WEAK_FUNC(sub_820F20CC);
PPC_FUNC_IMPL(__imp__sub_820F20CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F20D0"))) PPC_WEAK_FUNC(sub_820F20D0);
PPC_FUNC_IMPL(__imp__sub_820F20D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,10576(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10576);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F20D8"))) PPC_WEAK_FUNC(sub_820F20D8);
PPC_FUNC_IMPL(__imp__sub_820F20D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,33,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 33) & 0xFFFFFFFFFFFFFFFF;
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10568(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10568, temp.u32);
	// ld r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F20FC"))) PPC_WEAK_FUNC(sub_820F20FC);
PPC_FUNC_IMPL(__imp__sub_820F20FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F2100"))) PPC_WEAK_FUNC(sub_820F2100);
PPC_FUNC_IMPL(__imp__sub_820F2100) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,10568(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10568);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F2108"))) PPC_WEAK_FUNC(sub_820F2108);
PPC_FUNC_IMPL(__imp__sub_820F2108) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11716(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11716);
	// rlwimi r11,r4,20,9,11
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 20) & 0x700000) | (ctx.r11.u64 & 0xFFFFFFFFFF8FFFFF);
	// stw r11,11716(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11716, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F2124"))) PPC_WEAK_FUNC(sub_820F2124);
PPC_FUNC_IMPL(__imp__sub_820F2124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F2128"))) PPC_WEAK_FUNC(sub_820F2128);
PPC_FUNC_IMPL(__imp__sub_820F2128) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11716(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11716);
	// rlwinm r3,r11,12,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F2134"))) PPC_WEAK_FUNC(sub_820F2134);
PPC_FUNC_IMPL(__imp__sub_820F2134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F2138"))) PPC_WEAK_FUNC(sub_820F2138);
PPC_FUNC_IMPL(__imp__sub_820F2138) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,10815(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10815);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,11716(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11716);
	// rlwimi r11,r4,17,12,14
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 17) & 0xE0000) | (ctx.r11.u64 & 0xFFFFFFFFFFF1FFFF);
	// stw r11,11716(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11716, ctx.r11.u32);
	// bne 0x820f2170
	if (!ctx.cr0.eq) goto loc_820F2170;
	// rlwinm r11,r11,0,12,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE0000;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x820f2170
	if (!ctx.cr6.eq) goto loc_820F2170;
	// ld r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 40);
	// li r12,-257
	ctx.r12.s64 = -257;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// b 0x820f2178
	goto loc_820F2178;
loc_820F2170:
	// ld r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 40);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
loc_820F2178:
	// std r11,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, ctx.r11.u64);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F218C"))) PPC_WEAK_FUNC(sub_820F218C);
PPC_FUNC_IMPL(__imp__sub_820F218C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F2190"))) PPC_WEAK_FUNC(sub_820F2190);
PPC_FUNC_IMPL(__imp__sub_820F2190) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11716(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11716);
	// rlwinm r3,r11,15,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F219C"))) PPC_WEAK_FUNC(sub_820F219C);
PPC_FUNC_IMPL(__imp__sub_820F219C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F21A0"))) PPC_WEAK_FUNC(sub_820F21A0);
PPC_FUNC_IMPL(__imp__sub_820F21A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10432(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10432);
	// rlwimi r11,r4,3,28,28
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 3) & 0x8) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF7);
	// stw r11,10432(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10432, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F21BC"))) PPC_WEAK_FUNC(sub_820F21BC);
PPC_FUNC_IMPL(__imp__sub_820F21BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F21C0"))) PPC_WEAK_FUNC(sub_820F21C0);
PPC_FUNC_IMPL(__imp__sub_820F21C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10432(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10432);
	// rlwinm r3,r11,29,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F21CC"))) PPC_WEAK_FUNC(sub_820F21CC);
PPC_FUNC_IMPL(__imp__sub_820F21CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F21D0"))) PPC_WEAK_FUNC(sub_820F21D0);
PPC_FUNC_IMPL(__imp__sub_820F21D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10432(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10432);
	// rlwimi r11,r4,2,29,29
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 2) & 0x4) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFB);
	// stw r11,10432(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10432, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F21EC"))) PPC_WEAK_FUNC(sub_820F21EC);
PPC_FUNC_IMPL(__imp__sub_820F21EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F21F0"))) PPC_WEAK_FUNC(sub_820F21F0);
PPC_FUNC_IMPL(__imp__sub_820F21F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10432(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10432);
	// rlwinm r3,r11,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F21FC"))) PPC_WEAK_FUNC(sub_820F21FC);
PPC_FUNC_IMPL(__imp__sub_820F21FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F2200"))) PPC_WEAK_FUNC(sub_820F2200);
PPC_FUNC_IMPL(__imp__sub_820F2200) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10432(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10432);
	// rlwimi r11,r4,5,26,26
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 5) & 0x20) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFDF);
	// stw r11,10432(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10432, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F221C"))) PPC_WEAK_FUNC(sub_820F221C);
PPC_FUNC_IMPL(__imp__sub_820F221C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F2220"))) PPC_WEAK_FUNC(sub_820F2220);
PPC_FUNC_IMPL(__imp__sub_820F2220) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10432(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10432);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F222C"))) PPC_WEAK_FUNC(sub_820F222C);
PPC_FUNC_IMPL(__imp__sub_820F222C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F2230"))) PPC_WEAK_FUNC(sub_820F2230);
PPC_FUNC_IMPL(__imp__sub_820F2230) {
	PPC_FUNC_PROLOGUE();
	// stb r4,10434(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10434, ctx.r4.u8);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F2244"))) PPC_WEAK_FUNC(sub_820F2244);
PPC_FUNC_IMPL(__imp__sub_820F2244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F2248"))) PPC_WEAK_FUNC(sub_820F2248);
PPC_FUNC_IMPL(__imp__sub_820F2248) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10434(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10434);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F2250"))) PPC_WEAK_FUNC(sub_820F2250);
PPC_FUNC_IMPL(__imp__sub_820F2250) {
	PPC_FUNC_PROLOGUE();
	// stw r4,13444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13444, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F2258"))) PPC_WEAK_FUNC(sub_820F2258);
PPC_FUNC_IMPL(__imp__sub_820F2258) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,13444(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13444);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F2260"))) PPC_WEAK_FUNC(sub_820F2260);
PPC_FUNC_IMPL(__imp__sub_820F2260) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11716(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11716);
	// rlwimi r11,r4,23,2,8
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 23) & 0x3F800000) | (ctx.r11.u64 & 0xFFFFFFFFC07FFFFF);
	// stw r11,11716(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11716, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F2270"))) PPC_WEAK_FUNC(sub_820F2270);
PPC_FUNC_IMPL(__imp__sub_820F2270) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11716(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11716);
	// rlwinm r3,r11,9,25,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x7F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F227C"))) PPC_WEAK_FUNC(sub_820F227C);
PPC_FUNC_IMPL(__imp__sub_820F227C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F2280"))) PPC_WEAK_FUNC(sub_820F2280);
PPC_FUNC_IMPL(__imp__sub_820F2280) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r7,r4,32
	ctx.r7.s64 = ctx.r4.s64 + 32;
	// li r6,1
	ctx.r6.s64 = 1;
	// clrldi r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// rldicr r6,r6,63,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// add r8,r3,r4
	ctx.r8.u64 = ctx.r3.u64 + ctx.r4.u64;
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r10,r5,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r9,-7656
	ctx.r9.s64 = ctx.r9.s64 + -7656;
	// addi r11,r11,1024
	ctx.r11.s64 = ctx.r11.s64 + 1024;
	// srd r6,r6,r7
	ctx.r6.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r6.u64 >> (ctx.r7.u8 & 0x7F));
	// lbz r7,11788(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 11788);
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rotlwi r7,r7,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lwzx r4,r7,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r7,r9,22,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 22) & 0x1;
	// rlwimi r9,r10,11,20,20
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 11) & 0x800) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF7FF);
	// or r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 | ctx.r10.u64;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// andc r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 & ~ctx.r7.u64;
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// rlwinm r7,r7,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
	// or r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 | ctx.r5.u64;
	// rlwimi r31,r10,21,9,10
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r10.u32, 21) & 0x600000) | (ctx.r31.u64 & 0xFFFFFFFFFF9FFFFF);
	// rlwimi r31,r10,21,4,6
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r10.u32, 21) & 0xE000000) | (ctx.r31.u64 & 0xFFFFFFFFF1FFFFFF);
	// rotlwi r10,r31,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// rlwimi r10,r7,31,13,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r7.u32, 31) & 0x7FFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFF80000);
	// lbz r8,11866(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 11866);
	// rlwimi r10,r7,31,1,11
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r7.u32, 31) & 0x7FF00000) | (ctx.r10.u64 & 0xFFFFFFFF800FFFFF);
	// rlwinm r7,r10,13,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0xFFF;
	// rlwinm r10,r8,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 & ctx.r10.u64;
	// andc r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ~ctx.r10.u64;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// rlwimi r10,r9,0,0,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 | ctx.r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F2340"))) PPC_WEAK_FUNC(sub_820F2340);
PPC_FUNC_IMPL(__imp__sub_820F2340) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,1040(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1040);
	// lwz r9,1036(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// rlwinm r11,r10,21,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x1;
	// rlwinm r10,r9,11,21,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0x7FF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwimi r10,r11,0,29,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x4) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFB);
	// clrlwi r3,r10,29
	ctx.r3.u64 = ctx.r10.u32 & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F2370"))) PPC_WEAK_FUNC(sub_820F2370);
PPC_FUNC_IMPL(__imp__sub_820F2370) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// add r8,r3,r4
	ctx.r8.u64 = ctx.r3.u64 + ctx.r4.u64;
	// addi r10,r11,1024
	ctx.r10.s64 = ctx.r11.s64 + 1024;
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// rldicr r7,r7,63,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,16(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// srd r6,r7,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r7.u64 >> (ctx.r11.u8 & 0x7F));
	// lbz r11,11866(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 11866);
	// rlwinm r7,r11,0,31,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// rlwimi r11,r5,31,13,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 31) & 0x7FFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFF80000);
	// rlwinm r7,r9,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwimi r11,r5,31,1,11
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 31) & 0x7FF00000) | (ctx.r11.u64 & 0xFFFFFFFF800FFFFF);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// rlwinm r11,r11,13,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0xFFF;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// and r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ctx.r7.u64;
	// andc r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r7.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwimi r11,r4,0,0,29
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFFFFFC) | (ctx.r11.u64 & 0xFFFFFFFF00000003);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// stb r31,11866(r8)
	PPC_STORE_U8(ctx.r8.u32 + 11866, ctx.r31.u8);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 | ctx.r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F23F8"))) PPC_WEAK_FUNC(sub_820F23F8);
PPC_FUNC_IMPL(__imp__sub_820F23F8) {
	PPC_FUNC_PROLOGUE();
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r11,11866(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11866);
	// rlwinm r3,r11,31,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F2408"))) PPC_WEAK_FUNC(sub_820F2408);
PPC_FUNC_IMPL(__imp__sub_820F2408) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r7,r4,32
	ctx.r7.s64 = ctx.r4.s64 + 32;
	// li r6,1
	ctx.r6.s64 = 1;
	// clrldi r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// rldicr r6,r6,63,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// add r8,r3,r4
	ctx.r8.u64 = ctx.r3.u64 + ctx.r4.u64;
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r10,r5,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r9,-7656
	ctx.r9.s64 = ctx.r9.s64 + -7656;
	// addi r11,r11,1024
	ctx.r11.s64 = ctx.r11.s64 + 1024;
	// srd r6,r6,r7
	ctx.r6.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r6.u64 >> (ctx.r7.u8 & 0x7F));
	// lbz r7,11788(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 11788);
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rotlwi r7,r7,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lwzx r4,r7,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r7,r9,21,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 21) & 0x1;
	// rlwimi r9,r10,10,21,21
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 10) & 0x400) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFBFF);
	// or r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 | ctx.r10.u64;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// andc r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 & ~ctx.r7.u64;
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// rlwinm r7,r7,6,0,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
	// or r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 | ctx.r5.u64;
	// rlwimi r31,r10,19,11,12
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r10.u32, 19) & 0x180000) | (ctx.r31.u64 & 0xFFFFFFFFFFE7FFFF);
	// rlwimi r31,r10,19,4,6
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r10.u32, 19) & 0xE000000) | (ctx.r31.u64 & 0xFFFFFFFFF1FFFFFF);
	// rotlwi r10,r31,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// rlwimi r10,r7,31,13,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r7.u32, 31) & 0x7FFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFF80000);
	// lbz r8,11866(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 11866);
	// rlwimi r10,r7,31,1,11
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r7.u32, 31) & 0x7FF00000) | (ctx.r10.u64 & 0xFFFFFFFF800FFFFF);
	// rlwinm r7,r10,13,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0xFFF;
	// rlwinm r10,r8,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 & ctx.r10.u64;
	// andc r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ~ctx.r10.u64;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// rlwimi r10,r9,0,0,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 | ctx.r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F24C8"))) PPC_WEAK_FUNC(sub_820F24C8);
PPC_FUNC_IMPL(__imp__sub_820F24C8) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,1040(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1040);
	// lwz r9,1036(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// rlwinm r11,r10,22,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x1;
	// rlwinm r10,r9,13,19,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0x1FFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwimi r10,r11,0,29,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x4) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFB);
	// clrlwi r3,r10,29
	ctx.r3.u64 = ctx.r10.u32 & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F24F8"))) PPC_WEAK_FUNC(sub_820F24F8);
PPC_FUNC_IMPL(__imp__sub_820F24F8) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// add r8,r3,r4
	ctx.r8.u64 = ctx.r3.u64 + ctx.r4.u64;
	// addi r10,r11,1024
	ctx.r10.s64 = ctx.r11.s64 + 1024;
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lwz r4,16(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// srd r6,r9,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r11.u8 & 0x7F));
	// lbz r11,11866(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 11866);
	// rlwinm r9,r11,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// or r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 | ctx.r5.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// rlwinm r7,r9,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwimi r11,r5,31,13,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 31) & 0x7FFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFF80000);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// rlwimi r11,r5,31,1,11
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 31) & 0x7FF00000) | (ctx.r11.u64 & 0xFFFFFFFF800FFFFF);
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// rlwinm r11,r11,13,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0xFFF;
	// andc r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r7.u64;
	// and r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ctx.r7.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwimi r11,r4,0,0,29
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFFFFFC) | (ctx.r11.u64 & 0xFFFFFFFF00000003);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// stb r31,11866(r8)
	PPC_STORE_U8(ctx.r8.u32 + 11866, ctx.r31.u8);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 | ctx.r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F257C"))) PPC_WEAK_FUNC(sub_820F257C);
PPC_FUNC_IMPL(__imp__sub_820F257C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F2580"))) PPC_WEAK_FUNC(sub_820F2580);
PPC_FUNC_IMPL(__imp__sub_820F2580) {
	PPC_FUNC_PROLOGUE();
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r11,11866(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11866);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F2590"))) PPC_WEAK_FUNC(sub_820F2590);
PPC_FUNC_IMPL(__imp__sub_820F2590) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,1024
	ctx.r11.s64 = ctx.r11.s64 + 1024;
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwimi r9,r5,23,7,8
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 23) & 0x1800000) | (ctx.r9.u64 & 0xFFFFFFFFFE7FFFFF);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F25CC"))) PPC_WEAK_FUNC(sub_820F25CC);
PPC_FUNC_IMPL(__imp__sub_820F25CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F25D0"))) PPC_WEAK_FUNC(sub_820F25D0);
PPC_FUNC_IMPL(__imp__sub_820F25D0) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// rlwinm r3,r11,9,30,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F25E4"))) PPC_WEAK_FUNC(sub_820F25E4);
PPC_FUNC_IMPL(__imp__sub_820F25E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F25E8"))) PPC_WEAK_FUNC(sub_820F25E8);
PPC_FUNC_IMPL(__imp__sub_820F25E8) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// add r8,r3,r4
	ctx.r8.u64 = ctx.r3.u64 + ctx.r4.u64;
	// addi r10,r11,1024
	ctx.r10.s64 = ctx.r11.s64 + 1024;
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// rldicr r7,r7,63,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,16(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// srd r6,r7,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r7.u64 >> (ctx.r11.u8 & 0x7F));
	// lbz r11,11866(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 11866);
	// rlwinm r7,r11,0,30,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// rlwimi r11,r5,31,13,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 31) & 0x7FFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFF80000);
	// rlwinm r7,r9,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwimi r11,r5,31,1,11
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 31) & 0x7FF00000) | (ctx.r11.u64 & 0xFFFFFFFF800FFFFF);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// rlwinm r11,r11,13,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0xFFF;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// and r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ctx.r7.u64;
	// andc r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r7.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwimi r11,r4,0,0,29
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFFFFFC) | (ctx.r11.u64 & 0xFFFFFFFF00000003);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// stb r31,11866(r8)
	PPC_STORE_U8(ctx.r8.u32 + 11866, ctx.r31.u8);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 | ctx.r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F2670"))) PPC_WEAK_FUNC(sub_820F2670);
PPC_FUNC_IMPL(__imp__sub_820F2670) {
	PPC_FUNC_PROLOGUE();
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r11,11866(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11866);
	// rlwinm r3,r11,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F2680"))) PPC_WEAK_FUNC(sub_820F2680);
PPC_FUNC_IMPL(__imp__sub_820F2680) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,1024
	ctx.r11.s64 = ctx.r11.s64 + 1024;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm. r9,r10,0,20,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x820f26a0
	if (!ctx.cr0.eq) goto loc_820F26A0;
	// rlwinm. r10,r10,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820f26dc
	if (ctx.cr0.eq) goto loc_820F26DC;
loc_820F26A0:
	// addi r9,r4,32
	ctx.r9.s64 = ctx.r4.s64 + 32;
	// li r7,1
	ctx.r7.s64 = 1;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// rldicr r7,r7,63,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-7656
	ctx.r10.s64 = ctx.r10.s64 + -7656;
	// lwzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwimi r8,r10,25,4,6
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 25) & 0xE000000) | (ctx.r8.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// srd r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r7.u64 >> (ctx.r9.u8 & 0x7F));
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
loc_820F26DC:
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// stb r5,11788(r10)
	PPC_STORE_U8(ctx.r10.u32 + 11788, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F26E8"))) PPC_WEAK_FUNC(sub_820F26E8);
PPC_FUNC_IMPL(__imp__sub_820F26E8) {
	PPC_FUNC_PROLOGUE();
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r3,11788(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11788);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F26F4"))) PPC_WEAK_FUNC(sub_820F26F4);
PPC_FUNC_IMPL(__imp__sub_820F26F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F26F8"))) PPC_WEAK_FUNC(sub_820F26F8);
PPC_FUNC_IMPL(__imp__sub_820F26F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r5,36(r1)
	PPC_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r4,32
	ctx.r9.s64 = ctx.r4.s64 + 32;
	// li r8,1
	ctx.r8.s64 = 1;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// rldicr r8,r8,63,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lfs f0,-7576(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -7576);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,1024
	ctx.r11.s64 = ctx.r11.s64 + 1024;
	// lfs f13,36(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// srd r10,r8,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r9.u8 & 0x7F));
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// rlwimi r8,r9,5,23,26
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 5) & 0x1E0) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFE1F);
	// stw r8,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F2758"))) PPC_WEAK_FUNC(sub_820F2758);
PPC_FUNC_IMPL(__imp__sub_820F2758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,1044(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1044);
	// rlwinm r11,r11,23,0,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0xFF800000;
	// srawi r11,r11,28
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 28;
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
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F279C"))) PPC_WEAK_FUNC(sub_820F279C);
PPC_FUNC_IMPL(__imp__sub_820F279C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F27A0"))) PPC_WEAK_FUNC(sub_820F27A0);
PPC_FUNC_IMPL(__imp__sub_820F27A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r5,36(r1)
	PPC_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r4,32
	ctx.r9.s64 = ctx.r4.s64 + 32;
	// li r8,1
	ctx.r8.s64 = 1;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// rldicr r8,r8,63,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lfs f0,-7588(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -7588);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,1024
	ctx.r11.s64 = ctx.r11.s64 + 1024;
	// lfs f13,36(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// srd r10,r8,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r9.u8 & 0x7F));
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// rlwimi r8,r9,12,10,19
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 12) & 0x3FF000) | (ctx.r8.u64 & 0xFFFFFFFFFFC00FFF);
	// stw r8,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F2800"))) PPC_WEAK_FUNC(sub_820F2800);
PPC_FUNC_IMPL(__imp__sub_820F2800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,1040(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1040);
	// rlwinm r11,r11,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// srawi r11,r11,22
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 22;
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
	// lfs f0,-8556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8556);
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

__attribute__((alias("__imp__sub_820F2840"))) PPC_WEAK_FUNC(sub_820F2840);
PPC_FUNC_IMPL(__imp__sub_820F2840) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,3102
	ctx.r11.s64 = ctx.r4.s64 + 3102;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820f28a0
	if (ctx.cr0.eq) goto loc_820F28A0;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mulli r10,r4,24
	ctx.r10.s64 = ctx.r4.s64 * 24;
	// rlwinm r11,r11,30,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xF;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// addi r10,r10,1024
	ctx.r10.s64 = ctx.r10.s64 + 1024;
	// bgt cr6,0x820f2874
	if (ctx.cr6.gt) goto loc_820F2874;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_820F2874:
	// addi r9,r4,32
	ctx.r9.s64 = ctx.r4.s64 + 32;
	// li r8,1
	ctx.r8.s64 = 1;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// rldicr r8,r8,63,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// srd r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r9.u8 & 0x7F));
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// rlwimi r8,r11,2,26,29
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 2) & 0x3C) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFC3);
	// stw r8,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r8.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
loc_820F28A0:
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// stb r5,11814(r10)
	PPC_STORE_U8(ctx.r10.u32 + 11814, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F28AC"))) PPC_WEAK_FUNC(sub_820F28AC);
PPC_FUNC_IMPL(__imp__sub_820F28AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F28B0"))) PPC_WEAK_FUNC(sub_820F28B0);
PPC_FUNC_IMPL(__imp__sub_820F28B0) {
	PPC_FUNC_PROLOGUE();
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r3,11814(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11814);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F28BC"))) PPC_WEAK_FUNC(sub_820F28BC);
PPC_FUNC_IMPL(__imp__sub_820F28BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F28C0"))) PPC_WEAK_FUNC(sub_820F28C0);
PPC_FUNC_IMPL(__imp__sub_820F28C0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,3102
	ctx.r11.s64 = ctx.r4.s64 + 3102;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820f2920
	if (ctx.cr0.eq) goto loc_820F2920;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mulli r10,r4,24
	ctx.r10.s64 = ctx.r4.s64 * 24;
	// rlwinm r11,r11,26,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0xF;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// addi r10,r10,1024
	ctx.r10.s64 = ctx.r10.s64 + 1024;
	// blt cr6,0x820f28f4
	if (ctx.cr6.lt) goto loc_820F28F4;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_820F28F4:
	// addi r9,r4,32
	ctx.r9.s64 = ctx.r4.s64 + 32;
	// li r8,1
	ctx.r8.s64 = 1;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// rldicr r8,r8,63,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// srd r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r9.u8 & 0x7F));
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// rlwimi r8,r11,6,22,25
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 6) & 0x3C0) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFC3F);
	// stw r8,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r8.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
loc_820F2920:
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// stb r5,11840(r10)
	PPC_STORE_U8(ctx.r10.u32 + 11840, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F292C"))) PPC_WEAK_FUNC(sub_820F292C);
PPC_FUNC_IMPL(__imp__sub_820F292C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F2930"))) PPC_WEAK_FUNC(sub_820F2930);
PPC_FUNC_IMPL(__imp__sub_820F2930) {
	PPC_FUNC_PROLOGUE();
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r3,11840(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11840);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F293C"))) PPC_WEAK_FUNC(sub_820F293C);
PPC_FUNC_IMPL(__imp__sub_820F293C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F2940"))) PPC_WEAK_FUNC(sub_820F2940);
PPC_FUNC_IMPL(__imp__sub_820F2940) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cntlzw r8,r5
	ctx.r8.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// addi r11,r11,1024
	ctx.r11.s64 = ctx.r11.s64 + 1024;
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 ^ 1;
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r9,r9,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F298C"))) PPC_WEAK_FUNC(sub_820F298C);
PPC_FUNC_IMPL(__imp__sub_820F298C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F2990"))) PPC_WEAK_FUNC(sub_820F2990);
PPC_FUNC_IMPL(__imp__sub_820F2990) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,1044(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1044);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r3,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F29AC"))) PPC_WEAK_FUNC(sub_820F29AC);
PPC_FUNC_IMPL(__imp__sub_820F29AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F29B0"))) PPC_WEAK_FUNC(sub_820F29B0);
PPC_FUNC_IMPL(__imp__sub_820F29B0) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// lwz r9,1024(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	// rlwimi r9,r5,10,19,21
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 10) & 0x1C00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE3FF);
	// stw r9,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r9.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F29E8"))) PPC_WEAK_FUNC(sub_820F29E8);
PPC_FUNC_IMPL(__imp__sub_820F29E8) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,1024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	// rlwinm r3,r11,22,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F29FC"))) PPC_WEAK_FUNC(sub_820F29FC);
PPC_FUNC_IMPL(__imp__sub_820F29FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F2A00"))) PPC_WEAK_FUNC(sub_820F2A00);
PPC_FUNC_IMPL(__imp__sub_820F2A00) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// lwz r9,1024(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	// rlwimi r9,r5,13,16,18
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 13) & 0xE000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF1FFF);
	// stw r9,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r9.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F2A38"))) PPC_WEAK_FUNC(sub_820F2A38);
PPC_FUNC_IMPL(__imp__sub_820F2A38) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,1024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	// rlwinm r3,r11,19,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F2A4C"))) PPC_WEAK_FUNC(sub_820F2A4C);
PPC_FUNC_IMPL(__imp__sub_820F2A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F2A50"))) PPC_WEAK_FUNC(sub_820F2A50);
PPC_FUNC_IMPL(__imp__sub_820F2A50) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// lwz r9,1024(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	// rlwimi r9,r5,16,13,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 16) & 0x70000) | (ctx.r9.u64 & 0xFFFFFFFFFFF8FFFF);
	// stw r9,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r9.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F2A88"))) PPC_WEAK_FUNC(sub_820F2A88);
PPC_FUNC_IMPL(__imp__sub_820F2A88) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lhz r11,1024(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 1024);
	// clrlwi r3,r11,29
	ctx.r3.u64 = ctx.r11.u32 & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F2A9C"))) PPC_WEAK_FUNC(sub_820F2A9C);
PPC_FUNC_IMPL(__imp__sub_820F2A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F2AA0"))) PPC_WEAK_FUNC(sub_820F2AA0);
PPC_FUNC_IMPL(__imp__sub_820F2AA0) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,1024
	ctx.r11.s64 = ctx.r11.s64 + 1024;
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwimi r9,r5,3,27,28
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 3) & 0x18) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFE7);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F2ADC"))) PPC_WEAK_FUNC(sub_820F2ADC);
PPC_FUNC_IMPL(__imp__sub_820F2ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F2AE0"))) PPC_WEAK_FUNC(sub_820F2AE0);
PPC_FUNC_IMPL(__imp__sub_820F2AE0) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,1044(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1044);
	// rlwinm r3,r11,29,30,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F2AF4"))) PPC_WEAK_FUNC(sub_820F2AF4);
PPC_FUNC_IMPL(__imp__sub_820F2AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F2AF8"))) PPC_WEAK_FUNC(sub_820F2AF8);
PPC_FUNC_IMPL(__imp__sub_820F2AF8) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,1024
	ctx.r11.s64 = ctx.r11.s64 + 1024;
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwimi r9,r5,22,5,9
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 22) & 0x7C00000) | (ctx.r9.u64 & 0xFFFFFFFFF83FFFFF);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F2B34"))) PPC_WEAK_FUNC(sub_820F2B34);
PPC_FUNC_IMPL(__imp__sub_820F2B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F2B38"))) PPC_WEAK_FUNC(sub_820F2B38);
PPC_FUNC_IMPL(__imp__sub_820F2B38) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,1040(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1040);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// srawi r3,r11,27
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFF) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 27;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F2B50"))) PPC_WEAK_FUNC(sub_820F2B50);
PPC_FUNC_IMPL(__imp__sub_820F2B50) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,1024
	ctx.r11.s64 = ctx.r11.s64 + 1024;
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwimi r9,r5,27,0,4
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 27) & 0xF8000000) | (ctx.r9.u64 & 0xFFFFFFFF07FFFFFF);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F2B8C"))) PPC_WEAK_FUNC(sub_820F2B8C);
PPC_FUNC_IMPL(__imp__sub_820F2B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F2B90"))) PPC_WEAK_FUNC(sub_820F2B90);
PPC_FUNC_IMPL(__imp__sub_820F2B90) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,1040(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1040);
	// srawi r3,r11,27
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFF) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 27;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F2BA4"))) PPC_WEAK_FUNC(sub_820F2BA4);
PPC_FUNC_IMPL(__imp__sub_820F2BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F2BA8"))) PPC_WEAK_FUNC(sub_820F2BA8);
PPC_FUNC_IMPL(__imp__sub_820F2BA8) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,1024
	ctx.r11.s64 = ctx.r11.s64 + 1024;
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwimi r9,r5,2,29,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 2) & 0x4) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFB);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F2BE4"))) PPC_WEAK_FUNC(sub_820F2BE4);
PPC_FUNC_IMPL(__imp__sub_820F2BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F2BE8"))) PPC_WEAK_FUNC(sub_820F2BE8);
PPC_FUNC_IMPL(__imp__sub_820F2BE8) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,1044(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1044);
	// rlwinm r3,r11,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F2BFC"))) PPC_WEAK_FUNC(sub_820F2BFC);
PPC_FUNC_IMPL(__imp__sub_820F2BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F2C00"))) PPC_WEAK_FUNC(sub_820F2C00);
PPC_FUNC_IMPL(__imp__sub_820F2C00) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cntlzw r8,r5
	ctx.r8.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// addi r11,r11,1024
	ctx.r11.s64 = ctx.r11.s64 + 1024;
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwimi r9,r8,11,20,20
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 11) & 0x800) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F2C44"))) PPC_WEAK_FUNC(sub_820F2C44);
PPC_FUNC_IMPL(__imp__sub_820F2C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F2C48"))) PPC_WEAK_FUNC(sub_820F2C48);
PPC_FUNC_IMPL(__imp__sub_820F2C48) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,1028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1028);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r3,r11,21,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F2C60"))) PPC_WEAK_FUNC(sub_820F2C60);
PPC_FUNC_IMPL(__imp__sub_820F2C60) {
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
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// lfs f0,12512(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12512);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lfs f13,12516(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12516);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// lfs f12,12520(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12520);
	ctx.f12.f64 = double(temp.f32);
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stfiwx f0,0,r9
	PPC_STORE_U32(ctx.r9.u32, ctx.f0.u32);
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stfiwx f13,0,r7
	PPC_STORE_U32(ctx.r7.u32, ctx.f13.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r7,11720(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11720);
	// lfs f0,12524(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12524);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// lwz r31,12(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfiwx f12,0,r9
	PPC_STORE_U32(ctx.r9.u32, ctx.f12.u32);
	// stw r11,12540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12540, ctx.r11.u32);
	// stw r10,12544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12544, ctx.r10.u32);
	// stw r8,12548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12548, ctx.r8.u32);
	// stw r31,12552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12552, ctx.r31.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// add r6,r9,r4
	ctx.r6.u64 = ctx.r9.u64 + ctx.r4.u64;
	// stfiwx f0,0,r7
	PPC_STORE_U32(ctx.r7.u32, ctx.f0.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r7,r9,r5
	ctx.r7.u64 = ctx.r9.u64 + ctx.r5.u64;
	// beq cr6,0x820f2d24
	if (ctx.cr6.eq) goto loc_820F2D24;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x820f2d00
	if (ctx.cr6.gt) goto loc_820F2D00;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_820F2D00:
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x820f2d0c
	if (ctx.cr6.gt) goto loc_820F2D0C;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
loc_820F2D0C:
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x820f2d18
	if (ctx.cr6.lt) goto loc_820F2D18;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
loc_820F2D18:
	// cmpw cr6,r7,r31
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x820f2d24
	if (ctx.cr6.lt) goto loc_820F2D24;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
loc_820F2D24:
	// lwz r11,10308(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10308);
	// lwz r10,10312(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10312);
	// rlwimi r11,r5,16,1,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 16) & 0x7FFF0000) | (ctx.r11.u64 & 0xFFFFFFFF8000FFFF);
	// rlwimi r10,r7,16,1,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r7.u32, 16) & 0x7FFF0000) | (ctx.r10.u64 & 0xFFFFFFFF8000FFFF);
	// rlwimi r11,r4,0,17,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x7FFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFF8000);
	// rlwimi r10,r6,0,17,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x7FFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF8000);
	// stw r11,10308(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10308, ctx.r11.u32);
	// stw r10,10312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10312, ctx.r10.u32);
	// bl 0x820f0688
	ctx.lr = 0x820F2D48;
	sub_820F0688(ctx, base);
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

__attribute__((alias("__imp__sub_820F2D5C"))) PPC_WEAK_FUNC(sub_820F2D5C);
PPC_FUNC_IMPL(__imp__sub_820F2D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F2D60"))) PPC_WEAK_FUNC(sub_820F2D60);
PPC_FUNC_IMPL(__imp__sub_820F2D60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e0
	ctx.lr = 0x820F2D68;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820f2dd0
	if (ctx.cr6.eq) goto loc_820F2DD0;
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// subfic r11,r29,17
	ctx.xer.ca = ctx.r29.u32 <= 17;
	ctx.r11.s64 = 17 - ctx.r29.s64;
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// rlwinm r6,r10,12,20,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r7,r10,3
	ctx.r7.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r10,r6,512
	ctx.r10.s64 = ctx.r6.s64 + 512;
	// addi r5,r11,206
	ctx.r5.s64 = ctx.r11.s64 + 206;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r6,r5,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r9,1652(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1652, ctx.r9.u32);
	// stwx r10,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r10.u32);
	// ld r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
loc_820F2DD0:
	// addi r11,r29,3081
	ctx.r11.s64 = ctx.r29.s64 + 3081;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r27,r31
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// cmplwi r28,0
	ctx.cr0.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq 0x820f2e48
	if (ctx.cr0.eq) goto loc_820F2E48;
	// lwz r11,10780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10780);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820f2df8
	if (ctx.cr0.eq) goto loc_820F2DF8;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// b 0x820f2e48
	goto loc_820F2E48;
loc_820F2DF8:
	// lwz r11,10784(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10784);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f2e48
	if (ctx.cr0.eq) goto loc_820F2E48;
	// lwz r11,13376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13376);
	// lwz r3,13372(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13372);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820f2e20
	if (ctx.cr6.lt) goto loc_820F2E20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f6b28
	ctx.lr = 0x820F2E20;
	sub_820F6B28(ctx, base);
loc_820F2E20:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,-1
	ctx.r10.s64 = -1;
	// rlwimi r11,r28,30,2,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r28.u32, 30) & 0x3FFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFFC0000000);
	// rlwinm r11,r11,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// stw r10,13372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13372, ctx.r10.u32);
loc_820F2E48:
	// rlwinm. r11,r26,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 30) & 0x3FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwx r30,r27,r31
	PPC_STORE_U32(ctx.r27.u32 + ctx.r31.u32, ctx.r30.u32);
	// add r10,r31,r29
	ctx.r10.u64 = ctx.r31.u64 + ctx.r29.u64;
	// stb r11,12392(r10)
	PPC_STORE_U8(ctx.r10.u32 + 12392, ctx.r11.u8);
	// beq 0x820f2e74
	if (ctx.cr0.eq) goto loc_820F2E74;
	// lbz r10,11696(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 11696);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x820f2e74
	if (ctx.cr6.eq) goto loc_820F2E74;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_820F2E74:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e9930
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F2E7C"))) PPC_WEAK_FUNC(sub_820F2E7C);
PPC_FUNC_IMPL(__imp__sub_820F2E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F2E80"))) PPC_WEAK_FUNC(sub_820F2E80);
PPC_FUNC_IMPL(__imp__sub_820F2E80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x820F2E88;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r30,12300(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12300);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x820f2f04
	if (ctx.cr0.eq) goto loc_820F2F04;
	// lwz r11,10780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10780);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820f2eb4
	if (ctx.cr0.eq) goto loc_820F2EB4;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// b 0x820f2f04
	goto loc_820F2F04;
loc_820F2EB4:
	// lwz r11,10784(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10784);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f2f04
	if (ctx.cr0.eq) goto loc_820F2F04;
	// lwz r11,13376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13376);
	// lwz r3,13372(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13372);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820f2edc
	if (ctx.cr6.lt) goto loc_820F2EDC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f6b28
	ctx.lr = 0x820F2EDC;
	sub_820F6B28(ctx, base);
loc_820F2EDC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,-1
	ctx.r10.s64 = -1;
	// rlwimi r11,r30,30,2,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 30) & 0x3FFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFFC0000000);
	// rlwinm r11,r11,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// stw r10,13372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13372, ctx.r10.u32);
loc_820F2F04:
	// stw r29,12300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12300, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F2F10"))) PPC_WEAK_FUNC(sub_820F2F10);
PPC_FUNC_IMPL(__imp__sub_820F2F10) {
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
	// stwu r1,-1648(r1)
	ea = -1648 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820f7338
	ctx.lr = 0x820F2F38;
	sub_820F7338(ctx, base);
	// addi r30,r31,14852
	ctx.r30.s64 = ctx.r31.s64 + 14852;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r9,r11,1536
	ctx.r9.s64 = ctx.r11.s64 + 1536;
loc_820F2F48:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x820f2f68
	if (!ctx.cr0.eq) goto loc_820F2F68;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x820f2f48
	if (!ctx.cr6.eq) goto loc_820F2F48;
loc_820F2F68:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x820f2fbc
	if (ctx.cr0.eq) goto loc_820F2FBC;
	// lwz r3,22116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22116);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820f2f94
	if (ctx.cr0.eq) goto loc_820F2F94;
	// lwz r11,22120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22120);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x820f2f94
	if (!ctx.cr0.eq) goto loc_820F2F94;
	// li r5,1536
	ctx.r5.s64 = 1536;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822f9af8
	ctx.lr = 0x820F2F94;
	sub_822F9AF8(ctx, base);
loc_820F2F94:
	// lwz r11,22120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22120);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,1536
	ctx.r5.s64 = 1536;
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,22120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22120, ctx.r11.u32);
	// bl 0x822e9960
	ctx.lr = 0x820F2FB0;
	sub_822E9960(ctx, base);
	// lwz r11,16556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16556);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,16556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16556, ctx.r11.u32);
loc_820F2FBC:
	// addi r1,r1,1648
	ctx.r1.s64 = ctx.r1.s64 + 1648;
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

__attribute__((alias("__imp__sub_820F2FD4"))) PPC_WEAK_FUNC(sub_820F2FD4);
PPC_FUNC_IMPL(__imp__sub_820F2FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F2FD8"))) PPC_WEAK_FUNC(sub_820F2FD8);
PPC_FUNC_IMPL(__imp__sub_820F2FD8) {
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
	// stwu r1,-1648(r1)
	ea = -1648 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820f74d8
	ctx.lr = 0x820F3000;
	sub_820F74D8(ctx, base);
	// addi r30,r31,14852
	ctx.r30.s64 = ctx.r31.s64 + 14852;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r9,r11,1536
	ctx.r9.s64 = ctx.r11.s64 + 1536;
loc_820F3010:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x820f3030
	if (!ctx.cr0.eq) goto loc_820F3030;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x820f3010
	if (!ctx.cr6.eq) goto loc_820F3010;
loc_820F3030:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x820f3084
	if (ctx.cr0.eq) goto loc_820F3084;
	// lwz r3,22116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22116);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820f305c
	if (ctx.cr0.eq) goto loc_820F305C;
	// lwz r11,22120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22120);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x820f305c
	if (!ctx.cr0.eq) goto loc_820F305C;
	// li r5,1536
	ctx.r5.s64 = 1536;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822f9af8
	ctx.lr = 0x820F305C;
	sub_822F9AF8(ctx, base);
loc_820F305C:
	// lwz r11,22120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22120);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,1536
	ctx.r5.s64 = 1536;
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,22120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22120, ctx.r11.u32);
	// bl 0x822e9960
	ctx.lr = 0x820F3078;
	sub_822E9960(ctx, base);
	// lwz r11,16556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16556);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,16556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16556, ctx.r11.u32);
loc_820F3084:
	// addi r1,r1,1648
	ctx.r1.s64 = ctx.r1.s64 + 1648;
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

__attribute__((alias("__imp__sub_820F309C"))) PPC_WEAK_FUNC(sub_820F309C);
PPC_FUNC_IMPL(__imp__sub_820F309C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F30A0"))) PPC_WEAK_FUNC(sub_820F30A0);
PPC_FUNC_IMPL(__imp__sub_820F30A0) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x820f3128
	if (!ctx.cr6.eq) goto loc_820F3128;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x820f30d4
	if (!ctx.cr6.gt) goto loc_820F30D4;
	// bl 0x820f4d98
	ctx.lr = 0x820F30D0;
	sub_820F4D98(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820F30D4:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// ori r10,r10,24576
	ctx.r10.u64 = ctx.r10.u64 | 24576;
	// ori r9,r9,25088
	ctx.r9.u64 = ctx.r9.u64 | 25088;
	// li r8,-1
	ctx.r8.s64 = -1;
	// lis r7,-16384
	ctx.r7.s64 = -1073741824;
	// li r5,0
	ctx.r5.s64 = 0;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r7,r7,24832
	ctx.r7.u64 = ctx.r7.u64 | 24832;
	// ori r6,r10,25344
	ctx.r6.u64 = ctx.r10.u64 | 25344;
	// lwz r10,12572(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12572);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// lwz r10,12576(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12576);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// stwu r5,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r11.u32 = ea;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_820F3128:
	// lwz r11,10312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10312);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,10308(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10308);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,17,0,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFFFE0000;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r7,r9,17
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1FFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 17;
	// rlwinm r10,r10,17,0,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0xFFFE0000;
	// srawi r6,r11,17
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFFF) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 17;
	// srawi r5,r8,17
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FFFF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 17;
	// srawi r4,r10,17
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FFFF) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 17;
	// bl 0x820f0688
	ctx.lr = 0x820F3158;
	sub_820F0688(ctx, base);
	// lwz r11,10788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10788);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,20,30,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x3;
	// bl 0x821002b0
	ctx.lr = 0x820F3168;
	sub_821002B0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
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

__attribute__((alias("__imp__sub_820F3194"))) PPC_WEAK_FUNC(sub_820F3194);
PPC_FUNC_IMPL(__imp__sub_820F3194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F3198"))) PPC_WEAK_FUNC(sub_820F3198);
PPC_FUNC_IMPL(__imp__sub_820F3198) {
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
	// bl 0x822e9f30
	ctx.lr = 0x820F31AC;
	__savefpr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// fmr f27,f2
	ctx.f27.f64 = ctx.f2.f64;
	// fmr f31,f5
	ctx.f31.f64 = ctx.f5.f64;
	// fmr f26,f6
	ctx.f26.f64 = ctx.f6.f64;
	// lwz r10,12304(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12304);
	// mr. r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x820f31dc
	if (!ctx.cr0.eq) goto loc_820F31DC;
	// lwz r9,12320(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12320);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x820f33e0
	if (ctx.cr0.eq) goto loc_820F33E0;
loc_820F31DC:
	// lbz r11,10812(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10812);
	// rlwinm. r8,r11,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x820f31f0
	if (ctx.cr0.eq) goto loc_820F31F0;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x820f327c
	goto loc_820F327C;
loc_820F31F0:
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f3274
	if (ctx.cr0.eq) goto loc_820F3274;
	// lwz r11,12592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12592);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x820f320c
	if (ctx.cr6.eq) goto loc_820F320C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820f3274
	if (!ctx.cr6.eq) goto loc_820F3274;
loc_820F320C:
	// lwz r11,12308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12308);
	// lwz r10,12596(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12596);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820f3224
	if (ctx.cr6.eq) goto loc_820F3224;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f3274
	if (!ctx.cr6.eq) goto loc_820F3274;
loc_820F3224:
	// lwz r11,12312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12312);
	// lwz r10,12600(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12600);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820f323c
	if (ctx.cr6.eq) goto loc_820F323C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f3274
	if (!ctx.cr6.eq) goto loc_820F3274;
loc_820F323C:
	// lwz r11,12316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12316);
	// lwz r10,12604(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12604);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820f3254
	if (ctx.cr6.eq) goto loc_820F3254;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f3274
	if (!ctx.cr6.eq) goto loc_820F3274;
loc_820F3254:
	// lwz r11,12320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12320);
	// lwz r10,12608(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12608);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820f326c
	if (ctx.cr6.eq) goto loc_820F326C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f3274
	if (!ctx.cr6.eq) goto loc_820F3274;
loc_820F326C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x820f3278
	goto loc_820F3278;
loc_820F3274:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820F3278:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_820F327C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f3290
	if (ctx.cr0.eq) goto loc_820F3290;
	// lwz r11,13044(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13044);
	// lwz r9,13048(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13048);
	// b 0x820f32a4
	goto loc_820F32A4;
loc_820F3290:
	// lwz r11,36(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// rlwinm r9,r11,29,17,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x7FFF;
	// rlwinm r10,r11,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
loc_820F32A4:
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// fctiwz f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f28.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f28.f64));
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// fctiwz f13,f27
	ctx.f13.s64 = (ctx.f27.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f27.f64));
	// fctiwz f12,f3
	ctx.f12.s64 = (ctx.f3.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfiwx f13,0,r8
	PPC_STORE_U32(ctx.r8.u32, ctx.f13.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stfiwx f12,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f12.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x820f32e0
	if (!ctx.cr6.lt) goto loc_820F32E0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_820F32E0:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// fctiwz f0,f4
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f4.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x820f3304
	if (ctx.cr6.lt) goto loc_820F3304;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_820F3304:
	// subf. r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// blt 0x820f3318
	if (ctx.cr0.lt) goto loc_820F3318;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x820f3320
	if (!ctx.cr6.lt) goto loc_820F3320;
loc_820F3318:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_820F3320:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// stfs f28,12512(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12512, temp.u32);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// stfs f27,12516(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12516, temp.u32);
	// addi r4,r31,12540
	ctx.r4.s64 = ctx.r31.s64 + 12540;
	// stfs f31,12528(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12528, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f26,12532(r31)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12532, temp.u32);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// li r11,0
	ctx.r11.s64 = 0;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// stw r11,12536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12536, ctx.r11.u32);
	// frsp f30,f0
	ctx.f30.f64 = double(float(ctx.f0.f64));
	// stfs f30,12520(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12520, temp.u32);
	// frsp f29,f13
	ctx.f29.f64 = double(float(ctx.f13.f64));
	// stfs f29,12524(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12524, temp.u32);
	// bl 0x820f2c60
	ctx.lr = 0x820F3374;
	sub_820F2C60(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fsubs f12,f26,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f26.f64 - ctx.f31.f64));
	// stfs f31,10396(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10396, temp.u32);
	// stfs f12,10392(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10392, temp.u32);
	// lfs f0,9488(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9488);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f30,f0
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// stfs f13,10376(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10376, temp.u32);
	// fmuls f0,f29,f0
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// fadds f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f28.f64));
	// stfs f13,10380(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10380, temp.u32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,10384(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10384, temp.u32);
	// fadds f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f27.f64));
	// stfs f0,10388(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10388, temp.u32);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// oris r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 4194304;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// oris r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 2097152;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_820F33E0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x822e9f7c
	ctx.lr = 0x820F33EC;
	__restfpr_26(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F33FC"))) PPC_WEAK_FUNC(sub_820F33FC);
PPC_FUNC_IMPL(__imp__sub_820F33FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F3400"))) PPC_WEAK_FUNC(sub_820F3400);
PPC_FUNC_IMPL(__imp__sub_820F3400) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r4,r3,12540
	ctx.r4.s64 = ctx.r3.s64 + 12540;
	// stw r11,11720(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11720, ctx.r11.u32);
	// b 0x820f2c60
	sub_820F2C60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F3410"))) PPC_WEAK_FUNC(sub_820F3410);
PPC_FUNC_IMPL(__imp__sub_820F3410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lfs f6,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lfs f5,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// std r7,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f11,104(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f4,f0
	ctx.f4.f64 = double(float(ctx.f0.f64));
	// frsp f3,f13
	ctx.f3.f64 = double(float(ctx.f13.f64));
	// frsp f2,f12
	ctx.f2.f64 = double(float(ctx.f12.f64));
	// frsp f1,f11
	ctx.f1.f64 = double(float(ctx.f11.f64));
	// bl 0x820f3198
	ctx.lr = 0x820F347C;
	sub_820F3198(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F348C"))) PPC_WEAK_FUNC(sub_820F348C);
PPC_FUNC_IMPL(__imp__sub_820F348C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F3490"))) PPC_WEAK_FUNC(sub_820F3490);
PPC_FUNC_IMPL(__imp__sub_820F3490) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// lfs f6,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// b 0x820f3198
	sub_820F3198(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F34B0"))) PPC_WEAK_FUNC(sub_820F34B0);
PPC_FUNC_IMPL(__imp__sub_820F34B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,24(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// rlwinm. r11,r8,16,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x820f34c4
	if (!ctx.cr0.eq) goto loc_820F34C4;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x820f34dc
	goto loc_820F34DC;
loc_820F34C4:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lis r7,0
	ctx.r7.s64 = 0;
	// bne cr6,0x820f34d8
	if (!ctx.cr6.eq) goto loc_820F34D8;
	// ori r7,r7,32769
	ctx.r7.u64 = ctx.r7.u64 | 32769;
	// b 0x820f34dc
	goto loc_820F34DC;
loc_820F34D8:
	// ori r7,r7,49155
	ctx.r7.u64 = ctx.r7.u64 | 49155;
loc_820F34DC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r7,10556(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10556, ctx.r7.u32);
	// li r12,1
	ctx.r12.s64 = 1;
	// stw r8,10240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10240, ctx.r8.u32);
	// addi r9,r11,-7672
	ctx.r9.s64 = ctx.r11.s64 + -7672;
	// rldicr r12,r12,57,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 57) & 0xFFFFFFFFFFFFFFFF;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r11,r3,12540
	ctx.r11.s64 = ctx.r3.s64 + 12540;
	// addi r4,r9,-7696
	ctx.r4.s64 = ctx.r9.s64 + -7696;
	// ld r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r9,r9,r12
	ctx.r9.u64 = ctx.r9.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,36,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 36) & 0xFFFFFFFFFFFFFFFF;
	// std r9,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r9.u64);
	// ld r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// or r9,r9,r12
	ctx.r9.u64 = ctx.r9.u64 | ctx.r12.u64;
	// std r9,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r9.u64);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// b 0x820f3410
	sub_820F3410(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F3548"))) PPC_WEAK_FUNC(sub_820F3548);
PPC_FUNC_IMPL(__imp__sub_820F3548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x820F3550;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,3076
	ctx.r11.s64 = ctx.r4.s64 + 3076;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stwx r5,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r5.u32);
	// beq cr6,0x820f3690
	if (ctx.cr6.eq) goto loc_820F3690;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// beq cr6,0x820f357c
	if (ctx.cr6.eq) goto loc_820F357C;
	// addi r9,r4,1
	ctx.r9.s64 = ctx.r4.s64 + 1;
loc_820F357C:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r3,28(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// li r7,1
	ctx.r7.s64 = 1;
	// ori r8,r11,263
	ctx.r8.u64 = ctx.r11.u64 | 263;
	// rldicr r7,r7,63,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r9,r9,2561
	ctx.r9.s64 = ctx.r9.s64 + 2561;
	// addi r10,r4,2973
	ctx.r10.s64 = ctx.r4.s64 + 2973;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r3.u32);
	// clrldi r9,r11,56
	ctx.r9.u64 = ctx.r11.u64 & 0xFF;
	// srawi r11,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 16;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r31.u32);
	// srd r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r7.u64 >> (ctx.r9.u8 & 0x7F));
	// or r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 | ctx.r3.u64;
	// stdx r9,r11,r31
	PPC_STORE_U64(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u64);
	// lwzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lwzx r11,r6,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stwx r9,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r9.u32);
	// beq 0x820f3690
	if (ctx.cr0.eq) goto loc_820F3690;
	// lwz r6,28(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r10,r6,16,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xF;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x820f3600
	if (ctx.cr6.eq) goto loc_820F3600;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x820f3600
	if (ctx.cr6.eq) goto loc_820F3600;
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// beq cr6,0x820f3600
	if (ctx.cr6.eq) goto loc_820F3600;
	// cmplwi cr6,r10,12
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12, ctx.xer);
	// bne cr6,0x820f3690
	if (!ctx.cr6.eq) goto loc_820F3690;
loc_820F3600:
	// rlwinm r10,r6,13,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 13) & 0x1;
	// xor. r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820f3690
	if (ctx.cr0.eq) goto loc_820F3690;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// beq cr6,0x820f361c
	if (ctx.cr6.eq) goto loc_820F361C;
	// addi r6,r4,1
	ctx.r6.s64 = ctx.r4.s64 + 1;
loc_820F361C:
	// addi r3,r6,2561
	ctx.r3.s64 = ctx.r6.s64 + 2561;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// rlwinm r6,r3,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// clrldi r29,r8,56
	ctx.r29.u64 = ctx.r8.u64 & 0xFF;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// rlwinm r7,r10,16,28,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xF;
	// rlwinm r30,r10,0,16,11
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// srawi r10,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 16;
	// rlwinm r8,r7,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-3
	ctx.r8.s64 = ctx.r8.s64 + -3;
	// and r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 & ctx.r9.u64;
	// srd r3,r3,r29
	ctx.r3.u64 = ctx.r29.u8 & 0x40 ? 0 : (ctx.r3.u64 >> (ctx.r29.u8 & 0x7F));
	// addi r29,r7,3
	ctx.r29.s64 = ctx.r7.s64 + 3;
	// rlwinm r7,r29,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// andc r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 & ~ctx.r9.u64;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// or r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 | ctx.r8.u64;
	// rlwinm r10,r10,16,12,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xF0000;
	// or r8,r30,r10
	ctx.r8.u64 = ctx.r30.u64 | ctx.r10.u64;
	// stw r8,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r8.u32);
	// lwzx r11,r6,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// rlwinm r11,r11,0,16,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stwx r11,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r11.u32);
	// ldx r11,r9,r31
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r31.u32);
	// or r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 | ctx.r11.u64;
	// stdx r11,r9,r31
	PPC_STORE_U64(ctx.r9.u32 + ctx.r31.u32, ctx.r11.u64);
loc_820F3690:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x820f380c
	if (!ctx.cr6.eq) goto loc_820F380C;
	// lbz r11,10815(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10815);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// andi. r10,r11,251
	ctx.r10.u64 = ctx.r11.u64 & 251;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r10,10815(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10815, ctx.r10.u8);
	// beq cr6,0x820f36e8
	if (ctx.cr6.eq) goto loc_820F36E8;
	// lhz r11,28(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 28);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x820f36cc
	if (ctx.cr6.eq) goto loc_820F36CC;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x820f36cc
	if (ctx.cr6.eq) goto loc_820F36CC;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x820f36e0
	if (!ctx.cr6.eq) goto loc_820F36E0;
loc_820F36CC:
	// ori r11,r10,4
	ctx.r11.u64 = ctx.r10.u64 | 4;
	// stb r11,10815(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10815, ctx.r11.u8);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// oris r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 1048576;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_820F36E0:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x820f36f4
	goto loc_820F36F4;
loc_820F36E8:
	// lwz r4,12320(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12320);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x820f36fc
	if (ctx.cr0.eq) goto loc_820F36FC;
loc_820F36F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f34b0
	ctx.lr = 0x820F36FC;
	sub_820F34B0(ctx, base);
loc_820F36FC:
	// lwz r11,12580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12580);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f37d4
	if (!ctx.cr6.eq) goto loc_820F37D4;
	// lbz r11,10812(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10812);
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x820f37d4
	if (!ctx.cr0.eq) goto loc_820F37D4;
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x820f37d4
	if (!ctx.cr0.eq) goto loc_820F37D4;
	// lbz r10,12051(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12051);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x820f37d4
	if (!ctx.cr0.eq) goto loc_820F37D4;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820f3738
	if (ctx.cr0.eq) goto loc_820F3738;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x820f37c8
	goto loc_820F37C8;
loc_820F3738:
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f37c0
	if (ctx.cr0.eq) goto loc_820F37C0;
	// lwz r11,12304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12304);
	// lwz r10,12592(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12592);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820f3758
	if (ctx.cr6.eq) goto loc_820F3758;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f37c0
	if (!ctx.cr6.eq) goto loc_820F37C0;
loc_820F3758:
	// lwz r11,12308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12308);
	// lwz r10,12596(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12596);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820f3770
	if (ctx.cr6.eq) goto loc_820F3770;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f37c0
	if (!ctx.cr6.eq) goto loc_820F37C0;
loc_820F3770:
	// lwz r11,12312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12312);
	// lwz r10,12600(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12600);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820f3788
	if (ctx.cr6.eq) goto loc_820F3788;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f37c0
	if (!ctx.cr6.eq) goto loc_820F37C0;
loc_820F3788:
	// lwz r11,12316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12316);
	// lwz r10,12604(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12604);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820f37a0
	if (ctx.cr6.eq) goto loc_820F37A0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f37c0
	if (!ctx.cr6.eq) goto loc_820F37C0;
loc_820F37A0:
	// lwz r11,12320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12320);
	// lwz r10,12608(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12608);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820f37b8
	if (ctx.cr6.eq) goto loc_820F37B8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f37c0
	if (!ctx.cr6.eq) goto loc_820F37C0;
loc_820F37B8:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x820f37c4
	goto loc_820F37C4;
loc_820F37C0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820F37C4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_820F37C8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne 0x820f37d8
	if (!ctx.cr0.eq) goto loc_820F37D8;
loc_820F37D4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_820F37D8:
	// lbz r9,10812(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10812);
	// lwz r11,11724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11724);
	// rlwimi r9,r10,0,31,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x1) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFE);
	// stb r9,10812(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10812, ctx.r9.u8);
	// lwz r10,12304(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12304);
	// stw r11,11724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11724, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820f37fc
	if (!ctx.cr6.eq) goto loc_820F37FC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820F37FC:
	// lwz r10,10332(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10332);
	// rlwimi r11,r10,0,0,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFF0) | (ctx.r11.u64 & 0xFFFFFFFF0000000F);
	// stw r11,10332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10332, ctx.r11.u32);
	// b 0x820f3890
	goto loc_820F3890;
loc_820F380C:
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// bne cr6,0x820f3838
	if (!ctx.cr6.eq) goto loc_820F3838;
	// lwz r11,12308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12308);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,11728(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11728);
	// stw r11,11728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11728, ctx.r11.u32);
	// bne cr6,0x820f382c
	if (!ctx.cr6.eq) goto loc_820F382C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820F382C:
	// lwz r10,10332(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10332);
	// rlwimi r10,r11,4,24,27
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 4) & 0xF0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF0F);
	// b 0x820f388c
	goto loc_820F388C;
loc_820F3838:
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// bne cr6,0x820f3864
	if (!ctx.cr6.eq) goto loc_820F3864;
	// lwz r11,12312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12312);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,11732(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11732);
	// stw r11,11732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11732, ctx.r11.u32);
	// bne cr6,0x820f3858
	if (!ctx.cr6.eq) goto loc_820F3858;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820F3858:
	// lwz r10,10332(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10332);
	// rlwimi r10,r11,8,20,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF0FF);
	// b 0x820f388c
	goto loc_820F388C;
loc_820F3864:
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// bne cr6,0x820f38a4
	if (!ctx.cr6.eq) goto loc_820F38A4;
	// lwz r11,12316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12316);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,11736(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11736);
	// stw r11,11736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11736, ctx.r11.u32);
	// bne cr6,0x820f3884
	if (!ctx.cr6.eq) goto loc_820F3884;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820F3884:
	// lwz r10,10332(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10332);
	// rlwimi r10,r11,12,16,19
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0xF000) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0FFF);
loc_820F388C:
	// stw r10,10332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10332, ctx.r10.u32);
loc_820F3890:
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// rldicr r12,r12,37,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_820F38A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F38AC"))) PPC_WEAK_FUNC(sub_820F38AC);
PPC_FUNC_IMPL(__imp__sub_820F38AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F38B0"))) PPC_WEAK_FUNC(sub_820F38B0);
PPC_FUNC_IMPL(__imp__sub_820F38B0) {
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
	// stw r30,12320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12320, ctx.r30.u32);
	// beq cr6,0x820f39f4
	if (ctx.cr6.eq) goto loc_820F39F4;
	// lwz r11,12304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12304);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f38e8
	if (!ctx.cr6.eq) goto loc_820F38E8;
	// bl 0x820f34b0
	ctx.lr = 0x820F38E8;
	sub_820F34B0(ctx, base);
loc_820F38E8:
	// lbz r10,10815(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10815);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r11,10248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10248, ctx.r11.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r11,10432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10432, ctx.r11.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbz r10,10814(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10814);
	// rlwimi r10,r11,5,26,26
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 5) & 0x20) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFDF);
	// stb r10,10814(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10814, ctx.r10.u8);
	// beq 0x820f39d0
	if (ctx.cr0.eq) goto loc_820F39D0;
	// lbz r11,10812(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10812);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820f3928
	if (ctx.cr0.eq) goto loc_820F3928;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x820f39b8
	goto loc_820F39B8;
loc_820F3928:
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f39b0
	if (ctx.cr0.eq) goto loc_820F39B0;
	// lwz r11,12304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12304);
	// lwz r10,12592(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12592);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820f3948
	if (ctx.cr6.eq) goto loc_820F3948;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f39b0
	if (!ctx.cr6.eq) goto loc_820F39B0;
loc_820F3948:
	// lwz r11,12308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12308);
	// lwz r10,12596(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12596);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820f3960
	if (ctx.cr6.eq) goto loc_820F3960;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f39b0
	if (!ctx.cr6.eq) goto loc_820F39B0;
loc_820F3960:
	// lwz r11,12312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12312);
	// lwz r10,12600(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12600);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820f3978
	if (ctx.cr6.eq) goto loc_820F3978;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f39b0
	if (!ctx.cr6.eq) goto loc_820F39B0;
loc_820F3978:
	// lwz r11,12316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12316);
	// lwz r10,12604(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12604);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820f3990
	if (ctx.cr6.eq) goto loc_820F3990;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f39b0
	if (!ctx.cr6.eq) goto loc_820F39B0;
loc_820F3990:
	// lwz r11,12320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12320);
	// lwz r10,12608(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12608);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820f39a8
	if (ctx.cr6.eq) goto loc_820F39A8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f39b0
	if (!ctx.cr6.eq) goto loc_820F39B0;
loc_820F39A8:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x820f39b4
	goto loc_820F39B4;
loc_820F39B0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820F39B4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_820F39B8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f39d0
	if (ctx.cr0.eq) goto loc_820F39D0;
	// lwz r10,10240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10240);
	// lwz r11,13036(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13036);
	// rlwimi r10,r11,18,0,13
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 18) & 0xFFFC0000) | (ctx.r10.u64 & 0xFFFFFFFF0003FFFF);
	// stw r10,10240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10240, ctx.r10.u32);
loc_820F39D0:
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// rldicr r12,r12,55,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 55) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// b 0x820f3a14
	goto loc_820F3A14;
loc_820F39F4:
	// lbz r10,10814(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10814);
	// lwz r11,10432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10432);
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r11,10432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10432, ctx.r11.u32);
	// andi. r10,r10,223
	ctx.r10.u64 = ctx.r10.u64 & 223;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r10,10814(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10814, ctx.r10.u8);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
loc_820F3A14:
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// lwz r11,12580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12580);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f3af0
	if (!ctx.cr6.eq) goto loc_820F3AF0;
	// lbz r11,10812(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10812);
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x820f3af0
	if (!ctx.cr0.eq) goto loc_820F3AF0;
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x820f3af0
	if (!ctx.cr0.eq) goto loc_820F3AF0;
	// lbz r10,12051(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12051);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x820f3af0
	if (!ctx.cr0.eq) goto loc_820F3AF0;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820f3a54
	if (ctx.cr0.eq) goto loc_820F3A54;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x820f3ae4
	goto loc_820F3AE4;
loc_820F3A54:
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f3adc
	if (ctx.cr0.eq) goto loc_820F3ADC;
	// lwz r11,12304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12304);
	// lwz r10,12592(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12592);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820f3a74
	if (ctx.cr6.eq) goto loc_820F3A74;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f3adc
	if (!ctx.cr6.eq) goto loc_820F3ADC;
loc_820F3A74:
	// lwz r11,12308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12308);
	// lwz r10,12596(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12596);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820f3a8c
	if (ctx.cr6.eq) goto loc_820F3A8C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f3adc
	if (!ctx.cr6.eq) goto loc_820F3ADC;
loc_820F3A8C:
	// lwz r11,12312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12312);
	// lwz r10,12600(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12600);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820f3aa4
	if (ctx.cr6.eq) goto loc_820F3AA4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f3adc
	if (!ctx.cr6.eq) goto loc_820F3ADC;
loc_820F3AA4:
	// lwz r11,12316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12316);
	// lwz r10,12604(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12604);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820f3abc
	if (ctx.cr6.eq) goto loc_820F3ABC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f3adc
	if (!ctx.cr6.eq) goto loc_820F3ADC;
loc_820F3ABC:
	// lwz r11,12320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12320);
	// lwz r10,12608(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12608);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820f3ad4
	if (ctx.cr6.eq) goto loc_820F3AD4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f3adc
	if (!ctx.cr6.eq) goto loc_820F3ADC;
loc_820F3AD4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x820f3ae0
	goto loc_820F3AE0;
loc_820F3ADC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820F3AE0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_820F3AE4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne 0x820f3af4
	if (!ctx.cr0.eq) goto loc_820F3AF4;
loc_820F3AF0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_820F3AF4:
	// lbz r9,10812(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10812);
	// lwz r11,11740(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11740);
	// rlwimi r9,r10,0,31,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x1) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFE);
	// stb r9,10812(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10812, ctx.r9.u8);
	// lwz r10,12320(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12320);
	// stw r11,11740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11740, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820f3b18
	if (!ctx.cr6.eq) goto loc_820F3B18;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820F3B18:
	// lwz r10,10420(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10420);
	// rlwimi r10,r11,1,30,30
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 1) & 0x2) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFD);
	// stw r10,10420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10420, ctx.r10.u32);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// lwz r11,11744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11744);
	// lwz r10,12320(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12320);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,11744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11744, ctx.r11.u32);
	// bne cr6,0x820f3b50
	if (!ctx.cr6.eq) goto loc_820F3B50;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820F3B50:
	// lwz r10,10420(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10420);
	// rlwimi r11,r10,0,0,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFE) | (ctx.r11.u64 & 0xFFFFFFFF00000001);
	// stw r11,10420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10420, ctx.r11.u32);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
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

__attribute__((alias("__imp__sub_820F3B88"))) PPC_WEAK_FUNC(sub_820F3B88);
PPC_FUNC_IMPL(__imp__sub_820F3B88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x820F3B90;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,10768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10768);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r10,r11,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
	// clrlwi. r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820f3c18
	if (ctx.cr0.eq) goto loc_820F3C18;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x820f3bc8
	if (!ctx.cr6.eq) goto loc_820F3BC8;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x820f3c18
	if (!ctx.cr6.gt) goto loc_820F3C18;
loc_820F3BC8:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e53d0
	ctx.lr = 0x820F3BD8;
	sub_820E53D0(ctx, base);
loc_820F3BD8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e5568
	ctx.lr = 0x820F3BE0;
	sub_820E5568(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820f3c10
	if (ctx.cr0.eq) goto loc_820F3C10;
	// lwz r11,10768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10768);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r10,r11,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
	// clrlwi. r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820f3c10
	if (ctx.cr0.eq) goto loc_820F3C10;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x820f3bd8
	if (!ctx.cr6.eq) goto loc_820F3BD8;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x820f3bd8
	if (ctx.cr6.gt) goto loc_820F3BD8;
loc_820F3C10:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e5400
	ctx.lr = 0x820F3C18;
	sub_820E5400(ctx, base);
loc_820F3C18:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F3C20"))) PPC_WEAK_FUNC(sub_820F3C20);
PPC_FUNC_IMPL(__imp__sub_820F3C20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x820F3C28;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// add r10,r31,r5
	ctx.r10.u64 = ctx.r31.u64 + ctx.r5.u64;
	// lwz r11,14748(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14748);
	// and r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 & ctx.r11.u64;
	// lwz r11,10768(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10768);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// bge cr6,0x820f3c64
	if (!ctx.cr6.lt) goto loc_820F3C64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x820f3cc0
	if (!ctx.cr6.lt) goto loc_820F3CC0;
loc_820F3C58:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x820f3c6c
	if (!ctx.cr6.gt) goto loc_820F3C6C;
	// b 0x820f3cc0
	goto loc_820F3CC0;
loc_820F3C64:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x820f3c58
	if (!ctx.cr6.lt) goto loc_820F3C58;
loc_820F3C6C:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e53d0
	ctx.lr = 0x820F3C7C;
	sub_820E53D0(ctx, base);
loc_820F3C7C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e5568
	ctx.lr = 0x820F3C84;
	sub_820E5568(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820f3cb8
	if (ctx.cr0.eq) goto loc_820F3CB8;
	// lwz r11,10768(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10768);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// bge cr6,0x820f3ca8
	if (!ctx.cr6.lt) goto loc_820F3CA8;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x820f3cb8
	if (!ctx.cr6.lt) goto loc_820F3CB8;
	// b 0x820f3cb0
	goto loc_820F3CB0;
loc_820F3CA8:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820f3c7c
	if (ctx.cr6.lt) goto loc_820F3C7C;
loc_820F3CB0:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x820f3c7c
	if (!ctx.cr6.gt) goto loc_820F3C7C;
loc_820F3CB8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e5400
	ctx.lr = 0x820F3CC0;
	sub_820E5400(ctx, base);
loc_820F3CC0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F3CCC"))) PPC_WEAK_FUNC(sub_820F3CCC);
PPC_FUNC_IMPL(__imp__sub_820F3CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F3CD0"))) PPC_WEAK_FUNC(sub_820F3CD0);
PPC_FUNC_IMPL(__imp__sub_820F3CD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e0
	ctx.lr = 0x820F3CD8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r31,10824(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10824);
	// lwz r27,14748(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14748);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r26,14744(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14744);
	// bl 0x820f3c20
	ctx.lr = 0x820F3CFC;
	sub_820F3C20(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820f3d28
	if (ctx.cr6.eq) goto loc_820F3D28;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_820F3D08:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 1;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// and r31,r8,r27
	ctx.r31.u64 = ctx.r8.u64 & ctx.r27.u64;
	// stwx r10,r9,r26
	PPC_STORE_U32(ctx.r9.u32 + ctx.r26.u32, ctx.r10.u32);
	// bne 0x820f3d08
	if (!ctx.cr0.eq) goto loc_820F3D08;
loc_820F3D28:
	// stw r31,10824(r30)
	PPC_STORE_U32(ctx.r30.u32 + 10824, ctx.r31.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e9930
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F3D34"))) PPC_WEAK_FUNC(sub_820F3D34);
PPC_FUNC_IMPL(__imp__sub_820F3D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F3D38"))) PPC_WEAK_FUNC(sub_820F3D38);
PPC_FUNC_IMPL(__imp__sub_820F3D38) {
	PPC_FUNC_PROLOGUE();
loc_820F3D38:
	// li r10,-1
	ctx.r10.s64 = -1;
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
loc_820F3D44:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r9,0,r3
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r3.u32);
	ctx.r9.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r9,r11
	ctx.cr6.compare<int64_t>(ctx.r9.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x820f3d68
	if (!ctx.cr6.eq) goto loc_820F3D68;
	// stdcx. r10,0,r3
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r3.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r10.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x820f3d44
	if (!ctx.cr0.eq) goto loc_820F3D44;
	// b 0x820f3d70
	goto loc_820F3D70;
loc_820F3D68:
	// stdcx. r9,0,r3
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r3.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r9.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_820F3D70:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// bne cr6,0x820f3d38
	if (!ctx.cr6.eq) goto loc_820F3D38;
	// rldicl r10,r11,32,32
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F3D8C"))) PPC_WEAK_FUNC(sub_820F3D8C);
PPC_FUNC_IMPL(__imp__sub_820F3D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F3D90"))) PPC_WEAK_FUNC(sub_820F3D90);
PPC_FUNC_IMPL(__imp__sub_820F3D90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x820F3D98;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x820f3e20
	if (!ctx.cr6.eq) goto loc_820F3E20;
	// lwz r10,10772(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10772);
	// lis r11,2989
	ctx.r11.s64 = 195887104;
	// ori r11,r11,61453
	ctx.r11.u64 = ctx.r11.u64 | 61453;
	// lwz r31,16(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x820f3dd0
	if (!ctx.cr6.eq) goto loc_820F3DD0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-7472
	ctx.r3.s64 = ctx.r11.s64 + -7472;
	// bl 0x820f5488
	ctx.lr = 0x820F3DCC;
	sub_820F5488(ctx, base);
	// twi 31,r0,22
loc_820F3DD0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820f3de8
	if (ctx.cr6.eq) goto loc_820F3DE8;
	// lwz r11,10772(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10772);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x820F3DE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820F3DE8:
	// lbz r10,268(r13)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r13.u32 + 268);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r31,r30,10776
	ctx.r31.s64 = ctx.r30.s64 + 10776;
	// lwz r30,10772(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10772);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// slw r29,r11,r10
	ctx.r29.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// bl 0x8230445c
	ctx.lr = 0x820F3E04;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// andc r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r29.u64;
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x8230444c
	ctx.lr = 0x820F3E1C;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// b 0x820f3e40
	goto loc_820F3E40;
loc_820F3E20:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820f3e40
	if (!ctx.cr6.eq) goto loc_820F3E40;
	// lis r11,32712
	ctx.r11.s64 = 2143813632;
	// lwz r11,25924(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25924);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f3e40
	if (ctx.cr0.eq) goto loc_820F3E40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820edfe0
	ctx.lr = 0x820F3E40;
	sub_820EDFE0(ctx, base);
loc_820F3E40:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F3E48"))) PPC_WEAK_FUNC(sub_820F3E48);
PPC_FUNC_IMPL(__imp__sub_820F3E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x820F3E50;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r10,r5,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 12) & 0xFFF;
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r7,r5,3
	ctx.r7.u64 = ctx.r5.u32 & 0x1FFFFFFF;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// lis r10,16384
	ctx.r10.s64 = 1073741824;
	// rlwinm r8,r9,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// subf r4,r10,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r10.s64;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// clrlwi r8,r11,3
	ctx.r8.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r7,r5,-4
	ctx.r7.s64 = ctx.r5.s64 + -4;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// rlwinm r11,r31,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 12) & 0xFFF;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// subf r30,r10,r9
	ctx.r30.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// clrlwi r10,r31,3
	ctx.r10.u64 = ctx.r31.u32 & 0x1FFFFFFF;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r29,r8,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r8.s64;
	// eieio 
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821021c8
	ctx.lr = 0x820F3EC8;
	sub_821021C8(ctx, base);
	// stw r30,0(r31)
	PPC_MM_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// eieio 
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821021c8
	ctx.lr = 0x820F3EDC;
	sub_821021C8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F3EE4"))) PPC_WEAK_FUNC(sub_820F3EE4);
PPC_FUNC_IMPL(__imp__sub_820F3EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F3EE8"))) PPC_WEAK_FUNC(sub_820F3EE8);
PPC_FUNC_IMPL(__imp__sub_820F3EE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16576(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16576);
	// lbz r9,10813(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10813);
	// addi r10,r11,4800
	ctx.r10.s64 = ctx.r11.s64 + 4800;
	// ori r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 | 32;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// addi r11,r10,-160
	ctx.r11.s64 = ctx.r10.s64 + -160;
	// stw r10,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// stb r9,10813(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10813, ctx.r9.u8);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F3F10"))) PPC_WEAK_FUNC(sub_820F3F10);
PPC_FUNC_IMPL(__imp__sub_820F3F10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x820F3F18;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r7,r11,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r11,14764(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14764);
	// beq 0x820f4010
	if (ctx.cr0.eq) goto loc_820F4010;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820f3f44
	if (!ctx.cr0.eq) goto loc_820F3F44;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
loc_820F3F44:
	// addi r9,r6,-1
	ctx.r9.s64 = ctx.r6.s64 + -1;
	// lwz r8,14756(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14756);
	// add r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r5,14768(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14768);
	// not r11,r9
	ctx.r11.u64 = ~ctx.r9.u64;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// and r31,r9,r11
	ctx.r31.u64 = ctx.r9.u64 & ctx.r11.u64;
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + ctx.r31.u64;
	// cmplw cr6,r4,r8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x820f3fac
	if (ctx.cr6.gt) goto loc_820F3FAC;
	// lwz r10,13088(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13088);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x820f3fa4
	if (ctx.cr0.eq) goto loc_820F3FA4;
	// lwz r11,13092(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13092);
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820f3f9c
	if (ctx.cr6.eq) goto loc_820F3F9C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820f3fa4
	if (!ctx.cr6.eq) goto loc_820F3FA4;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x820f3fa4
	if (!ctx.cr6.lt) goto loc_820F3FA4;
loc_820F3F9C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820f410c
	goto loc_820F410C;
loc_820F3FA4:
	// stw r4,14764(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14764, ctx.r4.u32);
	// b 0x820f4004
	goto loc_820F4004;
loc_820F3FAC:
	// lwz r9,14772(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14772);
	// lwz r8,13088(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13088);
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// and r31,r9,r11
	ctx.r31.u64 = ctx.r9.u64 & ctx.r11.u64;
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + ctx.r31.u64;
	// beq 0x820f3ff0
	if (ctx.cr0.eq) goto loc_820F3FF0;
	// lwz r11,13092(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13092);
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820f3f9c
	if (ctx.cr6.eq) goto loc_820F3F9C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820f3ff0
	if (!ctx.cr6.eq) goto loc_820F3FF0;
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x820f3f9c
	if (ctx.cr6.lt) goto loc_820F3F9C;
loc_820F3FF0:
	// lwz r11,14776(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14776);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x820f3f9c
	if (ctx.cr6.gt) goto loc_820F3F9C;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stw r4,14772(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14772, ctx.r4.u32);
loc_820F4004:
	// bl 0x820f3b88
	ctx.lr = 0x820F4008;
	sub_820F3B88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x820f410c
	goto loc_820F410C;
loc_820F4010:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820f4020
	if (!ctx.cr0.eq) goto loc_820F4020;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_820F4020:
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// rlwinm r30,r11,0,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// bne cr6,0x820f4034
	if (!ctx.cr6.eq) goto loc_820F4034;
	// li r7,54
	ctx.r7.s64 = 54;
loc_820F4034:
	// lwz r11,14760(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14760);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x820f4048
	if (!ctx.cr6.gt) goto loc_820F4048;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_820F4048:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,14756(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14756);
	// add r31,r10,r30
	ctx.r31.u64 = ctx.r10.u64 + ctx.r30.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x820f4060
	if (!ctx.cr6.gt) goto loc_820F4060;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_820F4060:
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x820f40a0
	if (!ctx.cr6.lt) goto loc_820F40A0;
	// lwz r9,14772(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14772);
	// lwz r11,14768(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14768);
	// addi r9,r9,31
	ctx.r9.s64 = ctx.r9.s64 + 31;
	// lbz r6,10814(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10814);
	// lwz r8,14752(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14752);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r30,r9,0,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFE0;
	// ori r9,r6,4
	ctx.r9.u64 = ctx.r6.u64 | 4;
	// add r31,r10,r30
	ctx.r31.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r8,14772(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14772, ctx.r8.u32);
	// stw r11,14768(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14768, ctx.r11.u32);
	// stb r9,10814(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10814, ctx.r9.u8);
loc_820F40A0:
	// lwz r8,13088(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13088);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x820f40ec
	if (ctx.cr0.eq) goto loc_820F40EC;
	// lwz r11,13092(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13092);
	// lwz r10,14768(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14768);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x820f40d0
	if (ctx.cr6.eq) goto loc_820F40D0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x820f40ec
	if (!ctx.cr6.eq) goto loc_820F40EC;
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x820f40ec
	if (!ctx.cr6.lt) goto loc_820F40EC;
loc_820F40D0:
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x820f3f9c
	if (!ctx.cr6.eq) goto loc_820F3F9C;
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x820f3f9c
	if (ctx.cr6.lt) goto loc_820F3F9C;
loc_820F40EC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,14768(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14768);
	// bl 0x820f3b88
	ctx.lr = 0x820F40F8;
	sub_820F3B88(ctx, base);
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_820F410C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F4114"))) PPC_WEAK_FUNC(sub_820F4114);
PPC_FUNC_IMPL(__imp__sub_820F4114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F4118"))) PPC_WEAK_FUNC(sub_820F4118);
PPC_FUNC_IMPL(__imp__sub_820F4118) {
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
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lbz r11,10813(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10813);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f4144
	if (ctx.cr0.eq) goto loc_820F4144;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820f41ec
	goto loc_820F41EC;
loc_820F4144:
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,13364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13364);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne 0x820f416c
	if (!ctx.cr0.eq) goto loc_820F416C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f3f10
	ctx.lr = 0x820F4168;
	sub_820F3F10(ctx, base);
	// b 0x820f4188
	goto loc_820F4188;
loc_820F416C:
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f4184
	if (ctx.cr6.eq) goto loc_820F4184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f6a18
	ctx.lr = 0x820F4180;
	sub_820F6A18(ctx, base);
	// b 0x820f4188
	goto loc_820F4188;
loc_820F4184:
	// bl 0x820f6c78
	ctx.lr = 0x820F4188;
	sub_820F6C78(ctx, base);
loc_820F4188:
	// lwz r11,14780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14780);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,14784(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14784);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stw r11,14780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14780, ctx.r11.u32);
	// ble cr6,0x820f41d8
	if (!ctx.cr6.gt) goto loc_820F41D8;
	// lwz r11,13088(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13088);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f41d8
	if (!ctx.cr6.eq) goto loc_820F41D8;
	// lwz r10,14772(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14772);
	// lwz r9,14752(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14752);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// addi r10,r11,160
	ctx.r10.s64 = ctx.r11.s64 + 160;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// beq cr6,0x820f41d8
	if (ctx.cr6.eq) goto loc_820F41D8;
	// lwz r11,14756(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14756);
	// stw r11,14764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14764, ctx.r11.u32);
loc_820F41D8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820f41ec
	if (!ctx.cr6.eq) goto loc_820F41EC;
	// lbz r11,10813(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10813);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stb r11,10813(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10813, ctx.r11.u8);
loc_820F41EC:
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

__attribute__((alias("__imp__sub_820F4200"))) PPC_WEAK_FUNC(sub_820F4200);
PPC_FUNC_IMPL(__imp__sub_820F4200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98cc
	ctx.lr = 0x820F4208;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lbz r11,10813(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 10813);
	// lwz r25,14748(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 14748);
	// lwz r24,14744(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 14744);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f42a4
	if (ctx.cr0.eq) goto loc_820F42A4;
	// lwz r11,21380(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 21380);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f43dc
	if (ctx.cr6.eq) goto loc_820F43DC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820f43dc
	if (ctx.cr6.eq) goto loc_820F43DC;
	// lis r21,8192
	ctx.r21.s64 = 536870912;
	// lis r22,16384
	ctx.r22.s64 = 1073741824;
	// lis r23,16640
	ctx.r23.s64 = 1090519040;
loc_820F424C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// clrlwi r5,r10,8
	ctx.r5.u64 = ctx.r10.u32 & 0xFFFFFF;
	// subf r4,r22,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r22.s64;
	// blt cr6,0x820f4268
	if (ctx.cr6.lt) goto loc_820F4268;
	// subf r4,r23,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r23.s64;
loc_820F4268:
	// lwz r3,21380(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 21380);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820F4280;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,21380(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 21380);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820F4294;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne 0x820f424c
	if (!ctx.cr0.eq) goto loc_820F424C;
	// b 0x820f43dc
	goto loc_820F43DC;
loc_820F42A4:
	// lwz r29,10824(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 10824);
	// mulli r5,r31,3
	ctx.r5.s64 = ctx.r31.s64 * 3;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x820f3c20
	ctx.lr = 0x820F42B8;
	sub_820F3C20(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820f4384
	if (ctx.cr6.eq) goto loc_820F4384;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// lis r21,8192
	ctx.r21.s64 = 536870912;
	// lis r22,16384
	ctx.r22.s64 = 1073741824;
	// lis r23,16640
	ctx.r23.s64 = 1090519040;
loc_820F42D0:
	// lwz r3,21380(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 21380);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// clrlwi r28,r11,8
	ctx.r28.u64 = ctx.r11.u32 & 0xFFFFFF;
	// beq 0x820f4310
	if (ctx.cr0.eq) goto loc_820F4310;
	// cmplw cr6,r31,r21
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r21.u32, ctx.xer);
	// subf r4,r22,r31
	ctx.r4.s64 = ctx.r31.s64 - ctx.r22.s64;
	// blt cr6,0x820f42f8
	if (ctx.cr6.lt) goto loc_820F42F8;
	// subf r4,r23,r31
	ctx.r4.s64 = ctx.r31.s64 - ctx.r23.s64;
loc_820F42F8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820F4310;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820F4310:
	// lwz r11,21520(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 21520);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820f4340
	if (ctx.cr0.eq) goto loc_820F4340;
	// cmplw cr6,r31,r21
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r21.u32, ctx.xer);
	// subf r4,r22,r31
	ctx.r4.s64 = ctx.r31.s64 - ctx.r22.s64;
	// blt cr6,0x820f432c
	if (ctx.cr6.lt) goto loc_820F432C;
	// subf r4,r23,r31
	ctx.r4.s64 = ctx.r31.s64 - ctx.r23.s64;
loc_820F432C:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820F4340;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820F4340:
	// lis r9,-16383
	ctx.r9.s64 = -1073676288;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r9,r9,16128
	ctx.r9.u64 = ctx.r9.u64 | 16128;
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// and r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 & ctx.r25.u64;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// stwx r9,r10,r24
	PPC_STORE_U32(ctx.r10.u32 + ctx.r24.u32, ctx.r9.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// and r11,r10,r25
	ctx.r11.u64 = ctx.r10.u64 & ctx.r25.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r31,r9,r24
	PPC_STORE_U32(ctx.r9.u32 + ctx.r24.u32, ctx.r31.u32);
	// and r29,r11,r25
	ctx.r29.u64 = ctx.r11.u64 & ctx.r25.u64;
	// stwx r28,r10,r24
	PPC_STORE_U32(ctx.r10.u32 + ctx.r24.u32, ctx.r28.u32);
	// bne 0x820f42d0
	if (!ctx.cr0.eq) goto loc_820F42D0;
loc_820F4384:
	// stw r29,10824(r26)
	PPC_STORE_U32(ctx.r26.u32 + 10824, ctx.r29.u32);
	// sync 
	// lis r11,32712
	ctx.r11.s64 = 2143813632;
	// stw r29,1812(r11)
	PPC_MM_STORE_U32(ctx.r11.u32 + 1812, ctx.r29.u32);
	// eieio 
	// sync 
	// lwz r3,21380(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 21380);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820f43b8
	if (ctx.cr0.eq) goto loc_820F43B8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820F43B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820F43B8:
	// lwz r11,21520(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 21520);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820f43dc
	if (ctx.cr0.eq) goto loc_820F43DC;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820F43DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820F43DC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822e991c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F43E4"))) PPC_WEAK_FUNC(sub_820F43E4);
PPC_FUNC_IMPL(__imp__sub_820F43E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F43E8"))) PPC_WEAK_FUNC(sub_820F43E8);
PPC_FUNC_IMPL(__imp__sub_820F43E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98c8
	ctx.lr = 0x820F43F0;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r27,r29,11688
	ctx.r27.s64 = ctx.r29.s64 + 11688;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// ld r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// li r28,1
	ctx.r28.s64 = 1;
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// bne cr6,0x820f4424
	if (!ctx.cr6.eq) goto loc_820F4424;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_820F4424:
	// lbz r11,10814(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 10814);
	// rlwinm r24,r11,30,31,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// add r11,r24,r28
	ctx.r11.u64 = ctx.r24.u64 + ctx.r28.u64;
	// mulli r23,r11,11
	ctx.r23.s64 = ctx.r11.s64 * 11;
	// cmplwi r23,0
	ctx.cr0.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne 0x820f4444
	if (!ctx.cr0.eq) goto loc_820F4444;
loc_820F443C:
	// stw r26,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r26.u32);
	// b 0x820f45a0
	goto loc_820F45A0;
loc_820F4444:
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820f4118
	ctx.lr = 0x820F4454;
	sub_820F4118(ctx, base);
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq 0x820f443c
	if (ctx.cr0.eq) goto loc_820F443C;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r7,r25,-4
	ctx.r7.s64 = ctx.r25.s64 + -4;
	// ori r30,r11,2607
	ctx.r30.u64 = ctx.r11.u64 | 2607;
	// lis r11,-16380
	ctx.r11.s64 = -1073479680;
	// lis r6,-32768
	ctx.r6.s64 = -2147483648;
	// ori r31,r11,15360
	ctx.r31.u64 = ctx.r11.u64 | 15360;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x820f44fc
	if (ctx.cr6.eq) goto loc_820F44FC;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820f3d38
	ctx.lr = 0x820F448C;
	sub_820F3D38(ctx, base);
	// li r11,2609
	ctx.r11.s64 = 2609;
	// lis r8,768
	ctx.r8.s64 = 50331648;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// rlwinm r10,r10,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stwu r11,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r7.u32 = ea;
	// li r3,2609
	ctx.r3.s64 = 2609;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// addi r9,r11,4095
	ctx.r9.s64 = ctx.r11.s64 + 4095;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// rlwinm r9,r9,0,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFF000;
	// li r7,3
	ctx.r7.s64 = 3;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// li r27,8
	ctx.r27.s64 = 8;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stwu r5,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r4,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// stwu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r11.u32 = ea;
	// stwu r28,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r11.u32 = ea;
	// stwu r20,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r20.u32);
	ctx.r11.u32 = ea;
	// stwu r27,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r11.u32 = ea;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_820F44FC:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x820f4584
	if (ctx.cr6.eq) goto loc_820F4584;
	// li r9,2609
	ctx.r9.s64 = 2609;
	// lwz r11,14752(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14752);
	// lwz r10,14756(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14756);
	// lis r5,256
	ctx.r5.s64 = 16777216;
	// rlwinm r8,r11,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,2609
	ctx.r3.s64 = 2609;
	// stwu r9,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r7.u32 = ea;
	// clrlwi r9,r11,3
	ctx.r9.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r11,r8,512
	ctx.r11.s64 = ctx.r8.s64 + 512;
	// rlwinm r8,r10,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// addi r8,r8,512
	ctx.r8.s64 = ctx.r8.s64 + 512;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stwu r5,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r7.u32 = ea;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r9,r8,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// rlwinm r11,r11,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwu r30,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r7.u32 = ea;
	// li r29,8
	ctx.r29.s64 = 8;
	// addi r10,r10,4095
	ctx.r10.s64 = ctx.r10.s64 + 4095;
	// rlwinm r10,r10,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stwu r10,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r7.u32 = ea;
	// stwu r11,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r7.u32 = ea;
	// stwu r31,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r7.u32 = ea;
	// stwu r4,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r7.u32 = ea;
	// stwu r3,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r7.u32 = ea;
	// stwu r26,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r26.u32);
	ctx.r7.u32 = ea;
	// stwu r6,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r7.u32 = ea;
	// stwu r29,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r7.u32 = ea;
loc_820F4584:
	// rlwinm r11,r25,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r25,3
	ctx.r10.u64 = ctx.r25.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
	// stw r23,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r23.u32);
loc_820F45A0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822e9918
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F45A8"))) PPC_WEAK_FUNC(sub_820F45A8);
PPC_FUNC_IMPL(__imp__sub_820F45A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x820F45B0;
	__savegprlr_28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// addi r10,r4,-4
	ctx.r10.s64 = ctx.r4.s64 + -4;
	// ori r4,r9,15104
	ctx.r4.u64 = ctx.r9.u64 | 15104;
	// lis r9,-16382
	ctx.r9.s64 = -1073610752;
	// lwz r8,14768(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14768);
	// li r3,32767
	ctx.r3.s64 = 32767;
	// lwz r7,48(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// ori r9,r9,22528
	ctx.r9.u64 = ctx.r9.u64 | 22528;
	// lwz r6,10780(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10780);
	// clrlwi r5,r8,30
	ctx.r5.u64 = ctx.r8.u32 & 0x3;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// lwz r9,10768(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10768);
	// stw r8,13100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13100, ctx.r8.u32);
	// or r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 | ctx.r7.u64;
	// stw r7,13096(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13096, ctx.r7.u32);
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
	// stwu r4,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r10.u32 = ea;
	// rlwinm r4,r9,12,20,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// clrlwi r7,r9,3
	ctx.r7.u64 = ctx.r9.u32 & 0x1FFFFFFF;
	// addi r9,r4,512
	ctx.r9.s64 = ctx.r4.s64 + 512;
	// li r31,3
	ctx.r31.s64 = 3;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// stwu r3,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// li r29,3
	ctx.r29.s64 = 3;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// ori r7,r9,2
	ctx.r7.u64 = ctx.r9.u64 | 2;
	// rlwinm r9,r8,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0xFFF;
	// stwu r30,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r10.u32 = ea;
	// clrlwi r8,r8,3
	ctx.r8.u64 = ctx.r8.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stwu r31,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r10.u32 = ea;
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// stwu r5,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r10.u32 = ea;
	// stwu r28,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r10.u32 = ea;
	// stwu r29,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r10.u32 = ea;
	// stwu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// stwu r6,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r10.u32 = ea;
	// lwz r9,21380(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21380);
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820f4684
	if (!ctx.cr6.eq) goto loc_820F4684;
	// lbz r10,10813(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10813);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820f4684
	if (ctx.cr0.eq) goto loc_820F4684;
	// lwz r10,10768(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10768);
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// lwz r10,10768(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10768);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_820F4684:
	// addi r10,r6,2
	ctx.r10.s64 = ctx.r6.s64 + 2;
	// stw r10,10780(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10780, ctx.r10.u32);
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F4690"))) PPC_WEAK_FUNC(sub_820F4690);
PPC_FUNC_IMPL(__imp__sub_820F4690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98d4
	ctx.lr = 0x820F4698;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// lwz r11,10872(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10872);
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820f472c
	if (ctx.cr6.eq) goto loc_820F472C;
	// addi r24,r30,10876
	ctx.r24.s64 = ctx.r30.s64 + 10876;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823043ec
	ctx.lr = 0x820F46D0;
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r11,10872(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10872);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820f4718
	if (ctx.cr6.eq) goto loc_820F4718;
	// oris r11,r27,33024
	ctx.r11.u64 = ctx.r27.u64 | 2164260864;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x820f3e48
	ctx.lr = 0x820F4708;
	sub_820F3E48(ctx, base);
	// lwz r11,10872(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10872);
	// li r29,1
	ctx.r29.s64 = 1;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stw r11,10872(r30)
	PPC_STORE_U32(ctx.r30.u32 + 10872, ctx.r11.u32);
loc_820F4718:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823043dc
	ctx.lr = 0x820F4724;
	__imp__KfReleaseSpinLock(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x820f4758
	if (!ctx.cr6.eq) goto loc_820F4758;
loc_820F472C:
	// lwz r11,10872(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10872);
	// clrlwi r10,r27,8
	ctx.r10.u64 = ctx.r27.u32 & 0xFFFFFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// oris r10,r10,33024
	ctx.r10.u64 = ctx.r10.u64 | 2164260864;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,10872(r30)
	PPC_STORE_U32(ctx.r30.u32 + 10872, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x820f4200
	ctx.lr = 0x820F4758;
	sub_820F4200(ctx, base);
loc_820F4758:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822e9924
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F4764"))) PPC_WEAK_FUNC(sub_820F4764);
PPC_FUNC_IMPL(__imp__sub_820F4764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F4768"))) PPC_WEAK_FUNC(sub_820F4768);
PPC_FUNC_IMPL(__imp__sub_820F4768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x820F4770;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820f4824
	if (ctx.cr6.eq) goto loc_820F4824;
	// lwz r10,10768(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10768);
	// lwz r11,10780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10780);
	// subf r9,r30,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r30.s64;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x820f4824
	if (!ctx.cr6.lt) goto loc_820F4824;
	// lwz r11,10780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10780);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x820f47c0
	if (!ctx.cr6.eq) goto loc_820F47C0;
	// lwz r11,13088(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13088);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f4824
	if (!ctx.cr6.eq) goto loc_820F4824;
	// bl 0x820f4d98
	ctx.lr = 0x820F47C0;
	sub_820F4D98(ctx, base);
loc_820F47C0:
	// lwz r10,10768(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10768);
	// lwz r11,10780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10780);
	// subf r9,r30,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r30.s64;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x820f4824
	if (!ctx.cr6.lt) goto loc_820F4824;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e53d0
	ctx.lr = 0x820F47EC;
	sub_820E53D0(ctx, base);
	// b 0x820f4800
	goto loc_820F4800;
loc_820F47F0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e5568
	ctx.lr = 0x820F47F8;
	sub_820E5568(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820f481c
	if (ctx.cr0.eq) goto loc_820F481C;
loc_820F4800:
	// lwz r10,10768(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10768);
	// lwz r11,10780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10780);
	// subf r9,r30,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r30.s64;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820f47f0
	if (ctx.cr6.lt) goto loc_820F47F0;
loc_820F481C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e5400
	ctx.lr = 0x820F4824;
	sub_820E5400(ctx, base);
loc_820F4824:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F482C"))) PPC_WEAK_FUNC(sub_820F482C);
PPC_FUNC_IMPL(__imp__sub_820F482C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F4830"))) PPC_WEAK_FUNC(sub_820F4830);
PPC_FUNC_IMPL(__imp__sub_820F4830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// rlwinm. r8,r5,0,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x6;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// rlwinm r10,r5,8,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0x3F;
	// bne 0x820f4850
	if (!ctx.cr0.eq) goto loc_820F4850;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
loc_820F4850:
	// rlwinm. r8,r5,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// beq 0x820f4918
	if (ctx.cr0.eq) goto loc_820F4918;
	// clrlwi. r8,r5,31
	ctx.r8.u64 = ctx.r5.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lbz r8,10815(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10815);
	// ori r8,r8,8
	ctx.r8.u64 = ctx.r8.u64 | 8;
	// stb r8,10815(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10815, ctx.r8.u8);
	// bne 0x820f4880
	if (!ctx.cr0.eq) goto loc_820F4880;
	// li r8,1480
	ctx.r8.s64 = 1480;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// stwu r4,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r9.u32 = ea;
loc_820F4880:
	// lis r8,1
	ctx.r8.s64 = 65536;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ori r8,r8,1404
	ctx.r8.u64 = ctx.r8.u64 | 1404;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// stwu r6,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r9.u32 = ea;
	// stwu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r9.u32 = ea;
	// bne cr6,0x820f48a0
	if (!ctx.cr6.eq) goto loc_820F48A0;
	// li r10,4
	ctx.r10.s64 = 4;
loc_820F48A0:
	// li r8,1400
	ctx.r8.s64 = 1400;
	// li r7,19
	ctx.r7.s64 = 19;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r31,256
	ctx.r31.s64 = 256;
	// li r30,1118
	ctx.r30.s64 = 1118;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// lwz r8,12580(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12580);
	// oris r8,r8,49156
	ctx.r8.u64 = ctx.r8.u64 | 3221487616;
	// ori r8,r8,15360
	ctx.r8.u64 = ctx.r8.u64 | 15360;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// stwu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r9.u32 = ea;
	// lwz r8,10772(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10772);
	// rlwinm r6,r8,12,20,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0xFFF;
	// clrlwi r7,r8,3
	ctx.r7.u64 = ctx.r8.u32 & 0x1FFFFFFF;
	// addi r8,r6,512
	ctx.r8.s64 = ctx.r6.s64 + 512;
	// rlwinm r8,r8,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// ori r8,r8,2
	ctx.r8.u64 = ctx.r8.u64 | 2;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// stwu r4,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r9.u32 = ea;
	// stwu r31,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r9.u32 = ea;
	// lwz r8,12580(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12580);
	// oris r8,r8,49152
	ctx.r8.u64 = ctx.r8.u64 | 3221225472;
	// ori r8,r8,21504
	ctx.r8.u64 = ctx.r8.u64 | 21504;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// stwu r30,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r9.u32 = ea;
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
loc_820F4918:
	// rlwinm. r10,r5,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820f4990
	if (ctx.cr0.eq) goto loc_820F4990;
	// lbz r31,10815(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10815);
	// lis r10,-16380
	ctx.r10.s64 = -1073479680;
	// li r8,19
	ctx.r8.s64 = 19;
	// ori r10,r10,15361
	ctx.r10.u64 = ctx.r10.u64 | 15361;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// li r5,1404
	ctx.r5.s64 = 1404;
	// lis r4,2989
	ctx.r4.s64 = 195887104;
	// ori r4,r4,61453
	ctx.r4.u64 = ctx.r4.u64 | 61453;
	// andi. r31,r31,247
	ctx.r31.u64 = ctx.r31.u64 & 247;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stb r31,10815(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10815, ctx.r31.u8);
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// lwz r11,10772(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10772);
	// rlwinm r8,r11,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r9,r11,3
	ctx.r9.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r11,r8,512
	ctx.r11.s64 = ctx.r8.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// stwu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// stwu r3,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// stwu r6,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r10.u32 = ea;
	// stwu r5,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r10.u32 = ea;
	// stwu r4,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r10.u32 = ea;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_820F4990:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F49A0"))) PPC_WEAK_FUNC(sub_820F49A0);
PPC_FUNC_IMPL(__imp__sub_820F49A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,6
	ctx.r5.s64 = 6;
	// lwz r11,1488(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1488);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x820f4768
	sub_820F4768(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F49BC"))) PPC_WEAK_FUNC(sub_820F49BC);
PPC_FUNC_IMPL(__imp__sub_820F49BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F49C0"))) PPC_WEAK_FUNC(sub_820F49C0);
PPC_FUNC_IMPL(__imp__sub_820F49C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x820F49C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r29,16384
	ctx.r29.s64 = 1073741824;
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x820f4a00
	if (ctx.cr0.eq) goto loc_820F4A00;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r11,r9,512
	ctx.r11.s64 = ctx.r9.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
loc_820F4A00:
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r4,4224
	ctx.r4.s64 = 4224;
	// bl 0x820f4118
	ctx.lr = 0x820F4A10;
	sub_820F4118(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x820f4a2c
	if (!ctx.cr0.eq) goto loc_820F4A2C;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r31,16576(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16576);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// b 0x820f4a9c
	goto loc_820F4A9C;
loc_820F4A2C:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r11,r9,512
	ctx.r11.s64 = ctx.r9.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820f4a78
	if (ctx.cr0.eq) goto loc_820F4A78;
	// rlwinm r10,r31,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 12) & 0xFFF;
	// clrlwi r9,r31,3
	ctx.r9.u64 = ctx.r31.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r10,r29,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r29.s64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x820f4a7c
	goto loc_820F4A7C;
loc_820F4A78:
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
loc_820F4A7C:
	// rlwinm r11,r31,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r31,3
	ctx.r10.u64 = ctx.r31.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r3,r29,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r29.s64;
	// addi r4,r3,4224
	ctx.r4.s64 = ctx.r3.s64 + 4224;
	// bl 0x821021c8
	ctx.lr = 0x820F4A9C;
	sub_821021C8(ctx, base);
loc_820F4A9C:
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// addi r11,r31,4220
	ctx.r11.s64 = ctx.r31.s64 + 4220;
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F4AB8"))) PPC_WEAK_FUNC(sub_820F4AB8);
PPC_FUNC_IMPL(__imp__sub_820F4AB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x820F4AC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r10,10813(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10813);
	// rlwinm. r11,r10,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f4afc
	if (ctx.cr0.eq) goto loc_820F4AFC;
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// lwz r11,16576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16576);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r10,10813(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10813, ctx.r10.u8);
	// addi r10,r11,4800
	ctx.r10.s64 = ctx.r11.s64 + 4800;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r11,r10,-160
	ctx.r11.s64 = ctx.r10.s64 + -160;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// b 0x820f4c08
	goto loc_820F4C08;
loc_820F4AFC:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x820f4b10
	if (!ctx.cr6.eq) goto loc_820F4B10;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x820f4b18
	goto loc_820F4B18;
loc_820F4B10:
	// addi r11,r4,14
	ctx.r11.s64 = ctx.r4.s64 + 14;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_820F4B18:
	// lwz r3,13364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13364);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820f4b40
	if (ctx.cr0.eq) goto loc_820F4B40;
	// lwz r10,172(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820f4b40
	if (ctx.cr6.eq) goto loc_820F4B40;
	// lwz r10,14760(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14760);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x820f4b40
	if (ctx.cr6.gt) goto loc_820F4B40;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_820F4B40:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// bne 0x820f4b64
	if (!ctx.cr0.eq) goto loc_820F4B64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f3f10
	ctx.lr = 0x820F4B60;
	sub_820F3F10(ctx, base);
	// b 0x820f4b80
	goto loc_820F4B80;
loc_820F4B64:
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f4b7c
	if (ctx.cr6.eq) goto loc_820F4B7C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f6a18
	ctx.lr = 0x820F4B78;
	sub_820F6A18(ctx, base);
	// b 0x820f4b80
	goto loc_820F4B80;
loc_820F4B7C:
	// bl 0x820f6c78
	ctx.lr = 0x820F4B80;
	sub_820F6C78(ctx, base);
loc_820F4B80:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x820f4ba4
	if (!ctx.cr6.eq) goto loc_820F4BA4;
	// lbz r10,10813(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10813);
	// lwz r11,16576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16576);
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// stb r10,10813(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10813, ctx.r10.u8);
	// addi r10,r11,4800
	ctx.r10.s64 = ctx.r11.s64 + 4800;
	// b 0x820f4bc8
	goto loc_820F4BC8;
loc_820F4BA4:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
	// stw r30,14776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14776, ctx.r30.u32);
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r29,14764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14764, ctx.r29.u32);
	// stw r29,14780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14780, ctx.r29.u32);
	// addi r10,r10,-14
	ctx.r10.s64 = ctx.r10.s64 + -14;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_820F4BC8:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r11,r10,-160
	ctx.r11.s64 = ctx.r10.s64 + -160;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// lwz r11,22136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22136);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x820f4c04
	if (!ctx.cr0.eq) goto loc_820F4C04;
	// lwz r4,14788(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14788);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x820f4c04
	if (ctx.cr0.eq) goto loc_820F4C04;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f4768
	ctx.lr = 0x820F4C00;
	sub_820F4768(ctx, base);
	// stw r29,14788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14788, ctx.r29.u32);
loc_820F4C04:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_820F4C08:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F4C10"))) PPC_WEAK_FUNC(sub_820F4C10);
PPC_FUNC_IMPL(__imp__sub_820F4C10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x820F4C18;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r11,10813(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10813);
	// lwz r30,14776(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14776);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r28,r11,4
	ctx.r28.s64 = ctx.r11.s64 + 4;
	// bne 0x820f4d50
	if (!ctx.cr0.eq) goto loc_820F4D50;
	// lbz r11,10812(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10812);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f4cac
	if (ctx.cr0.eq) goto loc_820F4CAC;
	// lwz r11,13364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13364);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820f4d50
	if (ctx.cr0.eq) goto loc_820F4D50;
	// lwz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f4d50
	if (!ctx.cr6.eq) goto loc_820F4D50;
	// subf r11,r30,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r30.s64;
	// srawi. r29,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x820f4d50
	if (ctx.cr0.eq) goto loc_820F4D50;
	// lwz r11,13388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13388);
	// lwz r3,13384(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13384);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820f4c80
	if (ctx.cr6.lt) goto loc_820F4C80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f6bd0
	ctx.lr = 0x820F4C80;
	sub_820F6BD0(ctx, base);
loc_820F4C80:
	// rlwinm r11,r30,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r30,3
	ctx.r10.u64 = ctx.r30.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// oris r9,r29,33024
	ctx.r9.u64 = ctx.r29.u64 | 2164260864;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// addi r8,r3,8
	ctx.r8.s64 = ctx.r3.s64 + 8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r8,13384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13384, ctx.r8.u32);
	// b 0x820f4d50
	goto loc_820F4D50;
loc_820F4CAC:
	// lwz r11,13088(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13088);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f4d10
	if (ctx.cr6.eq) goto loc_820F4D10;
	// rlwinm r11,r30,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 12) & 0xFFF;
	// subf r10,r30,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r30.s64;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// srawi. r29,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r10.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// clrlwi r10,r30,3
	ctx.r10.u64 = ctx.r30.u32 & 0x1FFFFFFF;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq 0x820f4d50
	if (ctx.cr0.eq) goto loc_820F4D50;
	// addi r3,r31,13224
	ctx.r3.s64 = ctx.r31.s64 + 13224;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x820f4cf8
	if (!ctx.cr6.gt) goto loc_820F4CF8;
	// bl 0x820f49c0
	ctx.lr = 0x820F4CF4;
	sub_820F49C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820F4CF8:
	// oris r10,r29,33024
	ctx.r10.u64 = ctx.r29.u64 | 2164260864;
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,13232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13232, ctx.r9.u32);
	// b 0x820f4d50
	goto loc_820F4D50;
loc_820F4D10:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f45a8
	ctx.lr = 0x820F4D1C;
	sub_820F45A8(ctx, base);
	// rlwinm r11,r30,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r30,3
	ctx.r10.u64 = ctx.r30.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// addi r8,r31,13224
	ctx.r8.s64 = ctx.r31.s64 + 13224;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r11,r30,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r30.s64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r6,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 2;
	// bl 0x820f4690
	ctx.lr = 0x820F4D4C;
	sub_820F4690(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_820F4D50:
	// addi r11,r28,31
	ctx.r11.s64 = ctx.r28.s64 + 31;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// rlwinm r9,r11,0,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x820f4d7c
	if (!ctx.cr6.gt) goto loc_820F4D7C;
	// addi r11,r28,-4
	ctx.r11.s64 = ctx.r28.s64 + -4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x820f4ab8
	ctx.lr = 0x820F4D78;
	sub_820F4AB8(ctx, base);
	// b 0x820f4d8c
	goto loc_820F4D8C;
loc_820F4D7C:
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// stw r11,14776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14776, ctx.r11.u32);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
loc_820F4D8C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F4D94"))) PPC_WEAK_FUNC(sub_820F4D94);
PPC_FUNC_IMPL(__imp__sub_820F4D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F4D98"))) PPC_WEAK_FUNC(sub_820F4D98);
PPC_FUNC_IMPL(__imp__sub_820F4D98) {
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
	// lwz r11,13088(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13088);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f4e10
	if (!ctx.cr6.eq) goto loc_820F4E10;
	// lbz r11,10812(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10812);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x820f4e10
	if (!ctx.cr0.eq) goto loc_820F4E10;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x820f43e8
	ctx.lr = 0x820F4DD4;
	sub_820F43E8(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820f4e10
	if (ctx.cr6.eq) goto loc_820F4E10;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f4118
	ctx.lr = 0x820F4DF0;
	sub_820F4118(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x820f4e10
	if (ctx.cr0.eq) goto loc_820F4E10;
	// addi r8,r31,13224
	ctx.r8.s64 = ctx.r31.s64 + 13224;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f4690
	ctx.lr = 0x820F4E10;
	sub_820F4690(ctx, base);
loc_820F4E10:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f4c10
	ctx.lr = 0x820F4E18;
	sub_820F4C10(ctx, base);
	// lbz r11,10812(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10812);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x820f4e64
	if (!ctx.cr0.eq) goto loc_820F4E64;
	// lis r11,-32202
	ctx.r11.s64 = -2110390272;
	// lwz r11,13916(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13916);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820f4e64
	if (ctx.cr6.eq) goto loc_820F4E64;
	// lbz r11,10813(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10813);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x820f4e64
	if (!ctx.cr0.eq) goto loc_820F4E64;
	// lwz r11,10780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10780);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-2
	ctx.r4.s64 = ctx.r11.s64 + -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f4768
	ctx.lr = 0x820F4E58;
	sub_820F4768(ctx, base);
	// lbz r11,10813(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10813);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stb r11,10813(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10813, ctx.r11.u8);
loc_820F4E64:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
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

__attribute__((alias("__imp__sub_820F4E80"))) PPC_WEAK_FUNC(sub_820F4E80);
PPC_FUNC_IMPL(__imp__sub_820F4E80) {
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
	// lwz r31,10780(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10780);
	// stw r31,10800(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10800, ctx.r31.u32);
	// bl 0x820f4d98
	ctx.lr = 0x820F4E9C;
	sub_820F4D98(ctx, base);
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

__attribute__((alias("__imp__sub_820F4EB4"))) PPC_WEAK_FUNC(sub_820F4EB4);
PPC_FUNC_IMPL(__imp__sub_820F4EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F4EB8"))) PPC_WEAK_FUNC(sub_820F4EB8);
PPC_FUNC_IMPL(__imp__sub_820F4EB8) {
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
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820f4f18
	if (ctx.cr6.eq) goto loc_820F4F18;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1488(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1488);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,10780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10780);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x820f4ef8
	if (!ctx.cr6.eq) goto loc_820F4EF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f4d98
	ctx.lr = 0x820F4EF8;
	sub_820F4D98(ctx, base);
loc_820F4EF8:
	// lwz r10,10768(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10768);
	// lwz r11,10780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10780);
	// subf r9,r30,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r30.s64;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfc r11,r11,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
loc_820F4F18:
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

__attribute__((alias("__imp__sub_820F4F30"))) PPC_WEAK_FUNC(sub_820F4F30);
PPC_FUNC_IMPL(__imp__sub_820F4F30) {
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
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x820f4f5c
	if (!ctx.cr6.gt) goto loc_820F4F5C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f4d98
	ctx.lr = 0x820F4F5C;
	sub_820F4D98(ctx, base);
loc_820F4F5C:
	// li r11,1480
	ctx.r11.s64 = 1480;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// li r9,3332
	ctx.r9.s64 = 3332;
	// li r8,0
	ctx.r8.s64 = 0;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_820F4F94"))) PPC_WEAK_FUNC(sub_820F4F94);
PPC_FUNC_IMPL(__imp__sub_820F4F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F4F98"))) PPC_WEAK_FUNC(sub_820F4F98);
PPC_FUNC_IMPL(__imp__sub_820F4F98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x820F4FA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x820f4ff4
	if (!ctx.cr6.gt) goto loc_820F4FF4;
	// bl 0x820f4d98
	ctx.lr = 0x820F4FC8;
	sub_820F4D98(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x820f4ff4
	if (!ctx.cr6.gt) goto loc_820F4FF4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f4ab8
	ctx.lr = 0x820F4FE8;
	sub_820F4AB8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x820f4ff8
	if (ctx.cr0.eq) goto loc_820F4FF8;
loc_820F4FF4:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
loc_820F4FF8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F5000"))) PPC_WEAK_FUNC(sub_820F5000);
PPC_FUNC_IMPL(__imp__sub_820F5000) {
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
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x820f502c
	if (!ctx.cr6.gt) goto loc_820F502C;
	// bl 0x820f4d98
	ctx.lr = 0x820F5028;
	sub_820F4D98(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820F502C:
	// li r10,1480
	ctx.r10.s64 = 1480;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// lwz r4,10780(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10780);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x820f4768
	ctx.lr = 0x820F5054;
	sub_820F4768(ctx, base);
loc_820F5054:
	// lwz r11,10872(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10872);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820f5054
	if (!ctx.cr6.eq) goto loc_820F5054;
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

__attribute__((alias("__imp__sub_820F5074"))) PPC_WEAK_FUNC(sub_820F5074);
PPC_FUNC_IMPL(__imp__sub_820F5074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F5078"))) PPC_WEAK_FUNC(sub_820F5078);
PPC_FUNC_IMPL(__imp__sub_820F5078) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98d8
	ctx.lr = 0x820F5080;
	__savegprlr_24(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,10780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10780);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f509c
	if (ctx.cr6.eq) goto loc_820F509C;
	// bl 0x820f5000
	ctx.lr = 0x820F509C;
	sub_820F5000(ctx, base);
loc_820F509C:
	// lwz r10,14752(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14752);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x820f50ec
	if (ctx.cr0.eq) goto loc_820F50EC;
	// lwz r11,14756(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14756);
	// lis r9,16384
	ctx.r9.s64 = 1073741824;
	// rlwinm r8,r11,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// addi r8,r8,512
	ctx.r8.s64 = ctx.r8.s64 + 512;
	// addi r5,r9,512
	ctx.r5.s64 = ctx.r9.s64 + 512;
	// rlwinm r9,r8,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// clrlwi r8,r11,3
	ctx.r8.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwinm r11,r5,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x1000;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r4,r7,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r7.s64;
	// subf r3,r6,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r6.s64;
	// bl 0x821021c8
	ctx.lr = 0x820F50EC;
	sub_821021C8(ctx, base);
loc_820F50EC:
	// lis r30,-20096
	ctx.r30.s64 = -1317011456;
	// lwz r3,14684(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14684);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822f99b8
	ctx.lr = 0x820F50FC;
	sub_822F99B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,14688(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14688);
	// bl 0x822f99b8
	ctx.lr = 0x820F5108;
	sub_822F99B8(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r29,14684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14684, ctx.r29.u32);
	// stw r29,14688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14688, ctx.r29.u32);
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// bl 0x823044ac
	ctx.lr = 0x820F5124;
	__imp__VdSetSystemCommandBufferGpuIdentifierAddress(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,10772(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10772);
	// bl 0x822f99b8
	ctx.lr = 0x820F5130;
	sub_822F99B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,10768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10768);
	// bl 0x822f99b8
	ctx.lr = 0x820F513C;
	sub_822F99B8(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x820f514c
	if (!ctx.cr6.eq) goto loc_820F514C;
loc_820F5144:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820f5480
	goto loc_820F5480;
loc_820F514C:
	// lwz r26,4(r27)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r28,8(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r25,12(r27)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplwi r26,0
	ctx.cr0.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// lwz r30,16(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// bne 0x820f5170
	if (!ctx.cr0.eq) goto loc_820F5170;
	// lis r26,0
	ctx.r26.s64 = 0;
	// ori r26,r26,32768
	ctx.r26.u64 = ctx.r26.u64 | 32768;
loc_820F5170:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x820f517c
	if (!ctx.cr6.eq) goto loc_820F517C;
	// lis r25,32
	ctx.r25.s64 = 2097152;
loc_820F517C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f5188
	if (!ctx.cr6.eq) goto loc_820F5188;
	// li r11,32
	ctx.r11.s64 = 32;
loc_820F5188:
	// divwu r27,r25,r11
	ctx.r27.u32 = ctx.r25.u32 / ctx.r11.u32;
	// twllei r11,0
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x820f51ac
	if (!ctx.cr6.eq) goto loc_820F51AC;
	// lis r4,-19072
	ctx.r4.s64 = -1249902592;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822f9920
	ctx.lr = 0x820F51A4;
	sub_822F9920(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r28,14684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14684, ctx.r28.u32);
loc_820F51AC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x820f51d8
	if (!ctx.cr6.eq) goto loc_820F51D8;
	// lis r11,8
	ctx.r11.s64 = 524288;
	// lis r4,-30848
	ctx.r4.s64 = -2021654528;
	// subfc r11,r11,r25
	ctx.xer.ca = ctx.r25.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r25.s64 - ctx.r11.s64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwimi r4,r11,28,2,3
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 28) & 0x30000000) | (ctx.r4.u64 & 0xFFFFFFFFCFFFFFFF);
	// bl 0x822f9920
	ctx.lr = 0x820F51D0;
	sub_822F9920(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r30,14688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14688, ctx.r30.u32);
loc_820F51D8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820f5478
	if (ctx.cr6.eq) goto loc_820F5478;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820f5478
	if (ctx.cr6.eq) goto loc_820F5478;
	// lis r4,-23168
	ctx.r4.s64 = -1518338048;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x822f9920
	ctx.lr = 0x820F51F4;
	sub_822F9920(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,10768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10768, ctx.r3.u32);
	// beq 0x820f5478
	if (ctx.cr0.eq) goto loc_820F5478;
	// lis r4,-27264
	ctx.r4.s64 = -1786773504;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x822f9920
	ctx.lr = 0x820F520C;
	sub_822F9920(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,10772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10772, ctx.r3.u32);
	// beq 0x820f5478
	if (ctx.cr0.eq) goto loc_820F5478;
	// li r5,96
	ctx.r5.s64 = 96;
	// lwz r3,10768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10768);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e9ff0
	ctx.lr = 0x820F5228;
	sub_822E9FF0(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,10772(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10772);
	// bl 0x822e9ff0
	ctx.lr = 0x820F5238;
	sub_822E9FF0(ctx, base);
	// cntlzw r11,r26
	ctx.r11.u64 = ctx.r26.u32 == 0 ? 32 : __builtin_clz(ctx.r26.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// subfic r24,r11,28
	ctx.xer.ca = ctx.r11.u32 <= 28;
	ctx.r24.s64 = 28 - ctx.r11.s64;
	// bl 0x8230449c
	ctx.lr = 0x820F5248;
	__imp__MmGetPhysicalAddress(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x8230448c
	ctx.lr = 0x820F5250;
	__imp__VdInitializeRingBuffer(ctx, base);
	// rlwinm r11,r26,23,9,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 23) & 0x7FFFFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r4,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r4.s64 = 31 - ctx.r11.s64;
	// cmplwi cr6,r4,19
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 19, ctx.xer);
	// ble cr6,0x820f5268
	if (!ctx.cr6.gt) goto loc_820F5268;
	// li r4,19
	ctx.r4.s64 = 19;
loc_820F5268:
	// lwz r11,10768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10768);
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r11,r9,512
	ctx.r11.s64 = ctx.r9.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8230447c
	ctx.lr = 0x820F5288;
	__imp__VdEnableRingBufferRPtrWriteBack(ctx, base);
	// lis r9,2989
	ctx.r9.s64 = 195887104;
	// rlwinm r11,r25,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 30) & 0x3FFFFFFF;
	// ori r8,r9,61453
	ctx.r8.u64 = ctx.r9.u64 | 61453;
	// rlwinm r9,r26,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r10,r27,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// addi r6,r30,-4
	ctx.r6.s64 = ctx.r30.s64 + -4;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// addi r5,r10,-160
	ctx.r5.s64 = ctx.r10.s64 + -160;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r8,10768(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10768);
	// stw r11,14784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14784, ctx.r11.u32);
	// stw r28,14744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14744, ctx.r28.u32);
	// stw r30,14752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14752, ctx.r30.u32);
	// stw r30,14772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14772, ctx.r30.u32);
	// stw r9,14756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14756, ctx.r9.u32);
	// stw r30,14776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14776, ctx.r30.u32);
	// stw r27,14760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14760, ctx.r27.u32);
	// stw r7,14748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14748, ctx.r7.u32);
	// stw r29,60(r8)
	PPC_STORE_U32(ctx.r8.u32 + 60, ctx.r29.u32);
	// lwz r11,10780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10780);
	// stw r29,10824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10824, ctx.r29.u32);
	// stw r6,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r6.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stw r5,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r5.u32);
	// stw r29,14764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14764, ctx.r29.u32);
	// bne cr6,0x820f530c
	if (!ctx.cr6.eq) goto loc_820F530C;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,10780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10780, ctx.r11.u32);
loc_820F530C:
	// lwz r11,10780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10780);
	// lwz r10,10768(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10768);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,14768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14768);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// lwz r9,10768(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10768);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// lwz r11,10768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10768);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x823044ac
	ctx.lr = 0x820F5340;
	__imp__VdSetSystemCommandBufferGpuIdentifierAddress(ctx, base);
	// lis r10,-16367
	ctx.r10.s64 = -1072627712;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// ori r10,r10,18432
	ctx.r10.u64 = ctx.r10.u64 | 18432;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// addi r11,r11,-7396
	ctx.r11.s64 = ctx.r11.s64 + -7396;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r10,1023
	ctx.r10.s64 = 1023;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820F5370:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x820f5370
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820F5370;
	// li r11,2048
	ctx.r11.s64 = 2048;
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r29,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r29.u32);
	// li r4,19
	ctx.r4.s64 = 19;
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r29.u32);
	// sth r11,130(r1)
	PPC_STORE_U16(ctx.r1.u32 + 130, ctx.r11.u16);
	// sth r11,10798(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10798, ctx.r11.u16);
	// li r11,7
	ctx.r11.s64 = 7;
	// sth r10,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, ctx.r10.u16);
	// sth r10,10796(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10796, ctx.r10.u16);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// bl 0x8230446c
	ctx.lr = 0x820F53C4;
	__imp__KiApcNormalRoutineNop(ctx, base);
	// li r5,19
	ctx.r5.s64 = 19;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f3cd0
	ctx.lr = 0x820F53D4;
	sub_820F3CD0(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x820f53f0
	if (!ctx.cr6.gt) goto loc_820F53F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f4d98
	ctx.lr = 0x820F53EC;
	sub_820F4D98(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820F53F0:
	// li r10,3330
	ctx.r10.s64 = 3330;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r8,3
	ctx.r8.s64 = 196608;
	// ori r9,r9,2048
	ctx.r9.u64 = ctx.r9.u64 | 2048;
	// ori r8,r8,2562
	ctx.r8.u64 = ctx.r8.u64 | 2562;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// lis r10,-16368
	ctx.r10.s64 = -1072693248;
	// lis r7,2032
	ctx.r7.s64 = 133169152;
	// lis r6,-16384
	ctx.r6.s64 = -1073741824;
	// lis r5,16
	ctx.r5.s64 = 1048576;
	// li r4,477
	ctx.r4.s64 = 477;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// li r30,476
	ctx.r30.s64 = 476;
	// lis r3,2
	ctx.r3.s64 = 131072;
	// ori r29,r3,51
	ctx.r29.u64 = ctx.r3.u64 | 51;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// stwu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// stwu r5,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r11.u32 = ea;
	// stwu r4,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// lwz r10,10772(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10772);
	// rlwinm r8,r10,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r9,r10,3
	ctx.r9.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r10,r8,512
	ctx.r10.s64 = ctx.r8.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r11.u32 = ea;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x820f4f30
	ctx.lr = 0x820F5474;
	sub_820F4F30(ctx, base);
	// b 0x820f5144
	goto loc_820F5144;
loc_820F5478:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
loc_820F5480:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x822e9928
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F5488"))) PPC_WEAK_FUNC(sub_820F5488);
PPC_FUNC_IMPL(__imp__sub_820F5488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,392
	ctx.r10.s64 = ctx.r1.s64 + 392;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823044cc
	ctx.lr = 0x820F54D0;
	__imp___vsnprintf(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823044bc
	ctx.lr = 0x820F54D8;
	__imp__DbgPrint(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F54E8"))) PPC_WEAK_FUNC(sub_820F54E8);
PPC_FUNC_IMPL(__imp__sub_820F54E8) {
	PPC_FUNC_PROLOGUE();
	// addis r11,r3,8178
	ctx.r11.s64 = ctx.r3.s64 + 535953408;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F54F8"))) PPC_WEAK_FUNC(sub_820F54F8);
PPC_FUNC_IMPL(__imp__sub_820F54F8) {
	PPC_FUNC_PROLOGUE();
	// addis r11,r3,8178
	ctx.r11.s64 = ctx.r3.s64 + 535953408;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r4,0(r11)
	PPC_MM_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// eieio 
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F550C"))) PPC_WEAK_FUNC(sub_820F550C);
PPC_FUNC_IMPL(__imp__sub_820F550C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F5510"))) PPC_WEAK_FUNC(sub_820F5510);
PPC_FUNC_IMPL(__imp__sub_820F5510) {
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
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,432
	ctx.r10.s64 = ctx.r1.s64 + 432;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x823044cc
	ctx.lr = 0x820F555C;
	__imp___vsnprintf(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820f5578
	if (ctx.cr0.eq) goto loc_820F5578;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820F5574;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820f557c
	goto loc_820F557C;
loc_820F5578:
	// bl 0x820f5488
	ctx.lr = 0x820F557C;
	sub_820F5488(ctx, base);
loc_820F557C:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F5590"))) PPC_WEAK_FUNC(sub_820F5590);
PPC_FUNC_IMPL(__imp__sub_820F5590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98d4
	ctx.lr = 0x820F5598;
	__savegprlr_23(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,1488
	ctx.r3.s64 = 1488;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820F55B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r5,r11,-6684
	ctx.r5.s64 = ctx.r11.s64 + -6684;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-6704
	ctx.r4.s64 = ctx.r11.s64 + -6704;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x820f5510
	ctx.lr = 0x820F55D4;
	sub_820F5510(ctx, base);
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// li r26,11
	ctx.r26.s64 = 11;
	// addi r27,r11,22784
	ctx.r27.s64 = ctx.r11.s64 + 22784;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r27,4
	ctx.r30.s64 = ctx.r27.s64 + 4;
	// addi r25,r11,-6708
	ctx.r25.s64 = ctx.r11.s64 + -6708;
loc_820F55EC:
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// and. r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 & ctx.r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f561c
	if (ctx.cr0.eq) goto loc_820F561C;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x820f560c
	if (ctx.cr6.eq) goto loc_820F560C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x820f5510
	ctx.lr = 0x820F560C;
	sub_820F5510(ctx, base);
loc_820F560C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x820f5510
	ctx.lr = 0x820F5618;
	sub_820F5510(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
loc_820F561C:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne 0x820f55ec
	if (!ctx.cr0.eq) goto loc_820F55EC;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x820f5640
	if (!ctx.cr6.eq) goto loc_820F5640;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-6728
	ctx.r4.s64 = ctx.r11.s64 + -6728;
	// bl 0x820f5510
	ctx.lr = 0x820F5640;
	sub_820F5510(ctx, base);
loc_820F5640:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-6732
	ctx.r4.s64 = ctx.r11.s64 + -6732;
	// bl 0x820f5510
	ctx.lr = 0x820F5650;
	sub_820F5510(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r27,88
	ctx.r30.s64 = ctx.r27.s64 + 88;
	// li r29,30
	ctx.r29.s64 = 30;
	// addi r28,r11,-6752
	ctx.r28.s64 = ctx.r11.s64 + -6752;
loc_820F5660:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820F5670;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x820f5510
	ctx.lr = 0x820F5684;
	sub_820F5510(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne 0x820f5660
	if (!ctx.cr0.eq) goto loc_820F5660;
	// addi r11,r27,328
	ctx.r11.s64 = ctx.r27.s64 + 328;
	// li r23,5
	ctx.r23.s64 = 5;
	// addi r29,r11,16
	ctx.r29.s64 = ctx.r11.s64 + 16;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r26,r11,-6756
	ctx.r26.s64 = ctx.r11.s64 + -6756;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r27,r11,-6764
	ctx.r27.s64 = ctx.r11.s64 + -6764;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r25,r11,-6776
	ctx.r25.s64 = ctx.r11.s64 + -6776;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r24,r11,-6780
	ctx.r24.s64 = ctx.r11.s64 + -6780;
loc_820F56BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x820f5510
	ctx.lr = 0x820F56C8;
	sub_820F5510(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x820f5798
	if (!ctx.cr6.gt) goto loc_820F5798;
loc_820F56D8:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823044dc
	ctx.lr = 0x820F56EC;
	__imp__sprintf(ctx, base);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
loc_820F56F4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x820f5704
	if (!ctx.cr6.lt) goto loc_820F5704;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_820F5704:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x820f577c
	if (!ctx.cr6.lt) goto loc_820F577C;
	// lwz r11,-4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// lwz r10,-8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8);
	// lwz r3,-16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -16);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// slw r11,r28,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r11.u8 & 0x3F));
	// or r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 | ctx.r10.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820F572C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -12);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820F573C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_820F5748:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820f5748
	if (!ctx.cr6.eq) goto loc_820F5748;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823044dc
	ctx.lr = 0x820F5774;
	__imp__sprintf(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x820f56f4
	goto loc_820F56F4;
loc_820F577C:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f5510
	ctx.lr = 0x820F578C;
	sub_820F5510(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820f56d8
	if (ctx.cr6.lt) goto loc_820F56D8;
loc_820F5798:
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// bne 0x820f56bc
	if (!ctx.cr0.eq) goto loc_820F56BC;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x822e9924
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F57AC"))) PPC_WEAK_FUNC(sub_820F57AC);
PPC_FUNC_IMPL(__imp__sub_820F57AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F57B0"))) PPC_WEAK_FUNC(sub_820F57B0);
PPC_FUNC_IMPL(__imp__sub_820F57B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x820F57B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r4,r11,-6384
	ctx.r4.s64 = ctx.r11.s64 + -6384;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x820f5510
	ctx.lr = 0x820F57D8;
	sub_820F5510(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x820f5874
	if (!ctx.cr6.eq) goto loc_820F5874;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f5804
	if (!ctx.cr6.eq) goto loc_820F5804;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r6,164(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,172(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addi r4,r11,-6512
	ctx.r4.s64 = ctx.r11.s64 + -6512;
	// bl 0x820f5510
	ctx.lr = 0x820F5804;
	sub_820F5510(ctx, base);
loc_820F5804:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,-6648
	ctx.r4.s64 = ctx.r11.s64 + -6648;
	// bl 0x820f5510
	ctx.lr = 0x820F5814;
	sub_820F5510(ctx, base);
	// lwz r30,116(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x820f5874
	if (ctx.cr0.eq) goto loc_820F5874;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r27,r11,-6672
	ctx.r27.s64 = ctx.r11.s64 + -6672;
loc_820F5828:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x820f5868
	if (!ctx.cr6.gt) goto loc_820F5868;
	// addi r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 + 12;
loc_820F583C:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r6,r11,8
	ctx.r6.u64 = ctx.r11.u32 & 0xFFFFFF;
	// bl 0x820f5510
	ctx.lr = 0x820F5854;
	sub_820F5510(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820f583c
	if (ctx.cr6.lt) goto loc_820F583C;
loc_820F5868:
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne 0x820f5828
	if (!ctx.cr0.eq) goto loc_820F5828;
loc_820F5874:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F587C"))) PPC_WEAK_FUNC(sub_820F587C);
PPC_FUNC_IMPL(__imp__sub_820F587C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F5880"))) PPC_WEAK_FUNC(sub_820F5880);
PPC_FUNC_IMPL(__imp__sub_820F5880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98c8
	ctx.lr = 0x820F5888;
	__savegprlr_20(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// li r20,1
	ctx.r20.s64 = 1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820f58b4
	if (ctx.cr6.eq) goto loc_820F58B4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x820f58c8
	if (!ctx.cr6.eq) goto loc_820F58C8;
loc_820F58B4:
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r31,r10,21736
	ctx.r31.s64 = ctx.r10.s64 + 21736;
	// addi r30,r11,21752
	ctx.r30.s64 = ctx.r11.s64 + 21752;
	// li r20,0
	ctx.r20.s64 = 0;
loc_820F58C8:
	// li r3,1488
	ctx.r3.s64 = 1488;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x820F58D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,3878
	ctx.r3.s64 = 3878;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x820F58E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,448
	ctx.r3.s64 = 448;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x820F58F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r3,1403
	ctx.r3.s64 = 1403;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x820F5900;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// li r3,1404
	ctx.r3.s64 = 1404;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x820F5910;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,1405
	ctx.r3.s64 = 1405;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x820F5920;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// li r3,3200
	ctx.r3.s64 = 3200;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x820F5934;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,3201
	ctx.r3.s64 = 3201;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x820F5940;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r3,3201
	ctx.r3.s64 = 3201;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x820F5950;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
	// li r3,3201
	ctx.r3.s64 = 3201;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x820F5960;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// li r3,3201
	ctx.r3.s64 = 3201;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x820F5970;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r3.u32);
	// li r3,3201
	ctx.r3.s64 = 3201;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x820F5980;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r3,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r3.u32);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// addi r7,r11,-5088
	ctx.r7.s64 = ctx.r11.s64 + -5088;
	// stw r25,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r25.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// addi r4,r11,-5160
	ctx.r4.s64 = ctx.r11.s64 + -5160;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,5426
	ctx.r5.s64 = 5426;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,1416(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1416);
	// lhz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// bl 0x820f5510
	ctx.lr = 0x820F59C4;
	sub_820F5510(ctx, base);
	// lis r11,-32763
	ctx.r11.s64 = -2147155968;
	// ori r11,r11,272
	ctx.r11.u64 = ctx.r11.u64 | 272;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x820f5a24
	if (!ctx.cr6.eq) goto loc_820F5A24;
	// lis r11,2989
	ctx.r11.s64 = 195887104;
	// ori r11,r11,61453
	ctx.r11.u64 = ctx.r11.u64 | 61453;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820f5a24
	if (ctx.cr6.eq) goto loc_820F5A24;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x820f5a24
	if (ctx.cr6.eq) goto loc_820F5A24;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r4,r11,-5320
	ctx.r4.s64 = ctx.r11.s64 + -5320;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x820f5510
	ctx.lr = 0x820F5A04;
	sub_820F5510(ctx, base);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x820f5af4
	if (ctx.cr6.eq) goto loc_820F5AF4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r5,0(r21)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-5364
	ctx.r4.s64 = ctx.r11.s64 + -5364;
	// bl 0x820f5510
	ctx.lr = 0x820F5A20;
	sub_820F5510(ctx, base);
	// b 0x820f5af4
	goto loc_820F5AF4;
loc_820F5A24:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x820f5590
	ctx.lr = 0x820F5A2C;
	sub_820F5590(ctx, base);
	// lis r12,32763
	ctx.r12.s64 = 2147155968;
	// lis r10,1025
	ctx.r10.s64 = 67174400;
	// ori r12,r12,61664
	ctx.r12.u64 = ctx.r12.u64 | 61664;
	// and r11,r29,r12
	ctx.r11.u64 = ctx.r29.u64 & ctx.r12.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x820f5a68
	if (!ctx.cr6.eq) goto loc_820F5A68;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-5496
	ctx.r4.s64 = ctx.r11.s64 + -5496;
	// bl 0x820f5510
	ctx.lr = 0x820F5A54;
	sub_820F5510(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-5648
	ctx.r4.s64 = ctx.r11.s64 + -5648;
	// bl 0x820f5510
	ctx.lr = 0x820F5A64;
	sub_820F5510(ctx, base);
	// li r27,1
	ctx.r27.s64 = 1;
loc_820F5A68:
	// rlwinm. r11,r23,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f5ab8
	if (ctx.cr0.eq) goto loc_820F5AB8;
	// rlwinm. r11,r23,0,21,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x7C0;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x820f5ab8
	if (!ctx.cr0.eq) goto loc_820F5AB8;
	// rlwinm r11,r23,21,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 21) & 0xC;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lis r9,32
	ctx.r9.s64 = 2097152;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r11,r11,0,5,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7F00000;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x820f5ab8
	if (!ctx.cr6.eq) goto loc_820F5AB8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-5784
	ctx.r4.s64 = ctx.r11.s64 + -5784;
	// bl 0x820f5510
	ctx.lr = 0x820F5AA4;
	sub_820F5510(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-5960
	ctx.r4.s64 = ctx.r11.s64 + -5960;
	// bl 0x820f5510
	ctx.lr = 0x820F5AB4;
	sub_820F5510(ctx, base);
	// li r27,1
	ctx.r27.s64 = 1;
loc_820F5AB8:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x820f5ad0
	if (ctx.cr6.eq) goto loc_820F5AD0;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x820f57b0
	ctx.lr = 0x820F5AD0;
	sub_820F57B0(ctx, base);
loc_820F5AD0:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// beq cr6,0x820f5ae8
	if (ctx.cr6.eq) goto loc_820F5AE8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6096
	ctx.r4.s64 = ctx.r11.s64 + -6096;
	// b 0x820f5af0
	goto loc_820F5AF0;
loc_820F5AE8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-6240
	ctx.r4.s64 = ctx.r11.s64 + -6240;
loc_820F5AF0:
	// bl 0x820f5510
	ctx.lr = 0x820F5AF4;
	sub_820F5510(ctx, base);
loc_820F5AF4:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x822e9918
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F5AFC"))) PPC_WEAK_FUNC(sub_820F5AFC);
PPC_FUNC_IMPL(__imp__sub_820F5AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F5B00"))) PPC_WEAK_FUNC(sub_820F5B00);
PPC_FUNC_IMPL(__imp__sub_820F5B00) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-4760
	ctx.r3.s64 = ctx.r11.s64 + -4760;
	// bl 0x820f5488
	ctx.lr = 0x820F5B20;
	sub_820F5488(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,16408(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16408);
	// lwz r6,10772(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10772);
	// lwz r3,13288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13288);
	// bl 0x820f5880
	ctx.lr = 0x820F5B38;
	sub_820F5880(ctx, base);
	// lwz r11,13288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13288);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f5b70
	if (ctx.cr6.eq) goto loc_820F5B70;
	// lbz r8,10813(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10813);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,10780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10780);
	// ori r8,r8,3
	ctx.r8.u64 = ctx.r8.u64 | 3;
	// lwz r9,10768(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10768);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stb r8,10813(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10813, ctx.r8.u8);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r10,10872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10872, ctx.r10.u32);
	// bl 0x820f7ad8
	ctx.lr = 0x820F5B6C;
	sub_820F7AD8(ctx, base);
	// b 0x820f5b8c
	goto loc_820F5B8C;
loc_820F5B70:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-4984
	ctx.r3.s64 = ctx.r11.s64 + -4984;
	// bl 0x820f5488
	ctx.lr = 0x820F5B7C;
	sub_820F5488(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-5080
	ctx.r3.s64 = ctx.r11.s64 + -5080;
	// bl 0x820f5488
	ctx.lr = 0x820F5B88;
	sub_820F5488(ctx, base);
	// twi 31,r0,22
loc_820F5B8C:
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

__attribute__((alias("__imp__sub_820F5BA0"))) PPC_WEAK_FUNC(sub_820F5BA0);
PPC_FUNC_IMPL(__imp__sub_820F5BA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,32712
	ctx.r11.s64 = 2143813632;
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r10,12820(r11)
	PPC_MM_STORE_U32(ctx.r11.u32 + 12820, ctx.r10.u32);
	// eieio 
	// li r10,2048
	ctx.r10.s64 = 2048;
	// stw r10,13320(r11)
	PPC_MM_STORE_U32(ctx.r11.u32 + 13320, ctx.r10.u32);
	// eieio 
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F5BC0"))) PPC_WEAK_FUNC(sub_820F5BC0);
PPC_FUNC_IMPL(__imp__sub_820F5BC0) {
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
	// bl 0x823044fc
	ctx.lr = 0x820F5BD4;
	__imp__ExRegisterTitleTerminateNotification(ctx, base);
	// bl 0x823044ec
	ctx.lr = 0x820F5BD8;
	__imp__VdShutdownEngines(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F5BE8"))) PPC_WEAK_FUNC(sub_820F5BE8);
PPC_FUNC_IMPL(__imp__sub_820F5BE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98d8
	ctx.lr = 0x820F5BF0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r29,r11,21336
	ctx.r29.s64 = ctx.r11.s64 + 21336;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// lwz r25,13444(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13444);
loc_820F5C0C:
	// rlwinm r11,r30,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r9,r30,r31
	ctx.r9.u64 = ctx.r30.u64 + ctx.r31.u64;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// addi r11,r11,136
	ctx.r11.s64 = ctx.r11.s64 + 136;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,64(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820F5C48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// cmplwi cr6,r30,400
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 400, ctx.xer);
	// blt cr6,0x820f5c0c
	if (ctx.cr6.lt) goto loc_820F5C0C;
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// addi r27,r31,1024
	ctx.r27.s64 = ctx.r31.s64 + 1024;
	// addi r26,r11,22536
	ctx.r26.s64 = ctx.r11.s64 + 22536;
loc_820F5C68:
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// addi r29,r26,8
	ctx.r29.s64 = ctx.r26.s64 + 8;
loc_820F5C70:
	// rlwinm r11,r30,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r10,-4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// add r9,r30,r31
	ctx.r9.u64 = ctx.r30.u64 + ctx.r31.u64;
	// addi r8,r11,116
	ctx.r8.s64 = ctx.r11.s64 + 116;
	// addi r11,r11,236
	ctx.r11.s64 = ctx.r11.s64 + 236;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r10,-8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8);
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,464(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 464);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820F5CB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// cmplwi cr6,r30,80
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 80, ctx.xer);
	// blt cr6,0x820f5c70
	if (ctx.cr6.lt) goto loc_820F5C70;
	// addi r11,r28,32
	ctx.r11.s64 = ctx.r28.s64 + 32;
	// li r10,1
	ctx.r10.s64 = 1;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rldicr r10,r10,63,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srd r6,r10,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r11.u8 & 0x7F));
	// bl 0x820e72e0
	ctx.lr = 0x820F5CE4;
	sub_820E72E0(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,24
	ctx.r27.s64 = ctx.r27.s64 + 24;
	// cmplwi cr6,r28,26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 26, ctx.xer);
	// blt cr6,0x820f5c68
	if (ctx.cr6.lt) goto loc_820F5C68;
	// li r11,5
	ctx.r11.s64 = 5;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12056, ctx.r11.u32);
	// stw r10,12060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12060, ctx.r10.u32);
	// bl 0x821002b0
	ctx.lr = 0x820F5D10;
	sub_821002B0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820eaf00
	ctx.lr = 0x820F5D1C;
	sub_820EAF00(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f2250
	ctx.lr = 0x820F5D28;
	sub_820F2250(ctx, base);
	// lbz r10,10812(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10812);
	// stw r24,12580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12580, ctx.r24.u32);
	// rlwinm. r11,r10,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x820f5df8
	if (!ctx.cr0.eq) goto loc_820F5DF8;
	// rlwinm. r11,r10,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x820f5df8
	if (!ctx.cr0.eq) goto loc_820F5DF8;
	// lbz r11,12051(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12051);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820f5df8
	if (!ctx.cr0.eq) goto loc_820F5DF8;
	// rlwinm. r11,r10,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f5d5c
	if (ctx.cr0.eq) goto loc_820F5D5C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x820f5dec
	goto loc_820F5DEC;
loc_820F5D5C:
	// rlwinm. r11,r10,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f5de4
	if (ctx.cr0.eq) goto loc_820F5DE4;
	// lwz r11,12304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12304);
	// lwz r9,12592(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12592);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820f5d7c
	if (ctx.cr6.eq) goto loc_820F5D7C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f5de4
	if (!ctx.cr6.eq) goto loc_820F5DE4;
loc_820F5D7C:
	// lwz r11,12308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12308);
	// lwz r9,12596(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12596);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820f5d94
	if (ctx.cr6.eq) goto loc_820F5D94;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f5de4
	if (!ctx.cr6.eq) goto loc_820F5DE4;
loc_820F5D94:
	// lwz r11,12312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12312);
	// lwz r9,12600(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12600);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820f5dac
	if (ctx.cr6.eq) goto loc_820F5DAC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f5de4
	if (!ctx.cr6.eq) goto loc_820F5DE4;
loc_820F5DAC:
	// lwz r11,12316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12316);
	// lwz r9,12604(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12604);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820f5dc4
	if (ctx.cr6.eq) goto loc_820F5DC4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f5de4
	if (!ctx.cr6.eq) goto loc_820F5DE4;
loc_820F5DC4:
	// lwz r11,12320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12320);
	// lwz r9,12608(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12608);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820f5ddc
	if (ctx.cr6.eq) goto loc_820F5DDC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f5de4
	if (!ctx.cr6.eq) goto loc_820F5DE4;
loc_820F5DDC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x820f5de8
	goto loc_820F5DE8;
loc_820F5DE4:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_820F5DE8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_820F5DEC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x820f5dfc
	if (!ctx.cr0.eq) goto loc_820F5DFC;
loc_820F5DF8:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_820F5DFC:
	// rlwimi r11,r10,0,24,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFE) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF01);
	// stw r24,12576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12576, ctx.r24.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r24,10804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10804, ctx.r24.u32);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stw r24,10808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10808, ctx.r24.u32);
	// stw r9,12572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12572, ctx.r9.u32);
	// stb r11,10812(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10812, ctx.r11.u8);
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x820f5e38
	if (!ctx.cr0.eq) goto loc_820F5E38;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e98e8
	ctx.lr = 0x820F5E38;
	sub_820E98E8(ctx, base);
loc_820F5E38:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822e9928
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F5E40"))) PPC_WEAK_FUNC(sub_820F5E40);
PPC_FUNC_IMPL(__imp__sub_820F5E40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98d0
	ctx.lr = 0x820F5E48;
	__savegprlr_22(ctx, base);
	// stwu r1,-1760(r1)
	ea = -1760 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r30,64(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r27,4(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi r30,0
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r24,16(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r22,40(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r25,8(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bne 0x820f5e7c
	if (!ctx.cr0.eq) goto loc_820F5E7C;
	// clrlwi r11,r25,26
	ctx.r11.u64 = ctx.r25.u32 & 0x3F;
	// b 0x820f5e8c
	goto loc_820F5E8C;
loc_820F5E7C:
	// lis r11,10280
	ctx.r11.s64 = 673710080;
	// ori r11,r11,390
	ctx.r11.u64 = ctx.r11.u64 | 390;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x820f5e94
	if (!ctx.cr6.eq) goto loc_820F5E94;
loc_820F5E8C:
	// lis r30,10280
	ctx.r30.s64 = 673710080;
	// b 0x820f5ea8
	goto loc_820F5EA8;
loc_820F5E94:
	// lis r11,6184
	ctx.r11.s64 = 405274624;
	// ori r11,r11,390
	ctx.r11.u64 = ctx.r11.u64 | 390;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x820f5eb0
	if (!ctx.cr6.eq) goto loc_820F5EB0;
	// lis r30,6184
	ctx.r30.s64 = 405274624;
loc_820F5EA8:
	// ori r30,r30,262
	ctx.r30.u64 = ctx.r30.u64 | 262;
	// b 0x820f5ee0
	goto loc_820F5EE0;
loc_820F5EB0:
	// lis r11,10280
	ctx.r11.s64 = 673710080;
	// ori r11,r11,438
	ctx.r11.u64 = ctx.r11.u64 | 438;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x820f5ec8
	if (!ctx.cr6.eq) goto loc_820F5EC8;
	// lis r30,10280
	ctx.r30.s64 = 673710080;
	// b 0x820f5edc
	goto loc_820F5EDC;
loc_820F5EC8:
	// lis r11,6184
	ctx.r11.s64 = 405274624;
	// ori r11,r11,438
	ctx.r11.u64 = ctx.r11.u64 | 438;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x820f5ee0
	if (!ctx.cr6.eq) goto loc_820F5EE0;
	// lis r30,6184
	ctx.r30.s64 = 405274624;
loc_820F5EDC:
	// ori r30,r30,310
	ctx.r30.u64 = ctx.r30.u64 | 310;
loc_820F5EE0:
	// clrlwi r23,r30,26
	ctx.r23.u64 = ctx.r30.u32 & 0x3F;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// cmplwi cr6,r26,50
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 50, ctx.xer);
	// bne cr6,0x820f5ef8
	if (!ctx.cr6.eq) goto loc_820F5EF8;
	// li r26,6
	ctx.r26.s64 = 6;
	// b 0x820f5f04
	goto loc_820F5F04;
loc_820F5EF8:
	// cmplwi cr6,r26,7
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 7, ctx.xer);
	// bne cr6,0x820f5f04
	if (!ctx.cr6.eq) goto loc_820F5F04;
	// li r26,54
	ctx.r26.s64 = 54;
loc_820F5F04:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8230451c
	ctx.lr = 0x820F5F0C;
	__imp__VdQueryVideoMode(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r29,21400
	ctx.r9.s64 = ctx.r29.s64 + 21400;
	// lfs f0,9488(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9488);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stw r10,21392(r29)
	PPC_STORE_U32(ctx.r29.u32 + 21392, ctx.r10.u32);
	// stw r11,21388(r29)
	PPC_STORE_U32(ctx.r29.u32 + 21388, ctx.r11.u32);
	// stw r11,21396(r29)
	PPC_STORE_U32(ctx.r29.u32 + 21396, ctx.r11.u32);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r9
	PPC_STORE_U32(ctx.r9.u32, ctx.f0.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820f5f80
	if (!ctx.cr6.eq) goto loc_820F5F80;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820e7098
	ctx.lr = 0x820F5F6C;
	sub_820E7098(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x820f5f7c
	if (!ctx.cr0.eq) goto loc_820F5F7C;
loc_820F5F74:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820f6074
	goto loc_820F6074;
loc_820F5F7C:
	// stw r3,14676(r29)
	PPC_STORE_U32(ctx.r29.u32 + 14676, ctx.r3.u32);
loc_820F5F80:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820f5fbc
	if (!ctx.cr6.eq) goto loc_820F5FBC;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820e71b8
	ctx.lr = 0x820F5FA4;
	sub_820E71B8(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x820f5f74
	if (ctx.cr0.eq) goto loc_820F5F74;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r5,14680(r29)
	PPC_STORE_U32(ctx.r29.u32 + 14680, ctx.r5.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820f3548
	ctx.lr = 0x820F5FBC;
	sub_820F3548(ctx, base);
loc_820F5FBC:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820f5ff4
	if (ctx.cr6.eq) goto loc_820F5FF4;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820e71b8
	ctx.lr = 0x820F5FE0;
	sub_820E71B8(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x820f5f74
	if (ctx.cr0.eq) goto loc_820F5F74;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r4,14672(r29)
	PPC_STORE_U32(ctx.r29.u32 + 14672, ctx.r4.u32);
	// bl 0x820f38b0
	ctx.lr = 0x820F5FF4;
	sub_820F38B0(ctx, base);
loc_820F5FF4:
	// addi r3,r29,13392
	ctx.r3.s64 = ctx.r29.s64 + 13392;
	// li r5,124
	ctx.r5.s64 = 124;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822e9960
	ctx.lr = 0x820F6004;
	sub_822E9960(ctx, base);
	// oris r11,r23,10280
	ctx.r11.u64 = ctx.r23.u64 | 673710080;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,13456(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13456, ctx.r11.u32);
	// bl 0x820fae90
	ctx.lr = 0x820F601C;
	sub_820FAE90(ctx, base);
	// cmplwi cr6,r26,7
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 7, ctx.xer);
	// beq cr6,0x820f604c
	if (ctx.cr6.eq) goto loc_820F604C;
	// cmplwi cr6,r26,54
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 54, ctx.xer);
	// beq cr6,0x820f604c
	if (ctx.cr6.eq) goto loc_820F604C;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x820f7830
	ctx.lr = 0x820F6038;
	sub_820F7830(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820f2f10
	ctx.lr = 0x820F6048;
	sub_820F2F10(ctx, base);
	// b 0x820f6068
	goto loc_820F6068;
loc_820F604C:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x820f7888
	ctx.lr = 0x820F6058;
	sub_820F7888(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820f2fd8
	ctx.lr = 0x820F6068;
	sub_820F2FD8(ctx, base);
loc_820F6068:
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,16556(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16556, ctx.r11.u32);
loc_820F6074:
	// addi r1,r1,1760
	ctx.r1.s64 = ctx.r1.s64 + 1760;
	// b 0x822e9920
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F607C"))) PPC_WEAK_FUNC(sub_820F607C);
PPC_FUNC_IMPL(__imp__sub_820F607C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F6080"))) PPC_WEAK_FUNC(sub_820F6080);
PPC_FUNC_IMPL(__imp__sub_820F6080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x820F6088;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820fbd30
	ctx.lr = 0x820F6094;
	sub_820FBD30(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f60d8
	if (ctx.cr6.eq) goto loc_820F60D8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f38b0
	ctx.lr = 0x820F60B0;
	sub_820F38B0(ctx, base);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_820F60B4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f3548
	ctx.lr = 0x820F60C4;
	sub_820F3548(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x820f60b4
	if (ctx.cr6.lt) goto loc_820F60B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f5000
	ctx.lr = 0x820F60D8;
	sub_820F5000(ctx, base);
loc_820F60D8:
	// lwz r3,14676(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14676);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820f60ec
	if (ctx.cr0.eq) goto loc_820F60EC;
	// bl 0x820f6998
	ctx.lr = 0x820F60E8;
	sub_820F6998(ctx, base);
	// stw r29,14676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14676, ctx.r29.u32);
loc_820F60EC:
	// lwz r3,14680(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14680);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820f6100
	if (ctx.cr0.eq) goto loc_820F6100;
	// bl 0x820f6998
	ctx.lr = 0x820F60FC;
	sub_820F6998(ctx, base);
	// stw r29,14680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14680, ctx.r29.u32);
loc_820F6100:
	// lwz r3,14672(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14672);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820f6114
	if (ctx.cr0.eq) goto loc_820F6114;
	// bl 0x820f6998
	ctx.lr = 0x820F6110;
	sub_820F6998(ctx, base);
	// stw r29,14672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14672, ctx.r29.u32);
loc_820F6114:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F611C"))) PPC_WEAK_FUNC(sub_820F611C);
PPC_FUNC_IMPL(__imp__sub_820F611C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F6120"))) PPC_WEAK_FUNC(sub_820F6120);
PPC_FUNC_IMPL(__imp__sub_820F6120) {
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
	// beq cr6,0x820f6164
	if (ctx.cr6.eq) goto loc_820F6164;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x820f6120
	ctx.lr = 0x820F6144;
	sub_820F6120(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x822f99b8
	ctx.lr = 0x820F6158;
	sub_822F99B8(ctx, base);
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f99b8
	ctx.lr = 0x820F6164;
	sub_822F99B8(ctx, base);
loc_820F6164:
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

__attribute__((alias("__imp__sub_820F6178"))) PPC_WEAK_FUNC(sub_820F6178);
PPC_FUNC_IMPL(__imp__sub_820F6178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x820f61ec
	if (ctx.cr6.eq) goto loc_820F61EC;
	// lwz r11,64(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x820f61b0
	if (ctx.cr6.eq) goto loc_820F61B0;
	// cmplwi cr6,r11,54
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 54, ctx.xer);
	// bne cr6,0x820f61b4
	if (!ctx.cr6.eq) goto loc_820F61B4;
loc_820F61B0:
	// lis r10,2048
	ctx.r10.s64 = 134217728;
loc_820F61B4:
	// lwz r11,68(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// lis r9,16384
	ctx.r9.s64 = 1073741824;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwimi r9,r11,28,2,3
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 28) & 0x30000000) | (ctx.r9.u64 & 0xFFFFFFFFCFFFFFFF);
	// cmplwi cr6,r8,720
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 720, ctx.xer);
	// or r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 | ctx.r10.u64;
	// bne cr6,0x820f61e8
	if (!ctx.cr6.eq) goto loc_820F61E8;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,480
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 480, ctx.xer);
	// beq cr6,0x820f61e4
	if (ctx.cr6.eq) goto loc_820F61E4;
	// cmplwi cr6,r11,576
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 576, ctx.xer);
	// bne cr6,0x820f61e8
	if (!ctx.cr6.eq) goto loc_820F61E8;
loc_820F61E4:
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
loc_820F61E8:
	// bl 0x8230453c
	ctx.lr = 0x820F61EC;
	__imp__VdSetDisplayMode(ctx, base);
loc_820F61EC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8230452c
	ctx.lr = 0x820F61F4;
	__imp__VdGetCurrentDisplayInformation(ctx, base);
	// lhz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 152);
	// lhz r10,154(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 154);
	// lhz r9,166(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 166);
	// stw r11,21388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21388, ctx.r11.u32);
	// stw r10,21392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21392, ctx.r10.u32);
	// stw r9,21396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21396, ctx.r9.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F6220"))) PPC_WEAK_FUNC(sub_820F6220);
PPC_FUNC_IMPL(__imp__sub_820F6220) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r7,r11,4832
	ctx.r7.s64 = ctx.r11.s64 + 4832;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r3,5426
	ctx.r3.s64 = 355598336;
	// addi r6,r11,3680
	ctx.r6.s64 = ctx.r11.s64 + 3680;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,23456
	ctx.r4.s64 = ctx.r11.s64 + 23456;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// bl 0x8230455c
	ctx.lr = 0x820F625C;
	__imp__VdInitializeEngines(ctx, base);
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,23232
	ctx.r3.s64 = ctx.r11.s64 + 23232;
	// bl 0x823044fc
	ctx.lr = 0x820F626C;
	__imp__ExRegisterTitleTerminateNotification(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,15760
	ctx.r3.s64 = ctx.r11.s64 + 15760;
	// stw r10,16560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16560, ctx.r10.u32);
	// bl 0x8230454c
	ctx.lr = 0x820F6284;
	__imp__VdSetGraphicsInterruptCallback(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_820F629C"))) PPC_WEAK_FUNC(sub_820F629C);
PPC_FUNC_IMPL(__imp__sub_820F629C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F62A0"))) PPC_WEAK_FUNC(sub_820F62A0);
PPC_FUNC_IMPL(__imp__sub_820F62A0) {
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
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// ld r11,22776(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22776);
	// std r11,10752(r31)
	PPC_STORE_U64(ctx.r31.u32 + 10752, ctx.r11.u64);
	// bl 0x822f99d8
	ctx.lr = 0x820F62CC;
	sub_822F99D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r4,-19072
	ctx.r4.s64 = -1249902592;
	// li r3,4800
	ctx.r3.s64 = 4800;
	// stw r11,10760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10760, ctx.r11.u32);
	// stw r10,10764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10764, ctx.r10.u32);
	// bl 0x822f9920
	ctx.lr = 0x820F62E8;
	sub_822F9920(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// stw r3,16576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16576, ctx.r3.u32);
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
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F630C"))) PPC_WEAK_FUNC(sub_820F630C);
PPC_FUNC_IMPL(__imp__sub_820F630C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F6310"))) PPC_WEAK_FUNC(sub_820F6310);
PPC_FUNC_IMPL(__imp__sub_820F6310) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x820f62a0
	ctx.lr = 0x820F6330;
	sub_820F62A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820f6340
	if (!ctx.cr0.eq) goto loc_820F6340;
loc_820F6338:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820f6510
	goto loc_820F6510;
loc_820F6340:
	// addi r3,r31,14792
	ctx.r3.s64 = ctx.r31.s64 + 14792;
	// bl 0x823043cc
	ctx.lr = 0x820F6348;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// addi r3,r31,14820
	ctx.r3.s64 = ctx.r31.s64 + 14820;
	// bl 0x823043cc
	ctx.lr = 0x820F6350;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lbz r11,10814(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10814);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,10814(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10814, ctx.r11.u8);
	// bl 0x820f6220
	ctx.lr = 0x820F6368;
	sub_820F6220(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820f6338
	if (ctx.cr0.eq) goto loc_820F6338;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r31,16564
	ctx.r5.s64 = ctx.r31.s64 + 16564;
	// li r4,10
	ctx.r4.s64 = 10;
	// lwz r11,1488(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1488);
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bl 0x8230450c
	ctx.lr = 0x820F639C;
	__imp__ExGetXConfigSetting(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x820f6338
	if (ctx.cr0.lt) goto loc_820F6338;
	// addi r4,r30,72
	ctx.r4.s64 = ctx.r30.s64 + 72;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f5078
	ctx.lr = 0x820F63B0;
	sub_820F5078(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820f6338
	if (!ctx.cr0.eq) goto loc_820F6338;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82103758
	ctx.lr = 0x820F63C0;
	sub_82103758(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820f6338
	if (ctx.cr0.eq) goto loc_820F6338;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e8e50
	ctx.lr = 0x820F63D0;
	sub_820E8E50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820f6338
	if (ctx.cr0.eq) goto loc_820F6338;
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,21404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21404, ctx.r11.u32);
	// stw r11,21408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21408, ctx.r11.u32);
	// bl 0x82102288
	ctx.lr = 0x820F63EC;
	sub_82102288(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f5e40
	ctx.lr = 0x820F63F8;
	sub_820F5E40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820f6338
	if (ctx.cr0.eq) goto loc_820F6338;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f5be8
	ctx.lr = 0x820F6408;
	sub_820F5BE8(ctx, base);
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822f99b8
	ctx.lr = 0x820F6414;
	sub_822F99B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1404(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1404);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820f6430
	if (ctx.cr0.eq) goto loc_820F6430;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x820f6434
	goto loc_820F6434;
loc_820F6430:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820F6434:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f6468
	if (ctx.cr6.eq) goto loc_820F6468;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// ble cr6,0x820f6458
	if (!ctx.cr6.gt) goto loc_820F6458;
	// addi r10,r31,16568
	ctx.r10.s64 = ctx.r31.s64 + 16568;
	// addi r9,r31,16572
	ctx.r9.s64 = ctx.r31.s64 + 16572;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
loc_820F6458:
	// addi r10,r31,16408
	ctx.r10.s64 = ctx.r31.s64 + 16408;
	// addi r9,r31,21420
	ctx.r9.s64 = ctx.r31.s64 + 21420;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
loc_820F6468:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f4d98
	ctx.lr = 0x820F6470;
	sub_820F4D98(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822f93d8
	ctx.lr = 0x820F6478;
	sub_822F93D8(ctx, base);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,9580(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9580);
	ctx.f13.f64 = double(temp.f32);
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,21432(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 21432, temp.u32);
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfs f0,21436(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 21436, temp.u32);
	// bl 0x820f8c20
	ctx.lr = 0x820F64A4;
	sub_820F8C20(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820faec0
	ctx.lr = 0x820F64B4;
	sub_820FAEC0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f30a0
	ctx.lr = 0x820F64C0;
	sub_820F30A0(ctx, base);
	// lis r30,-32202
	ctx.r30.s64 = -2110390272;
	// lwz r11,13916(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13916);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820f64e4
	if (!ctx.cr6.eq) goto loc_820F64E4;
	// bl 0x8230456c
	ctx.lr = 0x820F64D4;
	__imp__VdIsHSIOTrainingSucceeded(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,13916(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13916, ctx.r11.u32);
	// beq 0x820f64f0
	if (ctx.cr0.eq) goto loc_820F64F0;
loc_820F64E4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-4608
	ctx.r3.s64 = ctx.r11.s64 + -4608;
	// bl 0x820f5488
	ctx.lr = 0x820F64F0;
	sub_820F5488(ctx, base);
loc_820F64F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fb0e0
	ctx.lr = 0x820F64F8;
	sub_820FB0E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820f650c
	if (!ctx.cr0.eq) goto loc_820F650C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-4680
	ctx.r3.s64 = ctx.r11.s64 + -4680;
	// bl 0x820f5488
	ctx.lr = 0x820F650C;
	sub_820F5488(ctx, base);
loc_820F650C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_820F6510:
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

__attribute__((alias("__imp__sub_820F6528"))) PPC_WEAK_FUNC(sub_820F6528);
PPC_FUNC_IMPL(__imp__sub_820F6528) {
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
	// bl 0x820f62a0
	ctx.lr = 0x820F6540;
	sub_820F62A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820f6574
	if (ctx.cr0.eq) goto loc_820F6574;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f3ee8
	ctx.lr = 0x820F6550;
	sub_820F3EE8(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,21404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21404, ctx.r11.u32);
	// stw r11,21408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21408, ctx.r11.u32);
	// stw r11,14784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14784, ctx.r11.u32);
	// bl 0x82102288
	ctx.lr = 0x820F6568;
	sub_82102288(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f5be8
	ctx.lr = 0x820F6570;
	sub_820F5BE8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_820F6574:
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

__attribute__((alias("__imp__sub_820F6588"))) PPC_WEAK_FUNC(sub_820F6588);
PPC_FUNC_IMPL(__imp__sub_820F6588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x820F6590;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f65a8
	if (ctx.cr6.eq) goto loc_820F65A8;
	// bl 0x820e57b8
	ctx.lr = 0x820F65A8;
	sub_820E57B8(ctx, base);
loc_820F65A8:
	// lbz r11,10812(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10812);
	// lis r28,-20096
	ctx.r28.s64 = -1317011456;
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x820f66f4
	if (!ctx.cr0.eq) goto loc_820F66F4;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f65cc
	if (ctx.cr6.eq) goto loc_820F65CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f5000
	ctx.lr = 0x820F65CC;
	sub_820F5000(ctx, base);
loc_820F65CC:
	// addi r30,r31,21476
	ctx.r30.s64 = ctx.r31.s64 + 21476;
	// li r29,4
	ctx.r29.s64 = 4;
loc_820F65D4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820f65e4
	if (ctx.cr0.eq) goto loc_820F65E4;
	// bl 0x821020f8
	ctx.lr = 0x820F65E4;
	sub_821020F8(ctx, base);
loc_820F65E4:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x820f65d4
	if (!ctx.cr0.eq) goto loc_820F65D4;
	// lwz r3,21492(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21492);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820f6604
	if (ctx.cr0.eq) goto loc_820F6604;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x822f99b8
	ctx.lr = 0x820F6604;
	sub_822F99B8(ctx, base);
loc_820F6604:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fc980
	ctx.lr = 0x820F660C;
	sub_820FC980(ctx, base);
	// lis r30,-32256
	ctx.r30.s64 = -2113929216;
	// lwz r11,1404(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1404);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x820f6638
	if (ctx.cr0.eq) goto loc_820F6638;
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,28
	ctx.r3.s64 = 28;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820F6634;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1404(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1404);
loc_820F6638:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820f6658
	if (ctx.cr0.eq) goto loc_820F6658;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,48
	ctx.r3.s64 = 48;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820F6658;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820F6658:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823044ac
	ctx.lr = 0x820F6660;
	__imp__VdSetSystemCommandBufferGpuIdentifierAddress(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f6080
	ctx.lr = 0x820F6668;
	sub_820F6080(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821038a8
	ctx.lr = 0x820F6670;
	sub_821038A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e8f88
	ctx.lr = 0x820F6678;
	sub_820E8F88(ctx, base);
	// lwz r11,1404(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1404);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820f6694
	if (ctx.cr0.eq) goto loc_820F6694;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x820f6698
	goto loc_820F6698;
loc_820F6694:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_820F6698:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f66bc
	if (ctx.cr6.eq) goto loc_820F66BC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// ble cr6,0x820f66b4
	if (!ctx.cr6.gt) goto loc_820F66B4;
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
loc_820F66B4:
	// stw r30,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r30.u32);
	// stw r30,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r30.u32);
loc_820F66BC:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8230454c
	ctx.lr = 0x820F66C8;
	__imp__VdSetGraphicsInterruptCallback(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f5078
	ctx.lr = 0x820F66D4;
	sub_820F5078(ctx, base);
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,23232
	ctx.r3.s64 = ctx.r11.s64 + 23232;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1488(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1488);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// bl 0x823044fc
	ctx.lr = 0x820F66F0;
	__imp__ExRegisterTitleTerminateNotification(ctx, base);
	// bl 0x823044ec
	ctx.lr = 0x820F66F4;
	__imp__VdShutdownEngines(ctx, base);
loc_820F66F4:
	// lwz r3,16576(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16576);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820f6708
	if (ctx.cr0.eq) goto loc_820F6708;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x822f99b8
	ctx.lr = 0x820F6708;
	sub_822F99B8(ctx, base);
loc_820F6708:
	// lwz r3,21416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21416);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820f6718
	if (ctx.cr0.eq) goto loc_820F6718;
	// bl 0x820f6120
	ctx.lr = 0x820F6718;
	sub_820F6120(ctx, base);
loc_820F6718:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F6720"))) PPC_WEAK_FUNC(sub_820F6720);
PPC_FUNC_IMPL(__imp__sub_820F6720) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r11,r10,28
	ctx.r11.u64 = ctx.r10.u32 & 0xF;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x820f677c
	if (!ctx.cr6.eq) goto loc_820F677C;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r10,r10,23,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x3;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x820f6748
	if (!ctx.cr6.eq) goto loc_820F6748;
	// li r11,18
	ctx.r11.s64 = 18;
	// b 0x820f67a4
	goto loc_820F67A4;
loc_820F6748:
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x820f6758
	if (!ctx.cr6.eq) goto loc_820F6758;
	// li r11,17
	ctx.r11.s64 = 17;
	// b 0x820f67a4
	goto loc_820F67A4;
loc_820F6758:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820f6768
	if (!ctx.cr6.eq) goto loc_820F6768;
	// li r11,20
	ctx.r11.s64 = 20;
	// b 0x820f67a4
	goto loc_820F67A4;
loc_820F6768:
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm. r10,r10,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820f67a4
	if (ctx.cr0.eq) goto loc_820F67A4;
	// li r11,19
	ctx.r11.s64 = 19;
	// b 0x820f67a4
	goto loc_820F67A4;
loc_820F677C:
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x820f67a4
	if (!ctx.cr6.eq) goto loc_820F67A4;
	// rlwinm. r10,r10,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820f67a4
	if (ctx.cr0.eq) goto loc_820F67A4;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// rlwinm r10,r10,0,21,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x600;
	// cmplwi cr6,r10,1024
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1024, ctx.xer);
	// bne cr6,0x820f67a4
	if (!ctx.cr6.eq) goto loc_820F67A4;
	// li r11,16
	ctx.r11.s64 = 16;
loc_820F67A4:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F67AC"))) PPC_WEAK_FUNC(sub_820F67AC);
PPC_FUNC_IMPL(__imp__sub_820F67AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F67B0"))) PPC_WEAK_FUNC(sub_820F67B0);
PPC_FUNC_IMPL(__imp__sub_820F67B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x820F67B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,1488(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1488);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bgt cr6,0x820f6980
	if (ctx.cr6.gt) goto loc_820F6980;
	// lis r12,-32254
	ctx.r12.s64 = -2113798144;
	// addi r12,r12,-4528
	ctx.r12.s64 = ctx.r12.s64 + -4528;
	// lbzx r0,r12,r10
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r10.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32241
	ctx.r12.s64 = -2112946176;
	// addi r12,r12,26632
	ctx.r12.s64 = ctx.r12.s64 + 26632;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_820F6898;
	case 1:
		goto loc_820F68C8;
	case 2:
		goto loc_820F684C;
	case 3:
		goto loc_820F6808;
	case 4:
		goto loc_820F6980;
	case 5:
		goto loc_820F68F4;
	case 6:
		goto loc_820F6920;
	case 7:
		goto loc_820F693C;
	case 8:
		goto loc_820F6958;
	default:
		__builtin_unreachable();
	}
loc_820F6808:
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x820f6980
	if (!ctx.cr0.eq) goto loc_820F6980;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f6830
	if (ctx.cr0.eq) goto loc_820F6830;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r9,5120
	ctx.r9.s64 = 5120;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// divwu r4,r11,r9
	ctx.r4.u32 = ctx.r11.u32 / ctx.r9.u32;
	// clrlwi r3,r10,20
	ctx.r3.u64 = ctx.r10.u32 & 0xFFF;
	// bl 0x820f6fc0
	ctx.lr = 0x820F6830;
	sub_820F6FC0(ctx, base);
loc_820F6830:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f6980
	if (ctx.cr0.eq) goto loc_820F6980;
	// lis r10,-32202
	ctx.r10.s64 = -2110390272;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,13896(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13896, ctx.r11.u32);
	// b 0x820f6980
	goto loc_820F6980;
loc_820F684C:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x820f686c
	if (ctx.cr0.eq) goto loc_820F686C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f686c
	if (ctx.cr6.eq) goto loc_820F686C;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,13
	ctx.r5.s64 = 13;
	// bl 0x820f4768
	ctx.lr = 0x820F686C;
	sub_820F4768(ctx, base);
loc_820F686C:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lis r29,-20096
	ctx.r29.s64 = -1317011456;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rlwinm r3,r11,0,0,19
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r30,r10,0,0,19
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// bl 0x822f99b8
	ctx.lr = 0x820F6888;
	sub_822F99B8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_820F6890:
	// bl 0x822f99b8
	ctx.lr = 0x820F6894;
	sub_822F99B8(ctx, base);
	// b 0x820f6980
	goto loc_820F6980;
loc_820F6898:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x820f68b8
	if (ctx.cr0.eq) goto loc_820F68B8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f68b8
	if (ctx.cr6.eq) goto loc_820F68B8;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,9
	ctx.r5.s64 = 9;
	// bl 0x820f4768
	ctx.lr = 0x820F68B8;
	sub_820F4768(ctx, base);
loc_820F68B8:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// rlwinm r3,r11,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// b 0x820f6890
	goto loc_820F6890;
loc_820F68C8:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x820f68e8
	if (ctx.cr0.eq) goto loc_820F68E8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f68e8
	if (ctx.cr6.eq) goto loc_820F68E8;
	// li r5,11
	ctx.r5.s64 = 11;
loc_820F68E0:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x820f4768
	ctx.lr = 0x820F68E8;
	sub_820F4768(ctx, base);
loc_820F68E8:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// b 0x820f6890
	goto loc_820F6890;
loc_820F68F4:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x820f6914
	if (ctx.cr0.eq) goto loc_820F6914;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f6914
	if (ctx.cr6.eq) goto loc_820F6914;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// bl 0x820f4768
	ctx.lr = 0x820F6914;
	sub_820F4768(ctx, base);
loc_820F6914:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// b 0x820f6890
	goto loc_820F6890;
loc_820F6920:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x820f68e8
	if (ctx.cr0.eq) goto loc_820F68E8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f68e8
	if (ctx.cr6.eq) goto loc_820F68E8;
	// li r5,8
	ctx.r5.s64 = 8;
	// b 0x820f68e0
	goto loc_820F68E0;
loc_820F693C:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x820f68e8
	if (ctx.cr0.eq) goto loc_820F68E8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f68e8
	if (ctx.cr6.eq) goto loc_820F68E8;
	// li r5,17
	ctx.r5.s64 = 17;
	// b 0x820f68e0
	goto loc_820F68E0;
loc_820F6958:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x820f6978
	if (ctx.cr0.eq) goto loc_820F6978;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f6978
	if (ctx.cr6.eq) goto loc_820F6978;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x820f4768
	ctx.lr = 0x820F6978;
	sub_820F4768(ctx, base);
loc_820F6978:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f6d58
	ctx.lr = 0x820F6980;
	sub_820F6D58(ctx, base);
loc_820F6980:
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f99b8
	ctx.lr = 0x820F698C;
	sub_822F99B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F6994"))) PPC_WEAK_FUNC(sub_820F6994);
PPC_FUNC_IMPL(__imp__sub_820F6994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F6998"))) PPC_WEAK_FUNC(sub_820F6998);
PPC_FUNC_IMPL(__imp__sub_820F6998) {
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
loc_820F69B0:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x820f69b0
	if (!ctx.cr0.eq) goto loc_820F69B0;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820f6a04
	if (!ctx.cr6.eq) goto loc_820F6A04;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x820f69f8
	if (!ctx.cr6.eq) goto loc_820F69F8;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f69f8
	if (ctx.cr0.eq) goto loc_820F69F8;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x820f6998
	ctx.lr = 0x820F69F8;
	sub_820F6998(ctx, base);
loc_820F69F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f67b0
	ctx.lr = 0x820F6A00;
	sub_820F67B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_820F6A04:
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

__attribute__((alias("__imp__sub_820F6A18"))) PPC_WEAK_FUNC(sub_820F6A18);
PPC_FUNC_IMPL(__imp__sub_820F6A18) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r9,13364(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13364);
	// beq 0x820f6aa0
	if (ctx.cr0.eq) goto loc_820F6AA0;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r8,r10,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r10,14764(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14764);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x820f6a4c
	if (!ctx.cr0.eq) goto loc_820F6A4C;
	// lwz r10,156(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 156);
	// lwz r9,152(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 152);
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_820F6A4C:
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addi r7,r6,-1
	ctx.r7.s64 = ctx.r6.s64 + -1;
	// subf r8,r8,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r8.s64;
	// addi r9,r9,164
	ctx.r9.s64 = ctx.r9.s64 + 164;
	// andc r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 & ~ctx.r7.u64;
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x820f6a74
	if (!ctx.cr6.lt) goto loc_820F6A74;
loc_820F6A6C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820F6A74:
	// subf r10,r3,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r3.s64;
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r8,56(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// stw r3,14764(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14764, ctx.r3.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// stw r9,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// blr 
	return;
loc_820F6AA0:
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820f6a6c
	if (!ctx.cr6.eq) goto loc_820F6A6C;
	// lwz r10,152(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 152);
	// stw r10,14776(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14776, ctx.r10.u32);
	// lwz r11,156(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 156);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r3,152(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 152);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F6AC4"))) PPC_WEAK_FUNC(sub_820F6AC4);
PPC_FUNC_IMPL(__imp__sub_820F6AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F6AC8"))) PPC_WEAK_FUNC(sub_820F6AC8);
PPC_FUNC_IMPL(__imp__sub_820F6AC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,156(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lis r10,16384
	ctx.r10.s64 = 1073741824;
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r8,r11,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r5,r8,512
	ctx.r5.s64 = ctx.r8.s64 + 512;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r8,r10,3
	ctx.r8.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// rlwinm r10,r5,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x1000;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r4,r7,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r7.s64;
	// subf r3,r6,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r6.s64;
	// b 0x821021c8
	sub_821021C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F6B20"))) PPC_WEAK_FUNC(sub_820F6B20);
PPC_FUNC_IMPL(__imp__sub_820F6B20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F6B24"))) PPC_WEAK_FUNC(sub_820F6B24);
PPC_FUNC_IMPL(__imp__sub_820F6B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F6B28"))) PPC_WEAK_FUNC(sub_820F6B28);
PPC_FUNC_IMPL(__imp__sub_820F6B28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x820F6B30;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,502
	ctx.r4.s64 = 502;
	// lwz r29,13368(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13368);
	// bl 0x820f4118
	ctx.lr = 0x820F6B48;
	sub_820F4118(ctx, base);
	// lbz r11,10813(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10813);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f6b60
	if (ctx.cr0.eq) goto loc_820F6B60;
	// lwz r31,16576(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16576);
	// b 0x820f6bb8
	goto loc_820F6BB8;
loc_820F6B60:
	// rlwinm r11,r31,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 12) & 0xFFF;
	// stw r31,13368(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13368, ctx.r31.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// clrlwi r10,r31,3
	ctx.r10.u64 = ctx.r31.u32 & 0x1FFFFFFF;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addis r3,r11,-16384
	ctx.r3.s64 = ctx.r11.s64 + -1073741824;
	// bne cr6,0x820f6b98
	if (!ctx.cr6.eq) goto loc_820F6B98;
	// lwz r11,13364(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13364);
	// stw r3,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r3.u32);
	// b 0x820f6bb0
	goto loc_820F6BB0;
loc_820F6B98:
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// lwz r11,13372(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13372);
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
loc_820F6BB0:
	// addi r4,r3,2008
	ctx.r4.s64 = ctx.r3.s64 + 2008;
	// bl 0x821021c8
	ctx.lr = 0x820F6BB8;
	sub_821021C8(ctx, base);
loc_820F6BB8:
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r11,r31,2008
	ctx.r11.s64 = ctx.r31.s64 + 2008;
	// stw r3,13372(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13372, ctx.r3.u32);
	// stw r11,13376(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13376, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F6BD0"))) PPC_WEAK_FUNC(sub_820F6BD0);
PPC_FUNC_IMPL(__imp__sub_820F6BD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x820F6BD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,136
	ctx.r4.s64 = 136;
	// lwz r29,13380(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13380);
	// bl 0x820f4118
	ctx.lr = 0x820F6BF0;
	sub_820F4118(ctx, base);
	// lbz r11,10813(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10813);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f6c08
	if (ctx.cr0.eq) goto loc_820F6C08;
	// lwz r31,16576(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16576);
	// b 0x820f6c60
	goto loc_820F6C60;
loc_820F6C08:
	// rlwinm r11,r31,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 12) & 0xFFF;
	// stw r31,13380(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13380, ctx.r31.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// clrlwi r10,r31,3
	ctx.r10.u64 = ctx.r31.u32 & 0x1FFFFFFF;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addis r3,r11,-16384
	ctx.r3.s64 = ctx.r11.s64 + -1073741824;
	// bne cr6,0x820f6c40
	if (!ctx.cr6.eq) goto loc_820F6C40;
	// lwz r11,13364(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13364);
	// stw r3,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r3.u32);
	// b 0x820f6c58
	goto loc_820F6C58;
loc_820F6C40:
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// lwz r11,13384(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13384);
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
loc_820F6C58:
	// addi r4,r3,136
	ctx.r4.s64 = ctx.r3.s64 + 136;
	// bl 0x821021c8
	ctx.lr = 0x820F6C60;
	sub_821021C8(ctx, base);
loc_820F6C60:
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r11,r31,136
	ctx.r11.s64 = ctx.r31.s64 + 136;
	// stw r3,13384(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13384, ctx.r3.u32);
	// stw r11,13388(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13388, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F6C78"))) PPC_WEAK_FUNC(sub_820F6C78);
PPC_FUNC_IMPL(__imp__sub_820F6C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x820F6C80;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r10,1488(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1488);
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bge cr6,0x820f6cb4
	if (!ctx.cr6.lt) goto loc_820F6CB4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_820F6CB4:
	// addi r29,r10,14820
	ctx.r29.s64 = ctx.r10.s64 + 14820;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823043bc
	ctx.lr = 0x820F6CC0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820F6CDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823043ac
	ctx.lr = 0x820F6CE8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F6CF4"))) PPC_WEAK_FUNC(sub_820F6CF4);
PPC_FUNC_IMPL(__imp__sub_820F6CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F6CF8"))) PPC_WEAK_FUNC(sub_820F6CF8);
PPC_FUNC_IMPL(__imp__sub_820F6CF8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,1488(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1488);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r30,r11,14820
	ctx.r30.s64 = ctx.r11.s64 + 14820;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823043bc
	ctx.lr = 0x820F6D28;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820F6D38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823043ac
	ctx.lr = 0x820F6D40;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_820F6D58"))) PPC_WEAK_FUNC(sub_820F6D58);
PPC_FUNC_IMPL(__imp__sub_820F6D58) {
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
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f6d80
	if (!ctx.cr6.eq) goto loc_820F6D80;
	// bl 0x820f6cf8
	ctx.lr = 0x820F6D7C;
	sub_820F6CF8(ctx, base);
	// b 0x820f6d90
	goto loc_820F6D90;
loc_820F6D80:
	// bl 0x820f6ac8
	ctx.lr = 0x820F6D84;
	sub_820F6AC8(ctx, base);
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// bl 0x822f99b8
	ctx.lr = 0x820F6D90;
	sub_822F99B8(ctx, base);
loc_820F6D90:
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

__attribute__((alias("__imp__sub_820F6DA4"))) PPC_WEAK_FUNC(sub_820F6DA4);
PPC_FUNC_IMPL(__imp__sub_820F6DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F6DA8"))) PPC_WEAK_FUNC(sub_820F6DA8);
PPC_FUNC_IMPL(__imp__sub_820F6DA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r7,r3,32
	ctx.r7.s64 = ctx.r3.s64 + 32;
	// addi r6,r3,800
	ctx.r6.s64 = ctx.r3.s64 + 800;
	// rlwinm r11,r10,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x820f6dcc
	if (!ctx.cr6.eq) goto loc_820F6DCC;
loc_820F6DC4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820F6DCC:
	// clrlwi r8,r10,27
	ctx.r8.u64 = ctx.r10.u32 & 0x1F;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,-1
	ctx.r10.s64 = -1;
	// srw r8,r10,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r8.u8 & 0x3F));
	// andc r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// cmplwi cr6,r8,32
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 32, ctx.xer);
	// bne cr6,0x820f6e10
	if (!ctx.cr6.eq) goto loc_820F6E10;
loc_820F6DEC:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x820f6dec
	if (ctx.cr6.eq) goto loc_820F6DEC;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x820f6dc4
	if (ctx.cr6.eq) goto loc_820F6DC4;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// not r8,r9
	ctx.r8.u64 = ~ctx.r9.u64;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
loc_820F6E10:
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// srw r5,r5,r8
	ctx.r5.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r8.u8 & 0x3F));
	// and r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 & ctx.r9.u64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// cmplwi cr6,r9,32
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32, ctx.xer);
	// bne cr6,0x820f6e5c
	if (!ctx.cr6.eq) goto loc_820F6E5C;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// b 0x820f6e38
	goto loc_820F6E38;
loc_820F6E34:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_820F6E38:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820f6e34
	if (ctx.cr6.eq) goto loc_820F6E34;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x820f6e54
	if (!ctx.cr6.eq) goto loc_820F6E54;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x820f6e5c
	goto loc_820F6E5C;
loc_820F6E54:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
loc_820F6E5C:
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subf r10,r7,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r7.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F6E88"))) PPC_WEAK_FUNC(sub_820F6E88);
PPC_FUNC_IMPL(__imp__sub_820F6E88) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r8,r5,27,5,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r10,r4,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// addi r9,r8,8
	ctx.r9.s64 = ctx.r8.s64 + 8;
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r7,r4,27
	ctx.r7.u64 = ctx.r4.u32 & 0x1F;
	// clrlwi r5,r5,27
	ctx.r5.u64 = ctx.r5.u32 & 0x1F;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// beq cr6,0x820f6f38
	if (ctx.cr6.eq) goto loc_820F6F38;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// li r10,-1
	ctx.r10.s64 = -1;
	// bne cr6,0x820f6edc
	if (!ctx.cr6.eq) goto loc_820F6EDC;
	// srw r8,r10,r5
	ctx.r8.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r5.u8 & 0x3F));
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// srw r10,r10,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r7.u8 & 0x3F));
	// andc r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r8.u64;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// b 0x820f6fb8
	goto loc_820F6FB8;
loc_820F6EDC:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// srw r7,r10,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r7.u8 & 0x3F));
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x820f6f28
	if (!ctx.cr6.lt) goto loc_820F6F28;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addic. r9,r9,1
	ctx.xer.ca = ctx.r9.u32 > 4294967294;
	ctx.r9.s64 = ctx.r9.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x820f6f20
	if (ctx.cr0.eq) goto loc_820F6F20;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820F6F14:
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x820f6f14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820F6F14;
loc_820F6F20:
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_820F6F28:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// srw r10,r10,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r5.u8 & 0x3F));
	// orc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ~ctx.r10.u64;
	// b 0x820f6fb8
	goto loc_820F6FB8;
loc_820F6F38:
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// li r10,-1
	ctx.r10.s64 = -1;
	// bne cr6,0x820f6f5c
	if (!ctx.cr6.eq) goto loc_820F6F5C;
	// srw r8,r10,r5
	ctx.r8.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r5.u8 & 0x3F));
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// srw r10,r10,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r7.u8 & 0x3F));
	// andc r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r8.u64;
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// b 0x820f6fb8
	goto loc_820F6FB8;
loc_820F6F5C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// srw r7,r10,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r7.u8 & 0x3F));
	// andc r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 & ~ctx.r7.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x820f6fac
	if (!ctx.cr6.lt) goto loc_820F6FAC;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addic. r9,r9,1
	ctx.xer.ca = ctx.r9.u32 > 4294967294;
	ctx.r9.s64 = ctx.r9.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x820f6fa4
	if (ctx.cr0.eq) goto loc_820F6FA4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820F6F98:
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x820f6f98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820F6F98;
loc_820F6FA4:
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_820F6FAC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// srw r10,r10,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r5.u8 & 0x3F));
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
loc_820F6FB8:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F6FC0"))) PPC_WEAK_FUNC(sub_820F6FC0);
PPC_FUNC_IMPL(__imp__sub_820F6FC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x820F6FC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32202
	ctx.r11.s64 = -2110390272;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r31,13932(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13932);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823043bc
	ctx.lr = 0x820F6FE4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r6,0
	ctx.r6.s64 = 0;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// add r5,r30,r29
	ctx.r5.u64 = ctx.r30.u64 + ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x820f6e88
	ctx.lr = 0x820F7004;
	sub_820F6E88(ctx, base);
	// bl 0x823043ac
	ctx.lr = 0x820F7008;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F7010"))) PPC_WEAK_FUNC(sub_820F7010);
PPC_FUNC_IMPL(__imp__sub_820F7010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98dc
	ctx.lr = 0x820F7018;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32202
	ctx.r11.s64 = -2110390272;
	// li r27,-1
	ctx.r27.s64 = -1;
	// addi r30,r11,13932
	ctx.r30.s64 = ctx.r11.s64 + 13932;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x820f70c8
	if (!ctx.cr0.eq) goto loc_820F70C8;
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// li r3,804
	ctx.r3.s64 = 804;
	// bl 0x822f9920
	ctx.lr = 0x820F7050;
	sub_822F9920(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x820f7060
	if (!ctx.cr0.eq) goto loc_820F7060;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820f717c
	goto loc_820F717C;
loc_820F7060:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823043cc
	ctx.lr = 0x820F7068;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r10,21845
	ctx.r10.s64 = 1431633920;
	// li r11,6144
	ctx.r11.s64 = 6144;
	// ori r10,r10,21845
	ctx.r10.u64 = ctx.r10.u64 | 21845;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r10.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_820F7080:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r9,r29
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x820f70a4
	if (!ctx.cr6.eq) goto loc_820F70A4;
	// stwcx. r31,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r31.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x820f7080
	if (!ctx.cr0.eq) goto loc_820F7080;
	// b 0x820f70ac
	goto loc_820F70AC;
loc_820F70A4:
	// stwcx. r9,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_820F70AC:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f70c8
	if (ctx.cr6.eq) goto loc_820F70C8;
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f99b8
	ctx.lr = 0x820F70C4;
	sub_822F99B8(ctx, base);
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_820F70C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823043bc
	ctx.lr = 0x820F70D0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x820f7160
	if (ctx.cr6.gt) goto loc_820F7160;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// bl 0x820f6da8
	ctx.lr = 0x820F70F4;
	sub_820F6DA8(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f7160
	if (ctx.cr0.eq) goto loc_820F7160;
loc_820F70FC:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x820f7118
	if (ctx.cr6.lt) goto loc_820F7118;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x820f7118
	if (!ctx.cr6.lt) goto loc_820F7118;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_820F7118:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x820f6da8
	ctx.lr = 0x820F712C;
	sub_820F6DA8(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x820f70fc
	if (!ctx.cr0.eq) goto loc_820F70FC;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x820f7160
	if (ctx.cr6.eq) goto loc_820F7160;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r6,1
	ctx.r6.s64 = 1;
	// add r5,r30,r28
	ctx.r5.u64 = ctx.r30.u64 + ctx.r28.u64;
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x820f6e88
	ctx.lr = 0x820F715C;
	sub_820F6E88(ctx, base);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
loc_820F7160:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823043ac
	ctx.lr = 0x820F7168;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// subf r11,r26,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r26.s64;
	// stw r26,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r26.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
loc_820F717C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822e992c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F7184"))) PPC_WEAK_FUNC(sub_820F7184);
PPC_FUNC_IMPL(__imp__sub_820F7184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F7188"))) PPC_WEAK_FUNC(sub_820F7188);
PPC_FUNC_IMPL(__imp__sub_820F7188) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// lhz r9,2(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// rlwinm r10,r11,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// rlwinm r11,r9,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r9,1023
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1023, ctx.xer);
	// ble cr6,0x820f71ac
	if (!ctx.cr6.gt) goto loc_820F71AC;
	// li r11,1023
	ctx.r11.s64 = 1023;
loc_820F71AC:
	// rlwinm r10,r10,1,15,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1FFFE;
	// rlwinm r11,r11,1,15,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1FFFE;
	// lhzx r9,r10,r5
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r5.u32);
	// rotlwi r9,r9,6
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 6);
	// sth r9,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r9.u16);
	// lhzx r11,r11,r5
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r5.u32);
	// lhzx r10,r10,r5
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r5.u32);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// sth r11,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F71D8"))) PPC_WEAK_FUNC(sub_820F71D8);
PPC_FUNC_IMPL(__imp__sub_820F71D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x820f7234
	if (ctx.cr6.eq) goto loc_820F7234;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfd f0,-4432(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -4432);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x820f7208
	if (ctx.cr6.gt) goto loc_820F7208;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-4436(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4436);
	ctx.f0.f64 = double(temp.f32);
	// b 0x820f724c
	goto loc_820F724C;
loc_820F7208:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-4440(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4440);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fadds f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// lfd f2,-4448(r11)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r11.u32 + -4448);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-4456(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4456);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x822ec208
	ctx.lr = 0x820F722C;
	sub_822EC208(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// b 0x820f7278
	goto loc_820F7278;
loc_820F7234:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfd f0,-4464(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -4464);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x820f7254
	if (ctx.cr6.gt) goto loc_820F7254;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-4472(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4472);
	ctx.f0.f64 = double(temp.f32);
loc_820F724C:
	// fmuls f1,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// b 0x820f7278
	goto loc_820F7278;
loc_820F7254:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfd f2,-4480(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r11.u32 + -4480);
	// bl 0x822ec208
	ctx.lr = 0x820F7260;
	sub_822EC208(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lfs f0,-4484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4484);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,-4440(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4440);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f1,f12,f0,f13
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 - ctx.f13.f64));
loc_820F7278:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F7288"))) PPC_WEAK_FUNC(sub_820F7288);
PPC_FUNC_IMPL(__imp__sub_820F7288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x820f72e4
	if (ctx.cr6.eq) goto loc_820F72E4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfd f0,-4368(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -4368);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x820f72b8
	if (!ctx.cr6.lt) goto loc_820F72B8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-4372(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4372);
	ctx.f0.f64 = double(temp.f32);
	// b 0x820f72fc
	goto loc_820F72FC;
loc_820F72B8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-4376(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4376);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fadds f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// lfd f2,-4384(r11)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r11.u32 + -4384);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-4392(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4392);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x822ec208
	ctx.lr = 0x820F72DC;
	sub_822EC208(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// b 0x820f7328
	goto loc_820F7328;
loc_820F72E4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfd f0,-4400(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -4400);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x820f7304
	if (!ctx.cr6.lt) goto loc_820F7304;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-4408(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4408);
	ctx.f0.f64 = double(temp.f32);
loc_820F72FC:
	// fmuls f1,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// b 0x820f7328
	goto loc_820F7328;
loc_820F7304:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfd f2,-4416(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r11.u32 + -4416);
	// bl 0x822ec208
	ctx.lr = 0x820F7310;
	sub_822EC208(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lfs f0,-4424(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4424);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,-4376(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4376);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f1,f12,f0,f13
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 - ctx.f13.f64));
loc_820F7328:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F7338"))) PPC_WEAK_FUNC(sub_820F7338);
PPC_FUNC_IMPL(__imp__sub_820F7338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x820F7340;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x822e9f38
	ctx.lr = 0x820F7348;
	__savefpr_28(ctx, base);
	// stwu r1,-2240(r1)
	ea = -2240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x8230457c
	ctx.lr = 0x820F7364;
	__imp__VdGetCurrentDisplayGamma(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r31,0
	ctx.r31.s64 = 0;
	// lfd f29,-4344(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r8.u32 + -4344);
	// addi r30,r1,112
	ctx.r30.s64 = ctx.r1.s64 + 112;
	// lfd f30,-4352(r9)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r9.u32 + -4352);
	// lfs f31,9580(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9580);
	ctx.f31.f64 = double(temp.f32);
	// lfs f28,-4360(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4360);
	ctx.f28.f64 = double(temp.f32);
loc_820F738C:
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f0,f28
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// bne cr6,0x820f73b4
	if (!ctx.cr6.eq) goto loc_820F73B4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x820f71d8
	ctx.lr = 0x820F73B4;
	sub_820F71D8(ctx, base);
loc_820F73B4:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x820f7400
	if (ctx.cr6.eq) goto loc_820F7400;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x820f73f4
	if (ctx.cr6.eq) goto loc_820F73F4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x820f73f4
	if (!ctx.cr6.eq) goto loc_820F73F4;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x820f73e0
	if (ctx.cr6.eq) goto loc_820F73E0;
	// lfs f2,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// b 0x820f73e8
	goto loc_820F73E8;
loc_820F73E0:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f2,f31,f0
	ctx.f2.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
loc_820F73E8:
	// bl 0x822ec208
	ctx.lr = 0x820F73EC;
	sub_822EC208(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// b 0x820f7408
	goto loc_820F7408;
loc_820F73F4:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x820f7288
	ctx.lr = 0x820F73FC;
	sub_820F7288(ctx, base);
	// b 0x820f7408
	goto loc_820F7408;
loc_820F7400:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x820f71d8
	ctx.lr = 0x820F7408;
	sub_820F71D8(ctx, base);
loc_820F7408:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x820f7418
	if (ctx.cr6.eq) goto loc_820F7418;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820f71d8
	ctx.lr = 0x820F7418;
	sub_820F71D8(ctx, base);
loc_820F7418:
	// fmadd f0,f1,f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64 * ctx.f30.f64 + ctx.f29.f64;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x820f743c
	if (!ctx.cr6.lt) goto loc_820F743C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820f7448
	goto loc_820F7448;
loc_820F743C:
	// cmpwi cr6,r11,1023
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1023, ctx.xer);
	// ble cr6,0x820f7448
	if (!ctx.cr6.gt) goto loc_820F7448;
	// li r11,1023
	ctx.r11.s64 = 1023;
loc_820F7448:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// cmpwi cr6,r31,1024
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1024, ctx.xer);
	// blt cr6,0x820f738c
	if (ctx.cr6.lt) goto loc_820F738C;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// addi r11,r29,512
	ctx.r11.s64 = ctx.r29.s64 + 512;
	// subf r8,r29,r28
	ctx.r8.s64 = ctx.r28.s64 - ctx.r29.s64;
	// li r9,256
	ctx.r9.s64 = 256;
loc_820F746C:
	// lhz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// rlwinm r7,r7,27,5,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x7FFFFFE;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lhzx r7,r7,r6
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r6.u32);
	// rotlwi r7,r7,6
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 6);
	// sth r7,-512(r11)
	PPC_STORE_U16(ctx.r11.u32 + -512, ctx.r7.u16);
	// lhzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r7,r7,27,5,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x7FFFFFE;
	// lhzx r7,r7,r5
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r5.u32);
	// rotlwi r7,r7,6
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 6);
	// sth r7,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// lhz r7,1024(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 1024);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r7,r7,27,5,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x7FFFFFE;
	// lhzx r7,r7,r4
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r4.u32);
	// rotlwi r7,r7,6
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 6);
	// sth r7,512(r11)
	PPC_STORE_U16(ctx.r11.u32 + 512, ctx.r7.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bne 0x820f746c
	if (!ctx.cr0.eq) goto loc_820F746C;
	// addi r1,r1,2240
	ctx.r1.s64 = ctx.r1.s64 + 2240;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x822e9f84
	ctx.lr = 0x820F74D0;
	__restfpr_28(ctx, base);
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F74D4"))) PPC_WEAK_FUNC(sub_820F74D4);
PPC_FUNC_IMPL(__imp__sub_820F74D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F74D8"))) PPC_WEAK_FUNC(sub_820F74D8);
PPC_FUNC_IMPL(__imp__sub_820F74D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x820F74E0;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x822e9f38
	ctx.lr = 0x820F74E8;
	__savefpr_28(ctx, base);
	// stwu r1,-2240(r1)
	ea = -2240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x8230457c
	ctx.lr = 0x820F7504;
	__imp__VdGetCurrentDisplayGamma(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r31,0
	ctx.r31.s64 = 0;
	// lfd f29,-4344(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r8.u32 + -4344);
	// addi r30,r1,112
	ctx.r30.s64 = ctx.r1.s64 + 112;
	// lfd f30,-4352(r9)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r9.u32 + -4352);
	// lfs f31,9580(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9580);
	ctx.f31.f64 = double(temp.f32);
	// lfs f28,-4360(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4360);
	ctx.f28.f64 = double(temp.f32);
loc_820F752C:
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f0,f28
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// bne cr6,0x820f7554
	if (!ctx.cr6.eq) goto loc_820F7554;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x820f71d8
	ctx.lr = 0x820F7554;
	sub_820F71D8(ctx, base);
loc_820F7554:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x820f75a0
	if (ctx.cr6.eq) goto loc_820F75A0;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x820f7594
	if (ctx.cr6.eq) goto loc_820F7594;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x820f7594
	if (!ctx.cr6.eq) goto loc_820F7594;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x820f7580
	if (ctx.cr6.eq) goto loc_820F7580;
	// lfs f2,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// b 0x820f7588
	goto loc_820F7588;
loc_820F7580:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f2,f31,f0
	ctx.f2.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
loc_820F7588:
	// bl 0x822ec208
	ctx.lr = 0x820F758C;
	sub_822EC208(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// b 0x820f75a8
	goto loc_820F75A8;
loc_820F7594:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x820f7288
	ctx.lr = 0x820F759C;
	sub_820F7288(ctx, base);
	// b 0x820f75a8
	goto loc_820F75A8;
loc_820F75A0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x820f71d8
	ctx.lr = 0x820F75A8;
	sub_820F71D8(ctx, base);
loc_820F75A8:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x820f75b8
	if (ctx.cr6.eq) goto loc_820F75B8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820f71d8
	ctx.lr = 0x820F75B8;
	sub_820F71D8(ctx, base);
loc_820F75B8:
	// fmadd f0,f1,f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64 * ctx.f30.f64 + ctx.f29.f64;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x820f75dc
	if (!ctx.cr6.lt) goto loc_820F75DC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820f75e8
	goto loc_820F75E8;
loc_820F75DC:
	// cmpwi cr6,r11,1023
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1023, ctx.xer);
	// ble cr6,0x820f75e8
	if (!ctx.cr6.gt) goto loc_820F75E8;
	// li r11,1023
	ctx.r11.s64 = 1023;
loc_820F75E8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// cmpwi cr6,r31,1024
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1024, ctx.xer);
	// blt cr6,0x820f752c
	if (ctx.cr6.lt) goto loc_820F752C;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r8,r29,512
	ctx.r8.s64 = ctx.r29.s64 + 512;
	// subf r31,r29,r28
	ctx.r31.s64 = ctx.r28.s64 - ctx.r29.s64;
	// li r6,128
	ctx.r6.s64 = 128;
loc_820F760C:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// addi r3,r8,-512
	ctx.r3.s64 = ctx.r8.s64 + -512;
	// bl 0x820f7188
	ctx.lr = 0x820F761C;
	sub_820F7188(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// add r4,r31,r8
	ctx.r4.u64 = ctx.r31.u64 + ctx.r8.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x820f7188
	ctx.lr = 0x820F762C;
	sub_820F7188(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r7,1024
	ctx.r4.s64 = ctx.r7.s64 + 1024;
	// addi r3,r8,512
	ctx.r3.s64 = ctx.r8.s64 + 512;
	// bl 0x820f7188
	ctx.lr = 0x820F763C;
	sub_820F7188(ctx, base);
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x820f760c
	if (!ctx.cr0.eq) goto loc_820F760C;
	// addi r1,r1,2240
	ctx.r1.s64 = ctx.r1.s64 + 2240;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x822e9f84
	ctx.lr = 0x820F7658;
	__restfpr_28(ctx, base);
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F765C"))) PPC_WEAK_FUNC(sub_820F765C);
PPC_FUNC_IMPL(__imp__sub_820F765C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F7660"))) PPC_WEAK_FUNC(sub_820F7660);
PPC_FUNC_IMPL(__imp__sub_820F7660) {
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
	// li r4,2309
	ctx.r4.s64 = 2309;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x820f4f98
	ctx.lr = 0x820F7684;
	sub_820F4F98(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r8,r11,6433
	ctx.r8.u64 = ctx.r11.u64 | 6433;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6439
	ctx.r6.s64 = 6439;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// addi r11,r31,1024
	ctx.r11.s64 = ctx.r31.s64 + 1024;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_820F76BC:
	// lhz r8,-1024(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + -1024);
	// li r6,6437
	ctx.r6.s64 = 6437;
	// lhz r7,-512(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + -512);
	// lis r4,-16379
	ctx.r4.s64 = -1073414144;
	// lhz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// li r3,6434
	ctx.r3.s64 = 6434;
	// rlwimi r7,r8,10,6,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 10) & 0x3FF0000) | (ctx.r7.u64 & 0xFFFFFFFFFC00FFFF);
	// rlwinm r8,r5,26,6,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 26) & 0x3FFFFFF;
	// rlwinm r7,r7,4,2,21
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0x3FFFFC00;
	// stwu r6,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r10.u32 = ea;
	// ori r4,r4,17664
	ctx.r4.u64 = ctx.r4.u64 | 17664;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// li r7,7
	ctx.r7.s64 = 7;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// cmplwi cr6,r9,256
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 256, ctx.xer);
	// stwu r4,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r10.u32 = ea;
	// stwu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// stwu r6,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r10.u32 = ea;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// stwu r5,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r10.u32 = ea;
	// stwu r3,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// blt cr6,0x820f76bc
	if (ctx.cr6.lt) goto loc_820F76BC;
	// stw r10,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_820F7740"))) PPC_WEAK_FUNC(sub_820F7740);
PPC_FUNC_IMPL(__imp__sub_820F7740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x820F7748;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,1413
	ctx.r4.s64 = 1413;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x820f4f98
	ctx.lr = 0x820F775C;
	sub_820F4F98(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r8,r11,6433
	ctx.r8.u64 = ctx.r11.u64 | 6433;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6439
	ctx.r6.s64 = 6439;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// addi r11,r31,514
	ctx.r11.s64 = ctx.r31.s64 + 514;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stwu r5,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r10.u32 = ea;
loc_820F7794:
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lis r7,-16379
	ctx.r7.s64 = -1073414144;
	// ori r8,r8,39204
	ctx.r8.u64 = ctx.r8.u64 | 39204;
	// ori r7,r7,17664
	ctx.r7.u64 = ctx.r7.u64 | 17664;
	// li r6,7
	ctx.r6.s64 = 7;
	// li r5,6436
	ctx.r5.s64 = 6436;
	// li r4,0
	ctx.r4.s64 = 0;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lhz r8,-512(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + -512);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lhz r31,-514(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + -514);
	// rotlwi r8,r8,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// cmplwi cr6,r9,128
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 128, ctx.xer);
	// or r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 | ctx.r31.u64;
	// li r31,6434
	ctx.r31.s64 = 6434;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r29,-2(r11)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r11.u32 + -2);
	// rotlwi r8,r8,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// or r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 | ctx.r29.u64;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// lhz r8,512(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 512);
	// lhz r29,510(r11)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r11.u32 + 510);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rotlwi r8,r8,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// or r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 | ctx.r29.u64;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// stwu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// stwu r6,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r10.u32 = ea;
	// stwu r5,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r10.u32 = ea;
	// stwu r4,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r10.u32 = ea;
	// stwu r3,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// stwu r31,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r10.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// blt cr6,0x820f7794
	if (ctx.cr6.lt) goto loc_820F7794;
	// stw r10,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F7830"))) PPC_WEAK_FUNC(sub_820F7830);
PPC_FUNC_IMPL(__imp__sub_820F7830) {
	PPC_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,1024
	ctx.r11.s64 = ctx.r3.s64 + 1024;
loc_820F7838:
	// li r9,255
	ctx.r9.s64 = 255;
	// lis r8,3
	ctx.r8.s64 = 196608;
	// divwu r9,r10,r9
	ctx.r9.u32 = ctx.r10.u32 / ctx.r9.u32;
	// ori r8,r8,65280
	ctx.r8.u64 = ctx.r8.u64 | 65280;
	// rlwinm r9,r9,6,10,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0x3FFFC0;
	// addi r10,r10,1023
	ctx.r10.s64 = ctx.r10.s64 + 1023;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// sth r9,-1024(r11)
	PPC_STORE_U16(ctx.r11.u32 + -1024, ctx.r9.u16);
	// sth r9,-512(r11)
	PPC_STORE_U16(ctx.r11.u32 + -512, ctx.r9.u16);
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// blt cr6,0x820f7838
	if (ctx.cr6.lt) goto loc_820F7838;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x820f7338
	sub_820F7338(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F7880"))) PPC_WEAK_FUNC(sub_820F7880);
PPC_FUNC_IMPL(__imp__sub_820F7880) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F7884"))) PPC_WEAK_FUNC(sub_820F7884);
PPC_FUNC_IMPL(__imp__sub_820F7884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F7888"))) PPC_WEAK_FUNC(sub_820F7888);
PPC_FUNC_IMPL(__imp__sub_820F7888) {
	PPC_FUNC_PROLOGUE();
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r3,512
	ctx.r11.s64 = ctx.r3.s64 + 512;
	// li r7,127
	ctx.r7.s64 = 127;
loc_820F7894:
	// divwu r10,r9,r7
	ctx.r10.u32 = ctx.r9.u32 / ctx.r7.u32;
	// addis r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 65536;
	// lis r8,127
	ctx.r8.s64 = 8323072;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// ori r6,r8,65408
	ctx.r6.u64 = ctx.r8.u64 | 65408;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// divwu r8,r9,r7
	ctx.r8.u32 = ctx.r9.u32 / ctx.r7.u32;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// subf r8,r10,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r10.s64;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// sth r10,-512(r11)
	PPC_STORE_U16(ctx.r11.u32 + -512, ctx.r10.u16);
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// sth r10,512(r11)
	PPC_STORE_U16(ctx.r11.u32 + 512, ctx.r10.u16);
	// sth r8,-510(r11)
	PPC_STORE_U16(ctx.r11.u32 + -510, ctx.r8.u16);
	// sth r8,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// sth r8,514(r11)
	PPC_STORE_U16(ctx.r11.u32 + 514, ctx.r8.u16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// blt cr6,0x820f7894
	if (ctx.cr6.lt) goto loc_820F7894;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x820f74d8
	sub_820F74D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F78F0"))) PPC_WEAK_FUNC(sub_820F78F0);
PPC_FUNC_IMPL(__imp__sub_820F78F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F78F4"))) PPC_WEAK_FUNC(sub_820F78F4);
PPC_FUNC_IMPL(__imp__sub_820F78F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F78F8"))) PPC_WEAK_FUNC(sub_820F78F8);
PPC_FUNC_IMPL(__imp__sub_820F78F8) {
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
	// li r9,0
	ctx.r9.s64 = 0;
	// bne cr6,0x820f79fc
	if (!ctx.cr6.eq) goto loc_820F79FC;
	// lbz r10,10812(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10812);
	// stw r9,12580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12580, ctx.r9.u32);
	// rlwinm. r11,r10,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x820f79e8
	if (!ctx.cr0.eq) goto loc_820F79E8;
	// rlwinm. r11,r10,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x820f79e8
	if (!ctx.cr0.eq) goto loc_820F79E8;
	// lbz r11,12051(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12051);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820f79e8
	if (!ctx.cr0.eq) goto loc_820F79E8;
	// rlwinm. r11,r10,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f794c
	if (ctx.cr0.eq) goto loc_820F794C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x820f79dc
	goto loc_820F79DC;
loc_820F794C:
	// rlwinm. r11,r10,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f79d4
	if (ctx.cr0.eq) goto loc_820F79D4;
	// lwz r11,12304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12304);
	// lwz r8,12592(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12592);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820f796c
	if (ctx.cr6.eq) goto loc_820F796C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f79d4
	if (!ctx.cr6.eq) goto loc_820F79D4;
loc_820F796C:
	// lwz r11,12308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12308);
	// lwz r8,12596(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12596);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820f7984
	if (ctx.cr6.eq) goto loc_820F7984;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f79d4
	if (!ctx.cr6.eq) goto loc_820F79D4;
loc_820F7984:
	// lwz r11,12312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12312);
	// lwz r8,12600(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12600);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820f799c
	if (ctx.cr6.eq) goto loc_820F799C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f79d4
	if (!ctx.cr6.eq) goto loc_820F79D4;
loc_820F799C:
	// lwz r11,12316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12316);
	// lwz r8,12604(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12604);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820f79b4
	if (ctx.cr6.eq) goto loc_820F79B4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f79d4
	if (!ctx.cr6.eq) goto loc_820F79D4;
loc_820F79B4:
	// lwz r11,12320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12320);
	// lwz r8,12608(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12608);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820f79cc
	if (ctx.cr6.eq) goto loc_820F79CC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f79d4
	if (!ctx.cr6.eq) goto loc_820F79D4;
loc_820F79CC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x820f79d8
	goto loc_820F79D8;
loc_820F79D4:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_820F79D8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_820F79DC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x820f79ec
	if (!ctx.cr0.eq) goto loc_820F79EC;
loc_820F79E8:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_820F79EC:
	// li r8,-1
	ctx.r8.s64 = -1;
	// rlwimi r11,r10,0,24,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFE) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF01);
	// stw r8,12572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12572, ctx.r8.u32);
	// b 0x820f7a10
	goto loc_820F7A10;
loc_820F79FC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r4,12572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12572, ctx.r4.u32);
	// stw r11,12580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12580, ctx.r11.u32);
	// lbz r11,10812(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10812);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
loc_820F7A10:
	// stb r11,10812(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10812, ctx.r11.u8);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r9,12576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12576, ctx.r9.u32);
	// stw r4,10804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10804, ctx.r4.u32);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// stw r9,10808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10808, ctx.r9.u32);
	// ble cr6,0x820f7a38
	if (!ctx.cr6.gt) goto loc_820F7A38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f4d98
	ctx.lr = 0x820F7A38;
	sub_820F4D98(ctx, base);
loc_820F7A38:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r11,r11,24576
	ctx.r11.u64 = ctx.r11.u64 | 24576;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lwz r11,12572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12572);
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_820F7A64"))) PPC_WEAK_FUNC(sub_820F7A64);
PPC_FUNC_IMPL(__imp__sub_820F7A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F7A68"))) PPC_WEAK_FUNC(sub_820F7A68);
PPC_FUNC_IMPL(__imp__sub_820F7A68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmpldi cr6,r31,0
	ctx.cr6.compare<uint64_t>(ctx.r31.u64, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne cr6,0x820f7a9c
	if (!ctx.cr6.eq) goto loc_820F7A9C;
	// lfs f1,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// b 0x820f7abc
	goto loc_820F7ABC;
loc_820F7A9C:
	// bl 0x822eb360
	ctx.lr = 0x820F7AA0;
	sub_822EB360(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfd f0,-4336(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -4336);
	// fmul f31,f1,f0
	ctx.f31.f64 = ctx.f1.f64 * ctx.f0.f64;
	// bl 0x822eb360
	ctx.lr = 0x820F7AB4;
	sub_822EB360(ctx, base);
	// fdiv f0,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64 / ctx.f1.f64;
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
loc_820F7ABC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F7AD4"))) PPC_WEAK_FUNC(sub_820F7AD4);
PPC_FUNC_IMPL(__imp__sub_820F7AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F7AD8"))) PPC_WEAK_FUNC(sub_820F7AD8);
PPC_FUNC_IMPL(__imp__sub_820F7AD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32202
	ctx.r11.s64 = -2110390272;
	// lwz r10,15280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15280);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820f7af8
	if (!ctx.cr6.eq) goto loc_820F7AF8;
	// li r10,15
	ctx.r10.s64 = 15;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,15280(r11)
	PPC_STORE_U32(ctx.r11.u32 + 15280, ctx.r10.u32);
	// blr 
	return;
loc_820F7AF8:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F7B04"))) PPC_WEAK_FUNC(sub_820F7B04);
PPC_FUNC_IMPL(__imp__sub_820F7B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F7B08"))) PPC_WEAK_FUNC(sub_820F7B08);
PPC_FUNC_IMPL(__imp__sub_820F7B08) {
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
	// lwz r11,21508(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21508);
	// lwz r10,16408(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16408);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x820f7b38
	if (!ctx.cr6.eq) goto loc_820F7B38;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x820f7b58
	goto loc_820F7B58;
loc_820F7B38:
	// lwz r11,21496(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21496);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x820f7b70
	if (ctx.cr6.eq) goto loc_820F7B70;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f7b54
	if (!ctx.cr6.eq) goto loc_820F7B54;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,21496(r30)
	PPC_STORE_U32(ctx.r30.u32 + 21496, ctx.r11.u32);
loc_820F7B54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820F7B58:
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
loc_820F7B70:
	// lwz r10,21504(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21504);
	// lwz r11,21500(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21500);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x820f7b54
	if (ctx.cr6.eq) goto loc_820F7B54;
	// addi r11,r11,5369
	ctx.r11.s64 = ctx.r11.s64 + 5369;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x82100aa8
	ctx.lr = 0x820F7B90;
	sub_82100AA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820f7b54
	if (!ctx.cr0.eq) goto loc_820F7B54;
	// lis r11,-32202
	ctx.r11.s64 = -2110390272;
	// li r5,480
	ctx.r5.s64 = 480;
	// addi r31,r11,14020
	ctx.r31.s64 = ctx.r11.s64 + 14020;
	// addi r4,r31,484
	ctx.r4.s64 = ctx.r31.s64 + 484;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x822e9960
	ctx.lr = 0x820F7BB0;
	sub_822E9960(ctx, base);
	// lwz r11,21500(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21500);
	// addi r4,r31,484
	ctx.r4.s64 = ctx.r31.s64 + 484;
	// addi r11,r11,5369
	ctx.r11.s64 = ctx.r11.s64 + 5369;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzx r3,r10,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// stw r11,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r11.u32);
	// bl 0x82102160
	ctx.lr = 0x820F7BD8;
	sub_82102160(ctx, base);
	// lwz r11,21500(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21500);
	// lwz r10,21492(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21492);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bne cr6,0x820f7c08
	if (!ctx.cr6.eq) goto loc_820F7C08;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820f7c0c
	goto loc_820F7C0C;
loc_820F7C08:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_820F7C0C:
	// lwz r10,16408(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16408);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,21500(r30)
	PPC_STORE_U32(ctx.r30.u32 + 21500, ctx.r11.u32);
	// stw r10,21508(r30)
	PPC_STORE_U32(ctx.r30.u32 + 21508, ctx.r10.u32);
	// b 0x820f7b58
	goto loc_820F7B58;
}

__attribute__((alias("__imp__sub_820F7C20"))) PPC_WEAK_FUNC(sub_820F7C20);
PPC_FUNC_IMPL(__imp__sub_820F7C20) {
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
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplwi cr6,r31,18
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 18, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bgt cr6,0x820f829c
	if (ctx.cr6.gt) goto loc_820F829C;
	// lis r12,-32254
	ctx.r12.s64 = -2113798144;
	// addi r12,r12,-4328
	ctx.r12.s64 = ctx.r12.s64 + -4328;
	// rlwinm r0,r31,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32241
	ctx.r12.s64 = -2112946176;
	// addi r12,r12,31868
	ctx.r12.s64 = ctx.r12.s64 + 31868;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r31.u64) {
	case 0:
		goto loc_820F7C7C;
	case 1:
		goto loc_820F7C9C;
	case 2:
		goto loc_820F7CC8;
	case 3:
		goto loc_820F7CE0;
	case 4:
		goto loc_820F7D44;
	case 5:
		goto loc_820F7D60;
	case 6:
		goto loc_820F7DA0;
	case 7:
		goto loc_820F7E44;
	case 8:
		goto loc_820F7EF0;
	case 9:
		goto loc_820F7F70;
	case 10:
		goto loc_820F8018;
	case 11:
		goto loc_820F8074;
	case 12:
		goto loc_820F8100;
	case 13:
		goto loc_820F8160;
	case 14:
		goto loc_820F81B4;
	case 15:
		goto loc_820F8208;
	case 16:
		goto loc_820F826C;
	case 17:
		goto loc_820F7E34;
	case 18:
		goto loc_820F7E44;
	default:
		__builtin_unreachable();
	}
loc_820F7C7C:
	// lwz r11,21420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21420);
	// lfs f0,21436(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 21436);
	ctx.f0.f64 = double(temp.f32);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x820f82a0
	goto loc_820F82A0;
loc_820F7C9C:
	// lwz r11,21420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21420);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820f829c
	if (ctx.cr0.eq) goto loc_820F829C;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lfs f0,21432(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 21432);
	ctx.f0.f64 = double(temp.f32);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// b 0x820f82a0
	goto loc_820F82A0;
loc_820F7CC8:
	// lwz r11,16408(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16408);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
loc_820F7CD4:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// b 0x820f82a0
	goto loc_820F82A0;
loc_820F7CE0:
	// lwz r11,21456(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21456);
	// lwz r10,21420(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21420);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_820F7CF8:
	// fcfid f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
loc_820F7D0C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,9512(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9512);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f12,9472(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9472);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x820f7d30
	if (!ctx.cr6.lt) goto loc_820F7D30;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x820f7d3c
	goto loc_820F7D3C;
loc_820F7D30:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x820f7d3c
	if (ctx.cr6.gt) goto loc_820F7D3C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_820F7D3C:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// b 0x820f82a0
	goto loc_820F82A0;
loc_820F7D44:
	// lwz r11,21460(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21460);
	// lwz r10,21420(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21420);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x820f7cf8
	goto loc_820F7CF8;
loc_820F7D60:
	// lwz r11,21420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21420);
	// lwz r10,21460(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21460);
	// lwz r9,21456(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21456);
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// b 0x820f7d0c
	goto loc_820F7D0C;
loc_820F7DA0:
	// lwz r11,21464(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21464);
	// lwz r10,10768(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10768);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// clrlwi r9,r9,29
	ctx.r9.u64 = ctx.r9.u32 & 0x7;
	// clrlwi r8,r11,29
	ctx.r8.u64 = ctx.r11.u32 & 0x7;
	// addi r6,r9,16
	ctx.r6.s64 = ctx.r9.s64 + 16;
	// clrlwi r9,r7,29
	ctx.r9.u64 = ctx.r7.u32 & 0x7;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwbrx r31,r7,r10
	ctx.r31.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32));
	// lwbrx r8,r8,r10
	ctx.r8.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32));
	// lwbrx r30,r9,r10
	ctx.r30.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32));
	// cmpldi cr6,r31,0
	ctx.cr6.compare<uint64_t>(ctx.r31.u64, 0, ctx.xer);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// beq cr6,0x820f829c
	if (ctx.cr6.eq) goto loc_820F829C;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// stw r11,21464(r3)
	PPC_STORE_U32(ctx.r3.u32 + 21464, ctx.r11.u32);
	// beq cr6,0x820f829c
	if (ctx.cr6.eq) goto loc_820F829C;
	// cmpldi cr6,r30,0
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, 0, ctx.xer);
	// beq cr6,0x820f829c
	if (ctx.cr6.eq) goto loc_820F829C;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpld cr6,r10,r30
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r30.u64, ctx.xer);
	// rldicr r11,r11,32,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bgt cr6,0x820f7e18
	if (ctx.cr6.gt) goto loc_820F7E18;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_820F7E18:
	// cmpld cr6,r31,r10
	ctx.cr6.compare<uint64_t>(ctx.r31.u64, ctx.r10.u64, ctx.xer);
	// bgt cr6,0x820f7e24
	if (ctx.cr6.gt) goto loc_820F7E24;
	// add r31,r31,r11
	ctx.r31.u64 = ctx.r31.u64 + ctx.r11.u64;
loc_820F7E24:
	// subf r3,r10,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r10.s64;
	// bl 0x822eb360
	ctx.lr = 0x820F7E2C;
	sub_822EB360(ctx, base);
	// subf r3,r30,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r30.s64;
	// b 0x820f7f5c
	goto loc_820F7F5C;
loc_820F7E34:
	// lwz r11,21512(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21512);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// b 0x820f7cd4
	goto loc_820F7CD4;
loc_820F7E44:
	// bl 0x820f7b08
	ctx.lr = 0x820F7E48;
	sub_820F7B08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820f829c
	if (ctx.cr0.eq) goto loc_820F829C;
	// lis r11,-32202
	ctx.r11.s64 = -2110390272;
	// cmpwi cr6,r31,7
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 7, ctx.xer);
	// addi r11,r11,14020
	ctx.r11.s64 = ctx.r11.s64 + 14020;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r8,488(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 488);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lwz r9,484(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	// rldicr r9,r9,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// subf r30,r10,r9
	ctx.r30.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lwz r9,492(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 492);
	// lwz r11,496(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 496);
	// rldicr r9,r9,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bne cr6,0x820f7ec0
	if (!ctx.cr6.eq) goto loc_820F7EC0;
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
loc_820F7EC0:
	// cmpldi cr6,r3,0
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, 0, ctx.xer);
	// beq cr6,0x820f829c
	if (ctx.cr6.eq) goto loc_820F829C;
	// bl 0x822eb360
	ctx.lr = 0x820F7ECC;
	sub_822EB360(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x822eb360
	ctx.lr = 0x820F7ED8;
	sub_822EB360(ctx, base);
	// fdiv f0,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64 / ctx.f1.f64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,9580(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9580);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// b 0x820f7d0c
	goto loc_820F7D0C;
loc_820F7EF0:
	// bl 0x820f7b08
	ctx.lr = 0x820F7EF4;
	sub_820F7B08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820f829c
	if (ctx.cr0.eq) goto loc_820F829C;
	// lis r11,-32202
	ctx.r11.s64 = -2110390272;
	// addi r11,r11,14020
	ctx.r11.s64 = ctx.r11.s64 + 14020;
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// lwz r9,128(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r8,608(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lwz r9,604(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 604);
	// rldicr r9,r9,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// subf r31,r10,r9
	ctx.r31.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmpldi cr6,r31,0
	ctx.cr6.compare<uint64_t>(ctx.r31.u64, 0, ctx.xer);
	// beq cr6,0x820f829c
	if (ctx.cr6.eq) goto loc_820F829C;
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// lwz r9,136(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lwz r9,612(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 612);
	// lwz r11,616(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 616);
loc_820F7F48:
	// rldicr r9,r9,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bl 0x822eb360
	ctx.lr = 0x820F7F58;
	sub_822EB360(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820F7F5C:
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x822eb360
	ctx.lr = 0x820F7F64;
	sub_822EB360(ctx, base);
	// fdiv f0,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64 / ctx.f1.f64;
loc_820F7F68:
	// frsp f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// b 0x820f7d0c
	goto loc_820F7D0C;
loc_820F7F70:
	// bl 0x820f7b08
	ctx.lr = 0x820F7F74;
	sub_820F7B08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820f829c
	if (ctx.cr0.eq) goto loc_820F829C;
	// lis r11,-32202
	ctx.r11.s64 = -2110390272;
	// addi r31,r11,14020
	ctx.r31.s64 = ctx.r11.s64 + 14020;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// rldicr r11,r11,32,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r9,608(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// lwz r10,604(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 604);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmpldi cr6,r3,0
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, 0, ctx.xer);
	// beq cr6,0x820f829c
	if (ctx.cr6.eq) goto loc_820F829C;
	// bl 0x822eb360
	ctx.lr = 0x820F7FB4;
	sub_822EB360(ctx, base);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// rldicr r11,r11,32,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r9,616(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// lwz r10,612(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 612);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
	// bl 0x822eb360
	ctx.lr = 0x820F7FE0;
	sub_822EB360(ctx, base);
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r10,144(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// fsub f30,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64 - ctx.f1.f64;
	// rldicr r11,r11,32,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r9,624(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// lwz r10,620(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
	// bl 0x822eb360
	ctx.lr = 0x820F800C;
	sub_822EB360(ctx, base);
	// fsub f0,f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f30.f64 - ctx.f1.f64;
	// fdiv f0,f0,f31
	ctx.f0.f64 = ctx.f0.f64 / ctx.f31.f64;
	// b 0x820f7f68
	goto loc_820F7F68;
loc_820F8018:
	// bl 0x820f7b08
	ctx.lr = 0x820F801C;
	sub_820F7B08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820f829c
	if (ctx.cr0.eq) goto loc_820F829C;
	// lis r11,-32202
	ctx.r11.s64 = -2110390272;
	// addi r11,r11,14020
	ctx.r11.s64 = ctx.r11.s64 + 14020;
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// lwz r9,128(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r8,608(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lwz r9,604(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 604);
	// rldicr r9,r9,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// subf r31,r10,r9
	ctx.r31.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmpldi cr6,r31,0
	ctx.cr6.compare<uint64_t>(ctx.r31.u64, 0, ctx.xer);
	// beq cr6,0x820f829c
	if (ctx.cr6.eq) goto loc_820F829C;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// lwz r9,144(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lwz r9,620(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	// lwz r11,624(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	// b 0x820f7f48
	goto loc_820F7F48;
loc_820F8074:
	// bl 0x820f7b08
	ctx.lr = 0x820F8078;
	sub_820F7B08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820f829c
	if (ctx.cr0.eq) goto loc_820F829C;
	// lis r11,-32202
	ctx.r11.s64 = -2110390272;
	// addi r11,r11,14020
	ctx.r11.s64 = ctx.r11.s64 + 14020;
	// lwz r10,444(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 444);
	// lwz r9,448(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 448);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r8,928(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 928);
	// lwz r7,488(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 488);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lwz r9,924(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 924);
	// rldicr r9,r9,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lwz r9,484(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	// rldicr r9,r9,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// subf r4,r10,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lwz r10,436(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 436);
	// lwz r9,440(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 440);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lwz r9,916(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 916);
	// lwz r11,920(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 920);
	// rldicr r9,r9,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_820F80F8:
	// bl 0x820f7a68
	ctx.lr = 0x820F80FC;
	sub_820F7A68(ctx, base);
	// b 0x820f82a0
	goto loc_820F82A0;
loc_820F8100:
	// bl 0x820f7b08
	ctx.lr = 0x820F8104;
	sub_820F7B08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820f829c
	if (ctx.cr0.eq) goto loc_820F829C;
	// lis r11,-32202
	ctx.r11.s64 = -2110390272;
	// addi r11,r11,14020
	ctx.r11.s64 = ctx.r11.s64 + 14020;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r8,488(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 488);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lwz r9,484(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	// rldicr r9,r9,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// subf r4,r10,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lwz r10,452(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// lwz r9,456(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 456);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lwz r9,932(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 932);
	// lwz r11,936(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 936);
loc_820F8150:
	// rldicr r9,r9,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// b 0x820f80f8
	goto loc_820F80F8;
loc_820F8160:
	// bl 0x820f7b08
	ctx.lr = 0x820F8164;
	sub_820F7B08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820f829c
	if (ctx.cr0.eq) goto loc_820F829C;
	// lis r11,-32202
	ctx.r11.s64 = -2110390272;
	// addi r11,r11,14020
	ctx.r11.s64 = ctx.r11.s64 + 14020;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r8,488(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 488);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lwz r9,484(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	// rldicr r9,r9,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// subf r4,r10,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lwz r10,236(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// lwz r9,240(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lwz r9,716(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 716);
	// lwz r11,720(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 720);
	// b 0x820f8150
	goto loc_820F8150;
loc_820F81B4:
	// bl 0x820f7b08
	ctx.lr = 0x820F81B8;
	sub_820F7B08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820f829c
	if (ctx.cr0.eq) goto loc_820F829C;
	// lis r11,-32202
	ctx.r11.s64 = -2110390272;
	// addi r11,r11,14020
	ctx.r11.s64 = ctx.r11.s64 + 14020;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r8,488(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 488);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lwz r9,484(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	// rldicr r9,r9,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// subf r4,r10,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// lwz r9,96(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lwz r9,572(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 572);
	// lwz r11,576(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 576);
	// b 0x820f8150
	goto loc_820F8150;
loc_820F8208:
	// bl 0x820f7b08
	ctx.lr = 0x820F820C;
	sub_820F7B08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820f829c
	if (ctx.cr0.eq) goto loc_820F829C;
	// lis r11,-32202
	ctx.r11.s64 = -2110390272;
	// addi r11,r11,14020
	ctx.r11.s64 = ctx.r11.s64 + 14020;
	// lwz r10,460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// lwz r9,464(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 464);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r8,944(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 944);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lwz r9,940(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 940);
loc_820F8234:
	// rldicr r9,r9,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r3,r9,1,62
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// lwz r8,484(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 484);
	// lwz r11,488(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 488);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// subf r4,r10,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r10.s64;
	// b 0x820f80f8
	goto loc_820F80F8;
loc_820F826C:
	// bl 0x820f7b08
	ctx.lr = 0x820F8270;
	sub_820F7B08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820f829c
	if (ctx.cr0.eq) goto loc_820F829C;
	// lis r11,-32202
	ctx.r11.s64 = -2110390272;
	// addi r11,r11,14020
	ctx.r11.s64 = ctx.r11.s64 + 14020;
	// lwz r10,468(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 468);
	// lwz r9,472(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r8,952(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 952);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lwz r9,948(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 948);
	// b 0x820f8234
	goto loc_820F8234;
loc_820F829C:
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
loc_820F82A0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F82C0"))) PPC_WEAK_FUNC(sub_820F82C0);
PPC_FUNC_IMPL(__imp__sub_820F82C0) {
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
	// bl 0x820f5000
	ctx.lr = 0x820F82D8;
	sub_820F5000(ctx, base);
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// lwz r3,23252(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23252);
	// bl 0x82104518
	ctx.lr = 0x820F82E4;
	sub_82104518(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x820f8318
	if (ctx.cr0.eq) goto loc_820F8318;
	// stw r3,21380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21380, ctx.r3.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,10768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10768);
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// lwz r8,40(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r11,r9,512
	ctx.r11.s64 = ctx.r9.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820F8318;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820F8318:
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

__attribute__((alias("__imp__sub_820F832C"))) PPC_WEAK_FUNC(sub_820F832C);
PPC_FUNC_IMPL(__imp__sub_820F832C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F8330"))) PPC_WEAK_FUNC(sub_820F8330);
PPC_FUNC_IMPL(__imp__sub_820F8330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e4
	ctx.lr = 0x820F8338;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32202
	ctx.r11.s64 = -2110390272;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,14984
	ctx.r30.s64 = ctx.r11.s64 + 14984;
	// lis r28,-32256
	ctx.r28.s64 = -2113929216;
	// lis r27,-32256
	ctx.r27.s64 = -2113929216;
	// lwz r11,296(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 296);
	// addi r11,r11,-11
	ctx.r11.s64 = ctx.r11.s64 + -11;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x820f86e4
	if (ctx.cr6.gt) goto loc_820F86E4;
	// lis r12,-32254
	ctx.r12.s64 = -2113798144;
	// addi r12,r12,-4288
	ctx.r12.s64 = ctx.r12.s64 + -4288;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32240
	ctx.r12.s64 = -2112880640;
	// addi r12,r12,-31864
	ctx.r12.s64 = ctx.r12.s64 + -31864;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_820F8488;
	case 1:
		goto loc_820F84B8;
	case 2:
		goto loc_820F8388;
	case 3:
		goto loc_820F83CC;
	case 4:
		goto loc_820F83C0;
	case 5:
		goto loc_820F8510;
	case 6:
		goto loc_820F8584;
	case 7:
		goto loc_820F8614;
	case 8:
		goto loc_820F867C;
	default:
		__builtin_unreachable();
	}
loc_820F8388:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-3988
	ctx.r3.s64 = ctx.r11.s64 + -3988;
loc_820F8390:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x822f9e30
	ctx.lr = 0x820F839C;
	sub_822F9E30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x820f83b0
	if (!ctx.cr0.lt) goto loc_820F83B0;
loc_820F83A4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820F83A8:
	// stw r11,296(r30)
	PPC_STORE_U32(ctx.r30.u32 + 296, ctx.r11.u32);
	// b 0x820f86e4
	goto loc_820F86E4;
loc_820F83B0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820f82c0
	ctx.lr = 0x820F83B8;
	sub_820F82C0(ctx, base);
	// li r11,14
	ctx.r11.s64 = 14;
	// b 0x820f83a8
	goto loc_820F83A8;
loc_820F83C0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-4004
	ctx.r3.s64 = ctx.r11.s64 + -4004;
	// b 0x820f8390
	goto loc_820F8390;
loc_820F83CC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820f5000
	ctx.lr = 0x820F83D4;
	sub_820F5000(ctx, base);
	// lwz r31,21380(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 21380);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x820f8408
	if (ctx.cr0.eq) goto loc_820F8408;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r29,14720
	ctx.r4.s64 = ctx.r29.s64 + 14720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820F83F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82103990
	ctx.lr = 0x820F8400;
	sub_82103990(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,21380(r29)
	PPC_STORE_U32(ctx.r29.u32 + 21380, ctx.r11.u32);
loc_820F8408:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822f9eb8
	ctx.lr = 0x820F8410;
	sub_822F9EB8(ctx, base);
	// lwz r11,1404(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1404);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820f8438
	if (ctx.cr0.eq) goto loc_820F8438;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// li r3,27
	ctx.r3.s64 = 27;
	// addi r4,r10,-4012
	ctx.r4.s64 = ctx.r10.s64 + -4012;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820F8438;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820F8438:
	// lbz r11,10814(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 10814);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// clrlwi r4,r11,31
	ctx.r4.u64 = ctx.r11.u32 & 0x1;
	// bl 0x82100320
	ctx.lr = 0x820F8448;
	sub_82100320(ctx, base);
	// lbz r10,10813(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 10813);
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f83a4
	if (ctx.cr0.eq) goto loc_820F83A4;
	// rlwinm r10,r10,0,24,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFE;
	// lwz r11,13288(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13288);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r10,10813(r29)
	PPC_STORE_U8(ctx.r29.u32 + 10813, ctx.r10.u8);
	// beq 0x820f8474
	if (ctx.cr0.eq) goto loc_820F8474;
	// li r3,0
	ctx.r3.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820F8474;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820F8474:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-4208
	ctx.r3.s64 = ctx.r11.s64 + -4208;
	// bl 0x820f5488
	ctx.lr = 0x820F8480;
	sub_820F5488(ctx, base);
	// twi 31,r0,22
	// b 0x820f83a4
	goto loc_820F83A4;
loc_820F8488:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820f5000
	ctx.lr = 0x820F8490;
	sub_820F5000(ctx, base);
	// addi r3,r30,40
	ctx.r3.s64 = ctx.r30.s64 + 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x822f9e30
	ctx.lr = 0x820F84A0;
	sub_822F9E30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x820f83a4
	if (ctx.cr0.lt) goto loc_820F83A4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820f82c0
	ctx.lr = 0x820F84B0;
	sub_820F82C0(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x820f83a8
	goto loc_820F83A8;
loc_820F84B8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820f5000
	ctx.lr = 0x820F84C0;
	sub_820F5000(ctx, base);
	// lwz r31,21380(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 21380);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x820f84f4
	if (ctx.cr0.eq) goto loc_820F84F4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r29,14720
	ctx.r4.s64 = ctx.r29.s64 + 14720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820F84E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82103990
	ctx.lr = 0x820F84EC;
	sub_82103990(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,21380(r29)
	PPC_STORE_U32(ctx.r29.u32 + 21380, ctx.r11.u32);
loc_820F84F4:
	// lbz r11,10814(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 10814);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// clrlwi r4,r11,31
	ctx.r4.u64 = ctx.r11.u32 & 0x1;
	// bl 0x82100320
	ctx.lr = 0x820F8504;
	sub_82100320(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822f9eb8
	ctx.lr = 0x820F850C;
	sub_822F9EB8(ctx, base);
	// b 0x820f83a4
	goto loc_820F83A4;
loc_820F8510:
	// lwz r11,1492(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1492);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f855c
	if (ctx.cr6.eq) goto loc_820F855C;
	// lwz r11,1492(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1492);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820f853c
	if (ctx.cr0.eq) goto loc_820F853C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820f8570
	if (!ctx.cr0.eq) goto loc_820F8570;
loc_820F853C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820F8540:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f83a4
	if (ctx.cr6.eq) goto loc_820F83A4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-4240
	ctx.r3.s64 = ctx.r11.s64 + -4240;
	// li r11,17
	ctx.r11.s64 = 17;
	// stw r11,296(r30)
	PPC_STORE_U32(ctx.r30.u32 + 296, ctx.r11.u32);
	// b 0x820f860c
	goto loc_820F860C;
loc_820F855C:
	// lwz r11,1404(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1404);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820f853c
	if (ctx.cr0.eq) goto loc_820F853C;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
loc_820F8570:
	// li r3,56
	ctx.r3.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820F8580;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820f8540
	goto loc_820F8540;
loc_820F8584:
	// lwz r11,1492(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1492);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820f85b0
	if (ctx.cr6.eq) goto loc_820F85B0;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820f85d4
	if (ctx.cr0.eq) goto loc_820F85D4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820f85d4
	if (ctx.cr0.eq) goto loc_820F85D4;
	// b 0x820f85c4
	goto loc_820F85C4;
loc_820F85B0:
	// lwz r11,1404(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1404);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820f85d4
	if (ctx.cr0.eq) goto loc_820F85D4;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
loc_820F85C4:
	// li r3,57
	ctx.r3.s64 = 57;
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820F85D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820F85D4:
	// lwz r11,1404(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1404);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,296(r30)
	PPC_STORE_U32(ctx.r30.u32 + 296, ctx.r10.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820f8604
	if (ctx.cr0.eq) goto loc_820F8604;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// li r3,27
	ctx.r3.s64 = 27;
	// addi r4,r10,-4252
	ctx.r4.s64 = ctx.r10.s64 + -4252;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820F8604;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820F8604:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-4276
	ctx.r3.s64 = ctx.r11.s64 + -4276;
loc_820F860C:
	// bl 0x820f5488
	ctx.lr = 0x820F8610;
	sub_820F5488(ctx, base);
	// b 0x820f86e4
	goto loc_820F86E4;
loc_820F8614:
	// lwz r11,1492(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1492);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f8654
	if (ctx.cr6.eq) goto loc_820F8654;
	// lwz r11,1492(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1492);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820f8640
	if (ctx.cr0.eq) goto loc_820F8640;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820f8668
	if (!ctx.cr0.eq) goto loc_820F8668;
loc_820F8640:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820F8644:
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// andi. r11,r11,19
	ctx.r11.u64 = ctx.r11.u64 & 19;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x820f83a8
	goto loc_820F83A8;
loc_820F8654:
	// lwz r11,1404(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1404);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820f8640
	if (ctx.cr0.eq) goto loc_820F8640;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
loc_820F8668:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,61
	ctx.r3.s64 = 61;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820F8678;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820f8644
	goto loc_820F8644;
loc_820F867C:
	// lwz r11,1492(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1492);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f8714
	if (ctx.cr6.eq) goto loc_820F8714;
	// lwz r11,1492(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1492);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820f86a8
	if (ctx.cr0.eq) goto loc_820F86A8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820f8728
	if (!ctx.cr0.eq) goto loc_820F8728;
loc_820F86A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820F86AC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f86e4
	if (ctx.cr6.eq) goto loc_820F86E4;
	// lwz r11,1404(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1404);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,296(r30)
	PPC_STORE_U32(ctx.r30.u32 + 296, ctx.r10.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820f86e4
	if (ctx.cr0.eq) goto loc_820F86E4;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// li r3,27
	ctx.r3.s64 = 27;
	// addi r4,r10,-4252
	ctx.r4.s64 = ctx.r10.s64 + -4252;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820F86E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820F86E4:
	// lwz r11,1492(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1492);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f873c
	if (ctx.cr6.eq) goto loc_820F873C;
	// lwz r11,1492(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1492);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820f8760
	if (ctx.cr0.eq) goto loc_820F8760;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820f8760
	if (ctx.cr0.eq) goto loc_820F8760;
	// b 0x820f8750
	goto loc_820F8750;
loc_820F8714:
	// lwz r11,1404(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1404);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820f86a8
	if (ctx.cr0.eq) goto loc_820F86A8;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
loc_820F8728:
	// li r3,62
	ctx.r3.s64 = 62;
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820F8738;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820f86ac
	goto loc_820F86AC;
loc_820F873C:
	// lwz r11,1404(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1404);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820f8760
	if (ctx.cr0.eq) goto loc_820F8760;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
loc_820F8750:
	// lwz r4,16408(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16408);
	// li r3,46
	ctx.r3.s64 = 46;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820F8760;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820F8760:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9934
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F8768"))) PPC_WEAK_FUNC(sub_820F8768);
PPC_FUNC_IMPL(__imp__sub_820F8768) {
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
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x820f8794
	if (!ctx.cr6.eq) goto loc_820F8794;
	// lis r3,-32038
	ctx.r3.s64 = -2099642368;
	// ori r3,r3,23
	ctx.r3.u64 = ctx.r3.u64 | 23;
	// b 0x820f8a44
	goto loc_820F8A44;
loc_820F8794:
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,107
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 107, ctx.xer);
	// bgt cr6,0x820f8950
	if (ctx.cr6.gt) goto loc_820F8950;
	// beq cr6,0x820f88e4
	if (ctx.cr6.eq) goto loc_820F88E4;
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// beq cr6,0x820f8884
	if (ctx.cr6.eq) goto loc_820F8884;
	// cmpwi cr6,r11,99
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 99, ctx.xer);
	// beq cr6,0x820f884c
	if (ctx.cr6.eq) goto loc_820F884C;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// beq cr6,0x820f8824
	if (ctx.cr6.eq) goto loc_820F8824;
	// cmpwi cr6,r11,102
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 102, ctx.xer);
	// beq cr6,0x820f881c
	if (ctx.cr6.eq) goto loc_820F881C;
	// cmpwi cr6,r11,103
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 103, ctx.xer);
	// bne cr6,0x820f8a40
	if (!ctx.cr6.eq) goto loc_820F8A40;
	// li r10,1
	ctx.r10.s64 = 1;
loc_820F87D4:
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,23248
	ctx.r11.s64 = ctx.r11.s64 + 23248;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lis r11,-32202
	ctx.r11.s64 = -2110390272;
	// addi r11,r11,14984
	ctx.r11.s64 = ctx.r11.s64 + 14984;
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820f880c
	if (!ctx.cr6.eq) goto loc_820F880C;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,-3952
	ctx.r4.s64 = ctx.r10.s64 + -3952;
	// li r10,13
	ctx.r10.s64 = 13;
loc_820F8804:
	// stw r10,296(r11)
	PPC_STORE_U32(ctx.r11.u32 + 296, ctx.r10.u32);
	// b 0x820f8814
	goto loc_820F8814;
loc_820F880C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-3960
	ctx.r4.s64 = ctx.r11.s64 + -3960;
loc_820F8814:
	// bl 0x823044dc
	ctx.lr = 0x820F8818;
	__imp__sprintf(ctx, base);
	// b 0x820f8a40
	goto loc_820F8A40;
loc_820F881C:
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x820f87d4
	goto loc_820F87D4;
loc_820F8824:
	// lis r11,-32202
	ctx.r11.s64 = -2110390272;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,14984
	ctx.r11.s64 = ctx.r11.s64 + 14984;
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820f880c
	if (!ctx.cr6.eq) goto loc_820F880C;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,-3952
	ctx.r4.s64 = ctx.r10.s64 + -3952;
	// li r10,16
	ctx.r10.s64 = 16;
	// b 0x820f8804
	goto loc_820F8804;
loc_820F884C:
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,23248
	ctx.r11.s64 = ctx.r11.s64 + 23248;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lis r11,-32202
	ctx.r11.s64 = -2110390272;
	// addi r11,r11,14984
	ctx.r11.s64 = ctx.r11.s64 + 14984;
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820f880c
	if (!ctx.cr6.eq) goto loc_820F880C;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r10,-3952
	ctx.r4.s64 = ctx.r10.s64 + -3952;
	// li r10,7
	ctx.r10.s64 = 7;
	// b 0x820f8804
	goto loc_820F8804;
loc_820F8884:
	// lis r11,-32202
	ctx.r11.s64 = -2110390272;
	// addi r9,r11,14984
	ctx.r9.s64 = ctx.r11.s64 + 14984;
	// lwz r11,296(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 296);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f88d4
	if (!ctx.cr6.eq) goto loc_820F88D4;
	// lbz r11,5(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x820f88b4
	if (ctx.cr6.lt) goto loc_820F88B4;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// addi r11,r11,-47
	ctx.r11.s64 = ctx.r11.s64 + -47;
	// ble cr6,0x820f88b8
	if (!ctx.cr6.gt) goto loc_820F88B8;
loc_820F88B4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_820F88B8:
	// lis r10,-32207
	ctx.r10.s64 = -2110717952;
	// stw r11,23248(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23248, ctx.r11.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-3952
	ctx.r4.s64 = ctx.r11.s64 + -3952;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,296(r9)
	PPC_STORE_U32(ctx.r9.u32 + 296, ctx.r11.u32);
	// b 0x820f88dc
	goto loc_820F88DC;
loc_820F88D4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-3960
	ctx.r4.s64 = ctx.r11.s64 + -3960;
loc_820F88DC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x820f8814
	goto loc_820F8814;
loc_820F88E4:
	// lis r11,-32202
	ctx.r11.s64 = -2110390272;
	// addi r31,r11,14984
	ctx.r31.s64 = ctx.r11.s64 + 14984;
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f88d4
	if (!ctx.cr6.eq) goto loc_820F88D4;
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,5
	ctx.r3.s64 = ctx.r3.s64 + 5;
	// bl 0x822eca80
	ctx.lr = 0x820F8908;
	sub_822ECA80(ctx, base);
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822eca80
	ctx.lr = 0x820F891C;
	sub_822ECA80(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// li r5,31
	ctx.r5.s64 = 31;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ec708
	ctx.lr = 0x820F8934;
	sub_822EC708(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-3952
	ctx.r4.s64 = ctx.r11.s64 + -3952;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,31(r31)
	PPC_STORE_U8(ctx.r31.u32 + 31, ctx.r11.u8);
	// li r11,18
	ctx.r11.s64 = 18;
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// b 0x820f88dc
	goto loc_820F88DC;
loc_820F8950:
	// cmpwi cr6,r11,109
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 109, ctx.xer);
	// beq cr6,0x820f8a38
	if (ctx.cr6.eq) goto loc_820F8A38;
	// cmpwi cr6,r11,112
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 112, ctx.xer);
	// beq cr6,0x820f89e8
	if (ctx.cr6.eq) goto loc_820F89E8;
	// cmpwi cr6,r11,116
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 116, ctx.xer);
	// beq cr6,0x820f88d4
	if (ctx.cr6.eq) goto loc_820F88D4;
	// cmpwi cr6,r11,120
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 120, ctx.xer);
	// bne cr6,0x820f8a40
	if (!ctx.cr6.eq) goto loc_820F8A40;
	// lis r11,-32202
	ctx.r11.s64 = -2110390272;
	// addi r11,r11,14984
	ctx.r11.s64 = ctx.r11.s64 + 14984;
	// lwz r11,296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// bne cr6,0x820f89dc
	if (!ctx.cr6.eq) goto loc_820F89DC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1492);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820f89b4
	if (ctx.cr6.eq) goto loc_820F89B4;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820f89dc
	if (ctx.cr0.eq) goto loc_820F89DC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820f89dc
	if (ctx.cr0.eq) goto loc_820F89DC;
	// b 0x820f89cc
	goto loc_820F89CC;
loc_820F89B4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1404(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1404);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820f89dc
	if (ctx.cr0.eq) goto loc_820F89DC;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
loc_820F89CC:
	// li r3,59
	ctx.r3.s64 = 59;
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820F89DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820F89DC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-3952
	ctx.r4.s64 = ctx.r11.s64 + -3952;
	// b 0x820f88dc
	goto loc_820F88DC;
loc_820F89E8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1404(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1404);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820f8a14
	if (ctx.cr0.eq) goto loc_820F8A14;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,58
	ctx.r3.s64 = 58;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820F8A10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820f8a18
	goto loc_820F8A18;
loc_820F8A14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820F8A18:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,34464
	ctx.r10.u64 = ctx.r11.u64 | 34464;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// divwu r5,r3,r10
	ctx.r5.u32 = ctx.r3.u32 / ctx.r10.u32;
	// addi r4,r11,-3972
	ctx.r4.s64 = ctx.r11.s64 + -3972;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823044dc
	ctx.lr = 0x820F8A34;
	__imp__sprintf(ctx, base);
	// b 0x820f8a40
	goto loc_820F8A40;
loc_820F8A38:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x820fb108
	ctx.lr = 0x820F8A40;
	sub_820FB108(ctx, base);
loc_820F8A40:
	// lis r3,730
	ctx.r3.s64 = 47841280;
loc_820F8A44:
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

__attribute__((alias("__imp__sub_820F8A5C"))) PPC_WEAK_FUNC(sub_820F8A5C);
PPC_FUNC_IMPL(__imp__sub_820F8A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F8A60"))) PPC_WEAK_FUNC(sub_820F8A60);
PPC_FUNC_IMPL(__imp__sub_820F8A60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x820F8A68;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1488(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1488);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820f8c18
	if (ctx.cr6.eq) goto loc_820F8C18;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f8c18
	if (ctx.cr6.eq) goto loc_820F8C18;
	// ld r11,10752(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 10752);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x820f8c18
	if (ctx.cr6.eq) goto loc_820F8C18;
	// cmplwi cr6,r3,34
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 34, ctx.xer);
	// bgt cr6,0x820f8b3c
	if (ctx.cr6.gt) goto loc_820F8B3C;
	// beq cr6,0x820f8b34
	if (ctx.cr6.eq) goto loc_820F8B34;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x820f8b24
	if (ctx.cr6.lt) goto loc_820F8B24;
	// beq cr6,0x820f8b24
	if (ctx.cr6.eq) goto loc_820F8B24;
	// cmplwi cr6,r3,16
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 16, ctx.xer);
	// beq cr6,0x820f8af8
	if (ctx.cr6.eq) goto loc_820F8AF8;
	// cmplwi cr6,r3,17
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 17, ctx.xer);
	// bne cr6,0x820f8c18
	if (!ctx.cr6.eq) goto loc_820F8C18;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r11,-32202
	ctx.r11.s64 = -2110390272;
	// cmplwi cr6,r4,6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 6, ctx.xer);
	// lwz r10,15284(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15284);
	// slw r8,r9,r4
	ctx.r8.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r4.u8 & 0x3F));
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stw r10,15284(r11)
	PPC_STORE_U32(ctx.r11.u32 + 15284, ctx.r10.u32);
	// bne cr6,0x820f8c18
	if (!ctx.cr6.eq) goto loc_820F8C18;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,21472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21472, ctx.r9.u32);
	// stw r11,21464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21464, ctx.r11.u32);
	// stw r11,21468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21468, ctx.r11.u32);
	// b 0x820f8c18
	goto loc_820F8C18;
loc_820F8AF8:
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r4,6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 6, ctx.xer);
	// slw r9,r11,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r4.u8 & 0x3F));
	// lis r11,-32202
	ctx.r11.s64 = -2110390272;
	// lwz r10,15284(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15284);
	// andc r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// stw r10,15284(r11)
	PPC_STORE_U32(ctx.r11.u32 + 15284, ctx.r10.u32);
	// bne cr6,0x820f8c18
	if (!ctx.cr6.eq) goto loc_820F8C18;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820F8B1C:
	// stw r11,21472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21472, ctx.r11.u32);
	// b 0x820f8c18
	goto loc_820F8C18;
loc_820F8B24:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32202
	ctx.r10.s64 = -2110390272;
	// stw r11,15284(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15284, ctx.r11.u32);
	// b 0x820f8b1c
	goto loc_820F8B1C;
loc_820F8B34:
	// stw r4,21520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21520, ctx.r4.u32);
	// b 0x820f8c18
	goto loc_820F8C18;
loc_820F8B3C:
	// cmplwi cr6,r3,224
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 224, ctx.xer);
	// beq cr6,0x820f8be0
	if (ctx.cr6.eq) goto loc_820F8BE0;
	// cmplwi cr6,r3,225
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 225, ctx.xer);
	// beq cr6,0x820f8be0
	if (ctx.cr6.eq) goto loc_820F8BE0;
	// cmplwi cr6,r3,226
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 226, ctx.xer);
	// beq cr6,0x820f8be0
	if (ctx.cr6.eq) goto loc_820F8BE0;
	// cmplwi cr6,r3,255
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 255, ctx.xer);
	// bne cr6,0x820f8c18
	if (!ctx.cr6.eq) goto loc_820F8C18;
	// lis r28,-32202
	ctx.r28.s64 = -2110390272;
	// lwz r11,15284(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 15284);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f8b9c
	if (ctx.cr0.eq) goto loc_820F8B9C;
	// lwz r11,21420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21420);
	// lfs f0,21436(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 21436);
	ctx.f0.f64 = double(temp.f32);
	// lis r3,2
	ctx.r3.s64 = 131072;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,10052(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10052);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x822f9f18
	ctx.lr = 0x820F8B9C;
	sub_822F9F18(ctx, base);
loc_820F8B9C:
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// li r29,17
	ctx.r29.s64 = 17;
	// addi r11,r11,23256
	ctx.r11.s64 = ctx.r11.s64 + 23256;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
loc_820F8BAC:
	// lwz r11,-8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// lwz r10,15284(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 15284);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f8bd0
	if (ctx.cr0.eq) goto loc_820F8BD0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x820f7c20
	ctx.lr = 0x820F8BC8;
	sub_820F7C20(ctx, base);
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// bl 0x822f9f18
	ctx.lr = 0x820F8BD0;
	sub_822F9F18(ctx, base);
loc_820F8BD0:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x820f8bac
	if (!ctx.cr0.eq) goto loc_820F8BAC;
	// b 0x820f8c18
	goto loc_820F8C18;
loc_820F8BE0:
	// lwz r11,21380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21380);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f8c18
	if (ctx.cr6.eq) goto loc_820F8C18;
	// bl 0x822f99d8
	ctx.lr = 0x820F8BF0;
	sub_822F99D8(ctx, base);
	// lwz r11,10760(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10760);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x820f8c18
	if (!ctx.cr6.eq) goto loc_820F8C18;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x820f8c14
	if (!ctx.cr6.gt) goto loc_820F8C14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f4d98
	ctx.lr = 0x820F8C14;
	sub_820F4D98(ctx, base);
loc_820F8C14:
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
loc_820F8C18:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F8C20"))) PPC_WEAK_FUNC(sub_820F8C20);
PPC_FUNC_IMPL(__imp__sub_820F8C20) {
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
	// lis r31,-32256
	ctx.r31.s64 = -2113929216;
	// lis r30,-32256
	ctx.r30.s64 = -2113929216;
	// lwz r11,1492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820f8c68
	if (ctx.cr6.eq) goto loc_820F8C68;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x820f8c94
	if (ctx.cr0.eq) goto loc_820F8C94;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x820f8c94
	if (ctx.cr0.eq) goto loc_820F8C94;
	// b 0x820f8c7c
	goto loc_820F8C7C;
loc_820F8C68:
	// lwz r10,1404(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1404);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x820f8c94
	if (ctx.cr0.eq) goto loc_820F8C94;
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
loc_820F8C7C:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// li r3,28
	ctx.r3.s64 = 28;
	// addi r4,r11,-30872
	ctx.r4.s64 = ctx.r11.s64 + -30872;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F8C90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
loc_820F8C94:
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r10,r10,-30112
	ctx.r10.s64 = ctx.r10.s64 + -30112;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lis r9,-32202
	ctx.r9.s64 = -2110390272;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r10,15284(r9)
	PPC_STORE_U32(ctx.r9.u32 + 15284, ctx.r10.u32);
	// beq cr6,0x820f8cdc
	if (ctx.cr6.eq) goto loc_820F8CDC;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820f8d00
	if (ctx.cr0.eq) goto loc_820F8D00;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820f8d00
	if (ctx.cr0.eq) goto loc_820F8D00;
	// b 0x820f8cf0
	goto loc_820F8CF0;
loc_820F8CDC:
	// lwz r11,1404(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1404);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820f8d00
	if (ctx.cr0.eq) goto loc_820F8D00;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
loc_820F8CF0:
	// li r3,47
	ctx.r3.s64 = 47;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820F8D00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820F8D00:
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

__attribute__((alias("__imp__sub_820F8D18"))) PPC_WEAK_FUNC(sub_820F8D18);
PPC_FUNC_IMPL(__imp__sub_820F8D18) {
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
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x820f8d4c
	if (!ctx.cr6.gt) goto loc_820F8D4C;
	// bl 0x820f4d98
	ctx.lr = 0x820F8D48;
	sub_820F4D98(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820F8D4C:
	// lis r10,-16382
	ctx.r10.s64 = -1073610752;
	// ori r9,r10,22528
	ctx.r9.u64 = ctx.r10.u64 | 22528;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// ori r8,r10,3
	ctx.r8.u64 = ctx.r10.u64 | 3;
	// rlwinm r10,r30,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 12) & 0xFFF;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// clrlwi r9,r30,3
	ctx.r9.u64 = ctx.r30.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// lis r9,-8531
	ctx.r9.s64 = -559087616;
	// ori r9,r9,48879
	ctx.r9.u64 = ctx.r9.u64 | 48879;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_820F8DA4"))) PPC_WEAK_FUNC(sub_820F8DA4);
PPC_FUNC_IMPL(__imp__sub_820F8DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F8DA8"))) PPC_WEAK_FUNC(sub_820F8DA8);
PPC_FUNC_IMPL(__imp__sub_820F8DA8) {
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
	// lwz r11,21496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21496);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x820f8e6c
	if (!ctx.cr6.eq) goto loc_820F8E6C;
	// lwz r11,21504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21504);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x820f8de0
	if (!ctx.cr6.eq) goto loc_820F8DE0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820f8de4
	goto loc_820F8DE4;
loc_820F8DE0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_820F8DE4:
	// lwz r10,21500(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21500);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x820f8e6c
	if (ctx.cr6.eq) goto loc_820F8E6C;
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x820f8e00
	if (!ctx.cr6.eq) goto loc_820F8E00;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_820F8E00:
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x820f8e1c
	if (!ctx.cr6.gt) goto loc_820F8E1C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f4d98
	ctx.lr = 0x820F8E18;
	sub_820F4D98(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820F8E1C:
	// lis r10,-16382
	ctx.r10.s64 = -1073610752;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// ori r10,r10,22528
	ctx.r10.u64 = ctx.r10.u64 | 22528;
	// ori r8,r9,3
	ctx.r8.u64 = ctx.r9.u64 | 3;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r7,-8531
	ctx.r7.s64 = -559087616;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// ori r7,r7,48879
	ctx.r7.u64 = ctx.r7.u64 | 48879;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// lwz r10,21492(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21492);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r8,r10,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r9,r10,3
	ctx.r9.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r10,r8,512
	ctx.r10.s64 = ctx.r8.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_820F8E6C:
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

__attribute__((alias("__imp__sub_820F8E84"))) PPC_WEAK_FUNC(sub_820F8E84);
PPC_FUNC_IMPL(__imp__sub_820F8E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F8E88"))) PPC_WEAK_FUNC(sub_820F8E88);
PPC_FUNC_IMPL(__imp__sub_820F8E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e8
	ctx.lr = 0x820F8E90;
	__savegprlr_28(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r9,16568(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16568);
	// rlwinm. r11,r9,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f9034
	if (ctx.cr0.eq) goto loc_820F9034;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1404(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1404);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820f8ec4
	if (ctx.cr0.eq) goto loc_820F8EC4;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x820f8ec8
	goto loc_820F8EC8;
loc_820F8EC4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_820F8EC8:
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820F8ED4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,16572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16572, ctx.r3.u32);
loc_820F8ED8:
	// stw r30,16568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16568, ctx.r30.u32);
loc_820F8EDC:
	// lwz r11,21428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21428);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,21424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21424);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mftb r11
	ctx.r11.u64 = __rdtsc();
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// cmpdi cr6,r10,0
	ctx.cr6.compare<int64_t>(ctx.r10.s64, 0, ctx.xer);
	// beq cr6,0x820f8f10
	if (ctx.cr6.eq) goto loc_820F8F10;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,21420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21420, ctx.r11.u32);
loc_820F8F10:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ld r9,21448(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 21448);
	// std r30,21448(r31)
	PPC_STORE_U64(ctx.r31.u32 + 21448, ctx.r30.u64);
	// stw r10,21424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21424, ctx.r10.u32);
	// ld r10,21440(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 21440);
	// stw r11,21428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21428, ctx.r11.u32);
	// lwz r11,21496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21496);
	// std r30,21440(r31)
	PPC_STORE_U64(ctx.r31.u32 + 21440, ctx.r30.u64);
	// stw r9,21460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21460, ctx.r9.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r10,21456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21456, ctx.r10.u32);
	// bne cr6,0x820f9098
	if (!ctx.cr6.eq) goto loc_820F9098;
	// li r5,240
	ctx.r5.s64 = 240;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e9ff0
	ctx.lr = 0x820F8F54;
	sub_822E9FF0(ctx, base);
	// lbz r11,10814(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10814);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// li r11,37
	ctx.r11.s64 = 37;
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// li r11,19
	ctx.r11.s64 = 19;
	// stw r11,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r11.u32);
	// stw r11,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r11.u32);
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r11.u32);
	// li r11,25
	ctx.r11.s64 = 25;
	// stw r11,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r11.u32);
	// li r11,26
	ctx.r11.s64 = 26;
	// stw r11,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r11.u32);
	// li r11,200
	ctx.r11.s64 = 200;
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r11.u32);
	// li r11,30
	ctx.r11.s64 = 30;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// bne 0x820f8fc4
	if (!ctx.cr0.eq) goto loc_820F8FC4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82100320
	ctx.lr = 0x820F8FC4;
	sub_82100320(ctx, base);
loc_820F8FC4:
	// addi r29,r31,21476
	ctx.r29.s64 = ctx.r31.s64 + 21476;
	// li r28,4
	ctx.r28.s64 = 4;
loc_820F8FCC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f8fe8
	if (!ctx.cr6.eq) goto loc_820F8FE8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82100408
	ctx.lr = 0x820F8FE4;
	sub_82100408(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
loc_820F8FE8:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x820f8fcc
	if (!ctx.cr0.eq) goto loc_820F8FCC;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821004a0
	ctx.lr = 0x820F9004;
	sub_821004A0(ctx, base);
	// lwz r11,21492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21492);
	// stw r30,21500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21500, ctx.r30.u32);
	// stw r30,21504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21504, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f9028
	if (!ctx.cr6.eq) goto loc_820F9028;
	// lis r4,-23936
	ctx.r4.s64 = -1568669696;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x822f9920
	ctx.lr = 0x820F9024;
	sub_822F9920(ctx, base);
	// stw r3,21492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21492, ctx.r3.u32);
loc_820F9028:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,21496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21496, ctx.r11.u32);
	// b 0x820f90f0
	goto loc_820F90F0;
loc_820F9034:
	// rlwinm. r11,r9,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820f8edc
	if (ctx.cr0.eq) goto loc_820F8EDC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1404(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1404);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820f9058
	if (ctx.cr0.eq) goto loc_820F9058;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x820f905c
	goto loc_820F905C;
loc_820F9058:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_820F905C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// rlwinm r4,r9,20,4,11
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0xFF00000;
	// addi r3,r11,-3944
	ctx.r3.s64 = ctx.r11.s64 + -3944;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820F9074;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r3,16572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16572, ctx.r3.u32);
	// blt 0x820f8ed8
	if (ctx.cr0.lt) goto loc_820F8ED8;
	// lwz r11,16568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16568);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,10,23,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 10) & 0x100) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFEFF);
	// rlwimi r11,r10,10,21,21
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 10) & 0x400) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFBFF);
	// stw r11,16568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16568, ctx.r11.u32);
	// b 0x820f8edc
	goto loc_820F8EDC;
loc_820F9098:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x820f90f0
	if (!ctx.cr6.eq) goto loc_820F90F0;
	// lbz r11,10814(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10814);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x820f90b8
	if (!ctx.cr0.eq) goto loc_820F90B8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82100320
	ctx.lr = 0x820F90B8;
	sub_82100320(ctx, base);
loc_820F90B8:
	// lwz r11,21504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21504);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x820f90c8
	if (ctx.cr6.eq) goto loc_820F90C8;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
loc_820F90C8:
	// lwz r11,21500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21500);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820f90f0
	if (ctx.cr6.eq) goto loc_820F90F0;
	// addi r11,r30,5369
	ctx.r11.s64 = ctx.r30.s64 + 5369;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82100ac0
	ctx.lr = 0x820F90EC;
	sub_82100AC0(ctx, base);
	// stw r30,21504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21504, ctx.r30.u32);
loc_820F90F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f8330
	ctx.lr = 0x820F90F8;
	sub_820F8330(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1492);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820f9124
	if (ctx.cr0.eq) goto loc_820F9124;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820f9124
	if (ctx.cr0.eq) goto loc_820F9124;
	// li r3,0
	ctx.r3.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820F9124;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820F9124:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x822e9938
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F912C"))) PPC_WEAK_FUNC(sub_820F912C);
PPC_FUNC_IMPL(__imp__sub_820F912C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F9130"))) PPC_WEAK_FUNC(sub_820F9130);
PPC_FUNC_IMPL(__imp__sub_820F9130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98e0
	ctx.lr = 0x820F9138;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820f91a4
	if (!ctx.cr6.eq) goto loc_820F91A4;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820f91a4
	if (!ctx.cr6.eq) goto loc_820F91A4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x820f91a4
	if (!ctx.cr6.eq) goto loc_820F91A4;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820f91a4
	if (!ctx.cr6.eq) goto loc_820F91A4;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
loc_820F91A4:
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// subf r29,r9,r8
	ctx.r29.s64 = ctx.r8.s64 - ctx.r9.s64;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// bne 0x820f91c8
	if (!ctx.cr0.eq) goto loc_820F91C8;
	// lwz r27,21388(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 21388);
loc_820F91C8:
	// lwz r30,20(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne 0x820f9210
	if (!ctx.cr0.eq) goto loc_820F9210;
	// lwz r11,13436(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13436);
	// mullw r9,r27,r29
	ctx.r9.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r29.s32);
	// divwu r30,r9,r10
	ctx.r30.u32 = ctx.r9.u32 / ctx.r10.u32;
	// twllei r10,0
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x820f920c
	if (!ctx.cr0.eq) goto loc_820F920C;
	// bl 0x8230458c
	ctx.lr = 0x820F91F0;
	__imp__VdQueryVideoFlags(ctx, base);
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x820f920c
	if (!ctx.cr0.eq) goto loc_820F920C;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x820f920c
	if (ctx.cr6.gt) goto loc_820F920C;
	// lwz r11,21392(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 21392);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x820f9210
	if (!ctx.cr6.gt) goto loc_820F9210;
loc_820F920C:
	// lwz r30,21392(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 21392);
loc_820F9210:
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822e9960
	ctx.lr = 0x820F9220;
	sub_822E9960(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r27,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r27.u32);
	// stw r30,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r30.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// stw r9,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r9.u32);
	// stw r8,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r8.u32);
	// stw r11,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822e9930
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F9254"))) PPC_WEAK_FUNC(sub_820F9254);
PPC_FUNC_IMPL(__imp__sub_820F9254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F9258"))) PPC_WEAK_FUNC(sub_820F9258);
PPC_FUNC_IMPL(__imp__sub_820F9258) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r11.u32);
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r11,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r11,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820f92a4
	if (!ctx.cr6.eq) goto loc_820F92A4;
	// stw r11,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, ctx.r11.u32);
	// stw r11,40(r5)
	PPC_STORE_U32(ctx.r5.u32 + 40, ctx.r11.u32);
	// b 0x820f92b0
	goto loc_820F92B0;
loc_820F92A4:
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, ctx.r10.u32);
	// stw r10,40(r5)
	PPC_STORE_U32(ctx.r5.u32 + 40, ctx.r10.u32);
loc_820F92B0:
	// stw r11,28(r5)
	PPC_STORE_U32(ctx.r5.u32 + 28, ctx.r11.u32);
	// stw r11,32(r5)
	PPC_STORE_U32(ctx.r5.u32 + 32, ctx.r11.u32);
	// stw r11,36(r5)
	PPC_STORE_U32(ctx.r5.u32 + 36, ctx.r11.u32);
	// stw r11,44(r5)
	PPC_STORE_U32(ctx.r5.u32 + 44, ctx.r11.u32);
	// stw r11,48(r5)
	PPC_STORE_U32(ctx.r5.u32 + 48, ctx.r11.u32);
	// stw r11,52(r5)
	PPC_STORE_U32(ctx.r5.u32 + 52, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F92CC"))) PPC_WEAK_FUNC(sub_820F92CC);
PPC_FUNC_IMPL(__imp__sub_820F92CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F92D0"))) PPC_WEAK_FUNC(sub_820F92D0);
PPC_FUNC_IMPL(__imp__sub_820F92D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822e98ec
	ctx.lr = 0x820F92D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x820f9130
	ctx.lr = 0x820F92F0;
	sub_820F9130(ctx, base);
	// lwz r11,21388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21388);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// lwz r10,21392(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21392);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,56
	ctx.r5.s64 = 56;
	// sth r30,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, ctx.r30.u16);
	// sth r29,146(r1)
	PPC_STORE_U16(ctx.r1.u32 + 146, ctx.r29.u16);
	// sth r11,148(r1)
	PPC_STORE_U16(ctx.r1.u32 + 148, ctx.r11.u16);
	// sth r10,150(r1)
	PPC_STORE_U16(ctx.r1.u32 + 150, ctx.r10.u16);
	// bl 0x822e9960
	ctx.lr = 0x820F9318;
	sub_822E9960(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8230459c
	ctx.lr = 0x820F9324;
	__imp__VdCallGraphicsNotificationRoutines(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822e993c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820F932C"))) PPC_WEAK_FUNC(sub_820F932C);
PPC_FUNC_IMPL(__imp__sub_820F932C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F9330"))) PPC_WEAK_FUNC(sub_820F9330);
PPC_FUNC_IMPL(__imp__sub_820F9330) {
	PPC_FUNC_PROLOGUE();
	// vrfim v11,v1
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_round_ps(simde_mm_load_ps(ctx.v1.f32), SIMDE_MM_FROUND_TO_NEG_INF | SIMDE_MM_FROUND_NO_EXC));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,-3904
	ctx.r11.s64 = ctx.r11.s64 + -3904;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// vspltw v12,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// vspltw v8,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xAA));
	// addi r11,r11,-3920
	ctx.r11.s64 = ctx.r11.s64 + -3920;
	// vspltw v6,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x55));
	// vspltw v4,v0,3
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x0));
	// vsubfp v0,v1,v11
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(ctx.v11.f32)));
	// vexptefp v9,v11
	ctx.v9.f32[0] = exp2f(ctx.v11.f32[0]);
	ctx.v9.f32[1] = exp2f(ctx.v11.f32[1]);
	ctx.v9.f32[2] = exp2f(ctx.v11.f32[2]);
	ctx.v9.f32[3] = exp2f(ctx.v11.f32[3]);
	// lvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v10,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// vspltw v7,v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xAA));
	// vspltw v5,v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x55));
	// vspltw v3,v13,3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x0));
	// vmulfp128 v13,v0,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v11,v0,v8,v12
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v10,v0,v7,v10
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// vmulfp128 v0,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v11,v13,v6,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmaddfp v10,v13,v5,v10
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v5.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// vmulfp128 v8,v13,v13
	simde_mm_store_ps(ctx.v8.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v13,v0,v4,v11
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v4.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmaddfp v0,v0,v3,v10
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v3.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// vmaddfp v11,v8,v0,v13
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vrefp v13,v11
	simde_mm_store_ps(ctx.v13.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_load_ps(ctx.v11.f32)));
	// vor v8,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vnmsubfp v0,v11,v13,v12
	simde_mm_store_ps(ctx.v0.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v12.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v13,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v12,v8,v0,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v12.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp v11,v0,v0
	simde_mm_store_ps(ctx.v11.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v0,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vsel v0,v13,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// vmulfp128 v1,v9,v0
	simde_mm_store_ps(ctx.v1.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v0.f32)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F93C4"))) PPC_WEAK_FUNC(sub_820F93C4);
PPC_FUNC_IMPL(__imp__sub_820F93C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F93C8"))) PPC_WEAK_FUNC(sub_820F93C8);
PPC_FUNC_IMPL(__imp__sub_820F93C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,-48(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// lis r11,292
	ctx.r11.s64 = 19136512;
	// ori r10,r11,16237
	ctx.r10.u64 = ctx.r11.u64 | 16237;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-3852(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -3852);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,9580(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9580);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f13,-32(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// addi r11,r11,1840
	ctx.r11.s64 = ctx.r11.s64 + 1840;
	// lvx128 v12,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,1856
	ctx.r11.s64 = ctx.r11.s64 + 1856;
	// lvx128 v11,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,1824
	ctx.r11.s64 = ctx.r11.s64 + 1824;
	// lvx128 v10,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,-48(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -48);
	// addi r9,r1,-48
	ctx.r9.s64 = ctx.r1.s64 + -48;
	// rlwimi r11,r10,30,1,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 30) & 0x7FFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFF80000000);
	// stw r11,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r11.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,-48(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -48);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// lfs f13,-3856(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -3856);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfiwx f13,0,r9
	PPC_STORE_U32(ctx.r9.u32, ctx.f13.u32);
	// lwa r11,-48(r1)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + -48));
	// std r11,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r11.u64);
	// lfd f13,-48(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fnmsubs f0,f13,f0,f1
	ctx.f0.f64 = double(float(-(ctx.f13.f64 * ctx.f0.f64 - ctx.f1.f64)));
	// stfs f0,-28(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stfs f13,-24(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,-20(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -20, temp.u32);
	// addi r11,r1,-32
	ctx.r11.s64 = ctx.r1.s64 + -32;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// vspltw v13,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xAA));
	// vmulfp128 v0,v0,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v0,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vspltw v9,v0,3
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x0));
	// vmsum4fp128 v10,v0,v10
	simde_mm_store_ps(ctx.v10.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v10.f32), 0xFF));
	// vmulfp128 v13,v9,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v13.f32)));
	// stvx v10,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,-32
	ctx.r11.s64 = ctx.r1.s64 + -32;
	// vmulfp128 v0,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v13,v0,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmsum4fp128 v0,v0,v12
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32), 0xFF));
	// vmsum4fp128 v13,v13,v11
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v11.f32), 0xFF));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,-48
	ctx.r11.s64 = ctx.r1.s64 + -48;
	// stvx v13,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,-32(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-48(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -48);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f13,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// fadds f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820F94C4"))) PPC_WEAK_FUNC(sub_820F94C4);
PPC_FUNC_IMPL(__imp__sub_820F94C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820F94C8"))) PPC_WEAK_FUNC(sub_820F94C8);
PPC_FUNC_IMPL(__imp__sub_820F94C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f1,20(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// addi r10,r1,20
	ctx.r10.s64 = ctx.r1.s64 + 20;
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// addi r8,r1,-24
	ctx.r8.s64 = ctx.r1.s64 + -24;
	// vspltisw v11,-1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_set1_epi32(int(0xFFFFFFFF)));
	// addi r9,r1,-32
	ctx.r9.s64 = ctx.r1.s64 + -32;
	// vspltisw v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_set1_epi32(int(0x0)));
	// vspltisw v5,-9
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_set1_epi32(int(0xFFFFFFF7)));
	// lfs f0,9472(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9472);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,-28
	ctx.r11.s64 = ctx.r1.s64 + -28;
	// stfs f0,-28(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// stfs f0,-32(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// stfs f0,-24(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// lvlx v6,0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r8,r1,-32
	ctx.r8.s64 = ctx.r1.s64 + -32;
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r10,r1,28
	ctx.r10.s64 = ctx.r1.s64 + 28;
	// lvlx v7,0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,-24
	ctx.r11.s64 = ctx.r1.s64 + -24;
	// lvlx v12,0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r1,-28
	ctx.r9.s64 = ctx.r1.s64 + -28;
	// stfs f0,-24(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// vrlimi128 v12,v7,4,3
	simde_mm_store_ps(ctx.v12.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v7.f32), 57), 4));
	// stfs f0,-28(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// vrlimi128 v0,v6,4,3
	simde_mm_store_ps(ctx.v0.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v6.f32), 57), 4));
	// stfs f0,-32(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// lvlx v1,0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v9,0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v9,v1,4,3
	simde_mm_store_ps(ctx.v9.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v1.f32), 57), 4));
	// lvlx v4,0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v8,0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v0,v12,3,2
	simde_mm_store_ps(ctx.v0.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v12.f32), 78), 3));
	// vrlimi128 v8,v4,4,3
	simde_mm_store_ps(ctx.v8.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v4.f32), 57), 4));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// vslw v4,v11,v11
	ctx.v4.u32[0] = ctx.v11.u32[0] << (ctx.v11.u8[0] & 0x1F);
	ctx.v4.u32[1] = ctx.v11.u32[1] << (ctx.v11.u8[4] & 0x1F);
	ctx.v4.u32[2] = ctx.v11.u32[2] << (ctx.v11.u8[8] & 0x1F);
	ctx.v4.u32[3] = ctx.v11.u32[3] << (ctx.v11.u8[12] & 0x1F);
	// vor v12,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// addi r11,r11,-3872
	ctx.r11.s64 = ctx.r11.s64 + -3872;
	// vor v9,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vrlimi128 v12,v8,3,2
	simde_mm_store_ps(ctx.v12.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v8.f32), 78), 3));
	// vandc v6,v9,v4
	// lvx128 v10,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslw v8,v11,v5
	ctx.v8.u32[0] = ctx.v11.u32[0] << (ctx.v5.u8[0] & 0x1F);
	ctx.v8.u32[1] = ctx.v11.u32[1] << (ctx.v5.u8[4] & 0x1F);
	ctx.v8.u32[2] = ctx.v11.u32[2] << (ctx.v5.u8[8] & 0x1F);
	ctx.v8.u32[3] = ctx.v11.u32[3] << (ctx.v5.u8[12] & 0x1F);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// vspltw v3,v10,0
	simde_mm_store_si128((simde__m128i*)ctx.v3.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0xFF));
	// vor v0,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vupkd3d128 v12,v13,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v13.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v13.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v12 = vTemp;
	// addi r11,r11,-3888
	ctx.r11.s64 = ctx.r11.s64 + -3888;
	// vspltw v2,v10,1
	simde_mm_store_si128((simde__m128i*)ctx.v2.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0xAA));
	// vlogefp v29,v6
	ctx.fpscr.enableFlushModeUnconditional();
	ctx.v29.f32[0] = log2f(ctx.v6.f32[0]);
	ctx.v29.f32[1] = log2f(ctx.v6.f32[1]);
	ctx.v29.f32[2] = log2f(ctx.v6.f32[2]);
	ctx.v29.f32[3] = log2f(ctx.v6.f32[3]);
	// vspltw v31,v10,2
	simde_mm_store_si128((simde__m128i*)ctx.v31.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0x55));
	// vspltw v28,v10,3
	simde_mm_store_si128((simde__m128i*)ctx.v28.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0x0));
	// vspltw v7,v12,3
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0x0));
	// vsel v12,v6,v7,v8
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8))));
	// lvx128 v8,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v1,v8,1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), 0xAA));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// vspltw v6,v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), 0xFF));
	// vspltw v30,v8,2
	simde_mm_store_si128((simde__m128i*)ctx.v30.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), 0x55));
	// addi r11,r11,-3904
	ctx.r11.s64 = ctx.r11.s64 + -3904;
	// vsubfp v12,v12,v7
	simde_mm_store_ps(ctx.v12.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v7.f32)));
	// vspltw v8,v8,3
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), 0x0));
	// vmaddfp v2,v12,v2,v3
	simde_mm_store_ps(ctx.v2.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v2.f32)), simde_mm_load_ps(ctx.v3.f32)));
	// vmulfp128 v10,v12,v12
	simde_mm_store_ps(ctx.v10.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v6,v12,v1,v6
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// vmulfp128 v1,v12,v0
	simde_mm_store_ps(ctx.v1.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vrfim v3,v29
	simde_mm_store_ps(ctx.v3.f32, simde_mm_round_ps(simde_mm_load_ps(ctx.v29.f32), SIMDE_MM_FROUND_TO_NEG_INF | SIMDE_MM_FROUND_NO_EXC));
	// vmaddfp v31,v10,v31,v2
	simde_mm_store_ps(ctx.v31.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v31.f32)), simde_mm_load_ps(ctx.v2.f32)));
	// vmulfp128 v12,v12,v10
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v10.f32)));
	// vmulfp128 v2,v10,v10
	simde_mm_store_ps(ctx.v2.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v10.f32)));
	// vmaddfp v10,v10,v30,v6
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v30.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// vmulfp128 v6,v3,v0
	simde_mm_store_ps(ctx.v6.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v3.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v3,v12,v28,v31
	simde_mm_store_ps(ctx.v3.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v28.f32)), simde_mm_load_ps(ctx.v31.f32)));
	// vmaddfp v12,v12,v8,v10
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// vmaddfp v8,v2,v12,v3
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v3.f32)));
	// lvx128 v12,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,-3920
	ctx.r11.s64 = ctx.r11.s64 + -3920;
	// lvx128 v10,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v6,v1,v8,v6
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// vspltw v8,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xFF));
	// vspltw v1,v12,1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xAA));
	// vand v4,v9,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vspltw v30,v12,2
	simde_mm_store_si128((simde__m128i*)ctx.v30.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0x55));
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// vspltw v28,v12,3
	simde_mm_store_si128((simde__m128i*)ctx.v28.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0x0));
	// vrfim v12,v6
	simde_mm_store_ps(ctx.v12.f32, simde_mm_round_ps(simde_mm_load_ps(ctx.v6.f32), SIMDE_MM_FROUND_TO_NEG_INF | SIMDE_MM_FROUND_NO_EXC));
	// vspltw v31,v10,1
	simde_mm_store_si128((simde__m128i*)ctx.v31.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0xAA));
	// vspltw v29,v10,2
	simde_mm_store_si128((simde__m128i*)ctx.v29.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0x55));
	// vspltw v27,v10,3
	simde_mm_store_si128((simde__m128i*)ctx.v27.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0x0));
	// vspltw v3,v10,0
	simde_mm_store_si128((simde__m128i*)ctx.v3.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0xFF));
	// vsubfp v10,v6,v12
	simde_mm_store_ps(ctx.v10.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vexptefp v2,v12
	ctx.v2.f32[0] = exp2f(ctx.v12.f32[0]);
	ctx.v2.f32[1] = exp2f(ctx.v12.f32[1]);
	ctx.v2.f32[2] = exp2f(ctx.v12.f32[2]);
	ctx.v2.f32[3] = exp2f(ctx.v12.f32[3]);
	// vor v12,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vmulfp128 v10,v12,v12
	simde_mm_store_ps(ctx.v10.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v6,v12,v1,v8
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v8.f32)));
	// vmaddfp v3,v12,v31,v3
	simde_mm_store_ps(ctx.v3.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v31.f32)), simde_mm_load_ps(ctx.v3.f32)));
	// vmulfp128 v12,v12,v10
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v10.f32)));
	// vmaddfp v6,v10,v30,v6
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v30.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// vmaddfp v3,v10,v29,v3
	simde_mm_store_ps(ctx.v3.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v29.f32)), simde_mm_load_ps(ctx.v3.f32)));
	// vor v29,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// vmulfp128 v1,v10,v10
	simde_mm_store_ps(ctx.v1.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v10.f32)));
	// vcmpeqfp v7,v0,v13
	simde_mm_store_ps(ctx.v7.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v10,v12,v28,v6
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v28.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// vmaddfp v12,v12,v27,v3
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v27.f32)), simde_mm_load_ps(ctx.v3.f32)));
	// vspltisw v3,1
	simde_mm_store_si128((simde__m128i*)ctx.v3.u32, simde_mm_set1_epi32(int(0x1)));
	// vcmpgtfp v27,v13,v0
	simde_mm_store_ps(ctx.v27.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vcmpgtfp v28,v13,v9
	simde_mm_store_ps(ctx.v28.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v9.f32)));
	// vmaddfp v6,v1,v12,v10
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// vrfiz v1,v0
	simde_mm_store_ps(ctx.v1.f32, simde_mm_round_ps(simde_mm_load_ps(ctx.v0.f32), SIMDE_MM_FROUND_TO_ZERO | SIMDE_MM_FROUND_NO_EXC));
	// vrefp v10,v6
	simde_mm_store_ps(ctx.v10.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_load_ps(ctx.v6.f32)));
	// vor v31,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// vnmsubfp v12,v6,v10,v8
	simde_mm_store_ps(ctx.v12.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v8.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vor v30,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vctsxs v6,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v6.s32, simde_mm_vctsxs(simde_mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp v0,v0,v1
	simde_mm_store_ps(ctx.v0.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vmaddfp v12,v10,v12,v10
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// vcmpeqfp v10,v9,v13
	simde_mm_store_ps(ctx.v10.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vand v6,v6,v3
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vandc v0,v28,v0
	// vnmsubfp v31,v31,v12,v8
	simde_mm_store_ps(ctx.v31.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v31.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v8.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vslw v8,v11,v5
	ctx.v8.u32[0] = ctx.v11.u32[0] << (ctx.v5.u8[0] & 0x1F);
	ctx.v8.u32[1] = ctx.v11.u32[1] << (ctx.v5.u8[4] & 0x1F);
	ctx.v8.u32[2] = ctx.v11.u32[2] << (ctx.v5.u8[8] & 0x1F);
	ctx.v8.u32[3] = ctx.v11.u32[3] << (ctx.v5.u8[12] & 0x1F);
	// vcmpeqfp v9,v12,v12
	simde_mm_store_ps(ctx.v9.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v5,v12,v31,v12
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v31.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vslw v12,v6,v11
	ctx.v12.u32[0] = ctx.v6.u32[0] << (ctx.v11.u8[0] & 0x1F);
	ctx.v12.u32[1] = ctx.v6.u32[1] << (ctx.v11.u8[4] & 0x1F);
	ctx.v12.u32[2] = ctx.v6.u32[2] << (ctx.v11.u8[8] & 0x1F);
	ctx.v12.u32[3] = ctx.v6.u32[3] << (ctx.v11.u8[12] & 0x1F);
	// vor v6,v10,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vandc v11,v10,v27
	// vsel v10,v30,v5,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8))));
	// vor v9,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vand v0,v4,v12
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vmulfp128 v12,v2,v10
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(ctx.v10.f32)));
	// vsrw v10,v8,v3
	ctx.v10.u32[0] = ctx.v8.u32[0] >> (ctx.v3.u8[0] & 0x1F);
	ctx.v10.u32[1] = ctx.v8.u32[1] >> (ctx.v3.u8[4] & 0x1F);
	ctx.v10.u32[2] = ctx.v8.u32[2] >> (ctx.v3.u8[8] & 0x1F);
	ctx.v10.u32[3] = ctx.v8.u32[3] >> (ctx.v3.u8[12] & 0x1F);
	// vor v13,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsel v13,v10,v13,v11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8))));
	// vsel v13,v13,v29,v7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v29.u8))));
	// vor v0,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsel v0,v0,v13,v9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8))));
	// stvx v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f1,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

