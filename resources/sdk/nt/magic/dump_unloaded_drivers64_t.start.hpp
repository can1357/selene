#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::ascii_view), "_DUMP_UNLOADED_DRIVERS64.Name", name, 0x0, 0x80, true, 0x9cafa9e11254e76c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 12>), "_DUMP_UNLOADED_DRIVERS64.DriverName", driver_name, 0x80, 0xc0, true, 0x7d589ea0512a48ab)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DUMP_UNLOADED_DRIVERS64.StartAddress", start_address, 0x140, 0x40, true, 0x39d62db5f2391b1)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DUMP_UNLOADED_DRIVERS64.EndAddress", end_address, 0x180, 0x40, true, 0x827058ce26d6dff9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif