#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBP_SYSTEM_DOS_DEVICE_STATE.GlobalDeviceMap", global_device_map, 0x0, 0x20, true, 0xa4a749441599144f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 26>), "_OBP_SYSTEM_DOS_DEVICE_STATE.LocalDeviceCount", local_device_count, 0x20, 0x40, true, 0x1c4b2ef16c23c99e)
#else
#define _m00
#define _m01
#endif