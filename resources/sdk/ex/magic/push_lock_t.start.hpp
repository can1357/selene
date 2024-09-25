#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EX_PUSH_LOCK.Locked", locked, 0x0, 0x1, true, 0x5d2b9aa050673d2c, 1, uint64_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EX_PUSH_LOCK.Waiting", waiting, 0x1, 0x1, true, 0xac8cf92ff94e30dd, 1, uint64_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EX_PUSH_LOCK.Waking", waking, 0x2, 0x1, true, 0x8bd1a6e6d4fef77c, 1, uint64_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EX_PUSH_LOCK.MultipleShared", multiple_shared, 0x3, 0x1, true, 0x7f6f9eaec40139cc, 1, uint64_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint60_t), "_EX_PUSH_LOCK.Shared", shared, 0x4, 0x3c, true, 0x3d04de961d1b1917, 60, uint64_t)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EX_PUSH_LOCK.Value", value, 0x0, 0x40, true, 0xbcfaad7bc962ef11)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_EX_PUSH_LOCK.Ptr", ptr, 0x0, 0x40, true, 0x633cd51f585622ee)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif