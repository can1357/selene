#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_COMMPROP.wPacketLength", w_packet_length, 0x0, 0x10, true, 0x6611453c8aa1a6c5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_COMMPROP.wPacketVersion", w_packet_version, 0x10, 0x10, true, 0xd48f521dddf4e9e5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_COMMPROP.dwServiceMask", dw_service_mask, 0x20, 0x20, true, 0x1cac16fc0c0ae218)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_COMMPROP.dwReserved1", dw_reserved1, 0x40, 0x20, true, 0x8f1eb17e8226cb8a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_COMMPROP.dwMaxTxQueue", dw_max_tx_queue, 0x60, 0x20, true, 0x8d712c08e9020942)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_COMMPROP.dwMaxRxQueue", dw_max_rx_queue, 0x80, 0x20, true, 0x2548310193fce780)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_COMMPROP.dwMaxBaud", dw_max_baud, 0xa0, 0x20, true, 0x6bd696cc78639169)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_COMMPROP.dwProvSubType", dw_prov_sub_type, 0xc0, 0x20, true, 0xbc2fd2f368b8a27)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_COMMPROP.dwProvCapabilities", dw_prov_capabilities, 0xe0, 0x20, true, 0xc40d909057187944)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_COMMPROP.dwSettableParams", dw_settable_params, 0x100, 0x20, true, 0xb56b49f98eda0cec)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_COMMPROP.dwSettableBaud", dw_settable_baud, 0x120, 0x20, true, 0x4bcf967d1314302b)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_COMMPROP.wSettableData", w_settable_data, 0x140, 0x10, true, 0xd2910b379e07a1c7)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_COMMPROP.wSettableStopParity", w_settable_stop_parity, 0x150, 0x10, true, 0x99bb7462184c897)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_COMMPROP.dwCurrentTxQueue", dw_current_tx_queue, 0x160, 0x20, true, 0x544b871c250703d4)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_COMMPROP.dwCurrentRxQueue", dw_current_rx_queue, 0x180, 0x20, true, 0x8e67d50d1bc2bd8d)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_COMMPROP.dwProvSpec1", dw_prov_spec1, 0x1a0, 0x20, true, 0xc48903a015e402d7)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_COMMPROP.dwProvSpec2", dw_prov_spec2, 0x1c0, 0x20, true, 0x3b10a10627ea657f)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_COMMPROP.wcProvChar", wc_prov_char, 0x1e0, 0x10, true, 0xd7f24e5a57b3e7fe)
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
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#endif