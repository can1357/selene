#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DEVICE_POWER_CAP.Version", version, 0x0, 0x20, true, 0xff8bbc51691029b0)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DEVICE_POWER_CAP.Size", size, 0x20, 0x20, true, 0x46a29d63fd1db534)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::storage_device_power_cap_units_t), "_STORAGE_DEVICE_POWER_CAP.Units", units, 0x40, 0x20, true, 0xe49e68d0a2eab6f0)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_STORAGE_DEVICE_POWER_CAP.MaxPower", max_power, 0x80, 0x40, true, 0xbc30e3d24cbc8696)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif