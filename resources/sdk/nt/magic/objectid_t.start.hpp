#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_OBJECTID.Lineage", lineage, 0x0, 0x80, true, 0xcd1cfd48ce29402b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECTID.Uniquifier", uniquifier, 0x80, 0x20, true, 0xa584a16820aa77e8)
#else
#define _m00
#define _m01
#endif