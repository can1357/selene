#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 2>), "_NDIS_PACKET_STACK.IMReserved", im_reserved, 0x0, 0x80, true, 0x4e5dfea53a49dc08)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 4>), "_NDIS_PACKET_STACK.NdisReserved", ndis_reserved, 0x80, 0x0, true, 0xc4189a46371fa9d9)
#else
#define _m00
#define _m01
#endif