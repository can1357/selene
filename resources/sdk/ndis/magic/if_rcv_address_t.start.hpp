#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::net_if_rcv_address_type_t), "_NDIS_IF_RCV_ADDRESS.ifRcvAddressType", if_rcv_address_type, 0x0, 0x0, false, 0xfba94775d2d8f33b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_IF_RCV_ADDRESS.ifRcvAddressLength", if_rcv_address_length, 0x0, 0x0, false, 0x6e7afebf5e567ce)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 32>), "_NDIS_IF_RCV_ADDRESS.ifRcvAddress", if_rcv_address, 0x0, 0x0, false, 0xdfd72eca3c32a54e)
#else
#define _m00
#define _m01
#define _m02
#endif