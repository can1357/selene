#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ADDITIONAL_FDO_DATA.DeviceGuidFlags", device_guid_flags, 0x0, 0x20, true, 0x9d1695f916489168)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_ADDITIONAL_FDO_DATA.DeviceGuid", device_guid, 0x20, 0x80, true, 0x21b83ca8a80b2669)
#else
#define _m00
#define _m01
#endif