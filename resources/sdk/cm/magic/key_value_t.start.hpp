#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_KEY_VALUE.Signature", signature, 0x0, 0x10, true, 0xb1f3241ed3cc893c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_KEY_VALUE.NameLength", name_length, 0x10, 0x10, true, 0x3d481c9799d1c59)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_KEY_VALUE.DataLength", data_length, 0x20, 0x20, true, 0xad513eb0a90d031d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_KEY_VALUE.Data", data, 0x40, 0x20, true, 0x1d69f15163ccf4e9)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_KEY_VALUE.Type", type, 0x60, 0x20, true, 0x2db864e7152de78c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_KEY_VALUE.Flags", flags, 0x80, 0x10, true, 0xd3ef159d6a5a7044)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_CM_KEY_VALUE.Name", name, 0xa0, 0x10, true, 0x3520aa88aae768be)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif