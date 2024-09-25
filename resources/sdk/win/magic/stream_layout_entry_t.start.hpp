#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STREAM_LAYOUT_ENTRY.Version", version, 0x0, 0x20, true, 0xf9f26231a0dcb885)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STREAM_LAYOUT_ENTRY.NextStreamOffset", next_stream_offset, 0x20, 0x20, true, 0xdb4bcf1789424196)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STREAM_LAYOUT_ENTRY.Flags", flags, 0x40, 0x20, true, 0x912dac7b779e649a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STREAM_LAYOUT_ENTRY.ExtentInformationOffset", extent_information_offset, 0x60, 0x20, true, 0x60124bf243c00562)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_STREAM_LAYOUT_ENTRY.AllocationSize", allocation_size, 0x80, 0x40, true, 0x426edd48bb6aa1f8)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_STREAM_LAYOUT_ENTRY.EndOfFile", end_of_file, 0xc0, 0x40, true, 0xb4e1a13160a53bbd)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STREAM_LAYOUT_ENTRY.AttributeFlags", attribute_flags, 0x140, 0x20, true, 0xf4d2b5d57da46ac6)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STREAM_LAYOUT_ENTRY.StreamIdentifierLength", stream_identifier_length, 0x160, 0x20, true, 0x8d5f10336d821563)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_STREAM_LAYOUT_ENTRY.StreamIdentifier", stream_identifier, 0x180, 0x10, true, 0xf967f740b78bf4ff)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STREAM_LAYOUT_ENTRY.StreamInformationOffset", stream_information_offset, 0x100, 0x20, true, 0xfe19b0d3fec6a3dc)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STREAM_LAYOUT_ENTRY.AttributeTypeCode", attribute_type_code, 0x120, 0x20, true, 0xf808e26b796ed22b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#endif