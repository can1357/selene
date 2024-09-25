#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PHYSICAL_MEMORY_DESCRIPTOR64.NumberOfRuns", number_of_runs, 0x0, 0x20, true, 0xc8a5d07bc75a9d13)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_PHYSICAL_MEMORY_DESCRIPTOR64.NumberOfPages", number_of_pages, 0x40, 0x40, true, 0x40631e98fb42bc59)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::physical_memory_run64_t, 1>), "_PHYSICAL_MEMORY_DESCRIPTOR64.Run", run, 0x80, 0x80, true, 0xa3b73c53f339114)
#else
#define _m00
#define _m01
#define _m02
#endif