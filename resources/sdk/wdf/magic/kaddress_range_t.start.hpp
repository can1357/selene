#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_KADDRESS_RANGE.Address", address, 0x0, 0x40, true, 0x5893b097e654a389)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_KADDRESS_RANGE.Size", size, 0x40, 0x40, true, 0xf3e90c9e01fa6662)
#else
#define _m00
#define _m01
#endif