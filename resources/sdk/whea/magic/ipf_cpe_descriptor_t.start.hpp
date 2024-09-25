#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_IPF_CPE_DESCRIPTOR.Type", type, 0x0, 0x10, true, 0xb458e4424c7eac2)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_IPF_CPE_DESCRIPTOR.Enabled", enabled, 0x10, 0x8, true, 0x1ce96885a289b649)
#else
#define _m00
#define _m01
#endif