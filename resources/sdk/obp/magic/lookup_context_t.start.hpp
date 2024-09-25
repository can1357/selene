#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::object_directory_t*), "_OBP_LOOKUP_CONTEXT.Directory", directory, 0x0, 0x40, true, 0x23e0a10ad1fcd62f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::object_directory_entry_t**), "_OBP_LOOKUP_CONTEXT.EntryLink", entry_link, 0x80, 0x40, true, 0x5d2fe4cd716c24b9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBP_LOOKUP_CONTEXT.HashValue", hash_value, 0xc0, 0x20, true, 0x14d6e09f192c3e0e)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "_OBP_LOOKUP_CONTEXT.HashIndex", hash_index, 0xe0, 0x10, true, 0x206a2a5a09b36c54, 0, uint16_t,uint8_t)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_OBP_LOOKUP_CONTEXT.LockedExclusive", locked_exclusive, 0xf8, 0x8, true, 0x1eddef890e81c540)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_OBP_LOOKUP_CONTEXT.Object", object, 0x40, 0x40, true, 0x330cd88b1d0ad802)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_OBP_LOOKUP_CONTEXT.DirectoryLocked", directory_locked, 0xf0, 0x8, true, 0xdd4c8f5fccbc1bc8)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBP_LOOKUP_CONTEXT.LockStateSignature", lock_state_signature, 0x100, 0x20, true, 0x1956a714a3c1facd)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_OBP_LOOKUP_CONTEXT.DirectoryReferenced", directory_referenced, 0x0, 0x0, false, 0x3ffd39a11296629f)
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