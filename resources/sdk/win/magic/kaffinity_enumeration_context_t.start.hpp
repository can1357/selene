#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kaffinity_ex_t*), "_KAFFINITY_ENUMERATION_CONTEXT.Affinity", affinity, 0x0, 0x40, true, 0xd89b24d12840f124)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KAFFINITY_ENUMERATION_CONTEXT.CurrentMask", current_mask, 0x40, 0x40, true, 0xbe4d81dec6afdbf)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_KAFFINITY_ENUMERATION_CONTEXT.CurrentIndex", current_index, 0x80, 0x10, true, 0xe61cf5a72c060817)
#else
#define _m00
#define _m01
#define _m02
#endif