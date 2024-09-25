#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_RESOURCE_LIST.Count", count, 0x0, 0x20, true, 0x7f9b822382d983c2)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct cm::full_resource_descriptor_t, 1>), "_CM_RESOURCE_LIST.List", list, 0x20, 0x20, true, 0x191a4906ce6569ee)
#else
#define _m00
#define _m01
#endif