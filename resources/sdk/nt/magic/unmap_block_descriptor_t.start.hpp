#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_UNMAP_BLOCK_DESCRIPTOR.StartingLba", starting_lba, 0x0, 0x40, true, 0x4dbc31aa7f73ef8c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_UNMAP_BLOCK_DESCRIPTOR.LbaCount", lba_count, 0x40, 0x20, true, 0xe3cf58693cf55803)
#else
#define _m00
#define _m01
#endif