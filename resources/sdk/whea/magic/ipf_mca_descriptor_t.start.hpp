#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_IPF_MCA_DESCRIPTOR.Type", type, 0x0, 0x10, true, 0x5824023d14ee066)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_IPF_MCA_DESCRIPTOR.Enabled", enabled, 0x10, 0x8, true, 0x5dd126e037f4da51)
#else
#define _m00
#define _m01
#endif