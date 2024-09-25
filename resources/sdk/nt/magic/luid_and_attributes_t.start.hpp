#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_LUID_AND_ATTRIBUTES.Luid", luid, 0x0, 0x40, true, 0x86f5353c15423711)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_LUID_AND_ATTRIBUTES.Attributes", attributes, 0x40, 0x20, true, 0x8c3a31a81e96a626)
#else
#define _m00
#define _m01
#endif