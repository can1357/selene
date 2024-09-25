#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::ascii_view), "_UNLOADED_DRIVERS64.Name", name, 0x0, 0x80, true, 0x15655196e3c856a3)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_UNLOADED_DRIVERS64.StartAddress", start_address, 0x80, 0x40, true, 0x8bafda03c597dcb6)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_UNLOADED_DRIVERS64.EndAddress", end_address, 0xc0, 0x40, true, 0x3e79350ab7f84143)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_UNLOADED_DRIVERS64.CurrentTime", current_time, 0x100, 0x40, true, 0x515d65304c5f14d7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif