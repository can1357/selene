#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DEVICE_NUMBERS.Version", version, 0x0, 0x20, true, 0x77e1920fe88e7ba0)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DEVICE_NUMBERS.Size", size, 0x20, 0x20, true, 0xefa4b89cef0b7272)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DEVICE_NUMBERS.NumberOfDevices", number_of_devices, 0x40, 0x20, true, 0x2c29991f4e7830dc)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::storage_device_number_t, 1>), "_STORAGE_DEVICE_NUMBERS.Devices", devices, 0x60, 0x60, true, 0x9f21789ed7a3d040)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif