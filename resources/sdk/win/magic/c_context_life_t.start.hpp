#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CContextLife._dwAlive", dw_alive, 0x0, 0x20, true, 0x27c3edb6acc6bb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CContextLife._cRefs", c_refs, 0x20, 0x20, true, 0xfb1b98c1a536dd72)
#else
#define _m00
#define _m01
#endif