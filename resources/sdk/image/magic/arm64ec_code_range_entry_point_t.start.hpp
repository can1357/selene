#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_ARM64EC_CODE_RANGE_ENTRY_POINT.StartRva", start_rva, 0x0, 0x0, false, 0x32cf0d383d359197)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_ARM64EC_CODE_RANGE_ENTRY_POINT.EndRva", end_rva, 0x0, 0x0, false, 0x32a78800a16d0dad)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_ARM64EC_CODE_RANGE_ENTRY_POINT.EntryPoint", entry_point, 0x0, 0x0, false, 0xa5d6dea4094c345b)
#else
#define _m00
#define _m01
#define _m02
#endif