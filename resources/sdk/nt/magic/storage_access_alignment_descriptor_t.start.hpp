#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_ACCESS_ALIGNMENT_DESCRIPTOR.Version", version, 0x0, 0x20, true, 0xd4195b0f673b9f57)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_ACCESS_ALIGNMENT_DESCRIPTOR.Size", size, 0x20, 0x20, true, 0x3b8e65cefc691a4c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_ACCESS_ALIGNMENT_DESCRIPTOR.BytesPerCacheLine", bytes_per_cache_line, 0x40, 0x20, true, 0x38c7ecb400a7c533)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_ACCESS_ALIGNMENT_DESCRIPTOR.BytesOffsetForCacheAlignment", bytes_offset_for_cache_alignment, 0x60, 0x20, true, 0xeb5be5603fc71aec)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_ACCESS_ALIGNMENT_DESCRIPTOR.BytesPerLogicalSector", bytes_per_logical_sector, 0x80, 0x20, true, 0x7f193ba791d04a43)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_ACCESS_ALIGNMENT_DESCRIPTOR.BytesPerPhysicalSector", bytes_per_physical_sector, 0xa0, 0x20, true, 0x2aad0dbec8274e52)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_ACCESS_ALIGNMENT_DESCRIPTOR.BytesOffsetForSectorAlignment", bytes_offset_for_sector_alignment, 0xc0, 0x20, true, 0xebd92be05059133)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif