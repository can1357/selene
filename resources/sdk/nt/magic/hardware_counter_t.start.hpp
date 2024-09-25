#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::hardware_counter_type_t), "_HARDWARE_COUNTER.Type", type, 0x0, 0x20, true, 0xd8efc188cf2f792d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_HARDWARE_COUNTER.Index", index, 0x40, 0x40, true, 0x58c472257da9e012)
#else
#define _m00
#define _m01
#endif