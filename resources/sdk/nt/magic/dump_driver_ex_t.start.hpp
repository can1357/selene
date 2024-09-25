#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DUMP_DRIVER_EX.DumpDriverList", dump_driver_list, 0x0, 0x40, true, 0xf00aad6e9de53498)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 15>), "_DUMP_DRIVER_EX.DriverName", driver_name, 0x40, 0xf0, true, 0xea99ad56ec6d6822)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 15>), "_DUMP_DRIVER_EX.BaseName", base_name, 0x130, 0xf0, true, 0x4ca791998a954364)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::ntscsi_unicode_string_t), "_DUMP_DRIVER_EX.DriverFullPath", driver_full_path, 0x240, 0x80, true, 0xd485f77ba9ea2e3b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif