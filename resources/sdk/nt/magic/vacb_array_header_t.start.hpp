#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VACB_ARRAY_HEADER.VacbArrayIndex", vacb_array_index, 0x0, 0x20, true, 0x71cc31b43b8803cf)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VACB_ARRAY_HEADER.MappingCount", mapping_count, 0x20, 0x20, true, 0x6b56ea53ccddebc9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VACB_ARRAY_HEADER.HighestMappedIndex", highest_mapped_index, 0x40, 0x20, true, 0xc91f3303bb964d8d)
#else
#define _m00
#define _m01
#define _m02
#endif