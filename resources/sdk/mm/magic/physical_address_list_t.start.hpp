#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_MM_PHYSICAL_ADDRESS_LIST.PhysicalAddress", physical_address, 0x0, 0x40, true, 0xf04f52339b76bc03)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_MM_PHYSICAL_ADDRESS_LIST.NumberOfBytes", number_of_bytes, 0x40, 0x40, true, 0xfeb7539d06840cc8)
#else
#define _m00
#define _m01
#endif