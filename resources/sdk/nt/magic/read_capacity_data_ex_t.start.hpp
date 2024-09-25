#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_READ_CAPACITY_DATA_EX.LogicalBlockAddress", logical_block_address, 0x0, 0x40, true, 0xba7a855c2fb84a2d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_READ_CAPACITY_DATA_EX.BytesPerBlock", bytes_per_block, 0x40, 0x20, true, 0xd36b8f8292f54cf1)
#else
#define _m00
#define _m01
#endif