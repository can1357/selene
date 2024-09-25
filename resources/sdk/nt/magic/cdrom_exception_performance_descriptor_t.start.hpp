#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_CDROM_EXCEPTION_PERFORMANCE_DESCRIPTOR.Lba", lba, 0x0, 0x20, true, 0xd8a4a4d9b6f8b31e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_CDROM_EXCEPTION_PERFORMANCE_DESCRIPTOR.Time", time, 0x20, 0x10, true, 0x916ebfe210267b8b)
#else
#define _m00
#define _m01
#endif