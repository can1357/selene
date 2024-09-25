#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "ANON_OBJECT_HEADER_BIGOBJ.Sig1", sig1, 0x0, 0x10, true, 0x36bc18b2cf3ef9b9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "ANON_OBJECT_HEADER_BIGOBJ.Sig2", sig2, 0x10, 0x10, true, 0xb872a2bcfe41592f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "ANON_OBJECT_HEADER_BIGOBJ.Version", version, 0x20, 0x10, true, 0xf99998b2c3863991)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "ANON_OBJECT_HEADER_BIGOBJ.Machine", machine, 0x30, 0x10, true, 0xc2d663bd85ceafc5)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ANON_OBJECT_HEADER_BIGOBJ.TimeDateStamp", time_date_stamp, 0x40, 0x20, true, 0xcd9dfba718b48269)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "ANON_OBJECT_HEADER_BIGOBJ.ClassID", class_id, 0x60, 0x80, true, 0x1b16ed2a567e72a7)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ANON_OBJECT_HEADER_BIGOBJ.SizeOfData", size_of_data, 0xe0, 0x20, true, 0xec74a532fc21b68e)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ANON_OBJECT_HEADER_BIGOBJ.Flags", flags, 0x100, 0x20, true, 0xdd7079d8e714277c)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ANON_OBJECT_HEADER_BIGOBJ.MetaDataSize", meta_data_size, 0x120, 0x20, true, 0xcb8f91335eaaffe5)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ANON_OBJECT_HEADER_BIGOBJ.MetaDataOffset", meta_data_offset, 0x140, 0x20, true, 0xeb11c90845bd0d30)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ANON_OBJECT_HEADER_BIGOBJ.NumberOfSections", number_of_sections, 0x160, 0x20, true, 0x2fbd20b29e1d6845)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ANON_OBJECT_HEADER_BIGOBJ.PointerToSymbolTable", pointer_to_symbol_table, 0x180, 0x20, true, 0x7a5cda1187fc0f54)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ANON_OBJECT_HEADER_BIGOBJ.NumberOfSymbols", number_of_symbols, 0x1a0, 0x20, true, 0x259d23aae234b300)
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
#define _m11
#define _m12
#endif