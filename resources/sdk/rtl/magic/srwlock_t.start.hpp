#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_RTL_SRWLOCK.Ptr", ptr, 0x0, 0x40, true, 0x8ba97750846a7feb)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RTL_SRWLOCK.Locked", locked, 0x0, 0x1, true, 0xbcec26e8b9b77e48, 1, uint64_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RTL_SRWLOCK.Waiting", waiting, 0x1, 0x1, true, 0x7c7102d6d6db5821, 1, uint64_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RTL_SRWLOCK.Waking", waking, 0x2, 0x1, true, 0xb68401e8706c39c5, 1, uint64_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RTL_SRWLOCK.MultipleShared", multiple_shared, 0x3, 0x1, true, 0xe02411ec4c1107ff, 1, uint64_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint60_t), "_RTL_SRWLOCK.Shared", shared, 0x4, 0x3c, true, 0x6dd03b6240dcde2c, 60, uint64_t)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_SRWLOCK.Value", value, 0x0, 0x40, true, 0x2da2ec941ac21a83)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif