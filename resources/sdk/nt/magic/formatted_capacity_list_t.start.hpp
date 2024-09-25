#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_FORMATTED_CAPACITY_LIST.CapacityListLength", capacity_list_length, 0x18, 0x8, true, 0x3abf1b6cae8e896a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::formatted_capacity_descriptor_t>), "_FORMATTED_CAPACITY_LIST.Descriptors", descriptors, 0x20, 0x0, true, 0xa2c65fdeda95be19)
#else
#define _m00
#define _m01
#endif