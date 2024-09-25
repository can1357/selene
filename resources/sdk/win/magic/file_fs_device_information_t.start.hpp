#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_FS_DEVICE_INFORMATION.DeviceType", device_type, 0x0, 0x20, true, 0x263bc4afe29d6d9d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_FS_DEVICE_INFORMATION.Characteristics", characteristics, 0x20, 0x20, true, 0x159e79647b64a9d1)
#else
#define _m00
#define _m01
#endif