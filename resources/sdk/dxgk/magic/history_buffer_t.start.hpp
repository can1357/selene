#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::history_buffer_header_t), "_DXGK_HISTORY_BUFFER.Header", header, 0x0, 0x80, true, 0x8fa74e677b3194ad)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_DXGK_HISTORY_BUFFER.DriverPrivateData", driver_private_data, 0x80, 0x8, true, 0xca0ee97f8ac3afe5)
#else
#define _m00
#define _m01
#endif