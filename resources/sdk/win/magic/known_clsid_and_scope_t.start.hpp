#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "KnownClsidAndScope.clsid", clsid, 0x0, 0x0, false, 0xdb632128fc7012da)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KnownClsidAndScope.registrationScope", registration_scope, 0x0, 0x0, false, 0xae7532523735b571)
#else
#define _m00
#define _m01
#endif