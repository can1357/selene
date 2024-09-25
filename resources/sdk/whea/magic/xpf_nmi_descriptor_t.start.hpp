#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_XPF_NMI_DESCRIPTOR.Type", type, 0x0, 0x10, true, 0xe36aa573124db385)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_XPF_NMI_DESCRIPTOR.Enabled", enabled, 0x10, 0x8, true, 0xf3b4b9c9b3916ae1)
#else
#define _m00
#define _m01
#endif