#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_BITMAP_EX.SizeOfBitMap", size_of_bit_map, 0x0, 0x40, true, 0x615579d1b1b38c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t*), "_RTL_BITMAP_EX.Buffer", buffer, 0x40, 0x40, true, 0xca915a131026ce14)
#else
#define _m00
#define _m01
#endif