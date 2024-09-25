#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DXGK_PHYSICAL_MEMORY_RANGE.BaseAddress", base_address, 0x0, 0x40, true, 0xb9b3756371762198)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DXGK_PHYSICAL_MEMORY_RANGE.NumberOfBytes", number_of_bytes, 0x40, 0x40, true, 0xe8c676c398ca71b1)
#else
#define _m00
#define _m01
#endif