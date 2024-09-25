#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_DRIVER_ENTRY32.DriverNameOffset", driver_name_offset, 0x0, 0x20, true, 0xa3c5614783c04010)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_DUMP_DRIVER_ENTRY32.LdrEntry", ldr_entry, 0x20, 0x8, true, 0xa1e0b13d99c57f54)
#else
#define _m00
#define _m01
#endif