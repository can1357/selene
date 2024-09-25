#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_STRSD_SID_LOOKUP.ExportSidFieldOffset", export_sid_field_offset, 0x0, 0x40, true, 0x29bc9535a3801ff4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::os_sid_ver_t), "_STRSD_SID_LOOKUP.OsVer", os_ver, 0x40, 0x20, true, 0x9ec7f0a99f7e452a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 4>), "_STRSD_SID_LOOKUP.Key", key, 0x60, 0x40, true, 0x66437fc574059f35)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STRSD_SID_LOOKUP.KeyLen", key_len, 0xa0, 0x20, true, 0x53ee99440ff9c21c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif