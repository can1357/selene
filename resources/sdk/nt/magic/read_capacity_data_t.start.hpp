#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_READ_CAPACITY_DATA.LogicalBlockAddress", logical_block_address, 0x0, 0x20, true, 0xf6e2f496f05aa9ff)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_READ_CAPACITY_DATA.BytesPerBlock", bytes_per_block, 0x20, 0x20, true, 0x64158bfaeba8205d)
#else
#define _m00
#define _m01
#endif