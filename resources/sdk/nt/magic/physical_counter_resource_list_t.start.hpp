#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PHYSICAL_COUNTER_RESOURCE_LIST.Count", count, 0x0, 0x20, true, 0xe7be8ab7752399cf)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::physical_counter_resource_descriptor_t, 1>), "_PHYSICAL_COUNTER_RESOURCE_LIST.Descriptors", descriptors, 0x40, 0xc0, true, 0xf762630c34b4ab3b)
#else
#define _m00
#define _m01
#endif