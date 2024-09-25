#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_RECOVERY_ACTION.NoneAttempted", none_attempted, 0x0, 0x0, false, 0x64e608805d0e2c39, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_RECOVERY_ACTION.TerminateProcess", terminate_process, 0x0, 0x0, false, 0x85e8fa1c466d2c1d, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_RECOVERY_ACTION.ForwardedToVm", forwarded_to_vm, 0x0, 0x0, false, 0x47c1063f67490fbf, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_RECOVERY_ACTION.MarkPageBad", mark_page_bad, 0x0, 0x0, false, 0x3fec4e1fd1dae008, 1, uint32_t)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_RECOVERY_ACTION.AsULONG", as_ulong, 0x0, 0x0, false, 0xff820807a23fba32)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif