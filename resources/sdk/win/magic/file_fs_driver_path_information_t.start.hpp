#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_FILE_FS_DRIVER_PATH_INFORMATION.DriverInPath", driver_in_path, 0x0, 0x8, true, 0xbdb6aed54b652e34)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_FS_DRIVER_PATH_INFORMATION.DriverNameLength", driver_name_length, 0x20, 0x20, true, 0x29b0e9c485ed69ac)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_FILE_FS_DRIVER_PATH_INFORMATION.DriverName", driver_name, 0x40, 0x10, true, 0xe72e593be421c727)
#else
#define _m00
#define _m01
#define _m02
#endif