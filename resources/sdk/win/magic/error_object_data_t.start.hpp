#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ErrorObjectData.dwVersion", dw_version, 0x0, 0x20, true, 0x43bc34f276f57eb1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ErrorObjectData.dwHelpContext", dw_help_context, 0x20, 0x20, true, 0x6be7b85bae3580b0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "ErrorObjectData.iid", iid, 0x40, 0x80, true, 0xe60def49ec219eb7)
#else
#define _m00
#define _m01
#define _m02
#endif