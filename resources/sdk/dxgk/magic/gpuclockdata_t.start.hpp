#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_GPUCLOCKDATA.GpuFrequency", gpu_frequency, 0x0, 0x40, true, 0x814a354f428de77e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_GPUCLOCKDATA.GpuClockCounter", gpu_clock_counter, 0x40, 0x40, true, 0x19f5adedb0da8933)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_GPUCLOCKDATA.CpuClockCounter", cpu_clock_counter, 0x80, 0x40, true, 0xa7ac02186c960bd3)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::gpuclockdata_flags_t), "_DXGK_GPUCLOCKDATA.Flags", flags, 0xc0, 0x20, true, 0x29431249ada7c9c2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif