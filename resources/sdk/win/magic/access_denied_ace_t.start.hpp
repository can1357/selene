#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::ace_header_t), "_ACCESS_DENIED_ACE.Header", header, 0x0, 0x20, true, 0xa79dc5c5a5b25284)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACCESS_DENIED_ACE.Mask", mask, 0x20, 0x20, true, 0x97186af5104883a4)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACCESS_DENIED_ACE.SidStart", sid_start, 0x40, 0x20, true, 0xdfc58a9bb6f8ff99)
#else
#define _m00
#define _m01
#define _m02
#endif