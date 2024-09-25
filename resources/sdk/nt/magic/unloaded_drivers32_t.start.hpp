#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::ascii_view32), "_UNLOADED_DRIVERS32.Name", name, 0x0, 0x40, true, 0x1ae833511d2828a4)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_UNLOADED_DRIVERS32.StartAddress", start_address, 0x40, 0x20, true, 0x8ec609c80237c3f2)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_UNLOADED_DRIVERS32.EndAddress", end_address, 0x60, 0x20, true, 0x902a7d4bbcd63a3)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_UNLOADED_DRIVERS32.CurrentTime", current_time, 0x80, 0x40, true, 0x598e6a4b0444aab7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif