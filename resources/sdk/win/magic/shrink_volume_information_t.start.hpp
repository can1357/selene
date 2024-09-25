#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum win::shrink_volume_request_types_t), "_SHRINK_VOLUME_INFORMATION.ShrinkRequestType", shrink_request_type, 0x0, 0x20, true, 0xc3cafb2392ecf80f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_SHRINK_VOLUME_INFORMATION.Flags", flags, 0x40, 0x40, true, 0xdf4d9898f42c24ba)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_SHRINK_VOLUME_INFORMATION.NewNumberOfSectors", new_number_of_sectors, 0x80, 0x40, true, 0x92496a9ca0bdfb8b)
#else
#define _m00
#define _m01
#define _m02
#endif