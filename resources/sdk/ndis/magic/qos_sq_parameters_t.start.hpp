#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_QOS_SQ_PARAMETERS.Header", header, 0x0, 0x20, true, 0x803e70b23f45534)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_QOS_SQ_PARAMETERS.Flags", flags, 0x20, 0x20, true, 0xe74ddaacab1e2c53)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_QOS_SQ_PARAMETERS.SqId", sq_id, 0x40, 0x20, true, 0x78c66a6fff58e2c3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::qos_sq_type_t), "_NDIS_QOS_SQ_PARAMETERS.SqType", sq_type, 0x60, 0x20, true, 0x8560d9ef59a3b47b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_NDIS_QOS_SQ_PARAMETERS.TcEnabledTable", tc_enabled_table, 0x80, 0x40, true, 0xc7193f52a40f92ff)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 8>), "_NDIS_QOS_SQ_PARAMETERS.TcTransmitBandwidthCapTable", tc_transmit_bandwidth_cap_table, 0xc0, 0x0, true, 0x48e5f3701081bd45)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 8>), "_NDIS_QOS_SQ_PARAMETERS.TcTransmitBandwidthReservationTable", tc_transmit_bandwidth_reservation_table, 0x1c0, 0x0, true, 0xd4a2db23f0be749e)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 8>), "_NDIS_QOS_SQ_PARAMETERS.TcReceiveBandwidthCapTable", tc_receive_bandwidth_cap_table, 0x2c0, 0x0, true, 0x842ebc7748143b02)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_QOS_SQ_PARAMETERS.CrossTcTransmitBandwidthCap", cross_tc_transmit_bandwidth_cap, 0x3c0, 0x20, true, 0x3dd65b190340f66a)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_QOS_SQ_PARAMETERS.MaxNumSqInputs", max_num_sq_inputs, 0x3e0, 0x20, true, 0xb68343b331938fe1)
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