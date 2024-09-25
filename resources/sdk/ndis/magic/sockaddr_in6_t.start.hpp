#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "sockaddr_in6.sin6_family", sin6_family, 0x0, 0x10, true, 0x44e1febc2210b1d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "sockaddr_in6.sin6_port", sin6_port, 0x10, 0x10, true, 0xf4cf9a108c82a646)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "sockaddr_in6.sin6_flowinfo", sin6_flowinfo, 0x20, 0x20, true, 0x45570d6beed0cc4f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::in6_addr_t), "sockaddr_in6.sin6_addr", sin6_addr, 0x40, 0x80, true, 0x1631a68e64b047b8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "sockaddr_in6.sin6_scope_id", sin6_scope_id, 0xc0, 0x20, true, 0x141a9554dcb506f6)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::scope_id_t), "sockaddr_in6.sin6_scope_struct", sin6_scope_struct, 0xc0, 0x20, true, 0x5112fa0d3c8d8de0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif