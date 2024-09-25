#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_NIC_SWITCH_PARAMETERS.Header", header, 0x0, 0x0, false, 0x66d8ab51786a31fb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_NIC_SWITCH_PARAMETERS.Flags", flags, 0x0, 0x0, false, 0x83572297dd7a8f08)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::nic_switch_type_t), "_NDIS_NIC_SWITCH_PARAMETERS.SwitchType", switch_type, 0x0, 0x0, false, 0x65f7ee2172cb6fb)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_NIC_SWITCH_PARAMETERS.SwitchId", switch_id, 0x0, 0x0, false, 0x23e95117b5144a8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::if_counted_string_lh_t), "_NDIS_NIC_SWITCH_PARAMETERS.SwitchFriendlyName", switch_friendly_name, 0x0, 0x0, false, 0x2d6ab02e9cd3dd3c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_NIC_SWITCH_PARAMETERS.NumVFs", num_v_fs, 0x0, 0x0, false, 0xa699b7c9004153aa)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_NIC_SWITCH_PARAMETERS.NdisReserved1", ndis_reserved1, 0x0, 0x0, false, 0x6bd623c52164cd96)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_NIC_SWITCH_PARAMETERS.NdisReserved2", ndis_reserved2, 0x0, 0x0, false, 0xf37d683746b04dc6)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_NIC_SWITCH_PARAMETERS.NdisReserved3", ndis_reserved3, 0x0, 0x0, false, 0x10caaf0d9b64f12d)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_NIC_SWITCH_PARAMETERS.NumQueuePairsForDefaultVPort", num_queue_pairs_for_default_v_port, 0x0, 0x0, false, 0x75cfc9223293a467)
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