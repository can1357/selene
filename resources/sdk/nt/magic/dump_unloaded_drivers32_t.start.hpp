#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::ascii_view32), "_DUMP_UNLOADED_DRIVERS32.Name", name, 0x0, 0x40, true, 0x959a45397d58c654)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 12>), "_DUMP_UNLOADED_DRIVERS32.DriverName", driver_name, 0x40, 0xc0, true, 0x53616001c9e3c494)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_UNLOADED_DRIVERS32.StartAddress", start_address, 0x100, 0x20, true, 0xac765db16b312cf)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_UNLOADED_DRIVERS32.EndAddress", end_address, 0x120, 0x20, true, 0xcabc4ccafe8a6c66)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif