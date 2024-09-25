#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_PM_COUNTED_STRING.Length", length, 0x0, 0x10, true, 0xeeeb82e9d10065d3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 65>), "_NDIS_PM_COUNTED_STRING.String", string, 0x10, 0x10, true, 0xeb2cebf57d685868)
#else
#define _m00
#define _m01
#endif