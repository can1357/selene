#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_MODE_DISCONNECT_PAGE.PageCode", page_code, 0x0, 0x6, true, 0xfa40c47f97ddcba8, 6, uint8_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_DISCONNECT_PAGE.PageSavable", page_savable, 0x7, 0x1, true, 0xb9b57ffacd8806eb, 1, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MODE_DISCONNECT_PAGE.PageLength", page_length, 0x8, 0x8, true, 0xaa2b7412c513264f)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MODE_DISCONNECT_PAGE.BufferFullRatio", buffer_full_ratio, 0x10, 0x8, true, 0xe024b3c5aaf88338)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MODE_DISCONNECT_PAGE.BufferEmptyRatio", buffer_empty_ratio, 0x18, 0x8, true, 0xe496097702a90006)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_MODE_DISCONNECT_PAGE.BusInactivityLimit", bus_inactivity_limit, 0x20, 0x10, true, 0x5ac38b7d3b90599a)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_MODE_DISCONNECT_PAGE.BusDisconnectTime", bus_disconnect_time, 0x30, 0x10, true, 0x168a79499465e6e)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_MODE_DISCONNECT_PAGE.BusConnectTime", bus_connect_time, 0x40, 0x10, true, 0xe3a10f9b119e64ef)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_MODE_DISCONNECT_PAGE.MaximumBurstSize", maximum_burst_size, 0x50, 0x10, true, 0x5f7aae4477e9dce)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_MODE_DISCONNECT_PAGE.DataTransferDisconnect", data_transfer_disconnect, 0x60, 0x2, true, 0x4c27ec363c051f1c, 2, uint8_t)
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