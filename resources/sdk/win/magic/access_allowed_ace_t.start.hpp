#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::ace_header_t), "_ACCESS_ALLOWED_ACE.Header", header, 0x0, 0x20, true, 0xbc0f04fb6b80826b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACCESS_ALLOWED_ACE.Mask", mask, 0x20, 0x20, true, 0x5309a08f51212863)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACCESS_ALLOWED_ACE.SidStart", sid_start, 0x40, 0x20, true, 0xb6bd7014133445d0)
#else
#define _m00
#define _m01
#define _m02
#endif