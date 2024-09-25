#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PHYSICAL_MEMORY_DESCRIPTOR.NumberOfRuns", number_of_runs, 0x0, 0x20, true, 0x2b89eb9663231131)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_PHYSICAL_MEMORY_DESCRIPTOR.NumberOfPages", number_of_pages, 0x40, 0x40, true, 0xcddee1779a97162c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::physical_memory_run_t, 1>), "_PHYSICAL_MEMORY_DESCRIPTOR.Run", run, 0x80, 0x80, true, 0xa209b8dde21a993)
#else
#define _m00
#define _m01
#define _m02
#endif