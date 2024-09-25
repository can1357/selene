#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_BITMAP_RUN.StartingIndex", starting_index, 0x0, 0x20, true, 0xbfb6f68162d7f5fd)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_BITMAP_RUN.NumberOfBits", number_of_bits, 0x20, 0x20, true, 0x98fb52359e428cd5)
#else
#define _m00
#define _m01
#endif