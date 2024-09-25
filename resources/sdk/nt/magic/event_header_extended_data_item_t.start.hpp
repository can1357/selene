#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EVENT_HEADER_EXTENDED_DATA_ITEM.ExtType", ext_type, 0x10, 0x10, true, 0xd9e06d57d80ed3c1)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EVENT_HEADER_EXTENDED_DATA_ITEM.Linkage", linkage, 0x20, 0x1, true, 0x62fc34051b495e34, 1, uint16_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EVENT_HEADER_EXTENDED_DATA_ITEM.DataSize", data_size, 0x30, 0x10, true, 0xf6fbd1905d03522c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EVENT_HEADER_EXTENDED_DATA_ITEM.DataPtr", data_ptr, 0x40, 0x40, true, 0x27fceafb6100ca3c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif