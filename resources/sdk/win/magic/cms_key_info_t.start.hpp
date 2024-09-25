#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMS_KEY_INFO.dwVersion", dw_version, 0x0, 0x20, true, 0xaad489bccf20817e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMS_KEY_INFO.Algid", algid, 0x20, 0x20, true, 0xd9d930c3433c5f10)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_CMS_KEY_INFO.pbOID", pb_oid, 0x40, 0x40, true, 0xaeff2d402df600e8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMS_KEY_INFO.cbOID", cb_oid, 0x80, 0x20, true, 0xecc26da81a58d320)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif