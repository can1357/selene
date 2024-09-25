#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_RELATIONS.Count", count, 0x0, 0x20, true, 0xfd79630a284b2fe4)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::device_object_t*, 1>), "_DEVICE_RELATIONS.Objects", objects, 0x40, 0x40, true, 0x5d54f4c26c85af88)
#else
#define _m00
#define _m01
#endif