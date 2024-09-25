#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 6>), "_NDIS_WAN_LINE_DOWN.RemoteAddress", remote_address, 0x0, 0x30, true, 0x688cd1b80df3fd1c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 6>), "_NDIS_WAN_LINE_DOWN.LocalAddress", local_address, 0x30, 0x30, true, 0x137258ae355f167c)
#else
#define _m00
#define _m01
#endif