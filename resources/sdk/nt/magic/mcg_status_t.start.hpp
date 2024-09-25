#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MCG_STATUS.RestartIpValid", restart_ip_valid, 0x0, 0x1, true, 0x91fadaec757adb0f, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MCG_STATUS.ErrorIpValid", error_ip_valid, 0x1, 0x1, true, 0x10002d555dd1411, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MCG_STATUS.MachineCheckInProgress", machine_check_in_progress, 0x2, 0x1, true, 0xfeeecf08d75c1444, 1, uint32_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_MCG_STATUS.QuadPart", quad_part, 0x0, 0x40, true, 0x566560888834bc28)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MCG_STATUS.LocalMceValid", local_mce_valid, 0x3, 0x1, true, 0xe335d70030df0b09, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif