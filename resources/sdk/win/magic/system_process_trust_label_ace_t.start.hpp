#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::ace_header_t), "_SYSTEM_PROCESS_TRUST_LABEL_ACE.Header", header, 0x0, 0x20, true, 0x37f5b981ec029589)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PROCESS_TRUST_LABEL_ACE.Mask", mask, 0x20, 0x20, true, 0x15f1d1af76e7acbe)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PROCESS_TRUST_LABEL_ACE.SidStart", sid_start, 0x40, 0x20, true, 0x1e260fbe18f87c1f)
#else
#define _m00
#define _m01
#define _m02
#endif