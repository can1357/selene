#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::ace_header_t), "_SYSTEM_ACCESS_FILTER_ACE.Header", header, 0x0, 0x20, true, 0xee1002a8f97764d1)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_ACCESS_FILTER_ACE.Mask", mask, 0x20, 0x20, true, 0xed123fba34b831b7)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_ACCESS_FILTER_ACE.SidStart", sid_start, 0x40, 0x20, true, 0xd681bfa44978fe60)
#else
#define _m00
#define _m01
#define _m02
#endif