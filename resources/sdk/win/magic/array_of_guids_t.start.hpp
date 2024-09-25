#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint64_t), "ArrayOfGuids._count", count, 0x40, 0x40, true, 0x3e4fd606f8d746fb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<const struct nt::guid_t, 1>), "ArrayOfGuids._guids", guids, 0x80, 0x80, true, 0x20d5f665a55eef75)
#else
#define _m00
#define _m01
#endif