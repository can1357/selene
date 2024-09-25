#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PHYSICAL_EXTENTS_DESCRIPTOR.NumberOfRuns", number_of_runs, 0x0, 0x20, true, 0xd9f52cd7dbc73e10)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PHYSICAL_EXTENTS_DESCRIPTOR.NumberOfValidRuns", number_of_valid_runs, 0x20, 0x20, true, 0x29146e92f1b5e8db)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::physical_memory_run_t, 1>), "_PHYSICAL_EXTENTS_DESCRIPTOR.Run", run, 0x40, 0x80, true, 0x81e010dbca984a66)
#else
#define _m00
#define _m01
#define _m02
#endif