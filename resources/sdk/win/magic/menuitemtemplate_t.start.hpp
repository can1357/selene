#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "MENUITEMTEMPLATE.mtOption", mt_option, 0x0, 0x10, true, 0x9dc1843d214b4f42)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "MENUITEMTEMPLATE.mtID", mt_id, 0x10, 0x10, true, 0x17250021f4a551a3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "MENUITEMTEMPLATE.mtString", mt_string, 0x20, 0x10, true, 0x38ffa1d185300c37)
#else
#define _m00
#define _m01
#define _m02
#endif