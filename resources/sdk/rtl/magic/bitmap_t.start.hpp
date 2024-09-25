#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_BITMAP.SizeOfBitMap", size_of_bit_map, 0x0, 0x20, true, 0x4380d8c0c14c2c5f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t*), "_RTL_BITMAP.Buffer", buffer, 0x40, 0x40, true, 0x621d0e82c7725b57)
#else
#define _m00
#define _m01
#endif