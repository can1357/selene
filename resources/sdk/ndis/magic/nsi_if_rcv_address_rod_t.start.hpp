#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::net_if_rcv_address_type_t), "_NDIS_NSI_IF_RCV_ADDRESS_ROD.ifRcvAddressType", if_rcv_address_type, 0x0, 0x0, false, 0xa2f8bb8c03b338d5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_NSI_IF_RCV_ADDRESS_ROD.ifRcvAddressLength", if_rcv_address_length, 0x0, 0x0, false, 0xfdb926f0c6fbfe11)
#else
#define _m00
#define _m01
#endif