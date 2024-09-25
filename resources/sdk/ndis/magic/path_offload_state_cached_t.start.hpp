#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::offload_state_header_t), "_PATH_OFFLOAD_STATE_CACHED.Header", header, 0x0, 0x40, true, 0x2cd78a3b539c8979)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PATH_OFFLOAD_STATE_CACHED.PathMtu", path_mtu, 0x40, 0x20, true, 0x5dc27e8c3185d57d)
#else
#define _m00
#define _m01
#endif