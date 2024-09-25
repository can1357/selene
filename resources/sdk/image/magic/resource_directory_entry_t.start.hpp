#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint31_t), "_IMAGE_RESOURCE_DIRECTORY_ENTRY.NameOffset", name_offset, 0x0, 0x1f, true, 0xb3f90d2445dee0e4, 31, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_IMAGE_RESOURCE_DIRECTORY_ENTRY.NameIsString", name_is_string, 0x1f, 0x1, true, 0x65088b53eb6a8009, 1, uint32_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_RESOURCE_DIRECTORY_ENTRY.Name", name, 0x0, 0x20, true, 0x1bf7e1f5cbfb374a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_RESOURCE_DIRECTORY_ENTRY.Id", id, 0x0, 0x10, true, 0x4bc8f85092f16b8b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_RESOURCE_DIRECTORY_ENTRY.OffsetToData", offset_to_data, 0x20, 0x20, true, 0xbd213d48502d0397)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint31_t), "_IMAGE_RESOURCE_DIRECTORY_ENTRY.OffsetToDirectory", offset_to_directory, 0x20, 0x1f, true, 0x87324dec22faf4b4, 31, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_IMAGE_RESOURCE_DIRECTORY_ENTRY.DataIsDirectory", data_is_directory, 0x3f, 0x1, true, 0xd9a09cb75599e5b4, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif