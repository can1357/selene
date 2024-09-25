#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_DEBUG_DIRECTORY.Characteristics", characteristics, 0x0, 0x20, true, 0xf15f617b9e3ba714)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_DEBUG_DIRECTORY.TimeDateStamp", time_date_stamp, 0x20, 0x20, true, 0xd9b2f19567febc3a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_DEBUG_DIRECTORY.MajorVersion", major_version, 0x40, 0x10, true, 0xb4f03cd0df25233a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_DEBUG_DIRECTORY.MinorVersion", minor_version, 0x50, 0x10, true, 0xba90f0a324efe09f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_DEBUG_DIRECTORY.Type", type, 0x60, 0x20, true, 0x5efa29dfb206f831)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_DEBUG_DIRECTORY.SizeOfData", size_of_data, 0x80, 0x20, true, 0x941eb20a2eda4a34)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_DEBUG_DIRECTORY.AddressOfRawData", address_of_raw_data, 0xa0, 0x20, true, 0x5e7947f12cc9111a)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_DEBUG_DIRECTORY.PointerToRawData", pointer_to_raw_data, 0xc0, 0x20, true, 0x89c43ecd1ca71229)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif