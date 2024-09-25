#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_STREAM_INFORMATION.NextEntryOffset", next_entry_offset, 0x0, 0x20, true, 0x46fb830806323211)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_STREAM_INFORMATION.StreamNameLength", stream_name_length, 0x20, 0x20, true, 0xe6cacf15e25aec68)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_STREAM_INFORMATION.StreamSize", stream_size, 0x40, 0x40, true, 0x9bdbd95bf18f1e4c)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_STREAM_INFORMATION.StreamAllocationSize", stream_allocation_size, 0x80, 0x40, true, 0x7bc98e91990753ff)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_FILE_STREAM_INFORMATION.StreamName", stream_name, 0xc0, 0x10, true, 0xa27e6c09e9642394)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif