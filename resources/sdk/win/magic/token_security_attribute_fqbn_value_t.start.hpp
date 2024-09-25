#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TOKEN_SECURITY_ATTRIBUTE_FQBN_VALUE.Version", version, 0x0, 0x40, true, 0x40dfae24405eb20)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_TOKEN_SECURITY_ATTRIBUTE_FQBN_VALUE.Name", name, 0x40, 0x80, true, 0xa8261ba9327c276b)
#else
#define _m00
#define _m01
#endif