#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmsecure_flags_t), "_MMADDRESS_LIST.Flags", flags, 0x0, 0x20, true, 0xff597b7bd4831117)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MMADDRESS_LIST.FlagsLong", flags_long, 0x0, 0x20, true, 0xf893e0ab21ee411c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MMADDRESS_LIST.StartVa", start_va, 0x0, 0x40, true, 0x26d25b10b5a26f88)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MMADDRESS_LIST.EndVa", end_va, 0x40, 0x40, true, 0x13c3c660bbadcae9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif