#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USB_PORT_EXT_STATUS.AsUlong32", as_ulong32, 0x0, 0x20, true, 0xbec05c288b21bae3)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_USB_PORT_EXT_STATUS.RxSublinkSpeedID", rx_sublink_speed_id, 0x0, 0x4, true, 0x9d244f595a05dd87, 4, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_USB_PORT_EXT_STATUS.TxSublinkSpeedID", tx_sublink_speed_id, 0x4, 0x4, true, 0x96169c4ce77c46f0, 4, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_USB_PORT_EXT_STATUS.RxLaneCount", rx_lane_count, 0x8, 0x4, true, 0x85889466de5cd0f6, 4, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_USB_PORT_EXT_STATUS.TxLaneCount", tx_lane_count, 0xc, 0x4, true, 0x62e959cbc404443f, 4, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif