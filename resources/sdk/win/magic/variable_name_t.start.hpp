#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VARIABLE_NAME.NextEntryOffset", next_entry_offset, 0x0, 0x20, true, 0x4fa5cc0bbd8a7fa7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_VARIABLE_NAME.VendorGuid", vendor_guid, 0x20, 0x80, true, 0x840af070c38a8ecd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_VARIABLE_NAME.Name", name, 0xa0, 0x10, true, 0xfcfc0be28ff60403)
#else
#define _m00
#define _m01
#define _m02
#endif