#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_NETWORK_OPEN_ECP_CONTEXT.Size", size, 0x0, 0x10, true, 0xd042428a39cc45a9)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u1_location_t), "_NETWORK_OPEN_ECP_CONTEXT.in.Location", location, 0x0, 0x20, true, 0x5708cdaf247526c8)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u2_integrity_t), "_NETWORK_OPEN_ECP_CONTEXT.in.Integrity", integrity, 0x20, 0x20, true, 0x377f6525747b7149)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NETWORK_OPEN_ECP_CONTEXT.in.Flags", flags, 0x40, 0x20, true, 0xa2b68c0b180803d6)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_in_t), "_NETWORK_OPEN_ECP_CONTEXT.in", in, 0x20, 0x60, true, 0x974ce098a9057115)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u1_location_t), "_NETWORK_OPEN_ECP_CONTEXT.out.Location", location, 0x0, 0x20, true, 0xde01eaef7233782f)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u2_integrity_t), "_NETWORK_OPEN_ECP_CONTEXT.out.Integrity", integrity, 0x20, 0x20, true, 0x6aa58bdac590220c)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NETWORK_OPEN_ECP_CONTEXT.out.Flags", flags, 0x40, 0x20, true, 0xa650a7e923937c58)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_in_t), "_NETWORK_OPEN_ECP_CONTEXT.out", out, 0x80, 0x60, true, 0x3b5c4fc3f6335b30)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif