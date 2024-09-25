#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_STREAM_INFO.NextEntryOffset", next_entry_offset, 0x0, 0x20, true, 0x81dab9b84091386c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_STREAM_INFO.StreamNameLength", stream_name_length, 0x20, 0x20, true, 0x122f011e8701e8dc)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_STREAM_INFO.StreamSize", stream_size, 0x40, 0x40, true, 0x905e3cd444ba7af)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_STREAM_INFO.StreamAllocationSize", stream_allocation_size, 0x80, 0x40, true, 0x86b9dbbcaff2dda2)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_FILE_STREAM_INFO.StreamName", stream_name, 0xc0, 0x10, true, 0x1c11464126849e35)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif