#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "ANON_OBJECT_HEADER_V2.Sig1", sig1, 0x0, 0x10, true, 0xeca335bf346e79fe)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "ANON_OBJECT_HEADER_V2.Sig2", sig2, 0x10, 0x10, true, 0x3f7fe3d2618ce6e8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "ANON_OBJECT_HEADER_V2.Version", version, 0x20, 0x10, true, 0xaf9b8534f1c18597)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "ANON_OBJECT_HEADER_V2.Machine", machine, 0x30, 0x10, true, 0x979096a525268f49)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ANON_OBJECT_HEADER_V2.TimeDateStamp", time_date_stamp, 0x40, 0x20, true, 0x346412d9b42a6301)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "ANON_OBJECT_HEADER_V2.ClassID", class_id, 0x60, 0x80, true, 0x8c7931192b842961)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ANON_OBJECT_HEADER_V2.SizeOfData", size_of_data, 0xe0, 0x20, true, 0x4d218810f3443659)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ANON_OBJECT_HEADER_V2.Flags", flags, 0x100, 0x20, true, 0x5f8d062ebef63a9a)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ANON_OBJECT_HEADER_V2.MetaDataSize", meta_data_size, 0x120, 0x20, true, 0xe1bd6831bb3e8f63)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ANON_OBJECT_HEADER_V2.MetaDataOffset", meta_data_offset, 0x140, 0x20, true, 0x2277f93cd6425dd5)
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
#endif