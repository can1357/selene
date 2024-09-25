#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_INTERFACE_REG.dwInterface", dw_interface, 0x0, 0x20, true, 0x74d7e4e192c56ea9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_INTERFACE_REG.dwFlags", dw_flags, 0x20, 0x20, true, 0x5b174174a6febd92)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_INTERFACE_REG.cFunctions", c_functions, 0x40, 0x20, true, 0x408957b7144f5e8e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t**), "_CRYPT_INTERFACE_REG.rgpszFunctions", rgpsz_functions, 0x80, 0x40, true, 0xd281b5459ad9fcc7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif