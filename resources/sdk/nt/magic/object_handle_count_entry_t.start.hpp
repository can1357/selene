#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::eprocess_t*), "_OBJECT_HANDLE_COUNT_ENTRY.Process", process, 0x0, 0x40, true, 0x7a51d436d00537a8)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint24_t), "_OBJECT_HANDLE_COUNT_ENTRY.HandleCount", handle_count, 0x40, 0x18, true, 0xd99a34e9599235d8, 24, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_OBJECT_HANDLE_COUNT_ENTRY.LockCount", lock_count, 0x58, 0x8, true, 0xffd1351ef25e8589, 8, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#endif