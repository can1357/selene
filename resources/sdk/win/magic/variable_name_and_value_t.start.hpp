#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VARIABLE_NAME_AND_VALUE.NextEntryOffset", next_entry_offset, 0x0, 0x20, true, 0x6148d6e341e2817f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VARIABLE_NAME_AND_VALUE.ValueOffset", value_offset, 0x20, 0x20, true, 0xc5a78ef8e63030bd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VARIABLE_NAME_AND_VALUE.ValueLength", value_length, 0x40, 0x20, true, 0xffc6b4169f1037dc)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VARIABLE_NAME_AND_VALUE.Attributes", attributes, 0x60, 0x20, true, 0x2bcb958421eedcc0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_VARIABLE_NAME_AND_VALUE.VendorGuid", vendor_guid, 0x80, 0x80, true, 0x62f56c0139343e7e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_VARIABLE_NAME_AND_VALUE.Name", name, 0x100, 0x10, true, 0xecad3aa093c99c4e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif