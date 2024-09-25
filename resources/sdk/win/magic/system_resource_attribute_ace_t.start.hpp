#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::ace_header_t), "_SYSTEM_RESOURCE_ATTRIBUTE_ACE.Header", header, 0x0, 0x20, true, 0x13c737f4f893024e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_RESOURCE_ATTRIBUTE_ACE.Mask", mask, 0x20, 0x20, true, 0x7cc02b4789dcf75d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_RESOURCE_ATTRIBUTE_ACE.SidStart", sid_start, 0x40, 0x20, true, 0xdea34efc6f97b495)
#else
#define _m00
#define _m01
#define _m02
#endif