#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DUMP_DRIVER.DumpDriverList", dump_driver_list, 0x0, 0x40, true, 0x38135bc7dfb7d9e5)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 15>), "_DUMP_DRIVER.DriverName", driver_name, 0x40, 0xf0, true, 0x20d0d779794c4424)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 15>), "_DUMP_DRIVER.BaseName", base_name, 0x130, 0xf0, true, 0x854e4d783d40c2ad)
#else
#define _m00
#define _m01
#define _m02
#endif