#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_KEY_REFERENCE.KeyCell", key_cell, 0x0, 0x20, true, 0xd8ce2b5036a93d5c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::hhive_t*), "_CM_KEY_REFERENCE.KeyHive", key_hive, 0x40, 0x40, true, 0x308575e3892e8383)
#else
#define _m00
#define _m01
#endif