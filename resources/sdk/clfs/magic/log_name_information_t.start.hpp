#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CLFS_LOG_NAME_INFORMATION.NameLengthInBytes", name_length_in_bytes, 0x0, 0x10, true, 0xd19e2cda36e32ec9)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_CLFS_LOG_NAME_INFORMATION.Name", name, 0x10, 0x10, true, 0x2626be39dd3299df)
#else
#define _m00
#define _m01
#endif