#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PRIVKEYVER3.magic", magic, 0x0, 0x20, true, 0xb5f38f890579ea68)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PRIVKEYVER3.bitlenP", bitlen_p, 0x20, 0x20, true, 0x85448f686d1be1b1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PRIVKEYVER3.bitlenQ", bitlen_q, 0x40, 0x20, true, 0x4eee6ece0d3e7c4d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PRIVKEYVER3.bitlenJ", bitlen_j, 0x60, 0x20, true, 0x261f75631cdfacfd)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PRIVKEYVER3.bitlenX", bitlen_x, 0x80, 0x20, true, 0x754db010b2a62ddc)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::dssseed_t), "_PRIVKEYVER3.DSSSeed", dss_seed, 0xa0, 0xc0, true, 0x37fbf28fdb6f16a1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif