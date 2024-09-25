#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_REDIRECTION_SUPPORT.Dpc", dpc, 0x0, 0x1, true, 0xdeffcebfc5e8a2b2, 1, uint16_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_REDIRECTION_SUPPORT.Interrupt", interrupt, 0x1, 0x1, true, 0x1a2008b89a8be5d7, 1, uint16_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint14_t), "_RAID_REDIRECTION_SUPPORT.MessageCount", message_count, 0x2, 0x8, true, 0x555a6f430e46dba3, 0, uint16_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_RAID_REDIRECTION_SUPPORT.AsUshort", as_ushort, 0x0, 0x10, true, 0x7f2d509645a03111)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif