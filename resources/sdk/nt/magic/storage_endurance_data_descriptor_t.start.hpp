#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_ENDURANCE_DATA_DESCRIPTOR.Version", version, 0x0, 0x20, true, 0xe6cee891cf78a7f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_ENDURANCE_DATA_DESCRIPTOR.Size", size, 0x20, 0x20, true, 0x39e370b36c4e875e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::storage_endurance_info_t), "_STORAGE_ENDURANCE_DATA_DESCRIPTOR.EnduranceInfo", endurance_info, 0x40, 0x80, true, 0x66ca42cfe04029c1)
#else
#define _m00
#define _m01
#define _m02
#endif