#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "COR_FIELD_OFFSET.ridOfField", rid_of_field, 0x0, 0x20, true, 0x4fd4038446680afd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "COR_FIELD_OFFSET.ulOffset", ul_offset, 0x20, 0x20, true, 0x79acdb4764138a07)
#else
#define _m00
#define _m01
#endif