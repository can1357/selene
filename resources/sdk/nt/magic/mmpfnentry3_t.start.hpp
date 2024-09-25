#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_MMPFNENTRY3.Priority", priority, 0x0, 0x3, true, 0x3d4a15e97b0cbf56, 3, uint8_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPFNENTRY3.OnProtectedStandby", on_protected_standby, 0x3, 0x1, true, 0x74328dde66613858, 1, uint8_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPFNENTRY3.InPageError", in_page_error, 0x4, 0x1, true, 0x124ee2a81e5b6197, 1, uint8_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPFNENTRY3.SystemChargedPage", system_charged_page, 0x5, 0x1, true, 0xf04bdc05d08f58a9, 1, uint8_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPFNENTRY3.RemovalRequested", removal_requested, 0x6, 0x1, true, 0xb4105abb43f9778, 1, uint8_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPFNENTRY3.ParityError", parity_error, 0x7, 0x1, true, 0xf1151ec561fcfb75, 1, uint8_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif