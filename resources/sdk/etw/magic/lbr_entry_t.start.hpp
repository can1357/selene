#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_LBR_ENTRY.FromAddress", from_address, 0x0, 0x40, true, 0x7e3a6f84b8b4617)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_LBR_ENTRY.ToAddress", to_address, 0x40, 0x40, true, 0x99a2c65ae056b0e8)
#else
#define _m00
#define _m01
#endif