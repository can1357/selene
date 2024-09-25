#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_GET_DISK_ATTRIBUTES.Version", version, 0x0, 0x20, true, 0x7066e796e5aed083)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_GET_DISK_ATTRIBUTES.Attributes", attributes, 0x40, 0x40, true, 0xf79cac6c4651f101)
#else
#define _m00
#define _m01
#endif