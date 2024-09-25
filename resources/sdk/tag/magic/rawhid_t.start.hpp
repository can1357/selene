#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRAWHID.dwSizeHid", dw_size_hid, 0x0, 0x20, true, 0x69deef99c97d67ee)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRAWHID.dwCount", dw_count, 0x20, 0x20, true, 0x5efce7e84b841af)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "tagRAWHID.bRawData", b_raw_data, 0x40, 0x8, true, 0x3fe42c05b34934ba)
#else
#define _m00
#define _m01
#define _m02
#endif