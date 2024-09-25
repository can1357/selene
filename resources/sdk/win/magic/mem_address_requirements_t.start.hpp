#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_MEM_ADDRESS_REQUIREMENTS.LowestStartingAddress", lowest_starting_address, 0x0, 0x40, true, 0x8761c7a2c0620bc)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_MEM_ADDRESS_REQUIREMENTS.HighestEndingAddress", highest_ending_address, 0x40, 0x40, true, 0x9a4ef47c56466dea)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEM_ADDRESS_REQUIREMENTS.Alignment", alignment, 0x80, 0x40, true, 0xb97ac3e2740102c3)
#else
#define _m00
#define _m01
#define _m02
#endif