#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DEVICE_LOCATION_DESCRIPTOR.Version", version, 0x0, 0x20, true, 0x638780a836c3643e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DEVICE_LOCATION_DESCRIPTOR.Size", size, 0x20, 0x20, true, 0x62c89048253cfa72)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::device_location_t), "_STORAGE_DEVICE_LOCATION_DESCRIPTOR.Location", location, 0x40, 0xc0, true, 0x1bd39e8481755e0a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DEVICE_LOCATION_DESCRIPTOR.StringOffset", string_offset, 0x100, 0x20, true, 0xe91ac399060a388c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif