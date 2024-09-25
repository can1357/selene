#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_GROUP_AFFINITY.Mask", mask, 0x0, 0x40, true, 0x293fd73022391d42)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_GROUP_AFFINITY.Group", group, 0x40, 0x10, true, 0xfeb546b63aabf7)
#else
#define _m00
#define _m01
#endif