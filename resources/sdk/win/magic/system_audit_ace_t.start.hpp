#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::ace_header_t), "_SYSTEM_AUDIT_ACE.Header", header, 0x0, 0x20, true, 0x18d729768fe958e0)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_AUDIT_ACE.Mask", mask, 0x20, 0x20, true, 0xcad18d1eb5170a0)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_AUDIT_ACE.SidStart", sid_start, 0x40, 0x20, true, 0x72b147ae1fc0b245)
#else
#define _m00
#define _m01
#define _m02
#endif