#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_DISALLOWED_GUIDS.Count", count, 0x0, 0x10, true, 0x73c1c737c9e9953e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t*), "_DISALLOWED_GUIDS.Guids", guids, 0x40, 0x40, true, 0xe4234451bd21e69a)
#else
#define _m00
#define _m01
#endif