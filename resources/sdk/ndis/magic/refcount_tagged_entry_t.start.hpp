#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_REFCOUNT_TAGGED_ENTRY.Tag", tag, 0x0, 0x8, true, 0x53ef045c8f7cb021)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_REFCOUNT_TAGGED_ENTRY.RefCount", ref_count, 0x8, 0x8, true, 0xe211847ed1efd1cd)
#else
#define _m00
#define _m01
#endif