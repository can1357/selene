#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_CDROM_NOMINAL_PERFORMANCE_DESCRIPTOR.StartLba", start_lba, 0x0, 0x20, true, 0xa78d2f5ffd158737)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_CDROM_NOMINAL_PERFORMANCE_DESCRIPTOR.StartPerformance", start_performance, 0x20, 0x20, true, 0xaa8bd47df9b8a67)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_CDROM_NOMINAL_PERFORMANCE_DESCRIPTOR.EndLba", end_lba, 0x40, 0x20, true, 0xeaca585c6dec31f8)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_CDROM_NOMINAL_PERFORMANCE_DESCRIPTOR.EndPerformance", end_performance, 0x60, 0x20, true, 0x3dd18a644f8a64bb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif