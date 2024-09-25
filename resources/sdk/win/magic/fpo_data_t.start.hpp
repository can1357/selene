#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FPO_DATA.ulOffStart", ul_off_start, 0x0, 0x20, true, 0x4c56decbe931c1e1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FPO_DATA.cbProcSize", cb_proc_size, 0x20, 0x20, true, 0x58c8c44220fb5230)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FPO_DATA.cdwLocals", cdw_locals, 0x40, 0x20, true, 0xb2575d10c0f90557)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_FPO_DATA.cdwParams", cdw_params, 0x60, 0x10, true, 0xf856a003a07994f7)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_FPO_DATA.cbProlog", cb_prolog, 0x70, 0x8, true, 0xcbace9b56dfb9d78, 8, uint16_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_FPO_DATA.cbRegs", cb_regs, 0x78, 0x3, true, 0x2a532a47cf3fef5b, 3, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_FPO_DATA.fHasSEH", f_has_seh, 0x7b, 0x1, true, 0x954385c25fa69e4b, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_FPO_DATA.fUseBP", f_use_bp, 0x7c, 0x1, true, 0xffeb4548dea3609f, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_FPO_DATA.cbFrame", cb_frame, 0x7e, 0x2, true, 0x89a5a432558b7796, 2, uint16_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif