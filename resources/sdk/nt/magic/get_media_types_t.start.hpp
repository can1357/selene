#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_GET_MEDIA_TYPES.DeviceType", device_type, 0x0, 0x20, true, 0x44732ba2371d2091)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_GET_MEDIA_TYPES.MediaInfoCount", media_info_count, 0x20, 0x20, true, 0xd497922b888950e0)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::device_media_info_t, 1>), "_GET_MEDIA_TYPES.MediaInfo", media_info, 0x40, 0x0, true, 0xfbd5a5b2856edd50)
#else
#define _m00
#define _m01
#define _m02
#endif