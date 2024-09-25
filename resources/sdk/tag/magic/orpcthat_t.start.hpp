#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagORPCTHAT.flags", flags, 0x0, 0x20, true, 0xc7fa77d90b6cb1ec)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::orpc_extent_array_t*), "tagORPCTHAT.extensions", extensions, 0x40, 0x40, true, 0x8e1eec8faa71d457)
#else
#define _m00
#define _m01
#endif