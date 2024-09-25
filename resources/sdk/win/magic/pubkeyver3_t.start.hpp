#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PUBKEYVER3.magic", magic, 0x0, 0x20, true, 0x5e6ce7314a7c03e9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PUBKEYVER3.bitlenP", bitlen_p, 0x20, 0x20, true, 0x97d72d0e7b6c25c1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PUBKEYVER3.bitlenQ", bitlen_q, 0x40, 0x20, true, 0x235017fb5ef58af9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PUBKEYVER3.bitlenJ", bitlen_j, 0x60, 0x20, true, 0xc5623ad0cef243ef)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::dssseed_t), "_PUBKEYVER3.DSSSeed", dss_seed, 0x80, 0xc0, true, 0x3d49ab66532621ad)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif