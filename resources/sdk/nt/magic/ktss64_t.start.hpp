#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KTSS64.Rsp0", rsp0, 0x20, 0x40, true, 0xd8902ac921e21a8f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KTSS64.Rsp1", rsp1, 0x60, 0x40, true, 0x9d9df65a7f12214a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KTSS64.Rsp2", rsp2, 0xa0, 0x40, true, 0xcc36a3402f790d2a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 8>), "_KTSS64.Ist", ist, 0xe0, 0x0, true, 0x3ca935df4b36e23c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_KTSS64.IoMapBase", io_map_base, 0x330, 0x10, true, 0x7e4d0a82ab3808fe)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif