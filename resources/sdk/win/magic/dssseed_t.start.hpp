#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DSSSEED.counter", counter, 0x0, 0x20, true, 0x4c70f30c1fe91e17)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 20>), "_DSSSEED.seed", seed, 0x20, 0xa0, true, 0xe19ed3581a596dea)
#else
#define _m00
#define _m01
#endif