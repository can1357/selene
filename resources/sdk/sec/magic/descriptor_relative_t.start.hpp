#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SECURITY_DESCRIPTOR_RELATIVE.Revision", revision, 0x0, 0x8, true, 0x3d66ee9aa2c98d86)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SECURITY_DESCRIPTOR_RELATIVE.Sbz1", sbz1, 0x8, 0x8, true, 0x351d7abce3178615)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_SECURITY_DESCRIPTOR_RELATIVE.Control", control, 0x10, 0x10, true, 0x9d31fdf1ebce3309)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SECURITY_DESCRIPTOR_RELATIVE.Owner", owner, 0x20, 0x20, true, 0x75559f9cfeb92972)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SECURITY_DESCRIPTOR_RELATIVE.Group", group, 0x40, 0x20, true, 0xdcf9bc3b173226b)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SECURITY_DESCRIPTOR_RELATIVE.Sacl", sacl, 0x60, 0x20, true, 0xbc7756eead5f05fc)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SECURITY_DESCRIPTOR_RELATIVE.Dacl", dacl, 0x80, 0x20, true, 0xb191546d00c15261)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif