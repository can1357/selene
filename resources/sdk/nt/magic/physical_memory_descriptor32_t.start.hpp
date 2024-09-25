#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PHYSICAL_MEMORY_DESCRIPTOR32.NumberOfRuns", number_of_runs, 0x0, 0x20, true, 0x7d617a01ade7cf07)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PHYSICAL_MEMORY_DESCRIPTOR32.NumberOfPages", number_of_pages, 0x20, 0x20, true, 0x698fd829424d8c05)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::physical_memory_run32_t, 1>), "_PHYSICAL_MEMORY_DESCRIPTOR32.Run", run, 0x40, 0x40, true, 0xe8d9f1aad1e3463d)
#else
#define _m00
#define _m01
#define _m02
#endif