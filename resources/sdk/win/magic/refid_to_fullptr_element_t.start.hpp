#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::refid_to_fullptr_element_t*), "_REFID_TO_FULLPTR_ELEMENT.Next", next, 0x0, 0x40, true, 0xd6cc1d1dc6800d25)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_REFID_TO_FULLPTR_ELEMENT.Pointer", pointer, 0x40, 0x40, true, 0x5c4cc130eeba7e0e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_REFID_TO_FULLPTR_ELEMENT.RefId", ref_id, 0x80, 0x20, true, 0xda5839285b90ae30)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_REFID_TO_FULLPTR_ELEMENT.State", state, 0xa0, 0x8, true, 0xfc5e329f8e93ac82)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif