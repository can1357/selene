#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_CLAIM_SECURITY_ATTRIBUTE_FQBN_VALUE.Version", version, 0x0, 0x40, true, 0xe6df736622073a7a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(wchar_t*), "_CLAIM_SECURITY_ATTRIBUTE_FQBN_VALUE.Name", name, 0x40, 0x40, true, 0x81540de8490fe92c)
#else
#define _m00
#define _m01
#endif