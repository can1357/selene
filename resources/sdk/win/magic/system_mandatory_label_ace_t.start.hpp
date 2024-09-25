#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::ace_header_t), "_SYSTEM_MANDATORY_LABEL_ACE.Header", header, 0x0, 0x20, true, 0x3a27d02261a5788d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_MANDATORY_LABEL_ACE.Mask", mask, 0x20, 0x20, true, 0x3f98751ef676f6df)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_MANDATORY_LABEL_ACE.SidStart", sid_start, 0x40, 0x20, true, 0x1fe00d8784eb6ad7)
#else
#define _m00
#define _m01
#define _m02
#endif