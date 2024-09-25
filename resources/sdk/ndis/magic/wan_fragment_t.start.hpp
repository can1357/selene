#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 6>), "_NDIS_WAN_FRAGMENT.RemoteAddress", remote_address, 0x0, 0x30, true, 0x829e2ddedfcb3051)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 6>), "_NDIS_WAN_FRAGMENT.LocalAddress", local_address, 0x30, 0x30, true, 0x3c6f7f8262521ec1)
#else
#define _m00
#define _m01
#endif