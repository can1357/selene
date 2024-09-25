#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_SWITCH_NIC_STATUS_INDICATION.Header", header, 0x0, 0x20, true, 0xc54eb365136486ff)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_SWITCH_NIC_STATUS_INDICATION.Flags", flags, 0x20, 0x20, true, 0x8b22c8ea83a41535)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_SWITCH_NIC_STATUS_INDICATION.SourcePortId", source_port_id, 0x40, 0x20, true, 0x4d59ef6a723d9e6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_SWITCH_NIC_STATUS_INDICATION.SourceNicIndex", source_nic_index, 0x60, 0x10, true, 0x6e487b50a48e13b3)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_SWITCH_NIC_STATUS_INDICATION.DestinationPortId", destination_port_id, 0x80, 0x20, true, 0x7af3551070db198f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_SWITCH_NIC_STATUS_INDICATION.DestinationNicIndex", destination_nic_index, 0xa0, 0x10, true, 0xe72d9b3ce73021a8)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::status_indication_t*), "_NDIS_SWITCH_NIC_STATUS_INDICATION.StatusIndication", status_indication, 0xc0, 0x40, true, 0x7b1c81eb14073e47)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif