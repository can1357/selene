#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_DSM_OFFLOAD_READ_PARAMETERS.Flags", flags, 0x0, 0x20, true, 0x76a7aceb2231c65c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_DSM_OFFLOAD_READ_PARAMETERS.TimeToLive", time_to_live, 0x20, 0x20, true, 0xcdbc5c82a041f9a)
#else
#define _m00
#define _m01
#endif