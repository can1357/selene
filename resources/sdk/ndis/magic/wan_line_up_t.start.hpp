#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_LINE_UP.LinkSpeed", link_speed, 0x0, 0x20, true, 0x8ca861333560230d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_LINE_UP.MaximumTotalSize", maximum_total_size, 0x20, 0x20, true, 0xd03cc5b225877bf7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::wan_quality_t), "_NDIS_WAN_LINE_UP.Quality", quality, 0x40, 0x20, true, 0x9bcf0b64badffe0b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_WAN_LINE_UP.SendWindow", send_window, 0x60, 0x10, true, 0xbcb6a2772ca97b93)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 6>), "_NDIS_WAN_LINE_UP.RemoteAddress", remote_address, 0x70, 0x30, true, 0x76300e3df18eb2b6)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 6>), "_NDIS_WAN_LINE_UP.LocalAddress", local_address, 0xa0, 0x30, true, 0xff3f7c278f52128f)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_LINE_UP.ProtocolBufferLength", protocol_buffer_length, 0xe0, 0x20, true, 0xad0b438282fbe2de)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_NDIS_WAN_LINE_UP.ProtocolBuffer", protocol_buffer, 0x100, 0x40, true, 0x66e92f3180f6a59c)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_WAN_LINE_UP.ProtocolType", protocol_type, 0x140, 0x10, true, 0xd64f9fdd2d4479e6)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_NDIS_WAN_LINE_UP.DeviceName", device_name, 0x180, 0x80, true, 0xe586af68dd5c1c55)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#endif