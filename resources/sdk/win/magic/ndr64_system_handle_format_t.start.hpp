#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_SYSTEM_HANDLE_FORMAT.FormatCode", format_code, 0x0, 0x8, true, 0xc70b72ed3c93cd39)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_SYSTEM_HANDLE_FORMAT.HandleType", handle_type, 0x8, 0x8, true, 0x1bc0bb1c6d43ba35)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDR64_SYSTEM_HANDLE_FORMAT.DesiredAccess", desired_access, 0x20, 0x20, true, 0x2539296045588e81)
#else
#define _m00
#define _m01
#define _m02
#endif