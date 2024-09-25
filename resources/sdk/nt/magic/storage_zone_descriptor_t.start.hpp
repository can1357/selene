#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_ZONE_DESCRIPTOR.Size", size, 0x0, 0x20, true, 0x2bbf32d9a1ea3373)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::storage_zone_types_t), "_STORAGE_ZONE_DESCRIPTOR.ZoneType", zone_type, 0x20, 0x20, true, 0x9cee86efb5175111)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::storage_zone_condition_t), "_STORAGE_ZONE_DESCRIPTOR.ZoneCondition", zone_condition, 0x40, 0x20, true, 0xf347c3781ad38fb4)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_STORAGE_ZONE_DESCRIPTOR.ResetWritePointerRecommend", reset_write_pointer_recommend, 0x60, 0x8, true, 0xdd042f4148b42ded)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_STORAGE_ZONE_DESCRIPTOR.ZoneSize", zone_size, 0x80, 0x40, true, 0x4dad3890b443625c)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_STORAGE_ZONE_DESCRIPTOR.WritePointerOffset", write_pointer_offset, 0xc0, 0x40, true, 0x6a7b37c7e6067b38)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif