#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_CODEINTEGRITY_UNLOCK_INFORMATION.Flags", flags, 0x0, 0x20, true, 0xc8f90a44809f36b1)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_CODEINTEGRITY_UNLOCK_INFORMATION.Locked", locked, 0x0, 0x1, true, 0x1757ab5590ef1245, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_CODEINTEGRITY_UNLOCK_INFORMATION.UnlockApplied", unlock_applied, 0x1, 0x1, true, 0x64676eb3082d2b34, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_CODEINTEGRITY_UNLOCK_INFORMATION.UnlockIdValid", unlock_id_valid, 0x2, 0x1, true, 0x405960a52d6f7c0d, 1, uint32_t)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 32>), "_SYSTEM_CODEINTEGRITY_UNLOCK_INFORMATION.UnlockId", unlock_id, 0x20, 0x0, true, 0x7851772ee0139d06)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif