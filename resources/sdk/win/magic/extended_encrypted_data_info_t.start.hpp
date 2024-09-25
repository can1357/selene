#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_EXTENDED_ENCRYPTED_DATA_INFO.ExtendedCode", extended_code, 0x0, 0x20, true, 0x106ea838891ba686)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_EXTENDED_ENCRYPTED_DATA_INFO.Length", length, 0x20, 0x20, true, 0xeb89cc56c3073b9e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_EXTENDED_ENCRYPTED_DATA_INFO.Flags", flags, 0x40, 0x20, true, 0x60fcf7639ae6f376)
#else
#define _m00
#define _m01
#define _m02
#endif